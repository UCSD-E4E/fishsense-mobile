import 'package:flutter/services.dart';
import '../models.dart';
import '../logger.dart';

/// Handles Rust FFI calls for ML computations via platform channel.
class RustService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');

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
