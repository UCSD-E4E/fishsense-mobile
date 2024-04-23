/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
The app's primary view controller that presents the camera interface.
*/

import UIKit
import AVFoundation
import CoreLocation
import Photos

class CameraViewController: UIViewController, AVCaptureFileOutputRecordingDelegate, AVCapturePhotoOutputReadinessCoordinatorDelegate {
	
	let locationManager = CLLocationManager()
    
    // MARK: View Controller Life Cycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Disable the UI. Enable the UI later, if and only if the session
        // starts running.
//       cameraButton.isEnabled = false
//        recordButton.isEnabled = false
        photoButton.isEnabled = false
//       livePhotoModeButton.isEnabled = false
//        photoQualityPrioritizationSegControl.isEnabled = false
//        captureModeControl.isEnabled = false
//        HDRVideoModeButton.isHidden = true
        
        // Set up the video preview view.
        previewView.session = session
		
		// Request location authorization so photos and videos can be tagged
        // with their location.
		if locationManager.authorizationStatus == .notDetermined {
			locationManager.requestWhenInUseAuthorization()
		}
		
        // Check the video authorization status. Video access is required and
        // audio access is optional. If the user denies audio access, AVCam
        // won't record audio during movie recording.
        switch AVCaptureDevice.authorizationStatus(for: .video) {
        case .authorized:
            // The user has previously granted access to the camera.
            break
            
        case .notDetermined:
            /*
             The user has not yet been presented with the option to grant
             video access. Suspend the session queue to delay session
             setup until the access request has completed.
             
             Note that audio access will be implicitly requested when we
             create an AVCaptureDeviceInput for audio during session setup.
             */
            sessionQueue.suspend()
            AVCaptureDevice.requestAccess(for: .video, completionHandler: { granted in
                if !granted {
                    self.setupResult = .notAuthorized
                }
                self.sessionQueue.resume()
            })
            
        default:
            // The user has previously denied access.
            setupResult = .notAuthorized
        }
        
