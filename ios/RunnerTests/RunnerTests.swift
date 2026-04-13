import ARKit
import Flutter
import UIKit
import XCTest

@testable import Runner

// MARK: - MockFlutterBinaryMessenger

/// Minimal FlutterBinaryMessenger that captures registered channel handlers so tests
/// can invoke them directly without a real Flutter engine.
private class MockFlutterBinaryMessenger: NSObject, FlutterBinaryMessenger {
    private(set) var handlers: [String: FlutterBinaryMessageHandler] = [:]

    func send(onChannel channel: String, message: Data?) {}

    func send(onChannel channel: String, message: Data?, binaryReply callback: FlutterBinaryReply?) {
        callback?(nil)
    }

    func setMessageHandlerOnChannel(
        _ channel: String,
        binaryMessageHandler handler: FlutterBinaryMessageHandler?
    ) -> FlutterBinaryMessengerConnection {
        if let h = handler {
            handlers[channel] = h
        } else {
            handlers.removeValue(forKey: channel)
        }
        return 0
    }

    func cleanUpConnection(_ connection: FlutterBinaryMessengerConnection) {}

    /// Encode a method call using FlutterStandardMethodCodec, invoke the registered handler,
    /// and return the decoded result via `completion`.
    /// `completion` receives `nil` if no handler exists or the reply is nil
    /// (e.g., FlutterMethodNotImplemented).
    func invokeMethod(
        _ method: String,
        onChannel channel: String,
        arguments: Any?,
        completion: @escaping (Any?) -> Void
    ) {
        guard let handler = handlers[channel] else {
            completion(nil)
            return
        }
        let codec = FlutterStandardMethodCodec.sharedInstance()
        let encoded = codec.encode(FlutterMethodCall(methodName: method, arguments: arguments))
        handler(encoded) { responseData in
            guard let data = responseData else {
                // nil reply == FlutterMethodNotImplemented
                completion(nil)
                return
            }
            // decodeEnvelope returns the success value; our channel always returns
            // plain dictionaries (not FlutterError), so this never raises.
            completion(codec.decodeEnvelope(data))
        }
    }
}

// MARK: - ARKitManagerTests

class ARKitManagerTests: XCTestCase {
    private var messenger: MockFlutterBinaryMessenger!
    private var factory: ARViewPlatformViewFactory!
    private var manager: ARKitManager!

    override func setUp() {
        super.setUp()
        messenger = MockFlutterBinaryMessenger()
        factory = ARViewPlatformViewFactory(messenger: messenger)
        manager = ARKitManager(factory: factory)
    }

    // MARK: stopARKitSession

