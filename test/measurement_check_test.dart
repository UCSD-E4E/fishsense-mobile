import 'dart:typed_data';

import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/services/measurement_check.dart';

// A 1920×1440 frame scaled down by 10, so the tests stay fast.
const _w = 192, _h = 144;

/// A mask that is 1 inside the rectangle [x0, x1) × [y0, y1).
Uint8List _rect(int x0, int y0, int x1, int y1) {
  final mask = Uint8List(_w * _h);
  for (var y = y0; y < y1; y++) {
    mask.fillRange(y * _w + x0, y * _w + x1, 255);
  }
  return mask;
}

MeasurementCheck _check(Uint8List? mask, {double length = 0.3}) =>
    checkMeasurement(mask: mask, width: _w, height: _h, length: length);

void main() {
  test('a fish filling a quarter of the frame is measured (was rejected at 20%)',
      () {
    // Row 17 on the test phone covered 25.6%, inside x 80–1756, y 400–1032.
    // Filling that whole box solid (38%) is stricter still.
    final check = _check(_rect(8, 40, 176, 103));
    expect(check.coverage, closeTo(0.38, 0.01));
    expect(check.usable, isTrue);

    // Row 15's box, x 228–1784, y 592–1152, filled solid.
    expect(_check(_rect(23, 59, 179, 116)).usable, isTrue);
  });

  test('a mask reaching the frame edge is rejected: the fish is cut off', () {
    for (final mask in [
      _rect(0, 40, 120, 100), // left
      _rect(80, 40, _w, 100), // right
      _rect(40, 0, 150, 60), // top
      _rect(40, 90, 150, _h), // bottom
    ]) {
      expect(_check(mask).rejection, MeasurementRejection.touchesEdge);
    }
  });

  test('a mask covering most of the frame is rejected as runaway', () {
    final check = _check(_rect(4, 4, 188, 140));
    expect(check.coverage, greaterThan(0.6));
    expect(check.rejection, MeasurementRejection.tooLarge);
  });

  test('a nearly empty mask is rejected', () {
    expect(_check(_rect(90, 70, 94, 74)).rejection, MeasurementRejection.tooSmall);
    expect(_check(Uint8List(_w * _h)).rejection, MeasurementRejection.tooSmall);
    expect(_check(null).rejection, MeasurementRejection.tooSmall);
    expect(_check(Uint8List(10)).rejection, MeasurementRejection.tooSmall,
        reason: 'shorter than the frame');
  });

  test('a good mask with no usable length is rejected', () {
    final mask = _rect(40, 40, 150, 100);
    expect(_check(mask, length: 0).rejection, MeasurementRejection.invalidLength);
    expect(_check(mask, length: double.nan).rejection,
        MeasurementRejection.invalidLength);
    expect(_check(mask, length: double.infinity).rejection,
        MeasurementRejection.invalidLength);
  });

  test('every rejection explains itself; a usable one says nothing', () {
    for (final r in MeasurementRejection.values) {
      expect(MeasurementCheck(r, 0).message, isNotEmpty, reason: r.name);
    }
    expect(const MeasurementCheck(null, 0.2).message, isEmpty);
  });
}
