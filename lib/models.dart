import 'dart:math' as math;
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

  PhotoModel({
    required this.id,
    required this.utcUnixTimestamp,
    required this.rgbPath,
    required this.depthMap,
    required this.confidenceMap,
    this.deviceInfo,              // Optional device info
    this.fishLength,              // Optional fish length
  });

  /// Factory constructor - equivalent to Swift init?() method
  static PhotoModel? create({
    required int utcUnixTimestamp,
    required String rgbPath,
    required ByteMatrixModel depthMap,
    required ByteMatrixModel confidenceMap,
    String? deviceInfo,
    double? fishLength,           // Optional fish length parameter
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
    };
  }

  /// Create from database Map
  static PhotoModel fromMap(Map<String, dynamic> map) {
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
      fishLength: map['fish_length']?.toDouble(), // Parse fish length from database
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
  final List<int> image;  // UIImage equivalent as bytes
  final DateTime creationDate;
  final double? fishLen;   // Changed from int? to double? to match PhotoModel
  final String? deviceInfo; // Include device info for gallery display

  DataTemp({
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
  
  ComputeLengthResult({
    required this.length,
    required this.fishFound,
    this.errorString,
    // Coordinate properties with defaults
    Coordinate? left,
    Coordinate? right,


    this.confidence = 0.0,
    this.imageWithDots,
  }) : left = left ?? Coordinate.zero,
       right = right ?? Coordinate.zero;

  /// Factory constructor for successful fish detection with coordinates
  factory ComputeLengthResult.success({
    required double length,
    required Coordinate left,
    required Coordinate right,
    double confidence = 0.0,
    Uint8List? imageWithDots,
  }) {
    return ComputeLengthResult(
      length: length,
      fishFound: true,
      left: left,
      right: right,
      confidence: confidence,
      imageWithDots: imageWithDots,
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

/// Matrix3 - 3x3 matrix for camera intrinsics
/// Equivalent to iOS simd_float3x3 for ARKit camera intrinsics
class Matrix3 {
  final List<double> _values;

  Matrix3(
    double m00, double m01, double m02,
    double m10, double m11, double m12,
    double m20, double m21, double m22,
  ) : _values = [
        m00, m01, m02,
        m10, m11, m12,
        m20, m21, m22,
      ];

  /// Create identity matrix
  Matrix3.identity() : _values = [
        1.0, 0.0, 0.0,
        0.0, 1.0, 0.0,
        0.0, 0.0, 1.0,
      ];

  /// Create camera intrinsics matrix
  /// fx, fy: focal lengths
  /// cx, cy: principal point
  Matrix3.cameraIntrinsics({
    required double fx,
    required double fy,
    required double cx,
    required double cy,
  }) : _values = [
        fx,  0.0, cx,
        0.0, fy,  cy,
        0.0, 0.0, 1.0,
      ];

  /// Get value at row, col
  double operator [](int index) => _values[index];

  /// Get all values as array
  List<double> get values => List.from(_values);

  /// Get specific matrix elements
  double get fx => _values[0];  // Focal length X
  double get fy => _values[4];  // Focal length Y
  double get cx => _values[6];  // Principal point X
  double get cy => _values[7];  // Principal point Y

  /// Convert to array format for Rust pipeline
  List<double> toArray() => values;

  @override
  String toString() => 'Matrix3($_values)';
}

/// Size - Represents image resolution
class Size {
  final double width;
  final double height;

  const Size(this.width, this.height);

  @override
  String toString() => 'Size(${width}x$height)';
}

/// Validation utilities
/// Helper functions for data validation
class ValidationUtils {
  
  /// Validate photo model data
  static bool isValidPhotoModel(PhotoModel photo) {
    return photo.utcUnixTimestamp > 0 &&
           photo.rgbPath.isNotEmpty &&
           photo.depthMap.width > 0 &&
           photo.depthMap.height > 0 &&
           photo.confidenceMap.width > 0 &&
           photo.confidenceMap.height > 0;
  }

  /// Validate byte matrix data
  static bool isValidByteMatrix(ByteMatrixModel matrix) {
    return matrix.width > 0 &&
           matrix.height > 0 &&
           (matrix.bytes?.length ?? 0) == matrix.width * matrix.height;
  }

  /// Validate compute length result
  static bool isValidComputeLengthResult(ComputeLengthResult result) {
    return result.fishFound ? result.length > 0 : true;
  }
}

/// Coordinate and distance utilities
/// Translation from iOS coordinate and distance functions
class CoordinateUtils {
  
  /// Calculate distance between two points
  static double distance(Coordinate point1, Coordinate point2) {
    final dx = point2.x - point1.x;
    final dy = point2.y - point1.y;
    return math.sqrt(dx * dx + dy * dy);
  }

  /// Calculate distance between two 3D points
  static double distance3D(double x1, double y1, double z1, double x2, double y2, double z2) {
    final dx = x2 - x1;
    final dy = y2 - y1;
    final dz = z2 - z1;
    return math.sqrt(dx * dx + dy * dy + dz * dz);
  }

  /// Convert screen coordinates to world coordinates using camera intrinsics
  static Coordinate screenToWorld(Coordinate screenPoint, {
    required List<double> cameraIntrinsics,
    required double depth,
  }) {
    // Extract intrinsics (assuming standard 3x3 format)
    final fx = cameraIntrinsics[0];
    final fy = cameraIntrinsics[4];
    final cx = cameraIntrinsics[6];
    final cy = cameraIntrinsics[7];
    
    // Convert screen to normalized coordinates
    final normalizedX = (screenPoint.x - cx) / fx;
    final normalizedY = (screenPoint.y - cy) / fy;
    
    // Apply depth to get 3D coordinates
    final worldX = normalizedX * depth;
    final worldY = normalizedY * depth;
    
    return Coordinate(x: worldX, y: worldY);
  }
}

/// Debug utilities
/// Helper functions for debugging and logging
class DebugUtils {
  
  /// Print matrix dimensions and sample values
  static void debugMatrix(List<dynamic> matrix, int width, int height, String name) {
    print('$name: ${width}x$height (${matrix.length} total elements)');
    if (matrix.isNotEmpty) {
      final sampleSize = math.min(5, matrix.length);
      final sample = matrix.take(sampleSize).toList();
      print('$name sample: $sample');
    }
  }

  /// Print photo model info
  static void debugPhotoModel(PhotoModel photo) {
    print('PhotoModel Debug:');
    print('  ID: ${photo.id}');
    print('  Timestamp: ${photo.utcUnixTimestamp}');
    print('  RGB Path: ${photo.rgbPath}');
    print('  Fish Length: ${photo.fishLength}cm');
    print('  Device Info: ${photo.deviceInfo}');
    print('  Depth Map: ${photo.depthMap.width}x${photo.depthMap.height}');
    print('  Confidence Map: ${photo.confidenceMap.width}x${photo.confidenceMap.height}');
  }

  /// Print camera intrinsics info
  static void debugCameraIntrinsics(Matrix3 intrinsics, Size resolution) {
    print('Camera Intrinsics Debug:');
    print('  Resolution: $resolution');
    print('  Focal Length: fx=${intrinsics.fx}, fy=${intrinsics.fy}');
    print('  Principal Point: cx=${intrinsics.cx}, cy=${intrinsics.cy}');
  }
}