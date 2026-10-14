import 'dart:typed_data';

/// PhotoModel - Main entity for storing photo data with depth information
/// Direct translation from Swift/FishSense/Models/PhotoModel.swift
class PhotoModel {
  final int id;
  final int utcUnixTimestamp;
  final String rgbPath;
  final ByteMatrixModel depthMap;
  final ByteMatrixModel confidenceMap;
  final String? deviceInfo;        // Existing device info field
  final double? fishLength;        // Fish length measurement in meters

  /// Segmentation mask bytes (row-major, one byte per pixel, nonzero = fish).
  /// Dimensions match the captured RGB frame.
  final Uint8List? maskBytes;
  final int? maskWidth;
  final int? maskHeight;

  /// Detected snout / fork points in captured-frame pixel coordinates.
  final double? snoutX;
  final double? snoutY;
  final double? forkX;
  final double? forkY;

  /// Device orientation at the time of capture ("portrait" or "landscape").
  /// Used by the detail viewer so the sensor-native landscape pixels are
  /// shown the way the user framed them.
  final String? captureOrientation;

  /// GPS fix at capture time. Null when services are off, permission is
  /// denied, or no fix arrived before the acquisition timeout.
  final double? latitude;
  final double? longitude;
  final double? horizontalAccuracy;

  /// Reverse-geocoded friendly name for the capture location
  /// (e.g. "Mission Bay, CA"). Null when geocoding failed — either no
  /// network at capture or the fix landed somewhere the geocoder can't
  /// label. The raw lat/lon above are always preserved regardless.
  final String? placeName;

  /// Camera intrinsics for the captured frame: 9 little-endian f64
  /// values, row-major K. Required to reproduce the on-device length
  /// math exactly during post-hoc analysis. Encode/decode via
  /// [encodeIntrinsics] / [decodeIntrinsics].
  final Uint8List? intrinsicsBytes;

  /// Sync idempotency key (UUID v4), generated when the capture is taken.
  final String? clientCaptureUuid;

  /// Who took the capture and for which tenant: the ID token's `sub` and
  /// the tenant slug at capture time. Null until the app has sign-in; the
  /// server only lets this `sub` sync the capture.
  final String? capturedBySub;
  final String? tenantSlug;

  /// Per-install UUID (kept in the Keychain), so one phone is one device.
  final String? installId;

  /// Hardware model identifier, e.g. "iPhone16,1".
  final String? deviceModel;

  /// Provenance: the app build, fishsense-core release, and segmentation
  /// weights (`name/version@sha256[:12]`) that produced the capture.
  final String? appVersion;
  final String? coreVersion;
  final String? modelVersion;

  /// Row strides of [depthMap] / [confidenceMap]. ARKit can pad rows and
  /// the stored bytes keep that padding, so these are needed to decode them.
  final int? depthRowBytes;
  final int? confidenceRowBytes;

  /// ARKit camera-to-world transform: 16 little-endian f64, row-major.
  /// Encode/decode via [encodeDoubles] / [decodeDoubles].
  final Uint8List? cameraPoseBytes;

  /// The ARKit frame's `timestamp` (seconds of device uptime).
  final double? arkitTimestamp;

  /// Filename of the lossless PNG of the exact frame `compute_length`
  /// segmented. The JPEG at [rgbPath] is lossy, so this is what makes the
  /// measurement reproducible. Null for captures taken before v8.
  final String? rgbLosslessPath;

  /// When the capture was committed to fishsense-services (ms since epoch
  /// UTC), or null if it hasn't been.
  final int? syncedAt;

  PhotoModel({
    required this.id,
    required this.utcUnixTimestamp,
    required this.rgbPath,
    required this.depthMap,
    required this.confidenceMap,
    this.deviceInfo,              // Optional device info
    this.fishLength,              // Optional fish length
    this.maskBytes,
    this.maskWidth,
    this.maskHeight,
    this.snoutX,
    this.snoutY,
    this.forkX,
    this.forkY,
    this.captureOrientation,
    this.latitude,
    this.longitude,
    this.horizontalAccuracy,
    this.placeName,
    this.intrinsicsBytes,
    this.clientCaptureUuid,
    this.capturedBySub,
    this.tenantSlug,
    this.installId,
    this.deviceModel,
    this.appVersion,
    this.coreVersion,
    this.modelVersion,
    this.depthRowBytes,
    this.confidenceRowBytes,
    this.cameraPoseBytes,
    this.arkitTimestamp,
    this.rgbLosslessPath,
    this.syncedAt,
  });

