import 'dart:async';
import 'dart:io';
import 'dart:typed_data';
import 'package:flutter/services.dart';
import '../models.dart';

/// ARKit Service for iOS LiDAR integration - Real Implementation
/// Connects to native iOS ARKit through platform channels
/// NO PREVIEW STREAMING - Uses native ARKit camera view like original Swift app
class ARKitService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');
  static bool _isInitialized = false;
  static bool _isSessionRunning = false;

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
  /// This is the ONLY camera interaction - no preview streaming needed
static Future<CaptureResult?> captureFrameWithDepth() async {
    try {
      print('$_tag: ARKit session started successfully');

      final Map<dynamic, dynamic> result =
          await _channel.invokeMethod('captureDepthFrame');

      if (result['success'] != true) {
        print('$_tag: Capture failed: ${result['error']}');
        return null;
      }

      // Extract RGB data (JPEG for display)
      final rgbImageData = result['rgbImageData'] as Uint8List;
      
      // Extract raw RGB data (for Rust pipeline)  
      final rawRgbData = result['rawRgbData'] as Uint8List;
      
      // Extract image dimensions
      final imageWidth = result['imageWidth'] as int;
      final imageHeight = result['imageHeight'] as int;

      // Extract depth data
      final depthData = result['depthData'] as Uint8List;
      final depthWidth = result['depthWidth'] as int;
      final depthHeight = result['depthHeight'] as int;

      // Extract confidence data  
      final confidenceData = result['confidenceData'] as Uint8List;
      final confidenceWidth = result['confidenceWidth'] as int;
      final confidenceHeight = result['confidenceHeight'] as int;

      // Extract camera intrinsics
      final intrinsics = (result['cameraIntrinsics'] as List<dynamic>)
          .map((e) => e as double)
          .toList();

      // Create matrix models
      final depthMap = ByteMatrixModel(
        bytes: depthData.toList(),
        width: depthWidth,
        height: depthHeight,
      );

      final confidenceMap = ByteMatrixModel(
        bytes: confidenceData.toList(),
        width: confidenceWidth,
        height: confidenceHeight,
      );

      print(
          '$_tag: Successfully captured frame - RGB: ${rgbImageData.length} bytes, '
          'Raw: ${rawRgbData.length} bytes, '
          'Depth: ${depthData.length} bytes (${depthMap.width}x${depthMap.height})');

      return CaptureResult(
        imageBytes: rgbImageData,       // JPEG for display
        rawImageBytes: rawRgbData,      // Raw for Rust
        imageWidth: imageWidth,         // Image dimensions
        imageHeight: imageHeight,       // Image dimensions
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
  }

/// Data class for camera capture results
class CaptureResult {
  final Uint8List imageBytes;        // JPEG data for display
  final Uint8List rawImageBytes;     // Raw data for Rust pipeline
  final int imageWidth;              // Image dimensions  
  final int imageHeight;             // Image dimensions
  final ByteMatrixModel depthMap;
  final ByteMatrixModel confidenceMap;
  final List<double> cameraIntrinsics;
  final int timestamp;

  const CaptureResult({
    required this.imageBytes,
    required this.rawImageBytes,     
    required this.imageWidth,        
    required this.imageHeight,       
    required this.depthMap,
    required this.confidenceMap,
    required this.cameraIntrinsics,
    required this.timestamp,
  });
}