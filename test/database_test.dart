import 'dart:io';
import 'dart:typed_data';

import 'package:flutter_test/flutter_test.dart';
import 'package:path_provider_platform_interface/path_provider_platform_interface.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';
import 'package:sqflite_common_ffi/sqflite_ffi.dart';

import 'package:fishsense_android/database.dart';
import 'package:fishsense_android/models.dart';

/// The `photos` table exactly as a v7 install has it.
const _v7Schema = '''
  CREATE TABLE photos (
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
    intrinsics_bytes BLOB
  )
''';

/// Points the app's documents directory at a test folder.
class _FakePathProvider extends PathProviderPlatform
    with MockPlatformInterfaceMixin {
  _FakePathProvider(this.documents);
  final String documents;

  @override
  Future<String?> getApplicationDocumentsPath() async => documents;
}

final _uuidV4 = RegExp(
  r'^[0-9a-f]{8}-[0-9a-f]{4}-4[0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$',
);

Future<Database> _openV8(String path) => databaseFactoryFfi.openDatabase(
      path,
      options: OpenDatabaseOptions(
        version: DatabaseModel.schemaVersion,
        onConfigure: DatabaseModel.configure,
        onCreate: DatabaseModel.createTables,
        onUpgrade: DatabaseModel.upgradeTables,
      ),
    );

Future<Map<String, String>> _columns(Database db, String table) async {
  final rows = await db.rawQuery('PRAGMA table_info($table)');
  return {for (final r in rows) r['name'] as String: r['type'] as String};
}

PhotoModel _photo({String? uuid}) => PhotoModel.create(
      utcUnixTimestamp: 1760000000000,
      rgbPath: 'rgb_1760000000000.jpg',
      rgbLosslessPath: 'rgb_1760000000000.png',
      depthMap: ByteMatrixModel(bytes: List.filled(16, 1), width: 2, height: 2),
      confidenceMap:
          ByteMatrixModel(bytes: List.filled(4, 2), width: 2, height: 2),
      clientCaptureUuid: uuid ?? '6f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f',
      depthRowBytes: 8,
      confidenceRowBytes: 2,
    )!;

MeasurementVersion _version({
  required int photoId,
  required String uuid,
  required int measuredAt,
  required double length,
  MeasurementOrigin origin = MeasurementOrigin.auto,
}) =>
    MeasurementVersion(
      photoId: photoId,
      clientMeasurementUuid: uuid,
      measuredAt: measuredAt,
      lengthM: length,
      snout: const Coordinate(x: 412.25, y: 803.5),
      fork: const Coordinate(x: 1398.75, y: 811.0),
      origin: origin,
      algorithm: MeasurementVersion.algorithmCompute,
    );

