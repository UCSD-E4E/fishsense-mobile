import 'dart:async';
import 'dart:io';
import 'dart:math' as math;

import 'package:flutter/widgets.dart';
import 'package:http/http.dart' as http;
import 'package:path/path.dart' as p;

import '../../database.dart';
import '../../logger.dart';
import '../../models.dart';
import '../auth_service.dart';
import 'capture_payload.dart';
import 'network_status.dart';
import 'sync_api.dart';
import 'sync_policy.dart';
import 'sync_settings.dart';
import 'uploader.dart';

/// How a pass over one capture or version ended.
enum _Step {
  /// Synced, or recorded as refused for good: move on.
  next,

  /// Something temporary (network, server, expired links): stop this pass
  /// and retry later.
  stop,
}

/// Syncs captures to fishsense-services, like Google Photos backup: on its
/// own whenever allowed, and on demand with [syncNow].
///
/// A run is started by new work (a capture or measurement saved), the app
/// coming to the foreground, the connection changing, the user's sync
/// settings or sign-in changing, and [syncNow]. One run at a time; a start
/// during a run makes it go round once more. Captures go oldest first, each
/// followed later by its measurement versions. Every server call is
/// idempotent on the app's UUIDs, so an interrupted run resumes safely.
class SyncEngine extends ChangeNotifier {
  SyncEngine({
    required AuthService auth,
    required SyncSettings settings,
    required SyncApi api,
    required FileUploader uploader,
    required Future<String> Function() documentsDir,
    required Future<Directory> Function() stagingRoot,
    Stream<NetworkStatus>? network,
    Stream<void>? changes,
    Future<String?> Function()? installId,
    DateTime Function()? clock,
    bool watchLifecycle = true,
  })  : _auth = auth,
        _settings = settings,
        _api = api,
        _uploader = uploader,
        _documentsDir = documentsDir,
        _stagingRoot = stagingRoot,
        _networkStream = network,
        _changesStream = changes,
        _installId = installId ?? (() async => null),
        _now = clock ?? DateTime.now,
        _watchLifecycle = watchLifecycle;

  final AuthService _auth;
  final SyncSettings _settings;
  final SyncApi _api;
  final FileUploader _uploader;
  final Future<String> Function() _documentsDir;
  final Future<Directory> Function() _stagingRoot;
  final Stream<NetworkStatus>? _networkStream;
  final Stream<void>? _changesStream;
  final Future<String?> Function() _installId;
  final DateTime Function() _now;
  final bool _watchLifecycle;

  final _subscriptions = <StreamSubscription<Object?>>[];
  AppLifecycleListener? _lifecycle;
  Timer? _retryTimer;

  NetworkStatus _network = NetworkStatus.unknown;
  bool _running = false;
  bool _again = false;
  bool _againForced = false;
  Future<void>? _run;

  SyncBlock? _block;
  int _done = 0;
  int _total = 0;
  int _failures = 0;
  DateTime? _retryAt;
  String? _lastError;
  DateTime? _lastSyncedAt;
  ({int captures, int measurements, int failed}) _backlog =
      (captures: 0, measurements: 0, failed: 0);

  /// Why automatic sync isn't running, or null.
  SyncBlock? get block => _block;
  bool get running => _running;

  /// Progress of the current run: [done] of [total] items.
  int get done => _done;
  int get total => _total;

  /// Captures and versions still to sync, and captures refused for good.
  ({int captures, int measurements, int failed}) get backlog => _backlog;

  /// When the next automatic retry is due after a temporary failure.
  DateTime? get retryAt => _retryAt;
  String? get lastError => _lastError;
  DateTime? get lastSyncedAt => _lastSyncedAt;
  NetworkStatus get network => _network;

  /// "Sync now" can run: signed in, a tenant chosen, connected.
  bool get canSyncNow => _blockedBy(forced: true) == null && !_running;

