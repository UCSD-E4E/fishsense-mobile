import 'dart:typed_data';
import 'package:sqflite/sqflite.dart';
import 'package:path/path.dart';
import 'package:path_provider/path_provider.dart';
import 'models.dart';
import 'logger.dart';

/// DatabaseModel - Handles all SQLite operations
/// Direct translation from Swift/FishSense/Models/DatabaseModel.swift
class DatabaseModel {
  static Database? _database;
  static const String _databaseName = 'database.sqlite';
  static const String _tableName = 'photos';

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
      version: 4, // v4: mask + snout/fork + capture orientation
      onCreate: _createTables,
      onUpgrade: _onUpgrade, // Handle schema upgrades
    );
  }

  /// Create tables - equivalent to Swift createTables()
  static Future<void> _createTables(Database db, int version) async {
    await _createPhotosTable(db);
  }

  /// Handle database schema upgrades
  static Future<void> _onUpgrade(Database db, int oldVersion, int newVersion) async {
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
        capture_orientation TEXT
      );
    ''';

    try {
      await db.execute(query);
      log.i('Photos table created successfully');
    } catch (e) {
      log.e('SQLite Error creating table', error: e);
      rethrow;
    }
  }

  /// Insert photo - equivalent to Swift insertPhoto(with:)
  static Future<bool> insertPhoto(PhotoModel photo) async {
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
      };

      final id = await db.insert(_tableName, values);
      log.i('Photo inserted with ID: $id');
      return true;
      
    } catch (e) {
      log.e('SQLite Error inserting photo', error: e);
      return false;
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

  /// Delete photo by ID
  static Future<bool> deletePhoto(int id) async {
    try {
      final db = await database;
      final count = await db.delete(
        _tableName,
        where: 'id = ?',
        whereArgs: [id],
      );
      return count > 0;
      
    } catch (e) {
      log.e('SQLite Error deleting photo', error: e);
      return false;
    }
  }

  /// Delete all photos - equivalent to iOS deleteAllSavedPhotos()
  static Future<bool> deleteAllPhotos() async {
    try {
      final db = await database;
      await db.delete(_tableName);
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