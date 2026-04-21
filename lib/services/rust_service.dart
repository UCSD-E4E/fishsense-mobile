import 'package:flutter/services.dart';
import '../models.dart';
import '../logger.dart';

/// Handles Rust FFI calls for ML computations via platform channel.
class RustService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');

  /// Invert a 3x3 camera intrinsics matrix laid out in row-major order
  /// `[fx, 0, cx, 0, fy, cy, 0, 0, 1]` and return `K^-1` in the same layout.
  /// The Rust `WorldPointHandler` multiplies `K^-1 · [x, y, 1] · depth`, so
  /// the matrix must be the plain inverse — sending the transpose inflates
  /// the computed z-component by roughly `-(cx·x/fx + cy·y/fy)` and produces
  /// lengths 100-1000× too large. Returns the input unchanged if fx or fy
  /// is zero.
  static List<double> invertIntrinsics(List<double> intrinsics) {
    final fx = intrinsics[0];
    final fy = intrinsics[4];
    final cx = intrinsics[2];
    final cy = intrinsics[5];

    if (fx == 0 || fy == 0) {
      log.w('Camera intrinsics have zero focal length — using identity');
      return intrinsics;
    }

    return [
      1.0 / fx, 0.0,      -cx / fx,
      0.0,      1.0 / fy, -cy / fy,
      0.0,      0.0,       1.0,
    ];
  }

  /// Compute fish length using the Rust ML pipeline.
  static Future<ComputeLengthResult> computeLength({
    required Uint8List imageData,
    required int imageWidth,
    required int imageHeight,
    required Uint8List depthData,
    required int depthWidth,
    required int depthHeight,
    required List<double> cameraIntrinsicsInverted,
  }) async {
    try {
      final Map<String, dynamic> arguments = {
        'imageData': imageData,
        'imageWidth': imageWidth,
        'imageHeight': imageHeight,
        'depthData': depthData,
        'depthWidth': depthWidth,
        'depthHeight': depthHeight,
        'cameraIntrinsicsInverted': cameraIntrinsicsInverted,
      };

      final Map<dynamic, dynamic> result = await _channel.invokeMethod(
        'compute_length',
        arguments,
      );

      return ComputeLengthResult.fromMap(result);
    } catch (e) {
      log.e('Rust compute_length failed', error: e);
      return ComputeLengthResult.error(
        errorString: 'Rust computation failed: $e',
      );
    }
  }

  /// Detect fish species using Rust ML pipeline.
  static Future<String> detectSpecies(Uint8List imageData) async {
    try {
      final String result = await _channel.invokeMethod('detect_species', {
        'imageData': imageData,
      });
      return result;
    } catch (e) {
      log.e('Rust detect_species failed', error: e);
      return 'Unknown';
    }
  }
}
