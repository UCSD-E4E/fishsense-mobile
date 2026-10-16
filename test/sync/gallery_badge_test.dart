import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:image/image.dart' as img;
import 'package:provider/provider.dart';
import 'package:shared_preferences/shared_preferences.dart';

import 'package:fishsense_android/database.dart';
import 'package:fishsense_android/main.dart';
import 'package:fishsense_android/screens/photo_gallery_screen.dart';
import 'package:fishsense_android/services/auth_service.dart';
import 'package:fishsense_android/services/preferences_service.dart';
import 'package:fishsense_android/services/sync/network_status.dart';
import 'package:fishsense_android/services/sync/sync_api.dart';
import 'package:fishsense_android/services/sync/sync_engine.dart';
import 'package:fishsense_android/services/sync/sync_settings.dart';

import 'sync_fixtures.dart';

void main() {
  testWidgets('signed in, the gallery shows sync badges and scrolls without errors',
      (tester) async {
    SharedPreferences.setMockInitialValues({});
    signedInKeychain();
    late Sandbox box;
    await tester.runAsync(() async {
      box = await Sandbox.create();
      final jpeg = img.encodeJpg(img.Image(width: 8, height: 8));
      for (var i = 0; i < 12; i++) {
        final ts = 1760000000000 + i;
        await box.addCapture(uuid: 'a000000${i.toRadixString(16)}-0000-4000-8000-000000000000', timestamp: ts);
        File('${box.documents}/rgb_$ts.jpg').writeAsBytesSync(jpeg);
      }
      final db = await DatabaseModel.database;
      await db.update('photos', {'synced_at': 1}, where: 'id <= 4');
      await db.update('photos', {'sync_error': 'Refused (422)'}, where: 'id = 5');
    });

    final auth = AuthService(storage: const FlutterSecureStorage());
    await tester.runAsync(auth.load);
    final settings = SyncSettings();
    final engine = SyncEngine(
      auth: auth,
      settings: settings,
      api: SyncApi(accessToken: ({bool forceRefresh = false}) async => 'token'),
      uploader: FakeUploader(),
      documentsDir: () async => box.documents,
      stagingRoot: () async => box.staging,
      network: Stream.value(const NetworkStatus(connected: false)),
      watchLifecycle: false,
    );

    await tester.pumpWidget(MultiProvider(
      providers: [
        ChangeNotifierProvider(create: (_) => AppStateProvider()),
        ChangeNotifierProvider(create: (_) => PreferencesService()),
        ChangeNotifierProvider<AuthService>.value(value: auth),
        ChangeNotifierProvider<SyncSettings>.value(value: settings),
        ChangeNotifierProvider<SyncEngine>.value(value: engine),
      ],
      child: const MaterialApp(home: PhotoGalleryScreen()),
    ));
    // The gallery reads the database and files on real isolates.
    for (var i = 0; i < 200 && find.byIcon(Icons.cloud_upload_outlined).evaluate().isEmpty; i++) {
      await tester.runAsync(() => Future<void>.delayed(const Duration(milliseconds: 20)));
      await tester.pump();
    }

    // Newest first: the waiting ones are on screen...
    expect(find.byIcon(Icons.cloud_upload_outlined), findsWidgets);
    expect(tester.takeException(), isNull);

    // ...and scrolling builds the rest lazily, during layout, where the
    // badges must not watch a provider.
    final seen = <IconData>{};
    for (var i = 0; i < 15; i++) {
      await tester.drag(find.byType(GridView), const Offset(0, -250));
      await tester.pump();
      expect(tester.takeException(), isNull);
      for (final icon in [Icons.cloud_done, Icons.cloud_off]) {
        if (find.byIcon(icon).evaluate().isNotEmpty) seen.add(icon);
      }
    }
    expect(seen, {Icons.cloud_done, Icons.cloud_off});

    await tester.runAsync(box.dispose);
  });
}
