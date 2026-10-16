import 'dart:convert';
import 'dart:io';
import 'dart:typed_data';

import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:http/http.dart' as http;
import 'package:http/testing.dart';
import 'package:path_provider_platform_interface/path_provider_platform_interface.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';
import 'package:sqflite_common_ffi/sqflite_ffi.dart';
import 'package:uuid/uuid.dart';

import 'package:fishsense_android/database.dart';
import 'package:fishsense_android/models.dart';
import 'package:fishsense_android/services/sync/uploader.dart';

/// A temp app sandbox: documents directory, database, staging root.
class Sandbox {
  Sandbox._(this.root);
  final Directory root;

  String get documents => root.path;
  Directory get staging => Directory('${root.path}/staging');

  static Future<Sandbox> create() async {
    sqfliteFfiInit();
    final root = await Directory.systemTemp.createTemp('fishsense_sync_test');
    PathProviderPlatform.instance = _FakePathProvider(root.path);
    final db = await databaseFactoryFfi.openDatabase(
      '${root.path}/database.sqlite',
      options: OpenDatabaseOptions(
        version: DatabaseModel.schemaVersion,
        onConfigure: DatabaseModel.configure,
        onCreate: DatabaseModel.createTables,
        onUpgrade: DatabaseModel.upgradeTables,
      ),
    );
    DatabaseModel.useDatabaseForTesting(db);
    return Sandbox._(root);
  }

  Future<void> dispose() async {
    await DatabaseModel.closeDatabase();
    await root.delete(recursive: true);
  }

  /// Save a capture the way the camera screen does, with a measurement.
  Future<int> addCapture({
    required String uuid,
    String? sub = 'user-1',
    String? tenant = 'lab',
    bool lossless = true,
    bool intrinsics = true,
    int timestamp = 1760000000000,
  }) async {
    final jpeg = 'rgb_$timestamp.jpg';
    File('$documents/$jpeg').writeAsBytesSync(List.filled(64, 7));
    String? png;
    if (lossless) {
      png = 'rgb_$timestamp.png';
      File('$documents/$png').writeAsBytesSync(List.filled(96, 9));
    }
    final id = await DatabaseModel.insertPhoto(
      PhotoModel.create(
        utcUnixTimestamp: timestamp,
        rgbPath: jpeg,
        rgbLosslessPath: png,
        depthMap: ByteMatrixModel(bytes: Uint8List(4 * 3 * 2), width: 3, height: 2),
        confidenceMap: ByteMatrixModel(bytes: Uint8List(3 * 2), width: 3, height: 2),
        depthRowBytes: 12,
        confidenceRowBytes: 3,
        maskBytes: Uint8List(4 * 3)..[5] = 255,
        maskWidth: 4,
        maskHeight: 3,
        intrinsicsBytes: intrinsics
            ? PhotoModel.encodeDoubles([1400, 0, 960, 0, 1400, 720, 0, 0, 1])
            : null,
        cameraPoseBytes: PhotoModel.encodeDoubles(List.generate(16, (i) => i.toDouble())),
        clientCaptureUuid: uuid,
        capturedBySub: sub,
        tenantSlug: tenant,
        installId: 'install-1',
        deviceModel: 'iPhone16,1',
        deviceInfo: 'Apple iPhone (iOS 27 - LiDAR Enabled)',
        appVersion: '1.1.0+12',
        coreVersion: 'fishsense_core-v4.1.0',
        modelVersion: 'fishial/1@f721445f37db',
        arkitTimestamp: 81234.5,
        latitude: 32.88,
        longitude: -117.23,
        horizontalAccuracy: 4.5,
        placeName: 'La Jolla Cove',
        captureOrientation: 'portrait',
        fishLength: 0.42,
      )!,
      measurement: MeasurementVersion(
        photoId: -1,
        clientMeasurementUuid: const Uuid().v4(),
        measuredAt: timestamp + 1000,
        lengthM: 0.42,
        snout: const Coordinate(x: 412.25, y: 803.5),
        fork: const Coordinate(x: 1398.75, y: 811.0),
        origin: MeasurementOrigin.auto,
        algorithm: MeasurementVersion.algorithmCompute,
        algorithmVersion: '1.1.0+12',
      ),
    );
    return id!;
  }
}

