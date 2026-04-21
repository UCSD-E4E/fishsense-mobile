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
  final double? fishLength;        // Fish length measurement in cm

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
    );
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
    };
  }

  /// Create from database Map
  static PhotoModel fromMap(Map<String, dynamic> map) {
    final rawMask = map['mask_bytes'];
    final Uint8List? mask = rawMask is Uint8List
        ? rawMask
        : (rawMask is List<int> ? Uint8List.fromList(rawMask) : null);
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
    );
  }
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

  DataTemp({
    required this.photoId,
    required this.image,
    required this.creationDate,
    this.fishLen,           // Fish length from PhotoModel.fishLength
    this.deviceInfo,        // Device info from PhotoModel.deviceInfo
  }) : id = DateTime.now().millisecondsSinceEpoch.toString();

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
    return 'ComputeLengthResult(length: ${length.toStringAsFixed(2)}cm, '
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
