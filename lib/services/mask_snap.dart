import 'dart:typed_data';

import '../models.dart';

/// Snap a candidate (x, y) image-pixel coordinate to the nearest non-zero
/// pixel of the segmentation mask, searching outward in expanding square
/// rings. Returns null when no fish pixel is found within [maxRadius] —
/// the caller should treat that as "couldn't snap" and prompt the user to
/// drop the marker closer to the fish.
///
/// `mask` is row-major, one byte per pixel, nonzero = fish — matching the
/// layout produced by `compute_length` and stored in `mask_bytes`. The
/// search uses Manhattan-style square rings rather than true Euclidean
/// nearest because (a) it terminates as soon as the first ring with a hit
/// is found (typically O(r * fish_perimeter) instead of O(W*H)) and (b)
/// the resulting one-pixel inaccuracy is irrelevant to plane-fit depth
/// recovery.
Coordinate? snapToMask({
  required Uint8List mask,
  required int maskWidth,
  required int maskHeight,
  required double x,
  required double y,
  int maxRadius = 256,
}) {
  if (maskWidth <= 0 || maskHeight <= 0) return null;
  if (mask.length < maskWidth * maskHeight) return null;

  final cx = x.round();
  final cy = y.round();

  bool isFish(int px, int py) {
    if (px < 0 || px >= maskWidth || py < 0 || py >= maskHeight) return false;
    return mask[py * maskWidth + px] != 0;
  }

  if (isFish(cx, cy)) {
    return Coordinate(x: cx.toDouble(), y: cy.toDouble());
  }

  for (var r = 1; r <= maxRadius; r++) {
    final x0 = cx - r;
    final x1 = cx + r;
    final y0 = cy - r;
    final y1 = cy + r;

    // Track the closest hit on this ring (square-ring distance is uniform
    // but Euclidean distance varies between corners and edge midpoints —
    // pick the Euclidean-closest hit on the ring for nicer UX).
    int? bestPx, bestPy;
    var bestD2 = double.infinity;

    void consider(int px, int py) {
      if (!isFish(px, py)) return;
      final dx = (px - cx).toDouble();
      final dy = (py - cy).toDouble();
      final d2 = dx * dx + dy * dy;
      if (d2 < bestD2) {
        bestD2 = d2;
        bestPx = px;
        bestPy = py;
      }
    }

    for (var px = x0; px <= x1; px++) {
      consider(px, y0);
      consider(px, y1);
    }
    for (var py = y0 + 1; py < y1; py++) {
      consider(x0, py);
      consider(x1, py);
    }

    if (bestPx != null && bestPy != null) {
      return Coordinate(x: bestPx!.toDouble(), y: bestPy!.toDouble());
    }
  }
  return null;
}
