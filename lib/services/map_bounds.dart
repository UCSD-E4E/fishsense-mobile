import '../models.dart';

/// Pure helpers backing FishMapScreen — kept out of the widget so they can
/// be unit-tested without spinning up a MapController.
class MapBounds {
  /// Filter to the subset of photos with a usable GPS fix.
  static List<PhotoModel> mappedPhotos(List<PhotoModel> photos) {
    return photos
        .where((p) => p.latitude != null && p.longitude != null)
        .toList(growable: false);
  }

  /// Tightest lat/lon rectangle containing every mapped photo, or null when
  /// none have coords. Single-point inputs collapse to min == max — callers
  /// should pad before fitting the camera so the marker isn't on the edge.
  ///
  /// Field order (minLat, minLon, maxLat, maxLon) matches the conventional
  /// SW-corner / NE-corner pairing used by every map library we might target.
  static ({double minLat, double minLon, double maxLat, double maxLon})?
      boundsOf(List<PhotoModel> photos) {
    final mapped = mappedPhotos(photos);
    if (mapped.isEmpty) return null;

    var minLat = mapped.first.latitude!;
    var maxLat = minLat;
    var minLon = mapped.first.longitude!;
    var maxLon = minLon;

    for (final p in mapped.skip(1)) {
      final lat = p.latitude!;
      final lon = p.longitude!;
      if (lat < minLat) minLat = lat;
      if (lat > maxLat) maxLat = lat;
      if (lon < minLon) minLon = lon;
      if (lon > maxLon) maxLon = lon;
    }

    return (
      minLat: minLat,
      minLon: minLon,
      maxLat: maxLat,
      maxLon: maxLon,
    );
  }
}
