import UIKit
import Flutter
import ARKit
import AVFoundation
import FishSenseRS

@main
class AppDelegate: FlutterAppDelegate {
    
    private var methodChannel: FlutterMethodChannel?
    
    // Store reference to the platform view so we can access its session
    private var arViewPlatformFactory: ARViewPlatformViewFactory?
    
    override func application(
        _ application: UIApplication,
        didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
    ) -> Bool {
        
        let controller = window?.rootViewController as! FlutterViewController
        setupMethodChannel(controller: controller)
        
        //  Register ARView platform view
        setupARViewPlatformView(controller: controller)
        
        GeneratedPluginRegistrant.register(with: self)
        return super.application(application, didFinishLaunchingWithOptions: launchOptions)
    }
    
    //  Store reference to factory so we can access the platform view
    private func setupARViewPlatformView(controller: FlutterViewController) {
        arViewPlatformFactory = ARViewPlatformViewFactory(messenger: controller.binaryMessenger)
        registrar(forPlugin: "ARViewPlatform")?.register(arViewPlatformFactory!, withId: "arview_platform_view")
        print("✅ ARView platform view factory registered")
    }
    
    private func setupMethodChannel(controller: FlutterViewController) {
        methodChannel = FlutterMethodChannel(
            name: "fishsense_native",
            binaryMessenger: controller.binaryMessenger
        )
        
        methodChannel?.setMethodCallHandler { [weak self] (call, result) in
            switch call.method {
            case "getDeviceInfo":
                self?.getDeviceInfo(result: result)
            case "checkLiDARSupport":
                self?.checkLiDARSupport(result: result)
            case "initializeARKitSession":
                self?.initializeARKitSession(result: result)
            case "captureDepthFrame":
                self?.captureDepthFrame(result: result)
            case "stopARKitSession":
                self?.stopARKitSession(result: result)
            case "compute_length":
                self?.computeLength(call: call, result: result)
            default:
                result(FlutterMethodNotImplemented)
            }
        }
    }
    
    // Device Info & LiDAR Support
    
