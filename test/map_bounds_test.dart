import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/models.dart';
import 'package:fishsense_android/services/map_bounds.dart';

PhotoModel _photo({double? lat, double? lon, int id = 1}) {
  // Bare-minimum PhotoModel for the bounds helper — depth/confidence
  // dimensions don't matter, only lat/lon do.
  return PhotoModel(
    id: id,
    utcUnixTimestamp: 1700000000,
    rgbPath: 'r.jpg',
    depthMap: ByteMatrixModel(bytes: null, width: 0, height: 0),
    confidenceMap: ByteMatrixModel(bytes: null, width: 0, height: 0),
    latitude: lat,
    longitude: lon,
  );
}

void main() {
  group('MapBounds.mappedPhotos', () {
    test('keeps photos with both coords set', () {
      final photos = [
        _photo(lat: 32.88, lon: -117.23, id: 1),
        _photo(lat: 33.0, lon: -118.0, id: 2),
      ];
      expect(MapBounds.mappedPhotos(photos).length, 2);
    });

    test('drops photos missing either coord', () {
      final photos = [
        _photo(lat: 32.88, lon: -117.23, id: 1),
        _photo(lat: null, lon: -118.0, id: 2),
        _photo(lat: 33.0, lon: null, id: 3),
        _photo(lat: null, lon: null, id: 4),
      ];
      final mapped = MapBounds.mappedPhotos(photos);
      expect(mapped.length, 1);
      expect(mapped.first.id, 1);
    });

    test('returns empty list when nothing is mapped', () {
      expect(MapBounds.mappedPhotos([_photo()]), isEmpty);
      expect(MapBounds.mappedPhotos([]), isEmpty);
    });
  });

  group('MapBounds.boundsOf', () {
    test('returns null when no photos have coords', () {
      expect(MapBounds.boundsOf([]), isNull);
      expect(MapBounds.boundsOf([_photo()]), isNull);
    });

    test('single point collapses to min == max', () {
      final bounds = MapBounds.boundsOf([_photo(lat: 32.88, lon: -117.23)])!;
      // Caller is expected to pad before fitting the camera.
      expect(bounds.minLat, 32.88);
      expect(bounds.maxLat, 32.88);
      expect(bounds.minLon, -117.23);
      expect(bounds.maxLon, -117.23);
    });

    test('two points produce the rectangle containing both', () {
      final bounds = MapBounds.boundsOf([
        _photo(lat: 32.88, lon: -117.23, id: 1),
        _photo(lat: 33.50, lon: -118.10, id: 2),
      ])!;
      expect(bounds.minLat, 32.88);
      expect(bounds.maxLat, 33.50);
      expect(bounds.minLon, -118.10);
      expect(bounds.maxLon, -117.23);
    });

    test('finds extremes across many points regardless of insertion order', () {
      final bounds = MapBounds.boundsOf([
        _photo(lat: 33.0, lon: -117.5, id: 1),
        _photo(lat: 32.5, lon: -118.0, id: 2), // min lat, min lon
        _photo(lat: 34.0, lon: -116.0, id: 3), // max lat, max lon
        _photo(lat: 33.5, lon: -117.0, id: 4),
      ])!;
      expect(bounds.minLat, 32.5);
      expect(bounds.maxLat, 34.0);
      expect(bounds.minLon, -118.0);
      expect(bounds.maxLon, -116.0);
    });

    test('ignores rows missing coords without throwing', () {
      // Mixed input — null-coord rows must be filtered before the bounds
      // math, otherwise we'd null-deref.
      final bounds = MapBounds.boundsOf([
        _photo(lat: null, lon: null, id: 1),
        _photo(lat: 32.88, lon: -117.23, id: 2),
        _photo(lat: null, lon: -117.5, id: 3),
        _photo(lat: 33.5, lon: -118.0, id: 4),
      ])!;
      expect(bounds.minLat, 32.88);
      expect(bounds.maxLat, 33.5);
      expect(bounds.minLon, -118.0);
      expect(bounds.maxLon, -117.23);
    });

    test('handles southern + western hemispheres (negative lat/lon)', () {
      final bounds = MapBounds.boundsOf([
        _photo(lat: -34.6, lon: -58.4, id: 1), // Buenos Aires
        _photo(lat: -33.9, lon: 18.4, id: 2), // Cape Town
      ])!;
      expect(bounds.minLat, -34.6);
      expect(bounds.maxLat, -33.9);
      expect(bounds.minLon, -58.4);
      expect(bounds.maxLon, 18.4);
    });
  });
}
