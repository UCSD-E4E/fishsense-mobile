import 'dart:async';
import 'dart:typed_data';
import 'package:flutter/foundation.dart' show visibleForTesting;
import 'package:sqflite/sqflite.dart';
import 'package:path/path.dart';
import 'package:path_provider/path_provider.dart';
import 'package:uuid/uuid.dart';
import 'models.dart';
import 'logger.dart';
import 'services/file_storage_service.dart';

/// DatabaseModel - Handles all SQLite operations
/// Direct translation from Swift/FishSense/Models/DatabaseModel.swift
class DatabaseModel {
  static Database? _database;
  static const String _databaseName = 'database.sqlite';
  static const String _tableName = 'photos';
  static const String _measurementsTable = 'measurements';

  /// v8: capture provenance for sync (UUIDs, versions, strides, pose,
  /// lossless frame) and measurement versions.
  /// v9: `sync_error` on photos and measurements.
  static const int schemaVersion = 9;

  static final StreamController<void> _changes = StreamController<void>.broadcast();

  /// Fires after a capture is saved or a measurement version is added: new
  /// work for sync.
  static Stream<void> get changes => _changes.stream;

  /// Singleton pattern - get database instance
  static Future<Database> get database async {
    if (_database != null) return _database!;
    _database = await _createDatabase();
    return _database!;
  }

  /// Create database - equivalent to Swift createDatabase()
  static Future<Database> _createDatabase() async {
    final documentsDirectory = await getApplicationDocumentsDirectory();
    final databasePath = join(documentsDirectory.path, _databaseName);
    
    return await openDatabase(
      databasePath,
      version: schemaVersion,
      onConfigure: configure,
      onCreate: createTables,
      onUpgrade: upgradeTables, // Handle schema upgrades
    );
  }

  /// Use [db] in place of the app's database file. For tests, which open
  /// an in-memory database with the same callbacks.
  @visibleForTesting
  static void useDatabaseForTesting(Database? db) => _database = db;

  /// Per-connection setup: measurement versions cascade-delete with their
  /// photo, which SQLite only enforces with foreign keys switched on.
  static Future<void> configure(Database db) async {
    await db.execute('PRAGMA foreign_keys = ON');
  }

  /// Create tables - equivalent to Swift createTables()
  static Future<void> createTables(Database db, int version) async {
    await _createPhotosTable(db);
    await _createMeasurementsTable(db);
  }

  /// Handle database schema upgrades
  static Future<void> upgradeTables(Database db, int oldVersion, int newVersion) async {
    if (oldVersion < 2) {
      // Add device_info column for version 2
      await db.execute('ALTER TABLE photos ADD COLUMN device_info TEXT');
    }
    if (oldVersion < 3) {
      // Add fish_length column for version 3
      await db.execute('ALTER TABLE photos ADD COLUMN fish_length REAL');
    }
    if (oldVersion < 4) {
      // v4: persist segmentation mask, snout/fork points, capture orientation
      await db.execute('ALTER TABLE photos ADD COLUMN mask_bytes BLOB');
      await db.execute('ALTER TABLE photos ADD COLUMN mask_width INTEGER');
      await db.execute('ALTER TABLE photos ADD COLUMN mask_height INTEGER');
      await db.execute('ALTER TABLE photos ADD COLUMN snout_x REAL');
      await db.execute('ALTER TABLE photos ADD COLUMN snout_y REAL');
      await db.execute('ALTER TABLE photos ADD COLUMN fork_x REAL');
      await db.execute('ALTER TABLE photos ADD COLUMN fork_y REAL');
      await db.execute('ALTER TABLE photos ADD COLUMN capture_orientation TEXT');
    }
    if (oldVersion < 5) {
      // v5: capture-time GPS fix (nullable — capture works without one)
      await db.execute('ALTER TABLE photos ADD COLUMN latitude REAL');
      await db.execute('ALTER TABLE photos ADD COLUMN longitude REAL');
      await db.execute('ALTER TABLE photos ADD COLUMN horizontal_accuracy REAL');
    }
    if (oldVersion < 6) {
      // v6: reverse-geocoded friendly name; null when no network at capture
      await db.execute('ALTER TABLE photos ADD COLUMN place_name TEXT');
    }
    if (oldVersion < 7) {
      // v7: per-row camera intrinsics — 9 f64 little-endian, row-major K.
      // Without this, post-hoc length recomputation has to guess fx/fy/cx/cy.
      await db.execute('ALTER TABLE photos ADD COLUMN intrinsics_bytes BLOB');
    }
    if (oldVersion < 8) {
      await _upgradeToV8(db);
    }
    if (oldVersion < 9) {
      await _upgradeToV9(db);
    }
  }

