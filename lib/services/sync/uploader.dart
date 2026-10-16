import 'dart:io';

import 'package:background_downloader/background_downloader.dart';

import '../../logger.dart';

enum UploadOutcome {
  done,

  /// The store refused the request (403): the presigned URL has expired
  /// (they last an hour), so ask for new ones.
  expired,
  failed,
}

/// Uploads one file to a presigned URL.
abstract interface class FileUploader {
  Future<UploadOutcome> put({
    required File file,
    required String url,
    required Map<String, String> headers,
    required bool wifiOnly,
  });
}

/// Uploads through `background_downloader`, which on iOS uses a background
/// `URLSession` uploading from the file: the transfer carries on after the
/// user leaves the app, as Google Drive's do. [wifiOnly] turns off cellular
/// for the transfer itself, so the setting holds even while the app is
/// suspended.
class BackgroundFileUploader implements FileUploader {
  const BackgroundFileUploader();

  @override
  Future<UploadOutcome> put({
    required File file,
    required String url,
    required Map<String, String> headers,
    required bool wifiOnly,
  }) async {
    String? contentType;
    final otherHeaders = <String, String>{};
    headers.forEach((name, value) {
      switch (name.toLowerCase()) {
        // The plugin sets Content-Type from mimeType, and iOS sets
        // Content-Length from the file; both equal the signed values.
        case 'content-type':
          contentType = value;
        case 'content-length':
          break;
        default:
          otherHeaders[name] = value;
      }
    });
    // An empty value stops the plugin adding a Content-Disposition header.
    otherHeaders['Content-Disposition'] = '';

    final task = UploadTask.fromFile(
      file: file,
      url: url,
      headers: otherHeaders,
      httpRequestMethod: 'PUT',
      post: 'binary',
      mimeType: contentType ?? 'application/octet-stream',
      requiresWiFi: wifiOnly,
      retries: 2,
      group: 'sync',
    );
    final result = await FileDownloader().upload(task);
    if (result.status == TaskStatus.complete) return UploadOutcome.done;
    log.w('Upload of ${file.path} ended ${result.status.name}, '
        'HTTP ${result.responseStatusCode}: ${result.responseBody ?? result.exception}');
    return result.responseStatusCode == 403 ? UploadOutcome.expired : UploadOutcome.failed;
  }
}
