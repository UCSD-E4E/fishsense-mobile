import 'dart:async';
import 'dart:convert';

import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:shared_preferences/shared_preferences.dart';

import 'package:fishsense_android/database.dart';
import 'package:fishsense_android/models.dart';
import 'package:fishsense_android/services/auth_service.dart';
import 'package:fishsense_android/services/sync/network_status.dart';
import 'package:fishsense_android/services/sync/sync_api.dart';
import 'package:fishsense_android/services/sync/sync_engine.dart';
import 'package:fishsense_android/services/sync/sync_policy.dart';
import 'package:fishsense_android/services/sync/sync_settings.dart';
import 'package:fishsense_android/services/sync/uploader.dart';

import 'openapi_validator.dart';
import 'sync_fixtures.dart';

const wifi = NetworkStatus(connected: true, wifi: true);
const cellular = NetworkStatus(connected: true, cellular: true, expensive: true);

const uuidA = 'a0000000-0000-4000-8000-00000000000a';
const uuidB = 'b0000000-0000-4000-8000-00000000000b';

void main() {
  final openApi = OpenApi.load();
  late Sandbox box;
  late FakeServer server;
  late FakeUploader uploader;
  late StreamController<NetworkStatus> network;
  late AuthService auth;
  late SyncSettings settings;
  late SyncEngine engine;

  Future<void> startEngine({
    NetworkStatus initial = wifi,
    bool settingsEnabled = true,
    bool settle = true,
    Future<String?> Function(double, double)? placeName,
  }) async {
    auth = AuthService(storage: const FlutterSecureStorage());
    await auth.load();
    settings = SyncSettings();
    await settings.load();
    await settings.setEnabled(settingsEnabled);
    engine = SyncEngine(
      auth: auth,
      settings: settings,
      api: SyncApi(
        accessToken: ({bool forceRefresh = false}) async => 'access',
        client: server.client,
      ),
      uploader: uploader,
      documentsDir: () async => box.documents,
      stagingRoot: () async => box.staging,
      network: network.stream,
      changes: DatabaseModel.changes,
      installId: () async => 'install-now',
      placeName: placeName,
      watchLifecycle: false,
    )..start();
    network.add(initial);
    if (settle) await engine.settle();
  }

  /// Wait until [condition] holds, letting the engine and the database run.
  Future<void> until(bool Function() condition) async {
    for (var i = 0; i < 200 && !condition(); i++) {
      await Future<void>.delayed(const Duration(milliseconds: 10));
    }
    expect(condition(), isTrue);
  }

  Future<PhotoModel> photo(int id) async => (await DatabaseModel.getPhotoWithBlobs(id))!;

  setUp(() async {
    SharedPreferences.setMockInitialValues({});
    signedInKeychain();
    box = await Sandbox.create();
    server = FakeServer();
    uploader = FakeUploader();
    network = StreamController<NetworkStatus>.broadcast();
  });

  tearDown(() async {
    engine.dispose();
    await network.close();
    await box.dispose();
  });

  test('syncs a capture: presigned PUTs over Wi-Fi only, then a valid commit', () async {
    final id = await box.addCapture(uuid: uuidA);
    await startEngine();

    expect(uploader.puts, hasLength(5));
    expect(uploader.puts.every((u) => u.wifiOnly), isTrue);
    expect(uploader.puts.first.headers['x-amz-checksum-sha256'], startsWith('b64-'));
    final manifest = server.committed[uuidA]!;
    expect(openApi.validate(manifest, 'CaptureCommit'), isEmpty);
    expect(manifest['captured_by_sub'], 'user-1');

    expect((await photo(id)).syncedAt, isNotNull);
    expect((await DatabaseModel.getMeasurements(id)).single.syncedAt, isNotNull);
    expect(engine.statusText, 'All captures synced.');
    expect(box.staging.listSync(), isEmpty, reason: 'staged files are cleaned up');
  });

  test('claims a capture taken signed out for the account that syncs it', () async {
    final id = await box.addCapture(uuid: uuidA, sub: null, tenant: null);
    await startEngine();

    final p = await photo(id);
    expect(p.capturedBySub, 'user-1');
    expect(p.tenantSlug, 'lab');
    expect(server.committed[uuidA]!['captured_by_sub'], 'user-1');
  });

  test('stamps the tenant on my capture that had none', () async {
    final id = await box.addCapture(uuid: uuidA, tenant: null);
    await startEngine();
    expect((await photo(id)).tenantSlug, 'lab');
    expect(server.committed, contains(uuidA));
  });

  test("leaves another account's capture alone, on the phone", () async {
    final id = await box.addCapture(uuid: uuidA, sub: 'someone-else');
    await startEngine();

    expect(server.requests, isEmpty);
    final p = await photo(id);
    expect(p.syncedAt, isNull);
    expect(p.capturedBySub, 'someone-else');
  });

  test('waits for Wi-Fi on cellular, then syncs when Wi-Fi arrives', () async {
    await box.addCapture(uuid: uuidA);
    await startEngine(initial: cellular);

    expect(server.requests, isEmpty);
    expect(engine.block, SyncBlock.waitingForWifi);
    expect(engine.statusText, 'Waiting for Wi-Fi. 1 capture to sync.');

    network.add(wifi);
    await engine.settle();
    expect(server.committed, contains(uuidA));
  });

  test('with cellular allowed, auto sync uses it', () async {
    await box.addCapture(uuid: uuidA);
    await startEngine(initial: cellular);
    await settings.setUseCellular(true);
    await engine.settle();

    expect(server.committed, contains(uuidA));
    expect(uploader.puts.every((u) => !u.wifiOnly), isTrue);
  });

  test('Sync now goes over cellular, and with automatic sync off', () async {
    await box.addCapture(uuid: uuidA);
    await startEngine(initial: cellular, settingsEnabled: false);
    expect(engine.block, SyncBlock.disabled);
    expect(server.requests, isEmpty);

    await engine.syncNow();
    expect(server.committed, contains(uuidA));
    expect(uploader.puts.every((u) => !u.wifiOnly), isTrue);
  });

  test('a capture saved while running syncs without anyone asking', () async {
    await startEngine();
    final id = await box.addCapture(uuid: uuidA);
    await engine.settle();
    expect((await photo(id)).syncedAt, isNotNull);
  });

  test('an edit after sync goes up as a new measurement version', () async {
    final id = await box.addCapture(uuid: uuidA);
    await startEngine();

    await DatabaseModel.addMeasurement(MeasurementVersion(
      photoId: id,
      clientMeasurementUuid: 'c0000000-0000-4000-8000-00000000000c',
      measuredAt: 1760000005000,
      lengthM: 0.45,
      snout: const Coordinate(x: 410, y: 800),
      fork: const Coordinate(x: 1400, y: 812),
      origin: MeasurementOrigin.manual,
    ));
    await engine.settle();

    final posted = server.measurements[uuidA]!.single;
    expect(openApi.validate(posted, 'MeasurementVersion'), isEmpty);
    expect(posted['origin'], 'manual');
    expect((await DatabaseModel.getMeasurements(id)).every((v) => v.syncedAt != null), isTrue);
  });

  test('a capture the server already has is marked synced; its versions still go up',
      () async {
    final id = await box.addCapture(uuid: uuidA);
    server.committed[uuidA] = {};
    await startEngine();

    expect(uploader.puts, isEmpty);
    expect(server.where('PUT', uuidA), isEmpty);
    expect((await photo(id)).syncedAt, isNotNull);
    expect(server.measurements[uuidA], hasLength(1), reason: 'idempotent on its UUID');
  });

  test('expired upload links are asked for again', () async {
    await box.addCapture(uuid: uuidA);
    uploader.outcomes.add(UploadOutcome.expired);
    await startEngine();

    expect(server.where('POST', '/uploads'), hasLength(2));
    expect(server.committed, contains(uuidA));
  });

  test('a refused capture keeps its reason, is skipped, and the rest carry on', () async {
    final a = await box.addCapture(uuid: uuidA);
    final b = await box.addCapture(uuid: uuidB, timestamp: 1760000009000);
    server.failures['PUT '] = (422, 'length_m must be positive');
    await startEngine();

    expect((await photo(a)).syncError, contains('422'));
    expect((await photo(b)).syncedAt, isNotNull);
    expect(engine.backlog.failed, 1);
    expect(engine.statusText, contains('refused'));

    // Not retried automatically...
    server.requests.clear();
    network.add(const NetworkStatus(connected: true, wifi: true, expensive: false, lowDataMode: false));
    await engine.settle();
    expect(server.where('PUT', uuidA), isEmpty);

    // ...but Sync now tries again.
    await engine.syncNow();
    expect((await photo(a)).syncedAt, isNotNull);
  });

  test('a 403 means another account: recorded, not retried', () async {
    final id = await box.addCapture(uuid: uuidA);
    server.failures['PUT '] = (403, 'captured_by_sub is not the caller');
    await startEngine();
    expect((await photo(id)).syncError, contains('another account'));
  });

  test('a server error stops the run and retries later, keeping the capture', () async {
    final id = await box.addCapture(uuid: uuidA);
    server.failures['POST /uploads'] = (503, 'unavailable');
    await startEngine();

    expect((await photo(id)).syncedAt, isNull);
    expect((await photo(id)).syncError, isNull);
    expect(engine.retryAt, isNotNull);
    expect(engine.lastError, contains('503'));

    // A new connection is the moment to try again.
    network.add(cellular);
    await settings.setUseCellular(true);
    await engine.settle();
    expect((await photo(id)).syncedAt, isNotNull);
  });

  test('a tenant without storage yet waits a long time, keeping everything', () async {
    final id = await box.addCapture(uuid: uuidA);
    server.failures['POST /uploads'] = (409, 'this tenant has no storage of its own yet');
    await startEngine();

    expect((await photo(id)).syncError, isNull);
    expect(engine.retryAt!.difference(DateTime.now()), greaterThan(const Duration(minutes: 50)));
  });

  test('signed out, nothing syncs and nothing is claimed', () async {
    FlutterSecureStorage.setMockInitialValues({});
    final id = await box.addCapture(uuid: uuidA, sub: null, tenant: null);
    await startEngine();

    expect(server.requests, isEmpty);
    expect(engine.block, SyncBlock.signedOut);
    expect((await photo(id)).capturedBySub, isNull);
  });

  test('without a chosen tenant, nothing syncs', () async {
    signedInKeychain(tenant: null);
    FlutterSecureStorage.setMockInitialValues({
      ...(await const FlutterSecureStorage().readAll()),
      'auth.tenants': jsonEncode([
        {'slug': 'lab', 'name': 'E4E Lab', 'role': 'member', 'is_admin': false},
        {'slug': 'angler', 'name': 'Angler', 'role': 'member', 'is_admin': false},
      ]),
    });
    await box.addCapture(uuid: uuidA, tenant: null);
    await startEngine();
    expect(engine.block, SyncBlock.noTenant);
    expect(server.requests, isEmpty);
  });

  test('two triggers at once make one run, not two', () async {
    await box.addCapture(uuid: uuidA);
    await startEngine(initial: cellular);
    unawaited(engine.syncNow());
    unawaited(engine.syncNow());
    await engine.settle();

    expect(server.where('POST', '/uploads'), hasLength(1));
    expect(uploader.puts, hasLength(5));
  });

  group('review fixes', () {
    const uuidC = 'c0000000-0000-4000-8000-0000000000cc';
    const uuidD = 'd0000000-0000-4000-8000-0000000000dd';

    test('a capture that keeps failing is put on hold; the ones behind it sync', () async {
      final a = await box.addCapture(uuid: uuidA);
      final b = await box.addCapture(uuid: uuidB, timestamp: 1760000009000);
      server.alwaysFail[uuidA] = (500, 'boom');
      await startEngine();

      expect((await photo(a)).syncedAt, isNull);
      expect((await photo(a)).syncError, isNull, reason: 'still retried later');
      expect((await photo(b)).syncedAt, isNotNull);
      expect(engine.retryAt, isNotNull);
      expect(engine.lastError, contains('500'));

      // A capture whose tenant the user left (404) doesn't block either.
      server.alwaysFail
        ..clear()
        ..[uuidC] = (404, 'not a member');
      final c = await box.addCapture(uuid: uuidC, timestamp: 1760000010000);
      final d = await box.addCapture(uuid: uuidD, timestamp: 1760000011000);
      await engine.syncNow();
      expect((await photo(c)).syncedAt, isNull);
      expect((await photo(d)).syncedAt, isNotNull);
      expect((await photo(a)).syncedAt, isNotNull, reason: 'Sync now retried it');
    });

    test('three failures in a row end the run: the server is likely down', () async {
      for (var i = 0; i < 5; i++) {
        await box.addCapture(
            uuid: 'e000000$i-0000-4000-8000-000000000000', timestamp: 1760000000000 + i);
      }
      for (var i = 0; i < 5; i++) {
        server.alwaysFail['e000000$i-0000-4000-8000-000000000000'] = (502, 'bad gateway');
      }
      await startEngine();
      expect(server.where('POST', '/uploads'), hasLength(3));
      expect(engine.retryAt, isNotNull);
    });

    test("another account's captures and edits are neither sent nor counted", () async {
      final mine = await box.addCapture(uuid: uuidA);
      final theirs = await box.addCapture(uuid: uuidB, sub: 'user-2', timestamp: 1760000009000);
      final db = await DatabaseModel.database;
      await db.update('photos', {'synced_at': 1}, where: 'id = ?', whereArgs: [theirs]);
      await DatabaseModel.addMeasurement(MeasurementVersion(
        photoId: theirs,
        clientMeasurementUuid: 'f0000000-0000-4000-8000-0000000000ff',
        measuredAt: 1760000010000,
        lengthM: 0.5,
        snout: const Coordinate(x: 1, y: 2),
        fork: const Coordinate(x: 3, y: 4),
        origin: MeasurementOrigin.manual,
      ));
      await box.addCapture(uuid: uuidC, sub: 'user-2', timestamp: 1760000011000);
      await startEngine();

      expect((await photo(mine)).syncedAt, isNotNull);
      expect(server.measurements[uuidB], isNull);
      expect(server.committed.keys, [uuidA]);
      expect(engine.backlog, (captures: 0, measurements: 0, failed: 0));
      expect(engine.statusText, 'All captures synced.');
    });

    test('a version without a length is never sent', () async {
      final id = await box.addCapture(uuid: uuidA);
      await startEngine();
      await (await DatabaseModel.database).insert('measurements', {
        'photo_id': id,
        'client_measurement_uuid': 'f1000000-0000-4000-8000-0000000000ff',
        'measured_at': 1760000020000,
        'length_m': 0.0,
        'snout_x': 1.0,
        'snout_y': 2.0,
        'fork_x': 3.0,
        'fork_y': 4.0,
        'origin': 'unknown',
      });
      await engine.syncNow();

      expect(server.measurements[uuidA], isNull);
      expect(engine.backlog.measurements, 0);
    });

    test('an upload waiting for Wi-Fi restarts over cellular once cellular is allowed',
        () async {
      await box.addCapture(uuid: uuidA);
      uploader.noWifi = true;
      await startEngine(settle: false);
      await until(() => uploader.puts.isNotEmpty);
      expect(engine.running, isTrue, reason: 'held waiting for Wi-Fi');
      expect(engine.canSyncNow, isTrue);

      await settings.setUseCellular(true);
      await engine.settle();
      expect(server.committed, contains(uuidA));
      expect(uploader.puts.last.wifiOnly, isFalse);
    });

    test('Sync now takes over an upload held back for Wi-Fi', () async {
      await box.addCapture(uuid: uuidA);
      uploader.noWifi = true;
      await startEngine(settle: false);
      await until(() => uploader.puts.isNotEmpty);

      await engine.syncNow();
      await engine.settle();
      expect(server.committed, contains(uuidA));
    });

    test('a Wi-Fi sign-in page (HTML with 200) ends the run and retries later', () async {
      final id = await box.addCapture(uuid: uuidA);
      server.captivePortal = true;
      await startEngine();

      expect((await photo(id)).syncedAt, isNull);
      expect(engine.retryAt, isNotNull);
      expect(engine.lastError, contains('sign-in page'));
    });

    test('a 401 after a token refresh asks the user to sign in again', () async {
      await box.addCapture(uuid: uuidA);
      server.alwaysFail[uuidA] = (401, 'invalid token');
      await startEngine();

      expect(auth.needsSignInAgain, isTrue);
      expect(engine.block, SyncBlock.signInExpired);
      final sent = server.requests.length;
      network.add(cellular);
      await engine.settle();
      expect(server.requests.length, sent, reason: 'no retries until signed in again');
    });
  });

  group('services review', () {
    test('a capture taken offline gets its place name before its first commit', () async {
      final id = await box.addCapture(uuid: uuidA, placeName: null);
      final asked = <(double, double)>[];
      await startEngine(placeName: (lat, lon) async {
        asked.add((lat, lon));
        return 'Scripps Pier';
      });

      expect(asked, [(32.88, -117.23)]);
      expect(server.committed[uuidA]!['location']['place_name'], 'Scripps Pier');
      expect((await photo(id)).placeName, 'Scripps Pier', reason: 'kept on the phone too');
    });

    test('a capture that has a place name is not geocoded again', () async {
      await box.addCapture(uuid: uuidA);
      var asked = 0;
      await startEngine(placeName: (_, __) async {
        asked++;
        return 'Elsewhere';
      });
      expect(asked, 0);
      expect(server.committed[uuidA]!['location']['place_name'], 'La Jolla Cove');
    });

    test('if geocoding fails, the capture syncs without a place name', () async {
      final id = await box.addCapture(uuid: uuidA, placeName: null);
      await startEngine(placeName: (_, __) async => throw Exception('rate limited'));

      expect((await photo(id)).syncedAt, isNotNull);
      final location = server.committed[uuidA]!['location'] as Map<String, dynamic>;
      expect(location['place_name'], isNull);
      expect(location['latitude'], 32.88, reason: 'the place can always be derived again');
    });

    test('refused even with fresh links says so, not "expired"', () async {
      await box.addCapture(uuid: uuidA);
      uploader.outcomes.addAll([UploadOutcome.expired, UploadOutcome.expired]);
      await startEngine();

      expect(server.where('POST', '/uploads'), hasLength(2));
      expect(engine.lastError, contains('refused the upload'));
      expect(engine.lastError, isNot(contains('expired')));
    });
  });
}
