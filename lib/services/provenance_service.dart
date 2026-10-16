import 'package:flutter/services.dart';
import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:package_info_plus/package_info_plus.dart';
import 'package:uuid/uuid.dart';
import '../logger.dart';
import '../models.dart';

/// The code and weights that produce a measurement, recorded with every
/// capture and measurement version so a result can be traced and redone.
/// A field is null when it couldn't be looked up; capture never waits on it.
class Provenance {
  /// Per-install UUID, generated once and kept in the Keychain.
  final String? installId;

  /// App build, e.g. `1.1.0+12`.
  final String? appVersion;

  /// fishsense-core release, e.g. `fishsense_core-v4.1.0`.
  final String? coreVersion;

  /// Segmentation weights, e.g. `fishial/1@f721445f37db`.
  final String? modelVersion;

  const Provenance({
    required this.installId,
    required this.appVersion,
    required this.coreVersion,
    required this.modelVersion,
  });

  /// A new measurement version stamped with this provenance.
  MeasurementVersion measurement({
    required int photoId,
    required double lengthM,
    required Coordinate snout,
    required Coordinate fork,
    required MeasurementOrigin origin,
    DateTime? measuredAt,
  }) {
    return MeasurementVersion(
      photoId: photoId,
      clientMeasurementUuid: const Uuid().v4(),
      measuredAt: (measuredAt ?? DateTime.now()).toUtc().millisecondsSinceEpoch,
      lengthM: lengthM,
      snout: snout,
      fork: fork,
      origin: origin,
      algorithm: origin == MeasurementOrigin.manual
          ? MeasurementVersion.algorithmRecompute
          : MeasurementVersion.algorithmCompute,
      algorithmVersion: appVersion,
      coreVersion: coreVersion,
      modelVersion: modelVersion,
    );
  }
}

/// Looks up and caches [Provenance] for this install.
class ProvenanceService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');
  static const _installIdKey = 'install_id';
  // `this_device` keeps the ID out of backups, so a phone restored from
  // another one's backup mints its own instead of posing as that device.
  static const FlutterSecureStorage _storage = FlutterSecureStorage(
    iOptions: IOSOptions(
      accessibility: KeychainAccessibility.first_unlock_this_device,
    ),
  );

  static Provenance? _cached;

  /// Never throws. A complete result is cached; a partial one isn't, so
  /// the next capture tries the missing lookups again.
  static Future<Provenance> get() async {
    final cached = _cached;
    if (cached != null) return cached;

    final versions = await _pipelineVersions();
    final provenance = Provenance(
      installId: await _installId(),
      appVersion: await _appVersion(),
      coreVersion: versions['coreVersion'],
      modelVersion: versions['modelVersion'],
    );
    if (provenance.installId != null &&
        provenance.appVersion != null &&
        provenance.coreVersion != null &&
        provenance.modelVersion != null) {
      _cached = provenance;
    }
    return provenance;
  }

  static Future<String?> _installId() async {
    try {
      final existing = await _storage.read(key: _installIdKey);
      if (existing != null) return existing;
      final created = const Uuid().v4();
      await _storage.write(key: _installIdKey, value: created);
      log.i('Generated install id $created');
      return created;
    } catch (e) {
      log.e('Install id unavailable', error: e);
      return null;
    }
  }

  static Future<String?> _appVersion() async {
    try {
      final info = await PackageInfo.fromPlatform();
      return '${info.version}+${info.buildNumber}';
    } catch (e) {
      log.e('App version unavailable', error: e);
      return null;
    }
  }

  /// Versions compiled into the Rust bridge. A missing value is recorded
  /// as null rather than blocking capture.
  static Future<Map<String, String>> _pipelineVersions() async {
    try {
      final result = await _channel.invokeMethod<Map<dynamic, dynamic>>(
        'pipeline_versions',
      );
      return {
        for (final entry in (result ?? const {}).entries)
          entry.key as String: entry.value as String,
      };
    } catch (e) {
      log.e('pipeline_versions failed', error: e);
      return const {};
    }
  }
}
