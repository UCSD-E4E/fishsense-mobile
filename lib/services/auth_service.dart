import 'dart:convert';

import 'package:flutter/foundation.dart';
import 'package:flutter_appauth/flutter_appauth.dart';
import 'package:flutter_secure_storage/flutter_secure_storage.dart';
import 'package:http/http.dart' as http;

import '../logger.dart';

/// The FishSense Mobile client at Authentik and the API it calls.
/// See fishsense-services docs/handoff/fishsense-mobile/SYNC.md §1.
class AuthConfig {
  static const issuer = 'https://auth.krg.ucsd.edu/application/o/fishsense-mobile/';
  static const clientId = 'fishsense-mobile';
  static const redirectUrl = 'com.aqua3d.fishsense:/oauthredirect';
  static const scopes = ['openid', 'profile', 'email', 'org', 'offline_access'];
  static const apiBaseUrl = 'https://api.fishsense.e4e.ucsd.edu';
}

/// A tenant the signed-in user belongs to (`GET /me/memberships`).
@immutable
class Tenant {
  final String slug;
  final String name;
  final String role;
  final bool isAdmin;

  const Tenant({
    required this.slug,
    required this.name,
    required this.role,
    required this.isAdmin,
  });

  factory Tenant.fromJson(Map<String, dynamic> json) => Tenant(
        slug: json['slug'] as String,
        name: json['name'] as String,
        role: json['role'] as String,
        isAdmin: json['is_admin'] as bool,
      );

  Map<String, dynamic> toJson() =>
      {'slug': slug, 'name': name, 'role': role, 'is_admin': isAdmin};

  @override
  bool operator ==(Object other) =>
      other is Tenant &&
      other.slug == slug &&
      other.name == name &&
      other.role == role &&
      other.isAdmin == isAdmin;

  @override
  int get hashCode => Object.hash(slug, name, role, isAdmin);
}

/// The refresh token has expired or been revoked: the user has to sign in
/// again before anything that needs the API (i.e. sync) can run.
class SignInRequiredException implements Exception {
  const SignInRequiredException();

  @override
  String toString() => 'SignInRequiredException';
}

/// The claims of a JWT, without verifying it. Only for tokens the app just
/// received from the token endpoint over TLS, where the payload is trusted;
/// the server verifies every token it is sent.
Map<String, dynamic> decodeJwtClaims(String jwt) {
  final parts = jwt.split('.');
  if (parts.length != 3) throw const FormatException('not a JWT');
  final payload = utf8.decode(base64Url.decode(base64Url.normalize(parts[1])));
  return jsonDecode(payload) as Map<String, dynamic>;
}

/// Optional sign-in, needed only to sync (owner decision 2026-10-14).
///
/// Capturing never waits on the network: who is signed in and which tenant
/// they chose are kept in the Keychain and known offline. Only [accessToken]
/// and [refreshMemberships] go to the network.
class AuthService extends ChangeNotifier {
  AuthService({
    FlutterAppAuth? appAuth,
    FlutterSecureStorage? storage,
    http.Client? httpClient,
    DateTime Function()? clock,
  })  : _appAuth = appAuth ?? const FlutterAppAuth(),
        _storage = storage ?? _defaultStorage,
        _http = httpClient ?? http.Client(),
        _now = clock ?? DateTime.now;

  // Available after first unlock so a background sync can read the tokens;
  // `this_device` keeps them out of backups.
  static const _defaultStorage = FlutterSecureStorage(
    iOptions: IOSOptions(
      accessibility: KeychainAccessibility.first_unlock_this_device,
    ),
  );

  static const _keyRefreshToken = 'auth.refresh_token';
  static const _keyAccessToken = 'auth.access_token';
  static const _keyAccessTokenExpiry = 'auth.access_token_expiry';
  static const _keySub = 'auth.sub';
  static const _keyDisplayName = 'auth.display_name';
  static const _keyTenants = 'auth.tenants';
  static const _keyTenantSlug = 'auth.tenant_slug';
  static const _keyNeedsSignInAgain = 'auth.needs_sign_in_again';
  static const _allKeys = [
    _keyRefreshToken,
    _keyAccessToken,
    _keyAccessTokenExpiry,
    _keySub,
    _keyDisplayName,
    _keyTenants,
    _keyTenantSlug,
    _keyNeedsSignInAgain,
  ];

  /// Refresh this long before the access token actually expires, so a
  /// request doesn't go out with a token that lapses in flight.
  static const _expiryMargin = Duration(minutes: 1);

  final FlutterAppAuth _appAuth;
  final FlutterSecureStorage _storage;
  final http.Client _http;
  final DateTime Function() _now;

