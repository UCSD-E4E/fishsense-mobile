import 'package:shared_preferences/shared_preferences.dart';

/// OnboardingState - versioned "have they seen the intro?" flag.
///
/// Store the highest onboarding version the user has finished so a future
/// release can introduce a new permission (e.g. photo library) as a short
/// incremental page without replaying the whole welcome.
class OnboardingState {
  /// Bump when a new onboarding page is added that every existing user
  /// should see on their next launch.
  static const int currentVersion = 1;

  static const String _key = 'onboarding_version_seen';

  /// Highest onboarding version this user has completed (0 = never).
  static Future<int> seenVersion() async {
    final prefs = await SharedPreferences.getInstance();
    return prefs.getInt(_key) ?? 0;
  }

  /// True when the user still needs to see onboarding at least once.
  static Future<bool> needsOnboarding() async {
    return (await seenVersion()) < currentVersion;
  }

  /// Mark onboarding as completed up through [currentVersion].
  static Future<void> markComplete() async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.setInt(_key, currentVersion);
  }

  /// Reset the flag — intended for tests / QA.
  static Future<void> reset() async {
    final prefs = await SharedPreferences.getInstance();
    await prefs.remove(_key);
  }
}
