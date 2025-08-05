import 'dart:typed_data';
import 'dart:ui' as ui;
import 'package:fishsense_android/main.dart';
import 'package:flutter/material.dart';
import 'package:camera/camera.dart';
import 'package:provider/provider.dart';
import 'models.dart';
import 'services.dart';
import 'database.dart';
import 'extensions.dart';

/// Camera screen with AR functionality
/// Direct translation from Swift/FishSense/ViewController.swift
class CameraScreen extends StatefulWidget {
  const CameraScreen({super.key});

  @override
  State<CameraScreen> createState() => _CameraScreenState();
}

class _CameraScreenState extends State<CameraScreen>
    with WidgetsBindingObserver {
  // Camera and AR state
  CameraController? _cameraController;
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
    _cameraController?.dispose();
    super.dispose();
  }

  @override
  void didChangeAppLifecycleState(AppLifecycleState state) {
    final CameraController? cameraController = _cameraController;
    if (cameraController == null || !cameraController.value.isInitialized) {
      return;
    }

    if (state == AppLifecycleState.inactive) {
      cameraController.dispose();
    } else if (state == AppLifecycleState.resumed) {
      _initializeCamera();
    }
  }

  /// Initialize camera - equivalent to iOS viewDidLoad camera setup
Future<void> _initializeCamera() async {
  // Initialize the enhanced camera service
  final success = await CameraService.initializeCameras();
  
  if (success) {
    if (CameraService.isUsingARKit()) {
      // iOS ARKit path
      setState(() {
        _isCameraInitialized = true;
        _statusMessage = 'ARKit LiDAR Ready';
      });
    } else {
      // Flutter camera path
      _cameraController = await CameraService.getCameraController();
      setState(() {
        _isCameraInitialized = true;
        _statusMessage = 'Camera Ready';
      });
    }
  }
}

 /// Capture photo with depth data - Phase 4: Real ARKit OR mock data automatically
