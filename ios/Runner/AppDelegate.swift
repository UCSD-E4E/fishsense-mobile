import UIKit
import Flutter

@main
class AppDelegate: FlutterAppDelegate, FlutterImplicitEngineDelegate {

    private var arViewPlatformFactory: ARViewPlatformViewFactory?
    private var arkitManager: ARKitManager?
    private var fishSenseChannel: FishSenseChannel?

    override func application(
        _ application: UIApplication,
        didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
    ) -> Bool {
        return super.application(application, didFinishLaunchingWithOptions: launchOptions)
    }

    func didInitializeImplicitFlutterEngine(_ engineBridge: any FlutterImplicitEngineBridge) {
        GeneratedPluginRegistrant.register(with: engineBridge.pluginRegistry)

        let messenger = engineBridge.applicationRegistrar.messenger()

        arViewPlatformFactory = ARViewPlatformViewFactory(messenger: messenger)
        engineBridge.applicationRegistrar.register(arViewPlatformFactory!, withId: "arview_platform_view")

        arkitManager = ARKitManager(factory: arViewPlatformFactory!)
        fishSenseChannel = FishSenseChannel(arkitManager: arkitManager!)
        fishSenseChannel?.setup(messenger: messenger)
    }
}