  /// v9: why a capture or measurement version couldn't be synced, when the
  /// server refused it for good (e.g. 422). Null while it can still sync.
  /// Like v8, safe to run again.
  static Future<void> _upgradeToV9(Database db) async {
    for (final table in [_tableName, _measurementsTable]) {
      final columns = (await db.rawQuery('PRAGMA table_info($table)'))
          .map((c) => c['name'] as String)
          .toSet();
      if (!columns.contains('sync_error')) {
        await db.execute('ALTER TABLE $table ADD COLUMN sync_error TEXT');
      }
    }
  }

  /// v8: everything fishsense-services needs to keep a synced capture
  /// reproducible. See fishsense-services docs/handoff/fishsense-mobile/SYNC.md.
  ///
  /// Safe to run more than once. A v7 build that opens a v8 database
  /// silently sets its version back to 7 and leaves the v8 columns and
  /// tables in place (it happens on development phones that switch
  /// branches), so the next v8 launch runs this again: it adds only the
  /// missing columns and fills in only what is still empty.
  static Future<void> _upgradeToV8(Database db) async {
    final existing = (await db.rawQuery('PRAGMA table_info($_tableName)'))
        .map((c) => c['name'] as String)
        .toSet();
    for (final column in const [
      'client_capture_uuid TEXT',
      'captured_by_sub TEXT',
      'tenant_slug TEXT',
      'install_id TEXT',
      'device_model TEXT',
      'app_version TEXT',
      'core_version TEXT',
      'model_version TEXT',
      'depth_row_bytes INTEGER',
      'confidence_row_bytes INTEGER',
      'camera_pose_bytes BLOB',
      'arkit_timestamp REAL',
      'rgb_lossless_path TEXT',
      'synced_at INTEGER',
    ]) {
      if (existing.contains(column.split(' ').first)) continue;
      await db.execute('ALTER TABLE photos ADD COLUMN $column');
    }

    // Existing captures get a sync key too, so they can still be synced.
    const uuid = Uuid();
    final ids = await db.query(
      _tableName,
      columns: ['id'],
      where: 'client_capture_uuid IS NULL',
    );
    for (final row in ids) {
      await db.update(
        _tableName,
        {'client_capture_uuid': uuid.v4()},
        where: 'id = ?',
        whereArgs: [row['id']],
      );
    }
    await _createPhotoIndexes(db);

    // The stored buffers are `height × bytesPerRow`, padding included, so
    // the stride v7 didn't record can be recovered exactly.
    for (final map in const ['depth', 'confidence']) {
      await db.execute('''
        UPDATE photos SET ${map}_row_bytes = length(${map}_bytes) / ${map}_height
        WHERE ${map}_row_bytes IS NULL
          AND ${map}_bytes IS NOT NULL AND ${map}_height > 0
          AND length(${map}_bytes) % ${map}_height = 0
      ''');
    }

    await _createMeasurementsTable(db);

    // v7 kept one measurement per row and overwrote it on a manual edit, so
    // carry it over as a version whose origin is unknown: for a row with no
    // versions yet, or one a v7 build edited since (its current points no
    // longer match its latest version).
    final measured = await db.query(
      _tableName,
      columns: ['id', 'utc_unix_timestamp', 'fish_length', 'snout_x', 'snout_y', 'fork_x', 'fork_y'],
      where: 'fish_length IS NOT NULL AND snout_x IS NOT NULL AND snout_y IS NOT NULL '
          'AND fork_x IS NOT NULL AND fork_y IS NOT NULL',
    );
    for (final row in measured) {
      final photoId = row['id'] as int;
      final carried = MeasurementVersion(
        photoId: photoId,
        clientMeasurementUuid: uuid.v4(),
        measuredAt: row['utc_unix_timestamp'] as int,
        lengthM: (row['fish_length'] as num).toDouble(),
        snout: Coordinate(
          x: (row['snout_x'] as num).toDouble(),
          y: (row['snout_y'] as num).toDouble(),
        ),
        fork: Coordinate(
          x: (row['fork_x'] as num).toDouble(),
          y: (row['fork_y'] as num).toDouble(),
        ),
        origin: MeasurementOrigin.unknown,
      );

      final latestRows = await db.query(
        _measurementsTable,
        where: 'photo_id = ?',
        whereArgs: [photoId],
        orderBy: 'measured_at DESC, id DESC',
        limit: 1,
      );
      if (latestRows.isEmpty) {
        await db.insert(_measurementsTable, carried.toMap());
        continue;
      }
      final latest = MeasurementVersion.fromMap(latestRows.single);
      if (latest.lengthM == carried.lengthM &&
          latest.snout == carried.snout &&
          latest.fork == carried.fork) {
        continue;
      }
      // When the v7 edit happened isn't recorded; it was after the latest
      // version, so order it after that one.
      final now = DateTime.now().toUtc().millisecondsSinceEpoch;
      await db.insert(
        _measurementsTable,
        MeasurementVersion(
          photoId: photoId,
          clientMeasurementUuid: carried.clientMeasurementUuid,
          measuredAt: now > latest.measuredAt ? now : latest.measuredAt + 1,
          lengthM: carried.lengthM,
          snout: carried.snout,
          fork: carried.fork,
          origin: MeasurementOrigin.unknown,
        ).toMap(),
      );
    }
  }

