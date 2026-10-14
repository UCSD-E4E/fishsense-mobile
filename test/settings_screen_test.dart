import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:provider/provider.dart';
import 'package:shared_preferences/shared_preferences.dart';

import 'package:fishsense_android/screens/settings_screen.dart';
import 'package:fishsense_android/services/auth_service.dart';
import 'package:fishsense_android/services/preferences_service.dart';

Future<AuthService> _auth(Map<String, String> keychain) async {
  FlutterSecureStorage.setMockInitialValues(keychain);
  final auth = AuthService(storage: const FlutterSecureStorage());
  await auth.load();
  return auth;
}

Future<void> _pump(WidgetTester tester, AuthService auth) async {
  SharedPreferences.setMockInitialValues({});
  await tester.pumpWidget(
    MultiProvider(
      providers: [
        ChangeNotifierProvider<AuthService>.value(value: auth),
        ChangeNotifierProvider(create: (_) => PreferencesService()),
      ],
      child: const MaterialApp(home: SettingsScreen()),
    ),
  );
}

String _tenants(List<Map<String, Object>> tenants) => jsonEncode(tenants);

void main() {
  const lab = {'slug': 'lab', 'name': 'E4E Lab', 'role': 'member', 'is_admin': false};
  const angler = {
    'slug': 'conservation-angler',
    'name': 'Conservation Angler',
    'role': 'member',
    'is_admin': false,
  };

  testWidgets('signed out, it offers sign-in and says it is optional',
      (tester) async {
    await _pump(tester, await _auth({}));

    expect(find.text('Not signed in'), findsOneWidget);
    expect(find.textContaining('capture without an account'), findsOneWidget);
    expect(find.text('Sign in'), findsOneWidget);
    expect(find.text('Sign out'), findsNothing);
  });

  testWidgets('signed in to one tenant, it shows who and where',
      (tester) async {
    await _pump(
      tester,
      await _auth({
        'auth.sub': 'user-1',
        'auth.display_name': 'Ada Lovelace',
        'auth.tenants': _tenants([lab]),
        'auth.tenant_slug': 'lab',
      }),
    );

    expect(find.text('Ada Lovelace'), findsOneWidget);
    expect(find.text('E4E Lab'), findsOneWidget);
    expect(find.text('Sign out'), findsOneWidget);
    expect(find.text('Sign in'), findsNothing);
  });

  testWidgets('with several tenants, choosing one is remembered',
      (tester) async {
    final auth = await _auth({
      'auth.sub': 'user-1',
      'auth.tenants': _tenants([lab, angler]),
    });
    await _pump(tester, auth);

    expect(find.text('Choose where captures sync'), findsOneWidget);
    await tester.tap(find.byType(DropdownButton<String>));
    await tester.pumpAndSettle();
    await tester.tap(find.text('Conservation Angler').last);
    await tester.pumpAndSettle();

    expect(auth.tenant?.slug, 'conservation-angler');
  });

  testWidgets('signing out asks first, then forgets the user', (tester) async {
    final auth = await _auth({
      'auth.sub': 'user-1',
      'auth.tenants': _tenants([lab]),
      'auth.tenant_slug': 'lab',
    });
    await _pump(tester, auth);

    await tester.tap(find.text('Sign out'));
    await tester.pumpAndSettle();
    expect(find.text('Sign out?'), findsOneWidget);

    await tester.tap(find.widgetWithText(TextButton, 'Sign out').last);
    await tester.pumpAndSettle();
    expect(auth.isSignedIn, isFalse);
    expect(find.text('Not signed in'), findsOneWidget);
  });
}
