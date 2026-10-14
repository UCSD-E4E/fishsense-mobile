import 'dart:async';
import 'dart:convert';

import 'package:flutter_appauth/flutter_appauth.dart';
import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:http/http.dart' as http;
import 'package:http/testing.dart';

import 'package:fishsense_android/services/auth_service.dart';

String _jwt(Map<String, dynamic> claims) {
  String part(Map<String, dynamic> m) =>
      base64Url.encode(utf8.encode(jsonEncode(m))).replaceAll('=', '');
  return '${part({'alg': 'RS256'})}.${part(claims)}.signature';
}

/// Scripted stand-in for the AppAuth plugin.
class _FakeAppAuth implements FlutterAppAuth {
  AuthorizationTokenResponse? signInResponse;
  Object? signInError;
  TokenResponse? refreshResponse;
  Object? refreshError;

  /// When set, a refresh waits for this before answering, so tests can
  /// overlap calls.
  Future<void>? refreshGate;
  AuthorizationTokenRequest? lastSignIn;
  final refreshedWith = <String?>[];

  @override
  Future<AuthorizationTokenResponse> authorizeAndExchangeCode(
    AuthorizationTokenRequest request,
  ) async {
    lastSignIn = request;
    if (signInError != null) throw signInError!;
    return signInResponse!;
  }

  @override
  Future<TokenResponse> token(TokenRequest request) async {
    refreshedWith.add(request.refreshToken);
    if (refreshGate != null) await refreshGate;
    if (refreshError != null) throw refreshError!;
    return refreshResponse!;
  }

  @override
  dynamic noSuchMethod(Invocation invocation) => super.noSuchMethod(invocation);
}

AuthorizationTokenResponse _signedIn({
  String sub = 'user-1',
  String name = 'Ada Lovelace',
  DateTime? expiry,
}) =>
    AuthorizationTokenResponse(
      'access-1',
      'refresh-1',
      expiry ?? DateTime.utc(2026, 10, 14, 13),
      _jwt({'sub': sub, 'name': name}),
      'Bearer',
      null,
      null,
      null,
    );

const _lab = {'slug': 'lab', 'name': 'E4E Lab', 'role': 'member', 'is_admin': false};
const _angler = {
  'slug': 'conservation-angler',
  'name': 'Conservation Angler',
  'role': 'member',
  'is_admin': false,
};