  String? _sub;
  String? _displayName;
  List<Tenant> _tenants = const [];
  String? _tenantSlug;
  bool _needsSignInAgain = false;
  bool _busy = false;

  /// The refresh in flight, shared by every caller that needs a new token
  /// meanwhile. Authentik may rotate the refresh token and revoke the old
  /// one, so a second refresh with the same token would get invalid_grant
  /// and wrongly end a good session (e.g. during parallel uploads).
  Future<String>? _refreshing;

  bool get isSignedIn => _sub != null;

  /// The signed-in user's stable `sub`, which captures are stamped with.
  String? get sub => _sub;
  String? get displayName => _displayName;
  List<Tenant> get tenants => _tenants;

  /// The tenant captures are synced to, or null until one is chosen.
  Tenant? get tenant {
    for (final t in _tenants) {
      if (t.slug == _tenantSlug) return t;
    }
    return null;
  }

  /// Signed in, but the refresh token no longer works.
  bool get needsSignInAgain => _needsSignInAgain;

  /// A sign-in or membership lookup is in progress.
  bool get busy => _busy;

  /// Restore the session from the Keychain. No network.
  Future<void> load() async {
    try {
      _sub = await _storage.read(key: _keySub);
      _displayName = await _storage.read(key: _keyDisplayName);
      _tenantSlug = await _storage.read(key: _keyTenantSlug);
      // Kept across launches so Settings asks to sign in again before a
      // sync has to find out.
      _needsSignInAgain = await _storage.read(key: _keyNeedsSignInAgain) != null;
      final tenantsJson = await _storage.read(key: _keyTenants);
      _tenants = tenantsJson == null
          ? const []
          : (jsonDecode(tenantsJson) as List<dynamic>)
              .map((t) => Tenant.fromJson(t as Map<String, dynamic>))
              .toList();
    } catch (e) {
      log.e('Could not restore the sign-in', error: e);
    }
    notifyListeners();
  }

  /// Run the Authentik sign-in. Returns false if the user cancelled.
  ///
  /// The browser session is ephemeral, so signing out and back in always
  /// asks for credentials: a shared phone can switch users.
  Future<bool> signIn() async {
    _setBusy(true);
    try {
      final AuthorizationTokenResponse response;
      try {
        response = await _appAuth.authorizeAndExchangeCode(
          AuthorizationTokenRequest(
            AuthConfig.clientId,
            AuthConfig.redirectUrl,
            issuer: AuthConfig.issuer,
            scopes: AuthConfig.scopes,
            externalUserAgent: ExternalUserAgent.ephemeralAsWebAuthenticationSession,
          ),
        );
      } on FlutterAppAuthUserCancelledException {
        return false;
      }

      final idToken = response.idToken;
      if (idToken == null) throw const FormatException('no ID token');
      final claims = decodeJwtClaims(idToken);
      final sub = claims['sub'];
      if (sub is! String || sub.isEmpty) {
        throw const FormatException('ID token has no sub');
      }

      if (sub != _sub) {
        // Another user's tenant choice doesn't carry over.
        _tenants = const [];
        _tenantSlug = null;
        await _storage.delete(key: _keyTenants);
        await _storage.delete(key: _keyTenantSlug);
      }
      _sub = sub;
      _displayName = (claims['name'] ?? claims['preferred_username'] ?? claims['email'])
          as String?;
      _needsSignInAgain = false;
      await _storage.delete(key: _keyNeedsSignInAgain);
      await _storage.write(key: _keySub, value: sub);
      await _writeOrDelete(_keyDisplayName, _displayName);
      await _storeTokens(response);
      log.i('Signed in as $sub');
      notifyListeners();

      await _loadMemberships();
      return true;
    } finally {
      _setBusy(false);
    }
  }

  /// Forget the session on this phone. Captures already stamped with this
  /// user stay theirs.
  Future<void> signOut() async {
    for (final key in _allKeys) {
      await _storage.delete(key: key);
    }
    _sub = null;
    _displayName = null;
    _tenants = const [];
    _tenantSlug = null;
    _needsSignInAgain = false;
    log.i('Signed out');
    notifyListeners();
  }

  /// Choose which of the user's tenants captures are synced to.
  Future<void> selectTenant(String slug) async {
    if (!_tenants.any((t) => t.slug == slug)) {
      throw ArgumentError.value(slug, 'slug', 'not one of the user\'s tenants');
    }
    _tenantSlug = slug;
    await _storage.write(key: _keyTenantSlug, value: slug);
    notifyListeners();
  }

  /// Fetch the user's tenants again (e.g. after joining one).
  Future<void> refreshMemberships() async {
    _setBusy(true);
    try {
      await _loadMemberships();
    } finally {
      _setBusy(false);
    }
  }

