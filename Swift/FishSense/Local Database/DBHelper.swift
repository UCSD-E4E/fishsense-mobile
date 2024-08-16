//
//  DBHelper.swift
//  FishSense
//
//  Created by Allen Kan on 7/29/24.
//  Copyright © 2024 E4E. All rights reserved.
//

import Foundation
import SQLite3

class DBHelper {
    var db: OpaquePointer?
    var path: String = "FishSenseDB.sqlite"

    init() {
        self.db = createDB()
        self.createTable()
    }

    func createDB() -> OpaquePointer? {
        do {
            let filePath = try FileManager.default.url(for: .documentDirectory, in: .userDomainMask, appropriateFor: nil, create: false).appendingPathComponent(path)
            
            var db: OpaquePointer? = nil
            if sqlite3_open(filePath.path, &db) != SQLITE_OK {
                let errmsg = String(cString: sqlite3_errmsg(db))
                print("There is an error in creating the database: \(errmsg)")
                return nil
            } else {
                print("Successfully opened a connection to the database at \(filePath.path)")
                return db
            }
        } catch {
            print("Error finding file path: \(error.localizedDescription)")
            return nil
        }
    }

    func createTable() {
        let query = "CREATE TABLE IF NOT EXISTS FishData(id INTEGER PRIMARY KEY AUTOINCREMENT, timestamp INTEGER, fish_length INTEGER, headx INTEGER, heady INTEGER, tailx INTEGER, taily INTEGER, lat DOUBLE, long DOUBLE, rgb TEXT, depth TEXT, confidence TEXT);"
        var statement: OpaquePointer? = nil

        if sqlite3_prepare_v2(self.db, query, -1, &statement, nil) == SQLITE_OK {
            if sqlite3_step(statement) == SQLITE_DONE {
                print("Table creation success")
            } else {
                let errmsg = String(cString: sqlite3_errmsg(db))
                print("Table creation fail: \(errmsg)")
            }
        } else {
            let errmsg = String(cString: sqlite3_errmsg(db))
            print("Preparation fail: \(errmsg)")
        }
        sqlite3_finalize(statement)
    }
    
    //Assign default values to the objects in the database
    func insert(timestamp: Int64 = 0, fish_length: Int64 = 0, headx: Int64 = 0, heady: Int64 = 0, tailx: Int64 = 0, taily: Int64 = 0, lat: Double = 0.0, long: Double = 0.0, rgb: String = "", depth: String = "", confidence: String = "") {
        let query = "INSERT INTO FishData(timestamp, fish_length, headx, heady, tailx, taily, lat, long, rgb, depth, confidence) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)"
        var statement: OpaquePointer? = nil

        if sqlite3_prepare_v2(db, query, -1, &statement, nil) == SQLITE_OK {
            sqlite3_bind_int64(statement, 1, timestamp)
            sqlite3_bind_int64(statement, 2, fish_length)
            sqlite3_bind_int64(statement, 3, headx)
            sqlite3_bind_int64(statement, 4, heady)
            sqlite3_bind_int64(statement, 5, tailx)
            sqlite3_bind_int64(statement, 6, taily)
            
            sqlite3_bind_double(statement, 7, (lat))
            sqlite3_bind_double(statement, 8, (long))
            
            sqlite3_bind_text(statement, 9, (rgb as NSString).utf8String, -1, nil)
            sqlite3_bind_text(statement, 10, (depth as NSString).utf8String, -1, nil)
            sqlite3_bind_text(statement, 11, (confidence as NSString).utf8String, -1, nil)

            if sqlite3_step(statement) == SQLITE_DONE {
                print("Data inserted successfully")
                printEntireTable() // This is a function that is called, so it prints out the entire table, when you are able to insert new data
                
            } else {
                let errmsg = String(cString: sqlite3_errmsg(db))
                print("Data is not inserted in table. Error: \(errmsg)")
            }
        } else {
            let errmsg = String(cString: sqlite3_errmsg(db))
            print("Query is not as per requirement. Error: \(errmsg)")
        }
        sqlite3_finalize(statement)
    }

    func read(avg: Int) -> [FishData] {
        var mainList = [FishData]()
        let query = "SELECT * FROM FishData;"
        var statement: OpaquePointer? = nil

        if sqlite3_prepare_v2(db, query, -1, &statement, nil) == SQLITE_OK {
            while sqlite3_step(statement) == SQLITE_ROW {
                let id = Int64(sqlite3_column_int(statement, 0))
                let timestamp = Int64(sqlite3_column_int(statement, 1))
                let fish_length = Int64(sqlite3_column_int(statement, 2))
                let headx = Int64(sqlite3_column_int(statement, 3))
                let heady = Int64(sqlite3_column_int(statement, 4))
                let tailx = Int64(sqlite3_column_int(statement, 5))
                let taily = Int64(sqlite3_column_int(statement, 6))
                
                let lat = (sqlite3_column_double(statement, 7))
                let long = (sqlite3_column_double(statement, 8))
                
                let rgb = sqlite3_column_text(statement, 9) != nil ? String(cString: sqlite3_column_text(statement, 9)) : ""
                let depth = sqlite3_column_text(statement, 10) != nil ? String(cString: sqlite3_column_text(statement, 10)) : ""
                let confidence = sqlite3_column_text(statement, 11) != nil ? String(cString: sqlite3_column_text(statement, 11)) : ""

                let model = FishData(id: id, timestamp: timestamp, fish_length: fish_length, headx: headx, heady: heady, tailx: tailx, taily: taily, lat: lat, long: long, rgb: rgb, depth: depth, confidence: confidence)
                mainList.append(model)
            }
        } else {
            let errmsg = String(cString: sqlite3_errmsg(db))
            print("Query preparation has failed. Error: \(errmsg)")
        }
        sqlite3_finalize(statement)
        print("Query preparation has succeeded.")
        return mainList
    }

    //
    func fetchFishLength() -> [Int64] {
        let query = "SELECT fish_length FROM FishData ORDER BY id ASC;" // Will return all fish_length values in the table, ordered by id in descending order -> ASC (ascending) & DESC (descending)
        var statement: OpaquePointer? = nil
        var fishLengths: [Int64] = []

        if sqlite3_prepare_v2(db, query, -1, &statement, nil) == SQLITE_OK {
            while sqlite3_step(statement) == SQLITE_ROW {
                let fishLength = Int64(sqlite3_column_int(statement, 0))
                fishLengths.append(fishLength)
            }
        } else {
            let errmsg = String(cString: sqlite3_errmsg(db))
            print("Query preparation has failed. Error: \(errmsg)")
        }
        sqlite3_finalize(statement)
        
//        for length in fishLengths {
//                print("fishLength: \(length)")
//        }
        return fishLengths
        
    }
    //
    
    //Upon taking a picture, print the entire table
     func printEntireTable() {
           let fishDataList = read(avg: 0)
            for fishData in fishDataList {
                print(fishData.description)
         }
    }
}
