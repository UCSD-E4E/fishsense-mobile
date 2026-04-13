import 'dart:io';
import 'package:flutter/services.dart';
import 'arkit_service.dart';
import '../logger.dart';

/// Provides device information and LiDAR capability detection.
class DeviceInfoService {
  static const MethodChannel _channel = MethodChannel('fishsense_native');

  /// Get comprehensive device information with LiDAR status.
  static Future<String> getDeviceInfo() async {
    try {
      log.d('Calling platform channel for device info');

      final String? result = await _channel.invokeMethod('getDeviceInfo');

      if (result != null) {
        log.d('Platform channel device info: $result');
        return result;
      } else {
        log.w('Platform channel returned null, using fallback');
        return await _getFallbackDeviceInfo();
      }
    } catch (e) {
      log.w('Platform channel failed, using fallback', error: e);
      return await _getFallbackDeviceInfo();
    }
  }

  static Future<String> _getFallbackDeviceInfo() async {
    try {
      if (Platform.isIOS) {
        return await _getIOSDeviceInfo();
      } else if (Platform.isAndroid) {
        return await _getAndroidDeviceInfo();
      }
      return 'Unknown Device';
    } catch (e) {
      log.e('Error in fallback device info', error: e);
      return 'Unknown Device';
    }
  }

  static Future<String> _getIOSDeviceInfo() async {
    try {
      final hasLiDAR = await ARKitService.initializeARKit();
      return hasLiDAR
          ? 'Apple iPhone Pro (iOS - LiDAR Enabled)'
          : 'Apple iOS Device (No LiDAR)';
    } catch (e) {
      return 'Apple iOS Device (Unknown Model)';
    }
  }

  static Future<String> _getAndroidDeviceInfo() async {
    try {
      return 'Android Device (No LiDAR)';
    } catch (e) {
      return 'Android Device (Unknown Model)';
    }
  }
}
