import Flutter
import Foundation
import Network

/// Streams what sync needs to know about the connection to Dart, on the
/// `fishsense_native/network_status` event channel: whether there is a
/// usable path, whether it is Wi-Fi or cellular, iOS Low Data Mode
/// (`isConstrained`), and Low Power Mode. An event is sent on listen and on
/// every change.
final class NetworkStatusChannel: NSObject, FlutterStreamHandler {
    private let monitor = NWPathMonitor()
    private let queue = DispatchQueue(label: "fishsense.network-status")
    private var sink: FlutterEventSink?
    private var lastPath: NWPath?
    private var powerObserver: NSObjectProtocol?

    func setup(messenger: FlutterBinaryMessenger) {
        let channel = FlutterEventChannel(name: "fishsense_native/network_status", binaryMessenger: messenger)
        channel.setStreamHandler(self)
        // Started once for the app's lifetime: an NWPathMonitor can't be
        // restarted after it is cancelled.
        monitor.pathUpdateHandler = { [weak self] path in
            DispatchQueue.main.async {
                self?.lastPath = path
                self?.send()
            }
        }
        monitor.start(queue: queue)
    }

    func onListen(withArguments arguments: Any?, eventSink events: @escaping FlutterEventSink) -> FlutterError? {
        sink = events
        send()
        powerObserver = NotificationCenter.default.addObserver(
            forName: .NSProcessInfoPowerStateDidChange, object: nil, queue: .main
        ) { [weak self] _ in self?.send() }
        return nil
    }

    func onCancel(withArguments arguments: Any?) -> FlutterError? {
        if let observer = powerObserver {
            NotificationCenter.default.removeObserver(observer)
        }
        powerObserver = nil
        sink = nil
        return nil
    }

    private func send() {
        guard let sink = sink, let path = lastPath else { return }
        sink([
            "connected": path.status == .satisfied,
            "wifi": path.usesInterfaceType(.wifi) || path.usesInterfaceType(.wiredEthernet),
            "cellular": path.usesInterfaceType(.cellular),
            "expensive": path.isExpensive,
            "lowDataMode": path.isConstrained,
            "lowPowerMode": ProcessInfo.processInfo.isLowPowerModeEnabled
        ])
    }
}
