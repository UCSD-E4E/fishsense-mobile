import UIKit
import Flutter
import ARKit
import AVFoundation

// Rust FFI Declaration
@_silgen_name("compute_length")
func compute_length(
    _ imageData: UnsafePointer<UInt8>,
    _ imageWidth: UInt32,
    _ imageHeight: UInt32,
    _ depthData: UnsafePointer<UInt8>,
    _ depthWidth: UInt32,
    _ depthHeight: UInt32,
    _ cameraIntrinsicsInverted: UnsafePointer<Float32>
) -> ComputeLengthResult

// Rust result structure 
struct ComputeLengthResult {
    let length: Float32
    let left: Coordinate
    let right: Coordinate
    let fish_found: Bool
    let error_string: UnsafePointer<UInt8>?
}

struct Coordinate {
    let x: UInt
    let y: UInt
}

@main
class AppDelegate: FlutterAppDelegate {
    
    private var methodChannel: FlutterMethodChannel?
    private var arSession: ARSession?
    private var arConfiguration: ARWorldTrackingConfiguration?
    
    override func application(
        _ application: UIApplication,
        didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
    ) -> Bool {
        
        let controller = window?.rootViewController as! FlutterViewController
        setupMethodChannel(controller: controller)
        
        GeneratedPluginRegistrant.register(with: self)
        return super.application(application, didFinishLaunchingWithOptions: launchOptions)
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
            let supported = ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth)
            result(supported)
        } else {
            result(false)
        }
    }
    
    // ARKit Session Management
    
    private func initializeARKitSession(result: @escaping FlutterResult) {
        guard #available(iOS 14.0, *) else {
            result(["success": false, "error": "iOS 14.0+ required"])
            return
        }
        
        guard ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth) else {
            result(["success": false, "error": "LiDAR not supported"])
            return
        }
        
        arSession = ARSession()
        arConfiguration = ARWorldTrackingConfiguration()
        arConfiguration?.frameSemantics = .sceneDepth
        arConfiguration?.planeDetection = [.horizontal]
        
        arSession?.run(arConfiguration!)
        
        result(["success": true, "message": "ARKit session started"])
    }
    
    private func captureDepthFrame(result: @escaping FlutterResult) {
        guard #available(iOS 14.0, *) else {
            result(["success": false, "error": "iOS 14.0+ required"])
            return
        }
        
        guard let session = arSession,
              let currentFrame = session.currentFrame else {
            result(["success": false, "error": "No ARKit session or frame"])
            return
        }
        
        // Extract RGB image
        let pixelBuffer = currentFrame.capturedImage
        guard let rgbData = pixelBufferToJPEG(pixelBuffer: pixelBuffer) else {
            result(["success": false, "error": "Failed to extract RGB"])
            return
        }
        
        guard let sceneDepth = currentFrame.sceneDepth else {
            result(["success": false, "error": "No scene depth available"])
            return
        }
        
        print(" DEBUG: sceneDepth exists")
        print(" DEBUG: sceneDepth type: \(type(of: sceneDepth))")
        
        let depthMap: CVPixelBuffer
        let confidenceMap: CVPixelBuffer
        
        if let tempDepthMap = sceneDepth.depthMap as CVPixelBuffer?,
           let tempConfidenceMap = sceneDepth.confidenceMap as CVPixelBuffer? {
            depthMap = tempDepthMap
            confidenceMap = tempConfidenceMap
        } else {
            depthMap = sceneDepth.depthMap
            confidenceMap = sceneDepth.confidenceMap!
         
        }
        
        print("DEBUG: depthMap type: \(type(of: depthMap))")
        print("DEBUG: confidenceMap type: \(type(of: confidenceMap))")
        
        // Convert depth data properly
        guard let depthData = convertDepthMapToBytes(depthMap: depthMap),
              let confidenceData = convertConfidenceMapToBytes(confidenceMap: confidenceMap) else {
            result(["success": false, "error": "Failed to convert depth or confidence data"])
            return
        }
        
        // Get camera intrinsics
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
            "rgbImageData": rgbData,
            "depthData": depthData,
            "depthWidth": CVPixelBufferGetWidth(depthMap),
            "depthHeight": CVPixelBufferGetHeight(depthMap),
            "confidenceData": confidenceData,
            "confidenceWidth": CVPixelBufferGetWidth(confidenceMap),
            "confidenceHeight": CVPixelBufferGetHeight(confidenceMap),
            "cameraIntrinsics": cameraIntrinsics
        ]
        
        print("🔍 DEBUG: Successfully created frameData")
        result(frameData)
    }
    
    private func stopARKitSession(result: @escaping FlutterResult) {
        arSession?.pause()
        arSession = nil
        arConfiguration = nil
        result(["success": true, "message": "ARKit session stopped"])
    }
    
    //  Rust Integration
    
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
            result(["success": false, "error": "Missing required arguments"])
            return
        }
        
        //  Handle different data types from Flutter
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
        
        let intrinsicsFloat32 = cameraIntrinsicsInverted.map { Float32($0) }
        
        let rustResult = compute_length(
            imageData.withUnsafeBytes { $0.bindMemory(to: UInt8.self).baseAddress! },
            UInt32(imageWidth),
            UInt32(imageHeight),
            depthData.withUnsafeBytes { $0.bindMemory(to: UInt8.self).baseAddress! },
            UInt32(depthWidth),
            UInt32(depthHeight),
            intrinsicsFloat32.withUnsafeBufferPointer { $0.baseAddress! }
        )
        
        var flutterResult: [String: Any] = [
            "fishFound": rustResult.fish_found,
            "length": Double(rustResult.length),
            "leftX": Double(rustResult.left.x),
            "leftY": Double(rustResult.left.y),
            "rightX": Double(rustResult.right.x),
            "rightY": Double(rustResult.right.y),
            "confidence": rustResult.fish_found ? 1.0 : 0.0
        ]
        
        if let errorString = rustResult.error_string {
            let errorCString = String(cString: errorString)
            flutterResult["errorString"] = errorCString
        } else {
            flutterResult["errorString"] = nil
        }
        
        result(flutterResult)
    }
    
    // MARK: - Helper Methods
    
    private func pixelBufferToJPEG(pixelBuffer: CVPixelBuffer) -> Data? {
        let ciImage = CIImage(cvPixelBuffer: pixelBuffer)
        let context = CIContext()
        
        guard let cgImage = context.createCGImage(ciImage, from: ciImage.extent) else {
            return nil
        }
        
        let uiImage = UIImage(cgImage: cgImage)
        return uiImage.jpegData(compressionQuality: 0.8)
    }
    
   
    private func convertDepthMapToBytes(depthMap: CVPixelBuffer) -> Data? {
        CVPixelBufferLockBaseAddress(depthMap, .readOnly)
        defer { CVPixelBufferUnlockBaseAddress(depthMap, .readOnly) }
        
        let width = CVPixelBufferGetWidth(depthMap)
        let height = CVPixelBufferGetHeight(depthMap)
        
        guard let baseAddress = CVPixelBufferGetBaseAddress(depthMap) else {
            return nil
        }
        
        let floatBuffer = baseAddress.assumingMemoryBound(to: Float32.self)
        var byteArray = [UInt8]()
        byteArray.reserveCapacity(width * height)
        
        for i in 0..<(width * height) {
            let depthValue = floatBuffer[i]
            let clampedDepth = max(0.0, min(5.0, depthValue))
            let scaledValue = UInt8(clampedDepth / 5.0 * 255.0)
            byteArray.append(scaledValue)
        }
        
        return Data(byteArray)
    }
    

    private func convertConfidenceMapToBytes(confidenceMap: CVPixelBuffer) -> Data? {
        CVPixelBufferLockBaseAddress(confidenceMap, .readOnly)
        defer { CVPixelBufferUnlockBaseAddress(confidenceMap, .readOnly) }
        
        let width = CVPixelBufferGetWidth(confidenceMap)
        let height = CVPixelBufferGetHeight(confidenceMap)
        
        guard let baseAddress = CVPixelBufferGetBaseAddress(confidenceMap) else {
            return nil
        }
        
        let uint8Buffer = baseAddress.assumingMemoryBound(to: UInt8.self)
        return Data(bytes: uint8Buffer, count: width * height)
    }
}
