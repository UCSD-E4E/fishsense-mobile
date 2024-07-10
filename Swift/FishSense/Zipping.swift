//  Zipping.swift
// known-good: Swift 4.2
// Alexis Gallagher

import Foundation

public extension URL {

  /// Creates a zip archive of the file or folder represented by this URL and returns a references to the zipped file
  ///
  /// - parameter dest: the destination URL; if nil, the destination will be this URL with ".zip" appended
  func zip(toFileAt dest: URL? = nil) throws -> URL
  {
    let destURL = dest ?? self.appendingPathExtension("zip")

    let fm = FileManager.default
    var isDir: ObjCBool = false

    let srcDir: URL
    let srcDirIsTemporary: Bool
    if self.isFileURL && fm.fileExists(atPath: path, isDirectory: &isDir) && isDir.boolValue == true {
      // this URL is a directory: just zip it in-place
      srcDir = self
      srcDirIsTemporary = false
    }
    else {
      // otherwise we need to copy the simple file to a temporary directory in order for
      // NSFileCoordinatorReadingOptions.ForUploading to actually zip it up
      srcDir = URL(fileURLWithPath: NSTemporaryDirectory()).appendingPathComponent(UUID().uuidString)
      try fm.createDirectory(at: srcDir, withIntermediateDirectories: true, attributes: nil)
      let tmpURL = srcDir.appendingPathComponent(self.lastPathComponent)
      try fm.copyItem(at: self, to: tmpURL)
      srcDirIsTemporary = true
    }

    let coord = NSFileCoordinator()
    var readError: NSError?
    var copyError: NSError?
    var errorToThrow: NSError?

    var readSucceeded:Bool = false
    // coordinateReadingItemAtURL is invoked synchronously, but the passed in zippedURL is only valid
    // for the duration of the block, so it needs to be copied out
    coord.coordinate(readingItemAt: srcDir,
                     options: NSFileCoordinator.ReadingOptions.forUploading,
                     error: &readError)
    {
      (zippedURL: URL) -> Void in
      readSucceeded = true
      // assert: read succeeded
      do {
        try fm.copyItem(at: zippedURL, to: destURL)
      } catch let caughtCopyError {
        copyError = caughtCopyError as NSError
      }
    }

    if let theReadError = readError, !readSucceeded {
      // assert: read failed, readError describes our reading error
      NSLog("%@","zipping failed")
      errorToThrow =  theReadError
    }
    else if readError == nil && !readSucceeded  {
      NSLog("%@","NSFileCoordinator has violated its API contract. It has errored without throwing an error object")
      errorToThrow = NSError.init(domain: Bundle.main.bundleIdentifier!, code: 0, userInfo: nil)
    }
    else if let theCopyError = copyError {
      // assert: read succeeded, copy failed
      NSLog("%@","zipping succeeded but copying the zip file failed")
      errorToThrow = theCopyError
    }

    if srcDirIsTemporary {
      do {
        try fm.removeItem(at: srcDir)
      }
      catch {
        // Not going to throw, because we do have a valid output to return. We're going to rely on
        // the operating system to eventually cleanup the temporary directory.
        NSLog("%@","Warning. Zipping succeeded but could not remove temporary directory afterwards")
      }
    }
    if let error = errorToThrow { throw error }
    return destURL
  }
}

public extension NSData {
  /// Creates a zip archive of this data via a temporary file and returns the zipped contents
  func zip() throws -> NSData {
    let tmpURL = URL(fileURLWithPath: NSTemporaryDirectory()).appendingPathComponent(UUID().uuidString)
    try self.write(to: tmpURL, options: NSData.WritingOptions.atomic)
    let zipURL = try tmpURL.zip()
    let fm = FileManager.default
    let zippedData = try NSData(contentsOf: zipURL, options: NSData.ReadingOptions())
    try fm.removeItem(at: tmpURL) // clean up
    try fm.removeItem(at: zipURL)
    return zippedData
  }
}
