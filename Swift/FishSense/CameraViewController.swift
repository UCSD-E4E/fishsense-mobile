/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
The app's primary view controller that presents the camera interface.
*/

import UIKit
import AVFoundation
import CoreLocation
import Photos

class CameraViewController: UIViewController, AVCapturePhotoOutputReadinessCoordinatorDelegate {
    
    let locationManager = CLLocationManager()
    
    // This method is called after the view controller has loaded its view hierarchy into memory
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Disable the UI. Enable the UI later, if and only if the session starts running.
        photoButton.isEnabled = false
        
        // Set up the video preview view.
        previewView.session = session
        previewLayer = AVCaptureVideoPreviewLayer(session: session)
        previewLayer.videoGravity = .resizeAspectFill
        previewView.layer.addSublayer(previewLayer)

        // Adjust the frame of the preview layer to cover the entire preview view
        previewLayer.frame = previewView.bounds
        
        // Define the height of the top and bottom borders
        let topborderHeight: CGFloat = 60
        let botborderHeight: CGFloat = 240

        let topBorderView = UIView(frame: CGRect(x: 0, y: 0, width: previewView.frame.width, height: topborderHeight))
        topBorderView.backgroundColor = UIColor.black.withAlphaComponent(0.5) // Adjust alpha as needed

        let bottomBorderView = UIView(frame: CGRect(x: 0, y: previewView.frame.height - botborderHeight, width: previewView.frame.width, height: botborderHeight))
        bottomBorderView.backgroundColor = UIColor.black.withAlphaComponent(0.5) // Adjust alpha as needed

        // Add the top and bottom border views as subviews of the previewView
        previewView.addSubview(topBorderView)
        previewView.addSubview(bottomBorderView)

        let pinchRecognizer = UIPinchGestureRecognizer(target: self, action:#selector(pinch(_:)))
        self.previewView.addGestureRecognizer(pinchRecognizer)

        // Request location authorization so photos and videos can be tagged with their location.
        if locationManager.authorizationStatus == .notDetermined {
            locationManager.requestWhenInUseAuthorization()
        }
        
        // Check the video authorization status. Video access is required and audio access is optional.
        switch AVCaptureDevice.authorizationStatus(for: .video) {
        case .authorized: break
        case .notDetermined:
            sessionQueue.suspend()
            AVCaptureDevice.requestAccess(for: .video, completionHandler: { granted in
                if !granted {
                    self.setupResult = .notAuthorized
                }
                self.sessionQueue.resume()
            })
        default:
            setupResult = .notAuthorized
        }
        
        // Setup the capture session.
        sessionQueue.async {
            self.configureSession()
        }
    }
    
    let minimumZoom: CGFloat = 1.0
    let maximumZoom: CGFloat = 2.0
    var lastZoomFactor: CGFloat = 1.0
    
    @objc func pinch(_ pinch: UIPinchGestureRecognizer) {
             let device = videoDeviceInput.device
       
             // Return zoom value between the minimum and maximum zoom values
             func minMaxZoom(_ factor: CGFloat) -> CGFloat {
                   return min(min(max(factor, minimumZoom), maximumZoom), device.activeFormat.videoMaxZoomFactor)
             }
       
             func update(scale factor: CGFloat) {
                  do {
                        try device.lockForConfiguration()
                        defer { device.unlockForConfiguration() }
                        device.videoZoomFactor = factor
                     } catch {
                        print("\(error.localizedDescription)")
                     }
             }
       
             let newScaleFactor = minMaxZoom(pinch.scale * lastZoomFactor)
       
             switch pinch.state {
                   case .began: fallthrough
                   case .changed: update(scale: newScaleFactor)
                   case .ended:
                       lastZoomFactor = minMaxZoom(newScaleFactor)
                       update(scale: lastZoomFactor)
                   default: break
                   
              }
     }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        sessionQueue.async {
            switch self.setupResult {
            case .success:
                // Only setup observers and start the session if setup
                // succeeded.
                self.addObservers()
                self.session.startRunning()
                self.isSessionRunning = self.session.isRunning
                
            case .notAuthorized:
                DispatchQueue.main.async {
                    let changePrivacySetting = "AVCam doesn't have permission to use the camera, please change privacy settings"
                    let message = NSLocalizedString(changePrivacySetting, comment: "Alert message when the user has denied access to the camera")
                    let alertController = UIAlertController(title: "AVCam", message: message, preferredStyle: .alert)
                    
                    alertController.addAction(UIAlertAction(title: NSLocalizedString("OK", comment: "Alert OK button"),
                                                            style: .cancel,
                                                            handler: nil))
                    
                    alertController.addAction(UIAlertAction(title: NSLocalizedString("Settings", comment: "Alert button to open Settings"),
                                                            style: .`default`,
                                                            handler: { _ in
                                                                UIApplication.shared.open(URL(string: UIApplication.openSettingsURLString)!,
                                                                                          options: [:],
                                                                                          completionHandler: nil)
                    }))
                    
                    self.present(alertController, animated: true, completion: nil)
                }
                
            case .configurationFailed:
                DispatchQueue.main.async {
                    let alertMsg = "Alert message when something goes wrong during capture session configuration"
                    let message = NSLocalizedString("Unable to capture media", comment: alertMsg)
                    let alertController = UIAlertController(title: "AVCam", message: message, preferredStyle: .alert)
                    
                    alertController.addAction(UIAlertAction(title: NSLocalizedString("OK", comment: "Alert OK button"),
                                                            style: .cancel,
                                                            handler: nil))
                    
                    self.present(alertController, animated: true, completion: nil)
                }
            }
        }
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        sessionQueue.async {
            if self.setupResult == .success {
                self.session.stopRunning()
                self.isSessionRunning = self.session.isRunning
                self.removeObservers()
            }
        }
        
