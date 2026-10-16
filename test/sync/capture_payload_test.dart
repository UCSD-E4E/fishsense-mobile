import 'dart:io';

import 'package:crypto/crypto.dart';
import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/database.dart';
import 'package:fishsense_android/services/sync/capture_payload.dart';

import 'openapi_validator.dart';
import 'sync_fixtures.dart';

void main() {
  final api = OpenApi.load();
  late Sandbox box;

  setUp(() async => box = await Sandbox.create());
  tearDown(() => box.dispose());

  Future<CapturePayload> build(int id, {String? fallbackInstallId}) async =>
      buildCapturePayload(
        photo: (await DatabaseModel.getPhotoWithBlobs(id))!,
        versions: await DatabaseModel.getMeasurements(id),
        documentsDir: box.documents,
        stagingDir: Directory('${box.staging.path}/x'),
        fallbackInstallId: fallbackInstallId,
      );

  test('declares every file with the SHA-256 and size of its exact bytes', () async {
    final id = await box.addCapture(uuid: '6f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f');
    final payload = await build(id);

    expect(payload.declared.map((f) => f.role),
        ['rgb_jpeg', 'rgb_lossless', 'depth_f32', 'confidence_u8', 'mask_u8']);
    for (final f in payload.files) {
      final bytes = f.file.readAsBytesSync();
      expect(f.declared.size, bytes.length, reason: f.declared.role);
      expect(f.declared.sha256, sha256.convert(bytes).toString(), reason: f.declared.role);
    }
    // The server checks sizes against the geometry: rows × stride, w × h.
    expect(payload.fileFor('depth_f32').lengthSync(), 12 * 2);
    expect(payload.fileFor('confidence_u8').lengthSync(), 3 * 2);
    expect(payload.fileFor('mask_u8').lengthSync(), 4 * 3);
  });

  test('the upload request and the commit match the services OpenAPI', () async {
    final id = await box.addCapture(uuid: '6f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f');
    final payload = await build(id);

    expect(api.validate({'files': [for (final f in payload.declared) f.toJson()]}, 'UploadRequest'),
        isEmpty);
    expect(api.validate(payload.manifest, 'CaptureCommit'), isEmpty);
    expect(payload.manifest['captured_at'], '2025-10-09T08:53:20.000Z');
    expect(payload.manifest['camera_pose'], hasLength(16));
    expect(payload.manifest['arkit_timestamp'], 81234.5, reason: 'extra fields are kept');
    expect(payload.measurementIds, hasLength(1));
  });

  test('a capture carried over from v7 still validates, with nulls for the unknowns',
      () async {
    final id = await box.addCapture(
        uuid: '7f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f', lossless: false);
    final db = await DatabaseModel.database;
    await db.update('photos', {
      'app_version': null,
      'core_version': null,
      'model_version': null,
      'install_id': null,
      'camera_pose_bytes': null,
    });
    await db.update('measurements', {
      'origin': 'unknown',
      'algorithm': null,
      'algorithm_version': null,
    });

    final payload = await build(id, fallbackInstallId: 'install-now');
    expect(api.validate(payload.manifest, 'CaptureCommit'), isEmpty);
    expect(payload.declared.map((f) => f.role), isNot(contains('rgb_lossless')));
    expect(payload.manifest['device']['install_id'], 'install-now');
    expect(payload.manifest['app_version'], isNull);
    expect(payload.manifest['measurements'][0]['origin'], 'unknown');
  });

  test('the schema check is not vacuous', () async {
    final id = await box.addCapture(uuid: '6f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f');
    final manifest = Map<String, dynamic>.of((await build(id)).manifest)
      ..remove('captured_by_sub')
      ..['intrinsics'] = [1.0, 2.0]
      ..['measurements'] = [
        {...(await build(id)).manifest['measurements'][0], 'origin': 'guessed'},
      ];
    final errors = api.validate(manifest, 'CaptureCommit');
    expect(errors, contains(contains('captured_by_sub')));
    expect(errors, contains(contains('intrinsics')));
    expect(errors, contains(contains('guessed')));
  });

  test('every measurement version validates on its own too', () async {
    final id = await box.addCapture(uuid: '6f1c2d4e-8a9b-4c3d-9e8f-0a1b2c3d4e5f');
    for (final v in await DatabaseModel.getMeasurements(id)) {
      expect(api.validate(measurementJson(v), 'MeasurementVersion'), isEmpty);
    }
  });

  test('refuses what the server would: no intrinsics, wrong depth size, no JPEG', () async {
    final noK = await box.addCapture(uuid: 'a1000000-0000-4000-8000-000000000001', intrinsics: false);
    expect(() => build(noK), throwsA(isA<PayloadException>()));

    final badDepth = await box.addCapture(
        uuid: 'a1000000-0000-4000-8000-000000000002', timestamp: 1760000001000);
    await (await DatabaseModel.database)
        .update('photos', {'depth_row_bytes': 16}, where: 'id = ?', whereArgs: [badDepth]);
    expect(() => build(badDepth), throwsA(isA<PayloadException>()));

    final noJpeg = await box.addCapture(
        uuid: 'a1000000-0000-4000-8000-000000000003', timestamp: 1760000002000);
    File('${box.documents}/rgb_1760000002000.jpg').deleteSync();
    expect(() => build(noJpeg), throwsA(isA<PayloadException>()));
  });
}
