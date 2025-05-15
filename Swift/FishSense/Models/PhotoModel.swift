//
//  PhotoModel.swift
//  FishSense
//
//  Created by Chris Crutchfield on 5/14/25.
//  Copyright © 2025 E4E. All rights reserved.
//

struct PhotoModel {
    var id: Int64
    var utcUnixTimestamp: Int64
    var rgbPath: String
    var depthMap: ByteMatrixModel
    var confidenceMap: ByteMatrixModel
    
    init?(withUtcUnixTimestamp utcUnixTimestamp: Int64, rgbPath: String, depthMap: ByteMatrixModel, confidenceMap: ByteMatrixModel, id: Int64 = -1) {
        self.id = id
        self.utcUnixTimestamp = utcUnixTimestamp
        self.rgbPath = rgbPath
        self.depthMap = depthMap
        self.confidenceMap = confidenceMap
    }
}

struct ByteMatrixModel {
    var bytes: UnsafeRawPointer?
    var width: Int
    var height: Int
    
    init?(_ bytes: UnsafeRawPointer?, withWidth width: Int, andHeight height: Int) {
        self.bytes = bytes
        self.width = width
        self.height = height
    }
}
