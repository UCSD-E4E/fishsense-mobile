import 'dart:typed_data';

import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/models.dart';
import 'package:fishsense_android/extensions.dart';

void main() {
  // ---------------------------------------------------------------------------
  // Coordinate
  // ---------------------------------------------------------------------------
  group('Coordinate', () {
    test('zero constant is (0, 0)', () {
      expect(Coordinate.zero.x, 0.0);
      expect(Coordinate.zero.y, 0.0);
    });

    test('equality holds for identical values', () {
      const a = Coordinate(x: 1.5, y: 2.5);
      const b = Coordinate(x: 1.5, y: 2.5);
      expect(a, equals(b));
    });

    test('inequality for different x', () {
      const a = Coordinate(x: 1.0, y: 2.0);
      const b = Coordinate(x: 9.0, y: 2.0);
      expect(a, isNot(equals(b)));
    });

    test('inequality for different y', () {
      const a = Coordinate(x: 1.0, y: 2.0);
      const b = Coordinate(x: 1.0, y: 9.0);
      expect(a, isNot(equals(b)));
    });

    test('hashCode is consistent for equal coordinates', () {
      const a = Coordinate(x: 3.0, y: 4.0);
      const b = Coordinate(x: 3.0, y: 4.0);
      expect(a.hashCode, equals(b.hashCode));
    });

    test('toString formats correctly', () {
      const c = Coordinate(x: 3.0, y: 4.0);
      expect(c.toString(), 'Coordinate(x: 3.0, y: 4.0)');
    });
  });

  // ---------------------------------------------------------------------------
  // ByteMatrixModel
  // ---------------------------------------------------------------------------
  group('ByteMatrixModel', () {
    test('constructor stores all fields', () {
      final m = ByteMatrixModel(bytes: [1, 2, 3, 4], width: 2, height: 2);
      expect(m.bytes, [1, 2, 3, 4]);
      expect(m.width, 2);
      expect(m.height, 2);
    });

    test('create factory returns model with expected fields', () {
      final m = ByteMatrixModel.create(bytes: [10, 20], width: 1, height: 2);
      expect(m, isNotNull);
      expect(m!.bytes, [10, 20]);
      expect(m.width, 1);
      expect(m.height, 2);
    });

    test('bytes can be null', () {
      final m = ByteMatrixModel(bytes: null, width: 4, height: 4);
      expect(m.bytes, isNull);
      expect(m.width, 4);
      expect(m.height, 4);
    });
  });

  // ---------------------------------------------------------------------------
  // PhotoModel
  // ---------------------------------------------------------------------------
  group('PhotoModel', () {
    final depthMap = ByteMatrixModel(bytes: [1, 2, 3], width: 3, height: 1);
    final confidenceMap = ByteMatrixModel(bytes: [4, 5, 6], width: 3, height: 1);

    test('create returns model with all provided fields', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'rgb_test.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        deviceInfo: 'iPhone 15 Pro',
        fishLength: 30.5,
      );
      expect(model, isNotNull);
      expect(model!.utcUnixTimestamp, 1700000000);
      expect(model.rgbPath, 'rgb_test.jpg');
      expect(model.fishLength, 30.5);
      expect(model.deviceInfo, 'iPhone 15 Pro');
      expect(model.id, -1);
    });

    test('create defaults id to -1', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'test.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      );
      expect(model!.id, -1);
    });

    test('fishLength defaults to null when not provided', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'test.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      );
      expect(model!.fishLength, isNull);
    });

    test('toMap serializes id as null when id is -1', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'test.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      );
      expect(model!.toMap()['id'], isNull);
    });

    test('toMap serializes non-default id', () {
      final model = PhotoModel(
        id: 7,
        utcUnixTimestamp: 1700000000,
        rgbPath: 'test.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      );
      expect(model.toMap()['id'], 7);
    });

    test('toMap includes all expected keys', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'rgb_42.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        deviceInfo: 'Test Device',
        fishLength: 45.0,
      )!;
      final map = model.toMap();
      expect(map['utc_unix_timestamp'], 1700000000);
      expect(map['rgb_path'], 'rgb_42.jpg');
      expect(map['depth_width'], 3);
      expect(map['depth_height'], 1);
      expect(map['confidence_width'], 3);
      expect(map['confidence_height'], 1);
      expect(map['device_info'], 'Test Device');
      expect(map['fish_length'], 45.0);
    });

    test('fromMap reconstructs model correctly', () {
      final map = {
        'id': 3,
        'utc_unix_timestamp': 1700000000,
        'rgb_path': 'rgb_3.jpg',
        'depth_bytes': [1, 2],
        'depth_width': 2,
        'depth_height': 1,
        'confidence_bytes': [3, 4],
        'confidence_width': 2,
        'confidence_height': 1,
        'device_info': 'iPhone 14 Pro',
        'fish_length': 28.5,
      };
      final model = PhotoModel.fromMap(map);
      expect(model.id, 3);
      expect(model.utcUnixTimestamp, 1700000000);
      expect(model.rgbPath, 'rgb_3.jpg');
      expect(model.fishLength, 28.5);
      expect(model.deviceInfo, 'iPhone 14 Pro');
      expect(model.depthMap.width, 2);
      expect(model.depthMap.height, 1);
      expect(model.confidenceMap.width, 2);
      expect(model.confidenceMap.height, 1);
    });

    test('fromMap handles null fish_length', () {
      final map = {
        'id': 1,
        'utc_unix_timestamp': 1700000000,
        'rgb_path': 'rgb_1.jpg',
        'depth_bytes': null,
        'depth_width': 2,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 2,
        'confidence_height': 1,
        'device_info': null,
        'fish_length': null,
      };
      final model = PhotoModel.fromMap(map);
      expect(model.fishLength, isNull);
      expect(model.deviceInfo, isNull);
    });
  });

  // ---------------------------------------------------------------------------
  // ComputeLengthResult
  // ---------------------------------------------------------------------------
  group('ComputeLengthResult', () {
    test('success factory sets fishFound=true with correct coordinates', () {
      final result = ComputeLengthResult.success(
        length: 42.5,
        left: const Coordinate(x: 10, y: 20),
        right: const Coordinate(x: 30, y: 40),
        confidence: 0.9,
      );
      expect(result.fishFound, isTrue);
      expect(result.length, 42.5);
      expect(result.left, const Coordinate(x: 10, y: 20));
      expect(result.right, const Coordinate(x: 30, y: 40));
      expect(result.confidence, 0.9);
      expect(result.errorString, isNull);
    });

    test('notFound factory sets fishFound=false with zero coordinates', () {
      final result = ComputeLengthResult.notFound();
      expect(result.fishFound, isFalse);
      expect(result.length, 0.0);
      expect(result.left, Coordinate.zero);
      expect(result.right, Coordinate.zero);
      expect(result.confidence, 0.0);
    });

    test('notFound factory forwards optional errorString', () {
      final result = ComputeLengthResult.notFound(errorString: 'no fish');
      expect(result.errorString, 'no fish');
    });

    test('error factory sets errorString and fishFound=false', () {
      final result = ComputeLengthResult.error(errorString: 'OpenCV failure');
      expect(result.fishFound, isFalse);
      expect(result.errorString, 'OpenCV failure');
      expect(result.length, 0.0);
      expect(result.left, Coordinate.zero);
      expect(result.right, Coordinate.zero);
    });

    test('fromMap deserializes all fields', () {
      final map = {
        'length': 55.0,
        'fishFound': true,
        'errorString': null,
        'leftX': 10.0,
        'leftY': 20.0,
        'rightX': 30.0,
        'rightY': 40.0,
        'confidence': 0.95,
        'imageWithDots': null,
      };
      final result = ComputeLengthResult.fromMap(map);
      expect(result.length, 55.0);
      expect(result.fishFound, isTrue);
      expect(result.left, const Coordinate(x: 10.0, y: 20.0));
      expect(result.right, const Coordinate(x: 30.0, y: 40.0));
      expect(result.confidence, 0.95);
      expect(result.imageWithDots, isNull);
    });

    test('fromMap applies default values for missing keys', () {
      final result = ComputeLengthResult.fromMap({});
      expect(result.length, 0.0);
      expect(result.fishFound, isFalse);
      expect(result.confidence, 0.0);
      expect(result.left, Coordinate.zero);
      expect(result.right, Coordinate.zero);
    });

    test('toMap serializes all fields', () {
      final result = ComputeLengthResult.success(
        length: 33.3,
        left: const Coordinate(x: 5.0, y: 6.0),
        right: const Coordinate(x: 7.0, y: 8.0),
        confidence: 0.8,
      );
      final map = result.toMap();
      expect(map['length'], 33.3);
      expect(map['fishFound'], isTrue);
      expect(map['leftX'], 5.0);
      expect(map['leftY'], 6.0);
      expect(map['rightX'], 7.0);
      expect(map['rightY'], 8.0);
      expect(map['confidence'], 0.8);
      expect(map['errorString'], isNull);
    });

    test('fromMap/toMap round-trip preserves values', () {
      final original = ComputeLengthResult.success(
        length: 21.0,
        left: const Coordinate(x: 1.0, y: 2.0),
        right: const Coordinate(x: 3.0, y: 4.0),
        confidence: 0.75,
      );
      final restored = ComputeLengthResult.fromMap(original.toMap());
      expect(restored, equals(original));
    });

    test('equality holds for results with same values', () {
      final a = ComputeLengthResult.success(
        length: 10.0,
        left: const Coordinate(x: 1, y: 2),
        right: const Coordinate(x: 3, y: 4),
      );
      final b = ComputeLengthResult.success(
        length: 10.0,
        left: const Coordinate(x: 1, y: 2),
        right: const Coordinate(x: 3, y: 4),
      );
      expect(a, equals(b));
    });

    test('inequality when length differs', () {
      final a = ComputeLengthResult.success(
        length: 10.0,
        left: Coordinate.zero,
        right: Coordinate.zero,
      );
      final b = ComputeLengthResult.success(
        length: 20.0,
        left: Coordinate.zero,
        right: Coordinate.zero,
      );
      expect(a, isNot(equals(b)));
    });

    test('toString mentions fishFound=false and error for error result', () {
      final result = ComputeLengthResult.error(errorString: 'SegmentationError');
      expect(result.toString(), contains('fishFound: false'));
      expect(result.toString(), contains('SegmentationError'));
    });

    test('toString includes length for successful result', () {
      final result = ComputeLengthResult.success(
        length: 42.12,
        left: Coordinate.zero,
        right: Coordinate.zero,
      );
      expect(result.toString(), contains('42.12'));
    });

    // -------------------------------------------------------------------------
    // Mask fields (added with the gallery overlay feature)
    // -------------------------------------------------------------------------
    test('success factory stores mask + dimensions', () {
      final mask = Uint8List.fromList([0, 1, 0, 1]);
      final result = ComputeLengthResult.success(
        length: 1.0,
        left: Coordinate.zero,
        right: Coordinate.zero,
        mask: mask,
        maskWidth: 2,
        maskHeight: 2,
      );
      expect(result.mask, same(mask));
      expect(result.maskWidth, 2);
      expect(result.maskHeight, 2);
    });

    test('mask defaults are null/0 when not provided', () {
      final result = ComputeLengthResult.success(
        length: 1.0,
        left: Coordinate.zero,
        right: Coordinate.zero,
      );
      expect(result.mask, isNull);
      expect(result.maskWidth, 0);
      expect(result.maskHeight, 0);
    });

    test('fromMap deserializes mask provided as Uint8List', () {
      final mask = Uint8List.fromList([5, 6, 7]);
      final result = ComputeLengthResult.fromMap({
        'fishFound': true,
        'mask': mask,
        'maskWidth': 3,
        'maskHeight': 1,
      });
      expect(result.mask, isA<Uint8List>());
      expect(result.mask, equals(mask));
      expect(result.maskWidth, 3);
      expect(result.maskHeight, 1);
    });

    test('fromMap converts mask provided as List<int> to Uint8List', () {
      final result = ComputeLengthResult.fromMap({
        'fishFound': true,
        'mask': <int>[9, 8, 7],
        'maskWidth': 3,
        'maskHeight': 1,
      });
      expect(result.mask, isA<Uint8List>());
      expect(result.mask, equals(Uint8List.fromList([9, 8, 7])));
    });

    test('fromMap handles missing mask (null bytes, zero dimensions)', () {
      final result = ComputeLengthResult.fromMap({'fishFound': false});
      expect(result.mask, isNull);
      expect(result.maskWidth, 0);
      expect(result.maskHeight, 0);
    });
  });

  // ---------------------------------------------------------------------------
  // PhotoModel — mask + snout/fork + captureOrientation (gallery feature)
  // ---------------------------------------------------------------------------
  group('PhotoModel mask + points + orientation', () {
    final depthMap = ByteMatrixModel(bytes: [1], width: 1, height: 1);
    final confidenceMap = ByteMatrixModel(bytes: [1], width: 1, height: 1);

    test('create stores all new optional fields', () {
      final mask = Uint8List.fromList([1, 0, 1, 0]);
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'rgb.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        maskBytes: mask,
        maskWidth: 2,
        maskHeight: 2,
        snoutX: 12.5,
        snoutY: 34.5,
        forkX: 56.5,
        forkY: 78.5,
        captureOrientation: 'portrait',
      )!;
      expect(model.maskBytes, same(mask));
      expect(model.maskWidth, 2);
      expect(model.maskHeight, 2);
      expect(model.snoutX, 12.5);
      expect(model.snoutY, 34.5);
      expect(model.forkX, 56.5);
      expect(model.forkY, 78.5);
      expect(model.captureOrientation, 'portrait');
    });

    test('new fields default to null when omitted', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1700000000,
        rgbPath: 'rgb.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      )!;
      expect(model.maskBytes, isNull);
      expect(model.maskWidth, isNull);
      expect(model.maskHeight, isNull);
      expect(model.snoutX, isNull);
      expect(model.snoutY, isNull);
      expect(model.forkX, isNull);
      expect(model.forkY, isNull);
      expect(model.captureOrientation, isNull);
    });

    test('toMap emits all new column keys', () {
      final mask = Uint8List.fromList([1, 1]);
      final map = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        maskBytes: mask,
        maskWidth: 2,
        maskHeight: 1,
        snoutX: 1.0,
        snoutY: 2.0,
        forkX: 3.0,
        forkY: 4.0,
        captureOrientation: 'landscape',
      )!.toMap();
      expect(map['mask_bytes'], same(mask));
      expect(map['mask_width'], 2);
      expect(map['mask_height'], 1);
      expect(map['snout_x'], 1.0);
      expect(map['snout_y'], 2.0);
      expect(map['fork_x'], 3.0);
      expect(map['fork_y'], 4.0);
      expect(map['capture_orientation'], 'landscape');
    });

    test('fromMap reconstructs new fields with Uint8List mask', () {
      final mask = Uint8List.fromList([0, 255, 0, 255]);
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'mask_bytes': mask,
        'mask_width': 2,
        'mask_height': 2,
        'snout_x': 10.5,
        'snout_y': 20.5,
        'fork_x': 30.5,
        'fork_y': 40.5,
        'capture_orientation': 'portrait',
      });
      expect(model.maskBytes, equals(mask));
      expect(model.maskWidth, 2);
      expect(model.maskHeight, 2);
      expect(model.snoutX, 10.5);
      expect(model.snoutY, 20.5);
      expect(model.forkX, 30.5);
      expect(model.forkY, 40.5);
      expect(model.captureOrientation, 'portrait');
    });

    test('fromMap converts List<int> mask payload (sqflite quirk) to Uint8List', () {
      // sqflite sometimes hands BLOBs back as plain List<int> instead of
      // Uint8List depending on platform — fromMap must normalize both.
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'mask_bytes': <int>[7, 8, 9, 10],
        'mask_width': 4,
        'mask_height': 1,
      });
      expect(model.maskBytes, isA<Uint8List>());
      expect(model.maskBytes, equals(Uint8List.fromList([7, 8, 9, 10])));
    });

    test('fromMap coerces int snout/fork values back to double', () {
      // SQLite REAL columns can come back as either int or double depending
      // on the actual stored value (e.g. 0 → int).
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'snout_x': 0,
        'snout_y': 5,
        'fork_x': 10,
        'fork_y': 0,
      });
      expect(model.snoutX, 0.0);
      expect(model.snoutX, isA<double>());
      expect(model.snoutY, 5.0);
      expect(model.forkX, 10.0);
      expect(model.forkY, 0.0);
    });

    test('fromMap handles all new fields being null', () {
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'mask_bytes': null,
        'mask_width': null,
        'mask_height': null,
        'snout_x': null,
        'snout_y': null,
        'fork_x': null,
        'fork_y': null,
        'capture_orientation': null,
      });
      expect(model.maskBytes, isNull);
      expect(model.maskWidth, isNull);
      expect(model.snoutX, isNull);
      expect(model.captureOrientation, isNull);
    });
  });

  // ---------------------------------------------------------------------------
  // PhotoModel — GPS fix (latitude, longitude, horizontalAccuracy)
  // ---------------------------------------------------------------------------
  group('PhotoModel GPS fix', () {
    final depthMap = ByteMatrixModel(bytes: [1], width: 1, height: 1);
    final confidenceMap = ByteMatrixModel(bytes: [1], width: 1, height: 1);

    test('create stores latitude, longitude, horizontalAccuracy', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        latitude: 32.8801,
        longitude: -117.2340,
        horizontalAccuracy: 4.5,
      )!;
      expect(model.latitude, 32.8801);
      expect(model.longitude, -117.2340);
      expect(model.horizontalAccuracy, 4.5);
    });

    test('create stores placeName independently of lat/lon', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        latitude: 32.88,
        longitude: -117.23,
        horizontalAccuracy: 5.0,
        placeName: 'Mission Bay, CA',
      )!;
      // Raw coords preserved alongside the friendly name — the DB keeps
      // both so the display layer can fall back if needed.
      expect(model.latitude, 32.88);
      expect(model.longitude, -117.23);
      expect(model.placeName, 'Mission Bay, CA');
    });

    test('placeName defaults to null when omitted', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        latitude: 32.88,
        longitude: -117.23,
      )!;
      expect(model.placeName, isNull);
    });

    test('toMap emits place_name (friendly name alongside raw coords)', () {
      final map = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        latitude: 32.88,
        longitude: -117.23,
        placeName: 'San Diego, CA',
      )!.toMap();
      expect(map['place_name'], 'San Diego, CA');
      expect(map['latitude'], 32.88);
      expect(map['longitude'], -117.23);
    });

    test('toMap emits null place_name when no geocode was recorded', () {
      final map = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      )!.toMap();
      expect(map.containsKey('place_name'), isTrue);
      expect(map['place_name'], isNull);
    });

    test('fromMap reconstructs placeName and keeps raw coords', () {
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'latitude': 32.88,
        'longitude': -117.23,
        'horizontal_accuracy': 4.5,
        'place_name': 'Mission Bay, CA',
      });
      expect(model.placeName, 'Mission Bay, CA');
      expect(model.latitude, 32.88);
      expect(model.longitude, -117.23);
      expect(model.horizontalAccuracy, 4.5);
    });

    test('fromMap handles missing place_name key (pre-v6 row)', () {
      // Rows written before v6 have lat/lon but no place_name at all.
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'latitude': 32.88,
        'longitude': -117.23,
      });
      expect(model.placeName, isNull);
      expect(model.latitude, 32.88);
      expect(model.longitude, -117.23);
    });

    test('fromMap preserves lat/lon even when place_name is null', () {
      // Network-off capture scenario: GPS fix recorded, geocode failed.
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'latitude': 32.88,
        'longitude': -117.23,
        'place_name': null,
      });
      expect(model.latitude, 32.88);
      expect(model.longitude, -117.23);
      expect(model.placeName, isNull);
    });

    test('location fields default to null when omitted', () {
      final model = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      )!;
      expect(model.latitude, isNull);
      expect(model.longitude, isNull);
      expect(model.horizontalAccuracy, isNull);
    });

    test('toMap emits location column keys', () {
      final map = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
        latitude: 32.88,
        longitude: -117.23,
        horizontalAccuracy: 5.0,
      )!.toMap();
      expect(map['latitude'], 32.88);
      expect(map['longitude'], -117.23);
      expect(map['horizontal_accuracy'], 5.0);
    });

    test('toMap emits null location keys when no fix was recorded', () {
      // The keys must exist so the sqflite insert doesn't complain about
      // missing columns in SQL compiled against the v5 schema.
      final map = PhotoModel.create(
        utcUnixTimestamp: 1,
        rgbPath: 'r.jpg',
        depthMap: depthMap,
        confidenceMap: confidenceMap,
      )!.toMap();
      expect(map.containsKey('latitude'), isTrue);
      expect(map.containsKey('longitude'), isTrue);
      expect(map.containsKey('horizontal_accuracy'), isTrue);
      expect(map['latitude'], isNull);
      expect(map['longitude'], isNull);
      expect(map['horizontal_accuracy'], isNull);
    });

    test('fromMap reconstructs location fields from a full row', () {
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'latitude': 32.8801,
        'longitude': -117.234,
        'horizontal_accuracy': 3.7,
      });
      expect(model.latitude, 32.8801);
      expect(model.longitude, -117.234);
      expect(model.horizontalAccuracy, 3.7);
    });

    test('fromMap coerces int location values back to double', () {
      // Equator/prime meridian or any whole-number accuracy arrive as int
      // from sqflite even though the column is REAL.
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'latitude': 0,
        'longitude': 0,
        'horizontal_accuracy': 5,
      });
      expect(model.latitude, 0.0);
      expect(model.latitude, isA<double>());
      expect(model.longitude, 0.0);
      expect(model.horizontalAccuracy, 5.0);
    });

    test('fromMap handles missing location keys (pre-v5 row)', () {
      // Rows written before the v5 migration won't have these keys at all.
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
      });
      expect(model.latitude, isNull);
      expect(model.longitude, isNull);
      expect(model.horizontalAccuracy, isNull);
    });

    test('fromMap handles explicitly null location values', () {
      final model = PhotoModel.fromMap({
        'id': 1,
        'utc_unix_timestamp': 1,
        'rgb_path': 'r.jpg',
        'depth_bytes': null,
        'depth_width': 1,
        'depth_height': 1,
        'confidence_bytes': null,
        'confidence_width': 1,
        'confidence_height': 1,
        'latitude': null,
        'longitude': null,
        'horizontal_accuracy': null,
      });
      expect(model.latitude, isNull);
      expect(model.longitude, isNull);
      expect(model.horizontalAccuracy, isNull);
    });
  });

  // ---------------------------------------------------------------------------
  // DataTemp
  // ---------------------------------------------------------------------------
  group('DataTemp', () {
    test('constructor stores photoId and metadata fields', () {
      final dt = DataTemp(
        photoId: 42,
        image: const [1, 2, 3],
        creationDate: DateTime.utc(2024, 1, 2, 3, 4),
        fishLen: 0.45,
        deviceInfo: 'iPhone 15 Pro',
      );
      expect(dt.photoId, 42);
      expect(dt.image, [1, 2, 3]);
      expect(dt.creationDate, DateTime.utc(2024, 1, 2, 3, 4));
      expect(dt.fishLen, 0.45);
      expect(dt.deviceInfo, 'iPhone 15 Pro');
    });

    test('fishLen and deviceInfo are optional', () {
      final dt = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
      );
      expect(dt.fishLen, isNull);
      expect(dt.deviceInfo, isNull);
    });

    test('constructor stores location fields when provided', () {
      final dt = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
        latitude: 32.8801,
        longitude: -117.234,
        horizontalAccuracy: 4.2,
      );
      expect(dt.latitude, 32.8801);
      expect(dt.longitude, -117.234);
      expect(dt.horizontalAccuracy, 4.2);
    });

    test('location fields are optional and default to null', () {
      final dt = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
      );
      expect(dt.latitude, isNull);
      expect(dt.longitude, isNull);
      expect(dt.horizontalAccuracy, isNull);
    });

    test('constructor stores placeName alongside raw coords', () {
      final dt = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
        latitude: 32.88,
        longitude: -117.23,
        placeName: 'Mission Bay, CA',
      );
      // Display layer can choose the friendly name but raw coords remain.
      expect(dt.placeName, 'Mission Bay, CA');
      expect(dt.latitude, 32.88);
      expect(dt.longitude, -117.23);
    });

    test('placeName defaults to null', () {
      final dt = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
      );
      expect(dt.placeName, isNull);
    });

    // -------------------------------------------------------------------------
    // copyWith — used by the gallery's lazy geocode pass.
    // -------------------------------------------------------------------------
    test('copyWith(placeName:) backfills name and preserves all other fields',
        () {
      final original = DataTemp(
        photoId: 42,
        image: const [1, 2, 3],
        creationDate: DateTime.utc(2024, 1, 2, 3, 4),
        fishLen: 0.45,
        deviceInfo: 'iPhone 15 Pro',
        latitude: 32.88,
        longitude: -117.23,
        horizontalAccuracy: 4.5,
      );
      final copy = original.copyWith(placeName: 'Mission Bay, CA');
      expect(copy.placeName, 'Mission Bay, CA');
      // Every other field is preserved so the gallery only re-renders the
      // location text, not the image tile.
      expect(copy.photoId, original.photoId);
      expect(copy.image, original.image);
      expect(copy.creationDate, original.creationDate);
      expect(copy.fishLen, original.fishLen);
      expect(copy.deviceInfo, original.deviceInfo);
      expect(copy.latitude, original.latitude);
      expect(copy.longitude, original.longitude);
      expect(copy.horizontalAccuracy, original.horizontalAccuracy);
    });

    test('copyWith with no args keeps existing placeName', () {
      final dt = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
        placeName: 'San Diego, CA',
      );
      // Lazy pass shouldn't clobber an already-geocoded row if it somehow
      // decides to re-wrap it.
      expect(dt.copyWith().placeName, 'San Diego, CA');
    });

    test('id is unique per instance (timestamp-derived)', () async {
      final a = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
      );
      // Force a microsecond delta so the millisecond-resolution id differs.
      await Future<void>.delayed(const Duration(milliseconds: 2));
      final b = DataTemp(
        photoId: 1,
        image: const [],
        creationDate: DateTime.utc(2024),
      );
      expect(a.id, isNot(equals(b.id)));
      expect(a == b, isFalse);
      expect(a == a, isTrue);
    });
  });

  // ---------------------------------------------------------------------------
  // DateTimeExtensions.toDisplayString
  // ---------------------------------------------------------------------------
  group('DateTimeExtensions.toDisplayString', () {
    test('formats a typical afternoon time as PM with 12-hour clock', () {
      final s = DateTime(2024, 3, 15, 14, 5).toDisplayString();
      expect(s, 'Mar 15, 2024 at 2:05 PM');
    });

    test('formats midnight as 12:00 AM (hour 0 → 12)', () {
      final s = DateTime(2024, 1, 1, 0, 0).toDisplayString();
      expect(s, 'Jan 1, 2024 at 12:00 AM');
    });

    test('formats noon as 12:00 PM (hour 12 stays 12, switches to PM)', () {
      final s = DateTime(2024, 6, 1, 12, 0).toDisplayString();
      expect(s, 'Jun 1, 2024 at 12:00 PM');
    });

    test('pads single-digit minutes with leading zero', () {
      final s = DateTime(2024, 12, 31, 9, 7).toDisplayString();
      expect(s, 'Dec 31, 2024 at 9:07 AM');
    });

    test('11 PM is formatted as 11:00 PM, not 23:00', () {
      final s = DateTime(2024, 7, 4, 23, 30).toDisplayString();
      expect(s, 'Jul 4, 2024 at 11:30 PM');
    });
  });
}
