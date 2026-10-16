import 'dart:typed_data';

import 'package:flutter_test/flutter_test.dart';
import 'package:image/image.dart' as img;

import 'package:fishsense_android/services/lossless_frame.dart';

void main() {
  group('LosslessFrame', () {
    test('decodes to exactly the RGB channels the pipeline reads', () {
      const width = 7, height = 5;
      final rgba = Uint8List(width * height * 4);
      for (var i = 0; i < rgba.length; i++) {
        rgba[i] = (i * 37 + 11) & 0xff;
      }

      final png = LosslessFrame.encodePngSync(rgba, width, height);
      final decoded = img.decodePng(png)!;

      expect(decoded.width, width);
      expect(decoded.height, height);
      expect(decoded.numChannels, 3);
      for (var y = 0; y < height; y++) {
        for (var x = 0; x < width; x++) {
          final i = (y * width + x) * 4;
          final p = decoded.getPixel(x, y);
          expect([p.r, p.g, p.b], [rgba[i], rgba[i + 1], rgba[i + 2]],
              reason: 'pixel ($x, $y)');
        }
      }
    });

    test('reads only the first width × height pixels, as Rust does', () {
      final rgba = Uint8List(2 * 2 * 4 + 8)..fillRange(16, 24, 0xff);
      final decoded =
          img.decodePng(LosslessFrame.encodePngSync(rgba, 2, 2))!;
      for (final p in decoded) {
        expect([p.r, p.g, p.b], [0, 0, 0]);
      }
    });

    test('refuses a buffer smaller than the frame', () {
      expect(
        () => LosslessFrame.encodePngSync(Uint8List(15), 2, 2),
        throwsArgumentError,
      );
    });

    test('encodes off the main isolate', () async {
      final png = await LosslessFrame.encodePng(Uint8List(16), 2, 2);
      expect(img.decodePng(png)!.width, 2);
    });
  });
}
