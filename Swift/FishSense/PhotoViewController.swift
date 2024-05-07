import UIKit

class PhotoViewController: UIViewController {

    @IBOutlet private var deleteButton: UIButton!

    // Array to store saved photos
    var savedPhotos: [UIImage] = []

    override func viewDidLoad() {
        super.viewDidLoad()
        
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
        // Calculate the dimensions for each photo view
        let photoWidth: CGFloat = 100
        let photoHeight: CGFloat = 150 // Fixed height for each photo view
        let horizontalSpacing: CGFloat = 10
        let verticalSpacing: CGFloat = 10
        
        // Calculate the number of columns based on the view width
        let numberOfColumns = Int(view.bounds.width / (photoWidth + horizontalSpacing))
        
        // Calculate the total number of rows
        let numberOfRows = (savedPhotos.count + numberOfColumns - 1) / numberOfColumns
        
        // Calculate the top and bottom border heights for the entire page
        let topBorderHeight: CGFloat = 60
        let bottomBorderHeight: CGFloat = 155
        
        // Calculate the available height for the photo views
        let availableHeight = view.bounds.height - topBorderHeight - bottomBorderHeight
        
        // Calculate the vertical spacing between photo views
        let totalVerticalSpacing = verticalSpacing * CGFloat(numberOfRows - 1)
        
        // Calculate the total height required for all photo views
        let totalPhotoViewsHeight = CGFloat(numberOfRows) * photoHeight + totalVerticalSpacing
        
        // Calculate the horizontal spacing for centering the photos
        let horizontalPadding = (view.bounds.width - CGFloat(numberOfColumns) * (photoWidth + horizontalSpacing) + horizontalSpacing) / 2
        
        // Create a scroll view to contain the photo views
        let scrollView = UIScrollView(frame: CGRect(x: 0, y: topBorderHeight, width: view.bounds.width, height: availableHeight))
        scrollView.contentSize = CGSize(width: view.bounds.width, height: max(totalPhotoViewsHeight, availableHeight))
        scrollView.showsVerticalScrollIndicator = totalPhotoViewsHeight > availableHeight
        
        // Iterate over each saved photo
        for (index, photo) in savedPhotos.enumerated() {
            // Calculate the position for the photo view
            let row = index / numberOfColumns
            let column = index % numberOfColumns
            let x = horizontalPadding + CGFloat(column) * (photoWidth + horizontalSpacing)
            let y = CGFloat(row) * (photoHeight + verticalSpacing)
            
            // Create a UIImageView for the photo
            let imageView = UIImageView(frame: CGRect(x: x, y: y, width: photoWidth, height: photoHeight))
            imageView.contentMode = .scaleAspectFill
            imageView.clipsToBounds = true
            imageView.image = photo
            
            // Add the UIImageView to the scroll view
            scrollView.addSubview(imageView)
        }
        
        // Add the scroll view to the main view
        view.addSubview(scrollView)
    }


    func loadSavedPhotos() -> [UIImage] {
        var loadedPhotos: [UIImage] = []

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
        print("Deleting.. all photos")
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
