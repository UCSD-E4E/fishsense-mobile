//
//  ViewController.swift
//  Local Database
//
//  Created by Allen Kan on 7/22/24.
//

import UIKit
import SQLite3

class ViewController: UIViewController {

    var db: DBHelper!
    var fishDataList: [FishData]!

    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Initialize the database helper
        db = DBHelper()
        
        // Insert some test data
        db.insert(timestamp: 12, length: 133, headx: 1, heady: 1, tailx: 1, taily: 1, lat: Double(4.23), long: Double(3.25), rgb: "rgb_data", depth: "depth_data", mask: "mask_data")
        
        // Read data from the database
        fishDataList = db.read(avg: 2)
        
        // Optional: Print the fish data list in the console
        printFishDataList(fishDataList)
    }
    
    func printFishDataList(_ fishDataList: [FishData]) {
        for fishData in fishDataList {
            print(fishData.description)
        }
    }

    @IBAction func PrintDataBase(_ sender: Any) {
        printFishDataList(fishDataList)
    }
}
