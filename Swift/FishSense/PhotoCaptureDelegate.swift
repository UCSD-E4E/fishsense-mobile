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
                    
                    let resourceType = PHAssetResourceType.photo
                    creationRequest.addResource(with: resourceType, data: photoData!, options: options)

                    // Specify the location in which the photo was taken.
                    creationRequest.location = self.location
                    print(self.getPoints(avDepthData: photo.depthData!, point1: CGPoint(x: 0, y: 0), point2: CGPoint(x: 3023, y: 0)))
                    
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
    
    private func getPoints(avDepthData: AVDepthData, point1: CGPoint, point2: CGPoint) -> Float {
        let depthData = avDepthData.converting(toDepthDataType: kCVPixelFormatType_DepthFloat32)
        let intrinsicMatrix = avDepthData.cameraCalibrationData?.intrinsicMatrix
        let depthDataMap = depthData.depthDataMap
        CVPixelBufferLockBaseAddress(depthDataMap, CVPixelBufferLockFlags(rawValue: 0))
           
        let width = CVPixelBufferGetWidth(depthDataMap)
        let height = CVPixelBufferGetHeight(depthDataMap)
           
        let focalX = Float(width) * ((intrinsicMatrix?[0][0] ?? 0.0) / 3024)
        let focalY = Float(height) * ((intrinsicMatrix?[1][1] ?? 0.0) / 4032)
        let principalPointX = Float(width) * ((intrinsicMatrix?[2][0] ?? 0.0) / 3024)
        let principalPointY = Float(height) * ((intrinsicMatrix?[2][1] ?? 0.0) / 4032)

        let floatBuffer = unsafeBitCast(CVPixelBufferGetBaseAddress(depthDataMap), to: UnsafeMutablePointer<Float32>.self)
        
        let x1 = Float(point1.x) / (3024/Float(width))
        let y1 = Float(point1.y) / (4032/Float(height))
        let x2 = Float(point2.x) / (3024/Float(width))
        let y2 = Float(point2.y) / (4032/Float(height))
        
        let Z1 = floatBuffer[Int(x1 * y1)]
        let Z2 = floatBuffer[Int(x2 * y2)]
        
        let X1 = (x1 - principalPointX) * Z1 / focalX
        let Y1 = (y1 - principalPointY) * Z1 / focalY
        
        let X2 = (x2 - principalPointX) * Z2 / focalX
        let Y2 = (y2 - principalPointY) * Z2 / focalY
        
        CVPixelBufferUnlockBaseAddress(depthDataMap, CVPixelBufferLockFlags(rawValue: 0))
        
        return sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2,2) + pow(Z1 - Z2,2))

    }
}
