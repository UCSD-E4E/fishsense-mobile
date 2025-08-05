import 'dart:typed_data';
import 'dart:ui' as ui;
import 'dart:io';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import 'models.dart';
import 'services.dart';
import 'database.dart';
import 'extensions.dart';

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

  // UI state - equivalent to iOS ViewController properties
  String _statusMessage = 'Camera Loading';
  String _lengthMessage = 'Distance: ';
  bool _showMesh = true;
  bool _planeDetectionActive = false;

  // Fish measurement state
  Uint8List? _currentImageWithDots;
  ComputeLengthResult? _lastMeasurement;

  // UI Controllers - equivalent to iOS IBOutlets
  final GlobalKey<ScaffoldState> _scaffoldKey = GlobalKey<ScaffoldState>();

  @override
  void initState() {
    super.initState();
    WidgetsBinding.instance.addObserver(this);
    _initializeCamera();
  }

  @override
  void dispose() {
    WidgetsBinding.instance.removeObserver(this);
    super.dispose();
  }

  Future<void> _initializeCamera() async {
    print(' DEBUG: Starting camera initialization...');

    final success = await CameraService.initializeCameras();
    print('CameraService.initializeCameras() returned: $success');

    if (success) {
      if (CameraService.isUsingARKit()) {
        print(
            'Using ARKit - should see native camera via platform view');
        setState(() {
          _isCameraInitialized = true;
          _statusMessage = 'ARKit LiDAR Ready';
        });
      } else {
        print(' NOT using ARKit - problem here');
        setState(() {
          _isCameraInitialized = true;
          _statusMessage = 'Camera Ready';
        });
      }
    } else {
      print('🔍 DEBUG: Camera initialization FAILED');
    }
  }

  /// Capture photo with depth data - Phase 4: Real ARKit OR mock data automatically
  Future<void> _capturePhoto() async {
    // Check if we can capture (different conditions for ARKit vs Flutter camera)
    if (!_isCameraInitialized || _isProcessingPhoto) {
      return;
    }

    setState(() {
      _isProcessingPhoto = true;
      _statusMessage = 'Capturing Photo...';
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

      // Collect device information - enhanced with LiDAR detection
      final deviceInfo = await DeviceInfoService.getDeviceInfo();
      print(' DEBUG: Device info collected: $deviceInfo');

      if (CameraService.isUsingARKit()) {
        print('Using REAL ARKit LiDAR data');
        print(
            'Depth map: ${captureResult.depthMap.width}x${captureResult.depthMap.height}');
        print('Real camera intrinsics: ${captureResult.cameraIntrinsics}');
      } else {
        print('Using mock depth data (fallback)');
      }

      /// Convert camera intrinsics to inverted transpose format (like working Swift code)
      /// Your working Swift code used: matrix3x3ToArray(currentFrame.camera.intrinsics.inverse.transpose)
      List<double> _convertToInvertedTransposeFormat(List<double> intrinsics) {
        // Input: [fx, 0, cx, 0, fy, cy, 0, 0, 1] (3x3 matrix in row-major)
        // Convert to Matrix3x3, invert, transpose, then flatten

        try {
          // Extract intrinsics components
          final fx = intrinsics[0];
          final fy = intrinsics[4];
          final cx = intrinsics[2];
          final cy = intrinsics[5];

          print(' Original intrinsics: fx=$fx, fy=$fy, cx=$cx, cy=$cy');

          // Compute inverse of intrinsics matrix and transpose
          // Based on your working Swift: currentFrame.camera.intrinsics.inverse.transpose
          if (fx == 0 || fy == 0) {
            print('Warning: Camera intrinsics have zero focal length');
            return intrinsics; // Return original as fallback
          }

          // Inverse and transpose of camera intrinsics matrix:
          // Original:    Inverse:           Transpose:
          // [fx  0 cx]   [1/fx  0 -cx/fx]   [1/fx    0     0]
          // [ 0 fy cy] → [  0 1/fy -cy/fy] → [  0   1/fy   0]
          // [ 0  0  1]   [  0   0    1   ]   [-cx/fx -cy/fy 1]

          final result = [
            1.0 / fx, 0.0, 0.0, // Row 1 of transposed inverse
            0.0, 1.0 / fy, 0.0, // Row 2 of transposed inverse
            -cx / fx, -cy / fy, 1.0, // Row 3 of transposed inverse
          ];

          print(' Converted to inverted-transposed: $result');
          return result;
        } catch (e) {
          print('Error converting camera intrinsics: $e');
          return intrinsics; // Return original as fallback
        }
      }

      // Call Rust pipeline with REAL or mock data (automatically determined)
      final result = await RustService.computeLength(
        imageData: captureResult.rawImageBytes, // Raw pixel data for Rust
        imageWidth: captureResult.imageWidth, // Actual image dimensions
        imageHeight: captureResult.imageHeight, // Actual image dimensions
        depthData: Uint8List.fromList(captureResult.depthMap.bytes ?? []),
        depthWidth: captureResult.depthMap.width,
        depthHeight: captureResult.depthMap.height,
        cameraIntrinsicsInverted: _convertToInvertedTransposeFormat(
            captureResult.cameraIntrinsics), // Correct format
      );

      // Create photo model for database storage using factory method
      final photo = PhotoModel.create(
        utcUnixTimestamp: captureResult.timestamp,
        rgbPath: imageName,
        depthMap: captureResult.depthMap,
        confidenceMap: captureResult.confidenceMap,
        deviceInfo: deviceInfo,
        fishLength: result.fishFound ? result.length : null,
      );

      // Save to database - equivalent to iOS insertPhoto(with:)
      if (photo != null) {
        final success = await DatabaseModel.insertPhoto(photo);
        print(' Database insert success: $success');
      } else {
        print(' Failed to create PhotoModel');
      }

      if (result.fishFound) {
        setState(() {
          _lastMeasurement = result;
          _lengthMessage = 'Length: ${(result.length * 100).toStringAsFixed(1)}cm';
          _currentImageWithDots = result.imageWithDots;
        });

        _showSuccessDialog('Fish Found!',
            'Fish length: ${(result.length * 100).toStringAsFixed(1)}cm\n');
      } else {
        _showErrorDialog(
            'No Fish Found',
            result.errorString ??
                'No fish detected in the image. Please try again.');
      }
    } catch (e) {
      print('Error capturing photo: $e');
      _showErrorDialog('Capture Error', 'An error occurred: $e');
    } finally {
      setState(() {
        _isProcessingPhoto = false;
        _statusMessage =
            _isCameraInitialized ? 'ARKit LiDAR Ready' : 'Camera Ready';
      });
    }
  }

  /// Show error dialog - equivalent to iOS displayErrorMessage
/// Show error dialog - equivalent to iOS displayErrorMessage
void _showErrorDialog(String title, String message) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        // Dark, semi-transparent background
        backgroundColor: Colors.grey[900]?.withOpacity(0.9),
         shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(16.0),
        ),
        // Title with a red accent color for errors
        title: Text(
          title,
          style: const TextStyle(
            color: Colors.redAccent,
            fontWeight: FontWeight.bold,
          ),
        ),
        // Content with light grey text
        content: Text(
          message,
          style: TextStyle(color: Colors.white.withOpacity(0.8)),
        ),
        // Action button styled with your app's accent color
        actions: [
          TextButton(
            onPressed: () => Navigator.of(context).pop(),
            child: const Text(
              'OK',
              style: TextStyle(
                color: Color(0xFF00AAA5), // Your app's teal accent color
                fontWeight: FontWeight.bold,
              ),
            ),
          ),
        ],
      );
    },
  );
}