  static Future<void> _createPhotoIndexes(Database db) async {
    await db.execute(
      'CREATE UNIQUE INDEX IF NOT EXISTS photos_client_capture_uuid '
      'ON photos (client_capture_uuid)',
    );
  }

  /// One row per measurement version; see [MeasurementVersion].
  static Future<void> _createMeasurementsTable(Database db) async {
    await db.execute('''
      CREATE TABLE IF NOT EXISTS measurements (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        photo_id INTEGER NOT NULL REFERENCES photos (id) ON DELETE CASCADE,
        client_measurement_uuid TEXT NOT NULL UNIQUE,
        measured_at INTEGER NOT NULL,
        length_m REAL NOT NULL,
        snout_x REAL NOT NULL,
        snout_y REAL NOT NULL,
        fork_x REAL NOT NULL,
        fork_y REAL NOT NULL,
        origin TEXT NOT NULL CHECK (origin IN ('auto', 'manual', 'unknown')),
        algorithm TEXT,
        algorithm_version TEXT,
        core_version TEXT,
        model_version TEXT,
        synced_at INTEGER,
        sync_error TEXT
      )
    ''');
    await db.execute(
      'CREATE INDEX IF NOT EXISTS measurements_photo_id '
      'ON measurements (photo_id, measured_at)',
    );
  }

  /// Create photos table - exact same schema as iOS + device info + fish length
  /// Direct translation from Swift createPhotosTable()
  static Future<void> _createPhotosTable(Database db) async {
    const query = '''
      CREATE TABLE IF NOT EXISTS photos (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        utc_unix_timestamp INTEGER NOT NULL,
        rgb_path TEXT NOT NULL,
        depth_bytes BLOB,
        depth_width INTEGER NOT NULL,
        depth_height INTEGER NOT NULL,
        confidence_bytes BLOB,
        confidence_width INTEGER NOT NULL,
        confidence_height INTEGER NOT NULL,
        device_info TEXT,
        fish_length REAL,
        mask_bytes BLOB,
        mask_width INTEGER,
        mask_height INTEGER,
        snout_x REAL,
        snout_y REAL,
        fork_x REAL,
        fork_y REAL,
        capture_orientation TEXT,
        latitude REAL,
        longitude REAL,
        horizontal_accuracy REAL,
        place_name TEXT,
        intrinsics_bytes BLOB,
        client_capture_uuid TEXT,
        captured_by_sub TEXT,
        tenant_slug TEXT,
        install_id TEXT,
        device_model TEXT,
        app_version TEXT,
        core_version TEXT,
        model_version TEXT,
        depth_row_bytes INTEGER,
        confidence_row_bytes INTEGER,
        camera_pose_bytes BLOB,
        arkit_timestamp REAL,
        rgb_lossless_path TEXT,
        synced_at INTEGER,
        sync_error TEXT
      );
    ''';

    try {
      await db.execute(query);
      await _createPhotoIndexes(db);
      log.i('Photos table created successfully');
    } catch (e) {
      log.e('SQLite Error creating table', error: e);
      rethrow;
    }
  }