  /// Factory constructor - equivalent to Swift init?() method
  static PhotoModel? create({
    required int utcUnixTimestamp,
    required String rgbPath,
    required ByteMatrixModel depthMap,
    required ByteMatrixModel confidenceMap,
    String? deviceInfo,
    double? fishLength,           // Optional fish length parameter
    Uint8List? maskBytes,
    int? maskWidth,
    int? maskHeight,
    double? snoutX,
    double? snoutY,
    double? forkX,
    double? forkY,
    String? captureOrientation,
    double? latitude,
    double? longitude,
    double? horizontalAccuracy,
    String? placeName,
    Uint8List? intrinsicsBytes,
    String? clientCaptureUuid,
    String? capturedBySub,
    String? tenantSlug,
    String? installId,
    String? deviceModel,
    String? appVersion,
    String? coreVersion,
    String? modelVersion,
    int? depthRowBytes,
    int? confidenceRowBytes,
    Uint8List? cameraPoseBytes,
    double? arkitTimestamp,
    String? rgbLosslessPath,
    int id = -1,
  }) {
    return PhotoModel(
      id: id,
      utcUnixTimestamp: utcUnixTimestamp,
      rgbPath: rgbPath,
      depthMap: depthMap,
      confidenceMap: confidenceMap,
      deviceInfo: deviceInfo,
      fishLength: fishLength,     // Pass fish length to constructor
      maskBytes: maskBytes,
      maskWidth: maskWidth,
      maskHeight: maskHeight,
      snoutX: snoutX,
      snoutY: snoutY,
      forkX: forkX,
      forkY: forkY,
      captureOrientation: captureOrientation,
      latitude: latitude,
      longitude: longitude,
      horizontalAccuracy: horizontalAccuracy,
      placeName: placeName,
      intrinsicsBytes: intrinsicsBytes,
      clientCaptureUuid: clientCaptureUuid,
      capturedBySub: capturedBySub,
      tenantSlug: tenantSlug,
      installId: installId,
      deviceModel: deviceModel,
      appVersion: appVersion,
      coreVersion: coreVersion,
      modelVersion: modelVersion,
      depthRowBytes: depthRowBytes,
      confidenceRowBytes: confidenceRowBytes,
      cameraPoseBytes: cameraPoseBytes,
      arkitTimestamp: arkitTimestamp,
      rgbLosslessPath: rgbLosslessPath,
    );
  }

  /// Pack a 9-element row-major K matrix into 72 bytes (9 × f64
  /// little-endian) for the `intrinsics_bytes` BLOB column. Returns
  /// null if `intrinsics` is empty so callers can pass through the
  /// "no intrinsics available" case (e.g. mock-data path) unchanged.
  static Uint8List? encodeIntrinsics(List<double>? intrinsics) =>
      encodeDoubles(intrinsics);

  /// Inverse of [encodeIntrinsics]. Returns null when the BLOB is
  /// missing or has a non-multiple-of-8 length.
  static List<double>? decodeIntrinsics(Uint8List? bytes) =>
      decodeDoubles(bytes);

  /// Pack doubles as little-endian f64 for a BLOB column (intrinsics,
  /// camera pose). Returns null for a null or empty list.
  static Uint8List? encodeDoubles(List<double>? values) {
    if (values == null || values.isEmpty) return null;
    final bd = ByteData(values.length * 8);
    for (var i = 0; i < values.length; i++) {
      bd.setFloat64(i * 8, values[i], Endian.little);
    }
    return bd.buffer.asUint8List();
  }

  /// Inverse of [encodeDoubles]. Returns null when the BLOB is missing or
  /// has a non-multiple-of-8 length.
  static List<double>? decodeDoubles(Uint8List? bytes) {
    if (bytes == null || bytes.isEmpty || bytes.length % 8 != 0) return null;
    final bd = ByteData.sublistView(bytes);
    final n = bytes.length ~/ 8;
    return List<double>.generate(n, (i) => bd.getFloat64(i * 8, Endian.little));
  }