void main() {
  final now = DateTime.utc(2026, 10, 14, 12);
  late _FakeAppAuth appAuth;
  late List<http.Request> requests;
  late List<Map<String, dynamic>> memberships;
  late int membershipsStatus;

  AuthService service() => AuthService(
        appAuth: appAuth,
        storage: const FlutterSecureStorage(),
        clock: () => now,
        httpClient: MockClient((request) async {
          requests.add(request);
          return http.Response(jsonEncode(memberships), membershipsStatus);
        }),
      );

  setUp(() {
    FlutterSecureStorage.setMockInitialValues({});
    appAuth = _FakeAppAuth();
    requests = [];
    memberships = [_lab];
    membershipsStatus = 200;
  });

  test('decodeJwtClaims reads an unpadded payload', () {
    expect(decodeJwtClaims(_jwt({'sub': 'abc'}))['sub'], 'abc');
    expect(() => decodeJwtClaims('nope'), throwsFormatException);
  });

  test('starts signed out', () async {
    final auth = service();
    await auth.load();
    expect(auth.isSignedIn, isFalse);
    expect(auth.sub, isNull);
    expect(auth.tenant, isNull);
  });

  group('signIn', () {
    test('uses the mobile client with PKCE in an ephemeral session', () async {
      appAuth.signInResponse = _signedIn();
      await service().signIn();

      final request = appAuth.lastSignIn!;
      expect(request.clientId, AuthConfig.clientId);
      expect(request.issuer, AuthConfig.issuer);
      expect(request.redirectUrl, AuthConfig.redirectUrl);
      expect(request.scopes, containsAll(['openid', 'org', 'offline_access']));
      expect(request.externalUserAgent,
          ExternalUserAgent.ephemeralAsWebAuthenticationSession);
    });

    test('records the user and picks their only tenant', () async {
      appAuth.signInResponse = _signedIn();
      final auth = service();

      expect(await auth.signIn(), isTrue);
      expect(auth.sub, 'user-1');
      expect(auth.displayName, 'Ada Lovelace');
      expect(auth.tenant?.slug, 'lab');
      expect(requests.single.url.toString(),
          '${AuthConfig.apiBaseUrl}/me/memberships');
      expect(requests.single.headers['Authorization'], 'Bearer access-1');
    });

    test('is remembered offline across launches', () async {
      appAuth.signInResponse = _signedIn();
      await service().signIn();

      final relaunched = service();
      await relaunched.load();
      expect(relaunched.sub, 'user-1');
      expect(relaunched.tenant?.name, 'E4E Lab');
      expect(requests, hasLength(1), reason: 'load() makes no request');
    });

    test('leaves the choice to the user when there are several tenants',
        () async {
      memberships = [_lab, _angler];
      appAuth.signInResponse = _signedIn();
      final auth = service();
      await auth.signIn();

      expect(auth.tenants, hasLength(2));
      expect(auth.tenant, isNull);

      await auth.selectTenant('conservation-angler');
      final relaunched = service();
      await relaunched.load();
      expect(relaunched.tenant?.slug, 'conservation-angler');
    });

    test('a cancelled sign-in stays signed out', () async {
      appAuth.signInError = FlutterAppAuthUserCancelledException(
        code: 'cancelled',
        platformErrorDetails: FlutterAppAuthPlatformErrorDetails(),
      );
      final auth = service();

      expect(await auth.signIn(), isFalse);
      expect(auth.isSignedIn, isFalse);
      expect(auth.busy, isFalse);
    });

    test('stays signed in when memberships can\'t be loaded', () async {
      membershipsStatus = 503;
      appAuth.signInResponse = _signedIn();
      final auth = service();

      expect(await auth.signIn(), isTrue);
      expect(auth.sub, 'user-1');
      expect(auth.tenants, isEmpty);
    });

    test('a different user does not inherit the previous tenant choice',
        () async {
      memberships = [_lab, _angler];
      appAuth.signInResponse = _signedIn();
      final auth = service();
      await auth.signIn();
      await auth.selectTenant('lab');

      appAuth.signInResponse = _signedIn(sub: 'user-2', name: 'Grace');
      await auth.signIn();
      expect(auth.sub, 'user-2');
      expect(auth.tenant, isNull);
    });
  });

  test('selectTenant refuses a tenant the user is not in', () async {
    appAuth.signInResponse = _signedIn();
    final auth = service();
    await auth.signIn();
    expect(() => auth.selectTenant('elsewhere'), throwsArgumentError);
  });

  group('accessToken', () {
    test('returns the stored token while it is fresh', () async {
      appAuth.signInResponse = _signedIn();
      final auth = service();
      await auth.signIn();

      expect(await auth.accessToken(), 'access-1');
      expect(appAuth.refreshedWith, isEmpty);
    });

    test('refreshes an expired token and keeps a rotated refresh token',
        () async {
      appAuth.signInResponse =
          _signedIn(expiry: now.subtract(const Duration(minutes: 5)));
      appAuth.refreshResponse = TokenResponse(
        'access-2',
        'refresh-2',
        now.add(const Duration(hours: 1)),
        null,
        'Bearer',
        null,
        null,
      );
      final auth = service();
      await auth.signIn(); // the memberships call needs a fresh token

      expect(appAuth.refreshedWith, ['refresh-1']);
      expect(requests.single.headers['Authorization'], 'Bearer access-2');
      expect(await auth.accessToken(), 'access-2');
      expect(appAuth.refreshedWith, ['refresh-1'], reason: 'still fresh');

      await auth.accessToken(forceRefresh: true);
      expect(appAuth.refreshedWith, ['refresh-1', 'refresh-2']);
    });

    test('concurrent callers share one refresh', () async {
      appAuth.signInResponse =
          _signedIn(expiry: now.subtract(const Duration(minutes: 5)));
      membershipsStatus = 503; // keep sign-in from refreshing first
      appAuth.refreshError = Exception('offline');
      final auth = service();
      await auth.signIn();
      appAuth.refreshedWith.clear();

      // With rotation, a second refresh using the same refresh token would
      // get invalid_grant and wrongly end a good session mid-sync.
      final gate = Completer<void>();
      appAuth
        ..refreshGate = gate.future
        ..refreshError = null
        ..refreshResponse = TokenResponse(
          'access-2',
          'refresh-2',
          now.add(const Duration(hours: 1)),
          null,
          'Bearer',
          null,
          null,
        );
      final tokens = Future.wait([
        auth.accessToken(),
        auth.accessToken(),
        auth.accessToken(forceRefresh: true),
      ]);
      await Future<void>.delayed(Duration.zero);
      gate.complete();

      expect(await tokens, ['access-2', 'access-2', 'access-2']);
      expect(appAuth.refreshedWith, ['refresh-1']);
    });

    test('signing out during a refresh discards its tokens', () async {
      appAuth.signInResponse =
          _signedIn(expiry: now.subtract(const Duration(minutes: 5)));
      membershipsStatus = 503;
      appAuth.refreshError = Exception('offline');
      final auth = service();
      await auth.signIn();

      final gate = Completer<void>();
      appAuth
        ..refreshGate = gate.future
        ..refreshError = null
        ..refreshResponse = TokenResponse(
          'access-2', 'refresh-2', now.add(const Duration(hours: 1)),
          null, 'Bearer', null, null,
        );
      final pending = auth.accessToken();
      await Future<void>.delayed(Duration.zero);
      await auth.signOut();
      gate.complete();

      await expectLater(pending, throwsA(isA<SignInRequiredException>()));
      final relaunched = service();
      await relaunched.load();
      expect(relaunched.isSignedIn, isFalse);
      expect(await const FlutterSecureStorage().readAll(), isEmpty);
    });

    test('a failed refresh is not reused by the next caller', () async {
      appAuth.signInResponse =
          _signedIn(expiry: now.subtract(const Duration(minutes: 5)));
      membershipsStatus = 503;
      appAuth.refreshError = Exception('offline');
      final auth = service();
      await auth.signIn();
      appAuth.refreshedWith.clear();

      await expectLater(auth.accessToken(), throwsException);
      expect(auth.needsSignInAgain, isFalse, reason: 'offline is not expiry');

      appAuth
        ..refreshError = null
        ..refreshResponse = TokenResponse(
          'access-2', null, now.add(const Duration(hours: 1)),
          null, 'Bearer', null, null,
        );
      expect(await auth.accessToken(), 'access-2');
      expect(appAuth.refreshedWith, ['refresh-1', 'refresh-1']);
    });

    test('an expired refresh token asks the user to sign in again', () async {
      appAuth.signInResponse =
          _signedIn(expiry: now.subtract(const Duration(minutes: 5)));
      appAuth.refreshError = FlutterAppAuthPlatformException(
        code: 'token_failed',
        platformErrorDetails: FlutterAppAuthPlatformErrorDetails(
          error: FlutterAppAuthOAuthError.invalidGrant,
        ),
      );
      final auth = service();
      await auth.signIn();

      await expectLater(
          auth.accessToken(), throwsA(isA<SignInRequiredException>()));
      expect(auth.needsSignInAgain, isTrue);
      expect(auth.sub, 'user-1', reason: 'still bound to captures');

      final relaunched = service();
      await relaunched.load();
      expect(relaunched.needsSignInAgain, isTrue,
          reason: 'shown in Settings before a sync finds out');
    });

    test('signing in again clears the expired state for good', () async {
      appAuth.signInResponse =
          _signedIn(expiry: now.subtract(const Duration(minutes: 5)));
      appAuth.refreshError = FlutterAppAuthPlatformException(
        code: 'token_failed',
        platformErrorDetails: FlutterAppAuthPlatformErrorDetails(
          error: FlutterAppAuthOAuthError.invalidGrant,
        ),
      );
      final auth = service();
      await auth.signIn();
      expect(auth.needsSignInAgain, isTrue);

      appAuth.signInResponse = _signedIn();
      await auth.signIn();
      expect(auth.needsSignInAgain, isFalse);

      final relaunched = service();
      await relaunched.load();
      expect(relaunched.needsSignInAgain, isFalse);
    });

    test('signed out there is no token', () async {
      await expectLater(
          service().accessToken(), throwsA(isA<SignInRequiredException>()));
    });
  });

  test('signOut forgets everything', () async {
    appAuth.signInResponse = _signedIn();
    final auth = service();
    await auth.signIn();

    await auth.signOut();
    expect(auth.isSignedIn, isFalse);
    expect(auth.tenant, isNull);

    final relaunched = service();
    await relaunched.load();
    expect(relaunched.isSignedIn, isFalse);
    await expectLater(
        relaunched.accessToken(), throwsA(isA<SignInRequiredException>()));
  });
}
