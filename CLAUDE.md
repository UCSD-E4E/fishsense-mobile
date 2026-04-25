# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

FishSense Mobile is a cross-platform Flutter app (iOS primary, Android future) for measuring fish length using LiDAR depth data. It migrates a Swift-only app to Flutter, preserving the LiDAR-based measurement pipeline.

## Commands

### Flutter
```bash
flutter pub get          # Install dependencies
flutter analyze          # Lint/static analysis
flutter test             # Run all tests
flutter test test/models_test.dart  # Run a specific test file
flutter run              # Run on connected device/simulator
flutter build ios --release --no-codesign  # Build iOS without signing
```

### Rust Bridge
```bash
cd rust-bridge
make          # Full build (iOS xcframeworks)
make ios      # Build iOS binaries only
make clean    # Clean build artifacts
make clean-all  # Clean everything including third-party libs

# Run Rust unit tests (host target, no iOS cross-compilation required)
cargo test
cargo test <test_name>  # Run a specific test
```

### iOS (CocoaPods / Fastlane)
```bash
cd ios
pod install                          # Install CocoaPods dependencies
bundle install                       # Install Fastlane gems
bundle exec fastlane sync_code_signing  # Fetch certificates via Match
bundle exec fastlane beta            # Build + upload to TestFlight
```

> **Note**: Rust bridge must be built before `flutter build ios`. Apple signing uses per-developer `DeveloperSettings.xcconfig` files (git-ignored).

## Architecture

### Layers
```
Flutter UI (Dart)
    ↕ MethodChannel('fishsense_native')
iOS ARKit / Android Camera  ←→  Rust ML Pipeline
    ↕                               ↕
SQLite (sqflite)            OpenCV + ONNX Runtime
```

### Flutter ↔ Rust FFI
- Dart calls `RustService.computeLength()` via `MethodChannel('fishsense_native')`
- Rust (`rust-bridge/src/lib.rs`) receives raw RGB bytes, depth map, and camera intrinsics
- Runs segmentation → head/tail detection → length calculation via `fishsense.rs` crate
- Returns `ComputeLengthResult` with fish length, head/tail coordinates

### Flutter ↔ iOS Native
- `ARViewPlatformView.swift` renders the live ARKit camera view as a Flutter platform view
- Platform channel calls capture RGB (JPEG + raw bytes), depth map, confidence map, and camera intrinsics from ARKit

### Data Flow (Capture → Measurement)
1. User taps capture → `CameraService.capturePhotoWithDepth()`
2. iOS native returns RGB + depth + confidence + intrinsics via platform channel
3. Dart saves RGB image to local file, stores depth as BLOB in SQLite
4. Dart calls `RustService.computeLength()` with raw data
5. Rust pipeline returns measurement → saved to SQLite

### Key Files
| File | Purpose |
|------|---------|
| [lib/main.dart](lib/main.dart) | App entry, tab navigation, `AppStateProvider` (ChangeNotifier) |
| [lib/camera_screen.dart](lib/camera_screen.dart) | Camera UI with measurement overlay |
| [lib/services.dart](lib/services.dart) | `RustService` (ML calls), `CameraService`, `FileService` |
| [lib/database.dart](lib/database.dart) | SQLite schema and operations |
| [lib/models.dart](lib/models.dart) | `PhotoModel`, `ComputeLengthResult`, `Coordinate`, `ByteMatrixModel` |
| [rust-bridge/src/lib.rs](rust-bridge/src/lib.rs) | Fish length computation (OpenCV + ONNX) |
| [ios/Runner/AppDelegate.swift](ios/Runner/AppDelegate.swift) | Flutter setup, method channel registration |
| [ios/Runner/ARViewPlatformView.swift](ios/Runner/ARViewPlatformView.swift) | ARKit UIView integration |

### SQLite Schema
```
photos (id, utc_unix_timestamp, rgb_path, depth_bytes BLOB, depth_width, depth_height,
        confidence_bytes BLOB, confidence_width, confidence_height, device_info, fish_length REAL)
```

### Rust Targets
Toolchain pinned to 1.91. Targets: `aarch64-apple-ios`, `aarch64-apple-ios-sim`, `x86_64-apple-ios`, `aarch64-apple-darwin`, `x86_64-apple-darwin`.

## CI/CD
GitHub Actions on macOS 15. Pipeline: `flutter pub get` → `cd rust-bridge && make` → `pod install` → `flutter build ios --release --no-codesign`. On `main` branch only: Fastlane uploads to TestFlight.
