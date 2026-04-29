import 'package:flutter/foundation.dart';
import 'package:shared_preferences/shared_preferences.dart';

/// User-selected display units for fish length. The on-disk fish_length
/// column is always meters; this only changes how that value is rendered.
enum UnitsSystem { metric, imperial }

/// Persistent user preferences (units system, future toggles). Backed by
/// SharedPreferences and exposed as a [ChangeNotifier] so display widgets
/// rebuild when the user flips a setting in the Settings tab.
class PreferencesService extends ChangeNotifier {
  /// [countryCodeProvider] is injectable for tests; production code uses
  /// the device's current locale via [PlatformDispatcher].
  PreferencesService({String? Function()? countryCodeProvider})
      : _countryCodeProvider =
            countryCodeProvider ?? _platformCountryCode;

  static String? _platformCountryCode() =>
      PlatformDispatcher.instance.locale.countryCode;

  static const String _unitsKey = 'preferred_units';

  final String? Function() _countryCodeProvider;

  UnitsSystem _units = UnitsSystem.metric;
  bool _loaded = false;

  UnitsSystem get units => _units;

  /// True once [load] has finished reading from disk. Widgets that render
  /// against [units] before this flips will see the field default
  /// (metric); on first launch in an imperial locale they may briefly
  /// show metric until [load] resolves the locale-based default. There
  /// are no measurements on disk before first capture, so this flash
  /// has nothing to render against in practice.
  bool get loaded => _loaded;

  /// Read the saved preference into memory. Safe to call multiple times.
  /// On a fresh install (no stored value), seeds the default from the
  /// device locale via [defaultUnitsForCountry].
  Future<void> load() async {
    final prefs = await SharedPreferences.getInstance();
    final raw = prefs.getString(_unitsKey);
    _units = switch (raw) {
      'imperial' => UnitsSystem.imperial,
      'metric' => UnitsSystem.metric,
      _ => defaultUnitsForCountry(_countryCodeProvider()),
    };
    _loaded = true;
    notifyListeners();
  }

  /// Persist the new selection and notify listeners. No-op if unchanged.
  Future<void> setUnits(UnitsSystem next) async {
    if (_units == next) return;
    _units = next;
    notifyListeners();
    final prefs = await SharedPreferences.getInstance();
    await prefs.setString(
      _unitsKey,
      next == UnitsSystem.metric ? 'metric' : 'imperial',
    );
  }

  /// Convenience: format using the currently selected units.
  String formatFishLength(double meters) =>
      formatFishLengthIn(meters, _units);
}

/// Pure formatter — kept as a free function so it can be called without a
/// provider (tests, dev tooling) and so the Settings screen can preview both
/// units side-by-side.
///
/// `meters` is the value as stored in the photos.fish_length column. Metric
/// renders in millimeters (0 decimals — 1 mm is finer than the underlying
/// depth-based measurement is actually accurate to). Imperial renders in
/// inches with 1 decimal, since anglers describe fish in inches rather than
/// feet+inches.
/// First-launch default for a device's country code. Imperial only for the
/// officially imperial-using countries (US, Liberia, Myanmar); metric for
/// everyone else, including the UK (which is officially metric even though
/// anglers there often think in inches). This only seeds the initial value
/// — the user can flip it in Settings.
UnitsSystem defaultUnitsForCountry(String? countryCode) {
  switch (countryCode) {
    case 'US':
    case 'LR':
    case 'MM':
      return UnitsSystem.imperial;
    default:
      return UnitsSystem.metric;
  }
}

String formatFishLengthIn(double meters, UnitsSystem units) {
  switch (units) {
    case UnitsSystem.metric:
      return '${(meters * 1000).toStringAsFixed(0)} mm';
    case UnitsSystem.imperial:
      return '${(meters * 39.3700787).toStringAsFixed(1)} in';
  }
}
