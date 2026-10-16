import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

/// The connection as iOS reports it (`NWPathMonitor`), plus Low Power Mode.
/// Streamed by `NetworkStatusChannel.swift`.
@immutable
class NetworkStatus {
  /// There is a usable path to the internet.
  final bool connected;

  /// The path uses Wi-Fi (or wired Ethernet).
  final bool wifi;

  /// The path uses cellular.
  final bool cellular;

  /// iOS treats the path as metered: cellular, or a Personal Hotspot
  /// reached over Wi-Fi. Counts as cellular data for sync.
  final bool expensive;

  /// iOS Low Data Mode is on for this path.
  final bool lowDataMode;

  /// iOS Low Power Mode is on.
  final bool lowPowerMode;

  const NetworkStatus({
    required this.connected,
    this.wifi = false,
    this.cellular = false,
    this.expensive = false,
    this.lowDataMode = false,
    this.lowPowerMode = false,
  });

  /// Before iOS has reported anything.
  static const unknown = NetworkStatus(connected: false);

  /// Sync would use cellular data on this path.
  bool get metered => cellular || expensive;

  factory NetworkStatus.fromMap(Map<dynamic, dynamic> map) => NetworkStatus(
        connected: map['connected'] == true,
        wifi: map['wifi'] == true,
        cellular: map['cellular'] == true,
        expensive: map['expensive'] == true,
        lowDataMode: map['lowDataMode'] == true,
        lowPowerMode: map['lowPowerMode'] == true,
      );

  /// The connection as it changes, starting with the current one.
  static Stream<NetworkStatus> watch() =>
      const EventChannel('fishsense_native/network_status')
          .receiveBroadcastStream()
          .map((e) => NetworkStatus.fromMap(e as Map<dynamic, dynamic>));

  @override
  bool operator ==(Object other) =>
      other is NetworkStatus &&
      other.connected == connected &&
      other.wifi == wifi &&
      other.cellular == cellular &&
      other.expensive == expensive &&
      other.lowDataMode == lowDataMode &&
      other.lowPowerMode == lowPowerMode;

  @override
  int get hashCode =>
      Object.hash(connected, wifi, cellular, expensive, lowDataMode, lowPowerMode);

  @override
  String toString() => 'NetworkStatus(connected: $connected, wifi: $wifi, '
      'cellular: $cellular, expensive: $expensive, lowData: $lowDataMode, '
      'lowPower: $lowPowerMode)';
}
