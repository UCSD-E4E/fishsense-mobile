import Flutter
import FishSenseRS
import OSLog

private let logger = Logger(subsystem: Bundle.main.bundleIdentifier ?? "fishsense", category: "FishSenseChannel")

/// Owns the `fishsense_native` MethodChannel and dispatches calls to
/// ARKitManager (for camera/device operations) and the Rust FFI (for ML).
class FishSenseChannel {
    private let arkitManager: ARKitManager
    private var channel: FlutterMethodChannel?

    init(arkitManager: ARKitManager) {
        self.arkitManager = arkitManager
    }

    func setup(messenger: FlutterBinaryMessenger) {
        let channel = FlutterMethodChannel(name: "fishsense_native", binaryMessenger: messenger)
        self.channel = channel
        // Capture arkitManager directly so result() is always called even if self is somehow nil.
        let manager = arkitManager
        channel.setMethodCallHandler { [weak self] call, result in
            switch call.method {
            case "getDeviceInfo":
                manager.getDeviceInfo(result: result)
            case "checkLiDARSupport":
                manager.checkLiDARSupport(result: result)
            case "initializeARKitSession":
                manager.initializeARKitSession(result: result)
            case "captureDepthFrame":
                manager.captureDepthFrame(result: result)
            case "stopARKitSession":
                manager.stopARKitSession(result: result)
            case "compute_length":
                guard let self = self else {
                    result(FlutterError(code: "UNAVAILABLE", message: "FishSenseChannel deallocated", details: nil))
                    return
                }
                self.computeLength(call: call, result: result)
            default:
                result(FlutterMethodNotImplemented)
            }
        }
    }

    // MARK: - Rust FFI

    private func computeLength(call: FlutterMethodCall, result: @escaping FlutterResult) {
        guard let args = call.arguments as? [String: Any] else {
            result(["success": false, "error": "Invalid arguments"])
            return
        }

        guard let imageWidth = args["imageWidth"] as? Int,
              let imageHeight = args["imageHeight"] as? Int,
              let depthWidth = args["depthWidth"] as? Int,
              let depthHeight = args["depthHeight"] as? Int,
              let cameraIntrinsicsInverted = args["cameraIntrinsicsInverted"] as? [Double] else {
            result(["success": false, "error": "Missing required parameters"])
            return
        }

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

        let cameraIntrinsicsFloat32 = cameraIntrinsicsInverted.map { Float32($0) }

        logger.debug("compute_length: dispatching Rust pipeline — image \(imageWidth)x\(imageHeight), depth \(depthWidth)x\(depthHeight)")

        // Run the Rust ML pipeline off the main thread to keep the UI responsive.
        DispatchQueue.global(qos: .userInitiated).async {
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

            let errorMsg: String? = withUnsafePointer(to: rustResult.error_string) { ptr in
                let str = String(cString: UnsafeRawPointer(ptr).assumingMemoryBound(to: CChar.self))
                return str.isEmpty ? nil : str
            }

            let flutterResult: [String: Any] = [
                "success": true,
                "length": Double(rustResult.length),
                "fishFound": rustResult.fish_found,
                "leftX": Double(rustResult.left.x),
                "leftY": Double(rustResult.left.y),
                "rightX": Double(rustResult.right.x),
                "rightY": Double(rustResult.right.y),
                "confidence": 0.8,
                "errorString": errorMsg as Any
            ]

            if rustResult.fish_found {
                logger.info("compute_length: fish found, length=\(rustResult.length)m")
            } else {
                logger.warning("compute_length: fish not found")
            }

            // Flutter method channel results must be delivered on the main thread.
            DispatchQueue.main.async { result(flutterResult) }
        }
    }
}