    private func getDeviceInfo(result: @escaping FlutterResult) {
        let device = UIDevice.current
        let deviceName = device.model
        let systemVersion = device.systemVersion
        
        var hasLiDAR = false
        if #available(iOS 14.0, *) {
            hasLiDAR = ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth)
        }
        
        let lidarStatus = hasLiDAR ? "LiDAR Enabled" : "No LiDAR"
        let deviceInfo = "Apple \(deviceName) (iOS \(systemVersion) - \(lidarStatus))"
        
        result(deviceInfo)
    }
    
    private func checkLiDARSupport(result: @escaping FlutterResult) {
        if #available(iOS 14.0, *) {
            let hasLiDAR = ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth)
            result(hasLiDAR)
        } else {
            result(false)
        }
    }
    
    // ARKit Session Management
    
    private func initializeARKitSession(result: @escaping FlutterResult) {
        // The ARView platform view handles session initialization
        // This method now just confirms ARKit support
        if #available(iOS 14.0, *) {
            let hasLiDAR = ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth)
            if hasLiDAR {
                result(["success": true, "message": "ARKit session ready via platform view"])
            } else {
                result(["success": false, "error": "LiDAR not supported on this device"])
            }
        } else {
            result(["success": false, "error": "iOS 14.0+ required for LiDAR support"])
        }
    }
    
    private func captureDepthFrame(result: @escaping FlutterResult) {

        guard let currentFrame = getCurrentARFrame() else {
            result(["success": false, "error": "No current ARKit frame available"])
            return
        }
        
        let pixelBuffer = currentFrame.capturedImage
        let ciImage = CIImage(cvPixelBuffer: pixelBuffer)
        let context = CIContext(options: nil)
        
        guard let cgImage = context.createCGImage(ciImage, from: ciImage.extent) else {
            result(["success": false, "error": "Failed to create CGImage from camera frame"])
            return
        }
        
        // For Rust pipeline - get RAW pixel data (like working code)
        guard let rawRgbData = cgImage.dataProvider?.data as Data? else {
            result(["success": false, "error": "Failed to extract raw RGB data from image"])
            return
        }
        
        // For Flutter display - convert to JPEG 
        let uiImage = UIImage(cgImage: cgImage)
        guard let jpegData = uiImage.jpegData(compressionQuality: 0.8) else {
            result(["success": false, "error": "Failed to convert image to JPEG data"])
            return
        }
        
        // Handle depth data using the EXACT same logic as your working ViewController.swift
        guard #available(iOS 14.0, *),
              let sceneDepth = currentFrame.sceneDepth else {
            result(["success": false, "error": "Scene depth not available"])
            return
        }
        
        
        if let depthData = currentFrame.sceneDepth?.depthMap,
           let confidenceData = currentFrame.sceneDepth?.confidenceMap {
            
            print("DEBUG: Using EXACT working depth handling from ViewController.swift")
            
            // Convert depth data properly using your working helper methods
            guard let depthDataBytes = convertDepthMapToBytes(depthMap: depthData),
                  let confidenceDataBytes = convertConfidenceMapToBytes(confidenceMap: confidenceData) else {
                result(["success": false, "error": "Failed to convert depth or confidence data"])
                return
            }
            
            // Get camera intrinsics (same as working code)
            let intrinsics = currentFrame.camera.intrinsics
            let cameraIntrinsics = [
                Double(intrinsics.columns.0.x), Double(intrinsics.columns.1.x), Double(intrinsics.columns.2.x),
                Double(intrinsics.columns.0.y), Double(intrinsics.columns.1.y), Double(intrinsics.columns.2.y),
                Double(intrinsics.columns.0.z), Double(intrinsics.columns.1.z), Double(intrinsics.columns.2.z)
            ]
            
            // Pass Data objects directly to Flutter
            let frameData: [String: Any] = [
                "success": true,
                "timestamp": Int64(Date().timeIntervalSince1970 * 1000),
                "rgbImageData": jpegData,        
                "rawRgbData": rawRgbData,        
                "imageWidth": cgImage.width,     
                "imageHeight": cgImage.height,   
                "depthData": depthDataBytes,
                "depthWidth": CVPixelBufferGetWidth(depthData),
                "depthHeight": CVPixelBufferGetHeight(depthData),
                "confidenceData": confidenceDataBytes,
                "confidenceWidth": CVPixelBufferGetWidth(confidenceData),
                "confidenceHeight": CVPixelBufferGetHeight(confidenceData),
                "cameraIntrinsics": cameraIntrinsics
            ]
            
            print(" DEBUG: Successfully created frameData using working approach")
            result(frameData)
        } else {
            result(["success": false, "error": "Depth or confidence data not available"])
        }
    }
    
    /// Get current AR frame from the ACTUAL platform view session
    private func getCurrentARFrame() -> ARFrame? {
        // Get the active platform view and its session
        return arViewPlatformFactory?.getActivePlatformView()?.getCurrentARSession()?.currentFrame
    }
    
    private func stopARKitSession(result: @escaping FlutterResult) {
        // Platform view handles its own session cleanup
        result(["success": true, "message": "ARKit session handled by platform view"])
    }
    
    // MARK: - Rust Integration
    
    private func computeLength(call: FlutterMethodCall, result: @escaping FlutterResult) {
        guard let args = call.arguments as? [String: Any] else {
            result(["success": false, "error": "Invalid arguments"])
            return
        }
        
        // Handle both FlutterStandardTypedData and Data types
        guard let imageWidth = args["imageWidth"] as? Int,
              let imageHeight = args["imageHeight"] as? Int,
              let depthWidth = args["depthWidth"] as? Int,
              let depthHeight = args["depthHeight"] as? Int,
              let cameraIntrinsicsInverted = args["cameraIntrinsicsInverted"] as? [Double] else {
            result(["success": false, "error": "Missing required parameters"])
            return
        }
        
        // Extract binary data (handle both FlutterStandardTypedData and Data)
        var imageData: Data
        var depthData: Data
        
        if let flutterImageData = args["imageData"] as? FlutterStandardTypedData {
            imageData = flutterImageData.data
        } else if let directImageData = args["imageData"] as? Data {
            imageData = directImageData
        } else {
            result(["success": false, "error": "Invalid image data format"])
            return
        }
        
        if let flutterDepthData = args["depthData"] as? FlutterStandardTypedData {
            depthData = flutterDepthData.data
        } else if let directDepthData = args["depthData"] as? Data {
            depthData = directDepthData
        } else {
            result(["success": false, "error": "Invalid depth data format"])
            return
        }
        
        print(" DEBUG: Calling Rust with image: \(imageData.count) bytes, depth: \(depthData.count) bytes")
        
        // Convert to the format expected by Rust
        let cameraIntrinsicsFloat32 = cameraIntrinsicsInverted.map { Float32($0) }
        
        let rustResult = imageData.withUnsafeBytes { imageBytes in
            depthData.withUnsafeBytes { depthBytes in
                cameraIntrinsicsFloat32.withUnsafeBufferPointer { intrinsicsPtr in
                    return FishSenseRS.compute_length(
                        imageBytes.bindMemory(to: UInt8.self).baseAddress,
                        UInt32(imageWidth),
                        UInt32(imageHeight),
                        depthBytes.bindMemory(to: UInt8.self).baseAddress,
                        UInt32(depthWidth),
                        UInt32(depthHeight),
                        intrinsicsPtr.baseAddress
                    )
                }
            }
        }
        
        // Convert Rust result to Flutter format
        let flutterResult: [String: Any] = [
            "success": true,
            "length": Double(rustResult.length),
            "fishFound": rustResult.fish_found,
            "leftX": Double(rustResult.left.x),
            "leftY": Double(rustResult.left.y),
            "rightX": Double(rustResult.right.x),
            "rightY": Double(rustResult.right.y),
            "confidence": 0.8, // Default confidence
            "errorString": rustResult.error_string != nil ? String(cString: rustResult.error_string!) : nil
        ]
        
        // Clean up Rust-allocated string if present
        if rustResult.error_string != nil {
            rustResult.error_string!.deallocate()
        }
        
        result(flutterResult)
    }
    
    // MARK: - Helper Methods (COPIED FROM YOUR WORKING CODE)
    
    private func convertDepthMapToBytes(depthMap: CVPixelBuffer) -> Data? {
        CVPixelBufferLockBaseAddress(depthMap, .readOnly)
        defer { CVPixelBufferUnlockBaseAddress(depthMap, .readOnly) }
        
        guard let baseAddress = CVPixelBufferGetBaseAddress(depthMap) else { return nil }
        let width = CVPixelBufferGetWidth(depthMap)
        let height = CVPixelBufferGetHeight(depthMap)
        let bytesPerRow = CVPixelBufferGetBytesPerRow(depthMap)
        
        return Data(bytes: baseAddress, count: height * bytesPerRow)
    }
    
    private func convertConfidenceMapToBytes(confidenceMap: CVPixelBuffer) -> Data? {
        return convertDepthMapToBytes(depthMap: confidenceMap)
    }
}