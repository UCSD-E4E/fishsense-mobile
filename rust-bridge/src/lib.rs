extern crate libc;
use core::slice;
use std::{ffi::{c_uchar, CString}, fmt::Display, mem::transmute, ptr::null};

use cv_convert::TryIntoCv;
use fishsense::{fish::{FishHeadTailDetector, FishLengthCalculator, FishSegmentation, HeadTailError, SegmentationError}, WorldPointHandler};
use ndarray::{s, Array1, Array2, Array3};
use opencv::{core::{Mat, MatTrait, CV_8UC4}, imgproc::{cvt_color_def, COLOR_RGBA2BGR}};

#[derive(Debug)]
enum ExecutionError {
    OpenCVError(opencv::Error),
    FishNotFound,
    SegmentationError(SegmentationError),
    CVToNDArrayError8UC3(<Mat as TryIntoCv<Array3<u8>>>::Error),
    HeadTailError(HeadTailError),
    ArrayShapeError(ndarray::ShapeError),
}

#[repr(C)]
pub struct Coordinate {
    x: usize,
    y: usize
}

#[repr(C)]
pub struct ComputeLengthResult {
    length: f32,
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
            ExecutionError::CVToNDArrayError8UC3(error) => 
                write!(f, "{}", error),
            ExecutionError::HeadTailError(error) => 
                write!(f, "{}", error),
            ExecutionError::ArrayShapeError(error) => 
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

fn ios_f32_array_data_to_ndarray(array_data: *const f32, width: usize, height: usize) -> Result<Array2<f32>, ExecutionError> {
    let length = width * height;
    
    let vector = unsafe {
        let slice = slice::from_raw_parts(array_data, length);
        slice.to_vec()
    };

    match Array2::<f32>::from_shape_vec((height, width), vector) {
        Ok(arr) => Ok(arr),
        Err(error) => Err(ExecutionError::ArrayShapeError(error))
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
        Err(err) => Err(ExecutionError::SegmentationError(err))
    }
}

fn inference(img_data: *const c_uchar, img_width: u32, img_height: u32) -> Result<Array2<u8>, ExecutionError> {
    let img_cv = ios_image_into_cv_bgr(img_data, img_width, img_height)?;
    let img_arr: Array3<u8> = img_cv.try_into_cv().map_err(ExecutionError::CVToNDArrayError8UC3)?;
    let result = do_inference(img_arr);

    result
}

fn find_head_tail(mask: &Array2<u8>) -> Result<(Array1<usize>, Array1<usize>), ExecutionError> {
    let result = match FishHeadTailDetector::find_head_tail(&mask) {
        Ok((left, right)) => {
            Ok((left, right))
        },
        Err(error) => Err(ExecutionError::HeadTailError(error))
    };

    result
}

fn rotate_arrayf32(arr: Array2<f32>) -> Array2<f32> {
    // arr[:, ::-1].T
    arr.slice(s![.., ..;-1]).t().mapv(|v| v)
}

fn rotate_arrayu8(arr: Array2<u8>) -> Array2<u8> {
    // arr[:, ::-1].T
    arr.slice(s![.., ..;-1]).t().mapv(|v| v)
}

fn do_compute_length(
    img_data: *const c_uchar, img_width: u32, img_height: u32, // RGB
    depth_data: *const c_uchar, depth_width: u32, depth_height: u32, // Depth Map
    camera_intrinsics_inverted_data: *const f32
) -> Result<(f32, Array1<usize>, Array1<usize>), ExecutionError> {
    let mask = inference(img_data, img_width, img_height)?;
    let mask = rotate_arrayu8(mask);
    let (left, right) = find_head_tail(&mask)?;

    let depth_map = ios_f32_array_data_to_ndarray(depth_data as *const f32, depth_width as usize, depth_height as usize)?.t().mapv(|v| v as f32);
    let depth_map = rotate_arrayf32(depth_map);
    let camera_intrinsics_inverted = ios_f32_array_data_to_ndarray(camera_intrinsics_inverted_data, 3, 3)?;

    let world_point_handler = WorldPointHandler {
        camera_intrinsics_inverted
    };

    let fish_length_calculator = FishLengthCalculator {
        image_height: img_height as usize,
        image_width: img_width as usize,
        world_point_handler
    };

    let length = fish_length_calculator.calculate_fish_length(
        &depth_map, &left.mapv(|v| v as f32), &right.mapv(|v| v as f32));

    Ok((length, left, right))
}

#[unsafe(no_mangle)]
pub extern "C" fn compute_length(
    img_data: *const c_uchar, img_width: u32, img_height: u32, // RGB
    depth_data: *const c_uchar, depth_width: u32, depth_height: u32, // Depth Map
    camera_intrinsics_inverted_data: *const f32
) -> ComputeLengthResult {
    match do_compute_length(
        img_data, img_width, img_height, // RGB
        depth_data, depth_width, depth_height, // Depth Map
        camera_intrinsics_inverted_data
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
                    length: 0f32,
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
                        length: 0f32,
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