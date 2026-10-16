import 'dart:io';
import 'dart:isolate';
import 'dart:typed_data';

import 'package:crypto/crypto.dart';
import 'package:path/path.dart' as p;

import '../../models.dart';
import 'sync_api.dart';

/// The capture can't be synced as it is (e.g. it predates something the
/// server requires). Recorded on the row; not retried automatically.
class PayloadException implements Exception {
  final String message;
  const PayloadException(this.message);

  @override
  String toString() => message;
}

/// A file ready to upload, and what was declared for it.
class StagedFile {
  final DeclaredFile declared;
  final File file;
  const StagedFile(this.declared, this.file);
}

/// Everything one capture's sync sends.
class CapturePayload {
  final List<StagedFile> files;

  /// The commit body (`CaptureCommit` in the services' OpenAPI).
  final Map<String, dynamic> manifest;

  /// The measurement versions [manifest] carries.
  final List<int> measurementIds;

  const CapturePayload(this.files, this.manifest, this.measurementIds);

  List<DeclaredFile> get declared => [for (final f in files) f.declared];

  File fileFor(String role) => files.firstWhere((f) => f.declared.role == role).file;
}

/// ISO 8601 UTC, e.g. `2026-10-11T17:30:00.123Z`.
String isoUtc(int millisecondsSinceEpoch) =>
    DateTime.fromMillisecondsSinceEpoch(millisecondsSinceEpoch, isUtc: true)
        .toIso8601String();

/// A measurement version as the server takes it (`MeasurementVersion`).
/// Unknown provenance stays null, never made up.
Map<String, dynamic> measurementJson(MeasurementVersion v) => {
      'client_measurement_uuid': v.clientMeasurementUuid,
      'measured_at': isoUtc(v.measuredAt),
      'length_m': v.lengthM,
      'snout': {'x': v.snout.x, 'y': v.snout.y},
      'fork': {'x': v.fork.x, 'y': v.fork.y},
      'origin': v.origin.name,
      'algorithm': v.algorithm,
      'algorithm_version': v.algorithmVersion,
      'core_version': v.coreVersion,
      'model_version': v.modelVersion,
    };

/// Stage [photo]'s files in [stagingDir] and build its commit manifest
/// (SYNC.md §3, §5). Images are read from [documentsDir]; depth, confidence
/// and mask are written out from their BLOBs exactly as stored, padding
/// included, since the server checks each size against the geometry.
///
/// [photo] must already be claimed (have `captured_by_sub`). Throws
/// [PayloadException] for a capture the server would refuse.
Future<CapturePayload> buildCapturePayload({
  required PhotoModel photo,
  required List<MeasurementVersion> versions,
  required String documentsDir,
  required Directory stagingDir,
  String? fallbackInstallId,
}) async {
  final sub = photo.capturedBySub;
  if (sub == null) throw const PayloadException('Capture has no capturer.');
  final installId = photo.installId ?? fallbackInstallId;
  if (installId == null) throw const PayloadException('No install ID.');
  final intrinsics = PhotoModel.decodeDoubles(photo.intrinsicsBytes);
  if (intrinsics == null || intrinsics.length != 9) {
    throw const PayloadException('No camera intrinsics (taken before v7).');
  }
  final depthRowBytes = photo.depthRowBytes;
  final depth = photo.depthMap.bytes;
  if (depth == null || depthRowBytes == null || depthRowBytes <= 0) {
    throw const PayloadException('No depth map.');
  }
  if (depth.length != depthRowBytes * photo.depthMap.height) {
    throw PayloadException('Depth is ${depth.length} bytes, expected '
        '$depthRowBytes × ${photo.depthMap.height}.');
  }
  final confidence = photo.confidenceMap.bytes;
  if (confidence == null) throw const PayloadException('No confidence map.');
  final confidenceRowBytes = photo.confidenceRowBytes;
  if (confidenceRowBytes != null &&
      confidence.length != confidenceRowBytes * photo.confidenceMap.height) {
    throw PayloadException('Confidence is ${confidence.length} bytes, expected '
        '$confidenceRowBytes × ${photo.confidenceMap.height}.');
  }
  final mask = photo.maskBytes;
  final hasMask = mask != null && photo.maskWidth != null && photo.maskHeight != null;
  if (hasMask && mask.length != photo.maskWidth! * photo.maskHeight!) {
    throw const PayloadException('Mask size does not match its geometry.');
  }

  await stagingDir.create(recursive: true);
  final files = <StagedFile>[];

  // Reading, writing and hashing megabytes is kept off the UI isolate.
  Future<void> addExisting(String role, File file) async {
    final path = file.path;
    final (digest, size) = await Isolate.run(() {
      final bytes = File(path).readAsBytesSync();
      return (sha256.convert(bytes).toString(), bytes.length);
    });
    files.add(StagedFile(DeclaredFile(role: role, sha256: digest, size: size), file));
  }

  // Written out exactly as stored; hashed from the same bytes in memory.
  Future<void> addStaged(String role, List<int> bytes) async {
    final path = p.join(stagingDir.path, '$role.bin');
    final data = bytes is Uint8List ? bytes : Uint8List.fromList(bytes);
    final digest = await Isolate.run(() {
      File(path).writeAsBytesSync(data, flush: true);
      return sha256.convert(data).toString();
    });
    files.add(StagedFile(
      DeclaredFile(role: role, sha256: digest, size: data.length),
      File(path),
    ));
  }

  final jpeg = File(p.join(documentsDir, photo.rgbPath));
  if (!jpeg.existsSync()) throw PayloadException('${photo.rgbPath} is missing.');
  await addExisting('rgb_jpeg', jpeg);
  if (photo.rgbLosslessPath case final png?) {
    final file = File(p.join(documentsDir, png));
    if (file.existsSync()) await addExisting('rgb_lossless', file);
  }
  await addStaged('depth_f32', depth);
  await addStaged('confidence_u8', confidence);
  if (hasMask) await addStaged('mask_u8', mask);

  final pose = PhotoModel.decodeDoubles(photo.cameraPoseBytes);
  final usable = [for (final v in versions) if (v.lengthM > 0) v];
  final manifest = <String, dynamic>{
    'captured_at': isoUtc(photo.utcUnixTimestamp),
    'captured_by_sub': sub,
    'device': {
      'install_id': installId,
      'model': photo.deviceModel,
      'info': photo.deviceInfo,
    },
    'app_version': photo.appVersion,
    'core_version': photo.coreVersion,
    'model_version': photo.modelVersion,
    if (photo.latitude != null && photo.longitude != null)
      'location': {
        'latitude': photo.latitude,
        'longitude': photo.longitude,
        'horizontal_accuracy_m': photo.horizontalAccuracy,
        'place_name': photo.placeName,
      },
    'orientation': photo.captureOrientation,
    'intrinsics': intrinsics,
    if (pose != null && pose.length == 16) 'camera_pose': pose,
    'depth': {
      'width': photo.depthMap.width,
      'height': photo.depthMap.height,
      'row_bytes': depthRowBytes,
    },
    'confidence': {
      'width': photo.confidenceMap.width,
      'height': photo.confidenceMap.height,
      'row_bytes': confidenceRowBytes,
    },
    if (hasMask) 'mask': {'width': photo.maskWidth, 'height': photo.maskHeight},
    'files': [for (final f in files) f.declared.toJson()],
    'measurements': [for (final v in usable) measurementJson(v)],
    // Not modelled by the server, but kept with the manifest.
    if (photo.arkitTimestamp != null) 'arkit_timestamp': photo.arkitTimestamp,
  };
  return CapturePayload(files, manifest, [for (final v in usable) v.id!]);
}
