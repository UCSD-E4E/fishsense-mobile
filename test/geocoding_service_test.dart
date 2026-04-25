import 'package:flutter_test/flutter_test.dart';
import 'package:geocoding/geocoding.dart';

import 'package:fishsense_android/services/geocoding_service.dart';

/// Helper to build a Placemark with only the fields we care about — the
/// constructor takes every field as an optional named, and we only exercise
/// a handful in the formatter's fallback ladder.
Placemark _pm({
  String? locality,
  String? subLocality,
  String? administrativeArea,
  String? country,
}) {
  return Placemark(
    locality: locality,
    subLocality: subLocality,
    administrativeArea: administrativeArea,
    country: country,
  );
}

void main() {
  group('GeocodingService.formatPlacemark', () {
    test('prefers locality + administrativeArea', () {
      final label = GeocodingService.formatPlacemark(_pm(
        locality: 'San Diego',
        subLocality: 'Mission Bay',
        administrativeArea: 'CA',
        country: 'USA',
      ));
      expect(label, 'San Diego, CA');
    });

    test('falls back to subLocality + administrativeArea when no locality', () {
      final label = GeocodingService.formatPlacemark(_pm(
        subLocality: 'Mission Bay',
        administrativeArea: 'CA',
        country: 'USA',
      ));
      expect(label, 'Mission Bay, CA');
    });

    test('falls back to locality alone when no administrativeArea', () {
      final label = GeocodingService.formatPlacemark(_pm(
        locality: 'San Diego',
        country: 'USA',
      ));
      expect(label, 'San Diego');
    });

    test('falls back to administrativeArea + country offshore', () {
      // Apple often returns just state + country for offshore fixes —
      // fishing-relevant edge case.
      final label = GeocodingService.formatPlacemark(_pm(
        administrativeArea: 'California',
        country: 'USA',
      ));
      expect(label, 'California, USA');
    });

    test('falls back to country when only country is known', () {
      final label = GeocodingService.formatPlacemark(_pm(country: 'Mexico'));
      expect(label, 'Mexico');
    });

    test('returns null for an empty placemark', () {
      // Geocoder occasionally returns a placemark with every field empty
      // (far offshore, Antarctic waters, etc.) — we must fall through to
      // raw-coord display in that case.
      expect(GeocodingService.formatPlacemark(_pm()), isNull);
    });

    test('treats whitespace-only fields as empty', () {
      final label = GeocodingService.formatPlacemark(_pm(
        locality: '   ',
        administrativeArea: 'CA',
      ));
      expect(label, 'CA');
    });

    test('trims surrounding whitespace in output components', () {
      final label = GeocodingService.formatPlacemark(_pm(
        locality: '  San Diego  ',
        administrativeArea: ' CA ',
      ));
      expect(label, 'San Diego, CA');
    });
  });
}