  /// One line for Settings, e.g. "Waiting for Wi-Fi — 3 captures to sync".
  String get statusText {
    final pending = _backlog.captures;
    final items = pending == 1 ? '1 capture' : '$pending captures';
    if (_running && _total > 0) {
      return 'Syncing ${math.min(_done + 1, _total)} of $_total…';
    }
    if (_running) return 'Checking for captures to sync…';
    if (_block != null) {
      return pending > 0 ? '${_block!.message} $items to sync.' : _block!.message;
    }
    if (_retryAt != null) {
      return "Couldn't reach FishSense; will retry. $items to sync.";
    }
    if (pending > 0 || _backlog.measurements > 0) {
      return pending > 0 ? '$items to sync.' : 'Measurement edits to sync.';
    }
    final failed = _backlog.failed;
    if (failed > 0) {
      return 'Synced, except ${failed == 1 ? '1 capture' : '$failed captures'} '
          'the server refused.';
    }
    return 'All captures synced.';
  }

  /// Completes once no run is in progress. For tests.
  @visibleForTesting
  Future<void> settle() async {
    await Future<void>.delayed(Duration.zero);
    while (_running) {
      await _run;
      await Future<void>.delayed(Duration.zero);
    }
  }

  /// Subscribe to every trigger and do a first run.
  void start() {
    _auth.addListener(_onInputsChanged);
    _settings.addListener(_onInputsChanged);
    if (_networkStream case final stream?) {
      _subscriptions.add(stream.listen(_onNetwork, onError: (Object e) {
        log.w('Network status unavailable', error: e);
      }));
    } else {
      _network = const NetworkStatus(connected: true, wifi: true);
    }
    if (_changesStream case final stream?) {
      _subscriptions.add(stream.listen((_) => _kick()));
    }
    if (_watchLifecycle) {
      _lifecycle = AppLifecycleListener(onResume: _kick);
    }
    _kick();
  }

  /// Run now, regardless of the cellular setting, Low Power or Low Data
  /// Mode and any retry wait; also retries what the server refused before.
  /// Still needs a session, a tenant and a connection.
  Future<void> syncNow() => _start(forced: true);

  void _kick() => unawaited(_start(forced: false));

  void _onInputsChanged() {
    _refreshBlock();
    _kick();
  }

  void _onNetwork(NetworkStatus status) {
    final before = _network;
    _network = status;
    if (status == before) return;
    // A new path is the moment to try again, not a timer.
    if (status.connected) {
      _retryAt = null;
      _retryTimer?.cancel();
    }
    _onInputsChanged();
  }

  SyncBlock? _blockedBy({required bool forced}) => syncBlockedBy(
        signedIn: _auth.isSignedIn,
        signInExpired: _auth.needsSignInAgain,
        hasTenant: _auth.tenant != null,
        enabled: _settings.enabled,
        useCellular: _settings.useCellular,
        network: _network,
        forced: forced,
      );

  void _refreshBlock() {
    final block = _blockedBy(forced: false);
    if (block != _block) {
      _block = block;
      notifyListeners();
    }
  }

  Future<void> _start({required bool forced}) {
    if (_running) {
      _again = true;
      _againForced |= forced;
      return _run!;
    }
    _running = true;
    notifyListeners();
    return _run = () async {
      try {
        var force = forced;
        do {
          _again = false;
          await _pass(forced: force);
          force = _againForced;
          _againForced = false;
        } while (_again);
      } catch (e, s) {
        log.e('Sync run failed', error: e, stackTrace: s);
        _lastError = e.toString();
      } finally {
        _running = false;
        _done = _total = 0;
        await _refreshBacklog();
        _refreshBlock();
        notifyListeners();
      }
    }();
  }

  Future<void> _refreshBacklog() async {
    try {
      _backlog = await DatabaseModel.syncBacklog();
    } catch (e) {
      log.w('Could not count unsynced captures', error: e);
    }
  }