  /// Convert to Map for database storage
  Map<String, dynamic> toMap() {
    return {
      'id': id == -1 ? null : id,
      'utc_unix_timestamp': utcUnixTimestamp,
      'rgb_path': rgbPath,
      'depth_bytes': depthMap.bytes,
      'depth_width': depthMap.width,
      'depth_height': depthMap.height,
      'confidence_bytes': confidenceMap.bytes,
      'confidence_width': confidenceMap.width,
      'confidence_height': confidenceMap.height,
      'device_info': deviceInfo,
      'fish_length': fishLength,  // Include fish length in database map
      'mask_bytes': maskBytes,
      'mask_width': maskWidth,
      'mask_height': maskHeight,
      'snout_x': snoutX,
      'snout_y': snoutY,
      'fork_x': forkX,
      'fork_y': forkY,
      'capture_orientation': captureOrientation,
      'latitude': latitude,
      'longitude': longitude,
      'horizontal_accuracy': horizontalAccuracy,
      'place_name': placeName,
      'intrinsics_bytes': intrinsicsBytes,
      'client_capture_uuid': clientCaptureUuid,
      'captured_by_sub': capturedBySub,
      'tenant_slug': tenantSlug,
      'install_id': installId,
      'device_model': deviceModel,
      'app_version': appVersion,
      'core_version': coreVersion,
      'model_version': modelVersion,
      'depth_row_bytes': depthRowBytes,
      'confidence_row_bytes': confidenceRowBytes,
      'camera_pose_bytes': cameraPoseBytes,
      'arkit_timestamp': arkitTimestamp,
      'rgb_lossless_path': rgbLosslessPath,
      'synced_at': syncedAt,
    };
  }

  /// Create from database Map
  static PhotoModel fromMap(Map<String, dynamic> map) {
    final rawMask = map['mask_bytes'];
    final Uint8List? mask = rawMask is Uint8List
        ? rawMask
        : (rawMask is List<int> ? Uint8List.fromList(rawMask) : null);
    final rawIntrinsics = map['intrinsics_bytes'];
    final Uint8List? intrinsics = rawIntrinsics is Uint8List
        ? rawIntrinsics
        : (rawIntrinsics is List<int> ? Uint8List.fromList(rawIntrinsics) : null);
    final rawPose = map['camera_pose_bytes'];
    final Uint8List? pose = rawPose is Uint8List
        ? rawPose
        : (rawPose is List<int> ? Uint8List.fromList(rawPose) : null);
    return PhotoModel(
      id: map['id'],
      utcUnixTimestamp: map['utc_unix_timestamp'],
      rgbPath: map['rgb_path'],
      depthMap: ByteMatrixModel(
        bytes: map['depth_bytes'],
        width: map['depth_width'],
        height: map['depth_height'],
      ),
      confidenceMap: ByteMatrixModel(
        bytes: map['confidence_bytes'],
        width: map['confidence_width'],
        height: map['confidence_height'],
      ),
      deviceInfo: map['device_info'],
      fishLength: map['fish_length']?.toDouble(),
      maskBytes: mask,
      maskWidth: map['mask_width'] as int?,
      maskHeight: map['mask_height'] as int?,
      snoutX: (map['snout_x'] as num?)?.toDouble(),
      snoutY: (map['snout_y'] as num?)?.toDouble(),
      forkX: (map['fork_x'] as num?)?.toDouble(),
      forkY: (map['fork_y'] as num?)?.toDouble(),
      captureOrientation: map['capture_orientation'] as String?,
      latitude: (map['latitude'] as num?)?.toDouble(),
      longitude: (map['longitude'] as num?)?.toDouble(),
      horizontalAccuracy: (map['horizontal_accuracy'] as num?)?.toDouble(),
      placeName: map['place_name'] as String?,
      intrinsicsBytes: intrinsics,
      clientCaptureUuid: map['client_capture_uuid'] as String?,
      capturedBySub: map['captured_by_sub'] as String?,
      tenantSlug: map['tenant_slug'] as String?,
      installId: map['install_id'] as String?,
      deviceModel: map['device_model'] as String?,
      appVersion: map['app_version'] as String?,
      coreVersion: map['core_version'] as String?,
      modelVersion: map['model_version'] as String?,
      depthRowBytes: map['depth_row_bytes'] as int?,
      confidenceRowBytes: map['confidence_row_bytes'] as int?,
      cameraPoseBytes: pose,
      arkitTimestamp: (map['arkit_timestamp'] as num?)?.toDouble(),
      rgbLosslessPath: map['rgb_lossless_path'] as String?,
      syncedAt: map['synced_at'] as int?,
    );
  }
}

