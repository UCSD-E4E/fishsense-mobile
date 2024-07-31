//
//  Objects.swift
//  FishSense
//
//  Created by Allen Kan on 7/29/24.
//  Copyright © 2024 E4E. All rights reserved.
//

import Foundation

class FishData : Codable {
    var id:Int64
    var timestamp:Int64
    var fish_length:Int64
    var headx:Int64
    var heady:Int64
    var tailx:Int64
    var taily:Int64
    var lat:Double
    var long:Double
    var rgb:String
    var depth:String
    var mask:String
    
    init(id: Int64, timestamp: Int64, fish_length: Int64, headx: Int64, heady: Int64, tailx: Int64, taily: Int64, lat: Double, long: Double, rgb: String, depth: String, mask: String) {
        self.id = id
        self.timestamp = timestamp
        self.fish_length = fish_length
        self.headx = headx
        self.heady = heady
        self.tailx = tailx
        self.taily = taily
        self.lat = lat
        self.long = long
        self.rgb = rgb
        self.depth = depth
        self.mask = mask
    }
    //Written by ChatGPT
    var description: String {
        return "ID: \(id), Timestamp: \(timestamp), Length: \(fish_length), HeadX: \(headx), HeadY: \(heady), TailX: \(tailx), TailY: \(taily), Latitude: \(lat), Longitude: \(long), RGB: \(rgb), Depth: \(depth), Mask: \(mask)"
       }
    //
}