  Future<void> _pass({required bool forced}) async {
    await _refreshBacklog();
    _block = _blockedBy(forced: false);
    final block = _blockedBy(forced: forced);
    if (block != null) {
      notifyListeners();
      return;
    }
    if (forced) {
      _retryAt = null;
      _retryTimer?.cancel();
    } else if (_retryAt case final at? when _now().isBefore(at)) {
      return;
    }

    final captureIds = await DatabaseModel.captureIdsToSync(includeFailed: forced);
    final versionsBefore = (await DatabaseModel.measurementsToSync(includeFailed: forced)).length;
    _total = captureIds.length + versionsBefore;
    _done = 0;
    notifyListeners();

    for (final id in captureIds) {
      if (_blockedBy(forced: forced) != null) return;
      if (await _syncCapture(id, forced: forced) == _Step.stop) return;
      _done++;
      notifyListeners();
    }

    // Includes versions of captures committed just now that their commit
    // didn't carry (the server already had the capture).
    final versions = await DatabaseModel.measurementsToSync(includeFailed: forced);
    _total = _done + versions.length;
    for (final item in versions) {
      if (_blockedBy(forced: forced) != null) return;
      if (await _syncMeasurement(item) == _Step.stop) return;
      _done++;
      notifyListeners();
    }

    _failures = 0;
    _retryAt = null;
    _lastError = null;
    _lastSyncedAt = _now();
  }

  Future<_Step> _syncCapture(int id, {required bool forced}) async {
    final sub = _auth.sub!;
    final tenant = _auth.tenant!.slug;
    var photo = await DatabaseModel.getPhotoWithBlobs(id);
    if (photo == null) return _Step.next;

    // Another account's capture stays on the phone for that account.
    if (photo.capturedBySub != null && photo.capturedBySub != sub) {
      return _Step.next;
    }
    // Taken signed out, before v8, or before a tenant was chosen: the
    // account syncing it claims it (SYNC.md §1), and keeps it.
    if (photo.capturedBySub == null || photo.tenantSlug == null || photo.installId == null) {
      await DatabaseModel.claimCapture(
        id,
        sub: sub,
        tenantSlug: tenant,
        installId: await _installId(),
      );
      photo = (await DatabaseModel.getPhotoWithBlobs(id))!;
    }
    final captureUuid = photo.clientCaptureUuid;
    final captureTenant = photo.tenantSlug!;
    if (captureUuid == null) {
      await DatabaseModel.setCaptureSyncError(id, 'No capture UUID.');
      return _Step.next;
    }

    final staging = Directory(p.join((await _stagingRoot()).path, captureUuid));
    try {
      final CapturePayload payload;
      try {
        payload = await buildCapturePayload(
          photo: photo,
          versions: await DatabaseModel.getMeasurements(id),
          documentsDir: await _documentsDir(),
          stagingDir: staging,
          fallbackInstallId: await _installId(),
        );
      } on PayloadException catch (e) {
        log.w('Capture $captureUuid cannot be synced: $e');
        await DatabaseModel.setCaptureSyncError(id, e.message);
        return _Step.next;
      }

      // Presigned links last an hour; if they expire on the way (e.g. a
      // long wait for Wi-Fi), ask again once.
      for (var attempt = 0; ; attempt++) {
        final grant = await _api.requestUploads(captureTenant, captureUuid, payload.declared);
        if (grant.alreadyCommitted) {
          // Committed before; its later versions go up separately.
          await DatabaseModel.markCaptureSynced(id, measurementIds: const [], at: _now());
          return _Step.next;
        }
        var expired = false;
        for (final upload in grant.uploads) {
          final outcome = await _uploader.put(
            file: payload.fileFor(upload.role),
            url: upload.url,
            headers: upload.headers,
            wifiOnly: !forced && !_settings.useCellular,
          );
          if (outcome == UploadOutcome.expired) {
            expired = true;
            break;
          }
          if (outcome == UploadOutcome.failed) {
            return _retryLater('Upload of $captureUuid failed.');
          }
        }
        if (!expired) break;
        if (attempt >= 1) return _retryLater('Upload links for $captureUuid expired.');
      }

      await _api.commit(captureTenant, captureUuid, payload.manifest);
      await DatabaseModel.markCaptureSynced(id, measurementIds: payload.measurementIds, at: _now());
      log.i('Synced capture $captureUuid');
      return _Step.next;
    } on SyncApiException catch (e) {
      return _onApiError(e, onRefused: (why) => DatabaseModel.setCaptureSyncError(id, why));
    } on SignInRequiredException {
      _refreshBlock();
      return _Step.stop;
    } on SocketException catch (e) {
      return _retryLater('Offline: ${e.message}');
    } on http.ClientException catch (e) {
      return _retryLater('Network error: ${e.message}');
    } on TimeoutException {
      return _retryLater('Timed out.');
    } finally {
      if (staging.existsSync()) {
        try {
          staging.deleteSync(recursive: true);
        } catch (_) {}
      }
    }
  }

