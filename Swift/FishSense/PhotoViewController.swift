import UIKit
import SwiftUI

class PhotoViewController: UIViewController {

    @IBOutlet private var deleteButton: UIButton!

    // Array to store saved photos
    var savedPhotos: [UIImage] = []

    override func viewDidLoad() {
        super.viewDidLoad()
        // deleteAllSavedPhotos()
        // Load saved photos when the view controller loads
        savedPhotos = loadSavedPhotos()
        
        // Display the loaded photos
        displaySavedPhotos()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        savedPhotos = loadSavedPhotos()
        // Call displaySavedPhotos() each time the view appears
        displaySavedPhotos()
    }
    
    @IBAction func deleteButtonTapped(_ sender: UIButton) {
        // Delete all saved photos
        deleteAllSavedPhotos()
        
        // Clear the saved photos array
        savedPhotos.removeAll()
        
        // Update the UI
        savedPhotos = loadSavedPhotos()
        displaySavedPhotos()
    }
    
    func displaySavedPhotos() {
        // Convert savedPhotos to DataTemp array
        let dataTempList = savedPhotos.map { DataTemp(image: $0) }
        // Create the SwiftUI view
        let galleryView = ImageGallery(dataList: dataTempList)
        
        // Embed the SwiftUI view in a UIHostingController
        let hostingController = UIHostingController(rootView: galleryView)
        
        // Add the hosting controller as a child view controller
        addChild(hostingController)
        hostingController.view.frame = view.bounds
        view.addSubview(hostingController.view)
        hostingController.didMove(toParent: self)
    }

    func loadSavedPhotos() -> [UIImage] {
        var loadedPhotos: [UIImage] = []

        // Get the URL for the document directory
        if let documentsDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            do {
                // Get the contents of the document directory, including creation date key
                let fileURLs = try FileManager.default.contentsOfDirectory(at: documentsDirectory, includingPropertiesForKeys: [.creationDateKey])
                
                // Sort the file URLs by their creation date
                let sortedFileURLs = fileURLs.sorted {
                    let date1 = (try? $0.resourceValues(forKeys: [.creationDateKey]).creationDate) ?? Date.distantPast
                    let date2 = (try? $1.resourceValues(forKeys: [.creationDateKey]).creationDate) ?? Date.distantPast
                    return date1 > date2
                }

                // Loop through the sorted file URLs
                for fileURL in sortedFileURLs {
                    // Load the image data from each file URL
                    if let imageData = try? Data(contentsOf: fileURL), let image = UIImage(data: imageData) {
                        // Add the image to the array of saved photos
                        loadedPhotos.append(image)
                    }
                }
            } catch {
                print("Error loading saved photos: \(error.localizedDescription)")
            }
        }

        return loadedPhotos
    }

    
    func deleteAllSavedPhotos() {
        print("Deleting all photos")
        // Get the URL for the document directory
        if let documentsDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            do {
                // Get the contents of the document directory
                let fileURLs = try FileManager.default.contentsOfDirectory(at: documentsDirectory, includingPropertiesForKeys: nil)

                // Loop through the file URLs and delete each file
                for fileURL in fileURLs {
                    try FileManager.default.removeItem(at: fileURL)
                }
            } catch {
                print("Error deleting saved photos: \(error.localizedDescription)")
            }
        }
    }
}
