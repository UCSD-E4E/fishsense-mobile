/*
See the LICENSE.txt file for this sample’s licensing information.

Abstract:
The app's photo capture delegate object.
*/

import AVFoundation
import Photos
import UIKit

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
        if let imageData = photo.fileDataRepresentation()/*, let image = UIImage(data: imageData) */{
            // Save the photo data to a file locally
            savePhotoToGallery(imageData: imageData)

            // Reload gallery or update UI to display the new photo
            // Example: galleryCollectionView.reloadData()
        } else {
            print("Error capturing photo: \(error?.localizedDescription ?? "Unknown error")")
        }
        print("photo data", photoData ?? "")
        // Convert the depth data to the expected format.
//        let convertedDepth = depthData.converting(toDepthDataType: kCVPixelFormatType_DepthFloat16)
        PHPhotoLibrary.requestAuthorization { status in
            if status == .authorized {
                PHPhotoLibrary.shared().performChanges({
                    let options = PHAssetResourceCreationOptions()
                    let creationRequest = PHAssetCreationRequest.forAsset()
                    options.uniformTypeIdentifier = self.requestedPhotoSettings.processedFileType.map { $0.rawValue }
                    
                    let resourceType = PHAssetResourceType.photo
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
    
    func savePhotoToGallery(imageData: Data) {
        // Generate a unique file name for each photo
        let uniqueFileName = UUID().uuidString

        // Get the URL for the document directory
        if let documentsDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            // Append the unique file name to the documents directory URL
            let fileURL = documentsDirectory.appendingPathComponent("\(uniqueFileName).jpg")

            do {
                // Write the image data to the file URL
                try imageData.write(to: fileURL)
                print("Photo saved successfully at \(fileURL)")
            } catch {
                print("Error saving photo: \(error.localizedDescription)")
            }
        }
    }
    
    func loadSavedPhotos() -> [UIImage] {
        var savedPhotos: [UIImage] = []

        // Get the URL for the document directory
        if let documentsDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            do {
                // Get the contents of the document directory
                let fileURLs = try FileManager.default.contentsOfDirectory(at: documentsDirectory, includingPropertiesForKeys: nil)

                // Loop through the file URLs
                for fileURL in fileURLs {
                    // Load the image data from each file URL
                    if let imageData = try? Data(contentsOf: fileURL), let image = UIImage(data: imageData) {
                        // Add the image to the array of saved photos
                        savedPhotos.append(image)
                    }
                }
            } catch {
                print("Error loading saved photos: \(error.localizedDescription)")
            }
        }

        return savedPhotos
    }
}
