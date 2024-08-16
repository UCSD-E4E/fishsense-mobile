//
//  ImageViewController.swift
//  FishSense
//
//  Created by Allen Kan on 8/9/24.
//  Copyright © 2024 E4E. All rights reserved.
//

import UIKit
import SwiftUI

class ImageViewController: UIViewController {
    
    // Local database has stored photos
    var savedPhotos: [FishData] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()

//        // Load saved photos when the view controller loads
//        savedPhotos = loadSavedPhotos()
//        
//        // Display the loaded photos
//        displaySavedPhotos()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
//        savedPhotos = loadSavedPhotos()
//        // Call displaySavedPhotos() each time the view appears
//        displaySavedPhotos()
    }
}
