import 'dart:convert';

import 'package:http/http.dart' as http;

import '../auth_service.dart';

/// A file of a capture, declared to the server before it is uploaded.
class DeclaredFile {
  /// `rgb_jpeg`, `rgb_lossless`, `depth_f32`, `confidence_u8` or `mask_u8`.
  final String role;

  /// Lowercase hex SHA-256 of the exact bytes to upload.
  final String sha256;
  final int size;

  const DeclaredFile({required this.role, required this.sha256, required this.size});

  Map<String, dynamic> toJson() => {'role': role, 'sha256': sha256, 'size': size};
}

/// A presigned PUT for one file. [headers] are signed, and include the
/// checksum, so the store refuses any other bytes.
class UploadInstruction {
  final String role;
  final String url;
  final String method;
  final Map<String, String> headers;

  const UploadInstruction({
    required this.role,
    required this.url,
    required this.method,
    required this.headers,
  });

  factory UploadInstruction.fromJson(Map<String, dynamic> json) => UploadInstruction(
        role: json['role'] as String,
        url: json['url'] as String,
        method: (json['method'] as String?) ?? 'PUT',
        headers: (json['headers'] as Map<String, dynamic>)
            .map((k, v) => MapEntry(k, v.toString())),
      );
}

class UploadGrant {
  /// The capture was committed before; nothing to upload.
  final bool alreadyCommitted;
  final List<UploadInstruction> uploads;

  const UploadGrant({required this.alreadyCommitted, required this.uploads});

  factory UploadGrant.fromJson(Map<String, dynamic> json) => UploadGrant(
        alreadyCommitted: json['already_committed'] as bool,
        uploads: [
          for (final u in json['uploads'] as List<dynamic>)
            UploadInstruction.fromJson(u as Map<String, dynamic>),
        ],
      );
}

/// A non-2xx answer from fishsense-services.
class SyncApiException implements Exception {
  final int status;

  /// FastAPI's `detail`, flattened to text.
  final String detail;

  const SyncApiException(this.status, this.detail);

  @override
  String toString() => 'HTTP $status: $detail';
}

/// The mobile sync endpoints of fishsense-services (its `openapi.json`;
/// SYNC.md §4–5). Every call is idempotent on the app's UUIDs, so retrying
/// is always safe.
class SyncApi {
  SyncApi({
    required Future<String> Function({bool forceRefresh}) accessToken,
    http.Client? client,
    String baseUrl = AuthConfig.apiBaseUrl,
  })  : _accessToken = accessToken,
        _http = client ?? http.Client(),
        _baseUrl = baseUrl;

  final Future<String> Function({bool forceRefresh}) _accessToken;
  final http.Client _http;
  final String _baseUrl;

  String _capturePath(String tenant, String captureUuid) =>
      '/tenants/${Uri.encodeComponent(tenant)}/mobile/captures/'
      '${Uri.encodeComponent(captureUuid)}';

  /// Presigned PUTs for [files], or `already_committed`.
  Future<UploadGrant> requestUploads(
    String tenant,
    String captureUuid,
    List<DeclaredFile> files,
  ) async {
    final body = await _send('POST', '${_capturePath(tenant, captureUuid)}/uploads', {
      'files': [for (final f in files) f.toJson()],
    });
    return UploadGrant.fromJson(body as Map<String, dynamic>);
  }

  /// Commit the uploaded capture. 201 (kept) and 200 (already kept) both
  /// succeed.
  Future<void> commit(String tenant, String captureUuid, Map<String, dynamic> manifest) =>
      _send('PUT', _capturePath(tenant, captureUuid), manifest);

  /// Append a measurement version to a committed capture. 201 (added) and
  /// 200 (already there) both succeed.
  Future<void> addMeasurement(
    String tenant,
    String captureUuid,
    Map<String, dynamic> version,
  ) =>
      _send('POST', '${_capturePath(tenant, captureUuid)}/measurements', version);

  Future<Object?> _send(String method, String path, Object body) async {
    final uri = Uri.parse('$_baseUrl$path');
    Future<http.Response> attempt({required bool forceRefresh}) async {
      final request = http.Request(method, uri)
        ..headers.addAll({
          'Authorization': 'Bearer ${await _accessToken(forceRefresh: forceRefresh)}',
          'Content-Type': 'application/json',
          'Accept': 'application/json',
        })
        ..body = jsonEncode(body);
      return http.Response.fromStream(await _http.send(request));
    }

    var response = await attempt(forceRefresh: false);
    if (response.statusCode == 401) {
      response = await attempt(forceRefresh: true);
    }
    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw SyncApiException(response.statusCode, _detail(response.body));
    }
    return response.body.isEmpty ? null : jsonDecode(response.body);
  }

  static String _detail(String body) {
    try {
      final detail = (jsonDecode(body) as Map<String, dynamic>)['detail'];
      if (detail is String) return detail;
      if (detail != null) return jsonEncode(detail);
    } catch (_) {}
    return body;
  }
}
