import 'dart:typed_data';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../database.dart';
import '../logger.dart';
import '../models.dart';
import '../services/mask_snap.dart';
import '../services/preferences_service.dart';
import '../services/rust_service.dart';
import '../widgets/fish_photo_overlay.dart';

/// Full-screen result view shown after a successful fish measurement.
///
/// Renders the captured photo with the segmentation mask overlaid and the
/// detected snout / fork points marked, alongside the computed length.
/// When the manual-edit affordance is wired up (i.e. [photoId] and the
/// depth/intrinsics inputs are provided), the user can drag snout / fork
/// onto the mask, and the new length is recomputed and persisted.
class FishResultScreen extends StatefulWidget {
  final Uint8List photoBytes;
  final ComputeLengthResult result;

  /// Device orientation at the moment the photo was captured. Used to
  /// display the image in the orientation the user framed it in, since
  /// ARKit always writes sensor-native landscape pixels regardless of how
  /// the phone was held.
  final Orientation captureOrientation;

  /// DB primary key for the row this result was just persisted to. When
  /// non-null and depth/intrinsics are available, the screen exposes a
  /// pencil-edit affordance and writes manual edits back to the row.
  final int? photoId;

  /// Per-frame depth map and inverse intrinsics. Required to re-run the
  /// plane fit after the user drags a marker; without them the edit
  /// affordance is hidden.
  final Uint8List? depthData;
  final int? depthWidth;
  final int? depthHeight;
  final List<double>? cameraIntrinsicsInverted;

  const FishResultScreen({
    super.key,
    required this.photoBytes,
    required this.result,
    required this.captureOrientation,
    this.photoId,
    this.depthData,
    this.depthWidth,
    this.depthHeight,
    this.cameraIntrinsicsInverted,
  });

  @override
  State<FishResultScreen> createState() => _FishResultScreenState();
}

class _FishResultScreenState extends State<FishResultScreen> {
  late ComputeLengthResult _result = widget.result;
  bool _editing = false;
  bool _busy = false;
  String? _editError;

  /// Snapshot of the snout/fork that were on the row when edit mode was
  /// entered, so the user can hit "reset" after a failed recompute and
  /// land back on a known-good measurement.
  Coordinate? _resetSnout;
  Coordinate? _resetFork;
  double? _resetLength;

  bool get _canEdit =>
      widget.photoId != null &&
      widget.depthData != null &&
      widget.depthWidth != null &&
      widget.depthHeight != null &&
      widget.cameraIntrinsicsInverted != null &&
      _result.mask != null &&
      _result.maskWidth > 0 &&
      _result.maskHeight > 0;

  @override
  Widget build(BuildContext context) {
    final lengthLabel = _result.fishFound
        ? context.watch<PreferencesService>().formatFishLength(_result.length)
        : 'Unavailable';

    return Scaffold(
      backgroundColor: Colors.black,
      body: Stack(
        fit: StackFit.expand,
        children: [
          Positioned.fill(
            child: FishPhotoOverlay(
              photoBytes: widget.photoBytes,
              mask: _result.mask,
              maskWidth: _result.maskWidth,
              maskHeight: _result.maskHeight,
              snout: _result.fishFound ? _result.left : null,
              fork: _result.fishFound ? _result.right : null,
              captureOrientation: widget.captureOrientation,
              editing: _editing,
              onSnoutChanged: _busy ? null : _onSnoutDropped,
              onForkChanged: _busy ? null : _onForkDropped,
            ),
          ),
          SafeArea(
            child: Align(
              alignment: Alignment.topLeft,
              child: Padding(
                padding: const EdgeInsets.all(8),
                child: Material(
                  color: Colors.black.withValues(alpha: 0.4),
                  shape: const CircleBorder(),
                  child: IconButton(
                    icon: const Icon(Icons.arrow_back, color: Colors.white),
                    onPressed: _busy ? null : () => Navigator.of(context).pop(),
                  ),
                ),
              ),
            ),
          ),
          if (_canEdit)
            SafeArea(
              child: Align(
                alignment: Alignment.topRight,
                child: Padding(
                  padding: const EdgeInsets.all(8),
                  child: _editToolbar(),
                ),
              ),
            ),
          if (_busy)
            const Positioned.fill(
              child: ColoredBox(
                color: Color(0x66000000),
                child: Center(
                  child: CircularProgressIndicator(color: Color(0xFF00AAA5)),
                ),
              ),
            ),
          SafeArea(
            child: Align(
              alignment: Alignment.bottomCenter,
              child: _buildMetrics(lengthLabel),
            ),
          ),
        ],
      ),
    );
  }