/// Who placed a measurement's snout and fork points.
enum MeasurementOrigin {
  /// The phone found them (`compute_length`).
  auto,

  /// The user placed them (`recompute_length`).
  manual,

  /// Carried over from a pre-v8 row. v7 overwrote a manual edit in place,
  /// so whether these points were the phone's or the user's is lost.
  unknown,
}

/// One version of a capture's measurement. Every `compute_length` or
/// `recompute_length` result is a new version and none is overwritten;
/// the latest by [measuredAt] is the capture's current length.
class MeasurementVersion {
  final int? id;
  final int photoId;

  /// Sync idempotency key (UUID v4), generated when the version is made.
  final String clientMeasurementUuid;

  /// When it was measured, ms since epoch UTC.
  final int measuredAt;
  final double lengthM;

  /// Points in RGB-frame pixels (the mask's frame), as floats.
  final Coordinate snout;
  final Coordinate fork;

  final MeasurementOrigin origin;

  /// What produced it, e.g. `fishsense-mobile.compute_length`, and the app
  /// build that ran it. Null on versions carried over from before v8.
  final String? algorithm;
  final String? algorithmVersion;
  final String? coreVersion;
  final String? modelVersion;

  /// When it was sent to fishsense-services (ms since epoch UTC), or null.
  final int? syncedAt;

  static const algorithmCompute = 'fishsense-mobile.compute_length';
  static const algorithmRecompute = 'fishsense-mobile.recompute_length';

  const MeasurementVersion({
    this.id,
    required this.photoId,
    required this.clientMeasurementUuid,
    required this.measuredAt,
    required this.lengthM,
    required this.snout,
    required this.fork,
    required this.origin,
    this.algorithm,
    this.algorithmVersion,
    this.coreVersion,
    this.modelVersion,
    this.syncedAt,
  });

  /// The same version attached to [photoId]; used when the photo row's id
  /// is only known after it has been inserted.
  MeasurementVersion forPhoto(int photoId) => MeasurementVersion(
        id: id,
        photoId: photoId,
        clientMeasurementUuid: clientMeasurementUuid,
        measuredAt: measuredAt,
        lengthM: lengthM,
        snout: snout,
        fork: fork,
        origin: origin,
        algorithm: algorithm,
        algorithmVersion: algorithmVersion,
        coreVersion: coreVersion,
        modelVersion: modelVersion,
        syncedAt: syncedAt,
      );

  Map<String, dynamic> toMap() => {
        if (id != null) 'id': id,
        'photo_id': photoId,
        'client_measurement_uuid': clientMeasurementUuid,
        'measured_at': measuredAt,
        'length_m': lengthM,
        'snout_x': snout.x,
        'snout_y': snout.y,
        'fork_x': fork.x,
        'fork_y': fork.y,
        'origin': origin.name,
        'algorithm': algorithm,
        'algorithm_version': algorithmVersion,
        'core_version': coreVersion,
        'model_version': modelVersion,
        'synced_at': syncedAt,
      };

