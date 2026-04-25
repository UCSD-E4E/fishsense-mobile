import 'dart:typed_data';

import 'package:flutter/material.dart';
import 'package:flutter_map/flutter_map.dart';
import 'package:latlong2/latlong.dart';

import '../database.dart';
import '../extensions.dart';
import '../logger.dart';
import '../models.dart';
import '../services/file_storage_service.dart';
import '../services/map_bounds.dart';

/// FishMapScreen - shows every captured fish with a GPS fix on an
/// OpenStreetMap base layer. Tapping a marker reveals a card with the
/// thumbnail, length, and capture metadata.
class FishMapScreen extends StatefulWidget {
  const FishMapScreen({super.key});

  @override
  State<FishMapScreen> createState() => FishMapScreenState();
}

class FishMapScreenState extends State<FishMapScreen> {
  static const Color _accent = Color(0xFF00AAA5);

  // Sensible default if the user hasn't captured any geo-tagged photos:
  // San Diego (the e4e / FishSense home base). Shown at world-region zoom.
  static const LatLng _fallbackCenter = LatLng(32.8801, -117.234);
  static const double _fallbackZoom = 9.0;

  final MapController _mapController = MapController();
  bool _isLoading = true;
  List<PhotoModel> _mapped = const [];

  @override
  void initState() {
    super.initState();
    _loadMappedPhotos();
  }

  /// Public entry point so the tab navigator can refresh when the user
  /// returns to this tab — same pattern as PhotoGalleryScreen.
  void refreshMappedPhotos() {
    log.d('FishMapScreen: refresh triggered');
    _loadMappedPhotos();
  }

  Future<void> _loadMappedPhotos() async {
    setState(() => _isLoading = true);
    try {
      final all = await DatabaseModel.getAllPhotosForGallery();
      final mapped = MapBounds.mappedPhotos(all);
      if (!mounted) return;
      setState(() {
        _mapped = mapped;
        _isLoading = false;
      });
      log.i('FishMapScreen loaded ${_mapped.length} mapped photos '
          '(of ${all.length} total)');

      // Defer fitCamera until after the first frame so the map widget has
      // its actual size (otherwise the bounds math collapses).
      WidgetsBinding.instance.addPostFrameCallback((_) => _fitToMarkers());
    } catch (e) {
      log.e('FishMapScreen: error loading photos', error: e);
      if (!mounted) return;
      setState(() => _isLoading = false);
    }
  }

  void _fitToMarkers() {
    final bounds = MapBounds.boundsOf(_mapped);
    if (bounds == null) return;

    // A single marker collapses the bounds to a point — pad the corners
    // by ~0.005° (~500m) so fitCamera doesn't try to zoom to street level.
    const singlePointPad = 0.005;
    final isSinglePoint =
        bounds.minLat == bounds.maxLat && bounds.minLon == bounds.maxLon;
    final sw = LatLng(
      bounds.minLat - (isSinglePoint ? singlePointPad : 0),
      bounds.minLon - (isSinglePoint ? singlePointPad : 0),
    );
    final ne = LatLng(
      bounds.maxLat + (isSinglePoint ? singlePointPad : 0),
      bounds.maxLon + (isSinglePoint ? singlePointPad : 0),
    );

    _mapController.fitCamera(
      CameraFit.bounds(
        bounds: LatLngBounds(sw, ne),
        padding: const EdgeInsets.all(48),
      ),
    );
  }

  void _showPhotoSheet(PhotoModel photo) {
    showModalBottomSheet(
      context: context,
      backgroundColor: Colors.grey[900],
      shape: const RoundedRectangleBorder(
        borderRadius: BorderRadius.vertical(top: Radius.circular(16)),
      ),
      builder: (_) => _MapPhotoSheet(photo: photo),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      appBar: AppBar(
        backgroundColor: Colors.black,
        title: Text(
          _mapped.isEmpty
              ? 'Map'
              : 'Map (${_mapped.length} ${_mapped.length == 1 ? "catch" : "catches"})',
          style: const TextStyle(color: Colors.white),
        ),
        actions: [
          IconButton(
            tooltip: 'Refresh',
            onPressed: _loadMappedPhotos,
            icon: const Icon(Icons.refresh, color: Colors.white),
          ),
          IconButton(
            tooltip: 'Fit to markers',
            onPressed: _mapped.isEmpty ? null : _fitToMarkers,
            icon: const Icon(Icons.center_focus_strong, color: Colors.white),
          ),
        ],
      ),
      body: _isLoading ? _buildLoading() : _buildMap(),
    );
  }

  Widget _buildLoading() {
    return const Center(
      child: CircularProgressIndicator(color: _accent),
    );
  }

  Widget _buildMap() {
    return Stack(
      children: [
        FlutterMap(
          mapController: _mapController,
          options: const MapOptions(
            initialCenter: _fallbackCenter,
            initialZoom: _fallbackZoom,
            minZoom: 2,
            maxZoom: 18,
          ),
          children: [
            TileLayer(
              urlTemplate: 'https://tile.openstreetmap.org/{z}/{x}/{y}.png',
              userAgentPackageName: 'com.fishsense.mobile',
              maxZoom: 19,
            ),
            MarkerLayer(markers: _mapped.map(_buildMarker).toList()),
          ],
        ),
        if (_mapped.isEmpty) _buildEmptyOverlay(),
        // OSM attribution — required by tile usage policy.
        const Positioned(
          bottom: 4,
          right: 6,
          child: _OsmAttribution(),
        ),
      ],
    );
  }