void main() {
  sqfliteFfiInit();

  late Directory tmp;
  late String path;

  setUp(() async {
    tmp = await Directory.systemTemp.createTemp('fishsense_db_test');
    path = '${tmp.path}/database.sqlite';
    PathProviderPlatform.instance = _FakePathProvider(tmp.path);
  });

  tearDown(() async {
    await DatabaseModel.closeDatabase();
    await tmp.delete(recursive: true);
  });

  group('v7 → v8 upgrade', () {
    Future<Database> upgradeFromV7(
      Future<void> Function(Database db) seed,
    ) async {
      final v7 = await databaseFactoryFfi.openDatabase(
        path,
        options: OpenDatabaseOptions(
          version: 7,
          onCreate: (db, _) => db.execute(_v7Schema),
        ),
      );
      await seed(v7);
      await v7.close();
      return _openV8(path);
    }

    test('gives the same schema as a fresh v8 install', () async {
      final upgraded = await upgradeFromV7((_) async {});
      final upgradedPhotos = await _columns(upgraded, 'photos');
      final upgradedMeasurements = await _columns(upgraded, 'measurements');
      await upgraded.close();

      final fresh = await _openV8('${tmp.path}/fresh.sqlite');
      expect(upgradedPhotos, await _columns(fresh, 'photos'));
      expect(upgradedMeasurements, await _columns(fresh, 'measurements'));
      await fresh.close();
    });

    test('gives every existing row its own UUID v4', () async {
      final db = await upgradeFromV7((db) async {
        for (var i = 0; i < 3; i++) {
          await db.insert('photos', {
            'utc_unix_timestamp': i,
            'rgb_path': 'rgb_$i.jpg',
            'depth_width': 2,
            'depth_height': 2,
            'confidence_width': 2,
            'confidence_height': 2,
          });
        }
      });
      final uuids = (await db.query('photos', columns: ['client_capture_uuid']))
          .map((r) => r['client_capture_uuid'] as String)
          .toList();
      await db.close();

      expect(uuids, hasLength(3));
      expect(uuids.toSet(), hasLength(3));
      for (final u in uuids) {
        expect(u, matches(_uuidV4));
      }
    });

    test('recovers row strides from the stored buffers', () async {
      final db = await upgradeFromV7((db) async {
        await db.insert('photos', {
          'utc_unix_timestamp': 0,
          'rgb_path': 'rgb_0.jpg',
          // 192 rows of a 256-wide f32 map padded to 1088 bytes per row.
          'depth_bytes': Uint8List(1088 * 192),
          'depth_width': 256,
          'depth_height': 192,
          'confidence_bytes': Uint8List(256 * 192),
          'confidence_width': 256,
          'confidence_height': 192,
        });
        await db.insert('photos', {
          'utc_unix_timestamp': 1,
          'rgb_path': 'rgb_1.jpg',
          'depth_width': 256,
          'depth_height': 192,
          'confidence_width': 256,
          'confidence_height': 192,
        });
      });
      final rows = await db.query(
        'photos',
        columns: ['depth_row_bytes', 'confidence_row_bytes'],
        orderBy: 'id',
      );
      await db.close();

      expect(rows[0], {'depth_row_bytes': 1088, 'confidence_row_bytes': 256});
      expect(rows[1], {'depth_row_bytes': null, 'confidence_row_bytes': null});
    });

    test('carries a measured row over as one version of unknown origin',
        () async {
      final db = await upgradeFromV7((db) async {
        await db.insert('photos', {
          'utc_unix_timestamp': 1760000000000,
          'rgb_path': 'rgb_measured.jpg',
          'depth_width': 2,
          'depth_height': 2,
          'confidence_width': 2,
          'confidence_height': 2,
          'fish_length': 0.42,
          'snout_x': 412.0,
          'snout_y': 803.0,
          'fork_x': 1398.0,
          'fork_y': 811.0,
        });
        await db.insert('photos', {
          'utc_unix_timestamp': 1760000001000,
          'rgb_path': 'rgb_no_fish.jpg',
          'depth_width': 2,
          'depth_height': 2,
          'confidence_width': 2,
          'confidence_height': 2,
        });
      });
      final versions = (await db.query('measurements'))
          .map(MeasurementVersion.fromMap)
          .toList();
      await db.close();

      expect(versions, hasLength(1));
      final v = versions.single;
      expect(v.photoId, 1);
      expect(v.origin, MeasurementOrigin.unknown);
      expect(v.lengthM, 0.42);
      expect(v.snout, const Coordinate(x: 412.0, y: 803.0));
      expect(v.fork, const Coordinate(x: 1398.0, y: 811.0));
      expect(v.measuredAt, 1760000000000);
      expect(v.clientMeasurementUuid, matches(_uuidV4));
      expect(v.algorithm, isNull);
    });
  });

  group('re-running the v8 upgrade (a v7 build opened the v8 database)', () {
    test('keeps what v8 recorded and fills in only what v7 left empty',
        () async {
      // A v8 install with one measured capture.
      var db = await _openV8(path);
      final v8Id = await db.insert('photos', {
        'utc_unix_timestamp': 1000,
        'rgb_path': 'rgb_1000.jpg',
        'depth_width': 2,
        'depth_height': 2,
        'confidence_width': 2,
        'confidence_height': 2,
        'client_capture_uuid': 'kept-uuid',
        'depth_row_bytes': 99,
        'fish_length': 0.30,
        'snout_x': 1.0,
        'snout_y': 2.0,
        'fork_x': 3.0,
        'fork_y': 4.0,
      });
      await db.insert('measurements', {
        'photo_id': v8Id,
        'client_measurement_uuid': 'kept-version',
        'measured_at': 1000,
        'length_m': 0.30,
        'snout_x': 1.0,
        'snout_y': 2.0,
        'fork_x': 3.0,
        'fork_y': 4.0,
        'origin': 'auto',
      });

      // A v7 build opens it: the version drops to 7, the v8 schema stays.
      // It takes a capture and edits the v8 one, knowing nothing of v8.
      await db.execute('PRAGMA user_version = 7');
      final v7Id = await db.insert('photos', {
        'utc_unix_timestamp': 2000,
        'rgb_path': 'rgb_2000.jpg',
        'depth_bytes': Uint8List(8 * 2),
        'depth_width': 2,
        'depth_height': 2,
        'confidence_width': 2,
        'confidence_height': 2,
        'fish_length': 0.42,
        'snout_x': 5.0,
        'snout_y': 6.0,
        'fork_x': 7.0,
        'fork_y': 8.0,
      });
      await db.update('photos', {'fish_length': 0.31, 'fork_x': 3.5},
          where: 'id = ?', whereArgs: [v8Id]);
      await db.close();

      // The v8 build again: the upgrade runs a second time.
      db = await _openV8(path);
      final photos = {
        for (final r in await db.query('photos')) r['id'] as int: r,
      };
      expect(photos[v8Id]!['client_capture_uuid'], 'kept-uuid');
      expect(photos[v8Id]!['depth_row_bytes'], 99);
      expect(photos[v7Id]!['client_capture_uuid'], matches(_uuidV4));
      expect(photos[v7Id]!['depth_row_bytes'], 8);

      Future<List<MeasurementVersion>> versions(int id) async =>
          (await db.query('measurements',
                  where: 'photo_id = ?',
                  whereArgs: [id],
                  orderBy: 'measured_at, id'))
              .map(MeasurementVersion.fromMap)
              .toList();

      final edited = await versions(v8Id);
      expect(edited.map((v) => v.clientMeasurementUuid).first, 'kept-version');
      expect(edited, hasLength(2), reason: 'the v7 edit becomes a version');
      expect(edited.last.origin, MeasurementOrigin.unknown);
      expect(edited.last.lengthM, 0.31);
      expect(edited.last.fork.x, 3.5);

      final taken = await versions(v7Id);
      expect(taken.single.lengthM, 0.42);
      expect(taken.single.origin, MeasurementOrigin.unknown);

      // And a third run changes nothing.
      await db.execute('PRAGMA user_version = 7');
      await db.close();
      db = await _openV8(path);
      expect(await versions(v8Id), hasLength(2));
      expect(await versions(v7Id), hasLength(1));
      await db.close();
    });
  });

  group('v9 and the sync queries', () {
    setUp(() async {
      DatabaseModel.useDatabaseForTesting(await _openV8(path));
    });

    test('v8 databases gain sync_error, and the upgrade can run again', () async {
      await DatabaseModel.closeDatabase();
      var db = await _openV8('${tmp.path}/v8.sqlite');
      await db.execute('ALTER TABLE photos DROP COLUMN sync_error');
      await db.execute('ALTER TABLE measurements DROP COLUMN sync_error');
      await db.execute('PRAGMA user_version = 8');
      await db.close();

      db = await _openV8('${tmp.path}/v8.sqlite');
      expect((await _columns(db, 'photos')).keys, contains('sync_error'));
      expect((await _columns(db, 'measurements')).keys, contains('sync_error'));
      await db.execute('PRAGMA user_version = 8');
      await db.close();
      db = await _openV8('${tmp.path}/v8.sqlite'); // again: no duplicate column
      await db.close();
    });

    test('claiming fills only what is empty, and never takes another account\'s capture',
        () async {
      final mine = (await DatabaseModel.insertPhoto(_photo(uuid: 'mine')))!;
      final theirs = (await DatabaseModel.insertPhoto(_photo(uuid: 'theirs')))!;
      final db = await DatabaseModel.database;
      await db.update('photos', {'captured_by_sub': 'other', 'tenant_slug': null},
          where: 'id = ?', whereArgs: [theirs]);
      await db.update('photos', {'tenant_slug': 'angler'}, where: 'id = ?', whereArgs: [mine]);

      for (final id in [mine, theirs]) {
        await DatabaseModel.claimCapture(id, sub: 'me', tenantSlug: 'lab', installId: 'i1');
      }
      final m = (await DatabaseModel.getPhotoWithBlobs(mine))!;
      expect((m.capturedBySub, m.tenantSlug, m.installId), ('me', 'angler', 'i1'));
      final t = (await DatabaseModel.getPhotoWithBlobs(theirs))!;
      expect((t.capturedBySub, t.tenantSlug), ('other', null));
    });

    test('the backlog counts unsynced captures, refused ones and pending edits', () async {
      final a = (await DatabaseModel.insertPhoto(_photo(uuid: 'a'),
          measurement: _version(photoId: -1, uuid: 'va', measuredAt: 1, length: 0.3)))!;
      final b = (await DatabaseModel.insertPhoto(_photo(uuid: 'b')))!;
      await DatabaseModel.insertPhoto(_photo(uuid: 'c'));
      await (await DatabaseModel.database)
          .update('photos', {'tenant_slug': 'lab'}, where: 'id = ?', whereArgs: [a]);

      await DatabaseModel.markCaptureSynced(a, measurementIds: const [], at: DateTime.now());
      await DatabaseModel.setCaptureSyncError(b, 'Refused (422)');

      await (await DatabaseModel.database).update('photos', {'captured_by_sub': 'me'}, where: 'id = ?', whereArgs: [a]);
      expect(await DatabaseModel.syncBacklog(sub: 'me'), (captures: 1, measurements: 1, failed: 1));
      expect(await DatabaseModel.captureIdsToSync(sub: null), hasLength(1));
      expect(await DatabaseModel.captureIdsToSync(sub: null, includeFailed: true), hasLength(2));
      expect((await DatabaseModel.measurementsToSync(sub: 'me')).single.captureUuid, 'a');
    });

    test('saving a capture or a measurement tells sync there is work', () async {
      final events = <void>[];
      final sub = DatabaseModel.changes.listen(events.add);
      final id = (await DatabaseModel.insertPhoto(_photo()))!;
      await DatabaseModel.addMeasurement(
          _version(photoId: id, uuid: 'v2', measuredAt: 2, length: 0.4));
      await Future<void>.delayed(Duration.zero);
      expect(events, hasLength(2));
      await sub.cancel();
    });
  });

  group('measurement versions', () {
    setUp(() async {
      DatabaseModel.useDatabaseForTesting(await _openV8(path));
    });

    test('insertPhoto stores the v8 fields and the first version', () async {
      final id = await DatabaseModel.insertPhoto(
        _photo(),
        measurement: _version(
          photoId: -1,
          uuid: 'a1',
          measuredAt: 1000,
          length: 0.42,
        ),
      );
      expect(id, isNotNull);

      final stored = (await DatabaseModel.getPhotoWithBlobs(id!))!;
      expect(stored.clientCaptureUuid, '6f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f');
      expect(stored.rgbLosslessPath, 'rgb_1760000000000.png');
      expect(stored.depthRowBytes, 8);
      expect(stored.confidenceRowBytes, 2);

      final versions = await DatabaseModel.getMeasurements(id);
      expect(versions.single.photoId, id);
      expect(versions.single.snout, const Coordinate(x: 412.25, y: 803.5));
    });

    test('addMeasurement keeps earlier versions and makes the new one current',
        () async {
      final id = (await DatabaseModel.insertPhoto(
        _photo(),
        measurement:
            _version(photoId: -1, uuid: 'a1', measuredAt: 1000, length: 0.42),
      ))!;

      final ok = await DatabaseModel.addMeasurement(_version(
        photoId: id,
        uuid: 'a2',
        measuredAt: 2000,
        length: 0.45,
        origin: MeasurementOrigin.manual,
      ));
      expect(ok, isTrue);

      final versions = await DatabaseModel.getMeasurements(id);
      expect(versions.map((v) => v.clientMeasurementUuid), ['a1', 'a2']);
      expect(versions.map((v) => v.origin),
          [MeasurementOrigin.auto, MeasurementOrigin.manual]);

      final photo = (await DatabaseModel.getPhotoWithBlobs(id))!;
      expect(photo.fishLength, 0.45);
    });

    test('addMeasurement on a missing photo stores nothing', () async {
      final ok = await DatabaseModel.addMeasurement(
        _version(photoId: 99, uuid: 'x', measuredAt: 1, length: 0.1),
      );
      expect(ok, isFalse);
      expect(await DatabaseModel.getMeasurements(99), isEmpty);
    });

    test('a capture UUID is unique', () async {
      expect(await DatabaseModel.insertPhoto(_photo(uuid: 'same')), isNotNull);
      expect(await DatabaseModel.insertPhoto(_photo(uuid: 'same')), isNull);
    });

    test('deleting a photo deletes its versions and both image files',
        () async {
      final jpeg = File('${tmp.path}/rgb_1760000000000.jpg')..writeAsBytesSync([1]);
      final png = File('${tmp.path}/rgb_1760000000000.png')..writeAsBytesSync([2]);
      final other = File('${tmp.path}/rgb_other.jpg')..writeAsBytesSync([3]);
      final id = (await DatabaseModel.insertPhoto(
        _photo(),
        measurement:
            _version(photoId: -1, uuid: 'a1', measuredAt: 1000, length: 0.42),
      ))!;

      expect(await DatabaseModel.deletePhoto(id), isTrue);
      expect(await DatabaseModel.getMeasurements(id), isEmpty);
      expect(await DatabaseModel.getPhotoWithBlobs(id), isNull);
      expect(jpeg.existsSync(), isFalse);
      expect(png.existsSync(), isFalse);
      expect(other.existsSync(), isTrue);
    });

    test('deleteAllPhotos deletes every version', () async {
      await DatabaseModel.insertPhoto(
        _photo(),
        measurement:
            _version(photoId: -1, uuid: 'a1', measuredAt: 1000, length: 0.42),
      );

      expect(await DatabaseModel.deleteAllPhotos(), isTrue);
      final db = await DatabaseModel.database;
      expect(await db.query('measurements'), isEmpty);
    });
  });
}