  static MeasurementVersion fromMap(Map<String, dynamic> map) =>
      MeasurementVersion(
        id: map['id'] as int?,
        photoId: map['photo_id'] as int,
        clientMeasurementUuid: map['client_measurement_uuid'] as String,
        measuredAt: map['measured_at'] as int,
        lengthM: (map['length_m'] as num).toDouble(),
        snout: Coordinate(
          x: (map['snout_x'] as num).toDouble(),
          y: (map['snout_y'] as num).toDouble(),
        ),
        fork: Coordinate(
          x: (map['fork_x'] as num).toDouble(),
          y: (map['fork_y'] as num).toDouble(),
        ),
        origin: MeasurementOrigin.values.byName(map['origin'] as String),
        algorithm: map['algorithm'] as String?,
        algorithmVersion: map['algorithm_version'] as String?,
        coreVersion: map['core_version'] as String?,
        modelVersion: map['model_version'] as String?,
        syncedAt: map['synced_at'] as int?,
      );
}

/// ByteMatrixModel - Stores depth/confidence map data
/// Direct translation from Swift/FishSense/Models/PhotoModel.swift
class ByteMatrixModel {
  final List<int>? bytes;  // UnsafeRawPointer equivalent
  final int width;
  final int height;

  ByteMatrixModel({
    required this.bytes,
    required this.width,
    required this.height,
  });

  /// Factory constructor - equivalent to Swift init?() method
  static ByteMatrixModel? create({
    required List<int>? bytes,
    required int width,
    required int height,
  }) {
    return ByteMatrixModel(
      bytes: bytes,
      width: width,
      height: height,
    );
  }
}

/// DataTemp - For gallery display with metadata
/// Direct translation from Swift/FishSense/ImageGallery.swift
class DataTemp {
  final String id;
  final int photoId; // DB primary key — used to lazily fetch the mask blob.
  final List<int> image;  // UIImage equivalent as bytes
  final DateTime creationDate;
  final double? fishLen;   // Changed from int? to double? to match PhotoModel
  final String? deviceInfo; // Include device info for gallery display

  /// GPS fix for this capture, or null if none was recorded.
  final double? latitude;
  final double? longitude;
  final double? horizontalAccuracy;

  /// Reverse-geocoded label for the capture location, or null when
  /// geocoding wasn't possible. Raw lat/lon are kept above in both cases.
  final String? placeName;

  DataTemp({
    required this.photoId,
    required this.image,
    required this.creationDate,
    this.fishLen,           // Fish length from PhotoModel.fishLength
    this.deviceInfo,        // Device info from PhotoModel.deviceInfo
    this.latitude,
    this.longitude,
    this.horizontalAccuracy,
    this.placeName,
  }) : id = DateTime.now().millisecondsSinceEpoch.toString();

  /// Return a copy with the given fields replaced. Used by the gallery's
  /// lazy geocode pass to swap in a backfilled placeName without rebuilding
  /// the rest of the record (image bytes, etc.).
  DataTemp copyWith({String? placeName}) {
    return DataTemp(
      photoId: photoId,
      image: image,
      creationDate: creationDate,
      fishLen: fishLen,
      deviceInfo: deviceInfo,
      latitude: latitude,
      longitude: longitude,
      horizontalAccuracy: horizontalAccuracy,
      placeName: placeName ?? this.placeName,
    );
  }

  /// Check equality for gallery updates
  @override
  bool operator ==(Object other) =>
      identical(this, other) ||
      other is DataTemp &&
          runtimeType == other.runtimeType &&
          id == other.id;

  @override
  int get hashCode => id.hashCode;
}

/// ComputeLengthResult - Result from Rust pipeline
/// Direct translation from rust-bridge/src/lib.rs
class Coordinate {
  final double x;
  final double y;

  const Coordinate({
    required this.x,
    required this.y,
  });
  
  // Static constants for default values
  static const zero = Coordinate(x: 0, y: 0);
  
  @override
  String toString() => 'Coordinate(x: $x, y: $y)';
  
  @override
  bool operator ==(Object other) =>
      identical(this, other) ||
      other is Coordinate &&
          runtimeType == other.runtimeType &&
          x == other.x &&
          y == other.y;

  @override
  int get hashCode => x.hashCode ^ y.hashCode;
}

/// ComputeLengthResult - Enhanced result from Rust pipeline
/// Includes both coordinate data AND Phase 4 enhancements
class ComputeLengthResult {
  final double length;
  final bool fishFound;
  final String? errorString;
  

  final Coordinate left;
  final Coordinate right;
  

  final double confidence;
  final Uint8List? imageWithDots;

