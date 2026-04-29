import 'dart:async';
import 'dart:typed_data';
import 'dart:ui' as ui;

import 'package:flutter/material.dart';

import '../models.dart';

/// Renders a captured fish photo with the segmentation mask and snout/fork
/// markers painted on top. Used by both the live capture result screen and
/// the gallery detail viewer so they stay visually consistent.
///
/// The capture is always in ARKit's sensor-native landscape orientation, so
/// [captureOrientation] is used to rotate the display back to the way the
/// user framed the shot.
///
/// When [editing] is true the snout and fork markers become draggable. The
/// overlay manages a local drag-preview so the connecting line follows the
/// finger in real time, but only emits the final position to the parent
/// via [onSnoutChanged] / [onForkChanged] when the drag ends. The parent
/// is responsible for snap-to-mask + length recomputation.
class FishPhotoOverlay extends StatefulWidget {
  final Uint8List photoBytes;
  final Uint8List? mask;
  final int maskWidth;
  final int maskHeight;
  final Coordinate? snout;
  final Coordinate? fork;
  final Orientation? captureOrientation;

  final bool editing;

  /// Called with the un-snapped image-pixel coordinate the user dragged
  /// the marker to. The parent should snap to the mask, recompute, and
  /// (on success) update [snout] / [fork] via setState — that flows back
  /// in here as the new authoritative position.
  final void Function(Coordinate raw)? onSnoutChanged;
  final void Function(Coordinate raw)? onForkChanged;

  const FishPhotoOverlay({
    super.key,
    required this.photoBytes,
    this.mask,
    this.maskWidth = 0,
    this.maskHeight = 0,
    this.snout,
    this.fork,
    this.captureOrientation,
    this.editing = false,
    this.onSnoutChanged,
    this.onForkChanged,
  });

  @override
  State<FishPhotoOverlay> createState() => _FishPhotoOverlayState();
}

class _FishPhotoOverlayState extends State<FishPhotoOverlay> {
  ui.Image? _photo;
  ui.Image? _maskImage;
  Object? _error;

  /// Live drag-preview in image-pixel space. Non-null only while the user
  /// is actively dragging the corresponding marker. Cleared when the drag
  /// ends or when an external state change supplies a new authoritative
  /// snout/fork.
  Coordinate? _snoutPreview;
  Coordinate? _forkPreview;

  /// Pinch-to-zoom / drag-to-pan handle. We re-use the same controller
  /// for the lifetime of the widget so re-mounts (e.g. flipping in/out
  /// of edit mode) don't lose the user's zoom level.
  final TransformationController _tc = TransformationController();

  Coordinate? get _displaySnout => _snoutPreview ?? widget.snout;
  Coordinate? get _displayFork => _forkPreview ?? widget.fork;

  @override
  void initState() {
    super.initState();
    // Markers are drawn at a size that's inversely proportional to the
    // current zoom so they stay constant on screen. That means we have
    // to rebuild whenever the user pinches.
    _tc.addListener(_onTransformChanged);
    _loadImages();
  }

  void _onTransformChanged() {
    if (mounted) setState(() {});
  }

  @override
  void didUpdateWidget(covariant FishPhotoOverlay oldWidget) {
    super.didUpdateWidget(oldWidget);
    if (oldWidget.photoBytes != widget.photoBytes ||
        oldWidget.mask != widget.mask) {
      _photo?.dispose();
      _maskImage?.dispose();
      _photo = null;
      _maskImage = null;
      _error = null;
      _loadImages();
    }
    // Parent committed an updated authoritative position — clear any
    // stale drag-preview so we start showing the real one again.
    if (oldWidget.snout != widget.snout) _snoutPreview = null;
    if (oldWidget.fork != widget.fork) _forkPreview = null;
  }

  @override
  void dispose() {
    _tc.removeListener(_onTransformChanged);
    _photo?.dispose();
    _maskImage?.dispose();
    _tc.dispose();
    super.dispose();
  }

  Future<void> _loadImages() async {
    try {
      final photo = await _decodePhoto(widget.photoBytes);
      ui.Image? mask;
      if (widget.mask != null &&
          widget.maskWidth > 0 &&
          widget.maskHeight > 0) {
        mask = await _maskToImage(
          widget.mask!,
          widget.maskWidth,
          widget.maskHeight,
        );
      }
      if (!mounted) {
        photo.dispose();
        mask?.dispose();
        return;
      }
      setState(() {
        _photo = photo;
        _maskImage = mask;
      });
    } catch (e) {
      if (!mounted) return;
      setState(() => _error = e);
    }
  }

  static Future<ui.Image> _decodePhoto(Uint8List bytes) {
    final completer = Completer<ui.Image>();
    ui.decodeImageFromList(bytes, completer.complete);
    return completer.future;
  }