  /// Insert photo - equivalent to Swift insertPhoto(with:)
  ///
  /// Returns the new row's primary key on success, or null on failure.
  /// Callers that don't need the id can ignore the return value; the
  /// post-capture flow uses it to wire up the in-memory result screen
  /// to the persisted row so manual edits can be saved back.
  ///
  /// [measurement] is the phone's own result, stored as the first version
  /// in the same transaction. Its `photoId` is replaced with the new row's.
  static Future<int?> insertPhoto(
    PhotoModel photo, {
    MeasurementVersion? measurement,
  }) async {
    try {
      final db = await database;

      // Convert depth map bytes to Uint8List for BLOB storage
      final depthBytes = photo.depthMap.bytes != null
          ? Uint8List.fromList(photo.depthMap.bytes!)
          : null;

      final confidenceBytes = photo.confidenceMap.bytes != null
          ? Uint8List.fromList(photo.confidenceMap.bytes!)
          : null;

      final values = {
        'utc_unix_timestamp': photo.utcUnixTimestamp,
        'rgb_path': photo.rgbPath,
        'depth_bytes': depthBytes,
        'depth_width': photo.depthMap.width,
        'depth_height': photo.depthMap.height,
        'confidence_bytes': confidenceBytes,
        'confidence_width': photo.confidenceMap.width,
        'confidence_height': photo.confidenceMap.height,
        'device_info': photo.deviceInfo,
        'fish_length': photo.fishLength,
        'mask_bytes': photo.maskBytes,
        'mask_width': photo.maskWidth,
        'mask_height': photo.maskHeight,
        'snout_x': photo.snoutX,
        'snout_y': photo.snoutY,
        'fork_x': photo.forkX,
        'fork_y': photo.forkY,
        'capture_orientation': photo.captureOrientation,
        'latitude': photo.latitude,
        'longitude': photo.longitude,
        'horizontal_accuracy': photo.horizontalAccuracy,
        'place_name': photo.placeName,
        'intrinsics_bytes': photo.intrinsicsBytes,
        'client_capture_uuid': photo.clientCaptureUuid,
        'captured_by_sub': photo.capturedBySub,
        'tenant_slug': photo.tenantSlug,
        'install_id': photo.installId,
        'device_model': photo.deviceModel,
        'app_version': photo.appVersion,
        'core_version': photo.coreVersion,
        'model_version': photo.modelVersion,
        'depth_row_bytes': photo.depthRowBytes,
        'confidence_row_bytes': photo.confidenceRowBytes,
        'camera_pose_bytes': photo.cameraPoseBytes,
        'arkit_timestamp': photo.arkitTimestamp,
        'rgb_lossless_path': photo.rgbLosslessPath,
        'synced_at': photo.syncedAt,
      };

      final id = await db.transaction((txn) async {
        final id = await txn.insert(_tableName, values);
        if (measurement != null) {
          await txn.insert(_measurementsTable, measurement.forPhoto(id).toMap());
        }
        return id;
      });
      log.i('Photo inserted with ID: $id');
      _changes.add(null);
      return id;

    } catch (e) {
      log.e('SQLite Error inserting photo', error: e);
      return null;
    }
  }

  /// Persist a new measurement version, e.g. a manual edit. The version
  /// is appended — earlier ones are kept — and the photo row's snout/fork
  /// and length are updated to it, since the latest version is current.
  /// Every other column (mask, depth, intrinsics, etc.) is left untouched.
  /// Used by the manual-edit flow on both the post-capture result screen
  /// and the gallery detail viewer.
  static Future<bool> addMeasurement(MeasurementVersion measurement) async {
    try {
      final db = await database;
      return await db.transaction((txn) async {
        final count = await txn.update(
          _tableName,
          {
            'snout_x': measurement.snout.x,
            'snout_y': measurement.snout.y,
            'fork_x': measurement.fork.x,
            'fork_y': measurement.fork.y,
            'fish_length': measurement.lengthM,
          },
          where: 'id = ?',
          whereArgs: [measurement.photoId],
        );
        if (count == 0) return false;
        await txn.insert(_measurementsTable, measurement.toMap());
        return true;
      }).then((added) {
        if (added) _changes.add(null);
        return added;
      });
    } catch (e) {
      log.e('SQLite Error adding measurement', error: e);
      return false;
    }
  }

