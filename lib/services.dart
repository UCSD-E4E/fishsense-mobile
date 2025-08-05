import 'dart:async';
import 'dart:convert';
import 'dart:io';
import 'dart:typed_data';
import 'package:flutter/services.dart';
import 'package:camera/camera.dart';
import 'package:permission_handler/permission_handler.dart';
import 'package:path_provider/path_provider.dart';
import 'package:path/path.dart';
import 'package:archive/archive.dart';
import 'package:http/http.dart' as http;
import 'models.dart';
import 'services/arkit_service.dart';

/// RustService - Handles Rust FFI calls for ML computations
/// Direct translation from iOS Rust integration
class RustService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');

  /// Compute fish length using Rust ML pipeline - now with REAL depth data
/// Compute fish length using Rust ML pipeline - Enhanced return model
static Future<ComputeLengthResult> computeLength({
  required Uint8List imageData,
  required int imageWidth,
  required int imageHeight,
  required Uint8List depthData,
  required int depthWidth,
  required int depthHeight,
  required List<double> cameraIntrinsicsInverted,
}) async {
  try {
    final Map<String, dynamic> arguments = {
      'imageData': imageData,
      'imageWidth': imageWidth,
      'imageHeight': imageHeight,
      'depthData': depthData,
      'depthWidth': depthWidth,
      'depthHeight': depthHeight,
      'cameraIntrinsicsInverted': cameraIntrinsicsInverted,
    };

    final Map<dynamic, dynamic> result = await _channel.invokeMethod(
      'compute_length',
      arguments,
    );

    // ✅ FIXED: Use unified model factory method
    return ComputeLengthResult.fromMap(result);

  } catch (e) {
    print('Error calling Rust compute_length: $e');
    return ComputeLengthResult.error(
      errorString: 'Rust computation failed: $e',
    );
  }
}

  /// Detect fish species using Rust ML pipeline
  static Future<String> detectSpecies(Uint8List imageData) async {
    try {
      final String result = await _channel.invokeMethod('detect_species', {
        'imageData': imageData,
      });
      return result;
    } catch (e) {
      print('Error calling Rust detect_species: $e');
      return 'Unknown';
    }
  }
}

/// DeviceInfoService - Enhanced with LiDAR detection
class DeviceInfoService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');
  
  /// Get comprehensive device information with LiDAR status
  static Future<String> getDeviceInfo() async {
    try {
      print('🔍 DEBUG: Calling platform channel for device info...');
      
      // Use the existing fishsense_native channel
      final String? result = await _channel.invokeMethod('getDeviceInfo');
      
      if (result != null) {
        print('🔍 DEBUG: Platform channel success: $result');
        return result;
      } else {
        print('🔍 DEBUG: Platform channel returned null, using fallback');
        return await _getFallbackDeviceInfo();
      }
      
    } catch (e) {
      print('🔍 DEBUG: Platform channel failed: $e, using fallback');
      return await _getFallbackDeviceInfo();
    }
  }
  
  /// Fallback method with enhanced LiDAR detection
  static Future<String> _getFallbackDeviceInfo() async {
    try {
      if (Platform.isIOS) {
        return await _getIOSDeviceInfo();
      } else if (Platform.isAndroid) {
        return await _getAndroidDeviceInfo();
      }
      
      return 'Unknown Device';
      
    } catch (e) {
      print('Error in fallback device info: $e');
      return 'Unknown Device';
    }
  }
  
  /// Get iOS device info with real LiDAR detection
  static Future<String> _getIOSDeviceInfo() async {
    try {
      // Check if we have LiDAR support using real ARKit service
      final hasLiDAR = await ARKitService.initializeARKit();
      
      if (hasLiDAR) {
        return 'Apple iPhone Pro (iOS - LiDAR Enabled)';
      } else {
        return 'Apple iOS Device (No LiDAR)';
      }
    } catch (e) {
      return 'Apple iOS Device (Unknown Model)';
    }
  }
  
  /// Get Android device info
  static Future<String> _getAndroidDeviceInfo() async {
    try {
      // Basic Android info (could be enhanced with device_info_plus plugin)
      return 'Android Device (No LiDAR)';
    } catch (e) {
      return 'Android Device (Unknown Model)';
    }
  }
}

/// CameraService - Enhanced with REAL ARKit integration
/// Automatically switches between real LiDAR data and mock data
class CameraService {
  static List<CameraDescription>? _cameras;
  static CameraController? _controller;
  static bool _useARKit = false;
  static bool _arkitSessionStarted = false;
  
