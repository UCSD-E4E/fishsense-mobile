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

    private struct ComputeLengthArgs {
        let imageData: Data
        let depthData: Data
        let imageWidth: Int
        let imageHeight: Int
        let depthWidth: Int
        let depthHeight: Int
        let cameraIntrinsicsInverted: [Float32]
    }

    private enum ArgParseError: Error {
        case message(String)
    }

    private func parseComputeLengthArgs(_ call: FlutterMethodCall) -> Result<ComputeLengthArgs, ArgParseError> {
        guard let args = call.arguments as? [String: Any] else {
            return .failure(.message("Invalid arguments"))
        }
        guard let imageWidth = args["imageWidth"] as? Int,
              let imageHeight = args["imageHeight"] as? Int,
              let depthWidth = args["depthWidth"] as? Int,
              let depthHeight = args["depthHeight"] as? Int,
              let cameraIntrinsicsInverted = args["cameraIntrinsicsInverted"] as? [Double] else {
            return .failure(.message("Missing required parameters"))
        }
        guard let imageData = extractData(args["imageData"]) else {
            return .failure(.message("Invalid image data format"))
        }
        guard let depthData = extractData(args["depthData"]) else {
            return .failure(.message("Invalid depth data format"))
        }
        return .success(ComputeLengthArgs(
            imageData: imageData, depthData: depthData,
            imageWidth: imageWidth, imageHeight: imageHeight,
            depthWidth: depthWidth, depthHeight: depthHeight,
            cameraIntrinsicsInverted: cameraIntrinsicsInverted.map { Float32($0) }
        ))
    }

    private func extractData(_ value: Any?) -> Data? {
        if let typed = value as? FlutterStandardTypedData { return typed.data }
        if let direct = value as? Data { return direct }
        return nil
    }

    private func computeLength(call: FlutterMethodCall, result: @escaping FlutterResult) {
        let args: ComputeLengthArgs
        switch parseComputeLengthArgs(call) {
        case .success(let parsed): args = parsed
        case .failure(.message(let message)):
            result(["success": false, "error": message])
            return
        }

        logger.debug("compute_length: dispatching Rust pipeline — image \(args.imageWidth)x\(args.imageHeight), depth \(args.depthWidth)x\(args.depthHeight)")

        // Run the Rust ML pipeline off the main thread to keep the UI responsive.
        DispatchQueue.global(qos: .userInitiated).async {
            var maskData = Data(count: args.imageWidth * args.imageHeight)
            let rustResult = Self.runRustPipeline(args: args, maskData: &maskData)
            let flutterResult = Self.buildFlutterResult(rustResult: rustResult, maskData: maskData, args: args)
            DispatchQueue.main.async { result(flutterResult) }
        }
    }

    private static func runRustPipeline(args: ComputeLengthArgs, maskData: inout Data) -> ComputeLengthResult {
        return args.imageData.withUnsafeBytes { imageBytes in
            args.depthData.withUnsafeBytes { depthBytes in
                args.cameraIntrinsicsInverted.withUnsafeBufferPointer { intrinsicsPtr in
                    maskData.withUnsafeMutableBytes { maskBytes in
                        FishSenseRS.compute_length(
                            imageBytes.bindMemory(to: UInt8.self).baseAddress,
                            UInt32(args.imageWidth),
                            UInt32(args.imageHeight),
                            depthBytes.bindMemory(to: UInt8.self).baseAddress,
                            UInt32(args.depthWidth),
                            UInt32(args.depthHeight),
                            intrinsicsPtr.baseAddress,
                            maskBytes.bindMemory(to: UInt8.self).baseAddress
                        )
                    }
                }
            }
        }
    }

    private static func buildFlutterResult(rustResult: ComputeLengthResult, maskData: Data, args: ComputeLengthArgs) -> [String: Any] {
        let errorMsg: String? = withUnsafePointer(to: rustResult.error_string) { ptr in
            let str = String(cString: UnsafeRawPointer(ptr).assumingMemoryBound(to: CChar.self))
            return str.isEmpty ? nil : str
        }

        var flutterResult: [String: Any] = [
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
            flutterResult["mask"] = FlutterStandardTypedData(bytes: maskData)
            flutterResult["maskWidth"] = args.imageWidth
            flutterResult["maskHeight"] = args.imageHeight
            logger.info("compute_length: fish found, length=\(rustResult.length)m")
        } else {
            logger.warning("compute_length: fish not found")
        }
        return flutterResult
    }
}