  /// A photo's measurement versions, oldest first.
  static Future<List<MeasurementVersion>> getMeasurements(int photoId) async {
    try {
      final db = await database;
      final rows = await db.query(
        _measurementsTable,
        where: 'photo_id = ?',
        whereArgs: [photoId],
        orderBy: 'measured_at, id',
      );
      return rows.map(MeasurementVersion.fromMap).toList();
    } catch (e) {
      log.e('SQLite Error getting measurements', error: e);
      return [];
    }
  }

  /// Get all photos metadata for gallery display (NO BLOB data)
  static Future<List<PhotoModel>> getAllPhotosForGallery() async {
    try {
      final db = await database;
      // The mask BLOB can be megabytes per row — fetch it lazily via
      // getPhotoWithBlobs() when the detail view opens.
      final List<Map<String, dynamic>> maps = await db.query(
        _tableName,
        columns: [
          'id',
          'utc_unix_timestamp',
          'rgb_path',
          'depth_width',
          'depth_height',
          'confidence_width',
          'confidence_height',
          'device_info',
          'fish_length',
          'mask_width',
          'mask_height',
          'snout_x',
          'snout_y',
          'fork_x',
          'fork_y',
          'capture_orientation',
          'latitude',
          'longitude',
          'horizontal_accuracy',
          'place_name',
          'synced_at',
          'sync_error',
        ],
        orderBy: 'utc_unix_timestamp DESC',
      );

      return List.generate(maps.length, (i) {
        // Create PhotoModel with empty BLOB data for gallery

        return PhotoModel(
          id: maps[i]['id'],
          utcUnixTimestamp: maps[i]['utc_unix_timestamp'],
          rgbPath: maps[i]['rgb_path'],
          depthMap: ByteMatrixModel(
            bytes: null,
            width: maps[i]['depth_width'],
            height: maps[i]['depth_height'],
          ),
          confidenceMap: ByteMatrixModel(
            bytes: null,
            width: maps[i]['confidence_width'],
            height: maps[i]['confidence_height'],
          ),
          deviceInfo: maps[i]['device_info'],
          fishLength: maps[i]['fish_length'],
          maskWidth: maps[i]['mask_width'] as int?,
          maskHeight: maps[i]['mask_height'] as int?,
          snoutX: (maps[i]['snout_x'] as num?)?.toDouble(),
          snoutY: (maps[i]['snout_y'] as num?)?.toDouble(),
          forkX: (maps[i]['fork_x'] as num?)?.toDouble(),
          forkY: (maps[i]['fork_y'] as num?)?.toDouble(),
          captureOrientation: maps[i]['capture_orientation'] as String?,
          latitude: (maps[i]['latitude'] as num?)?.toDouble(),
          longitude: (maps[i]['longitude'] as num?)?.toDouble(),
          horizontalAccuracy:
              (maps[i]['horizontal_accuracy'] as num?)?.toDouble(),
          placeName: maps[i]['place_name'] as String?,
          syncedAt: maps[i]['synced_at'] as int?,
          syncError: maps[i]['sync_error'] as String?,
        );
      });
      
    } catch (e) {
      log.e('SQLite Error getting gallery photos', error: e);
      return [];
    }
  }

  /// Get specific photo with full BLOB data (when needed)
  static Future<PhotoModel?> getPhotoWithBlobs(int photoId) async {
    try {
      final db = await database;
      final List<Map<String, dynamic>> maps = await db.query(
        _tableName,
        where: 'id = ?',
        whereArgs: [photoId],
        limit: 1,
      );

      if (maps.isNotEmpty) {
        return PhotoModel.fromMap(maps.first);
      }
      return null;
      
    } catch (e) {
      log.e('SQLite Error getting photo details', error: e);
      return null;
    }
  }

  /// Keep the original method for backward compatibility
  static Future<List<PhotoModel>> getAllPhotos() async {
    return getAllPhotosForGallery(); 
  }

  /// Backfill a reverse-geocoded friendly name onto an existing row.
  ///
  /// Used by the gallery's lazy-geocode pass when a photo was captured
  /// offline (GPS recorded, no network to reverse-geocode) and the user
  /// later opens the gallery with connectivity. The raw lat/lon are left
  /// untouched — this only fills in place_name.
  static Future<bool> updatePlaceName(int id, String placeName) async {
    try {
      final db = await database;
      final count = await db.update(
        _tableName,
        {'place_name': placeName},
        where: 'id = ?',
        whereArgs: [id],
      );
      return count > 0;
    } catch (e) {
      log.e('SQLite Error updating place_name', error: e);
      return false;
    }
  }