        /*
         Setup the capture session.
         In general, it's not safe to mutate an AVCaptureSession or any of its
         inputs, outputs, or connections from multiple threads at the same time.
         
         Don't perform these tasks on the main queue because
         AVCaptureSession.startRunning() is a blocking call, which can
         take a long time. Dispatch session setup to the sessionQueue, so
         that the main queue isn't blocked, which keeps the UI responsive.
         */
        sessionQueue.async {
            self.configureSession()
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
//            photoOutput.maxPhotoQualityPrioritization = .quality
            livePhotoMode = photoOutput.isLivePhotoCaptureSupported ? .on : .off
//            photoQualityPrioritizationMode = .balanced
            
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
    
 //   @IBOutlet private weak var captureModeControl: UISegmentedControl!
    
    /// - Tag: EnableDisableModes
 /*   @IBAction private func toggleCaptureMode(_ captureModeControl: UISegmentedControl) {
        captureModeControl.isEnabled = false
        
        if captureModeControl.selectedSegmentIndex == CaptureMode.photo.rawValue {
//            recordButton.isEnabled = false
            HDRVideoModeButton.isHidden = true
            selectedMovieMode10BitDeviceFormat = nil
            
            sessionQueue.async {
                // Remove the AVCaptureMovieFileOutput from the session because
                // it doesn't support capture of Live Photos.
                self.session.beginConfiguration()
                self.session.removeOutput(self.movieFileOutput!)
                self.session.sessionPreset = .photo
                
                DispatchQueue.main.async {
                    captureModeControl.isEnabled = true
                }
                
                self.movieFileOutput = nil
                
                self.configurePhotoOutput()
                // let livePhotoCaptureEnabled = self.photoOutput.isLivePhotoCaptureEnabled
                
                DispatchQueue.main.async {
//                    self.livePhotoModeButton.isHidden = false
//                    self.livePhotoModeButton.isEnabled = livePhotoCaptureEnabled
//                    self.photoQualityPrioritizationSegControl.isHidden = false
//                    self.photoQualityPrioritizationSegControl.isEnabled = true
                }
                self.session.commitConfiguration()
            }
        } else if captureModeControl.selectedSegmentIndex == CaptureMode.movie.rawValue {
//            livePhotoModeButton.isHidden = true
//            photoQualityPrioritizationSegControl.isHidden = true
            
            sessionQueue.async {
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
//                        self.recordButton.isEnabled = true
                        
                        // For photo captures during movie recording, Balanced
                        // quality photo processing is prioritized to get high
                        // quality stills and avoid frame drops during
                        // recording.
//                        self.photoQualityPrioritizationSegControl.selectedSegmentIndex = 1
//                        self.photoQualityPrioritizationSegControl.sendActions(for: UIControl.Event.valueChanged)
                    }
                }
            }
        }
    }*/
    
    private func configurePhotoOutput() {
        let supportedMaxPhotoDimensions = self.videoDeviceInput.device.activeFormat.supportedMaxPhotoDimensions
        let largestDimesnion = supportedMaxPhotoDimensions.last
        self.photoOutput.maxPhotoDimensions = largestDimesnion!
        self.photoOutput.isLivePhotoCaptureEnabled = self.photoOutput.isLivePhotoCaptureSupported
//        self.photoOutput.maxPhotoQualityPrioritization = .quality
        self.photoOutput.isResponsiveCaptureEnabled = self.photoOutput.isResponsiveCaptureSupported
        self.photoOutput.isFastCapturePrioritizationEnabled = self.photoOutput.isFastCapturePrioritizationSupported
        self.photoOutput.isAutoDeferredPhotoDeliveryEnabled = self.photoOutput.isAutoDeferredPhotoDeliverySupported
        
        let photoSettings = self.setUpPhotoSettings()
        DispatchQueue.main.async {
            self.photoSettings = photoSettings
        }
    }
    
    // MARK: Device Configuration
    
 //   @IBOutlet private weak var cameraButton: UIButton!
    
    @IBOutlet private weak var cameraUnavailableLabel: UILabel!
    
    private let videoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.builtInWideAngleCamera, .builtInDualCamera, .builtInTrueDepthCamera],
                                                                               mediaType: .video, position: .unspecified)

    private var videoDeviceRotationCoordinator: AVCaptureDevice.RotationCoordinator!
    
    private var videoDeviceIsConnectedObservation: NSKeyValueObservation?
    
    /// - Tag: ChangeCamera
 /*   @IBAction private func changeCameraButtonPressed(_ cameraButton: UIButton) {
        cameraButton.isEnabled = false
//        recordButton.isEnabled = false
        photoButton.isEnabled = false
//        livePhotoModeButton.isEnabled = false
        captureModeControl.isEnabled = false
//        photoQualityPrioritizationSegControl.isEnabled = false
        HDRVideoModeButton.isEnabled = false
        self.selectedMovieMode10BitDeviceFormat = nil
        
        self.changeCamera(nil, isUserSelection: true, completion: {
            
            DispatchQueue.main.async {
                self.cameraButton.isEnabled = true
//                self.recordButton.isEnabled = self.movieFileOutput != nil
                self.photoButton.isEnabled = true
//                self.livePhotoModeButton.isEnabled = true
                self.captureModeControl.isEnabled = true
//                self.photoQualityPrioritizationSegControl.isEnabled = true
            }
        })
    }*/
    
    private func changeCamera(_ videoDevice: AVCaptureDevice?, isUserSelection: Bool, completion: (() -> Void)? = nil) {
        sessionQueue.async {
            let currentVideoDevice = self.videoDeviceInput.device
            let newVideoDevice: AVCaptureDevice?
            
            if let videoDevice = videoDevice {
                newVideoDevice = videoDevice
            } else {
                let currentPosition = currentVideoDevice.position
                
                let backVideoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.builtInDualCamera, .builtInWideAngleCamera],
                                                                                       mediaType: .video, position: .back)
                let frontVideoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.builtInTrueDepthCamera, .builtInWideAngleCamera],
                                                                                        mediaType: .video, position: .front)
                let externalVideoDeviceDiscoverySession = AVCaptureDevice.DiscoverySession(deviceTypes: [.external],
                                                                                           mediaType: .video, position: .unspecified)
                
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
            }
            
            if let videoDevice = newVideoDevice {
                do {
                    let videoDeviceInput = try AVCaptureDeviceInput(device: videoDevice)
                    
                    self.session.beginConfiguration()
                    
                    // Remove the existing device input first, because
                    // AVCaptureSession doesn't support simultaneous use of the
                    // rear and front cameras.
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
                    if let connection = self.movieFileOutput?.connection(with: .video) {
                        self.session.sessionPreset = .high
                        
                        self.selectedMovieMode10BitDeviceFormat = self.tenBitVariantOfFormat(activeFormat: self.videoDeviceInput.device.activeFormat)
                        
                        if self.selectedMovieMode10BitDeviceFormat != nil {
                            DispatchQueue.main.async {
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
                        
                        if connection.isVideoStabilizationSupported {
                            connection.preferredVideoStabilizationMode = .auto
                        }
                    }
                    
                    // `livePhotoCaptureEnabled` and other properties of
                    // the`AVCapturePhotoOutput` are `NO` when a video device
                    // disconnects from the session. After the session acquires
                    // a new video device, you need to reconfigure the photo
                    // output to enable those properties, if applicable.
                    self.configurePhotoOutput()
                    
                    self.session.commitConfiguration()
                } catch {
                    print("Error occurred while creating video device input: \(error)")
                }
            }
			
			completion?()
        }
    }
    
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
        
        // Provide a unique temporary URL because Live Photo captures can overlap.
        if photoSettings.livePhotoMovieFileURL != nil {
            photoSettings.livePhotoMovieFileURL = livePhotoMovieUniqueTemporaryDirectoryFileURL()
        }
        
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
            }, livePhotoCaptureHandler: { capturing in
                self.sessionQueue.async {
                    if capturing {
                        self.inProgressLivePhotoCapturesCount += 1
                    } else {
                        self.inProgressLivePhotoCapturesCount -= 1
                    }
                    
                    let inProgressLivePhotoCapturesCount = self.inProgressLivePhotoCapturesCount
                    DispatchQueue.main.async {
                        if inProgressLivePhotoCapturesCount > 0 {
//                            self.capturingLivePhotoLabel.isHidden = false
                        } else if inProgressLivePhotoCapturesCount == 0 {
//                            self.capturingLivePhotoLabel.isHidden = true
                        } else {
                            print("Error: In progress Live Photo capture count is less than 0.")
                        }
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
        if self.livePhotoMode == .on && self.photoOutput.isLivePhotoCaptureSupported { // Live Photo Capture is not supported in movie mode.
            photoSettings.livePhotoMovieFileURL = livePhotoMovieUniqueTemporaryDirectoryFileURL()
        }
//        photoSettings.photoQualityPrioritization = self.photoQualityPrioritizationMode

        return photoSettings
    }
    
    private func livePhotoMovieUniqueTemporaryDirectoryFileURL() -> URL {
        let livePhotoMovieFileName = UUID().uuidString
        let livePhotoMovieFilePath = (NSTemporaryDirectory() as NSString).appendingPathComponent((livePhotoMovieFileName as NSString).appendingPathExtension("mov")!)
        let livePhotoMovieURL = NSURL.fileURL(withPath: livePhotoMovieFilePath)
        return livePhotoMovieURL
    }
    
    private enum LivePhotoMode {
        case on
        case off
    }
    
    private var livePhotoMode: LivePhotoMode = .off
    
//    @IBOutlet private weak var livePhotoModeButton: UIButton!
    
    /*@IBAction func toggleLivePhotoMode(_ livePhotoModeButton: UIButton) {
        sessionQueue.async {
            self.livePhotoMode = (self.livePhotoMode == .on) ? .off : .on
            let livePhotoMode = self.livePhotoMode
            
            // Update `photoSettings` to include `livePhotoMode`.
            let photoSettings = self.setUpPhotoSettings()
            
            DispatchQueue.main.async {
                if livePhotoMode == .on {
                    // self.livePhotoModeButton.setImage(#imageLiteral(resourceName: "LivePhotoON"), for: [])
                } else {
                    // self.livePhotoModeButton.setImage(#imageLiteral(resourceName: "LivePhotoOFF"), for: [])
                }
                self.photoSettings = photoSettings
            }
        }
    }*/
    
//    private var photoQualityPrioritizationMode: AVCapturePhotoOutput.QualityPrioritization = .balanced
    
//    @IBOutlet private weak var photoQualityPrioritizationSegControl: UISegmentedControl!
    
//    @IBAction func togglePhotoQualityPrioritizationMode(_ photoQualityPrioritizationSegControl: UISegmentedControl) {
//        let selectedQuality = photoQualityPrioritizationSegControl.selectedSegmentIndex
//        sessionQueue.async {
//            switch selectedQuality {
//            case 0 :
//                self.photoQualityPrioritizationMode = .speed
//            case 1 :
//                self.photoQualityPrioritizationMode = .balanced
//            case 2 :
//                self.photoQualityPrioritizationMode = .quality
//            default:
//                break
//            }
//            
//            // Update `photoSettings` to include
//            // `photoQualityPrioritizationMode`.
//            let photoSettings = self.setUpPhotoSettings()
//            DispatchQueue.main.async {
//                self.photoSettings = photoSettings
//            }
//        }
//    }

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
    
    @IBOutlet private weak var HDRVideoModeButton: UIButton!
    
    @IBAction private func toggleHDRVideoMode(_ HDRVideoModeButton: UIButton) {
        sessionQueue.async {
            self.HDRVideoMode = (self.HDRVideoMode == .on) ? .off : .on
            let HDRVideoMode = self.HDRVideoMode
            
            DispatchQueue.main.async {
                if HDRVideoMode == .on {
                    do {
                        try self.videoDeviceInput.device.lockForConfiguration()
                        self.videoDeviceInput.device.activeFormat = self.selectedMovieMode10BitDeviceFormat!
                        self.videoDeviceInput.device.unlockForConfiguration()
                    } catch {
                        print("Could not lock device for configuration: \(error)")
                    }
                    self.HDRVideoModeButton.setTitle("HDR On", for: .normal)
                } else {
                    self.session.beginConfiguration()
                    self.session.sessionPreset = .high
                    self.session.commitConfiguration()
                    self.HDRVideoModeButton.setTitle("HDR Off", for: .normal)
                }
            }
        }
    }
    
    private var inProgressLivePhotoCapturesCount = 0
    
    @IBOutlet var capturingLivePhotoLabel: UILabel!
    
    // MARK: Recording Movies
    
    private var movieFileOutput: AVCaptureMovieFileOutput?
    
    private var backgroundRecordingID: UIBackgroundTaskIdentifier?
    
//    @IBOutlet private weak var recordButton: UIButton!
    
    @IBOutlet private weak var resumeButton: UIButton!
    
//    @IBAction private func toggleMovieRecording(_ recordButton: UIButton) {
//        guard let movieFileOutput = self.movieFileOutput else {
//            return
//        }
//        
//        /*
//         Disable the Camera button until recording finishes, and disable
//         the Record button until recording starts or finishes.
//         
//         See the AVCaptureFileOutputRecordingDelegate methods.
//         */
//        cameraButton.isEnabled = false
//        recordButton.isEnabled = false
//        captureModeControl.isEnabled = false
//        
//        let videoRotationAngle = self.videoDeviceRotationCoordinator.videoRotationAngleForHorizonLevelCapture
//        
//        if let window = self.view.window, let windowScene = window.windowScene {
//            switch windowScene.interfaceOrientation {
//            case .portrait: self.supportedInterfaceOrientations = .portrait
//            case .landscapeLeft: self.supportedInterfaceOrientations = .landscapeLeft
//            case .landscapeRight: self.supportedInterfaceOrientations = .landscapeRight
//            case .portraitUpsideDown: self.supportedInterfaceOrientations = .portraitUpsideDown
//            case .unknown: self.supportedInterfaceOrientations = .portrait
//            default: self.supportedInterfaceOrientations = .portrait
//            }
//        }
//        self.setNeedsUpdateOfSupportedInterfaceOrientations()
//        
//        sessionQueue.async {
//            if !movieFileOutput.isRecording {
//                if UIDevice.current.isMultitaskingSupported {
//                    self.backgroundRecordingID = UIApplication.shared.beginBackgroundTask(expirationHandler: nil)
//                }
//                
//                // Update the orientation on the movie file output video
//                // connection before recording.
//                let movieFileOutputConnection = movieFileOutput.connection(with: .video)
//                movieFileOutputConnection?.videoRotationAngle = videoRotationAngle
//                
//                let availableVideoCodecTypes = movieFileOutput.availableVideoCodecTypes
//                
//                if availableVideoCodecTypes.contains(.hevc) {
//                    movieFileOutput.setOutputSettings([AVVideoCodecKey: AVVideoCodecType.hevc], for: movieFileOutputConnection!)
//                }
//                
//                // Start recording video to a temporary file.
//                let outputFileName = NSUUID().uuidString
//                let outputFilePath = (NSTemporaryDirectory() as NSString).appendingPathComponent((outputFileName as NSString).appendingPathExtension("mov")!)
//                movieFileOutput.startRecording(to: URL(fileURLWithPath: outputFilePath), recordingDelegate: self)
//            } else {
//                movieFileOutput.stopRecording()
//            }
//        }
//    }
//    
    var _supportedInterfaceOrientations: UIInterfaceOrientationMask = .all
    override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        get { return _supportedInterfaceOrientations }
        set { _supportedInterfaceOrientations = newValue }
    }
    
    /// - Tag: DidStartRecording
//    func fileOutput(_ output: AVCaptureFileOutput, didStartRecordingTo fileURL: URL, from connections: [AVCaptureConnection]) {
//        // Enable the Record button to let the user stop recording.
//        DispatchQueue.main.async {
//            self.recordButton.isEnabled = true
//            self.recordButton.setImage(#imageLiteral(resourceName: "CaptureStop"), for: [])
//        }
//    }
//    
    /// - Tag: DidFinishRecording
    func fileOutput(_ output: AVCaptureFileOutput,
                    didFinishRecordingTo outputFileURL: URL,
                    from connections: [AVCaptureConnection],
                    error: Error?) {
        // Note: Because we use a unique file path for each recording, a new
        // recording won't overwrite a recording mid-save.
        func cleanup() {
            let path = outputFileURL.path
            if FileManager.default.fileExists(atPath: path) {
                do {
                    try FileManager.default.removeItem(atPath: path)
                } catch {
                    print("Could not remove file at url: \(outputFileURL)")
                }
            }
            
            if let currentBackgroundRecordingID = backgroundRecordingID {
                backgroundRecordingID = UIBackgroundTaskIdentifier.invalid
                
                if currentBackgroundRecordingID != UIBackgroundTaskIdentifier.invalid {
                    UIApplication.shared.endBackgroundTask(currentBackgroundRecordingID)
                }
            }
        }
        
        var success = true
        
        if error != nil {
            print("Movie file finishing error: \(String(describing: error))")
            success = (((error! as NSError).userInfo[AVErrorRecordingSuccessfullyFinishedKey] as AnyObject).boolValue)!
        }
        
        if success {
            // Check the authorization status.
            PHPhotoLibrary.requestAuthorization { status in
                if status == .authorized {
                    // Save the movie file to the photo library and cleanup.
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
                } else {
                    cleanup()
                }
            }
        } else {
            cleanup()
        }
        
        // When recording finishes, check if the system-preferred camera
        // changed during the recording.
        sessionQueue.async {
            let systemPreferredCamera = AVCaptureDevice.systemPreferredCamera
            if self.videoDeviceInput.device != systemPreferredCamera {
                self.changeCamera(systemPreferredCamera, isUserSelection: false)
            }
        }
        
        // Enable the Camera and Record buttons to let the user switch camera
        // and start another recording.
        DispatchQueue.main.async {
            // Only enable the ability to change camera if the device has more
            // than one camera.
//            self.cameraButton.isEnabled = self.videoDeviceDiscoverySession.uniqueDevicePositionsCount > 1
//            self.recordButton.isEnabled = true
//            self.captureModeControl.isEnabled = true
//            self.recordButton.setImage(#imageLiteral(resourceName: "CaptureVideo"), for: [])
            self.supportedInterfaceOrientations = UIInterfaceOrientationMask.all
            // After the recording finishes, allow rotation to continue.
            self.setNeedsUpdateOfSupportedInterfaceOrientations()
        }
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
 //               self.cameraButton.isEnabled = isSessionRunning && self.videoDeviceDiscoverySession.uniqueDevicePositionsCount > 1
//                self.recordButton.isEnabled = isSessionRunning && self.movieFileOutput != nil
                self.photoButton.isEnabled = isSessionRunning
//                self.captureModeControl.isEnabled = isSessionRunning
//                self.livePhotoModeButton.isEnabled = isSessionRunning && isLivePhotoCaptureEnabled
//                self.photoQualityPrioritizationSegControl.isEnabled = isSessionRunning
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
            
            // Don't switch cameras if movie recording is in progress.
            if let movieFileOutput = self.movieFileOutput, movieFileOutput.isRecording {
                return
            }
            if let videoDeviceInput = self.videoDeviceInput {
                if videoDeviceInput.device == systemPreferredCamera {
                    return
                }
            } else {
                // Handle the case where videoDeviceInput is nil
                // You may want to log an error or handle this condition appropriately
                return
            }
            
            self.changeCamera(systemPreferredCamera, isUserSelection: false)
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
