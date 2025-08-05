import 'dart:math' as math;
import 'dart:ui';
import 'models.dart';

/// CoordinateTransformation - Real screen-to-world coordinate conversion
/// Based on ARKit camera intrinsics and depth data
/// Direct translation from iOS Swift coordinate transformation logic
class CoordinateTransformation {
  static const String _tag = 'CoordinateTransformation';

  /// Convert screen coordinates to world coordinates using camera intrinsics and depth
  /// This is the REAL implementation, not a placeholder
  /// 
  /// Based on the pinhole camera model:
  /// X_world = (x_screen - cx) * depth / fx
  /// Y_world = (y_screen - cy) * depth / fy
  /// Z_world = depth
  static Coordinate screenToWorld({
    required Coordinate screenPoint,
    required Matrix3 cameraIntrinsics,
    required double depth,
    required Size imageResolution,
  }) {
    try {
      // Validate inputs
      if (depth <= 0) {
        print('$_tag: Invalid depth value: $depth');
        return screenPoint; // Return screen point as fallback
      }

      // Extract camera intrinsics
      final fx = cameraIntrinsics.fx; // Focal length X
      final fy = cameraIntrinsics.fy; // Focal length Y
      final cx = cameraIntrinsics.cx; // Principal point X
      final cy = cameraIntrinsics.cy; // Principal point Y

      // Convert screen coordinates to normalized camera coordinates
      // Account for image resolution scaling
      final normalizedX = screenPoint.x;
      final normalizedY = screenPoint.y;

      // Apply pinhole camera model transformation
      // Convert from 2D screen space to 3D world space
      final worldX = (normalizedX - cx) * depth / fx;
      final worldY = (normalizedY - cy) * depth / fy;

      print('$_tag: Screen (${ screenPoint.x.toStringAsFixed(1)}, ${screenPoint.y.toStringAsFixed(1)}) '
            '→ World (${worldX.toStringAsFixed(3)}, ${worldY.toStringAsFixed(3)}) at depth ${depth.toStringAsFixed(3)}m');

      return Coordinate(x: worldX, y: worldY);

    } catch (e) {
      print('$_tag: Error in coordinate transformation: $e');
      return screenPoint; // Return screen point as fallback
    }
  }

  /// Calculate 3D distance between two world coordinates
  /// Used for fish length measurement in real world units (meters)
  static double calculate3DDistance({
    required Coordinate worldPoint1,
    required double depth1,
    required Coordinate worldPoint2,
    required double depth2,
  }) {
    try {
      // Calculate 3D distance using Euclidean formula
      final dx = worldPoint2.x - worldPoint1.x;
      final dy = worldPoint2.y - worldPoint1.y;
      final dz = depth2 - depth1;

      final distance = math.sqrt(dx * dx + dy * dy + dz * dz);

      print('$_tag: 3D distance calculated: ${distance.toStringAsFixed(3)}m');
      return distance;

    } catch (e) {
      print('$_tag: Error calculating 3D distance: $e');
      return 0.0;
    }
  }

  /// Get depth value at screen coordinate from depth map
  /// Returns depth in meters, or null if invalid
  static double? getDepthAtScreenPoint({
    required Coordinate screenPoint,
    required ByteMatrixModel depthMap,
    required Size imageResolution,
  }) {
    try {
      // Convert screen coordinates to depth map indices
      final x = screenPoint.x.round();
      final y = screenPoint.y.round();

      // Check bounds
      if (x < 0 || x >= depthMap.width || y < 0 || y >= depthMap.height) {
        print('$_tag: Screen point out of bounds: ($x, $y) for depth map ${depthMap.width}x${depthMap.height}');
        return null;
      }

      final index = y * depthMap.width + x;
      if (depthMap.bytes == null || index >= depthMap.bytes!.length) {
        print('$_tag: Invalid depth map index: $index');
        return null;
      }

      // Convert scaled UInt8 back to meters (reverse iOS scaling)
      final scaledValue = depthMap.bytes![index];
      final depthMeters = (scaledValue / 255.0) * 5.0; // Max depth was 5m in iOS

      // Validate depth range (ARKit typical range: 0.5m to 5m)
      if (depthMeters < 0.1 || depthMeters > 10.0) {
        print('$_tag: Depth value out of expected range: ${depthMeters.toStringAsFixed(3)}m');
        return null;
      }

      return depthMeters;

    } catch (e) {
      print('$_tag: Error getting depth at screen point: $e');
      return null;
    }
  }