  Future<_Step> _syncMeasurement(
    ({MeasurementVersion version, String captureUuid, String tenantSlug}) item,
  ) async {
    final id = item.version.id!;
    try {
      await _api.addMeasurement(item.tenantSlug, item.captureUuid, measurementJson(item.version));
      await DatabaseModel.markMeasurementSynced(id, at: _now());
      return _Step.next;
    } on SyncApiException catch (e) {
      return _onApiError(e, onRefused: (why) => DatabaseModel.setMeasurementSyncError(id, why));
    } on SignInRequiredException {
      _refreshBlock();
      return _Step.stop;
    } on SocketException catch (e) {
      return _retryLater('Offline: ${e.message}');
    } on http.ClientException catch (e) {
      return _retryLater('Network error: ${e.message}');
    } on TimeoutException {
      return _retryLater('Timed out.');
    }
  }

  /// SYNC.md §4's table: what each answer means and what to do.
  Future<_Step> _onApiError(
    SyncApiException e, {
    required Future<void> Function(String why) onRefused,
  }) async {
    final detail = e.detail.toLowerCase();
    switch (e.status) {
      case 401:
        _lastError = 'Signed out by the server.';
        return _Step.stop;
      case 403:
        // The capture's capturer isn't this account: not ours to sync.
        await onRefused('Belongs to another account.');
        return _Step.next;
      case 404:
        return _retryLater('Not a member of this organization: ${e.detail}', long: true);
      case 409 when detail.contains('no storage'):
        return _retryLater('Your organization is not set up for sync yet.', long: true);
      case 409 when detail.contains('has not been uploaded') ||
            detail.contains('not the file declared'):
        return _retryLater('Upload incomplete; will redo it.');
      case 409:
      case 422:
        // A conflict or a payload the server won't take: a bug to report,
        // not something retrying fixes.
        log.e('Sync refused (${e.status}): ${e.detail}');
        await onRefused('Refused (${e.status}): ${e.detail}');
        return _Step.next;
      default:
        return _retryLater('Server error ${e.status}.');
    }
  }

  /// Stop this run and try again after a growing delay (30 s doubling to
  /// 30 min), or sooner when the connection changes.
  _Step _retryLater(String why, {bool long = false}) {
    _failures++;
    final delay = long
        ? const Duration(hours: 1)
        : Duration(seconds: math.min(30 * (1 << math.min(_failures - 1, 6)), 30 * 60));
    _lastError = why;
    _retryAt = _now().add(delay);
    _retryTimer?.cancel();
    _retryTimer = Timer(delay, () {
      _retryAt = null;
      _kick();
    });
    log.w('Sync paused: $why Retrying in ${delay.inSeconds}s.');
    return _Step.stop;
  }

  @override
  void dispose() {
    _auth.removeListener(_onInputsChanged);
    _settings.removeListener(_onInputsChanged);
    for (final s in _subscriptions) {
      s.cancel();
    }
    _lifecycle?.dispose();
    _retryTimer?.cancel();
    super.dispose();
  }
}
