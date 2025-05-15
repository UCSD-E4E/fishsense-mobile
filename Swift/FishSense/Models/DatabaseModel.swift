//
//  DatabaseModel.swift
//  FishSense
//
//  Created by Chris Crutchfield on 5/14/25.
//  Copyright © 2025 E4E. All rights reserved.
//
import ARKit
import Foundation
import SQLite3

class DatabaseModel {
    var database: OpaquePointer?
    let path = "database.sqlite"
    
    init?() {
        database = createDatabase()
        let _ = createTables()
    }
    
    func createDatabase() -> OpaquePointer? {
        if let documentsDirectory = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            let databasePath = documentsDirectory.appendingPathComponent(path)
            
            var databasePointer: OpaquePointer? = nil
            if sqlite3_open(databasePath.path, &databasePointer) == SQLITE_OK {
                return databasePointer
            }
        }
        
        return nil
    }
    
    func createTables() -> Bool {
        if database == nil {
            return false
        }
        
        return createPhotosTable()
    }
    
    func createPhotosTable() -> Bool {
        let query = """
            CREATE TABLE IF NOT EXISTS photos (
                id INTEGER PRIMARY KEY,
                utc_unix_timestamp INTEGER,
                rgb_path TEXT,
                depth_bytes BLOB,
                depth_width INTEGER,
                depth_height INTEGER,
                confidence_bytes BLOB,
                confidence_width INTEGER,
                confidence_height INTGER
            );
            """
        var statement: OpaquePointer? = nil;
        
        if sqlite3_prepare_v2(self.database, query, -1, &statement, nil) == SQLITE_OK {
            if sqlite3_step(statement) != SQLITE_DONE {
                let errmsg = String(cString: sqlite3_errmsg(database))
                print("Sqlite Error: \(errmsg)")
                
                return false
            }
        } else {
            let errmsg = String(cString: sqlite3_errmsg(database))
            print("Sqlite Error: \(errmsg)")
            
            return false
        }
        
        sqlite3_finalize(statement)
        return true
    }
    
    func insertPhoto(with photo: PhotoModel) -> Bool {
        let query = """
            INSERT INTO photos
            (utc_unix_timestamp, rgb_path, depth_bytes, depth_width, depth_height, confidence_bytes, confidence_width, confidence_height)
            VALUES
            (?, ?, ?, ?, ?, ?, ?, ?)
            """
        var statement: OpaquePointer? = nil
        
        if sqlite3_prepare_v2(database, query, -1, &statement, nil) == SQLITE_OK {
            sqlite3_bind_int64(statement, 1, photo.utcUnixTimestamp)
            sqlite3_bind_text(statement, 2, (photo.rgbPath as NSString).utf8String, -1, nil)
            
            sqlite3_bind_blob(statement, 3, photo.depthMap.bytes, Int32(photo.depthMap.width * photo.depthMap.height * MemoryLayout<Float32>.size), nil)
            sqlite3_bind_int(statement, 4, Int32(photo.depthMap.width))
            sqlite3_bind_int(statement, 5, Int32(photo.depthMap.height))
            
            sqlite3_bind_blob(statement, 6, photo.confidenceMap.bytes, Int32(photo.confidenceMap.width * photo.confidenceMap.height * MemoryLayout<ARConfidenceLevel>.size), nil)
            sqlite3_bind_int(statement, 7, Int32(photo.confidenceMap.width))
            sqlite3_bind_int(statement, 8, Int32(photo.confidenceMap.height))
            
            if sqlite3_step(statement) != SQLITE_DONE {
                let errmsg = String(cString: sqlite3_errmsg(database))
                print("Sqlite Error: \(errmsg)")
                
                return false
            }
        }
        else {
            let errmsg = String(cString: sqlite3_errmsg(database))
            print("Sqlite Error: \(errmsg)")
            
            return false
        }
        
        return true
    }
}