  // ── Sync ─────────────────────────────────────────────────────────────

  /// SQL limiting captures (aliased [alias]) to the ones [sub] may sync:
  /// its own and unclaimed ones. With no [sub], only unclaimed ones.
  static (String, List<Object?>) _syncableBy(String? sub, [String alias = '']) {
    final col = '${alias.isEmpty ? '' : '$alias.'}captured_by_sub';
    return sub == null
        ? ('$col IS NULL', const [])
        : ('($col IS NULL OR $col = ?)', [sub]);
  }

  /// Captures [sub] may sync that aren't committed yet, oldest first. Ones
  /// the server refused for good are left out unless [includeFailed];
  /// another account's are always left out.
  static Future<List<int>> captureIdsToSync({
    required String? sub,
    bool includeFailed = false,
  }) async {
    final db = await database;
    final (owner, args) = _syncableBy(sub);
    final rows = await db.query(
      _tableName,
      columns: ['id'],
      where: 'synced_at IS NULL AND $owner'
          '${includeFailed ? '' : ' AND sync_error IS NULL'}',
      whereArgs: args,
      orderBy: 'utc_unix_timestamp, id',
    );
    return [for (final r in rows) r['id'] as int];
  }

  /// Measurement versions added after their capture was committed, with
  /// the capture's sync key and tenant, oldest first. Only [sub]'s
  /// captures (a committed capture always has a capturer), and only
  /// versions with a length: the server takes nothing else.
  static Future<List<({MeasurementVersion version, String captureUuid, String tenantSlug})>>
      measurementsToSync({required String sub, bool includeFailed = false}) async {
    final db = await database;
    final rows = await db.rawQuery('''
      SELECT m.*, p.client_capture_uuid AS capture_uuid, p.tenant_slug AS capture_tenant
      FROM $_measurementsTable m JOIN $_tableName p ON p.id = m.photo_id
      WHERE p.synced_at IS NOT NULL AND m.synced_at IS NULL AND m.length_m > 0
        ${includeFailed ? '' : 'AND m.sync_error IS NULL'}
        AND p.captured_by_sub = ?
        AND p.client_capture_uuid IS NOT NULL AND p.tenant_slug IS NOT NULL
      ORDER BY m.measured_at, m.id
    ''', [sub]);
    return [
      for (final r in rows)
        (
          version: MeasurementVersion.fromMap(r),
          captureUuid: r['capture_uuid'] as String,
          tenantSlug: r['capture_tenant'] as String,
        ),
    ];
  }

  /// Bind an unowned capture to the account syncing it: fill in whatever of
  /// `captured_by_sub`, `tenant_slug` and `install_id` is still empty, and
  /// never change one that is set. Only applies to a capture with no
  /// capturer yet or whose capturer is [sub].
  static Future<void> claimCapture(
    int id, {
    required String sub,
    required String tenantSlug,
    String? installId,
  }) async {
    final db = await database;
    await db.rawUpdate('''
      UPDATE $_tableName SET
        captured_by_sub = COALESCE(captured_by_sub, ?),
        tenant_slug = COALESCE(tenant_slug, ?),
        install_id = COALESCE(install_id, ?)
      WHERE id = ? AND (captured_by_sub IS NULL OR captured_by_sub = ?)
    ''', [sub, tenantSlug, installId, id, sub]);
  }

  /// The capture and the measurement versions its commit carried are on
  /// the server.
  static Future<void> markCaptureSynced(
    int id, {
    required List<int> measurementIds,
    required DateTime at,
  }) async {
    final db = await database;
    final ms = at.toUtc().millisecondsSinceEpoch;
    await db.transaction((txn) async {
      await txn.update(_tableName, {'synced_at': ms, 'sync_error': null},
          where: 'id = ?', whereArgs: [id]);
      for (final m in measurementIds) {
        await txn.update(_measurementsTable, {'synced_at': ms, 'sync_error': null},
            where: 'id = ?', whereArgs: [m]);
      }
    });
  }

  static Future<void> markMeasurementSynced(int id, {required DateTime at}) async {
    final db = await database;
    await db.update(
      _measurementsTable,
      {'synced_at': at.toUtc().millisecondsSinceEpoch, 'sync_error': null},
      where: 'id = ?',
      whereArgs: [id],
    );
  }

  /// The server refused this capture for good; keep it on the phone and
  /// stop retrying it automatically.
  static Future<void> setCaptureSyncError(int id, String error) async {
    final db = await database;
    await db.update(_tableName, {'sync_error': error}, where: 'id = ?', whereArgs: [id]);
  }

