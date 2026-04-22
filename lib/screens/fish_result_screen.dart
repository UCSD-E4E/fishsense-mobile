import 'dart:typed_data';

import 'package:flutter/material.dart';

import '../models.dart';
import '../widgets/fish_photo_overlay.dart';

/// Full-screen result view shown after a successful fish measurement.
///
/// Renders the captured photo with the segmentation mask overlaid and the
/// detected snout / fork points marked, alongside the computed length.
class FishResultScreen extends StatelessWidget {
  final Uint8List photoBytes;
  final ComputeLengthResult result;

  /// Device orientation at the moment the photo was captured. Used to
  /// display the image in the orientation the user framed it in, since
  /// ARKit always writes sensor-native landscape pixels regardless of how
  /// the phone was held.
  final Orientation captureOrientation;

  const FishResultScreen({
    super.key,
    required this.photoBytes,
    required this.result,
    required this.captureOrientation,
  });

  @override
  Widget build(BuildContext context) {
    final lengthCm = (result.length * 100).toStringAsFixed(1);

    return Scaffold(
      backgroundColor: Colors.black,
      body: Stack(
        fit: StackFit.expand,
        children: [
          Positioned.fill(
            child: FishPhotoOverlay(
              photoBytes: photoBytes,
              mask: result.mask,
              maskWidth: result.maskWidth,
              maskHeight: result.maskHeight,
              snout: result.left,
              fork: result.right,
              captureOrientation: captureOrientation,
            ),
          ),
          SafeArea(
            child: Align(
              alignment: Alignment.topLeft,
              child: Padding(
                padding: const EdgeInsets.all(8),
                child: Material(
                  color: Colors.black.withValues(alpha: 0.4),
                  shape: const CircleBorder(),
                  child: IconButton(
                    icon: const Icon(Icons.arrow_back, color: Colors.white),
                    onPressed: () => Navigator.of(context).pop(),
                  ),
                ),
              ),
            ),
          ),
          SafeArea(
            child: Align(
              alignment: Alignment.bottomCenter,
              child: _buildMetrics(lengthCm),
            ),
          ),
        ],
      ),
    );
  }

  Widget _buildMetrics(String lengthCm) {
    return Container(
      margin: const EdgeInsets.all(16),
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 16),
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.55),
        borderRadius: BorderRadius.circular(16),
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const Text(
            'Length',
            style: TextStyle(
              color: Colors.white70,
              fontSize: 12,
              letterSpacing: 1.2,
            ),
          ),
          const SizedBox(height: 2),
          Text(
            '$lengthCm cm',
            style: const TextStyle(
              color: Color(0xFF00AAA5),
              fontSize: 32,
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 10),
          Row(
            children: [
              _legendDot(const Color(0xFF4CAF50), 'Snout'),
              const SizedBox(width: 16),
              _legendDot(const Color(0xFFFF5252), 'Fork'),
              const SizedBox(width: 16),
              _legendDot(const Color(0xFF00C8FF).withValues(alpha: 0.55), 'Mask'),
            ],
          ),
        ],
      ),
    );
  }

  Widget _legendDot(Color color, String label) {
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Container(
          width: 12,
          height: 12,
          decoration: BoxDecoration(color: color, shape: BoxShape.circle),
        ),
        const SizedBox(width: 6),
        Text(label, style: const TextStyle(color: Colors.white70)),
      ],
    );
  }
}