class _FakePathProvider extends PathProviderPlatform with MockPlatformInterfaceMixin {
  _FakePathProvider(this.documents);
  final String documents;

  @override
  Future<String?> getApplicationDocumentsPath() async => documents;
}

/// Keychain contents of a signed-in user with a fresh access token.
void signedInKeychain({String sub = 'user-1', String? tenant = 'lab'}) {
  FlutterSecureStorage.setMockInitialValues({
    'auth.sub': sub,
    'auth.refresh_token': 'refresh',
    'auth.access_token': 'access',
    'auth.access_token_expiry':
        DateTime.now().add(const Duration(hours: 1)).millisecondsSinceEpoch.toString(),
    'auth.tenants': jsonEncode([
      {'slug': 'lab', 'name': 'E4E Lab', 'role': 'member', 'is_admin': false},
    ]),
    if (tenant != null) 'auth.tenant_slug': tenant,
  });
}

/// fishsense-services' mobile endpoints, in memory.
class FakeServer {
  final requests = <http.Request>[];
  final committed = <String, Map<String, dynamic>>{};
  final measurements = <String, List<Map<String, dynamic>>>{};

  /// Answer with this status (and detail) instead, keyed by "METHOD suffix".
  final failures = <String, (int, String)>{};

  late final client = MockClient((request) async {
    requests.add(request);
    final path = request.url.path;
    final match = RegExp(r'^/tenants/([^/]+)/mobile/captures/([^/]+)(/uploads|/measurements)?$')
        .firstMatch(path);
    if (match == null) return http.Response('{"detail":"Not Found"}', 404);
    final uuid = match.group(2)!;
    final suffix = match.group(3) ?? '';
    final key = '${request.method} $suffix';
    if (failures.remove(key) case (final status, final detail)) {
      return http.Response(jsonEncode({'detail': detail}), status);
    }
    final body = jsonDecode(request.body) as Map<String, dynamic>;
    switch (key) {
      case 'POST /uploads':
        if (committed.containsKey(uuid)) {
          return http.Response(jsonEncode({'already_committed': true, 'uploads': []}), 200);
        }
        return http.Response(
          jsonEncode({
            'already_committed': false,
            'uploads': [
              for (final f in body['files'] as List<dynamic>)
                {
                  'role': f['role'],
                  'method': 'PUT',
                  'url': 'https://s3.test/$uuid/${f['role']}?X-Amz-Signature=abc',
                  'headers': {
                    'x-amz-checksum-sha256': 'b64-${f['sha256']}',
                    'Content-Length': '${f['size']}',
                    'Content-Type': f['role'] == 'rgb_jpeg' ? 'image/jpeg' : 'application/octet-stream',
                  },
                },
            ],
          }),
          200,
        );
      case 'PUT ':
        final first = !committed.containsKey(uuid);
        committed[uuid] = body;
        return http.Response('{}', first ? 201 : 200);
      case 'POST /measurements':
        (measurements[uuid] ??= []).add(body);
        return http.Response('{}', 201);
    }
    return http.Response('{"detail":"Method Not Allowed"}', 405);
  });

  List<http.Request> where(String method, String suffix) => [
        for (final r in requests)
          if (r.method == method && r.url.path.endsWith(suffix)) r,
      ];
}

/// Records uploads and answers with [outcomes] in order, then `done`.
class FakeUploader implements FileUploader {
  final puts = <({String url, Map<String, String> headers, bool wifiOnly, List<int> bytes})>[];
  final outcomes = <UploadOutcome>[];

  @override
  Future<UploadOutcome> put({
    required File file,
    required String url,
    required Map<String, String> headers,
    required bool wifiOnly,
  }) async {
    puts.add((url: url, headers: headers, wifiOnly: wifiOnly, bytes: file.readAsBytesSync()));
    return outcomes.isEmpty ? UploadOutcome.done : outcomes.removeAt(0);
  }
}