    func testStopARKitSession_alwaysReturnsSuccessDict() {
        let exp = expectation(description: "result")
        manager.stopARKitSession { value in
            let dict = value as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, true)
            XCTAssertNotNil(dict?["message"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    // MARK: getDeviceInfo

    func testGetDeviceInfo_returnsNonEmptyString() {
        let exp = expectation(description: "result")
        manager.getDeviceInfo { value in
            let info = value as? String
            XCTAssertNotNil(info)
            XCTAssertFalse(info!.isEmpty)
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    func testGetDeviceInfo_containsApplePrefix() {
        let exp = expectation(description: "result")
        manager.getDeviceInfo { value in
            let info = value as! String
            XCTAssertTrue(info.hasPrefix("Apple"), "Expected 'Apple …', got: \(info)")
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    func testGetDeviceInfo_containsIOSVersion() {
        let exp = expectation(description: "result")
        manager.getDeviceInfo { value in
            let info = value as! String
            XCTAssertTrue(info.contains("iOS"), "Expected iOS version in device info: \(info)")
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    func testGetDeviceInfo_containsLiDARStatus() {
        let exp = expectation(description: "result")
        manager.getDeviceInfo { value in
            let info = value as! String
            let hasLiDARLabel = info.contains("LiDAR Enabled") || info.contains("No LiDAR")
            XCTAssertTrue(hasLiDARLabel, "Expected LiDAR status in device info: \(info)")
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    // MARK: checkLiDARSupport

    func testCheckLiDARSupport_returnsBool() {
        let exp = expectation(description: "result")
        manager.checkLiDARSupport { value in
            XCTAssertTrue(value is Bool, "checkLiDARSupport should return Bool, got \(type(of: value))")
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    func testCheckLiDARSupport_simulatorReturnsFlase() {
        // On the simulator LiDAR is never available; skip on real hardware.
        if #available(iOS 14.0, *) {
            if ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth) { return }
        }
        let exp = expectation(description: "result")
        manager.checkLiDARSupport { value in
            XCTAssertEqual(value as? Bool, false)
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    // MARK: initializeARKitSession

    func testInitializeARKitSession_returnsDict() {
        let exp = expectation(description: "result")
        manager.initializeARKitSession { value in
            XCTAssertNotNil(value as? [String: Any])
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    func testInitializeARKitSession_noLiDAR_returnsFailureWithError() {
        // Only meaningful on simulator / non-LiDAR hardware.
        if #available(iOS 14.0, *) {
            if ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth) { return }
        }
        let exp = expectation(description: "result")
        manager.initializeARKitSession { value in
            let dict = value as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, false)
            XCTAssertNotNil(dict?["error"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    func testInitializeARKitSession_liDAR_returnsSuccessWithMessage() {
        // Only meaningful on physical LiDAR hardware.
        guard #available(iOS 14.0, *),
              ARWorldTrackingConfiguration.supportsFrameSemantics(.sceneDepth) else { return }
        let exp = expectation(description: "result")
        manager.initializeARKitSession { value in
            let dict = value as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, true)
            XCTAssertNotNil(dict?["message"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    // MARK: captureDepthFrame

    func testCaptureDepthFrame_noActiveSession_returnsError() {
        // factory.getActiveARSession() returns nil because no platform view was created.
        let exp = expectation(description: "result")
        manager.captureDepthFrame { value in
            let dict = value as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, false)
            XCTAssertNotNil(dict?["error"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }
}

// MARK: - FishSenseChannelTests

class FishSenseChannelTests: XCTestCase {
    private var messenger: MockFlutterBinaryMessenger!
    private var channel: FishSenseChannel!

    override func setUp() {
        super.setUp()
        messenger = MockFlutterBinaryMessenger()
        let factory = ARViewPlatformViewFactory(messenger: messenger)
        let arkitManager = ARKitManager(factory: factory)
        channel = FishSenseChannel(arkitManager: arkitManager)
        channel.setup(messenger: messenger)
    }

    // MARK: Channel registration

    func testSetup_registersHandlerForFishSenseNativeChannel() {
        XCTAssertNotNil(
            messenger.handlers["fishsense_native"],
            "setup() must register a handler for the 'fishsense_native' channel"
        )
    }

    // MARK: Routing – unknown method

    func testUnknownMethod_returnsNotImplemented() {
        let exp = expectation(description: "result")
        messenger.invokeMethod(
            "nonExistentMethod_xyz",
            onChannel: "fishsense_native",
            arguments: nil
        ) { result in
            // FlutterMethodNotImplemented causes the channel reply to be nil.
            XCTAssertNil(result, "Unrecognised methods should produce a nil reply (FlutterMethodNotImplemented)")
            exp.fulfill()
        }
        waitForExpectations(timeout: 1)
    }

    // MARK: compute_length – argument validation

    func testComputeLength_nilArguments_returnsError() {
        let exp = expectation(description: "result")
        messenger.invokeMethod("compute_length", onChannel: "fishsense_native", arguments: nil) { result in
            let dict = result as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, false, "nil args should yield success=false")
            XCTAssertNotNil(dict?["error"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 2)
    }

    func testComputeLength_missingRequiredParams_returnsError() {
        let exp = expectation(description: "result")
        // imageWidth + imageHeight present but depthWidth, depthHeight, cameraIntrinsicsInverted missing.
        let args: [String: Any] = ["imageWidth": 640, "imageHeight": 480]
        messenger.invokeMethod("compute_length", onChannel: "fishsense_native", arguments: args) { result in
            let dict = result as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, false)
            XCTAssertNotNil(dict?["error"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 2)
    }

    func testComputeLength_invalidImageDataType_returnsError() {
        let exp = expectation(description: "result")
        // imageData is a String, which can't be cast to FlutterStandardTypedData or Data.
        let args: [String: Any] = [
            "imageWidth": 4,
            "imageHeight": 4,
            "depthWidth": 2,
            "depthHeight": 2,
            "cameraIntrinsicsInverted": [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0],
            "imageData": "not valid",
            "depthData": Data(count: 16)
        ]
        messenger.invokeMethod("compute_length", onChannel: "fishsense_native", arguments: args) { result in
            let dict = result as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, false)
            XCTAssertNotNil(dict?["error"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 2)
    }

    func testComputeLength_invalidDepthDataType_returnsError() {
        let exp = expectation(description: "result")
        // depthData is a String instead of bytes.
        let args: [String: Any] = [
            "imageWidth": 4,
            "imageHeight": 4,
            "depthWidth": 2,
            "depthHeight": 2,
            "cameraIntrinsicsInverted": [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0],
            "imageData": Data(count: 64),
            "depthData": "not valid"
        ]
        messenger.invokeMethod("compute_length", onChannel: "fishsense_native", arguments: args) { result in
            let dict = result as? [String: Any]
            XCTAssertEqual(dict?["success"] as? Bool, false)
            XCTAssertNotNil(dict?["error"])
            exp.fulfill()
        }
        waitForExpectations(timeout: 2)
    }
}
