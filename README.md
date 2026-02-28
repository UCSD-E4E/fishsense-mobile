# FishSense Mobile App

FishSense is a cross-platform mobile app for taking images and measuring fish length using iPhone LiDAR technology, now available on both iOS and Android platforms.

## Overview

To monitor fish population health, marine scientists measure fish length from head to tail. Averaging these lengths across a large sample provides valuable insights. Traditional methods involve hand-measuring fish out of water, which is inefficient, error-prone, and potentially harmful to the fish. Alternative methods, like underwater eyeball measurements, also pose challenges to accuracy and efficiency.

Our goal is to expedite this process with a mobile app that uses iPhone LIDAR hardware to measure fish length from a quick photo taken on a clear board. This method is faster, simpler, and minimizes the time fish spend out of water, increasing their survival chances. Additionally, users can easily save collected data, and the app reduces human error by automating data collection.

This project represents a successful migration from the original iOS-only Swift application to a cross-platform Flutter/Dart framework, maintaining LiDAR measurement accuracy (±2cm) while extending support to Android devices.

## Features

- Take images with cross-platform camera integration.
- View images taken in a photo gallery with metadata display.
- Select two points on the camera and get an estimated length measurement using LiDAR.
- Cross-platform compatibility (iOS and Android).
- Local SQLite database storage with cloud sync capabilities.
- [Watch demo video](https://youtube.com/shorts/he1tru-qiu0?feature=share)

## Repository Organization

The project is organized into several main directories:

- `/lib`: Flutter/Dart application code
  - `/lib/main.dart`: App entry point with tab navigation and app initialization.
  - `/lib/camera_screen.dart`: Cross-platform camera interface with native ARKit integration for iOS.
  - `/lib/photo_gallery_screen.dart`: Photo gallery with grid display and metadata management.
  - `/lib/services.dart`: Platform services including camera, file storage, and cloud sync.
  - `/lib/database.dart`: SQLite database operations for photo and measurement data.
  - `/lib/models.dart`: Data models (PhotoModel, DataTemp, ComputeLengthResult, etc.).
  - `/lib/services/arkit_service.dart`: Flutter-ARKit bridge service for LiDAR functionality.
- `/ios`: Native iOS platform configuration
  - `/ios/Runner/AppDelegate.swift`: iOS app delegate with Flutter method channel setup.
  - `/ios/Runner/ARViewPlatformView.swift`: Native ARKit platform view for Flutter integration.
  - `/ios/Runner/Info.plist`: iOS permissions and capabilities configuration.
- `/android`: Native Android platform configuration
  - `/android/app/src/main/kotlin/.../MainActivity.kt`: Android app entry point with plugin registration.
  - `/android/app/src/main/kotlin/.../FishSensePlugin.kt`: Android platform channel implementation.
  - `/android/app/build.gradle`: Android build configuration with native library support.
- `/rust-bridge`: Rust ML pipeline integration (preserved from original)
  - Contains Rust bridge components, ML computation source files, and native library configurations.

## Installation

You can build and run the app from the source code by following these steps:

1. **Set up Flutter development environment:**
   - Install Flutter SDK: https://flutter.dev/docs/get-started/install
   - Install platform-specific tools (Xcode for iOS, Android Studio for Android)

2. **Clone this repository:** https://github.com/UCSD-E4E/fishsense-mobile

3. **Install Flutter dependencies:**
   ```bash
   flutter pub get
   ```

4. **Build Rust native libraries:**
   ```bash
   cd rust-bridge
   make
   ```

### Apple Signing Setup (Per Developer)

This repository is configured so each developer can use a personal Apple Developer account without committing signing changes.

1. Copy example files:
  ```bash
  cp ios/Flutter/DeveloperSettings.example.xcconfig ios/Flutter/DeveloperSettings.xcconfig
  cp macos/Runner/Configs/DeveloperSettings.example.xcconfig macos/Runner/Configs/DeveloperSettings.xcconfig
  ```
2. Open both copied files and set `PERSONAL_DEVELOPMENT_TEAM` to your Apple Team ID.
3. (Optional) Change `FISHSENSE_BUNDLE_IDENTIFIER` if your account requires a unique bundle id.
4. Open `ios/Runner.xcworkspace` in Xcode once and confirm your Apple ID is signed in under Xcode Accounts.
5. Build/run as usual (`flutter run` or Xcode Run).

`DeveloperSettings.xcconfig` files are git-ignored, so personal signing values stay local.

5. **Run the application:**
 `flutter run`

## Usage

Once installed, follow these steps to use FishSense:

1. Open the app on your mobile device.
2. Navigate to the Camera tab to access the camera interface.
3. Tap the shutter button to take a new image with depth data.
4. The app will automatically process the image and display length measurements.
5. Tap the "Photos" tab to view the photo gallery.
6. Tap on any image in the gallery to see detailed information and measurements.
7. Use the upload feature to sync data to the cloud when available.

## Contributing

If you'd like to contribute to FishSense, please follow these guidelines:

* First contact our development team regarding adding new code or extending the current implementation.
* Fork the repository and create a new separate branch for your work.
* Make your changes and submit a pull request with a clear description of the changes.
* Ensure your code follows the project's coding style and conventions.
* Test your changes on both iOS and Android platforms when applicable.

## Dependencies

This project depends on:
- Flutter SDK and Dart
- Rust toolchain for ML pipeline compilation
- Platform-specific dependencies:
  - iOS: Xcode, ARKit framework
  - Android: Android SDK, NDK for native libraries

## Documentation

- Project Specification: Our initial plan for the project migration and cross-platform development.
- Migration Report: Documentation of the iOS to Flutter/Dart migration process and technical decisions.
- Platform Integration Guide: Technical documentation for native platform view integration.

## Contact

For questions, feedback, or support, please email Christopher Crutchfield and refer to the E4E FishSense Site for more information.

## Credits

* Developers: Kyle Tran, Will Hsu, Harish Vasanth, Darren Li, Christopher Crutchfield, Brendon Mwamba
* Advisor: Ryan Kastner, Christopher Crutchfield