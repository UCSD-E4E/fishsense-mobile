import 'dart:io';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import '../models.dart';
import '../services/camera_service.dart';
import '../services/device_info_service.dart';
import '../services/file_storage_service.dart';
import '../services/rust_service.dart';
import '../database.dart';
import '../logger.dart';
import 'fish_result_screen.dart';

/// Camera screen with AR functionality
/// Direct translation from Swift/FishSense/ViewController.swift
/// Uses native ARKit camera view with Flutter UI overlays
class CameraScreen extends StatefulWidget {
  const CameraScreen({super.key});

  @override
  State<CameraScreen> createState() => _CameraScreenState();
}

class _CameraScreenState extends State<CameraScreen>
    with WidgetsBindingObserver {
  // Camera and AR state
  bool _isCameraInitialized = false;
  bool _isProcessingPhoto = false;

  // Message shown inside the full-screen processing overlay during capture.
  String _processingMessage = '';

  // UI Controllers - equivalent to iOS IBOutlets
  final GlobalKey<ScaffoldState> _scaffoldKey = GlobalKey<ScaffoldState>();

  @override
  void initState() {
    super.initState();
    WidgetsBinding.instance.addObserver(this);
    // Defer until after the first frame so the native method channel
    // handler is guaranteed to be registered before we call into it.
    WidgetsBinding.instance.addPostFrameCallback((_) => _initializeCamera());
  }

  @override
  void dispose() {
    WidgetsBinding.instance.removeObserver(this);
    super.dispose();
  }

  Future<void> _initializeCamera() async {
    log.d('Starting camera initialization');

    final success = await CameraService.initializeCameras();
    log.i('CameraService.initializeCameras() → $success');

    if (success) {
      if (CameraService.isUsingARKit()) {
        log.i('Using ARKit — native camera view active');
      } else {
        log.w('ARKit not active despite successful init');
      }
      setState(() {
        _isCameraInitialized = true;
      });
    } else {
      log.e('Camera initialization FAILED');
    }
  }

  /// Capture photo with depth data - Phase 4: Real ARKit OR mock data automatically
  Future<void> _capturePhoto() async {
    // Check if we can capture (different conditions for ARKit vs Flutter camera)
    if (!_isCameraInitialized || _isProcessingPhoto) {
      return;
    }

    // Snapshot the device orientation at the moment of capture so the result
    // screen can display the photo the way the user framed it — ARKit always
    // writes sensor-native landscape pixels regardless of how the phone was
    // held.
    final captureOrientation = MediaQuery.orientationOf(context);

    setState(() {
      _isProcessingPhoto = true;
      _processingMessage = 'Capturing photo...';
    });

    try {
      final captureResult = await CameraService.capturePhotoWithDepth();

      if (captureResult == null) {
        _showErrorDialog('Capture Error', 'Failed to capture photo data');
        return;
      }

      // Save RGB image
      final imageName = 'rgb_${captureResult.timestamp}.jpg';
      final savedImageName = await FileStorageService.saveImage(
        captureResult.imageBytes,
        customName: imageName,
      );

      if (savedImageName == null) {
        _showErrorDialog('Save Error', 'Failed to save image');
        return;
      }

      final deviceInfo = await DeviceInfoService.getDeviceInfo();
      log.d('Device info: $deviceInfo');

      if (CameraService.isUsingARKit()) {
        log.d('Using ARKit LiDAR — '
            'depth ${captureResult.depthMap.width}x${captureResult.depthMap.height}, '
            'intrinsics: ${captureResult.cameraIntrinsics}');
      } else {
        log.w('Not using ARKit — depth data may be mock');
      }

      setState(() {
        _processingMessage = 'Analyzing fish...';
      });

      // Call Rust pipeline with REAL or mock data (automatically determined)
      final result = await RustService.computeLength(
        imageData: captureResult.rawImageBytes, // Raw pixel data for Rust
        imageWidth: captureResult.imageWidth, // Actual image dimensions
        imageHeight: captureResult.imageHeight, // Actual image dimensions
        depthData: Uint8List.fromList(captureResult.depthMap.bytes ?? []),
        depthWidth: captureResult.depthMap.width,
        depthHeight: captureResult.depthMap.height,
        cameraIntrinsicsInverted: RustService.invertIntrinsics(
            captureResult.cameraIntrinsics),
      );

      // Create photo model for database storage using factory method
      final photo = PhotoModel.create(
        utcUnixTimestamp: captureResult.timestamp,
        rgbPath: imageName,
        depthMap: captureResult.depthMap,
        confidenceMap: captureResult.confidenceMap,
        deviceInfo: deviceInfo,
        fishLength: result.fishFound ? result.length : null,
        maskBytes: result.fishFound ? result.mask : null,
        maskWidth: result.fishFound && result.maskWidth > 0
            ? result.maskWidth
            : null,
        maskHeight: result.fishFound && result.maskHeight > 0
            ? result.maskHeight
            : null,
        snoutX: result.fishFound ? result.left.x : null,
        snoutY: result.fishFound ? result.left.y : null,
        forkX: result.fishFound ? result.right.x : null,
        forkY: result.fishFound ? result.right.y : null,
        captureOrientation: captureOrientation.name,
      );

      // Save to database - equivalent to iOS insertPhoto(with:)
      if (photo != null) {
        final dbSuccess = await DatabaseModel.insertPhoto(photo);
        log.i('DB insert: $dbSuccess');
      } else {
        log.e('Failed to create PhotoModel from capture result');
      }

      if (result.fishFound) {
        if (!mounted) return;
        await Navigator.of(context).push(
          MaterialPageRoute(
            builder: (_) => FishResultScreen(
              photoBytes: captureResult.imageBytes,
              result: result,
              captureOrientation: captureOrientation,
            ),
          ),
        );
      } else {
        _showErrorDialog(
            'No Fish Found',
            result.errorString ??
                'No fish detected in the image. Please try again.');
      }
    } catch (e) {
      log.e('Error in _capturePhoto', error: e);
      _showErrorDialog('Capture Error', 'An error occurred: $e');
    } finally {
      if (mounted) {
        setState(() {
          _isProcessingPhoto = false;
          _processingMessage = '';
        });
      }
    }
  }

  /// Show error dialog - equivalent to iOS displayErrorMessage
  void _showErrorDialog(String title, String message) {
    if (!mounted) return;
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          backgroundColor: Colors.grey[900]?.withValues(alpha: 0.9),
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(16.0),
          ),
          title: Text(
            title,
            style: const TextStyle(
              color: Colors.redAccent,
              fontWeight: FontWeight.bold,
            ),
          ),
          content: Text(
            message,
            style: TextStyle(color: Colors.white.withValues(alpha: 0.8)),
          ),
          actions: [
            TextButton(
              onPressed: () => Navigator.of(context).pop(),
              child: const Text(
                'OK',
                style: TextStyle(
                  color: Color(0xFF00AAA5),
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
          ],
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      key: _scaffoldKey,
      backgroundColor: Colors.black,
      body: _buildCameraView(),
    );
  }

  /// Build camera view - equivalent to iOS camera UI layout
  /// Uses native ARKit camera underneath with Flutter UI overlays
  Widget _buildCameraView() {
    return Stack(
      children: [
        // Native ARKit camera view via platform view
        _buildNativeCameraBackground(),

        // Capture button - equivalent to iOS photo capture button
        _buildCaptureButton(),

        // Processing overlay when capturing
        if (_isProcessingPhoto) _buildProcessingOverlay(),
      ],
    );
  }

  /// Processing overlay with spinner and current stage message.
  Widget _buildProcessingOverlay() {
    return Container(
      color: Colors.black.withValues(alpha: 0.7),
      child: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            const CircularProgressIndicator(
              color: Color(0xFF00AAA5),
              strokeWidth: 3,
            ),
            const SizedBox(height: 20),
            Text(
              _processingMessage,
              style: const TextStyle(
                color: Colors.white,
                fontSize: 18,
                fontWeight: FontWeight.w500,
              ),
            ),
          ],
        ),
      ),
    );
  }

  /// Native camera background using platform view
  Widget _buildNativeCameraBackground() {
    if (!_isCameraInitialized) {
      return const Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            CircularProgressIndicator(color: Color(0xFF00AAA5)),
            SizedBox(height: 20),
            Text(
              'Initializing ARKit...',
              style: TextStyle(color: Colors.white, fontSize: 16),
            ),
          ],
        ),
      );
    }

    // Use platform view to display native ARKit camera
    if (Platform.isIOS) {
      return const UiKitView(
        viewType: 'arview_platform_view',
        layoutDirection: TextDirection.ltr,
      );
    }

    // Fallback for non-iOS (shouldn't happen in your case)
    return Container(
      width: double.infinity,
      height: double.infinity,
      color: Colors.black,
      child: const Center(
        child: Text(
          'ARKit only available on iOS',
          style: TextStyle(color: Colors.white, fontSize: 16),
        ),
      ),
    );
  }

  /// Capture button - equivalent to iOS photo capture button
  Widget _buildCaptureButton() {
    return Positioned(
      bottom: 40, 
      left: 0,
      right: 0,
      child: Center(
        child: GestureDetector(
          onTap: _isProcessingPhoto ? null : _capturePhoto,
          child: Container(
            width: 80, 
            height: 80,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              color: _isProcessingPhoto
                  ? Colors.grey.withValues(alpha: 0.5)
                  : const Color(0xFF00AAA5),
              border: Border.all(
                color: Colors.white,
                width: 4, 
              ),
              boxShadow: [
                BoxShadow(
                  color: Colors.black.withValues(alpha: 0.3),
                  blurRadius: 8,
                  offset: const Offset(0, 2),
                ),
              ],
            ),
            child: _isProcessingPhoto
                ? const Center(
                    child: SizedBox(
                      width: 28,
                      child: CircularProgressIndicator(
                        color: Colors.white,
                        strokeWidth: 3,
                      ),
                    ),
                  )
                : const Icon(
                    Icons.camera_alt,
                    color: Colors.white,
                    size: 36, 
                  ),
          ),
        ),
      ),
    );
  }

}