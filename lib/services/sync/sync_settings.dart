import 'package:flutter/foundation.dart';
import 'package:shared_preferences/shared_preferences.dart';

/// The user's sync choices (Settings → Account), persisted on the phone.
///
/// Like Google Photos backup: sync runs on its own whenever allowed, over
/// Wi-Fi unless cellular data is allowed. A capture is about 9 MB.
class SyncSettings extends ChangeNotifier {
  static const _enabledKey = 'sync.enabled';
  static const _useCellularKey = 'sync.use_cellular';

  bool _enabled = true;
  bool _useCellular = false;

  /// Sync automatically whenever allowed. On by default; "Sync now" works
  /// either way.
  bool get enabled => _enabled;

  /// Allow sync over cellular data (or a Personal Hotspot). Off by default.
  bool get useCellular => _useCellular;

  Future<void> load() async {
    final prefs = await SharedPreferences.getInstance();
    _enabled = prefs.getBool(_enabledKey) ?? true;
    _useCellular = prefs.getBool(_useCellularKey) ?? false;
    notifyListeners();
  }

  Future<void> setEnabled(bool value) async {
    if (_enabled == value) return;
    _enabled = value;
    notifyListeners();
    await (await SharedPreferences.getInstance()).setBool(_enabledKey, value);
  }

  Future<void> setUseCellular(bool value) async {
    if (_useCellular == value) return;
    _useCellular = value;
    notifyListeners();
    await (await SharedPreferences.getInstance()).setBool(_useCellularKey, value);
  }
}
