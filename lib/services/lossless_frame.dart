import 'dart:isolate';
import 'dart:typed_data';
import 'package:image/image.dart' as img;

/// Lossless copy of the frame `compute_length` segmented.
///
/// The JPEG the app shows is lossy, so segmenting it again won't reproduce
/// the phone's mask. This PNG holds exactly the pixels the pipeline read:
/// the Rust bridge takes the first `width × height × 4` bytes of the RGBA
/// buffer, drops alpha and segments the rest, so the PNG keeps those same
/// three channels, byte for byte.
class LosslessFrame {
  /// Encode the RGB channels of a tightly packed RGBA buffer as a PNG.
  /// Runs on a background isolate: a 1920×1440 frame takes a while.
  static Future<Uint8List> encodePng(
    Uint8List rgba,
    int width,
    int height,
  ) {
    return Isolate.run(() => encodePngSync(rgba, width, height));
  }

  static Uint8List encodePngSync(Uint8List rgba, int width, int height) {
    final pixels = width * height;
    if (width <= 0 || height <= 0 || rgba.length < pixels * 4) {
      throw ArgumentError(
        'RGBA buffer of ${rgba.length} bytes is too small for ${width}x$height',
      );
    }
    final rgb = Uint8List(pixels * 3);
    for (var i = 0, o = 0; i < pixels * 4; i += 4, o += 3) {
      rgb[o] = rgba[i];
      rgb[o + 1] = rgba[i + 1];
      rgb[o + 2] = rgba[i + 2];
    }
    final image = img.Image.fromBytes(
      width: width,
      height: height,
      bytes: rgb.buffer,
      numChannels: 3,
    );
    return img.encodePng(image);
  }
}