  /// Initialize cameras and ARKit - detects real LiDAR capabilities
  static Future<bool> initializeCameras() async {
    try {
      print('CameraService: Initializing camera system...');
      
      // Try to initialize ARKit first on iOS
      if (Platform.isIOS) {
        final arkitSuccess = await ARKitService.initializeARKit();
        if (arkitSuccess) {
          _useARKit = true;
          print('CameraService: ✅ ARKit LiDAR initialized successfully');
          return true;
        } else {
          print('CameraService: ⚠️ ARKit not available, falling back to Flutter camera');
        }
      }
      
      // Fallback to Flutter camera for non-LiDAR devices or Android
      _cameras = await availableCameras();
      final success = _cameras?.isNotEmpty ?? false;
      
      if (success) {
        print('CameraService: ✅ Flutter camera initialized');
      } else {
        print('CameraService: ❌ No cameras available');
      }
      
      return success;
      
    } catch (e) {
      print('CameraService: Error initializing cameras: $e');
      return false;
    }
  }

  /// Get camera controller (Flutter camera only)
  static Future<CameraController?> getCameraController() async {
    if (_useARKit) {
      // ARKit handles camera directly, no Flutter camera needed
      return null;
    }
    
    if (_cameras == null || _cameras!.isEmpty) {
      await initializeCameras();
    }

    if (_cameras != null && _cameras!.isNotEmpty) {
      _controller = CameraController(
        _cameras![0], // Use first available camera
        ResolutionPreset.high,
        enableAudio: false,
      );
      
      await _controller!.initialize();
      return _controller;
    }
    
    return null;
  }
  
  /// Check if using ARKit for camera
  static bool isUsingARKit() => _useARKit;

  /// Check camera permissions
  static Future<bool> checkCameraPermission() async {
    final status = await Permission.camera.status;
    
    if (status.isDenied) {
      final result = await Permission.camera.request();
      return result.isGranted;
    }
    
    return status.isGranted;
  }

  /// Dispose camera controller
  static Future<void> disposeCamera() async {
    if (_useARKit) {
      await ARKitService.stopSession();
      _arkitSessionStarted = false;
    } else {
      await _controller?.dispose();
      _controller = null;
    }
  }
  
  /// Capture photo with depth data - REAL implementation
  /// iOS: Real ARKit LiDAR data, Android: Mock data
  static Future<CaptureResult?> capturePhotoWithDepth() async {
    if (_useARKit) {
      return await _captureARKitPhoto();
    } else {
      return await _captureFlutterPhoto();
    }
  }
  
  /// Capture photo using REAL ARKit with LiDAR data
  static Future<CaptureResult?> _captureARKitPhoto() async {
    try {
      print('CameraService: 📷 Capturing with real ARKit LiDAR...');
      
      // Start ARKit session if not already started
      if (!_arkitSessionStarted) {
        final sessionStarted = await ARKitService.startSession();
        if (!sessionStarted) {
          print('CameraService: ❌ Failed to start ARKit session');
          return null;
        }
        _arkitSessionStarted = true;
        
        // Give ARKit a moment to stabilize
        await Future.delayed(const Duration(milliseconds: 500));
      }
      
      // Capture frame with REAL depth data
      final captureResult = await ARKitService.captureFrameWithDepth();
      if (captureResult == null) {
        print('CameraService:  Failed to capture ARKit frame');
        return null;
      }
      
      print('CameraService: ✅ Successfully captured ARKit frame with real LiDAR data');
      print('CameraService: - RGB image: ${captureResult.imageBytes.length} bytes');
      print('CameraService: - Depth map: ${captureResult.depthMap.width}x${captureResult.depthMap.height}');
      print('CameraService: - Confidence map: ${captureResult.confidenceMap.width}x${captureResult.confidenceMap.height}');
      
      return captureResult;
      
    } catch (e) {
      print('CameraService: Error capturing ARKit photo: $e');
      return null;
    }
  }
  
  /// Capture photo using Flutter camera (fallback with mock data)
  static Future<CaptureResult?> _captureFlutterPhoto() async {
    try {
      print('CameraService: Capturing with Flutter camera (mock depth)...');
      
      if (_controller == null) {
        print('CameraService:  Flutter camera not initialized');
        return null;
      }
      
      // Capture image
      final XFile imageFile = await _controller!.takePicture();
      final imageBytes = await imageFile.readAsBytes();

      // Create mock depth and confidence maps (for non-LiDAR devices)
      final mockDepthMap = ByteMatrixModel(
        bytes: List.filled(1920 * 1080, 128), // Mock depth data
        width: 1920,
        height: 1080,
      );

      final mockConfidenceMap = ByteMatrixModel(
        bytes: List.filled(1920 * 1080, 2), // High confidence
        width: 1920,
        height: 1080,
      );
      
      // Default camera intrinsics
      const defaultIntrinsics = [1000.0, 0.0, 960.0, 0.0, 1000.0, 540.0, 0.0, 0.0, 1.0];
      
      print('CameraService: Successfully captured Flutter photo with mock depth');
      
      return CaptureResult(
        imageBytes: imageBytes,
        depthMap: mockDepthMap,
        confidenceMap: mockConfidenceMap,
        cameraIntrinsics: defaultIntrinsics,
        timestamp: DateTime.now().millisecondsSinceEpoch,
      );
      
    } catch (e) {
      print('CameraService:  Error capturing Flutter photo: $e');
      return null;
    }
  }
}