  static Future<ui.Image> _maskToImage(
    Uint8List mask,
    int width,
    int height,
  ) {
    final rgba = Uint8List(width * height * 4);
    // Clamp to the declared pixel count — the native side is supposed to send
    // exactly width*height bytes, but a mismatch would otherwise index past
    // the rgba buffer and throw RangeError.
    final limit = mask.length < width * height ? mask.length : width * height;
    for (var i = 0; i < limit; i++) {
      if (mask[i] != 0) {
        final j = i * 4;
        rgba[j] = 0;
        rgba[j + 1] = 200;
        rgba[j + 2] = 255;
        rgba[j + 3] = 110;
      }
    }
    final completer = Completer<ui.Image>();
    ui.decodeImageFromPixels(
      rgba,
      width,
      height,
      ui.PixelFormat.rgba8888,
      completer.complete,
    );
    return completer.future;
  }

  @override
  Widget build(BuildContext context) {
    if (_error != null) {
      return Center(
        child: Text(
          'Failed to render photo: $_error',
          style: const TextStyle(color: Colors.redAccent),
        ),
      );
    }
    final photo = _photo;
    if (photo == null) {
      return const Center(
        child: CircularProgressIndicator(color: Color(0xFF00AAA5)),
      );
    }

    // Rotate to match how the user framed the shot. ARKit always writes
    // sensor-native landscape, so if the capture was portrait the stored
    // pixels need one quarter turn.
    final quarterTurns =
        widget.captureOrientation == Orientation.portrait ? 1 : 0;

    // Counter-scale for the markers. InteractiveViewer applies a uniform
    // scale to the whole subtree; sizing the markers at `1/zoom` of their
    // natural size cancels that out so they stay constant on screen
    // whether the user is at 1× or 8×.
    final zoom = _tc.value.getMaxScaleOnAxis();
    final inverseScale = zoom <= 0 ? 1.0 : 1.0 / zoom;

    final content = AspectRatio(
      aspectRatio: photo.width / photo.height,
      child: LayoutBuilder(
        builder: (context, constraints) {
          final sx = constraints.maxWidth / photo.width;
          final sy = constraints.maxHeight / photo.height;
          final snoutPt = _displaySnout;
          final forkPt = _displayFork;
          return Stack(
            children: [
              Positioned.fill(
                child: CustomPaint(
                  painter: _FishPhotoPainter(
                    photo: photo,
                    mask: _maskImage,
                    snout: snoutPt,
                    fork: forkPt,
                    lineStrokeWidth: 2.0 * inverseScale,
                  ),
                ),
              ),
              if (snoutPt != null)
                _marker(
                  imageCoord: snoutPt,
                  color: const Color(0xFF4CAF50),
                  sx: sx,
                  sy: sy,
                  imageWidth: photo.width.toDouble(),
                  imageHeight: photo.height.toDouble(),
                  inverseScale: inverseScale,
                  interactive: widget.editing,
                  onPreview: (c) => setState(() => _snoutPreview = c),
                  onCommit: (c) {
                    setState(() => _snoutPreview = null);
                    widget.onSnoutChanged?.call(c);
                  },
                ),
              if (forkPt != null)
                _marker(
                  imageCoord: forkPt,
                  color: const Color(0xFFFF5252),
                  sx: sx,
                  sy: sy,
                  imageWidth: photo.width.toDouble(),
                  imageHeight: photo.height.toDouble(),
                  inverseScale: inverseScale,
                  interactive: widget.editing,
                  onPreview: (c) => setState(() => _forkPreview = c),
                  onCommit: (c) {
                    setState(() => _forkPreview = null);
                    widget.onForkChanged?.call(c);
                  },
                ),
            ],
          );
        },
      ),
    );

    final viewer = InteractiveViewer(
      transformationController: _tc,
      // Pinch-to-zoom is always on. Pan is suppressed while editing so
      // a single-finger drag lands on a marker's gesture detector
      // unambiguously instead of being swallowed by the InteractiveViewer.
      panEnabled: !widget.editing,
      scaleEnabled: true,
      minScale: 1.0,
      maxScale: 8.0,
      clipBehavior: Clip.hardEdge,
      child: content,
    );

    return Center(
      child: quarterTurns == 0
          ? viewer
          : RotatedBox(quarterTurns: quarterTurns, child: viewer),
    );
  }