  /// A current access token, refreshed if it has expired.
  ///
  /// Throws [SignInRequiredException] when signed out or when the refresh
  /// token no longer works; other failures (e.g. offline) are rethrown.
  Future<String> accessToken({bool forceRefresh = false}) async {
    if (!isSignedIn) throw const SignInRequiredException();

    if (!forceRefresh) {
      final token = await _storage.read(key: _keyAccessToken);
      final expiry = int.tryParse(await _storage.read(key: _keyAccessTokenExpiry) ?? '');
      if (token != null &&
          expiry != null &&
          _now().add(_expiryMargin).millisecondsSinceEpoch < expiry) {
        return token;
      }
    }

    return _refreshing ??= _refresh().whenComplete(() => _refreshing = null);
  }

  Future<String> _refresh() async {
    final sub = _sub;
    final refreshToken = await _storage.read(key: _keyRefreshToken);
    if (refreshToken == null) {
      await _markNeedsSignInAgain();
      throw const SignInRequiredException();
    }
    final TokenResponse response;
    try {
      response = await _appAuth.token(
        TokenRequest(
          AuthConfig.clientId,
          AuthConfig.redirectUrl,
          issuer: AuthConfig.issuer,
          scopes: AuthConfig.scopes,
          refreshToken: refreshToken,
          grantType: GrantType.refreshToken,
        ),
      );
    } on FlutterAppAuthPlatformException catch (e) {
      if (e.platformErrorDetails.error == FlutterAppAuthOAuthError.invalidGrant) {
        await _markNeedsSignInAgain();
        throw const SignInRequiredException();
      }
      rethrow;
    }
    // Signed out (or in as someone else) while the refresh was in flight:
    // its tokens belong to a session that's gone, so don't store them.
    if (_sub != sub) throw const SignInRequiredException();
    await _storeTokens(response);
    final token = response.accessToken;
    if (token == null) throw const FormatException('no access token');
    return token;
  }

  Future<void> _loadMemberships() async {
    try {
      final tenants = await _fetchMemberships();
      _tenants = tenants;
      await _storage.write(
        key: _keyTenants,
        value: jsonEncode(tenants.map((t) => t.toJson()).toList()),
      );
      if (!tenants.any((t) => t.slug == _tenantSlug)) {
        // One tenant: use it. Several: the user picks. None: wait.
        _tenantSlug = tenants.length == 1 ? tenants.single.slug : null;
        await _writeOrDelete(_keyTenantSlug, _tenantSlug);
      }
    } on SignInRequiredException {
      // Already flagged; the UI asks the user to sign in again.
    } catch (e) {
      // Signed in regardless; the tenant list can be fetched later.
      log.w('Could not load memberships', error: e);
    }
    notifyListeners();
  }

  Future<List<Tenant>> _fetchMemberships() async {
    final uri = Uri.parse('${AuthConfig.apiBaseUrl}/me/memberships');
    Future<http.Response> get({required bool forceRefresh}) async => _http.get(
          uri,
          headers: {
            'Authorization': 'Bearer ${await accessToken(forceRefresh: forceRefresh)}',
            'Accept': 'application/json',
          },
        );

    var response = await get(forceRefresh: false);
    if (response.statusCode == 401) {
      response = await get(forceRefresh: true);
    }
    if (response.statusCode != 200) {
      throw http.ClientException(
        'GET /me/memberships: ${response.statusCode} ${response.body}',
        uri,
      );
    }
    return (jsonDecode(response.body) as List<dynamic>)
        .map((t) => Tenant.fromJson(t as Map<String, dynamic>))
        .toList();
  }

  Future<void> _storeTokens(TokenResponse response) async {
    await _writeOrDelete(_keyAccessToken, response.accessToken);
    await _writeOrDelete(
      _keyAccessTokenExpiry,
      response.accessTokenExpirationDateTime?.millisecondsSinceEpoch.toString(),
    );
    // Authentik may rotate the refresh token; keep the old one otherwise.
    if (response.refreshToken != null) {
      await _storage.write(key: _keyRefreshToken, value: response.refreshToken);
    }
  }

  Future<void> _writeOrDelete(String key, String? value) => value == null
      ? _storage.delete(key: key)
      : _storage.write(key: key, value: value);

  Future<void> _markNeedsSignInAgain() async {
    if (_needsSignInAgain) return;
    _needsSignInAgain = true;
    notifyListeners();
    await _storage.write(key: _keyNeedsSignInAgain, value: 'true');
  }

  void _setBusy(bool busy) {
    _busy = busy;
    notifyListeners();
  }
}
