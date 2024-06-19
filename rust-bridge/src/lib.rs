extern crate libc;
use std::{ffi::{c_uchar, CString}, fmt::Display, mem::{size_of, transmute}, ptr::null};

use cv_convert::TryIntoCv;
use fishsense::fish::{FishHeadTailDetector, FishSegmentation, SegmentationError, HeadTailError};
use ndarray::{Array1, Array2, Array3};
use opencv::{core::{Mat, MatTrait, CV_8UC4, CV_32FC1}, imgproc::{cvt_color_def, COLOR_RGBA2BGR}};

#[derive(Debug)]
enum ExecutionError {
    OpenCVError(opencv::Error),
    FishNotFound,
    SegmentationError(SegmentationError),
    CVToNDArrayError,
    HeadTailError(HeadTailError)
}

#[repr(C)]
pub struct Coordinate {
    x: usize,
    y: usize
}

#[repr(C)]
pub struct ComputeLengthResult {
    length: usize,
    left: Coordinate,
    right: Coordinate,
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
            ExecutionError::HeadTailError(error) => 
                write!(f, "{}", error),
        }
    }
}

fn ios_image_into_cv_bgr(img_data: *const c_uchar, img_width: u32, img_height: u32) -> Result<Mat, ExecutionError> {
    let img_cv = unsafe {
        // iOS images are 4 channel RGBA.
        let length = (img_width * img_height * 4) as usize;

        match Mat::new_rows_cols(img_height as i32, img_width as i32, CV_8UC4) {
            Ok(mut img_cv) => {
                match img_cv.ptr_mut(0) {
                    Ok(ptr) => {
                        // Copy the data into the Mat structure.
                        std::ptr::copy(img_data, ptr, length);
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

fn ios_depth_into_ndarray(depth_data: *const c_uchar, depth_width: u32, depth_height: u32) -> Result<Array2<f32>, ExecutionError> {
    let depth_cv = unsafe {
        let length = depth_width as usize * depth_height as usize * size_of::<f32>();

        match Mat::new_rows_cols(depth_height as i32, depth_width as i32, CV_32FC1) {
            Ok(mut depth_cv) => {
                std::ptr::copy(depth_data, depth_cv.ptr_mut(0).unwrap(), length);

                Ok(depth_cv)
            },
            Err(err) => Err(ExecutionError::OpenCVError(err))
        }
    }?;

    let depth_arr: Result<Array2<f32>, _> = depth_cv.try_into_cv();
    match depth_arr {
        Ok(depth_arr) => Ok(depth_arr),
        Err(_) => Err(ExecutionError::CVToNDArrayError)
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

fn inference(img_data: *const c_uchar, img_width: u32, img_height: u32) -> Result<Array2<u8>, ExecutionError> {
    let img_cv = ios_image_into_cv_bgr(img_data, img_width, img_height)?;
    let img_arr: Result<Array3<u8>, _> = img_cv.try_into_cv();
    match img_arr {
        Ok(img_arr) => {
            do_inference(img_arr)
        },
        Err(_) => Err(ExecutionError::CVToNDArrayError)
    }
}

fn do_find_head_tail(mask: &Array2<u8>) -> Result<(Array1<usize>, Array1<usize>), ExecutionError> {
    match FishHeadTailDetector::find_head_tail(&mask) {
        Ok((left, right)) => {
            Ok((left, right))
        },
        Err(error) => Err(ExecutionError::HeadTailError(error))
    }
}

fn do_compute_length(
    img_data: *const c_uchar, img_width: u32, img_height: u32, // RGB
    depth_data: *const c_uchar, depth_width: u32, depth_height: u32 // Depth Map
) -> Result<(usize, Array1<usize>, Array1<usize>), ExecutionError> {
    let mask = inference(img_data, img_width, img_height)?;
    let (left, right) = do_find_head_tail(&mask)?;

    let depth = ios_depth_into_ndarray(depth_data, depth_width, depth_height)?;

    Ok((0 as usize, left, right))
}

#[no_mangle]
pub extern fn compute_length(
    img_data: *const c_uchar, img_width: u32, img_height: u32, // RGB
    depth_data: *const c_uchar, depth_width: u32, depth_height: u32 // Depth Map
) -> ComputeLengthResult {
    match do_compute_length(
        img_data, img_width, img_height, // RGB
        depth_data, depth_width, depth_height // Depth Map
    ) {
        Ok((length, left, right)) => ComputeLengthResult {
            length,
            left: Coordinate { x: left[0], y: left[1] },
            right: Coordinate { x: right[0], y: right[0] },
            fish_found: true,
            error_string: null()
        },
        Err(error) => {
            match error {
                ExecutionError::FishNotFound => ComputeLengthResult {
                    length: 0,
                    left: Coordinate { x: 0, y: 0 },
                    right: Coordinate { x: 0, y: 0 },
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

                    ComputeLengthResult {
                        length: 0,
                        left: Coordinate { x: 0, y: 0 },
                        right: Coordinate { x: 0, y: 0 },
                        fish_found: false,
                        error_string: cstring_ptr as *const c_uchar
                    }
                }
            }
        }
    }
}