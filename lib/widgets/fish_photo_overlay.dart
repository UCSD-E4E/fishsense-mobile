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
class FishPhotoOverlay extends StatefulWidget {
  final Uint8List photoBytes;
  final Uint8List? mask;
  final int maskWidth;
  final int maskHeight;
  final Coordinate? snout;
  final Coordinate? fork;
  final Orientation? captureOrientation;

  const FishPhotoOverlay({
    super.key,
    required this.photoBytes,
    this.mask,
    this.maskWidth = 0,
    this.maskHeight = 0,
    this.snout,
    this.fork,
    this.captureOrientation,
  });

  @override
  State<FishPhotoOverlay> createState() => _FishPhotoOverlayState();
}

class _FishPhotoOverlayState extends State<FishPhotoOverlay> {
  ui.Image? _photo;
  ui.Image? _maskImage;
  Object? _error;

  @override
  void initState() {
    super.initState();
    _loadImages();
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
  }

  @override
  void dispose() {
    _photo?.dispose();
    _maskImage?.dispose();
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
    for (var i = 0; i < mask.length; i++) {
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

    final content = AspectRatio(
      aspectRatio: photo.width / photo.height,
      child: CustomPaint(
        painter: _FishPhotoPainter(
          photo: photo,
          mask: _maskImage,
          snout: widget.snout,
          fork: widget.fork,
        ),
      ),
    );

    return Center(
      child: quarterTurns == 0
          ? content
          : RotatedBox(quarterTurns: quarterTurns, child: content),
    );
  }
}

class _FishPhotoPainter extends CustomPainter {
  final ui.Image photo;
  final ui.Image? mask;
  final Coordinate? snout;
  final Coordinate? fork;

  _FishPhotoPainter({
    required this.photo,
    required this.mask,
    required this.snout,
    required this.fork,
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
        ..strokeWidth = 2
        ..style = PaintingStyle.stroke;
      canvas.drawLine(
        Offset(snoutPt.x * sx, snoutPt.y * sy),
        Offset(forkPt.x * sx, forkPt.y * sy),
        linePaint,
      );
    }

    if (snoutPt != null) {
      _drawPoint(
        canvas,
        Offset(snoutPt.x * sx, snoutPt.y * sy),
        const Color(0xFF4CAF50),
      );
    }
    if (forkPt != null) {
      _drawPoint(
        canvas,
        Offset(forkPt.x * sx, forkPt.y * sy),
        const Color(0xFFFF5252),
      );
    }
  }

  void _drawPoint(Canvas canvas, Offset center, Color color) {
    canvas.drawCircle(center, 10, Paint()..color = Colors.white);
    canvas.drawCircle(center, 7, Paint()..color = color);
  }

  @override
  bool shouldRepaint(covariant _FishPhotoPainter old) {
    return old.photo != photo ||
        old.mask != mask ||
        old.snout != snout ||
        old.fork != fork;
  }
}
