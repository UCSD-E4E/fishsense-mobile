extern crate libc;
use core::slice;
use std::{ffi::{c_uchar, CString}, fmt::Display, mem::transmute, ptr::null};

use fishsense_core::errors::FishSenseError;
use fishsense_core::fish::fish_head_tail_detector::FishHeadTailDetector;
use fishsense_core::fish::fish_length_calculator::FishLengthCalculator;
use fishsense_core::fish::fish_segmentation::{FishSegmentation, SegmentationError};
use fishsense_core::world_point_handler::WorldPointHandler;
use ndarray::{s, Array1, Array2, Array3};
use opencv::{core::{Mat, MatTrait, CV_8UC4}, imgproc::{cvt_color_def, COLOR_RGBA2BGR}};
use opencv::prelude::MatTraitConst;

#[derive(Debug)]
enum ExecutionError {
    OpenCVError(opencv::Error),
    FishNotFound,
    SegmentationError(SegmentationError),
    HeadTailError(FishSenseError),
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
    let mut segmentation = FishSegmentation::new();
    match segmentation.load_model() {
        Ok(_) => Ok(segmentation),
        Err(err) => Err(ExecutionError::SegmentationError(err))
    }
}

fn do_inference(img: Array3<u8>) -> Result<Array2<u8>, ExecutionError> {
    let mut segmentation = segmentation_factory()?;

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
    let (rows, cols) = (img_cv.rows() as usize, img_cv.cols() as usize);
    let data = unsafe { slice::from_raw_parts(img_cv.data(), rows * cols * 3) };
    let img_arr = Array3::from_shape_vec((rows, cols, 3), data.to_vec())
        .map_err(ExecutionError::ArrayShapeError)?;
    let result = do_inference(img_arr);

    result
}

fn find_head_tail(mask: &Array2<u8>) -> Result<(Array1<f32>, Array1<f32>), ExecutionError> {
    let detector = FishHeadTailDetector {};
    match detector.find_head_tail_img(mask) {
        Ok(coords) => Ok((coords.head.0, coords.tail.0)),
        Err(error) => Err(ExecutionError::HeadTailError(error))
    }
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
) -> Result<(f32, Array1<f32>, Array1<f32>), ExecutionError> {
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

    let length = fish_length_calculator.calculate_fish_length(&depth_map, &left, &right);

    Ok((length, left, right))
}

#[cfg(test)]
mod tests {
    use super::*;
    use ndarray::array;

    // rotate_arrayu8 / rotate_arrayf32
    // The operation is: reverse columns ([:, ::-1]) then transpose (.t()).
    // For a 2×3 input:
    //   1 2 3       reverse cols→  3 2 1    transpose→  3 6
    //   4 5 6                      6 5 4                2 5
    //                                                   1 4
    // Shape changes from (rows, cols) → (cols, rows).

    #[test]
    fn rotate_arrayu8_correct_values_and_shape() {
        let input = array![[1u8, 2, 3], [4, 5, 6]];
        let result = rotate_arrayu8(input);

        assert_eq!(result.shape(), &[3, 2]);
        assert_eq!(result[[0, 0]], 3);
        assert_eq!(result[[0, 1]], 6);
        assert_eq!(result[[1, 0]], 2);
        assert_eq!(result[[1, 1]], 5);
        assert_eq!(result[[2, 0]], 1);
        assert_eq!(result[[2, 1]], 4);
    }

    #[test]
    fn rotate_arrayf32_correct_values_and_shape() {
        let input = array![[1.0f32, 2.0, 3.0], [4.0, 5.0, 6.0]];
        let result = rotate_arrayf32(input);

        assert_eq!(result.shape(), &[3, 2]);
        assert!((result[[0, 0]] - 3.0).abs() < 1e-6);
        assert!((result[[0, 1]] - 6.0).abs() < 1e-6);
        assert!((result[[1, 0]] - 2.0).abs() < 1e-6);
        assert!((result[[1, 1]] - 5.0).abs() < 1e-6);
        assert!((result[[2, 0]] - 1.0).abs() < 1e-6);
        assert!((result[[2, 1]] - 4.0).abs() < 1e-6);
    }

    #[test]
    fn rotate_arrayu8_identity_on_1x1() {
        let input = array![[42u8]];
        let result = rotate_arrayu8(input);
        assert_eq!(result.shape(), &[1, 1]);
        assert_eq!(result[[0, 0]], 42);
    }

    #[test]
    fn rotate_arrayf32_single_row_becomes_column() {
        // 1×3 → 3×1
        let input = array![[1.0f32, 2.0, 3.0]];
        let result = rotate_arrayf32(input);
        assert_eq!(result.shape(), &[3, 1]);
        assert!((result[[0, 0]] - 3.0).abs() < 1e-6);
        assert!((result[[1, 0]] - 2.0).abs() < 1e-6);
        assert!((result[[2, 0]] - 1.0).abs() < 1e-6);
    }

    // ios_f32_array_data_to_ndarray

    #[test]
    fn f32_array_to_ndarray_correct_shape_and_values() {
        let data: Vec<f32> = vec![1.0, 2.0, 3.0, 4.0, 5.0, 6.0];
        let result = ios_f32_array_data_to_ndarray(data.as_ptr(), 3, 2).unwrap();

        assert_eq!(result.shape(), &[2, 3]); // (height, width)
        assert!((result[[0, 0]] - 1.0).abs() < 1e-6);
        assert!((result[[0, 1]] - 2.0).abs() < 1e-6);
        assert!((result[[0, 2]] - 3.0).abs() < 1e-6);
        assert!((result[[1, 0]] - 4.0).abs() < 1e-6);
        assert!((result[[1, 2]] - 6.0).abs() < 1e-6);
    }

    #[test]
    fn f32_array_to_ndarray_1x1() {
        let data: Vec<f32> = vec![99.0];
        let result = ios_f32_array_data_to_ndarray(data.as_ptr(), 1, 1).unwrap();
        assert_eq!(result.shape(), &[1, 1]);
        assert!((result[[0, 0]] - 99.0).abs() < 1e-6);
    }

    // ExecutionError Display

    #[test]
    fn execution_error_fish_not_found_displays_correctly() {
        let err = ExecutionError::FishNotFound;
        assert_eq!(err.to_string(), "FishNotFound");
    }

    #[test]
    fn execution_error_array_shape_error_is_non_empty() {
        // Trigger a real ShapeError via mismatched dimensions
        let shape_err = ndarray::Array2::<f32>::from_shape_vec((2, 3), vec![1.0, 2.0])
            .unwrap_err();
        let err = ExecutionError::ArrayShapeError(shape_err);
        assert!(!err.to_string().is_empty());
    }
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
            left: Coordinate { x: left[0] as usize, y: left[1] as usize },
            right: Coordinate { x: right[0] as usize, y: right[1] as usize },
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