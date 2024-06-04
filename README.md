# FishSense iOS App

FishSense is a simple iOS app for taking images using iPhone and displaying photos taken in a photo gallery.

##Overview

To monitor fish population health, marine scientists measure fish length from head to tail. Averaging these lengths across a large sample provides valuable insights. Traditional methods involve hand-measuring fish out of water, which is inefficient, error-prone, and potentially harmful to the fish. Alternative methods, like underwater eyeball measurements, also pose challenges to accuracy and efficiency.

Our goal is to expedite this process with an iOS app that uses iPhone hardware to measure fish length from a quick photo taken on a clear board. This method is faster, simpler, and minimizes the time fish spend out of water, increasing their survival chances. Additionally, users can easily save collected data, and the app reduces human error by automating data collection.

## Features

- Take images.
- View images taken in a photo gallery.
- Select two points on the camera and get an estimated length measurement.

## Installation

You can build and run the app from the source code by following these steps:

1. Clone this repository: https://github.com/UCSD-E4E/fishsense-mobile

2. Open the project in Xcode.

3. Before building the FishSense App itself execute `make` in the `rust-bridge` directory.

4. Build and run the project on your iOS device (**requires LIDAR hardware**) or simulator in XCode.

## Usage

Once installed, follow these steps to use FishSense:

1. Open the app on your iOS device or simulator.
2. Tap the Shutter button to take a new image.
3. Tap on the screen two times to set the start and end point for the length measurement.
4. Tap the "Photos" tab to view the photo gallery.
5. Tap on any image in the gallery to see more information.

[Watch Demo Video]([https://www.youtube.com/watch?v=example](https://youtube.com/shorts/he1tru-qiu0?feature=share))

## Contributing

If you'd like to contribute to FishSense, please follow these guidelines:

- First [contact](ccrutchf@ucsd.edu) our development team regarding adding new code or extending the current implementation.
- Fork the repository and create a new separate branch for your work.
- Make your changes and submit a pull request with a clear description of the changes.
- Ensure your code follows the project's coding style and conventions.

## Dependencies

This project is dependent on installing `rust-up`.

## Contact

For questions, feedback, or support, please email [Christopher Crutchfield](ccrutchf@ucsd.edu) and refer to the [E4E FishSense Site](https://e4e.ucsd.edu/fishsense) for more information.

## Credits

- Developers: Kyle Tran, Will Hsu, Harish Vasanth, Darren Li, Christopher Crutchfield
- Advisor: Ryan Kastner, Christopher Crutchfield
