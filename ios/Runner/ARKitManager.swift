import UIKit
import ARKit
import Flutter
import OSLog

private let logger = Logger(subsystem: Bundle.main.bundleIdentifier ?? "fishsense", category: "ARKitManager")

/// Owns all ARKit session interactions and device capability checks.
/// Receives the ARViewPlatformViewFactory at init so it can reach the
/// live ARSession that the platform view manages.
class ARKitManager {
    private let factory: ARViewPlatformViewFactory

    init(factory: ARViewPlatformViewFactory) {
        self.factory = factory
    }

    // MARK: - Device Info & LiDAR Support

    func getDeviceInfo(result: @escaping FlutterResult) {
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

    func checkLiDARSupport(result: @escaping FlutterResult) {
        if #available(iOS 14.0, *) {
            let hasLiDAR = ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth)
            result(hasLiDAR)
        } else {
            result(false)
        }
    }

    // MARK: - ARKit Session Management

    func initializeARKitSession(result: @escaping FlutterResult) {
        if #available(iOS 14.0, *) {
            let hasLiDAR = ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth)
            if hasLiDAR {
                logger.info("ARKit session ready — LiDAR supported")
                result(["success": true, "message": "ARKit session ready via platform view"])
            } else {
                logger.warning("LiDAR not supported on this device")
                result(["success": false, "error": "LiDAR not supported on this device"])
            }
        } else {
            logger.warning("iOS 14.0+ required for LiDAR")
            result(["success": false, "error": "iOS 14.0+ required for LiDAR support"])
        }
    }

    func stopARKitSession(result: @escaping FlutterResult) {
        logger.debug("stopARKitSession called (managed by platform view)")
        result(["success": true, "message": "ARKit session handled by platform view"])
    }

    // MARK: - Frame Capture

    func captureDepthFrame(result: @escaping FlutterResult) {
        logger.debug("captureDepthFrame requested")
        guard let currentFrame = getCurrentARFrame() else {
            logger.error("No current ARKit frame available")
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

        guard let rawRgbData = cgImage.dataProvider?.data as Data? else {
            result(["success": false, "error": "Failed to extract raw RGB data from image"])
            return
        }

        let uiImage = UIImage(cgImage: cgImage)
        guard let jpegData = uiImage.jpegData(compressionQuality: 0.8) else {
            result(["success": false, "error": "Failed to convert image to JPEG data"])
            return
        }

        guard #available(iOS 14.0, *),
              currentFrame.sceneDepth != nil else {
            result(["success": false, "error": "Scene depth not available"])
            return
        }

        if let depthData = currentFrame.sceneDepth?.depthMap,
           let confidenceData = currentFrame.sceneDepth?.confidenceMap {

            guard let depthDataBytes = convertPixelBufferToBytes(depthData),
                  let confidenceDataBytes = convertPixelBufferToBytes(confidenceData) else {
                result(["success": false, "error": "Failed to convert depth or confidence data"])
                return
            }

            let intrinsics = currentFrame.camera.intrinsics
            let cameraIntrinsics = [
                Double(intrinsics.columns.0.x), Double(intrinsics.columns.1.x), Double(intrinsics.columns.2.x),
                Double(intrinsics.columns.0.y), Double(intrinsics.columns.1.y), Double(intrinsics.columns.2.y),
                Double(intrinsics.columns.0.z), Double(intrinsics.columns.1.z), Double(intrinsics.columns.2.z)
            ]

            logger.info("Frame captured — RGB \(cgImage.width)x\(cgImage.height), depth \(CVPixelBufferGetWidth(depthData))x\(CVPixelBufferGetHeight(depthData))")
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

            result(frameData)
        } else {
            result(["success": false, "error": "Depth or confidence data not available"])
        }
    }

    // MARK: - Private Helpers

    private func getCurrentARFrame() -> ARFrame? {
        return factory.getActiveARSession()?.currentFrame
    }

    private func convertPixelBufferToBytes(_ pixelBuffer: CVPixelBuffer) -> Data? {
        CVPixelBufferLockBaseAddress(pixelBuffer, .readOnly)
        defer { CVPixelBufferUnlockBaseAddress(pixelBuffer, .readOnly) }

        guard let baseAddress = CVPixelBufferGetBaseAddress(pixelBuffer) else { return nil }
        let height = CVPixelBufferGetHeight(pixelBuffer)
        let bytesPerRow = CVPixelBufferGetBytesPerRow(pixelBuffer)

        return Data(bytes: baseAddress, count: height * bytesPerRow)
    }
}