  Widget _editToolbar() {
    return Material(
      color: Colors.black.withValues(alpha: 0.4),
      borderRadius: BorderRadius.circular(24),
      child: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 4),
        child: Row(
          mainAxisSize: MainAxisSize.min,
          children: [
            if (_editing) ...[
              IconButton(
                tooltip: 'Reset',
                icon: const Icon(Icons.restart_alt, color: Colors.white),
                onPressed: _busy ? null : _resetEdits,
              ),
              IconButton(
                tooltip: 'Done',
                icon: const Icon(Icons.check, color: Color(0xFF4CAF50)),
                onPressed: _busy ? null : _exitEditMode,
              ),
            ] else
              IconButton(
                tooltip: 'Edit',
                icon: const Icon(Icons.edit, color: Colors.white),
                onPressed: _busy ? null : _enterEditMode,
              ),
          ],
        ),
      ),
    );
  }

  void _enterEditMode() {
    if (!_result.fishFound) return;
    setState(() {
      _editing = true;
      _editError = null;
      _resetSnout = _result.left;
      _resetFork = _result.right;
      _resetLength = _result.length;
    });
  }

  void _exitEditMode() {
    setState(() {
      _editing = false;
      _editError = null;
    });
  }

  void _resetEdits() {
    final s = _resetSnout;
    final f = _resetFork;
    final l = _resetLength;
    if (s == null || f == null || l == null) return;
    setState(() {
      _result = ComputeLengthResult.success(
        length: l,
        left: s,
        right: f,
        mask: _result.mask,
        maskWidth: _result.maskWidth,
        maskHeight: _result.maskHeight,
      );
      _editError = null;
    });
  }

  Future<void> _onSnoutDropped(Coordinate raw) =>
      _applyEdit(snoutRaw: raw, forkRaw: _result.right);

  Future<void> _onForkDropped(Coordinate raw) =>
      _applyEdit(snoutRaw: _result.left, forkRaw: raw);

  Future<void> _applyEdit({
    required Coordinate snoutRaw,
    required Coordinate forkRaw,
  }) async {
    if (!_canEdit || _busy) return;
    final mask = _result.mask!;
    final maskW = _result.maskWidth;
    final maskH = _result.maskHeight;

    final snapped = (
      snout: snapToMask(
        mask: mask,
        maskWidth: maskW,
        maskHeight: maskH,
        x: snoutRaw.x,
        y: snoutRaw.y,
      ),
      fork: snapToMask(
        mask: mask,
        maskWidth: maskW,
        maskHeight: maskH,
        x: forkRaw.x,
        y: forkRaw.y,
      ),
    );

    if (snapped.snout == null || snapped.fork == null) {
      _showError(
        'Couldn\'t find the fish near that point. Drop the marker '
        'closer to the highlighted segmentation mask.',
      );
      return;
    }

    setState(() {
      _busy = true;
      _editError = null;
    });

    try {
      final recomputed = await RustService.recomputeLength(
        maskData: mask,
        maskWidth: maskW,
        maskHeight: maskH,
        depthData: widget.depthData!,
        depthWidth: widget.depthWidth!,
        depthHeight: widget.depthHeight!,
        cameraIntrinsicsInverted: widget.cameraIntrinsicsInverted!,
        snout: snapped.snout!,
        fork: snapped.fork!,
      );

      if (!recomputed.fishFound ||
          !recomputed.length.isFinite ||
          recomputed.length <= 0) {
        _showError(
          'Couldn\'t recompute length — the depth plane fit failed at '
          'those points. Move the markers and try again, or reset.',
          rustError: recomputed.errorString,
        );
        return;
      }

      final saved = await DatabaseModel.updateMeasurement(
        id: widget.photoId!,
        snoutX: snapped.snout!.x,
        snoutY: snapped.snout!.y,
        forkX: snapped.fork!.x,
        forkY: snapped.fork!.y,
        fishLength: recomputed.length,
      );
      if (!saved) {
        _showError('Saved the new measurement in memory but the '
            'database update failed.');
      }

      if (!mounted) return;
      setState(() {
        _result = ComputeLengthResult.success(
          length: recomputed.length,
          left: snapped.snout!,
          right: snapped.fork!,
          mask: mask,
          maskWidth: maskW,
          maskHeight: maskH,
        );
      });
    } catch (e) {
      log.e('Manual recompute failed', error: e);
      _showError('Couldn\'t recompute length: $e');
    } finally {
      if (mounted) setState(() => _busy = false);
    }
  }

  void _showError(String msg, {String? rustError}) {
    setState(() => _editError = msg);
    if (!mounted) return;
    ScaffoldMessenger.of(context).showSnackBar(
      SnackBar(
        backgroundColor: Colors.red.shade900,
        content: Text(rustError == null ? msg : '$msg\n($rustError)'),
        action: SnackBarAction(
          label: 'Reset',
          textColor: Colors.white,
          onPressed: _resetEdits,
        ),
      ),
    );
  }

  Widget _buildMetrics(String lengthLabel) {
    return Container(
      margin: const EdgeInsets.all(16),
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 16),
      decoration: BoxDecoration(
        color: Colors.black.withValues(alpha: 0.55),
        borderRadius: BorderRadius.circular(16),
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const Text(
            'Length',
            style: TextStyle(
              color: Colors.white70,
              fontSize: 12,
              letterSpacing: 1.2,
            ),
          ),
          const SizedBox(height: 2),
          Text(
            lengthLabel,
            style: const TextStyle(
              color: Color(0xFF00AAA5),
              fontSize: 32,
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 10),
          Row(
            children: [
              _legendDot(const Color(0xFF4CAF50), 'Snout'),
              const SizedBox(width: 16),
              _legendDot(const Color(0xFFFF5252), 'Fork'),
              const SizedBox(width: 16),
              _legendDot(const Color(0xFF00C8FF).withValues(alpha: 0.55), 'Mask'),
            ],
          ),
          if (_editError != null) ...[
            const SizedBox(height: 8),
            Text(
              _editError!,
              style: const TextStyle(color: Colors.redAccent, fontSize: 12),
            ),
          ],
        ],
      ),
    );
  }

  Widget _legendDot(Color color, String label) {
    return Row(
      mainAxisSize: MainAxisSize.min,
      children: [
        Container(
          width: 12,
          height: 12,
          decoration: BoxDecoration(color: color, shape: BoxShape.circle),
        ),
        const SizedBox(width: 6),
        Text(label, style: const TextStyle(color: Colors.white70)),
      ],
    );
  }
}
