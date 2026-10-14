import 'package:flutter_test/flutter_test.dart';

import 'package:fishsense_android/models.dart';
import 'package:fishsense_android/services/provenance_service.dart';

void main() {
  const provenance = Provenance(
    installId: 'install',
    appVersion: '1.1.0+12',
    coreVersion: 'fishsense_core-v4.1.0',
    modelVersion: 'fishial/1@f721445f37db',
  );

  MeasurementVersion make(MeasurementOrigin origin) => provenance.measurement(
        photoId: 7,
        lengthM: 0.42,
        snout: const Coordinate(x: 412.25, y: 803.5),
        fork: const Coordinate(x: 1398.75, y: 811.0),
        origin: origin,
        measuredAt: DateTime.utc(2026, 10, 11, 17, 30),
      );

  test('stamps the version with the pipeline that produced it', () {
    final v = make(MeasurementOrigin.auto);
    expect(v.photoId, 7);
    expect(v.algorithm, MeasurementVersion.algorithmCompute);
    expect(v.algorithmVersion, '1.1.0+12');
    expect(v.coreVersion, 'fishsense_core-v4.1.0');
    expect(v.modelVersion, 'fishial/1@f721445f37db');
    expect(v.measuredAt, DateTime.utc(2026, 10, 11, 17, 30).millisecondsSinceEpoch);
  });

  test('a manual version is a recompute', () {
    expect(make(MeasurementOrigin.manual).algorithm,
        MeasurementVersion.algorithmRecompute);
  });

  test('every version gets its own UUID', () {
    expect(make(MeasurementOrigin.auto).clientMeasurementUuid,
        isNot(make(MeasurementOrigin.auto).clientMeasurementUuid));
  });

  test('a version survives a round trip through its row', () {
    final v = make(MeasurementOrigin.manual);
    final back = MeasurementVersion.fromMap(v.toMap());
    expect(back.toMap(), v.toMap());
  });
}
