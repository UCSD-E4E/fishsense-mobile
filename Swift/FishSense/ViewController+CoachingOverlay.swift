/*
See LICENSE folder for this sample’s licensing information.

Abstract:
View controller extension for the on-boarding experience.
*/

// ALLEN
import UIKit // crucial for app's screen and interface
import ARKit // useful for the camera motion

extension ViewController: ARCoachingOverlayViewDelegate {
    // ALLEN
    // "extends", i.e adds the functionality of ARCoachingOverlayViewDelegate to ViewController
    // it is what enables the app to prompt you to begin moving your phone and such... in ViewController!
    
    // ALLEN
    // A function that hides mesh, reset, plane detection buttons
    func coachingOverlayViewWillActivate(_ coachingOverlayView: ARCoachingOverlayView) {
        hideMeshButton.isHidden = true
        resetButton.isHidden = true
        planeDetectionButton.isHidden = true
    }

    // ALLEN
    // A function that reveals mesh, reset, plane detection buttons
    func coachingOverlayViewDidDeactivate(_ coachingOverlayView: ARCoachingOverlayView) {
        hideMeshButton.isHidden = false
        resetButton.isHidden = false
        planeDetectionButton.isHidden = false
    }

    // ALLEN
    // Ques: Do we need the reset, I noticed it is commented out on in the ViewController func session?
    func coachingOverlayViewDidRequestSessionReset(_ coachingOverlayView: ARCoachingOverlayView) {
        resetButtonPressed(self)
    }

    // ALLEN
    // A function that begins the AR session
    func setupCoachingOverlay() {
        // Set up coaching view
        coachingOverlay.session = arView.session
        coachingOverlay.delegate = self
        
        coachingOverlay.translatesAutoresizingMaskIntoConstraints = false
        arView.addSubview(coachingOverlay)
        
        // ALLEN
        // I think this is what positions the AR session,
        // I could plug in things to test it out, but I need to read more documentation to figure this out
        // https://developer.apple.com/documentation/uikit/nslayoutconstraint
        NSLayoutConstraint.activate([
            coachingOverlay.centerXAnchor.constraint(equalTo: view.centerXAnchor),
            coachingOverlay.centerYAnchor.constraint(equalTo: view.centerYAnchor),
            coachingOverlay.widthAnchor.constraint(equalTo: view.widthAnchor),
            coachingOverlay.heightAnchor.constraint(equalTo: view.heightAnchor)
            ])
    }
    
}
