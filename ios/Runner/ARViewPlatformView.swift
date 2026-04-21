import UIKit
import Flutter
import ARKit
import RealityKit
import OSLog

private let logger = Logger(subsystem: Bundle.main.bundleIdentifier ?? "fishsense", category: "ARView")

/// Native ARView that can be embedded in Flutter
class ARViewPlatformView: NSObject, FlutterPlatformView {
    private var _arView: ARView
    private var arSession: ARSession?
    private var arConfiguration: ARWorldTrackingConfiguration?
    
    init(
        frame: CGRect,
        viewIdentifier viewId: Int64,
        arguments args: Any?,
        binaryMessenger messenger: FlutterBinaryMessenger?
    ) {
        _arView = ARView(frame: frame)
        super.init()
        setupARView()
    }
    
    func view() -> UIView {
        return _arView
    }
    
    private func setupARView() {
     
        _arView.session.delegate = self
        
        _arView.environment.sceneUnderstanding.options = []
        
        // Turn on occlusion from the scene reconstruction's mesh
        _arView.environment.sceneUnderstanding.options.insert(.occlusion)
        
        // Turn on physics for the scene reconstruction's mesh
        _arView.environment.sceneUnderstanding.options.insert(.physics)

        // For performance, disable render options that are not required for this app
        _arView.renderOptions = [.disablePersonOcclusion, .disableDepthOfField, .disableMotionBlur]
        

        // ARView on its own does not turn on mesh classification
        _arView.automaticallyConfigureSession = false
        let configuration = ARWorldTrackingConfiguration()
        configuration.sceneReconstruction = .meshWithClassification
        configuration.environmentTexturing = .automatic
        configuration.frameSemantics.insert(.sceneDepth)
        
        arConfiguration = configuration
        arSession = _arView.session
        
        // Start the session
        _arView.session.run(configuration)

        logger.info("ARKit session started with LiDAR + mesh classification")
    }
    
    /// Provide access to the session for photo capture
    func getCurrentARSession() -> ARSession? {
        return arSession
    }
    
    /// Get the ARView for additional configuration if needed
    func getARView() -> ARView {
        return _arView
    }
}

// MARK: - ARSessionDelegate 
extension ARViewPlatformView: ARSessionDelegate {
    func session(_ session: ARSession, cameraDidChangeTrackingState camera: ARCamera) {
        var status = "Camera Loading"
        switch camera.trackingState {
        case ARCamera.TrackingState.notAvailable:
            status = "Camera Not available"
        case ARCamera.TrackingState.limited(_):
            status = "Camera limited"
        case ARCamera.TrackingState.normal:
            status = "Camera Ready"
        }
        logger.info("Camera tracking state: \(status)")
    }
    
    func session(_ session: ARSession, didFailWithError error: Error) {
        logger.error("ARKit session failed: \(error.localizedDescription)")
    }
}

// Factory that tracks active platform views
class ARViewPlatformViewFactory: NSObject, FlutterPlatformViewFactory {
    private var messenger: FlutterBinaryMessenger
    
    // Keep track of the active platform view so AppDelegate can access its session
    private var activePlatformView: ARViewPlatformView?
    
    init(messenger: FlutterBinaryMessenger) {
        self.messenger = messenger
        super.init()
    }
    
    func create(
        withFrame frame: CGRect,
        viewIdentifier viewId: Int64,
        arguments args: Any?
    ) -> FlutterPlatformView {
        let platformView = ARViewPlatformView(
            frame: frame,
            viewIdentifier: viewId,
            arguments: args,
            binaryMessenger: messenger
        )
        
        // Store reference so AppDelegate can access the session
        activePlatformView = platformView
        logger.debug("ARViewPlatformView created (id=\(viewId))")
        
        return platformView
    }
    
    ///  Allow AppDelegate to get the active AR session
    func getActiveARSession() -> ARSession? {
        return activePlatformView?.getCurrentARSession()
    }
    
    /// Needed for platform view arguments
    func createArgsCodec() -> FlutterMessageCodec & NSObjectProtocol {
        return FlutterStandardMessageCodec.sharedInstance()
    }
}