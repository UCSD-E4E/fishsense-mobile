import 'dart:async';
import 'dart:io';
import 'dart:typed_data';
import 'package:flutter/services.dart';
import 'package:vector_math/vector_math_64.dart' as vector_math;
import '../models.dart';

/// ARKit Service for iOS LiDAR integration - Real Implementation
/// Connects to native iOS ARKit through platform channels
class ARKitService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');
  static bool _isInitialized = false;
  static bool _isSessionRunning = false;

  // Camera intrinsics cache
  static Matrix3? _cameraIntrinsics;
  static Size? _imageResolution;

  // ARKit configuration
  static const String _tag = 'ARKitService';

  /// Initialize ARKit session with LiDAR depth sensing
  /// Returns true if successfully initialized on a LiDAR-capable device
  static Future<bool> initializeARKit() async {
    try {
      print('$_tag: Checking LiDAR support...');

      // Only attempt on iOS
      if (!Platform.isIOS) {
        print('$_tag: Not iOS platform, skipping ARKit');
        return false;
      }

      // Check if LiDAR is supported on this device
      final bool hasLiDAR = await _channel.invokeMethod('checkLiDARSupport');
      if (!hasLiDAR) {
        print('$_tag: LiDAR not supported on this device');
        return false;
      }

      print('$_tag: LiDAR support confirmed');
      _isInitialized = true;
      return true;
    } catch (e) {
      print('$_tag: ARKit initialization failed: $e');
      return false;
    }
  }

  /// Start ARKit session with depth sensing configuration
  static Future<bool> startSession() async {
    try {
      if (!_isInitialized) {
        print('$_tag: ARKit not initialized');
        return false;
      }

      // Initialize ARKit session on native side
      final Map<dynamic, dynamic> result =
          await _channel.invokeMethod('initializeARKitSession');

      if (result['success'] == true) {
        _isSessionRunning = true;
        print('$_tag: ARKit session started successfully');

        // Update camera intrinsics
        await _updateCameraIntrinsics();

        return true;
      } else {
        print('$_tag: Failed to start ARKit session: ${result['error']}');
        return false;
      }
    } catch (e) {
      print('$_tag: Failed to start ARKit session: $e');
      return false;
    }
  }

  /// Stop ARKit session and cleanup resources
  static Future<void> stopSession() async {
    try {
      if (_isSessionRunning) {
        await _channel.invokeMethod('stopARKitSession');
        _isSessionRunning = false;
        print('$_tag: ARKit session stopped');
      }
    } catch (e) {
      print('$_tag: Error stopping ARKit session: $e');
    }
  }

  /// Capture current ARKit frame with depth data
  /// Returns CaptureResult with real LiDAR data
  static Future<CaptureResult?> captureFrameWithDepth() async {
    try {
      if (!_isSessionRunning) {
        print('$_tag: Cannot capture frame - session not running');
        return null;
      }

      // Capture frame from native ARKit
      final Map<dynamic, dynamic> result =
          await _channel.invokeMethod('captureDepthFrame');

      if (result['success'] != true) {
        print('$_tag: Failed to capture frame: ${result['error']}');
        return null;
      }

      // Extract data from platform channel result
      final Uint8List rgbImageData =
          result['rgbImageData']; // Match AppDelegate key
      final Uint8List depthData = result['depthData']; // Match AppDelegate key
      final Uint8List confidenceData =
          result['confidenceData']; // Match AppDelegate key
      final List<double> intrinsics =
          List<double>.from(result['cameraIntrinsics']);

      // Create depth and confidence matrices
      final depthMap = ByteMatrixModel(
        bytes: depthData,
        width: result['depthWidth'],
        height: result['depthHeight'],
      );

      final confidenceMap = ByteMatrixModel(
        bytes: confidenceData,
        width: result['confidenceWidth'],
        height: result['confidenceHeight'],
      );

      print(
          '$_tag: Successfully captured frame - RGB: ${rgbImageData.length} bytes, '
          'Depth: ${depthData.length} bytes (${depthMap.width}x${depthMap.height})');

      return CaptureResult(
        imageBytes: rgbImageData,
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        cameraIntrinsics: intrinsics,
        timestamp: result['timestamp'],
      );
    } catch (e) {
      print('$_tag: Error capturing frame: $e');
      return null;
    }
  }

  /// Get camera intrinsics matrix for coordinate transformations
  /// Returns real camera intrinsics from ARKit
  static Future<CameraIntrinsics> getCameraIntrinsics() async {
    try {
      if (_cameraIntrinsics == null || _imageResolution == null) {
        await _updateCameraIntrinsics();
      }

      if (_cameraIntrinsics == null || _imageResolution == null) {
        print('$_tag: Using default intrinsics as fallback');
        return _getDefaultIntrinsics();
      }

      return CameraIntrinsics(
        matrix: _cameraIntrinsics!,
        imageResolution: _imageResolution!,
      );
    } catch (e) {
      print('$_tag: Error getting camera intrinsics: $e');
      return _getDefaultIntrinsics();
    }
  }

  /// Update camera intrinsics from ARKit
  static Future<void> _updateCameraIntrinsics() async {
    try {
      if (!_isSessionRunning) return;

      // Get intrinsics from native ARKit
      final Map<dynamic, dynamic> result =
          await _channel.invokeMethod('getCameraIntrinsics');

      if (result['success'] == true) {
        final List<double> matrixData = List<double>.from(result['matrix']);

        // Create Matrix3 from ARKit intrinsics
        _cameraIntrinsics = Matrix3(
          matrixData[0], matrixData[1], matrixData[2], // fx, 0, cx
          matrixData[3], matrixData[4], matrixData[5], // 0, fy, cy
          matrixData[6], matrixData[7], matrixData[8], // 0, 0, 1
        );

        _imageResolution = Size(
          result['imageWidth'].toDouble(),
          result['imageHeight'].toDouble(),
        );

        print('$_tag: Camera intrinsics updated - '
            'fx: ${_cameraIntrinsics!.fx}, fy: ${_cameraIntrinsics!.fy}, '
            'resolution: $_imageResolution');
      }
    } catch (e) {
      print('$_tag: Error updating camera intrinsics: $e');
    }
  }

  /// Convert screen coordinates to world coordinates using depth
  /// Uses real ARKit camera intrinsics and depth data
  static vector_math.Vector3? screenToWorld(
    Offset screenPoint,
    double depth, {
    required CameraIntrinsics intrinsics,
  }) {
    try {
      // Extract intrinsics
      final fx = intrinsics.matrix.fx;
      final fy = intrinsics.matrix.fy;
      final cx = intrinsics.matrix.cx;
      final cy = intrinsics.matrix.cy;

      // Convert screen point to normalized coordinates
      final normalizedX = (screenPoint.dx - cx) / fx;
      final normalizedY = (screenPoint.dy - cy) / fy;

      // Create 3D point in camera coordinates
      final cameraPoint = vector_math.Vector3(
        normalizedX * depth,
        normalizedY * depth,
        -depth, // ARKit uses negative Z for forward
      );

      return cameraPoint;
    } catch (e) {
      print('$_tag: Error converting screen to world coordinates: $e');
      return null;
    }
  }

  /// Calculate 3D distance between two points using real depth data
  static double? calculateDistance(
    Offset point1,
    Offset point2,
    ByteMatrixModel depthMap,
    CameraIntrinsics intrinsics,
  ) {
    try {
      // Get depth values at both points
      final depth1 = _getDepthAtPoint(point1, depthMap);
      final depth2 = _getDepthAtPoint(point2, depthMap);

      if (depth1 == null || depth2 == null) {
        print('$_tag: Could not get depth values for measurement points');
        return null;
      }

      // Convert to world coordinates
      final worldPoint1 = screenToWorld(point1, depth1, intrinsics: intrinsics);
      final worldPoint2 = screenToWorld(point2, depth2, intrinsics: intrinsics);

      if (worldPoint1 == null || worldPoint2 == null) {
        return null;
      }

      // Calculate 3D distance in meters
      final distance = (worldPoint2 - worldPoint1).length;

      print(
          '$_tag: Calculated 3D distance: ${(distance * 100).toStringAsFixed(1)}cm');
      return distance * 100; // Convert to centimeters
    } catch (e) {
      print('$_tag: Error calculating distance: $e');
      return null;
    }
  }

  /// Get depth value at specific screen coordinate
  static double? _getDepthAtPoint(Offset point, ByteMatrixModel depthMap) {
    try {
      final x = point.dx.round();
      final y = point.dy.round();

      // Check bounds
      if (x < 0 || x >= depthMap.width || y < 0 || y >= depthMap.height) {
        return null;
      }

      final index = y * depthMap.width + x;
      if (depthMap.bytes == null || index >= depthMap.bytes!.length) {
        return null;
      }

      // Convert back from scaled UInt8 to meters
      // Reverse the scaling applied in iOS (see depthMapToByteArray)
      final scaledValue = depthMap.bytes![index];
      final depthMeters = (scaledValue / 255.0) * 5.0; // Max depth was 5m

      return depthMeters;
    } catch (e) {
      print('$_tag: Error getting depth at point: $e');
      return null;
    }
  }

  /// Get default camera intrinsics as fallback
  static CameraIntrinsics _getDefaultIntrinsics() {
    // Default intrinsics for iPhone (approximate values)
    final matrix = Matrix3.cameraIntrinsics(
      fx: 1000.0,
      fy: 1000.0,
      cx: 320.0,
      cy: 240.0,
    );

    return CameraIntrinsics(
      matrix: matrix,
      imageResolution: const Size(640, 480),
    );
  }

  /// Check if ARKit session is running
  static bool get isSessionRunning => _isSessionRunning;

  /// Check if ARKit is initialized
  static bool get isInitialized => _isInitialized;
}

/// Enhanced data classes for ARKit integration

class DepthData {
  final ByteMatrixModel depthBuffer;
  final ByteMatrixModel confidenceBuffer;
  final int width;
  final int height;
  final int timestamp;

  const DepthData({
    required this.depthBuffer,
    required this.confidenceBuffer,
    required this.width,
    required this.height,
    required this.timestamp,
  });
}

class CameraIntrinsics {
  final Matrix3 matrix;
  final Size imageResolution;

  const CameraIntrinsics({
    required this.matrix,
    required this.imageResolution,
  });

  /// Convert to array format for Rust pipeline
  List<double> toArray() {
    return [
      matrix.fx,
      0.0,
      matrix.cx,
      0.0,
      matrix.fy,
      matrix.cy,
      0.0,
      0.0,
      1.0,
    ];
  }
}

/// Data class for camera capture results
class CaptureResult {
  final Uint8List imageBytes;
  final ByteMatrixModel depthMap;
  final ByteMatrixModel confidenceMap;
  final List<double> cameraIntrinsics;
  final int timestamp;

  const CaptureResult({
    required this.imageBytes,
    required this.depthMap,
    required this.confidenceMap,
    required this.cameraIntrinsics,
    required this.timestamp,
  });
}
