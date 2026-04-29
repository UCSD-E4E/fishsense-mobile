import 'package:flutter_test/flutter_test.dart';
import 'package:shared_preferences/shared_preferences.dart';

import 'package:fishsense_android/services/preferences_service.dart';

void main() {
  setUp(() {
    SharedPreferences.setMockInitialValues({});
  });

  // ---------------------------------------------------------------------------
  // Pure formatter
  // ---------------------------------------------------------------------------
  group('formatFishLengthIn', () {
    test('metric renders meters as integer millimeters', () {
      // 0.452 m == 452 mm exactly.
      expect(formatFishLengthIn(0.452, UnitsSystem.metric), '452 mm');
    });

    test('metric rounds to the nearest millimeter', () {
      // 0.4524 m -> 452.4 mm -> rounds to 452 mm.
      expect(formatFishLengthIn(0.4524, UnitsSystem.metric), '452 mm');
      // 0.4526 m -> 452.6 mm -> rounds to 453 mm.
      expect(formatFishLengthIn(0.4526, UnitsSystem.metric), '453 mm');
    });

    test('metric handles zero and large fish', () {
      expect(formatFishLengthIn(0.0, UnitsSystem.metric), '0 mm');
      // 2 m bull mahi.
      expect(formatFishLengthIn(2.0, UnitsSystem.metric), '2000 mm');
    });

    test('imperial renders meters as inches with 1 decimal', () {
      // 1 m == 39.3700787 in -> '39.4 in'.
      expect(formatFishLengthIn(1.0, UnitsSystem.imperial), '39.4 in');
    });

    test('imperial rounds correctly at typical fish lengths', () {
      // 0.452 m == 17.79... in -> '17.8 in'.
      expect(formatFishLengthIn(0.452, UnitsSystem.imperial), '17.8 in');
      // 0.30 m == 11.81 in -> '11.8 in'.
      expect(formatFishLengthIn(0.30, UnitsSystem.imperial), '11.8 in');
    });

    test('imperial handles zero', () {
      expect(formatFishLengthIn(0.0, UnitsSystem.imperial), '0.0 in');
    });
  });

  // ---------------------------------------------------------------------------
  // Persistence + ChangeNotifier
  // ---------------------------------------------------------------------------
  group('PreferencesService', () {
    // Most tests below pin the locale to a metric country so they assert
    // the persistence/notifier behavior independent of whatever locale the
    // test runner happens to be in.
    PreferencesService freshMetric() =>
        PreferencesService(countryCodeProvider: () => 'DE');

    test('units defaults to metric on a fresh install in a metric locale',
        () async {
      final svc = freshMetric();
      await svc.load();
      expect(svc.units, UnitsSystem.metric);
      expect(svc.loaded, isTrue);
    });

    test('loaded flips to true after load completes', () async {
      final svc = PreferencesService();
      expect(svc.loaded, isFalse);
      await svc.load();
      expect(svc.loaded, isTrue);
    });

    test('setUnits persists the new value across a fresh service', () async {
      final first = PreferencesService();
      await first.load();
      await first.setUnits(UnitsSystem.imperial);

      final second = PreferencesService();
      await second.load();
      expect(second.units, UnitsSystem.imperial);
    });

    test('setUnits notifies listeners only on a real change', () async {
      final svc = freshMetric();
      await svc.load();

      var calls = 0;
      svc.addListener(() => calls++);

      // No-op: already metric.
      await svc.setUnits(UnitsSystem.metric);
      expect(calls, 0);

      // Real change.
      await svc.setUnits(UnitsSystem.imperial);
      expect(calls, 1);

      // Repeat no-op on the new value.
      await svc.setUnits(UnitsSystem.imperial);
      expect(calls, 1);
    });

    test('load notifies listeners so widgets rebuild after disk read',
        () async {
      final svc = PreferencesService();
      var calls = 0;
      svc.addListener(() => calls++);
      await svc.load();
      expect(calls, 1);
    });

    test('formatFishLength uses the currently selected units', () async {
      final svc = freshMetric();
      await svc.load();
      // Default: metric.
      expect(svc.formatFishLength(0.452), '452 mm');
      await svc.setUnits(UnitsSystem.imperial);
      expect(svc.formatFishLength(0.452), '17.8 in');
    });

    test('honors a pre-existing imperial value on disk', () async {
      SharedPreferences.setMockInitialValues({'preferred_units': 'imperial'});
      final svc = PreferencesService();
      await svc.load();
      expect(svc.units, UnitsSystem.imperial);
    });

    test('unknown stored value falls back to the locale default', () async {
      // 'klingon' is unrecognized, so we resolve via the locale path —
      // here pinned to a metric country so the assertion is stable.
      SharedPreferences.setMockInitialValues({'preferred_units': 'klingon'});
      final svc = freshMetric();
      await svc.load();
      expect(svc.units, UnitsSystem.metric);
    });

    test('seeds imperial from device locale on a fresh install in the US',
        () async {
      final svc = PreferencesService(countryCodeProvider: () => 'US');
      await svc.load();
      expect(svc.units, UnitsSystem.imperial);
    });

    test('seeds metric from device locale on a fresh install in Germany',
        () async {
      final svc = PreferencesService(countryCodeProvider: () => 'DE');
      await svc.load();
      expect(svc.units, UnitsSystem.metric);
    });

    test('locale default does not override a stored preference', () async {
      // User previously chose metric, then their phone's region setting
      // changed to US — we must still honor their saved choice.
      SharedPreferences.setMockInitialValues({'preferred_units': 'metric'});
      final svc = PreferencesService(countryCodeProvider: () => 'US');
      await svc.load();
      expect(svc.units, UnitsSystem.metric);
    });

    test('falls back to metric when the device has no country code',
        () async {
      final svc = PreferencesService(countryCodeProvider: () => null);
      await svc.load();
      expect(svc.units, UnitsSystem.metric);
    });
  });

  // ---------------------------------------------------------------------------
  // Locale-based default helper
  // ---------------------------------------------------------------------------
  group('defaultUnitsForCountry', () {
    test('imperial for US, Liberia, Myanmar', () {
      expect(defaultUnitsForCountry('US'), UnitsSystem.imperial);
      expect(defaultUnitsForCountry('LR'), UnitsSystem.imperial);
      expect(defaultUnitsForCountry('MM'), UnitsSystem.imperial);
    });

    test('metric for everywhere else', () {
      expect(defaultUnitsForCountry('GB'), UnitsSystem.metric);
      expect(defaultUnitsForCountry('DE'), UnitsSystem.metric);
      expect(defaultUnitsForCountry('JP'), UnitsSystem.metric);
      expect(defaultUnitsForCountry('CA'), UnitsSystem.metric);
    });

    test('metric when country code is null or empty', () {
      expect(defaultUnitsForCountry(null), UnitsSystem.metric);
      expect(defaultUnitsForCountry(''), UnitsSystem.metric);
    });
  });
}