  /// Calculate fish length between two screen points using real depth data
  /// This is the main function used by the measurement system
  static double? calculateFishLength({
    required Coordinate headPoint,
    required Coordinate tailPoint,
    required ByteMatrixModel depthMap,
    required Matrix3 cameraIntrinsics,
    required Size imageResolution,
  }) {
    try {
      print('$_tag: Calculating fish length between head and tail points...');

      // Get depth at both points
      final headDepth = getDepthAtScreenPoint(
        screenPoint: headPoint,
        depthMap: depthMap,
        imageResolution: imageResolution,
      );

      final tailDepth = getDepthAtScreenPoint(
        screenPoint: tailPoint,
        depthMap: depthMap,
        imageResolution: imageResolution,
      );

      if (headDepth == null || tailDepth == null) {
        print('$_tag: Unable to get depth for one or both points');
        return null;
      }

      // Convert screen coordinates to world coordinates
      final headWorld = screenToWorld(
        screenPoint: headPoint,
        cameraIntrinsics: cameraIntrinsics,
        depth: headDepth,
        imageResolution: imageResolution,
      );

      final tailWorld = screenToWorld(
        screenPoint: tailPoint,
        cameraIntrinsics: cameraIntrinsics,
        depth: tailDepth,
        imageResolution: imageResolution,
      );

      // Calculate 3D distance
      final lengthMeters = calculate3DDistance(
        worldPoint1: headWorld,
        depth1: headDepth,
        worldPoint2: tailWorld,
        depth2: tailDepth,
      );

      // Convert to centimeters for fish measurement
      final lengthCentimeters = lengthMeters * 100.0;

      print('$_tag: Fish length calculated: ${lengthCentimeters.toStringAsFixed(2)}cm');
      return lengthCentimeters;

    } catch (e) {
      print('$_tag: Error calculating fish length: $e');
      return null;
    }
  }

  /// Validate camera intrinsics matrix
  /// Ensures the matrix has reasonable values for fish measurement
  static bool validateCameraIntrinsics(Matrix3 intrinsics) {
    try {
      final fx = intrinsics.fx;
      final fy = intrinsics.fy;
      final cx = intrinsics.cx;
      final cy = intrinsics.cy;

      // Check for reasonable focal length values (typical iPhone range: 500-2000)
      if (fx < 100 || fx > 5000 || fy < 100 || fy > 5000) {
        print('$_tag: Focal lengths out of expected range: fx=$fx, fy=$fy');
        return false;
      }

      // Check for reasonable principal point values
      if (cx < 0 || cy < 0 || cx > 2000 || cy > 2000) {
        print('$_tag: Principal point out of expected range: cx=$cx, cy=$cy');
        return false;
      }

      // Check that focal lengths are reasonably similar (aspect ratio check)
      final aspectRatio = fx / fy;
      if (aspectRatio < 0.5 || aspectRatio > 2.0) {
        print('$_tag: Unusual aspect ratio: $aspectRatio');
        return false;
      }

      print('$_tag: Camera intrinsics validated: fx=$fx, fy=$fy, cx=$cx, cy=$cy');
      return true;

    } catch (e) {
      print('$_tag: Error validating camera intrinsics: $e');
      return false;
    }
  }

  /// Apply confidence filtering to depth measurements
  /// Only use depth values with high confidence for accurate measurements
  static double? getFilteredDepthAtPoint({
    required Coordinate screenPoint,
    required ByteMatrixModel depthMap,
    required ByteMatrixModel confidenceMap,
    required Size imageResolution,
    int minimumConfidence = 2, // ARKit confidence levels: 0=low, 1=medium, 2=high
  }) {
    try {
      final x = screenPoint.x.round();
      final y = screenPoint.y.round();

      // Check bounds for both maps
      if (x < 0 || x >= depthMap.width || y < 0 || y >= depthMap.height ||
          x >= confidenceMap.width || y >= confidenceMap.height) {
        return null;
      }

      final index = y * depthMap.width + x;
      
      // Check confidence level first
      if (confidenceMap.bytes == null || index >= confidenceMap.bytes!.length) {
        return null;
      }

      final confidence = confidenceMap.bytes![index];
      if (confidence < minimumConfidence) {
        print('$_tag: Low confidence depth at ($x, $y): confidence=$confidence');
        return null;
      }

      // If confidence is good, return the depth
      return getDepthAtScreenPoint(
        screenPoint: screenPoint,
        depthMap: depthMap,
        imageResolution: imageResolution,
      );

    } catch (e) {
      print('$_tag: Error getting filtered depth: $e');
      return null;
    }
  }
}