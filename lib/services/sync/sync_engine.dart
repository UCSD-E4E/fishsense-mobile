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

/// How syncing one capture or version ended.
enum _Kind {
  /// On the server now.
  synced,

  /// Refused for good (recorded on the row): move on.
  refused,

  /// A problem with this item only (e.g. its tenant, a 5xx on it): retry it
  /// later, carry on with the rest.
  retryItem,

  /// A problem with the connection (offline, TLS, a captive portal): stop
  /// the run and retry later.
  retryAll,

  /// The rules changed under a running upload; start over under the new
  /// ones.
  cancelled,

  /// The session is no good: wait for the user to sign in again.
  signIn,
}

class _Result {
  final _Kind kind;
  final String? why;

  /// For [_Kind.retryItem]: wait an hour, not seconds (e.g. no storage).
  final bool long;

  const _Result(this.kind, [this.why, this.long = false]);

  static const synced = _Result(_Kind.synced);
}

/// Syncs captures to fishsense-services, like Google Photos backup: on its
/// own whenever allowed, and on demand with [syncNow].
///
/// A run is started by new work (a capture or measurement saved), the app
/// coming to the foreground, the connection changing, the user's sync
/// settings or sign-in changing, and [syncNow]. One run at a time; a start
/// during a run makes it go round once more, and if the rules changed, an
/// upload in progress is stopped so the next round follows the new ones.
///
/// Captures go oldest first, then measurement versions. A failure tied to
/// one item puts just that item on hold (with a growing delay) and the run
/// carries on; a failing connection, or three items failing in a row, ends
/// the run. Every server call is idempotent on the app's UUIDs, so an
/// interrupted run resumes safely.
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

  /// Items failing in a row before the run gives up: likely the server.
  static const _maxConsecutiveFailures = 3;

  final _subscriptions = <StreamSubscription<Object?>>[];
  AppLifecycleListener? _lifecycle;
  Timer? _retryTimer;

  NetworkStatus _network = NetworkStatus.unknown;
  bool _running = false;
  bool _runForced = false;
  bool _again = false;
  bool _againForced = false;
  Future<void>? _run;
  Completer<void>? _cancelUploads;

  SyncBlock? _block;
  int _done = 0;
  int _total = 0;

  /// Connection-level failures in a row, and when to try again.
  int _failures = 0;
  DateTime? _allRetryAt;

  /// Items on hold after failing, keyed `c:<photo id>` / `m:<measurement id>`.
  final _onHold = <String, ({int failures, DateTime until})>{};

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

  /// What this account still has to sync, and captures refused for good.
  ({int captures, int measurements, int failed}) get backlog => _backlog;

  /// When the next automatic retry is due after a failure, if one is.
  DateTime? get retryAt {
    final times = [if (_allRetryAt case final at?) at, for (final h in _onHold.values) h.until];
    return times.isEmpty ? null : times.reduce((a, b) => a.isBefore(b) ? a : b);
  }

  String? get lastError => _lastError;
  DateTime? get lastSyncedAt => _lastSyncedAt;
  NetworkStatus get network => _network;

  /// "Sync now" can run: signed in, a tenant chosen, connected, and not
  /// already in a forced run. Pressed during an automatic run, it takes
  /// over (stopping an upload held back by the cellular setting).
  bool get canSyncNow => _blockedBy(forced: true) == null && !(_running && _runForced);

  /// One line for Settings, e.g. "Waiting for Wi-Fi. 3 captures to sync."
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
    if (retryAt != null) {
      return pending > 0 ? 'Will retry soon. $items to sync.' : 'Will retry soon.';
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
  /// Mode, automatic sync being off, and any wait after a failure; also
  /// retries what the server refused before. Still needs a session, a
  /// tenant and a connection.
  Future<void> syncNow() {
    // An automatic run may be holding an upload back for Wi-Fi.
    if (_running && !_runForced) _cancelUploads?.complete();
    return _start(forced: true);
  }

  void _kick() => unawaited(_start(forced: false));

  void _onInputsChanged() {
    _refreshBlock();
    // If the rules a running upload follows no longer hold (e.g. cellular
    // now allowed, or the connection now disallowed), stop it so the next
    // round follows the new ones.
    if (_running) {
      final wifiOnlyNow = !_runForced && !_settings.useCellular;
      if (_blockedBy(forced: _runForced) != null || wifiOnlyNow != _runWifiOnly) {
        if (!(_cancelUploads?.isCompleted ?? true)) _cancelUploads!.complete();
      }
    }
    _kick();
  }

  bool _runWifiOnly = true;

  void _onNetwork(NetworkStatus status) {
    final before = _network;
    _network = status;
    if (status == before) return;
    // A new path is the moment to try again, not a timer.
    if (status.connected) {
      _allRetryAt = null;
      _onHold.clear();
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
        // Each item's errors are handled where they happen; this is a bug
        // or a broken database. Don't spin: back off like a lost connection.
        log.e('Sync run failed', error: e, stackTrace: s);
        _retryAll('Sync failed: $e');
      } finally {
        _running = false;
        _runForced = false;
        _done = _total = 0;
        await _refreshBacklog();
        _refreshBlock();
        _scheduleRetry();
        notifyListeners();
      }
    }();
  }

  Future<void> _refreshBacklog() async {
    try {
      _backlog = await DatabaseModel.syncBacklog(sub: _auth.sub);
    } catch (e) {
      log.w('Could not count unsynced captures', error: e);
    }
  }

  Future<void> _pass({required bool forced}) async {
    await _refreshBacklog();
    _block = _blockedBy(forced: false);
    if (_blockedBy(forced: forced) != null) {
      notifyListeners();
      return;
    }
    final now = _now();
    if (forced) {
      _allRetryAt = null;
      _onHold.clear();
      _retryTimer?.cancel();
    } else if (_allRetryAt case final at? when now.isBefore(at)) {
      return;
    }
    _runForced = forced;
    _runWifiOnly = !forced && !_settings.useCellular;
    _cancelUploads = Completer<void>();
    final sub = _auth.sub!;

    final captureIds = await DatabaseModel.captureIdsToSync(sub: sub, includeFailed: forced);
    _total = captureIds.length + _backlog.measurements;
    _done = 0;
    notifyListeners();

    var inARow = 0;
    // Runs one item; false ends the run.
    Future<bool> step(String key, Future<_Result> Function() sync) async {
      if (_blockedBy(forced: forced) != null) return false;
      if (_onHold[key] case final hold? when _now().isBefore(hold.until)) return true;
      final result = await sync();
      switch (result.kind) {
        case _Kind.synced:
        case _Kind.refused:
          _onHold.remove(key);
          inARow = 0;
          _done++;
          notifyListeners();
          return true;
        case _Kind.retryItem:
          _hold(key, result.why!, long: result.long);
          if (++inARow >= _maxConsecutiveFailures) {
            _retryAll('$_maxConsecutiveFailures items failed in a row: ${result.why}');
            return false;
          }
          return true;
        case _Kind.retryAll:
          _retryAll(result.why!);
          return false;
        case _Kind.cancelled:
        case _Kind.signIn:
          return false;
      }
    }

    for (final id in captureIds) {
      if (!await step('c:$id', () => _syncCapture(id, forced: forced))) return;
    }
    // Includes versions of captures committed just now that their commit
    // didn't carry (the server already had the capture).
    final versions = await DatabaseModel.measurementsToSync(sub: sub, includeFailed: forced);
    _total = _done + versions.length;
    for (final item in versions) {
      if (!await step('m:${item.version.id}', () => _syncMeasurement(item))) return;
    }

    _failures = 0;
    _allRetryAt = null;
    if (_onHold.isEmpty) {
      _lastError = null;
      _lastSyncedAt = _now();
    }
  }

  Future<_Result> _syncCapture(int id, {required bool forced}) async {
    final sub = _auth.sub!;
    final tenant = _auth.tenant!.slug;
    var photo = await DatabaseModel.getPhotoWithBlobs(id);
    if (photo == null) return _Result.synced; // deleted meanwhile

    // Another account's capture stays on the phone for that account
    // (already excluded from the queue; kept as a guard).
    if (photo.capturedBySub != null && photo.capturedBySub != sub) {
      return const _Result(_Kind.refused);
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
      return const _Result(_Kind.refused);
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
        return const _Result(_Kind.refused);
      }

      // Presigned links last an hour; if they expire on the way, ask again
      // once.
      for (var attempt = 0; ; attempt++) {
        final grant = await _api.requestUploads(captureTenant, captureUuid, payload.declared);
        if (grant.alreadyCommitted) {
          // Committed before; its later versions go up separately.
          await DatabaseModel.markCaptureSynced(id, measurementIds: const [], at: _now());
          return _Result.synced;
        }
        var expired = false;
        for (final upload in grant.uploads) {
          final outcome = await _uploader.put(
            file: payload.fileFor(upload.role),
            url: upload.url,
            headers: upload.headers,
            wifiOnly: !forced && !_settings.useCellular,
            cancel: _cancelUploads?.future,
          );
          switch (outcome) {
            case UploadOutcome.done:
              continue;
            case UploadOutcome.cancelled:
              return const _Result(_Kind.cancelled);
            case UploadOutcome.failed:
              return _Result(_Kind.retryItem, 'Upload of $captureUuid failed.');
            case UploadOutcome.expired:
              expired = true;
          }
          break;
        }
        if (!expired) break;
        if (attempt >= 1) {
          return _Result(_Kind.retryItem, 'Upload links for $captureUuid expired.');
        }
      }

      await _api.commit(captureTenant, captureUuid, payload.manifest);
      await DatabaseModel.markCaptureSynced(id, measurementIds: payload.measurementIds, at: _now());
      log.i('Synced capture $captureUuid');
      return _Result.synced;
    } catch (e, s) {
      return _onError(e, s, onRefused: (why) => DatabaseModel.setCaptureSyncError(id, why));
    } finally {
      if (staging.existsSync()) {
        try {
          staging.deleteSync(recursive: true);
        } catch (_) {}
      }
    }
  }

  Future<_Result> _syncMeasurement(
    ({MeasurementVersion version, String captureUuid, String tenantSlug}) item,
  ) async {
    final id = item.version.id!;
    try {
      await _api.addMeasurement(item.tenantSlug, item.captureUuid, measurementJson(item.version));
      await DatabaseModel.markMeasurementSynced(id, at: _now());
      return _Result.synced;
    } catch (e, s) {
      return _onError(e, s, onRefused: (why) => DatabaseModel.setMeasurementSyncError(id, why));
    }
  }

  /// What an error means for the item (SYNC.md §4's table for the API).
  Future<_Result> _onError(
    Object e,
    StackTrace s, {
    required Future<void> Function(String why) onRefused,
  }) async {
    switch (e) {
      case SyncApiException(:final status, :final detail):
        final text = detail.toLowerCase();
        switch (status) {
          case 401:
            // Refused even after a token refresh: the session is no good on
            // the server. Ask the user to sign in again.
            await _auth.markSignInRequired();
            return const _Result(_Kind.signIn);
          case 403:
            // The capture's capturer isn't this account: not ours to sync.
            await onRefused('Belongs to another account.');
            return const _Result(_Kind.refused);
          case 404:
            return _Result(_Kind.retryItem, 'Not a member of its organization: $detail', true);
          case 409 when text.contains('no storage'):
            return const _Result(
                _Kind.retryItem, 'The organization is not set up for sync yet.', true);
          case 409 when text.contains('has not been uploaded') ||
                text.contains('not the file declared'):
            return const _Result(_Kind.retryItem, 'Upload incomplete; will redo it.');
          case 409:
          case 422:
            // A conflict or a payload the server won't take: a bug to
            // report, not something retrying fixes.
            log.e('Sync refused ($status): $detail');
            await onRefused('Refused ($status): $detail');
            return const _Result(_Kind.refused);
          default:
            return _Result(_Kind.retryItem, 'Server error $status.');
        }
      case SignInRequiredException():
        _refreshBlock();
        return const _Result(_Kind.signIn);
      case FileSystemException(:final message, :final path):
        // E.g. a photo deleted while it was being read.
        return _Result(_Kind.retryItem, 'Could not read ${path ?? 'a file'}: $message');
      case IOException() || http.ClientException() || TimeoutException():
        // Offline, TLS, a dropped connection.
        return _Result(_Kind.retryAll, "Couldn't reach FishSense: $e");
      case FormatException():
        // Not the API answering (e.g. a Wi-Fi sign-in page).
        return const _Result(
            _Kind.retryAll, 'Unexpected answer from the network; is a Wi-Fi sign-in page open?');
      default:
        log.e('Sync of an item failed', error: e, stackTrace: s);
        return _Result(_Kind.retryItem, 'Sync failed: $e');
    }
  }

  /// Delay after [failures] failures: 30 s doubling to 30 min.
  static Duration _backoff(int failures) =>
      Duration(seconds: math.min(30 * (1 << math.min(failures - 1, 6)), 30 * 60));

  /// Put one item on hold; the run carries on without it.
  void _hold(String key, String why, {required bool long}) {
    final failures = (_onHold[key]?.failures ?? 0) + 1;
    final delay = long ? const Duration(hours: 1) : _backoff(failures);
    _onHold[key] = (failures: failures, until: _now().add(delay));
    _lastError = why;
    log.w('Sync: holding $key for ${delay.inSeconds}s: $why');
  }

  /// End the run; try again after a growing delay, or sooner when the
  /// connection changes.
  void _retryAll(String why) {
    _failures++;
    final delay = _backoff(_failures);
    _allRetryAt = _now().add(delay);
    _lastError = why;
    log.w('Sync paused: $why Retrying in ${delay.inSeconds}s.');
  }

  void _scheduleRetry() {
    _retryTimer?.cancel();
    final at = retryAt;
    if (at == null) return;
    final delay = at.difference(_now());
    _retryTimer = Timer(delay.isNegative ? Duration.zero : delay, () {
      if (_allRetryAt case final all? when !_now().isBefore(all)) _allRetryAt = null;
      _kick();
    });
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
    if (!(_cancelUploads?.isCompleted ?? true)) _cancelUploads!.complete();
    super.dispose();
  }
}