  /// Segmentation mask bytes (row-major, one byte per pixel, nonzero = fish).
  /// Dimensions match the captured RGB frame.
  final Uint8List? mask;
  final int maskWidth;
  final int maskHeight;

  ComputeLengthResult({
    required this.length,
    required this.fishFound,
    this.errorString,
    // Coordinate properties with defaults
    Coordinate? left,
    Coordinate? right,


    this.confidence = 0.0,
    this.imageWithDots,
    this.mask,
    this.maskWidth = 0,
    this.maskHeight = 0,
  }) : left = left ?? Coordinate.zero,
       right = right ?? Coordinate.zero;

  /// Factory constructor for successful fish detection with coordinates
  factory ComputeLengthResult.success({
    required double length,
    required Coordinate left,
    required Coordinate right,
    double confidence = 0.0,
    Uint8List? imageWithDots,
    Uint8List? mask,
    int maskWidth = 0,
    int maskHeight = 0,
  }) {
    return ComputeLengthResult(
      length: length,
      fishFound: true,
      left: left,
      right: right,
      confidence: confidence,
      imageWithDots: imageWithDots,
      mask: mask,
      maskWidth: maskWidth,
      maskHeight: maskHeight,
    );
  }

  /// Factory constructor for fish not found
  factory ComputeLengthResult.notFound({
    String? errorString,
  }) {
    return ComputeLengthResult(
      length: 0.0,
      fishFound: false,
      errorString: errorString,
      left: Coordinate.zero,
      right: Coordinate.zero,
      confidence: 0.0,
    );
  }

  /// Factory constructor for errors
  factory ComputeLengthResult.error({
    required String errorString,
  }) {
    return ComputeLengthResult(
      length: 0.0,
      fishFound: false,
      errorString: errorString,
      left: Coordinate.zero,
      right: Coordinate.zero,
      confidence: 0.0,
    );
  }

  /// Create result from platform channel data (for Flutter ↔ iOS communication)
  factory ComputeLengthResult.fromMap(Map<dynamic, dynamic> map) {
    final rawMask = map['mask'];
    final Uint8List? mask = rawMask is Uint8List
        ? rawMask
        : (rawMask is List<int> ? Uint8List.fromList(rawMask) : null);
    return ComputeLengthResult(
      length: (map['length'] ?? 0.0).toDouble(),
      fishFound: map['fishFound'] ?? false,
      errorString: map['errorString'],
      left: Coordinate(
        x: (map['leftX'] ?? 0.0).toDouble(),
        y: (map['leftY'] ?? 0.0).toDouble(),
      ),
      right: Coordinate(
        x: (map['rightX'] ?? 0.0).toDouble(),
        y: (map['rightY'] ?? 0.0).toDouble(),
      ),
      confidence: (map['confidence'] ?? 0.0).toDouble(),
      imageWithDots: map['imageWithDots'],
      mask: mask,
      maskWidth: (map['maskWidth'] ?? 0) as int,
      maskHeight: (map['maskHeight'] ?? 0) as int,
    );
  }

  /// Convert to map for platform channel communication
  Map<String, dynamic> toMap() {
    return {
      'length': length,
      'fishFound': fishFound,
      'errorString': errorString,
      'leftX': left.x,
      'leftY': left.y,
      'rightX': right.x,
      'rightY': right.y,
      'confidence': confidence,
      'imageWithDots': imageWithDots,
    };
  }

  @override
  String toString() {
    if (!fishFound) {
      return 'ComputeLengthResult(fishFound: false, error: $errorString)';
    }
    return 'ComputeLengthResult(length: ${length.toStringAsFixed(3)}m, '
           'left: $left, right: $right,})';
  }

  @override
  bool operator ==(Object other) =>
      identical(this, other) ||
      other is ComputeLengthResult &&
          runtimeType == other.runtimeType &&
          length == other.length &&
          fishFound == other.fishFound &&
          left == other.left &&
          right == other.right &&
          confidence == other.confidence;

  @override
  int get hashCode => 
      length.hashCode ^ 
      fishFound.hashCode ^ 
      left.hashCode ^ 
      right.hashCode ^ 
      confidence.hashCode;
}
