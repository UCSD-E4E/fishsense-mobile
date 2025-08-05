import 'dart:typed_data';
import 'dart:ui' as ui;
import 'dart:math' as math;
import 'package:flutter/material.dart';
import 'package:image/image.dart' as img;
import 'models.dart';

/// Extensions and helper functions
/// Direct translation from Swift/FishSense/Extensions.swift

/// Extension on DateTime for formatting
extension DateTimeExtensions on DateTime {
  /// Format date for display - equivalent to iOS dateFormatter
  String toDisplayString() {
    final months = [
      'Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun',
      'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'
    ];
    
    final day = this.day;
    final month = months[this.month - 1];
    final year = this.year;
    final hour = this.hour;
    final minute = this.minute.toString().padLeft(2, '0');
    final ampm = hour >= 12 ? 'PM' : 'AM';
    final displayHour = hour > 12 ? hour - 12 : (hour == 0 ? 12 : hour);
    
    return '$month $day, $year at $displayHour:$minute $ampm';
  }
}

/// Extension on List<int> for matrix operations
extension MatrixExtensions on List<int> {
  /// Convert to 2D matrix representation
  List<List<int>> to2DMatrix(int width, int height) {
    if (length != width * height) {
      throw ArgumentError('List length does not match width * height');
    }
    
    final matrix = <List<int>>[];
    for (int y = 0; y < height; y++) {
      final row = <int>[];
      for (int x = 0; x < width; x++) {
        row.add(this[y * width + x]);
      }
      matrix.add(row);
    }
    return matrix;
  }
}

/// Matrix and geometry helper functions

class MatrixUtils {
  
  /// Convert 3x3 matrix to array - equivalent to iOS matrix3x3ToArray
  static List<double> matrix3x3ToArray(List<List<double>> matrix) {
    if (matrix.length != 3 || matrix.any((row) => row.length != 3)) {
      throw ArgumentError('Matrix must be 3x3');
    }
    
    final result = <double>[];
    for (int x = 0; x < 3; x++) {
      for (int y = 0; y < 3; y++) {
        result.add(matrix[x][y]);
      }
    }
    return result;
  }

  /// Rotate depth map array - equivalent to iOS rotate_arrayf32
  static List<double> rotateArrayF32(List<double> array, int width, int height) {
    final rotated = List<double>.filled(array.length, 0.0);
    
    for (int y = 0; y < height; y++) {
      for (int x = 0; x < width; x++) {
        final originalIndex = y * width + x;
        final rotatedX = height - 1 - y;
        final rotatedY = x;
        final rotatedIndex = rotatedY * height + rotatedX;
        
        if (rotatedIndex < rotated.length) {
          rotated[rotatedIndex] = array[originalIndex];
        }
      }
    }
    
    return rotated;
  }

  /// Rotate byte array - equivalent to iOS rotate_arrayu8
  static List<int> rotateArrayU8(List<int> array, int width, int height) {
    final rotated = List<int>.filled(array.length, 0);
    
    for (int y = 0; y < height; y++) {
      for (int x = 0; x < width; x++) {
        final originalIndex = y * width + x;
        final rotatedX = height - 1 - y;
        final rotatedY = x;
        final rotatedIndex = rotatedY * height + rotatedX;
        
        if (rotatedIndex < rotated.length) {
          rotated[rotatedIndex] = array[originalIndex];
        }
      }
    }
    
    return rotated;
  }
}

/// Image processing utilities
/// Translation from iOS image processing functions
class ImageUtils {
  
  /// Draw dot on image - equivalent to iOS drawDot function
  static Future<Uint8List?> drawDot({
    required Uint8List imageBytes,
    required Offset point,
    Color color = Colors.red,
    double radius = 20.0,
  }) async {
    try {
      // Decode image
      final codec = await ui.instantiateImageCodec(imageBytes);
      final frame = await codec.getNextFrame();
      final image = frame.image;
      
      // Create canvas
      final recorder = ui.PictureRecorder();
      final canvas = Canvas(recorder);
      
      // Draw original image
      canvas.drawImage(image, Offset.zero, Paint());
      
      // Draw dot
      final paint = Paint()
        ..color = color
        ..style = PaintingStyle.fill;
      
      canvas.drawCircle(point, radius, paint);
      
      // Convert back to bytes
      final picture = recorder.endRecording();
      final resultImage = await picture.toImage(
        image.width,
        image.height,
      );
      
      final byteData = await resultImage.toByteData(format: ui.ImageByteFormat.png);
      return byteData?.buffer.asUint8List();
      
    } catch (e) {
      print('Error drawing dot on image: $e');
      return null;
    }
  }

  /// Rotate image 90 degrees clockwise - equivalent to iOS rotateImage90DegreesClockwise
  static Uint8List? rotateImage90DegreesClockwise(Uint8List imageBytes) {
    try {
      final image = img.decodeImage(imageBytes);
      if (image == null) return null;
      
      final rotated = img.copyRotate(image, angle: 90);
      return Uint8List.fromList(img.encodeJpg(rotated));
      
    } catch (e) {
      print('Error rotating image: $e');
      return null;
    }
  }

  /// Convert depth map to UI image - equivalent to iOS depthMapToUIImage
  static Uint8List? depthMapToUIImage(List<double> depthMap, int width, int height) {
    try {
      // Find min and max values for normalization
      double minDepth = double.infinity;
      double maxDepth = 0.0;
      
      for (final depth in depthMap) {
        if (depth.isFinite) {
          minDepth = math.min(minDepth, depth);
          maxDepth = math.max(maxDepth, depth);
        }
      }
      
      final range = maxDepth - minDepth;
      if (range == 0) return null;
      
      // Create grayscale image
      final image = img.Image(width: width, height: height);
      
      for (int i = 0; i < depthMap.length; i++) {
        final depth = depthMap[i];
        final normalized = ((depth - minDepth) / range);
        final grayValue = (normalized * 255).clamp(0, 255).toInt();
        
        final x = i % width;
        final y = i ~/ width;
        
        if (x < width && y < height) {
          image.setPixelRgb(x, y, grayValue, grayValue, grayValue);
        }
      }
      
      return Uint8List.fromList(img.encodePng(image));
      
    } catch (e) {
      print('Error converting depth map to image: $e');
      return null;
    }
  }
}

/// Color utilities for AR visualization
/// Translation from iOS ARMeshClassification colors
class ARColors {
  static const Map<String, Color> meshClassificationColors = {
    'ceiling': Colors.cyan,
    'door': Colors.brown,
    'floor': Colors.red,
    'seat': Colors.purple,
    'table': Colors.yellow,
    'wall': Colors.green,
    'window': Colors.blue,
    'none': Colors.orange,
  };
  
  static Color getColorForClassification(String classification) {
    return meshClassificationColors[classification.toLowerCase()] ?? Colors.orange;
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

  /// Convert screen coordinates to world coordinates (placeholder)
  static Coordinate screenToWorld(Coordinate screenPoint, {
    required List<double> cameraIntrinsics,
    required double depth,
  }) {
    // TODO: Implement actual screen-to-world conversion
    // This will use the camera intrinsics and depth data
    return screenPoint;
  }
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
    print('  Depth Map: ${photo.depthMap.width}x${photo.depthMap.height}');
    print('  Confidence Map: ${photo.confidenceMap.width}x${photo.confidenceMap.height}');
  }
}