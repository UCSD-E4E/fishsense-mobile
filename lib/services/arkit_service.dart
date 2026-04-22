import 'dart:async';
import 'dart:io';
import 'package:flutter/services.dart';
import '../models.dart';
import '../logger.dart';

/// ARKit Service for iOS LiDAR integration.
/// Connects to native iOS ARKit through platform channels.
/// No preview streaming — uses native ARKit camera view.
class ARKitService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');
  static bool _isInitialized = false;
  static bool _isSessionRunning = false;

  static const String _tag = 'ARKitService';

  /// Check LiDAR support and initialize ARKit.
  /// Returns true on a LiDAR-capable iOS device.
  static Future<bool> initializeARKit() async {
    if (_isInitialized) {
      log.d('$_tag: Already initialized');
      return true;
    }

    try {
      log.d('$_tag: Checking LiDAR support');

      if (!Platform.isIOS) {
        log.w('$_tag: Not iOS — skipping ARKit init');
        return false;
      }

      final bool hasLiDAR = await _channel.invokeMethod('checkLiDARSupport');
      if (!hasLiDAR) {
        log.w('$_tag: LiDAR not supported on this device');
        return false;
      }

      log.i('$_tag: LiDAR support confirmed');
      _isInitialized = true;
      return true;
    } catch (e) {
      log.e('$_tag: ARKit initialization failed', error: e);
      return false;
    }
  }

  /// Start the ARKit session with depth sensing.
  static Future<bool> startSession() async {
    try {
      if (!_isInitialized) {
        log.w('$_tag: startSession called before initializeARKit');
        return false;
      }

      log.d('$_tag: Starting ARKit session');
      final Map<dynamic, dynamic> result =
          await _channel.invokeMethod('initializeARKitSession');

      if (result['success'] == true) {
        _isSessionRunning = true;
        log.i('$_tag: ARKit session started');
        return true;
      } else {
        log.e('$_tag: Failed to start ARKit session: ${result['error']}');
        return false;
      }
    } catch (e) {
      log.e('$_tag: Failed to start ARKit session', error: e);
      return false;
    }
  }

  /// Stop the ARKit session and release resources.
  static Future<void> stopSession() async {
    try {
      if (_isSessionRunning) {
        log.d('$_tag: Stopping ARKit session');
        await _channel.invokeMethod('stopARKitSession');
        _isSessionRunning = false;
        log.i('$_tag: ARKit session stopped');
      }
    } catch (e) {
      log.e('$_tag: Error stopping ARKit session', error: e);
    }
  }

  /// Capture the current ARKit frame with depth data.
  /// Returns null on failure.
  static Future<CaptureResult?> captureFrameWithDepth() async {
    try {
      log.d('$_tag: Requesting depth frame from native');

      final Map<dynamic, dynamic> result =
          await _channel.invokeMethod('captureDepthFrame');

      if (result['success'] != true) {
        log.e('$_tag: captureDepthFrame failed: ${result['error']}');
        return null;
      }

      final rgbImageData = result['rgbImageData'] as Uint8List;
      final rawRgbData = result['rawRgbData'] as Uint8List;
      final imageWidth = result['imageWidth'] as int;
      final imageHeight = result['imageHeight'] as int;
      final depthData = result['depthData'] as Uint8List;
      final depthWidth = result['depthWidth'] as int;
      final depthHeight = result['depthHeight'] as int;
      final confidenceData = result['confidenceData'] as Uint8List;
      final confidenceWidth = result['confidenceWidth'] as int;
      final confidenceHeight = result['confidenceHeight'] as int;
      final intrinsics = (result['cameraIntrinsics'] as List<dynamic>)
          .map((e) => e as double)
          .toList();

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

      log.i('$_tag: Frame captured — '
          'RGB ${rgbImageData.length}B (${imageWidth}x$imageHeight), '
          'raw ${rawRgbData.length}B, '
          'depth ${depthMap.width}x${depthMap.height}');

      return CaptureResult(
        imageBytes: rgbImageData,
        rawImageBytes: rawRgbData,
        imageWidth: imageWidth,
        imageHeight: imageHeight,
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        cameraIntrinsics: intrinsics,
        timestamp: result['timestamp'],
      );
    } catch (e) {
      log.e('$_tag: Error capturing depth frame', error: e);
      return null;
    }
  }
}

/// Data returned from a single ARKit capture.
class CaptureResult {
  final Uint8List imageBytes;       // JPEG for display
  final Uint8List rawImageBytes;    // Raw RGBA for Rust pipeline
  final int imageWidth;
  final int imageHeight;
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