  static Future<void> setMeasurementSyncError(int id, String error) async {
    final db = await database;
    await db.update(_measurementsTable, {'sync_error': error},
        where: 'id = ?', whereArgs: [id]);
  }

  /// What [sub] still has to sync, and how many of its captures the
  /// server refused, for the sync status line. Another account's captures
  /// aren't counted: they aren't this user's to sync.
  static Future<({int captures, int measurements, int failed})> syncBacklog({
    required String? sub,
  }) async {
    final db = await database;
    int count(List<Map<String, Object?>> rows) => rows.first.values.first as int;
    final (owner, args) = _syncableBy(sub);
    final captures = count(await db.rawQuery(
        'SELECT COUNT(*) FROM $_tableName '
        'WHERE synced_at IS NULL AND sync_error IS NULL AND $owner',
        args));
    final failed = count(await db.rawQuery(
        'SELECT COUNT(*) FROM $_tableName '
        'WHERE synced_at IS NULL AND sync_error IS NOT NULL AND $owner',
        args));
    final measurements = sub == null
        ? 0
        : count(await db.rawQuery('''
            SELECT COUNT(*) FROM $_measurementsTable m JOIN $_tableName p ON p.id = m.photo_id
            WHERE p.synced_at IS NOT NULL AND m.synced_at IS NULL AND m.sync_error IS NULL
              AND m.length_m > 0 AND p.captured_by_sub = ?
          ''', [sub]));
    return (captures: captures, measurements: measurements, failed: failed);
  }

  /// Each capture's sync state, for the gallery badges.
  static Future<Map<int, ({bool synced, bool refused})>> syncStates() async {
    final db = await database;
    final rows = await db.query(_tableName, columns: ['id', 'synced_at', 'sync_error']);
    return {
      for (final r in rows)
        r['id'] as int: (synced: r['synced_at'] != null, refused: r['sync_error'] != null),
    };
  }

  /// Delete photo by ID, with its measurement versions and its image
  /// files (the JPEG and the lossless PNG).
  static Future<bool> deletePhoto(int id) async {
    try {
      final db = await database;
      // Rows first, files after, and only once the rows are gone: a failure
      // part-way leaves at worst an orphaned file, never a capture whose
      // files are missing (which sync would then try to upload).
      final fileNames = await db.transaction((txn) async {
        final rows = await txn.query(
          _tableName,
          columns: ['rgb_path', 'rgb_lossless_path'],
          where: 'id = ?',
          whereArgs: [id],
        );
        if (rows.isEmpty) return null;

        // Foreign keys cascade the delete to `measurements`.
        await txn.delete(_tableName, where: 'id = ?', whereArgs: [id]);
        return [
          for (final column in const ['rgb_path', 'rgb_lossless_path'])
            if (rows.first[column] case final String name) name,
        ];
      });
      if (fileNames == null) return false;

      for (final fileName in fileNames) {
        await FileStorageService.deleteImage(fileName);
      }
      return true;

    } catch (e) {
      log.e('SQLite Error deleting photo', error: e);
      return false;
    }
  }

  /// Delete all photos - equivalent to iOS deleteAllSavedPhotos()
  static Future<bool> deleteAllPhotos() async {
    try {
      final db = await database;
      await db.transaction((txn) async {
        await txn.delete(_measurementsTable);
        await txn.delete(_tableName);
      });
      log.i('All photos deleted');
      return true;
      
    } catch (e) {
      log.e('SQLite Error deleting all photos', error: e);
      return false;
    }
  }

  /// Get photo count
  static Future<int> getPhotoCount() async {
    try {
      final db = await database;
      final result = await db.rawQuery('SELECT COUNT(*) FROM $_tableName');
      return Sqflite.firstIntValue(result) ?? 0;
      
    } catch (e) {
      log.e('SQLite Error getting photo count', error: e);
      return 0;
    }
  }

  /// Close database connection
  static Future<void> closeDatabase() async {
    final db = _database;
    if (db != null) {
      await db.close();
      _database = null;
    }
  }

  /// Database health check
  static Future<bool> isDatabaseHealthy() async {
    try {
      final db = await database;
      await db.rawQuery('SELECT 1');
      return true;
    } catch (e) {
      log.e('Database health check failed', error: e);
      return false;
    }
  }
}