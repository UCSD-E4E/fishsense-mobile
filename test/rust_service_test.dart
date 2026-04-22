import 'dart:math' as math;

import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/services/rust_service.dart';

void main() {
  group('RustService.invertIntrinsics', () {
    // Typical iPhone-class intrinsics; cx/cy centered in a 1920x1440 frame.
    const fx = 1500.0;
    const fy = 1500.0;
    const cx = 960.0;
    const cy = 720.0;

    List<double> k() => const [
          fx, 0.0, cx,
          0.0, fy, cy,
          0.0, 0.0, 1.0,
        ];

    test('returns K^-1 in row-major layout', () {
      final inv = RustService.invertIntrinsics(k());

      expect(inv, hasLength(9));
      expect(inv[0], closeTo(1.0 / fx, 1e-9));
      expect(inv[1], 0.0);
      expect(inv[2], closeTo(-cx / fx, 1e-9));
      expect(inv[3], 0.0);
      expect(inv[4], closeTo(1.0 / fy, 1e-9));
      expect(inv[5], closeTo(-cy / fy, 1e-9));
      expect(inv[6], 0.0);
      expect(inv[7], 0.0);
      expect(inv[8], 1.0);
    });

    test('K · K^-1 is identity', () {
      final inv = RustService.invertIntrinsics(k());
      final product = _multiply3x3(k(), inv);

      for (var row = 0; row < 3; row++) {
        for (var col = 0; col < 3; col++) {
          final expected = row == col ? 1.0 : 0.0;
          expect(
            product[row * 3 + col],
            closeTo(expected, 1e-9),
            reason: 'entry [$row,$col]',
          );
        }
      }
    });

    test('mapping principal point [cx, cy] gives ray [0, 0, 1]', () {
      // K^-1 · [cx, cy, 1] should be the optical axis (x=0, y=0, z=1) —
      // the geometric meaning of cx/cy. This is what WorldPointHandler
      // multiplies by depth to get a world point.
      final inv = RustService.invertIntrinsics(k());
      final ray = _applyMatrix(inv, [cx, cy, 1.0]);

      expect(ray[0], closeTo(0.0, 1e-9));
      expect(ray[1], closeTo(0.0, 1e-9));
      expect(ray[2], closeTo(1.0, 1e-9));
    });

    test('recovers an 8 cm fish length from projected pixels', () {
      // Place an 8 cm fish head-to-tail 30 cm in front of the camera,
      // project it, then unproject through the inverted intrinsics the
      // way WorldPointHandler would (K^-1 · [x, y, 1] · z).
      const depth = 0.3;
      const fishLengthMeters = 0.08;

      final headPixel = [cx, cy]; // directly on the optical axis
      final tailPixelX = cx + (fishLengthMeters * fx / depth);
      final tailPixel = [tailPixelX, cy];

      final inv = RustService.invertIntrinsics(k());
      final headWorld =
          _scale(_applyMatrix(inv, [headPixel[0], headPixel[1], 1.0]), depth);
      final tailWorld =
          _scale(_applyMatrix(inv, [tailPixel[0], tailPixel[1], 1.0]), depth);

      final dx = tailWorld[0] - headWorld[0];
      final dy = tailWorld[1] - headWorld[1];
      final dz = tailWorld[2] - headWorld[2];
      final length = _norm(dx, dy, dz);

      expect(length, closeTo(fishLengthMeters, 1e-6));
    });

    test('handles off-center principal point', () {
      final offCenter = [2000.0, 0.0, 123.0, 0.0, 1800.0, 456.0, 0.0, 0.0, 1.0];
      final inv = RustService.invertIntrinsics(offCenter);
      final product = _multiply3x3(offCenter, inv);

      for (var row = 0; row < 3; row++) {
        for (var col = 0; col < 3; col++) {
          final expected = row == col ? 1.0 : 0.0;
          expect(product[row * 3 + col], closeTo(expected, 1e-9));
        }
      }
    });

    test('returns input unchanged when fx is zero', () {
      final degenerate = [0.0, 0.0, 960.0, 0.0, 1500.0, 720.0, 0.0, 0.0, 1.0];
      expect(RustService.invertIntrinsics(degenerate), same(degenerate));
    });

    test('returns input unchanged when fy is zero', () {
      final degenerate = [1500.0, 0.0, 960.0, 0.0, 0.0, 720.0, 0.0, 0.0, 1.0];
      expect(RustService.invertIntrinsics(degenerate), same(degenerate));
    });

    test('is not the transposed inverse (regression for ~1000x overshoot)', () {
      // The prior bug sent K^-1 transposed, which put -cx/fx and -cy/fy
      // in row 2 instead of column 2. Guard against that specific layout.
      final inv = RustService.invertIntrinsics(k());
      expect(inv[6], 0.0, reason: 'row 2 col 0 must be 0, not -cx/fx');
      expect(inv[7], 0.0, reason: 'row 2 col 1 must be 0, not -cy/fy');
    });
  });
}

List<double> _multiply3x3(List<double> a, List<double> b) {
  final out = List<double>.filled(9, 0.0);
  for (var row = 0; row < 3; row++) {
    for (var col = 0; col < 3; col++) {
      var sum = 0.0;
      for (var k = 0; k < 3; k++) {
        sum += a[row * 3 + k] * b[k * 3 + col];
      }
      out[row * 3 + col] = sum;
    }
  }
  return out;
}

List<double> _applyMatrix(List<double> m, List<double> v) {
  return [
    m[0] * v[0] + m[1] * v[1] + m[2] * v[2],
    m[3] * v[0] + m[4] * v[1] + m[5] * v[2],
    m[6] * v[0] + m[7] * v[1] + m[8] * v[2],
  ];
}

List<double> _scale(List<double> v, double s) =>
    [v[0] * s, v[1] * s, v[2] * s];

double _norm(double x, double y, double z) =>
    math.sqrt(x * x + y * y + z * z);
