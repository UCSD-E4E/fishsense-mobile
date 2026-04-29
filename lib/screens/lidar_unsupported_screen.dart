import 'package:flutter/material.dart';

/// Blocking screen shown at startup when the device doesn't expose LiDAR
/// scene-depth via ARKit. The whole measurement pipeline is built on the
/// LiDAR depth map, so there is nothing useful for the user to do without it.
class LidarUnsupportedScreen extends StatelessWidget {
  final VoidCallback onRetry;

  const LidarUnsupportedScreen({super.key, required this.onRetry});

  @override
  Widget build(BuildContext context) {
    const accent = Color(0xFF00AAA5);
    return Scaffold(
      backgroundColor: Colors.black,
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.symmetric(horizontal: 32),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              const Icon(Icons.sensors_off, color: accent, size: 96),
              const SizedBox(height: 32),
              const Text(
                'LiDAR not available',
                textAlign: TextAlign.center,
                style: TextStyle(
                  color: Colors.white,
                  fontSize: 26,
                  fontWeight: FontWeight.bold,
                ),
              ),
              const SizedBox(height: 16),
              Text(
                'FishSense needs ARKit scene-depth from a LiDAR-equipped '
                'iPhone or iPad to measure fish length. This device doesn\'t '
                'expose a LiDAR depth feed, so capture is disabled.',
                textAlign: TextAlign.center,
                style: TextStyle(
                  color: Colors.grey[300],
                  fontSize: 16,
                  height: 1.4,
                ),
              ),
              const SizedBox(height: 32),
              ElevatedButton.icon(
                onPressed: onRetry,
                icon: const Icon(Icons.refresh),
                label: const Text('Retry'),
                style: ElevatedButton.styleFrom(
                  backgroundColor: accent,
                  foregroundColor: Colors.black,
                  padding: const EdgeInsets.symmetric(
                    horizontal: 24,
                    vertical: 14,
                  ),
                  textStyle: const TextStyle(fontSize: 16),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