  Marker _buildMarker(PhotoModel photo) {
    return Marker(
      point: LatLng(photo.latitude!, photo.longitude!),
      width: 40,
      height: 40,
      child: GestureDetector(
        onTap: () => _showPhotoSheet(photo),
        child: const Icon(
          Icons.location_on,
          color: _accent,
          size: 36,
          shadows: [
            Shadow(blurRadius: 6, color: Colors.black54, offset: Offset(0, 2)),
          ],
        ),
      ),
    );
  }

  Widget _buildEmptyOverlay() {
    return Center(
      child: Container(
        padding: const EdgeInsets.all(20),
        margin: const EdgeInsets.symmetric(horizontal: 32),
        decoration: BoxDecoration(
          color: Colors.black.withValues(alpha: 0.7),
          borderRadius: BorderRadius.circular(12),
        ),
        child: const Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            Icon(Icons.map_outlined, color: Colors.white70, size: 48),
            SizedBox(height: 12),
            Text(
              'No mapped catches yet',
              style: TextStyle(
                color: Colors.white,
                fontSize: 18,
                fontWeight: FontWeight.bold,
              ),
            ),
            SizedBox(height: 8),
            Text(
              'Captures with a GPS fix will appear here.',
              textAlign: TextAlign.center,
              style: TextStyle(color: Colors.white70, fontSize: 13),
            ),
          ],
        ),
      ),
    );
  }
}

class _OsmAttribution extends StatelessWidget {
  const _OsmAttribution();

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.symmetric(horizontal: 6, vertical: 2),
      decoration: BoxDecoration(
        color: Colors.white.withValues(alpha: 0.85),
        borderRadius: BorderRadius.circular(4),
      ),
      child: const Text(
        '© OpenStreetMap contributors',
        style: TextStyle(color: Colors.black87, fontSize: 10),
      ),
    );
  }
}

/// Bottom sheet shown when a map marker is tapped — thumbnail + the same
/// metadata the gallery surfaces, kept compact since the map is still
/// visible behind it.
class _MapPhotoSheet extends StatelessWidget {
  final PhotoModel photo;

  const _MapPhotoSheet({required this.photo});

  String get _locationLine {
    final name = photo.placeName?.trim();
    if (name != null && name.isNotEmpty) return name;
    final lat = photo.latitude!.toStringAsFixed(5);
    final lon = photo.longitude!.toStringAsFixed(5);
    return '$lat, $lon';
  }

  String? get _coordsSecondary {
    final hasName = (photo.placeName?.trim().isNotEmpty ?? false);
    if (!hasName) return null; // already showing coords primary
    final lat = photo.latitude!.toStringAsFixed(5);
    final lon = photo.longitude!.toStringAsFixed(5);
    final acc = photo.horizontalAccuracy;
    return acc == null ? '$lat, $lon' : '$lat, $lon  (±${acc.toStringAsFixed(0)}m)';
  }

  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Padding(
        padding: const EdgeInsets.all(16),
        child: Row(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Thumbnail loaded lazily from disk.
            FutureBuilder<Uint8List?>(
              future: FileStorageService.loadImage(photo.rgbPath),
              builder: (context, snap) {
                if (snap.connectionState != ConnectionState.done) {
                  return const SizedBox(
                    width: 96,
                    height: 96,
                    child: Center(
                      child: CircularProgressIndicator(
                        strokeWidth: 2,
                        color: Color(0xFF00AAA5),
                      ),
                    ),
                  );
                }
                final bytes = snap.data;
                if (bytes == null) {
                  return Container(
                    width: 96,
                    height: 96,
                    color: Colors.grey[800],
                    child: const Icon(Icons.broken_image,
                        color: Colors.white54),
                  );
                }
                return ClipRRect(
                  borderRadius: BorderRadius.circular(8),
                  child: Image.memory(
                    bytes,
                    width: 96,
                    height: 96,
                    fit: BoxFit.cover,
                  ),
                );
              },
            ),
            const SizedBox(width: 16),
            Expanded(
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                mainAxisSize: MainAxisSize.min,
                children: [
                  Text(
                    DateTime.fromMillisecondsSinceEpoch(photo.utcUnixTimestamp)
                        .toDisplayString(),
                    style: const TextStyle(
                      color: Colors.white,
                      fontWeight: FontWeight.bold,
                      fontSize: 14,
                    ),
                  ),
                  const SizedBox(height: 6),
                  Text(
                    photo.fishLength != null
                        ? 'Length: ${(photo.fishLength! * 100).toStringAsFixed(1)} cm'
                        : 'Length: Unavailable',
                    style: const TextStyle(color: Colors.white70, fontSize: 13),
                  ),
                  const SizedBox(height: 4),
                  Text(
                    _locationLine,
                    style: const TextStyle(color: Colors.white70, fontSize: 13),
                  ),
                  if (_coordsSecondary != null) ...[
                    const SizedBox(height: 2),
                    Text(
                      _coordsSecondary!,
                      style: TextStyle(color: Colors.grey[500], fontSize: 11),
                    ),
                  ],
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
