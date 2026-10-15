import 'dart:typed_data';

/// Why a fish the pipeline found was not kept as a measurement.
enum MeasurementRejection {
  /// The mask reaches the edge of the frame: the fish is cut off, or the
  /// segmentation ran into the background. Either way the snout or fork
  /// isn't where the mask says.
  touchesEdge,

  /// The mask covers most of the frame: a runaway segmentation that
  /// swallowed the background, or a fish far too close to measure.
  tooLarge,

  /// Almost no mask: a collapsed segmentation, or a fish too far away.
  tooSmall,

  /// The length math produced no usable number.
  invalidLength,
}

/// Outcome of [checkMeasurement].
class MeasurementCheck {
  /// Null when the measurement is usable.
  final MeasurementRejection? rejection;

  /// Fraction of the frame the mask covers, 0–1.
  final double coverage;

  const MeasurementCheck(this.rejection, this.coverage);

  bool get usable => rejection == null;

  /// What to tell the user when the fish was found but not measured.
  String get message => switch (rejection) {
        MeasurementRejection.touchesEdge =>
          'The fish runs off the edge of the photo. Step back so the whole '
              'fish is in frame, then try again.',
        MeasurementRejection.tooLarge =>
          'The fish fills too much of the photo to measure. Step back and '
              'try again.',
        MeasurementRejection.tooSmall =>
          'The fish is too small in the photo to measure. Move closer and '
              'try again.',
        MeasurementRejection.invalidLength =>
          'Couldn\'t work out a length from the depth data. Try again from '
              'a slightly different angle.',
        null => '',
      };
}

/// Sanity checks on a fish the Rust pipeline found, before its length is
/// kept. The length math downstream is faithful: when it produces a 14 mm
/// or 324 mm "fish" it's because the snout/fork it was given are
/// degenerate, from a collapsed or runaway segmentation.
///
/// A runaway mask shows itself by reaching the frame's edges or covering
/// most of it, so those are what's checked. An earlier version capped
/// coverage at 20%, which rejected well-segmented fish photographed up
/// close (22–26% in testing).
///
/// [mask] is row-major, one byte per pixel, nonzero = fish.
MeasurementCheck checkMeasurement({
  required Uint8List? mask,
  required int width,
  required int height,
  required double length,
}) {
  const minCoverage = 0.01;
  const maxCoverage = 0.60;
  // Pixels from the border that count as touching it, allowing for the
  // mask being upscaled from the model's resolution.
  const edgeMargin = 2;

  final total = width * height;
  if (mask == null || total <= 0 || mask.length < total) {
    return const MeasurementCheck(MeasurementRejection.tooSmall, 0);
  }

  var nonzero = 0;
  var touchesEdge = false;
  for (var y = 0; y < height; y++) {
    final rowStart = y * width;
    final edgeRow = y < edgeMargin || y >= height - edgeMargin;
    for (var x = 0; x < width; x++) {
      if (mask[rowStart + x] == 0) continue;
      nonzero++;
      if (edgeRow || x < edgeMargin || x >= width - edgeMargin) {
        touchesEdge = true;
      }
    }
  }
  final coverage = nonzero / total;

  final MeasurementRejection? rejection;
  if (coverage < minCoverage) {
    rejection = MeasurementRejection.tooSmall;
  } else if (coverage > maxCoverage) {
    rejection = MeasurementRejection.tooLarge;
  } else if (touchesEdge) {
    rejection = MeasurementRejection.touchesEdge;
  } else if (!length.isFinite || length <= 0) {
    rejection = MeasurementRejection.invalidLength;
  } else {
    rejection = null;
  }
  return MeasurementCheck(rejection, coverage);
}
