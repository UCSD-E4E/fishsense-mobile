import 'package:geocoding/geocoding.dart';
import '../logger.dart';

/// GeocodingService - reverse-geocodes a GPS fix into a short human-readable
/// place label ("Mission Bay, CA", "Baja California, MX").
///
/// Returns null whenever the geocoder can't produce a useful name — no
/// network, offshore water, or a Placemark with only empty fields — so the
/// caller falls through to the raw lat/lon display.
class GeocodingService {
  static const String _tag = 'GeocodingService';

  /// Reverse-geocode [latitude]/[longitude] and format the best label we can.
  /// Null means "no friendly name available — show raw coords instead".
  static Future<String?> reverseGeocode(
      double latitude, double longitude) async {
    try {
      final placemarks = await placemarkFromCoordinates(latitude, longitude);
      if (placemarks.isEmpty) {
        log.d('$_tag: no placemarks for $latitude, $longitude');
        return null;
      }
      return formatPlacemark(placemarks.first);
    } catch (e) {
      log.w('$_tag: reverse-geocode failed', error: e);
      return null;
    }
  }

  /// Pure formatter — exposed for unit testing so we don't need a live
  /// geocoder to cover the fallback ladder. Returns null if the placemark
  /// is effectively empty.
  ///
  /// Preference order (most to least specific):
  ///   1. "{locality}, {administrativeArea}"    e.g. "San Diego, CA"
  ///   2. "{subLocality}, {administrativeArea}" e.g. "Mission Bay, CA"
  ///   3. "{locality}"                           when no admin region known
  ///   4. "{subLocality}"
  ///   5. "{administrativeArea}, {country}"     e.g. "California, USA"
  ///   6. "{administrativeArea}"                 e.g. "CA"
  ///   7. "{country}"
  static String? formatPlacemark(Placemark p) {
    String? nonEmpty(String? s) =>
        (s == null || s.trim().isEmpty) ? null : s.trim();

    final locality = nonEmpty(p.locality);
    final subLocality = nonEmpty(p.subLocality);
    final admin = nonEmpty(p.administrativeArea);
    final country = nonEmpty(p.country);

    if (locality != null && admin != null) return '$locality, $admin';
    if (subLocality != null && admin != null) return '$subLocality, $admin';
    if (locality != null) return locality;
    if (subLocality != null) return subLocality;
    if (admin != null && country != null) return '$admin, $country';
    if (admin != null) return admin;
    return country;
  }
}
