# AVCam: Building a Camera App

Capture photos and record video using the front and rear iPhone and iPad cameras.

## Overview

The iOS Camera app allows you to capture photos and movies from both the front and rear cameras.

This sample code project, AVCam, shows you how to implement these capture features in your own camera app. It leverages basic functionality of the built-in front and rear iPhone and iPad cameras.

- Note: To use AVCam, you need an iOS device running iOS 17 or later. Because Xcode doesn’t have access to the device camera, this sample won't work in Simulator.


## Configure a Capture Session

[`AVCaptureSession`][1] accepts input data from capture devices like the camera and microphone. After receiving the input, `AVCaptureSession` marshals that data to appropriate outputs for processing, eventually resulting in a movie file or still photo. After configuring the capture session's inputs and outputs, you tell it to start—and later stop—capture.

``` swift
private let session = AVCaptureSession()
```

AVCam selects the rear camera by default and configures a camera capture session to stream content to a video preview view. `PreviewView` is a custom [`UIView`][2] subclass backed by an [`AVCaptureVideoPreviewLayer`][3]. AVFoundation doesn't have a `PreviewView` class, but the sample code creates one to facilitate session management.

The following diagram shows how the session manages input devices and capture output:

![A diagram of the AVCam app's architecture, including input devices and capture output in relation to the main capture session.][image-1]

Delegate any interaction with the `AVCaptureSession`—including its inputs and outputs—to a dedicated serial dispatch queue (`sessionQueue`), so that the interaction doesn't block the main queue. Perform any configuration involving changes to a session's topology or disruptions to its running video stream on a separate dispatch queue, because session configuration always blocks execution of other tasks until the queue processes the change. Similarly, the sample code dispatches other tasks—such as resuming an interrupted session, toggling capture modes, switching cameras, and writing media to a file—to the session queue, so that their processing doesn’t block or delay user interaction with the app.

In contrast, the code dispatches tasks that affect the UI (such as updating the preview view) to the main queue, because `AVCaptureVideoPreviewLayer`, a subclass of [`CALayer`][4], is the backing layer for the sample’s preview view. You must manipulate `UIView` subclasses on the main thread for them to show up in a timely, interactive fashion.

In `viewDidLoad`, AVCam creates a session and assigns it to the preview view:

``` swift
previewView.session = session
```

For more information about configuring image capture sessions, see [Setting Up a Capture Session][5].

## Request Authorization for Access to Input Devices

Once you configure the session, it is ready to accept input. Each [`AVCaptureDevice`][6]—whether a camera or a mic—requires the user to authorize access. AVFoundation enumerates the authorization state using [`AVAuthorizationStatus`][7], which informs the app whether the user has restricted or denied access to a capture device.

For more information about preparing your app's `Info.plist` for custom authorization requests, see [Requesting Authorization for Media Capture][8].


## Switch Between the Rear- and Front-Facing Cameras

The `changeCamera` method handles switching between cameras when the user taps a button in the UI. It uses a discovery session, which lists available device types in order of preference, and accepts the first device in its `devices` array. For example, the `videoDeviceDiscoverySession` in AVCam queries the device on which the app is running for available input devices. Furthermore, if a user's device has a broken camera, it won't be available in the `devices` array.

``` swift
switch currentPosition {
case .unspecified, .front:
    newVideoDevice = backVideoDeviceDiscoverySession.devices.first
    
case .back:
    if let externalCamera = externalVideoDeviceDiscoverySession.devices.first {
        newVideoDevice = externalCamera
    } else {
        newVideoDevice = frontVideoDeviceDiscoverySession.devices.first
    }
    
@unknown default:
    print("Unknown capture position. Defaulting to back, dual-camera.")
    newVideoDevice = AVCaptureDevice.default(.builtInDualCamera, for: .video, position: .back)
}
```

If the discovery session finds a camera in the proper position, it removes the previous input from the capture session and adds the new camera as an input.

``` swift
self.session.removeInput(self.videoDeviceInput)

if self.session.canAddInput(videoDeviceInput) {
    NotificationCenter.default.removeObserver(self, name: .AVCaptureDeviceSubjectAreaDidChange, object: currentVideoDevice)
    NotificationCenter.default.addObserver(self, selector: #selector(self.subjectAreaDidChange), name: .AVCaptureDeviceSubjectAreaDidChange, object: videoDeviceInput.device)
    
    self.session.addInput(videoDeviceInput)
    self.videoDeviceInput = videoDeviceInput
    
    if isUserSelection {
        AVCaptureDevice.userPreferredCamera = videoDevice
    }
    
    DispatchQueue.main.async {
        self.createDeviceRotationCoordinator()
    }
} else {
    self.session.addInput(self.videoDeviceInput)
}
```
[View in Source][9]

## Handle Interruptions and Errors

Interruptions such as phone calls, notifications from other apps, and music playback may occur during a capture session. Handle these interruptions by adding observers to listen for [`AVCaptureSessionWasInterruptedNotification`][10]:

``` swift
NotificationCenter.default.addObserver(self,
                                       selector: #selector(sessionWasInterrupted),
                                       name: .AVCaptureSessionWasInterrupted,
                                       object: session)
NotificationCenter.default.addObserver(self,
                                       selector: #selector(sessionInterruptionEnded),
                                       name: .AVCaptureSessionInterruptionEnded,
                                       object: session)
```
[View in Source][11]

When AVCam receives an interruption notification, it can pause or suspend the session with an option to resume activity when the interruption ends. AVCam registers `sessionWasInterrupted` as a handler for receiving notifications, to inform the user when there's an interruption to the capture session:

``` swift
if reason == .audioDeviceInUseByAnotherClient || reason == .videoDeviceInUseByAnotherClient {
    showResumeButton = true
} else if reason == .videoDeviceNotAvailableWithMultipleForegroundApps {
    // Fade-in a label to inform the user that the camera is
    // unavailable.
    cameraUnavailableLabel.alpha = 0
    cameraUnavailableLabel.isHidden = false
    UIView.animate(withDuration: 0.25) {
        self.cameraUnavailableLabel.alpha = 1
    }
} else if reason == .videoDeviceNotAvailableDueToSystemPressure {
    print("Session stopped running due to shutdown system pressure level.")
}
```
[View in Source][12]

The camera view controller observes [`AVCaptureSessionRuntimeError`][13] to receive a notification when an error occurs:

``` swift
NotificationCenter.default.addObserver(self,
                                       selector: #selector(sessionRuntimeError),
                                       name: .AVCaptureSessionRuntimeError,
                                       object: session)
```

When a runtime error occurs, restart the capture session:

``` swift
// If media services were reset, and the last start succeeded, restart
// the session.
if error.code == .mediaServicesWereReset {
    sessionQueue.async {
        if self.isSessionRunning {
            self.session.startRunning()
            self.isSessionRunning = self.session.isRunning
        } else {
            DispatchQueue.main.async {
                self.resumeButton.isHidden = false
            }
        }
    }
} else {
    resumeButton.isHidden = false
}
```
[View in Source][14]

## Capture a Photo

Taking a photo happens on the session queue. The process begins by updating the [`AVCapturePhotoOutput`][15] connection to match the video orientation of the video preview layer. This enables the camera to accurately capture what the user sees onscreen:

``` swift
if let photoOutputConnection = self.photoOutput.connection(with: .video) {
    photoOutputConnection.videoRotationAngle = videoRotationAngle
}
```

After aligning the outputs, AVCam proceeds to create [`AVCapturePhotoSettings`][16] to configure capture parameters such as focus, flash, and resolution:

``` swift
var photoSettings = AVCapturePhotoSettings()

// Capture HEIF photos when supported.
if self.photoOutput.availablePhotoCodecTypes.contains(AVVideoCodecType.hevc) {
    photoSettings = AVCapturePhotoSettings(format: [AVVideoCodecKey: AVVideoCodecType.hevc])
} else {
    photoSettings = AVCapturePhotoSettings()
}

// Set the flash to auto mode.
if self.videoDeviceInput.device.isFlashAvailable {
    photoSettings.flashMode = .auto
}

// Enable high-resolution photos.
photoSettings.maxPhotoDimensions = self.photoOutput.maxPhotoDimensions
if !photoSettings.availablePreviewPhotoPixelFormatTypes.isEmpty {
    photoSettings.previewPhotoFormat = [kCVPixelBufferPixelFormatTypeKey as String: photoSettings.__availablePreviewPhotoPixelFormatTypes.first!]
}
if self.livePhotoMode == .on && self.photoOutput.isLivePhotoCaptureSupported { // Live Photo Capture is not supported in movie mode.
    photoSettings.livePhotoMovieFileURL = livePhotoMovieUniqueTemporaryDirectoryFileURL()
}
photoSettings.photoQualityPrioritization = self.photoQualityPrioritizationMode
```

The sample uses a separate object, the `PhotoCaptureProcessor`, for the photo capture delegate to isolate each capture life cycle. This clear separation of capture cycles is necessary for Live Photos, where a single capture cycle may involve the capture of several frames.

Each time the user presses the central shutter button, AVCam captures a photo with the previously configured settings by calling [`capturePhotoWithSettings`][17]:

``` swift
self.photoOutput.capturePhoto(with: photoSettings, delegate: photoCaptureProcessor)

// Stop tracking the capture request because it's now destined for
// the photo output.
self.photoOutputReadinessCoordinator.stopTrackingCaptureRequest(using: photoSettings.uniqueID)
```
[View in Source][18]

The `capturePhoto` method accepts two parameters:

* An `AVCapturePhotoSettings` object that encapsulates the settings your user configures through the app, such as exposure, flash, focus, and torch.

* A delegate that conforms to the [`AVCapturePhotoCaptureDelegate`][19] protocol, to respond to subsequent callbacks that the system delivers during photo capture.

Once the app calls [`capturePhoto`][20], the process for starting photography is over. From that point forward, operations on that individual photo capture happens in delegate callbacks.

## Track Results Through a Photo Capture Delegate

The  method `capturePhoto` only begins the process of taking a photo. The rest of the process happens in delegate methods that the app implements.

![A timeline of delegate callbacks for still photo capture.][image-2]

- [`photoOutput(_:willBeginCaptureFor:)`][21] arrives first, as soon as you call `capturePhoto`. The resolved settings represent the actual settings that the camera will apply for the upcoming photo. AVCam uses this method only for behavior specific to Live Photos. AVCam tries to tell if the photo is a Live Photo by checking its [`livePhotoMovieDimensions`][22] size; if the photo is a Live Photo, AVCam increments a count to track Live Photos in progress:

``` swift
self.sessionQueue.async {
    if capturing {
        self.inProgressLivePhotoCapturesCount += 1
    } else {
        self.inProgressLivePhotoCapturesCount -= 1
    }
    
    let inProgressLivePhotoCapturesCount = self.inProgressLivePhotoCapturesCount
    DispatchQueue.main.async {
        if inProgressLivePhotoCapturesCount > 0 {
            self.capturingLivePhotoLabel.isHidden = false
        } else if inProgressLivePhotoCapturesCount == 0 {
            self.capturingLivePhotoLabel.isHidden = true
        } else {
            print("Error: In progress Live Photo capture count is less than 0.")
        }
    }
}
```
[View in Source][23]

- [`photoOutput(_:willCapturePhotoFor:)`][24] arrives right after the system plays the shutter sound. AVCam uses this opportunity to flash the screen, alerting to the user that the camera captured a photo. The sample code implements this flash by animating the preview view layer's `opacity` from `0` to `1`.

``` swift
// Flash the screen to signal that AVCam took a photo.
DispatchQueue.main.async {
    self.previewView.videoPreviewLayer.opacity = 0
    UIView.animate(withDuration: 0.25) {
        self.previewView.videoPreviewLayer.opacity = 1
    }
}
```
[View in Source][25]

- [`photoOutput(_:didFinishCaptureFor:error:)`][26] is the final callback, marking the end of capture for a single photo. AVCam cleans up its delegate and settings so they don't remain for subsequent photo captures:

``` swift
self.sessionQueue.async {
    self.inProgressPhotoCaptureDelegates[photoCaptureProcessor.requestedPhotoSettings.uniqueID] = nil
}
```
[View in Source][27]

You can apply other visual effects in this delegate method, such as animating a preview thumbnail of the captured photo.

For more information about tracking photo progress through delegate callbacks, see [`Tracking Photo Capture Progress`][28].

## Capture Live Photos

When you enable capture of Live Photos, the camera takes one still image and a short movie around the moment of capture. The app triggers Live Photo capture the same way as still photo capture: through a single call to `capturePhotoWithSettings`, where you pass the URL for the Live Photos short video through the [`livePhotoMovieFileURL`][29] property. You can enable Live Photos at the `AVCapturePhotoOutput` level, or you can configure Live Photos at the `AVCapturePhotoSettings` level on a per-capture basis.

Because Live Photo capture creates a short movie file, AVCam must express where to save the movie file as a URL. Also, because Live Photo captures can overlap, the code must keep track of the number of in-progress Live Photo captures to ensure that the Live Photo label stays visible during these captures. The `photoOutput(_:willBeginCaptureFor:)` delegate method in the previous section implements this tracking counter.

![A timeline of delegate callbacks for Live Photo capture.][image-3]

- [`photoOutput(_:didFinishRecordingLivePhotoMovieForEventualFileAt:resolvedSettings:)`][30] fires when recording of the short movie ends. AVCam dismisses the Live badge here. Because the camera has finished recording the short movie, AVCam executes the Live Photo handler decrementing the completion counter:

``` swift
livePhotoCaptureHandler(false)
```
[View in Source][31]

- [`photoOutput(_:didFinishProcessingLivePhotoToMovieFileAt:duration:photoDisplayTime:resolvedSettings:error:)`][32] fires last, indicating that the movie is fully written to disk and is ready for consumption. AVCam uses this opportunity to display any capture errors and redirect the saved file URL to its final output location:

``` swift
if error != nil {
    print("Error processing Live Photo companion movie: \(String(describing: error))")
    return
}
livePhotoCompanionMovieURL = outputFileURL
```
[View in Source][33]

For more information about incorporating Live Photo capture into your app, see [Capturing Still and Live Photos][34].

## Save Photos to the User’s Photo Library

Before you can save an image or movie to the user's photo library, you must first request access to that library. The process for requesting write authorization mirrors capture device authorization: show an alert with text that you provide in the `Info.plist`.

AVCam checks for authorization in the ['captureOutput:didFinishRecordingToOutputFileAtURL:fromConnections'][35] callback method, which is where the `AVCaptureOutput` provides media data to save as output.

```
PHPhotoLibrary.requestAuthorization { status in
```

For more information about requesting access to the user's photo library, see [Delivering a Great Privacy Experience in Your Photos App][36].

## Record Movie Files

AVCam supports video capture by querying and adding input devices with the `.video` qualifier. The app defaults to the rear dual camera, but, if the device doesn't have a dual camera, the app defaults to the wide-angle camera.

``` swift
var defaultVideoDevice: AVCaptureDevice? = AVCaptureDevice.systemPreferredCamera

let userDefaults = UserDefaults.standard
if !userDefaults.bool(forKey: "setInitialUserPreferredCamera") || defaultVideoDevice == nil {
    let backVideoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.builtInDualCamera, .builtInWideAngleCamera],
                                                                           mediaType: .video, position: .back)
    
    defaultVideoDevice = backVideoDeviceDiscoverySession.devices.first
    
    AVCaptureDevice.userPreferredCamera = defaultVideoDevice
    
    userDefaults.set(true, forKey: "setInitialUserPreferredCamera")
}
```

Instead of passing settings to the system as with still photography, pass an output URL like in Live Photos. The delegate callbacks provide the same URL, so your app doesn’t need to store it in an intermediate variable.

Once the user taps Record to begin capture, AVCam calls [`startRecording`][37]:

``` swift
movieFileOutput.startRecording(to: URL(fileURLWithPath: outputFilePath), recordingDelegate: self)
```

Just like `capturePhoto` triggered delegate callbacks for still capture, `startRecording` triggers a series of delegate callbacks for movie recording.

![A timeline of delegate callbacks for movie recording.][image-4]

Track the progress of the movie recording through the delegate callback chain. Instead of implementing `AVCapturePhotoCaptureDelegate`, implement [`AVCaptureFileOutputRecordingDelegate`][38]. Because the movie-recording delegate callbacks require interaction with the capture session, AVCam makes `CameraViewController` the delegate instead of creating a separate delegate object.

- [`fileOutput(_:didStartRecordingTo:from:)`][39] fires when the file output starts writing data to a file. AVCam uses this opportunity to change the Record button to a Stop button:

``` swift
DispatchQueue.main.async {
    self.recordButton.isEnabled = true
    self.recordButton.setImage(#imageLiteral(resourceName: "CaptureStop"), for: [])
}
```
[View in Source][40]

- [`fileOutput(_:didFinishRecordingTo:from:error:)`][41] fires last, indicating that the movie is fully written to disk and is ready for consumption. AVCam takes this chance to move the temporarily saved movie from the given URL to the user’s photo library or the app’s documents folder:

``` swift
              PHPhotoLibrary.shared().performChanges({
                  let options = PHAssetResourceCreationOptions()
                  options.shouldMoveFile = true
                  let creationRequest = PHAssetCreationRequest.forAsset()
                  creationRequest.addResource(with: .video, fileURL: outputFileURL, options: options)

// Specify the movie's location.
creationRequest.location = self.locationManager.location
              }, completionHandler: { success, error in
                  if !success {
                      print("AVCam couldn't save the movie to your photo library: \(String(describing: error))")
                  }
                  cleanup()
              })
```
[View in Source][42]

In the event that AVCam goes into the background—such as when the user accepts an incoming phone call—the app must ask permission from the user to continue recording. AVCam requests time from the system to perform this saving through a background task. This background task ensures that there is enough time to write the file to the photo library, even when AVCam recedes to the background. To conclude background execution, AVCam calls [`endBackgroundTask`][43] in  [`didFinishRecordingTo`][44] after saving the recorded file.

``` swift
self.backgroundRecordingID = UIApplication.shared.beginBackgroundTask(expirationHandler: nil)
```

## Take Photos While Recording a Movie

Like the iOS Camera app, AVCam can take photos while also capturing a movie. AVCam captures such photos at the same resolution as the video.

``` swift
let movieFileOutput = AVCaptureMovieFileOutput()

if self.session.canAddOutput(movieFileOutput) {
    self.session.beginConfiguration()
    self.session.addOutput(movieFileOutput)
    self.session.sessionPreset = .high
    
    self.selectedMovieMode10BitDeviceFormat = self.tenBitVariantOfFormat(activeFormat: self.videoDeviceInput.device.activeFormat)
    
    if self.selectedMovieMode10BitDeviceFormat != nil {
        DispatchQueue.main.async {
            self.HDRVideoModeButton.isHidden = false
            self.HDRVideoModeButton.isEnabled = true
        }
        
        if self.HDRVideoMode == .on {
            do {
                try self.videoDeviceInput.device.lockForConfiguration()
                self.videoDeviceInput.device.activeFormat = self.selectedMovieMode10BitDeviceFormat!
                print("Setting 'x420' format \(String(describing: self.selectedMovieMode10BitDeviceFormat)) for video recording")
                self.videoDeviceInput.device.unlockForConfiguration()
            } catch {
                print("Could not lock device for configuration: \(error)")
            }
        }
    }
    
    if let connection = movieFileOutput.connection(with: .video) {
        if connection.isVideoStabilizationSupported {
            connection.preferredVideoStabilizationMode = .auto
        }
    }
    self.session.commitConfiguration()
    
    DispatchQueue.main.async {
        captureModeControl.isEnabled = true
    }
    
    self.movieFileOutput = movieFileOutput
    
    DispatchQueue.main.async {
        self.recordButton.isEnabled = true
        
        // For photo captures during movie recording, Balanced
        // quality photo processing is prioritized to get high
        // quality stills and avoid frame drops during
        // recording.
        self.photoQualityPrioritizationSegControl.selectedSegmentIndex = 1
        self.photoQualityPrioritizationSegControl.sendActions(for: UIControl.Event.valueChanged)
    }
}
```

[1]:	https://developer.apple.com/documentation/avfoundation/avcapturesession
[2]:	https://developer.apple.com/documentation/uikit/uiview
[3]:	https://developer.apple.com/documentation/avfoundation/avcapturevideopreviewlayer
[4]:	https://developer.apple.com/documentation/quartzcore/calayer
[5]:	https://developer.apple.com/documentation/avfoundation/capture_setup/setting_up_a_capture_session
[6]:	https://developer.apple.com/documentation/avfoundation/avcapturedevice
[7]:	https://developer.apple.com/documentation/avfoundation/avauthorizationstatus
[8]:	https://developer.apple.com/documentation/avfoundation/capture_setup/requesting_authorization_to_capture_and_save_media
[9]:	x-source-tag://ChangeCamera
[10]:	https://developer.apple.com/documentation/avfoundation/avcapturesessionwasinterruptednotification
[11]:	x-source-tag://ObserveInterruption
[12]:	x-source-tag://HandleInterruption
[13]:	AVCaptureSessionRuntimeError
[14]:	x-source-tag://HandleRuntimeError
[15]:	(https://developer.apple.com/documentation/avfoundation/avcapturephotooutput)
[16]:	https://developer.apple.com/documentation/avfoundation/avcapturephotosettings
[17]:	https://developer.apple.com/documentation/avfoundation/avcapturephotooutput/1648765-capturephotowithsettings
[18]:	x-source-tag://CapturePhoto
[19]:	https://developer.apple.com/documentation/avfoundation/avcapturephotocapturedelegate
[20]:	https://developer.apple.com/documentation/avfoundation/avcapturephotooutput/1648765-capturephoto
[21]:	https://developer.apple.com/documentation/avfoundation/avcapturephotocapturedelegate/1778621-photooutput
[22]:	https://developer.apple.com/documentation/avfoundation/avcaptureresolvedphotosettings/1648781-livephotomoviedimensions
[23]:	x-source-tag://WillBeginCapture
[24]:	https://developer.apple.com/documentation/avfoundation/avcapturephotocapturedelegate/1778625-photooutput
[25]:	x-source-tag://WillCapturePhoto
[26]:	https://developer.apple.com/documentation/avfoundation/avcapturephotocapturedelegate/1778618-photooutput
[27]:	x-source-tag://DidFinishCapture
[28]:	https://developer.apple.com/documentation/avfoundation/photo_capture/capturing_still_and_live_photos/tracking_photo_capture_progress
[29]:	https://developer.apple.com/documentation/avfoundation/avcapturephotosettings/1648681-livephotomoviefileurl
[30]:	https://developer.apple.com/documentation/avfoundation/avcapturephotocapturedelegate/1778658-photooutput
[31]:	x-source-tag://DidFinishRecordingLive
[32]:	https://developer.apple.com/documentation/avfoundation/avcapturephotocapturedelegate/1778637-photooutput
[33]:	x-source-tag://DidFinishProcessingLive
[34]:	https://developer.apple.com/documentation/avfoundation/photo_capture/capturing_still_and_live_photos
[35]:	https://developer.apple.com/documentation/avfoundation/avcapturefileoutputrecordingdelegate/1390612-captureoutput
[36]:	https://developer.apple.com/documentation/photokit/delivering_an_enhanced_privacy_experience_in_your_photos_app
[37]:	https://developer.apple.com/documentation/avfoundation/avcapturefileoutput/1387224-startrecording
[38]:	https://developer.apple.com/documentation/avfoundation/avcapturefileoutputrecordingdelegate
[39]:	https://developer.apple.com/documentation/avfoundation/avcapturefileoutputrecordingdelegate/1387301-fileoutput
[40]:	x-source-tag://DidStartRecording
[41]:	https://developer.apple.com/documentation/avfoundation/avcapturefileoutputrecordingdelegate/1390612-fileoutput
[42]:	x-source-tag://DidFinishRecording
[43]:	https://developer.apple.com/documentation/uikit/uiapplication/1622970-endbackgroundtask
[44]:	https://developer.apple.com/documentation/avfoundation/avcapturefileoutputrecordingdelegate/1390612-fileoutput

[image-1]:	Documentation/AVCamBlocks.png
[image-2]:	Documentation/AVTimelineStill.png
[image-3]:	Documentation/AVTimelineLive.png
[image-4]:	Documentation/AVTimelineMovie.png