Future<void> _capturePhoto() async {
  // Check if we can capture (different conditions for ARKit vs Flutter camera)
  if (!_isCameraInitialized || _isProcessingPhoto) {
    return;
  }
  
  // For Flutter camera mode, also check camera controller
  if (!CameraService.isUsingARKit() && _cameraController == null) {
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
    print('🔍 DEBUG: Device info collected: $deviceInfo');
    
 
    if (CameraService.isUsingARKit()) {
      print('📷 Using REAL ARKit LiDAR data');
      print('📊 Depth map: ${captureResult.depthMap.width}x${captureResult.depthMap.height}');
      print('📊 Real camera intrinsics: ${captureResult.cameraIntrinsics}');
    } else {
      print('📷 Using mock depth data (fallback)');
    }

    // Call Rust pipeline with REAL or mock data (automatically determined)
    final result = await RustService.computeLength(
      imageData: captureResult.imageBytes,
      imageWidth: captureResult.depthMap.width,  
      imageHeight: captureResult.depthMap.height,
      depthData: Uint8List.fromList(captureResult.depthMap.bytes ?? []),
      depthWidth: captureResult.depthMap.width,
      depthHeight: captureResult.depthMap.height,
      cameraIntrinsicsInverted: captureResult.cameraIntrinsics,
    );

    // Extract fish length from ML result - same as before
    double? fishLength;
    if (result.fishFound) {
      fishLength = result.length;
      print(' FISH LENGTH CAPTURED: ${fishLength}cm');
      
     
      if (CameraService.isUsingARKit()) {
        print('Measurement uses REAL LiDAR depth data - higher accuracy expected!');
      } else {
        print('Measurement uses mock depth data - accuracy limited');
      }
    }

    // Create photo model with fish length - same as before
    final photo = PhotoModel.create(
      utcUnixTimestamp: captureResult.timestamp,
      rgbPath: savedImageName,
      depthMap: captureResult.depthMap,          // Real or mock depth map
      confidenceMap: captureResult.confidenceMap, // Real or mock confidence map
      deviceInfo: deviceInfo,
      fishLength: fishLength,
    );

    if (photo != null) {
      print('PhotoModel created with fish length: ${photo.fishLength}cm');
      
      // Save to database - same as before
      final dbSuccess = await DatabaseModel.insertPhoto(photo);
      print(' Database insert success: $dbSuccess');

      if (dbSuccess) {
        // Handle UI updates based on ML result - same as before
        if (result.fishFound) {
          // Draw dots on image if result has the data
          Uint8List? imageWithDots;
          if (result.imageWithDots != null) {
            imageWithDots = result.imageWithDots;
          } else {
            // Fallback: draw detection points manually
            imageWithDots = await _drawDetectionPoints(captureResult.imageBytes, result);
          }
          
          setState(() {
            _currentImageWithDots = imageWithDots;
            _lengthMessage = 'Fish Length: ${(result.length * 10).round() / 10}cm';
            _statusMessage = CameraService.isUsingARKit() 
                ? 'Fish Detected! (LiDAR)' 
                : 'Fish Detected!';
          });

          // Show result dialog
          _showFishLengthResult(result.length);
        } else {
          setState(() {
            _statusMessage = 'No Fish Detected';
          });
          _showErrorDialog('No Fish Found', 'No fish was found in the image. Please try again.');
        }

        // Update photo count
        context.read<AppStateProvider>().refreshPhotoCount();

        setState(() {
          _statusMessage = CameraService.isUsingARKit() 
              ? 'ARKit LiDAR Ready' 
              : 'Camera Ready';
        });
      } else {
        _showErrorDialog('Database Error', 'Failed to save photo to database');
      }
    }
  } catch (e) {
    print('Error capturing photo: $e');
    _showErrorDialog('Capture Error', 'Failed to capture photo: $e');
  } finally {
    setState(() {
      _isProcessingPhoto = false;
    });
  }
}

  /// Process photo with Rust ML pipeline - equivalent to iOS Rust integration
  Future<void> _processPhotoWithRust(
    Uint8List imageBytes,
    ByteMatrixModel depthMap,
    ByteMatrixModel confidenceMap,
  ) async {
    try {
      setState(() {
        _statusMessage = 'Processing Fish...';
      });

      // Mock camera 
      final mockIntrinsics = [
        1000.0,
        0.0,
        960.0,
        0.0,
        1000.0,
        540.0,
        0.0,
        0.0,
        1.0,
      ];

      // Call Rust pipeline - equivalent to iOS FishSenseRS.compute_length
      final result = await RustService.computeLength(
        imageData: imageBytes,
        imageWidth: 1920,
        imageHeight: 1080,
        depthData: Uint8List.fromList(depthMap.bytes ?? []),
        depthWidth: depthMap.width,
        depthHeight: depthMap.height,
        cameraIntrinsicsInverted: mockIntrinsics,
      );

      if (result != null) {
        _lastMeasurement = result;

        if (result.fishFound) {
          // Draw dots on image - equivalent to iOS drawDot functionality
          final imageWithDots = await _drawDetectionPoints(imageBytes, result);

          setState(() {
            _currentImageWithDots = imageWithDots;
            _lengthMessage =
                'Fish Length: ${(result.length * 10).round() / 10}cm';
            _statusMessage = 'Fish Detected!';
          });

          // Show result dialog - equivalent to iOS fish length popup
          _showFishLengthResult(result.length);
        } else {
          setState(() {
            _statusMessage = 'No Fish Detected';
          });
          _showErrorDialog('No Fish Found',
              'No fish was found in the image. Please try again.');
        }

        if (result.errorString != null) {
          _showErrorDialog('Processing Error', result.errorString!);
        }
      }
    } catch (e) {
      print('Error processing with Rust: $e');
      _showErrorDialog('Processing Error', 'Failed to process image: $e');
    }
  }

  /// Draw detection points on image - equivalent to iOS drawDot
  Future<Uint8List?> _drawDetectionPoints(
      Uint8List imageBytes, ComputeLengthResult result) async {
    try {
      // Convert coordinates (iOS uses different coordinate system)
      final leftPoint = Offset(
        1920 - result.left.y.toDouble(),
        result.left.x.toDouble(),
      );
      final rightPoint = Offset(
        1920 - result.right.y.toDouble(),
        result.right.x.toDouble(),
      );

      // Draw first dot
      var imageWithDots = await ImageUtils.drawDot(
        imageBytes: imageBytes,
        point: leftPoint,
        color: Colors.red,
        radius: 20.0,
      );

      // Draw second dot
      if (imageWithDots != null) {
        imageWithDots = await ImageUtils.drawDot(
          imageBytes: imageWithDots,
          point: rightPoint,
          color: Colors.red,
          radius: 20.0,
        );
      }

      return imageWithDots;
    } catch (e) {
      print('Error drawing detection points: $e');
      return null;
    }
  }

  /// Show fish length result - equivalent to iOS fish length popup
  void _showFishLengthResult(double lengthCm) {
    final lengthDisplay = (lengthCm * 10).round() / 10; // Round to 1 decimal

    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          backgroundColor: Colors.grey[900],
          title: const Text(
            'Fish Length',
            style: TextStyle(color: Colors.white),
          ),
          content: Text(
            '${lengthDisplay}cm',
            style: const TextStyle(
              color: Colors.white,
              fontSize: 24,
              fontWeight: FontWeight.bold,
            ),
          ),
          actions: [
            TextButton(
              onPressed: () => Navigator.of(context).pop(),
              child: const Text(
                'OK',
                style: TextStyle(color: Color(0xFF00AAA5)),
              ),
            ),
          ],
        );
      },
    );
  }

  /// Show error dialog - equivalent to iOS displayErrorMessage
  void _showErrorDialog(String title, String message) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          backgroundColor: Colors.grey[900],
          title: Text(
            title,
            style: const TextStyle(color: Colors.white),
          ),
          content: Text(
            message,
            style: const TextStyle(color: Colors.white),
          ),
          actions: [
            TextButton(
              onPressed: () => Navigator.of(context).pop(),
              child: const Text(
                'OK',
                style: TextStyle(color: Color(0xFF00AAA5)),
              ),
            ),
          ],
        );
      },
    );
  }

  /// Reset AR session - equivalent to iOS resetButtonPressed
  void _resetSession() {
    setState(() {
      _currentImageWithDots = null;
      _lastMeasurement = null;
      _lengthMessage = 'Distance: ';
      _statusMessage = 'Camera Ready';
    });
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
  Widget _buildCameraView() {
    return Stack(
      children: [
        // Camera preview - equivalent to iOS ARView
        _buildCameraPreview(),

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

  /// Camera preview widget
  Widget _buildCameraPreview() {
    if (!_isCameraInitialized || _cameraController == null) {
      return const Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            CircularProgressIndicator(color: Color(0xFF00AAA5)),
            SizedBox(height: 20),
            Text(
              'Initializing Camera...',
              style: TextStyle(color: Colors.white, fontSize: 16),
            ),
          ],
        ),
      );
    }

    return SizedBox.expand(
      child: CameraPreview(_cameraController!),
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
      bottom: 100,
      left: 10,
      right: 10,
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceBetween,
        children: [
          // Hide/Show button - equivalent to iOS hideMeshButton
          _buildControlButton(
            title: _showMesh ? 'Hide' : 'Show',
            onPressed: _toggleMesh,
          ),

          // Plane Detection button - equivalent to iOS planeDetectionButton
          _buildControlButton(
            title: _planeDetectionActive ? 'Stop Detection' : 'Start Detection',
            onPressed: _togglePlaneDetection,
          ),

          // Reset button - equivalent to iOS resetButton
          _buildControlButton(
            title: 'Reset',
            onPressed: _resetSession,
          ),
        ],
      ),
    );
  }

  /// Individual control button
  Widget _buildControlButton(
      {required String title, required VoidCallback onPressed}) {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 12, vertical: 8),
      decoration: BoxDecoration(
        color: const Color(0xFF00AAA5),
        borderRadius: BorderRadius.circular(20),
      ),
      child: TextButton(
        onPressed: onPressed,
        child: Text(
          title,
          style: const TextStyle(
            color: Colors.white,
            fontSize: 14,
            fontWeight: FontWeight.bold,
          ),
        ),
      ),
    );
  }

  /// Capture button - equivalent to iOS photo capture button
  Widget _buildCaptureButton() {
    return Positioned(
      bottom: 30,
      left: 0,
      right: 0,
      child: Center(
        child: GestureDetector(
          onTap: _isProcessingPhoto ? null : _capturePhoto,
          child: Container(
            width: 70,
            height: 70,
            decoration: BoxDecoration(
              color: _isProcessingPhoto ? Colors.grey : Colors.white,
              shape: BoxShape.circle,
              border: Border.all(
                color: const Color(0xFF00AAA5),
                width: 4,
              ),
            ),
            child: _isProcessingPhoto
                ? const Center(
                    child: CircularProgressIndicator(
                      color: Color(0xFF00AAA5),
                      strokeWidth: 3,
                    ),
                  )
                : const Icon(
                    Icons.camera,
                    color: Color(0xFF00AAA5),
                    size: 35,
                  ),
          ),
        ),
      ),
    );
  }

  /// Fish image overlay - equivalent to iOS fish image display
  Widget _buildFishImageOverlay() {
    return Positioned(
      top: 140,
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
            fit: BoxFit.cover,
          ),
        ),
      ),
    );
  }
}