        super.viewWillDisappear(animated)
    }
    
    override var shouldAutorotate: Bool {
        // Disable autorotation of the interface when recording is in progress.
        if let movieFileOutput = movieFileOutput {
            return !movieFileOutput.isRecording
        }
        return true
    }
    
    // MARK: Session Management
    
    private enum SessionSetupResult {
        case success
        case notAuthorized
        case configurationFailed
    }
    
    private let session = AVCaptureSession()
    private var isSessionRunning = false
    
    // Communicate with the session and other session objects on this queue.
    private let sessionQueue = DispatchQueue(label: "session queue")
    
    private var setupResult: SessionSetupResult = .success
    
    @objc dynamic var videoDeviceInput: AVCaptureDeviceInput!
    
    @IBOutlet private weak var previewView: PreviewView!
    
    private var previewLayer: AVCaptureVideoPreviewLayer!
    
    // Call this on the session queue.
    /// - Tag: ConfigureSession
    private func configureSession() {
        if setupResult != .success {
            return
        }
        
        session.beginConfiguration()
        
        // Do not create an AVCaptureMovieFileOutput when setting up the session
        // because Live Photo is not supported when AVCaptureMovieFileOutput is
        // added to the session.
        session.sessionPreset = .photo
        
        // Add video input.
        do {
            // Handle the situation when the system-preferred camera is nil.
            var defaultVideoDevice: AVCaptureDevice? = AVCaptureDevice.systemPreferredCamera
            
            let userDefaults = UserDefaults.standard
            if !userDefaults.bool(forKey: "setInitialUserPreferredCamera") || defaultVideoDevice == nil {
                let backVideoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.builtInDualCamera, .builtInWideAngleCamera],
                                                                                       mediaType: .video, position: .back)
                
                defaultVideoDevice = backVideoDeviceDiscoverySession.devices.first
                
                AVCaptureDevice.userPreferredCamera = defaultVideoDevice
                
                userDefaults.set(true, forKey: "setInitialUserPreferredCamera")
            }
            guard let videoDevice = defaultVideoDevice else {
                print("Default video device is unavailable.")
                setupResult = .configurationFailed
                session.commitConfiguration()
                return
            }
            let videoDeviceInput = try AVCaptureDeviceInput(device: videoDevice)
            
            AVCaptureDevice.self.addObserver(self, forKeyPath: "systemPreferredCamera", options: [.new], context: &systemPreferredCameraContext)
            
            if session.canAddInput(videoDeviceInput) {
                session.addInput(videoDeviceInput)
                self.videoDeviceInput = videoDeviceInput
                
                DispatchQueue.main.async {
                    // Dispatch video streaming to the main queue because
                    // AVCaptureVideoPreviewLayer is the backing layer for
                    // PreviewView. You can manipulate UIView only on the main
                    // thread. Note: As an exception to the above rule, it's not
                    // necessary to serialize video orientation changes on the
                    // AVCaptureVideoPreviewLayer’s connection with other
                    // session manipulation.
                    self.createDeviceRotationCoordinator()
                }
            } else {
                print("Couldn't add video device input to the session.")
                setupResult = .configurationFailed
                session.commitConfiguration()
                return
            }
        } catch {
            print("Couldn't create video device input: \(error)")
            setupResult = .configurationFailed
            session.commitConfiguration()
            return
        }
        
        // Add an audio input device.
        do {
            let audioDevice = AVCaptureDevice.default(for: .audio)
            let audioDeviceInput = try AVCaptureDeviceInput(device: audioDevice!)
            
            if session.canAddInput(audioDeviceInput) {
                session.addInput(audioDeviceInput)
            } else {
                print("Could not add audio device input to the session")
            }
        } catch {
            print("Could not create audio device input: \(error)")
        }
        
        // Add the photo output.
        if session.canAddOutput(photoOutput) {
            session.addOutput(photoOutput)
            
            photoOutput.isLivePhotoCaptureEnabled = photoOutput.isLivePhotoCaptureSupported
            
            self.configurePhotoOutput()
            
            let readinessCoordinator = AVCapturePhotoOutputReadinessCoordinator(photoOutput: photoOutput)
            DispatchQueue.main.async {
                self.photoOutputReadinessCoordinator = readinessCoordinator
                readinessCoordinator.delegate = self
            }
            
        } else {
            print("Could not add photo output to the session")
            setupResult = .configurationFailed
            session.commitConfiguration()
            return
        }
        
        session.commitConfiguration()
    }
    
    @IBAction private func resumeInterruptedSession(_ resumeButton: UIButton) {
        sessionQueue.async {
            // The session might fail to start running, for example, if a phone
            // or FaceTime call is still using audio or video. This failure is
            // communicated by the session posting a runtime error notification.
            // To avoid repeatedly failing to start the session, only try to
            // restart the session in the error handler if you aren't trying to
            // resume the session.
            self.session.startRunning()
            self.isSessionRunning = self.session.isRunning
            if !self.session.isRunning {
                DispatchQueue.main.async {
                    let message = NSLocalizedString("Unable to resume", comment: "Alert message when unable to resume the session running")
                    let alertController = UIAlertController(title: "AVCam", message: message, preferredStyle: .alert)
                    let cancelAction = UIAlertAction(title: NSLocalizedString("OK", comment: "Alert OK button"), style: .cancel, handler: nil)
                    alertController.addAction(cancelAction)
                    self.present(alertController, animated: true, completion: nil)
                }
            } else {
                DispatchQueue.main.async {
                    self.resumeButton.isHidden = true
                }
            }
        }
    }
    
    private enum CaptureMode: Int {
        case photo = 0
        case movie = 1
    }
    
    private func configurePhotoOutput() {
        let supportedMaxPhotoDimensions = self.videoDeviceInput.device.activeFormat.supportedMaxPhotoDimensions
        let largestDimesnion = supportedMaxPhotoDimensions.last
        self.photoOutput.maxPhotoDimensions = largestDimesnion!
        self.photoOutput.isLivePhotoCaptureEnabled = self.photoOutput.isLivePhotoCaptureSupported
        self.photoOutput.isResponsiveCaptureEnabled = self.photoOutput.isResponsiveCaptureSupported
        self.photoOutput.isFastCapturePrioritizationEnabled = self.photoOutput.isFastCapturePrioritizationSupported
        self.photoOutput.isDepthDataDeliveryEnabled = true
        
        let photoSettings = self.setUpPhotoSettings()
        DispatchQueue.main.async {
            self.photoSettings = photoSettings
        }
    }
    
    // MARK: Device Configuration
    
    @IBOutlet private weak var cameraUnavailableLabel: UILabel!
    
    private let videoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.builtInWideAngleCamera, .builtInDualCamera, .builtInTrueDepthCamera], mediaType: .video, position: .unspecified)

    private var videoDeviceRotationCoordinator: AVCaptureDevice.RotationCoordinator!
    
    private var videoDeviceIsConnectedObservation: NSKeyValueObservation?
    
    // MARK: Readiness Coordinator
    
    func readinessCoordinator(_ coordinator: AVCapturePhotoOutputReadinessCoordinator, captureReadinessDidChange captureReadiness: AVCapturePhotoOutput.CaptureReadiness) {
        // Enable user interaction for the shutter button only when the output
        // is ready to capture.
        self.photoButton.isUserInteractionEnabled = (captureReadiness == .ready) ? true : false
        
        // Note: You can customize the shutter button's appearance based on
        // `captureReadiness`.
    }
    
    private var videoRotationAngleForHorizonLevelPreviewObservation: NSKeyValueObservation?
    
    private func createDeviceRotationCoordinator() {
        videoDeviceRotationCoordinator = AVCaptureDevice.RotationCoordinator(device: videoDeviceInput.device, previewLayer: previewView.videoPreviewLayer)
        previewView.videoPreviewLayer.connection?.videoRotationAngle = videoDeviceRotationCoordinator.videoRotationAngleForHorizonLevelPreview
        
        videoRotationAngleForHorizonLevelPreviewObservation = videoDeviceRotationCoordinator.observe(\.videoRotationAngleForHorizonLevelPreview, options: .new) { _, change in
            guard let videoRotationAngleForHorizonLevelPreview = change.newValue else { return }
            
            self.previewView.videoPreviewLayer.connection?.videoRotationAngle = videoRotationAngleForHorizonLevelPreview
        }
    }
    
    @IBAction private func focusAndExposeTap(_ gestureRecognizer: UITapGestureRecognizer) {
        let devicePoint = previewView.videoPreviewLayer.captureDevicePointConverted(fromLayerPoint: gestureRecognizer.location(in: gestureRecognizer.view))
        focus(with: .autoFocus, exposureMode: .autoExpose, at: devicePoint, monitorSubjectAreaChange: true)
    }
    
    private func focus(with focusMode: AVCaptureDevice.FocusMode,
                       exposureMode: AVCaptureDevice.ExposureMode,
                       at devicePoint: CGPoint,
                       monitorSubjectAreaChange: Bool) {
        
        sessionQueue.async {
            guard let videoDeviceInput = self.videoDeviceInput else {
                print("Video device input is nil.")
                return
            }
            
            let device = videoDeviceInput.device
            do {
                try device.lockForConfiguration()
                
                if device.isFocusPointOfInterestSupported && device.isFocusModeSupported(focusMode) {
                    device.focusPointOfInterest = devicePoint
                    device.focusMode = focusMode
                }
                
                if device.isExposurePointOfInterestSupported && device.isExposureModeSupported(exposureMode) {
                    device.exposurePointOfInterest = devicePoint
                    device.exposureMode = exposureMode
                }
                
                device.isSubjectAreaChangeMonitoringEnabled = monitorSubjectAreaChange
                device.unlockForConfiguration()
            } catch {
                print("Could not lock device for configuration: \(error)")
            }
        }
    }
    
    // MARK: Capturing Photos
    
    private let photoOutput = AVCapturePhotoOutput()
    
    var photoOutputReadinessCoordinator: AVCapturePhotoOutputReadinessCoordinator!
    
    var photoSettings: AVCapturePhotoSettings!
    
    private var inProgressPhotoCaptureDelegates = [Int64: PhotoCaptureProcessor]()
    
    @IBOutlet private weak var photoButton: UIButton!
    
    /// - Tag: CapturePhoto
    @IBAction private func capturePhoto(_ photoButton: UIButton) {
        
        if self.photoSettings == nil {
            print("No photo settings to capture")
            return
        }
        
        // Create a unique settings object for the request.
        let photoSettings = AVCapturePhotoSettings(from: self.photoSettings)
        photoSettings.isDepthDataDeliveryEnabled = true
        // Start tracking capture readiness on the main thread to synchronously
        // update the shutter button's availability.
        self.photoOutputReadinessCoordinator.startTrackingCaptureRequest(using: photoSettings)
        
        let videoRotationAngle = self.videoDeviceRotationCoordinator.videoRotationAngleForHorizonLevelCapture
        
        sessionQueue.async {
            if let photoOutputConnection = self.photoOutput.connection(with: .video) {
                photoOutputConnection.videoRotationAngle = videoRotationAngle
            }
            
            let photoCaptureProcessor = PhotoCaptureProcessor(with: photoSettings, willCapturePhotoAnimation: {
                // Flash the screen to signal that AVCam took a photo.
                DispatchQueue.main.async {
                    self.previewView.videoPreviewLayer.opacity = 0
                    UIView.animate(withDuration: 0.25) {
                        self.previewView.videoPreviewLayer.opacity = 1
                    }
                }
            }, completionHandler: { photoCaptureProcessor in
                // When the capture is complete, remove a reference to the
                // photo capture delegate so it can be deallocated.
                self.sessionQueue.async {
                    self.inProgressPhotoCaptureDelegates[photoCaptureProcessor.requestedPhotoSettings.uniqueID] = nil
                }
            })
            
            // Specify the location the photo was taken
            photoCaptureProcessor.location = self.locationManager.location
            
            // The photo output holds a weak reference to the photo capture
            // delegate and stores it in an array to maintain a strong
            // reference.
            self.inProgressPhotoCaptureDelegates[photoCaptureProcessor.requestedPhotoSettings.uniqueID] = photoCaptureProcessor
            self.photoOutput.capturePhoto(with: photoSettings, delegate: photoCaptureProcessor)
            
            // Stop tracking the capture request because it's now destined for
            // the photo output.
            self.photoOutputReadinessCoordinator.stopTrackingCaptureRequest(using: photoSettings.uniqueID)
            
        }
    }
    
    private func setUpPhotoSettings() -> AVCapturePhotoSettings {
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
        
        photoSettings.isDepthDataDeliveryEnabled = true

//        photoSettings.photoQualityPrioritization = self.photoQualityPrioritizationMode

        return photoSettings
    }
    
    func tenBitVariantOfFormat(activeFormat: AVCaptureDevice.Format) -> AVCaptureDevice.Format? {
        let formats = self.videoDeviceInput.device.formats
        let formatIndex = formats.firstIndex(of: activeFormat)!
        
        let activeDimensions = CMVideoFormatDescriptionGetDimensions(activeFormat.formatDescription)
        let activeMaxFrameRate = activeFormat.videoSupportedFrameRateRanges.last?.maxFrameRate
        let activePixelFormat = CMFormatDescriptionGetMediaSubType(activeFormat.formatDescription)
        
        // AVCaptureDeviceFormats are sorted from smallest to largest in
        // resolution and frame rate. For each resolution and max frame rate
        // there's a cluster of formats that only differ in pixelFormatType.
        // Here, we look for an 'x420' variant of the current activeFormat.
        if activePixelFormat != kCVPixelFormatType_420YpCbCr10BiPlanarVideoRange {
            // Current activeFormat is not a 10-bit HDR format, find its 10-bit
            // HDR variant.
            for index in formatIndex + 1..<formats.count {
                let format = formats[index]
                let dimensions = CMVideoFormatDescriptionGetDimensions(format.formatDescription)
                let maxFrameRate = format.videoSupportedFrameRateRanges.last?.maxFrameRate
                let pixelFormat = CMFormatDescriptionGetMediaSubType(format.formatDescription)
                
                // Don't advance beyond the current format cluster
                if activeMaxFrameRate != maxFrameRate || activeDimensions.width != dimensions.width || activeDimensions.height != dimensions.height {
                    break
                }
                
                if pixelFormat == kCVPixelFormatType_420YpCbCr10BiPlanarVideoRange {
                    return format
                }
            }
        } else {
            return activeFormat
        }
        
        return nil
    }

    private var selectedMovieMode10BitDeviceFormat: AVCaptureDevice.Format?
    
    private enum HDRVideoMode {
        case on
        case off
    }

    private var HDRVideoMode: HDRVideoMode = .on
    
        
    private var inProgressLivePhotoCapturesCount = 0
    
    // MARK: Recording Movies
    
    private var movieFileOutput: AVCaptureMovieFileOutput?
    
    private var backgroundRecordingID: UIBackgroundTaskIdentifier?
        
    @IBOutlet private weak var resumeButton: UIButton!
    

    var _supportedInterfaceOrientations: UIInterfaceOrientationMask = .all
    override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        get { return _supportedInterfaceOrientations }
        set { _supportedInterfaceOrientations = newValue }
    }
    
    // MARK: KVO and Notifications
    
    private var keyValueObservations = [NSKeyValueObservation]()
    /// - Tag: ObserveInterruption
    private func addObservers() {
        let keyValueObservation = session.observe(\.isRunning, options: .new) { _, change in
            guard let isSessionRunning = change.newValue else { return }
           // let isLivePhotoCaptureEnabled = self.photoOutput.isLivePhotoCaptureEnabled
            
            DispatchQueue.main.async {
                // Only enable the ability to change camera if the device has
                // more than one camera.
                self.photoButton.isEnabled = isSessionRunning
            }
        }
        keyValueObservations.append(keyValueObservation)
        
        NotificationCenter.default.addObserver(self,
                                               selector: #selector(subjectAreaDidChange),
                                               name: .AVCaptureDeviceSubjectAreaDidChange,
                                               object: videoDeviceInput.device)
        
        NotificationCenter.default.addObserver(self,
                                               selector: #selector(sessionRuntimeError),
                                               name: .AVCaptureSessionRuntimeError,
                                               object: session)
        
        // A session can only run when the app is full screen. It will be
        // interrupted in a multi-app layout, introduced in iOS 9, see also the
        // documentation of AVCaptureSessionInterruptionReason. Add observers to
        // handle these session interruptions and show a preview is paused
        // message. See `AVCaptureSessionWasInterruptedNotification` for other
        // interruption reasons.
        NotificationCenter.default.addObserver(self,
                                               selector: #selector(sessionWasInterrupted),
                                               name: .AVCaptureSessionWasInterrupted,
                                               object: session)
        NotificationCenter.default.addObserver(self,
                                               selector: #selector(sessionInterruptionEnded),
                                               name: .AVCaptureSessionInterruptionEnded,
                                               object: session)
    }
    
    private func removeObservers() {
        NotificationCenter.default.removeObserver(self)
        
        for keyValueObservation in keyValueObservations {
            keyValueObservation.invalidate()
        }
        keyValueObservations.removeAll()
    }
    
    private var systemPreferredCameraContext = 0
    
    override func observeValue(forKeyPath keyPath: String?, of object: Any?, change: [NSKeyValueChangeKey: Any]?, context: UnsafeMutableRawPointer?) {
        if context == &systemPreferredCameraContext {
            guard let systemPreferredCamera = change?[.newKey] as? AVCaptureDevice else { return }
            
        } else {
            super.observeValue(forKeyPath: keyPath, of: object, change: change, context: context)
        }
    }
    
    @objc
    func subjectAreaDidChange(notification: NSNotification) {
        let devicePoint = CGPoint(x: 0.5, y: 0.5)
        focus(with: .continuousAutoFocus, exposureMode: .continuousAutoExposure, at: devicePoint, monitorSubjectAreaChange: false)
    }
    
    /// - Tag: HandleRuntimeError
    @objc
    func sessionRuntimeError(notification: NSNotification) {
        guard let error = notification.userInfo?[AVCaptureSessionErrorKey] as? AVError else { return }
        
        print("Capture session runtime error: \(error)")
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
    }
    
    
    
    /// - Tag: HandleInterruption
    @objc
    func sessionWasInterrupted(notification: NSNotification) {
        // In some scenarios you want to enable the user to resume the session.
        // For example, if music playback is initiated from Control Center while
        // using AVCam, then the user can let AVCam resume the session running,
        // which will stop music playback. Note that stopping music playback in
        // Control Center will not automatically resume the session. Also note
        // that it's not always possible to resume, see
        // `resumeInterruptedSession(_:)`.
        if let userInfoValue = notification.userInfo?[AVCaptureSessionInterruptionReasonKey] as AnyObject?,
            let reasonIntegerValue = userInfoValue.integerValue,
            let reason = AVCaptureSession.InterruptionReason(rawValue: reasonIntegerValue) {
            print("Capture session was interrupted with reason \(reason)")
            
            var showResumeButton = false
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
            if showResumeButton {
                // Fade-in a button to enable the user to try to resume the
                // session running.
                resumeButton.alpha = 0
                resumeButton.isHidden = false
                UIView.animate(withDuration: 0.25) {
                    self.resumeButton.alpha = 1
                }
            }
        }
    }
    
    @objc
    func sessionInterruptionEnded(notification: NSNotification) {
        print("Capture session interruption ended")
        
        if !resumeButton.isHidden {
            UIView.animate(withDuration: 0.25,
                           animations: {
                            self.resumeButton.alpha = 0
            }, completion: { _ in
                self.resumeButton.isHidden = true
            })
        }
        if !cameraUnavailableLabel.isHidden {
            UIView.animate(withDuration: 0.25,
                           animations: {
                            self.cameraUnavailableLabel.alpha = 0
            }, completion: { _ in
                self.cameraUnavailableLabel.isHidden = true
            }
            )
        }
    }
    
    

   
}

extension AVCaptureDevice.DiscoverySession {
    var uniqueDevicePositionsCount: Int {
        
        var uniqueDevicePositions = [AVCaptureDevice.Position]()
        
        for device in devices where !uniqueDevicePositions.contains(device.position) {
            uniqueDevicePositions.append(device.position)
        }
        
        return uniqueDevicePositions.count
    }
}
