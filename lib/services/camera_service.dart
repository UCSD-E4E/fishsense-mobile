import 'dart:io';
import 'arkit_service.dart';
import '../logger.dart';

/// ARKit-based camera service for capturing RGB + LiDAR depth frames on iOS.
class CameraService {
  static bool _useARKit = false;
  static bool _arkitSessionStarted = false;

  /// Initialize ARKit. Returns true on a LiDAR-capable iOS device.
  static Future<bool> initializeCameras() async {
    try {
      log.d('CameraService: Initializing ARKit-only system');

      if (!Platform.isIOS) {
        log.w('CameraService: Not iOS platform, ARKit not supported');
        return false;
      }

      final arkitSuccess = await ARKitService.initializeARKit();
      if (arkitSuccess) {
        _useARKit = true;
        log.i('CameraService: ARKit LiDAR initialized successfully');
        return true;
      } else {
        log.w('CameraService: ARKit initialization failed (no LiDAR?)');
        return false;
      }
    } catch (e) {
      log.e('CameraService: Error initializing ARKit', error: e);
      return false;
    }
  }

  static bool isUsingARKit() => _useARKit;

  /// ARKit handles permissions internally.
  static Future<bool> checkCameraPermission() async => true;

  static Future<void> disposeCamera() async {
    if (_useARKit) {
      log.d('CameraService: Stopping ARKit session');
      await ARKitService.stopSession();
      _arkitSessionStarted = false;
    }
  }

  /// Capture an RGB + depth frame via ARKit LiDAR.
  static Future<CaptureResult?> capturePhotoWithDepth() async {
    return await _captureARKitPhoto();
  }

  static Future<CaptureResult?> _captureARKitPhoto() async {
    try {
      log.d('CameraService: Capturing frame with ARKit LiDAR');

      if (!_arkitSessionStarted) {
        log.d('CameraService: Starting ARKit session');
        final sessionStarted = await ARKitService.startSession();
        if (!sessionStarted) {
          log.e('CameraService: Failed to start ARKit session');
          return null;
        }
        _arkitSessionStarted = true;
        await Future.delayed(const Duration(milliseconds: 500));
      }

      final captureResult = await ARKitService.captureFrameWithDepth();
      if (captureResult == null) {
        log.e('CameraService: captureFrameWithDepth returned null');
        return null;
      }

      log.i('CameraService: Frame captured — '
          'RGB ${captureResult.imageBytes.length}B, '
          'depth ${captureResult.depthMap.width}x${captureResult.depthMap.height}, '
          'confidence ${captureResult.confidenceMap.width}x${captureResult.confidenceMap.height}');

      return captureResult;
    } catch (e) {
      log.e('CameraService: Error capturing ARKit frame', error: e);
      return null;
    }
  }
}
