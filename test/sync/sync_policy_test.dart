import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/services/sync/network_status.dart';
import 'package:fishsense_android/services/sync/sync_policy.dart';

const wifi = NetworkStatus(connected: true, wifi: true);
const cellular = NetworkStatus(connected: true, cellular: true, expensive: true);
const hotspot = NetworkStatus(connected: true, wifi: true, expensive: true);
const offline = NetworkStatus(connected: false);

SyncBlock? blocked({
  bool signedIn = true,
  bool signInExpired = false,
  bool hasTenant = true,
  bool enabled = true,
  bool useCellular = false,
  NetworkStatus network = wifi,
  bool forced = false,
}) =>
    syncBlockedBy(
      signedIn: signedIn,
      signInExpired: signInExpired,
      hasTenant: hasTenant,
      enabled: enabled,
      useCellular: useCellular,
      network: network,
      forced: forced,
    );

void main() {
  test('syncs automatically on Wi-Fi by default', () {
    expect(blocked(), isNull);
  });

  test('needs a session and a tenant, forced or not', () {
    for (final forced in [false, true]) {
      expect(blocked(signedIn: false, forced: forced), SyncBlock.signedOut);
      expect(blocked(signInExpired: true, forced: forced), SyncBlock.signInExpired);
      expect(blocked(hasTenant: false, forced: forced), SyncBlock.noTenant);
      expect(blocked(network: offline, forced: forced), SyncBlock.offline);
    }
  });

  test('waits for Wi-Fi on cellular or a hotspot unless cellular is allowed', () {
    expect(blocked(network: cellular), SyncBlock.waitingForWifi);
    expect(blocked(network: hotspot), SyncBlock.waitingForWifi);
    expect(blocked(network: cellular, useCellular: true), isNull);
  });

  test('pauses for Low Power and Low Data Mode, like Photos backup', () {
    expect(blocked(network: const NetworkStatus(connected: true, wifi: true, lowPowerMode: true)),
        SyncBlock.lowPowerMode);
    expect(blocked(network: const NetworkStatus(connected: true, wifi: true, lowDataMode: true)),
        SyncBlock.lowDataMode);
  });

  test('automatic sync off says so, even offline', () {
    expect(blocked(enabled: false), SyncBlock.disabled);
    expect(blocked(enabled: false, network: offline), SyncBlock.disabled);
  });

  test('Sync now overrides the cellular setting, power and data modes, and auto-off', () {
    expect(blocked(forced: true, network: cellular), isNull);
    expect(
        blocked(
            forced: true,
            enabled: false,
            network: const NetworkStatus(
                connected: true, cellular: true, lowDataMode: true, lowPowerMode: true)),
        isNull);
  });

  test('every block has a message', () {
    for (final b in SyncBlock.values) {
      expect(b.message, isNotEmpty);
    }
  });
}
