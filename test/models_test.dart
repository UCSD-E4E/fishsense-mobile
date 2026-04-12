import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/models.dart';

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
  });
}
