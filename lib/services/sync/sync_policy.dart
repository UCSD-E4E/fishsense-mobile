import 'network_status.dart';

/// Why sync can't run right now.
enum SyncBlock {
  signedOut,
  signInExpired,
  noTenant,

  /// Automatic sync is off ("Sync now" still works).
  disabled,
  offline,
  waitingForWifi,
  lowDataMode,
  lowPowerMode;

  /// One line for the sync status.
  String get message => switch (this) {
        SyncBlock.signedOut => 'Sign in to sync.',
        SyncBlock.signInExpired => 'Sign in again to sync.',
        SyncBlock.noTenant => 'Choose an organization to sync to.',
        SyncBlock.disabled => 'Automatic sync is off.',
        SyncBlock.offline => 'Waiting for a connection.',
        SyncBlock.waitingForWifi => 'Waiting for Wi-Fi.',
        SyncBlock.lowDataMode => 'Paused: Low Data Mode is on.',
        SyncBlock.lowPowerMode => 'Paused: Low Power Mode is on.',
      };
}

/// Whether sync may run, and if not, why. Null means go.
///
/// Automatic sync follows the user's settings and pauses for Low Power and
/// Low Data Mode, as Google Photos backup does. A [forced] run ("Sync now")
/// is the user asking explicitly, so it skips those, but it still needs a
/// session, a tenant and a connection.
SyncBlock? syncBlockedBy({
  required bool signedIn,
  required bool signInExpired,
  required bool hasTenant,
  required bool enabled,
  required bool useCellular,
  required NetworkStatus network,
  required bool forced,
}) {
  if (!signedIn) return SyncBlock.signedOut;
  if (signInExpired) return SyncBlock.signInExpired;
  if (!hasTenant) return SyncBlock.noTenant;
  if (!forced && !enabled) return SyncBlock.disabled;
  if (!network.connected) return SyncBlock.offline;
  if (forced) return null;
  if (network.lowPowerMode) return SyncBlock.lowPowerMode;
  if (network.lowDataMode) return SyncBlock.lowDataMode;
  if (network.metered && !useCellular) return SyncBlock.waitingForWifi;
  return null;
}
