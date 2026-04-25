import 'package:geolocator/geolocator.dart';
import '../logger.dart';

/// LocationFix - a single GPS reading captured alongside a photo.
class LocationFix {
  final double latitude;
  final double longitude;
  final double horizontalAccuracy;

  const LocationFix({
    required this.latitude,
    required this.longitude,
    required this.horizontalAccuracy,
  });
}

/// LocationService - wraps geolocator to acquire a one-shot GPS fix.
/// Capture must still succeed without a location, so every failure path
/// returns null rather than throwing.
class LocationService {
  static const String _tag = 'LocationService';
  static const Duration _timeout = Duration(seconds: 5);

  /// Ask for a single GPS fix. Returns null if services are off, permission
  /// is denied, or the fix doesn't arrive before the timeout.
  static Future<LocationFix?> getCurrentFix() async {
    try {
      final servicesEnabled = await Geolocator.isLocationServiceEnabled();
      if (!servicesEnabled) {
        log.w('$_tag: location services disabled');
        return null;
      }

      var permission = await Geolocator.checkPermission();
      if (permission == LocationPermission.denied) {
        permission = await Geolocator.requestPermission();
      }
      if (permission == LocationPermission.denied ||
          permission == LocationPermission.deniedForever) {
        log.w('$_tag: location permission denied ($permission)');
        return null;
      }

      final position = await Geolocator.getCurrentPosition(
        locationSettings: const LocationSettings(
          accuracy: LocationAccuracy.best,
          timeLimit: _timeout,
        ),
      );

      return LocationFix(
        latitude: position.latitude,
        longitude: position.longitude,
        horizontalAccuracy: position.accuracy,
      );
    } catch (e) {
      log.w('$_tag: failed to acquire location fix', error: e);
      return null;
    }
  }
}
