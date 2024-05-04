/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
The app's photo capture delegate object.
*/

import AVFoundation
import Photos

class PhotoCaptureProcessor: NSObject {
    private(set) var requestedPhotoSettings: AVCapturePhotoSettings
    
    private let willCapturePhotoAnimation: () -> Void
        
    lazy var context = CIContext()
    
    private let completionHandler: (PhotoCaptureProcessor) -> Void
    
    private var photoData: Data?
    
    // Save the location of captured photos.
    var location: CLLocation?

    init(with requestedPhotoSettings: AVCapturePhotoSettings,
         willCapturePhotoAnimation: @escaping () -> Void,
         completionHandler: @escaping (PhotoCaptureProcessor) -> Void) {
        self.requestedPhotoSettings = requestedPhotoSettings
        self.willCapturePhotoAnimation = willCapturePhotoAnimation
        self.completionHandler = completionHandler
    }
    
    private func didFinish() {
        completionHandler(self)
    }
}

/// This extension adopts all of the AVCapturePhotoCaptureDelegate protocol
/// methods.
extension PhotoCaptureProcessor: AVCapturePhotoCaptureDelegate {
    
    /// - Tag: WillBeginCapture
    func photoOutput(_ output: AVCapturePhotoOutput, didFinishProcessingPhoto photo: AVCapturePhoto, error:Error?) {
        // Retrieve the image and depth data.
//        print("IN METHOD")
//        guard let depthData = photo.depthData,
//              let cameraCalibrationData = depthData.cameraCalibrationData else { return }
//        print("NEXT")
        let photoData = photo.fileDataRepresentation()
        // Convert the depth data to the expected format.
//        let convertedDepth = depthData.converting(toDepthDataType: kCVPixelFormatType_DepthFloat16)
        PHPhotoLibrary.requestAuthorization { status in
            if status == .authorized {
                PHPhotoLibrary.shared().performChanges({
                    let options = PHAssetResourceCreationOptions()
                    let creationRequest = PHAssetCreationRequest.forAsset()
                    options.uniformTypeIdentifier = self.requestedPhotoSettings.processedFileType.map { $0.rawValue }
                    
                    var resourceType = PHAssetResourceType.photo
                    creationRequest.addResource(with: resourceType, data: photoData!, options: options)

                    // Specify the location in which the photo was taken.
                    creationRequest.location = self.location
                    
                }, completionHandler: { _, error in
                    if let error = error {
                        print("Error occurred while saving photo to photo library: \(error)")
                    }
                    
                    self.didFinish()
                }
                )
            } else {
                print("WEIRD")
                self.didFinish()
            }
        }
    }
}
