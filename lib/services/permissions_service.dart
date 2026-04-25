import 'package:permission_handler/permission_handler.dart';

/// PermissionsService - thin wrapper around permission_handler so onboarding
/// UI and capture services share one code path for requesting and checking
/// camera + location permissions.
///
/// iOS only prompts the user the *first* time request() is called for a
/// given permission; after a denial it returns the cached status without
/// showing the system dialog. Callers should therefore check status first
/// and fall back to openAppSettings() when permanently denied.
class PermissionsService {
  /// Current camera permission status.
  static Future<PermissionStatus> cameraStatus() => Permission.camera.status;

  /// Current location-when-in-use permission status.
  static Future<PermissionStatus> locationStatus() =>
      Permission.locationWhenInUse.status;

  /// Trigger the iOS camera prompt (or return cached status after a denial).
  static Future<PermissionStatus> requestCamera() => Permission.camera.request();

  /// Trigger the iOS location prompt (or return cached status after a denial).
  static Future<PermissionStatus> requestLocation() =>
      Permission.locationWhenInUse.request();

  /// Deep-link into the iOS app settings page so the user can flip a
  /// permission we can no longer re-prompt for.
  static Future<bool> openSettings() => openAppSettings();
}