/// Show success dialog for fish detection
void _showSuccessDialog(String title, String message) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        // Dark, semi-transparent background
        backgroundColor: Colors.grey[900]?.withOpacity(0.9),
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(16.0),
        ),
        // Title with bold white text
        title: Text(
          title,
          style: const TextStyle(
            color: Colors.white,
            fontWeight: FontWeight.bold,
          ),
        ),
        // Content with light grey text
        content: Text(
          message,
          style: TextStyle(color: Colors.white.withOpacity(0.8)),
        ),
        // Action button styled with your app's accent color
        actions: [
          TextButton(
            onPressed: () => Navigator.of(context).pop(),
            child: const Text(
              'OK',
              style: TextStyle(
                color: Color(0xFF00AAA5), // Your app's teal accent color
                fontWeight: FontWeight.bold,
              ),
            ),
          ),
        ],
      );
    },
  );
}

  /// Toggle mesh visibility - equivalent to iOS toggleMeshButtonPressed
  void _toggleMesh() {
    setState(() {
      _showMesh = !_showMesh;
    });
  }

  /// Toggle plane detection - equivalent to iOS togglePlaneDetectionButtonPressed
  void _togglePlaneDetection() {
    setState(() {
      _planeDetectionActive = !_planeDetectionActive;
    });
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
        //  Native ARKit camera view via platform view
        _buildNativeCameraBackground(),

        // Status overlay - equivalent to iOS status labels
        _buildStatusOverlay(),

        // Control buttons - equivalent to iOS control buttons
        _buildControlButtons(),

        // Capture button - equivalent to iOS photo capture button
        _buildCaptureButton(),

        // Fish image overlay - equivalent to iOS fish image display
        if (_currentImageWithDots != null) _buildFishImageOverlay(),
      ],
    );
  }

  ///  Native camera background using platform view

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

  /// Status overlay - equivalent to iOS greyView + status labels
  Widget _buildStatusOverlay() {
    return Positioned(
      top: 0,
      left: 0,
      right: 0,
      child: Container(
        height: 120,
        decoration: BoxDecoration(
          gradient: LinearGradient(
            begin: Alignment.topCenter,
            end: Alignment.bottomCenter,
            colors: [
              Colors.black.withOpacity(0.7),
              Colors.transparent,
            ],
          ),
        ),
        child: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text(
                _statusMessage,
                style: const TextStyle(
                  color: Colors.orange,
                  fontSize: 18,
                  fontWeight: FontWeight.bold,
                ),
                textAlign: TextAlign.center,
              ),
              const SizedBox(height: 8),
              Text(
                _lengthMessage,
                style: const TextStyle(
                  color: Colors.red,
                  fontSize: 18,
                  fontWeight: FontWeight.bold,
                ),
                textAlign: TextAlign.center,
              ),
            ],
          ),
        ),
      ),
    );
  }

  /// Control buttons - equivalent to iOS AR control buttons
  Widget _buildControlButtons() {
    return Positioned(
      bottom: 120, 
      left: 20,
      right: 20, 
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceBetween,
        children: [
          // Hide/Show button - equivalent to iOS hideMeshButton
          // _buildControlButton(
          //   title: _showMesh ? 'Hide' : 'Show',
          //   onPressed: _toggleMesh,
          // ),

          // // Plane Detection button - equivalent to iOS planeDetectionButton
          // _buildControlButton(
          //   title: _planeDetectionActive ? 'Stop Detection' : 'Start Detection',
          //   onPressed: _togglePlaneDetection,
          // ),
        ],
      ),
    );
  }

  /// Individual control button
  Widget _buildControlButton({
    required String title,
    required VoidCallback onPressed,
  }) {
    return Container(
      decoration: BoxDecoration(
        color:
            Colors.black.withOpacity(0.7), 
        borderRadius: BorderRadius.circular(8),
        border: Border.all(color: const Color(0xFF00AAA5), width: 1),
      ),
      child: TextButton(
        onPressed: onPressed,
        style: TextButton.styleFrom(
          foregroundColor: Colors.white,
          padding: const EdgeInsets.symmetric(
              horizontal: 20, vertical: 12),
        ),
        child: Text(
          title,
          style: const TextStyle(
              fontSize: 16,
              fontWeight: FontWeight.w600), 
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
                  ? Colors.grey.withOpacity(0.5)
                  : const Color(0xFF00AAA5),
              border: Border.all(
                color: Colors.white,
                width: 4, 
              ),
              boxShadow: [
                
                BoxShadow(
                  color: Colors.black.withOpacity(0.3),
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

  /// Fish image overlay - equivalent to iOS fish image display
  Widget _buildFishImageOverlay() {
    if (_currentImageWithDots == null) return const SizedBox();

    return Positioned(
      top: 16,
      right: 16,
      child: Container(
        width: 180,
        height: 240,
        decoration: BoxDecoration(
          border: Border.all(color: Colors.white, width: 1),
          borderRadius: BorderRadius.circular(8),
        ),
        child: ClipRRect(
          borderRadius: BorderRadius.circular(8),
          child: Image.memory(
            _currentImageWithDots!,
            fit: BoxFit.contain,
          ),
        ),
      ),
    );
  }
}
