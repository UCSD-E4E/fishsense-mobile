// pub mod fish;

// #[no_mangle]
// pub extern fn add2(left: usize, right: usize) -> usize {
//     left + right
// }

// #[cfg(test)]
// mod tests {
//     use super::*;

//     #[test]
//     fn it_works() {
//         let result = add2(2, 2);
//         assert_eq!(result, 4);
//     }
// }

extern crate libc;
use std::{ffi::{c_uchar, CString}, fmt::Display, mem::transmute, ptr::null};

use cv_convert::TryIntoCv;
use fishsense::fish::{FishSegmentation, SegmentationError};
use ndarray::{Array2, Array3};
use opencv::{core::{Mat, MatTrait, CV_8UC4}, imgproc::{cvt_color_def, COLOR_RGBA2BGR}};

#[derive(Debug)]
enum ExecutionError {
    OpenCVError(opencv::Error),
    FishNotFound,
    SegmentationError(SegmentationError),
    CVToNDArrayError
}

#[repr(C)]
pub struct HeadTailResult {
    fish_found: bool,
    error_string: *const c_uchar
}

impl Display for ExecutionError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            ExecutionError::OpenCVError(error) => 
                write!(f, "{}", error),
            ExecutionError::FishNotFound => 
                write!(f, "FishNotFound"),
            ExecutionError::SegmentationError(error) => 
                write!(f, "{}", error),
            ExecutionError::CVToNDArrayError => 
                write!(f, "CVToNDArrayError"),
        }
    }
}

fn ios_image_into_cv_bgr(data: *const c_uchar, width: u32, height: u32) -> Result<Mat, ExecutionError> {
    let img_cv = unsafe {
        // iOS images are 4 channel RGBA.
        let length = (width * height * 4) as usize;

        match Mat::new_rows_cols(height as i32, width as i32, CV_8UC4) {
            Ok(mut img_cv) => {
                match img_cv.ptr_mut(0) {
                    Ok(ptr) => {
                        // Copy the data into the Mat structure.
                        std::ptr::copy(data, ptr, length);
                        Ok(img_cv)
                    },
                    Err(err) => Err(ExecutionError::OpenCVError(err))
                }

            },
            Err(err) => Err(ExecutionError::OpenCVError(err))
        }
    }?;

    let mut img_bgr = Mat::default();
    match cvt_color_def(&img_cv, &mut img_bgr, COLOR_RGBA2BGR) {
        Ok(_) => Ok(img_bgr),
        Err(err) => Err(ExecutionError::OpenCVError(err))
    }
}

fn segmentation_factory() -> Result<FishSegmentation, ExecutionError> {
    match FishSegmentation::from_web() {
        Ok(mut segmentation) => {
            match segmentation.load_model() {
                Ok(_) => Ok(segmentation),
                Err(err) => Err(ExecutionError::SegmentationError(err))
            }
        },
        Err(err) => Err(ExecutionError::SegmentationError(err))
    }
}

fn do_inference(img: Array3<u8>) -> Result<Array2<u8>, ExecutionError> {
    let segmentation = segmentation_factory()?;

    match segmentation.inference(&img) {
        Ok(mask) => {
            if mask.sum() > 0 {
                Ok(mask)
            }
            else {
                Err(ExecutionError::FishNotFound)
            }
        },
        Err(err) => {
            match err {
                SegmentationError::OrtErr(err) => {
                    match err {
                        ort::Error::SessionRun(_) => { // Hack to work around a bug in our onnx model which causes crashes when no fish are found.
                            Err(ExecutionError::FishNotFound)
                        },
                        other => Err(ExecutionError::SegmentationError(SegmentationError::OrtErr(other)))
                    }
                },
                other => Err(ExecutionError::SegmentationError(other))
            }
        }
    }
}

fn inference(data: *const c_uchar, width: u32, height: u32) -> Result<Array2<u8>, ExecutionError> {
    let img_cv = ios_image_into_cv_bgr(data, width, height)?;
    let img_arr: Result<Array3<u8>, _> = img_cv.try_into_cv();
    match img_arr {
        Ok(img_arr) => {
            do_inference(img_arr)
        },
        Err(_) => Err(ExecutionError::CVToNDArrayError)
    }
}

fn do_find_head_tail(data: *const c_uchar, width: u32, height: u32) -> Result<(), ExecutionError> {
    let mask = inference(data, width, height)?;

    Ok(())
}

#[no_mangle]
pub extern fn find_head_tail(data: *const c_uchar, width: u32, height: u32) -> HeadTailResult {
    match do_find_head_tail(data, width, height) {
        Ok(()) => HeadTailResult {
            fish_found: true,
            error_string: null()
        },
        Err(error) => {
            match error {
                ExecutionError::FishNotFound => HeadTailResult {
                    fish_found: false,
                    error_string: null()
                },
                other => {
                    let cstring_ptr = unsafe {
                        // By boxing this, we move it to the heap.
                        // It is still owned by Rust.
                        let cstring_heap = Box::new(
                            // This cannot be null here, so unwrap should be safe.
                            // This is part of the error handling, if we can't fail
                            // gracefully, it's okay to crash.
                            CString::new(other.to_string()).unwrap()
                        );

                        // Rust no longer has ownership of this data.
                        // It is now Swift's responsibility to clean up correctly!
                        let data:*const CString = transmute(cstring_heap);

                        (&*data).as_ptr()
                    };

                    HeadTailResult {
                        fish_found: false,
                        error_string: cstring_ptr as *const c_uchar
                    }
                }
            }
        }
    }
}