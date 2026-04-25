import 'package:flutter_test/flutter_test.dart';
import 'package:shared_preferences/shared_preferences.dart';

import 'package:fishsense_android/services/onboarding_state.dart';

void main() {
  setUp(() {
    SharedPreferences.setMockInitialValues({});
  });

  group('OnboardingState', () {
    test('seenVersion defaults to 0 on a fresh install', () async {
      expect(await OnboardingState.seenVersion(), 0);
    });

    test('needsOnboarding is true on a fresh install', () async {
      expect(await OnboardingState.needsOnboarding(), isTrue);
    });

    test('markComplete persists currentVersion', () async {
      await OnboardingState.markComplete();
      expect(
        await OnboardingState.seenVersion(),
        OnboardingState.currentVersion,
      );
    });

    test('needsOnboarding is false after markComplete', () async {
      await OnboardingState.markComplete();
      expect(await OnboardingState.needsOnboarding(), isFalse);
    });

    test('needsOnboarding is true when a prior version was seen', () async {
      // Simulate a user who finished an older onboarding version.
      SharedPreferences.setMockInitialValues({
        'onboarding_version_seen': OnboardingState.currentVersion - 1,
      });
      expect(await OnboardingState.needsOnboarding(), isTrue);
    });

    test('needsOnboarding is false when a newer version was seen', () async {
      // Future-proof: downgrading shouldn't replay onboarding.
      SharedPreferences.setMockInitialValues({
        'onboarding_version_seen': OnboardingState.currentVersion + 1,
      });
      expect(await OnboardingState.needsOnboarding(), isFalse);
    });

    test('reset clears the flag', () async {
      await OnboardingState.markComplete();
      await OnboardingState.reset();
      expect(await OnboardingState.seenVersion(), 0);
      expect(await OnboardingState.needsOnboarding(), isTrue);
    });
  });
}
