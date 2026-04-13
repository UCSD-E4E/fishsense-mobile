import 'dart:io';
import 'dart:typed_data';
import 'package:path_provider/path_provider.dart';
import 'package:path/path.dart';
import '../logger.dart';

/// Handles reading and writing photo files to local storage.
class FileStorageService {
  /// Save image bytes to the app documents directory.
  /// Returns the filename (not full path) on success, null on failure.
  static Future<String?> saveImage(
    Uint8List imageBytes, {
    String? customName,
  }) async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final timestamp = DateTime.now().millisecondsSinceEpoch;
      final fileName = customName ?? 'rgb_$timestamp.jpg';
      final filePath = join(directory.path, fileName);

      final file = File(filePath);
      await file.writeAsBytes(imageBytes);

      log.i('Photo saved: $filePath');
      return fileName;
    } catch (e) {
      log.e('Error saving photo', error: e);
      return null;
    }
  }

  /// Load image bytes from the app documents directory by filename.
  static Future<Uint8List?> loadImage(String fileName) async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final filePath = join(directory.path, fileName);
      final file = File(filePath);

      if (await file.exists()) {
        return await file.readAsBytes();
      }
      return null;
    } catch (e) {
      log.e('Error loading image', error: e);
      return null;
    }
  }

  /// Returns the app documents directory path.
  static Future<String> getDocumentsDirectory() async {
    final directory = await getApplicationDocumentsDirectory();
    return directory.path;
  }

  /// Delete a single image file by filename. Returns true if deleted.
  static Future<bool> deleteImage(String fileName) async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final filePath = join(directory.path, fileName);
      final file = File(filePath);

      if (await file.exists()) {
        await file.delete();
        return true;
      }
      return false;
    } catch (e) {
      log.e('Error deleting image', error: e);
      return false;
    }
  }

  /// Delete all saved photo files (files whose names start with `rgb_`).
  static Future<bool> deleteAllSavedPhotos() async {
    try {
      final directory = await getApplicationDocumentsDirectory();
      final dir = Directory(directory.path);

      await for (final entity in dir.list()) {
        if (entity is File && entity.path.contains('rgb_')) {
          await entity.delete();
        }
      }

      log.i('All saved photos deleted');
      return true;
    } catch (e) {
      log.e('Error deleting all photos', error: e);
      return false;
    }
  }
}