  /// Draws (and optionally drag-handles) one marker. Width/height of the
  /// Positioned box is `44pt × inverseScale` in display-space units, so
  /// after InteractiveViewer applies its zoom the visible dot ends up at
  /// the same on-screen size regardless of zoom level.
  Widget _marker({
    required Coordinate imageCoord,
    required Color color,
    required double sx,
    required double sy,
    required double imageWidth,
    required double imageHeight,
    required double inverseScale,
    required bool interactive,
    required void Function(Coordinate) onPreview,
    required void Function(Coordinate) onCommit,
  }) {
    const baseHit = 44.0;
    final hit = baseHit * inverseScale;
    final cx = imageCoord.x * sx;
    final cy = imageCoord.y * sy;
    final visual = SizedBox(
      width: hit,
      height: hit,
      child: CustomPaint(painter: _MarkerPainter(color: color)),
    );
    return Positioned(
      left: cx - hit / 2,
      top: cy - hit / 2,
      width: hit,
      height: hit,
      child: interactive
          ? GestureDetector(
              behavior: HitTestBehavior.opaque,
              onPanUpdate: (details) {
                // details.delta is in this widget's local coords, which —
                // because InteractiveViewer's transform is applied below
                // us — are already in pre-zoom display space. Divide by
                // sx/sy to convert back to image-pixel space, so a 10pt
                // visual drag at 3× zoom moves the marker by ~3.3 image
                // pixels.
                final newX = (imageCoord.x + details.delta.dx / sx)
                    .clamp(0.0, imageWidth);
                final newY = (imageCoord.y + details.delta.dy / sy)
                    .clamp(0.0, imageHeight);
                onPreview(Coordinate(x: newX, y: newY));
              },
              onPanEnd: (_) => onCommit(imageCoord),
              child: visual,
            )
          : IgnorePointer(child: visual),
    );
  }
}

class _FishPhotoPainter extends CustomPainter {
  final ui.Image photo;
  final ui.Image? mask;
  final Coordinate? snout;
  final Coordinate? fork;

  /// Painter operates in InteractiveViewer's pre-zoom coordinate space, so
  /// a hard-coded stroke width would balloon under zoom. The state passes
  /// `2 / zoom` here to keep the connecting line at a constant on-screen
  /// width.
  final double lineStrokeWidth;

  _FishPhotoPainter({
    required this.photo,
    required this.mask,
    required this.snout,
    required this.fork,
    this.lineStrokeWidth = 2,
  });

  @override
  void paint(Canvas canvas, Size size) {
    final dst = Offset.zero & size;
    canvas.drawImageRect(
      photo,
      Rect.fromLTWH(0, 0, photo.width.toDouble(), photo.height.toDouble()),
      dst,
      Paint(),
    );

    final m = mask;
    if (m != null) {
      canvas.drawImageRect(
        m,
        Rect.fromLTWH(0, 0, m.width.toDouble(), m.height.toDouble()),
        dst,
        Paint(),
      );
    }

    final sx = size.width / photo.width;
    final sy = size.height / photo.height;

    final snoutPt = snout;
    final forkPt = fork;

    if (snoutPt != null && forkPt != null) {
      final linePaint = Paint()
        ..color = Colors.white.withValues(alpha: 0.75)
        ..strokeWidth = lineStrokeWidth
        ..style = PaintingStyle.stroke;
      canvas.drawLine(
        Offset(snoutPt.x * sx, snoutPt.y * sy),
        Offset(forkPt.x * sx, forkPt.y * sy),
        linePaint,
      );
    }
  }

  @override
  bool shouldRepaint(covariant _FishPhotoPainter old) {
    return old.photo != photo ||
        old.mask != mask ||
        old.snout != snout ||
        old.fork != fork ||
        old.lineStrokeWidth != lineStrokeWidth;
  }
}

/// Renders a centered "halo + dot" marker that fills the parent box.
/// Sizes are relative to the box so the marker scales cleanly when the
/// parent's dimensions are inverse-scaled to counter InteractiveViewer
/// zoom — at 1× the box is 44pt and the dot's halo is 12pt; at 8× zoom
/// the box is 5.5pt and the halo shrinks proportionally, keeping the
/// on-screen size identical.
class _MarkerPainter extends CustomPainter {
  final Color color;
  _MarkerPainter({required this.color});

  // Hit-area is 44pt at 1× zoom; halo and dot were 12pt and 9pt.
  static const _haloRatio = 12.0 / 44.0;
  static const _dotRatio = 9.0 / 44.0;

  @override
  void paint(Canvas canvas, Size size) {
    final c = Offset(size.width / 2, size.height / 2);
    final halo = size.width * _haloRatio;
    final dot = size.width * _dotRatio;
    canvas.drawCircle(c, halo, Paint()..color = Colors.white);
    canvas.drawCircle(c, dot, Paint()..color = color);
  }

  @override
  bool shouldRepaint(covariant _MarkerPainter old) => old.color != color;
}