/// FileStorageService - Handles photo and data file operations
/// No changes needed - same as before
class FileStorageService {
  /// Save image to local storage
  static Future<String?> saveImage(
    Uint8List imageBytes, {
    String? customName,
  }) async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final timestamp = DateTime.now().millisecondsSinceEpoch;
      final fileName = customName ?? 'rgb_$timestamp.jpg';
      final filePath = join(directory.path, fileName);
      
      final file = File(filePath);
      await file.writeAsBytes(imageBytes);
      
      print('Photo saved successfully at $filePath');
      return fileName; // Return just filename, not full path
      
    } catch (e) {
      print('Error saving photo: $e');
      return null;
    }
  }

  /// Load image from storage
  static Future<Uint8List?> loadImage(String fileName) async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final filePath = join(directory.path, fileName);
      final file = File(filePath);
      
      if (await file.exists()) {
        return await file.readAsBytes();
      }
      return null;
      
    } catch (e) {
      print('Error loading image: $e');
      return null;
    }
  }

  /// Get documents directory path
  static Future<String> getDocumentsDirectory() async {
    final directory = await getApplicationDocumentsDirectory();
    return directory.path;
  }

  /// Delete image file
  static Future<bool> deleteImage(String fileName) async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final filePath = join(directory.path, fileName);
      final file = File(filePath);
      
      if (await file.exists()) {
        await file.delete();
        return true;
      }
      return false;
      
    } catch (e) {
      print('Error deleting image: $e');
      return false;
    }
  }

  /// Delete all saved photos
  static Future<bool> deleteAllSavedPhotos() async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final dir = Directory(directory.path);
      
      await for (final entity in dir.list()) {
        if (entity is File && entity.path.contains('rgb_')) {
          await entity.delete();
        }
      }
      
      print('All saved photos deleted');
      return true;
      
    } catch (e) {
      print('Error deleting all photos: $e');
      return false;
    }
  }
}

/// CloudSyncService - Handles AWS Lambda integration
/// No changes needed - same as before
class CloudSyncService {
  static const String _awsApiUrl = 'YOUR_AWS_API_GATEWAY_URL'; // Replace with actual URL

  /// Upload data to cloud
  static Future<bool> uploadData(List<DataTemp> photoData) async {
    try {
      // Create zip file
      final zipBytes = await _createDataZip(photoData);
      if (zipBytes == null) return false;

      // Upload to AWS Lambda
      final response = await http.post(
        Uri.parse(_awsApiUrl),
        headers: {
          'Content-Type': 'application/octet-stream',
        },
        body: zipBytes,
      );

      if (response.statusCode == 200) {
        print('Data uploaded successfully');
        return true;
      } else {
        print('Upload failed with status: ${response.statusCode}');
        return false;
      }
      
    } catch (e) {
      print('Error uploading data: $e');
      return false;
    }
  }

  /// Create zip file from photo data
  static Future<Uint8List?> _createDataZip(List<DataTemp> photoData) async {
    try {
      final archive = Archive();
      
      for (final data in photoData) {
        // Add image file to archive
        final imageFile = ArchiveFile(
          'image_${data.id}.jpg',
          data.image.length,
          data.image,
        );
        archive.addFile(imageFile);
        
        // Add metadata file including device info
        final metadata = {
          'id': data.id,
          'creationDate': data.creationDate.toIso8601String(),
          'fishLen': data.fishLen,
          'deviceInfo': data.deviceInfo,
        };
        
        final metadataBytes = utf8.encode(jsonEncode(metadata));
        final metadataFile = ArchiveFile(
          'metadata_${data.id}.json',
          metadataBytes.length,
          metadataBytes,
        );
        archive.addFile(metadataFile);
      }
      
      // Create zip
      final zipData = ZipEncoder().encode(archive);
      return zipData != null ? Uint8List.fromList(zipData) : null;
      
    } catch (e) {
      print('Error creating data zip: $e');
      return null;
    }
  }
}