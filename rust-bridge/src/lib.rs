extern crate libc;
use core::slice;
use std::{ffi::{c_char, c_uchar}, fmt::Display, sync::{LazyLock, Mutex, Once}};

use fishsense_core::errors::FishSenseError;
use fishsense_core::fish::fish_head_tail_detector::FishHeadTailDetector;
use fishsense_core::fish::fish_segmentation::{FishSegmentation, SegmentationError};
use fishsense_core::spatial::types::DepthMap;
use fishsense_core::world_point_handler::WorldPointHandler;
use ndarray::{Array1, Array2, Array3};
use opencv::{core::{Mat, MatTrait, CV_8UC4}, imgproc::{cvt_color_def, COLOR_RGBA2BGR}};
use opencv::prelude::MatTraitConst;
use tracing::{debug, error, info, warn};

static TRACING_INIT: Once = Once::new();

/// The segmentation model is expensive to load (ONNX session init + graph optimizations).
/// Cache it for the process lifetime so it is only initialized once.
static SEGMENTATION: LazyLock<Mutex<FishSegmentation>> = LazyLock::new(|| {
    info!("Loading segmentation model (one-time init)");
    let mut seg = FishSegmentation::new();
    seg.load_model().expect("Failed to load segmentation model");
    info!("Segmentation model ready");
    Mutex::new(seg)
});

/// Initialize the tracing subscriber once per process lifetime.
/// On iOS the output goes to stdout, visible in Xcode's console and `Console.app`.
/// Respects the `RUST_LOG` environment variable (e.g. `RUST_LOG=debug`).
fn init_tracing() {
    TRACING_INIT.call_once(|| {
        tracing_subscriber::fmt()
            .with_env_filter(
                tracing_subscriber::EnvFilter::try_from_default_env()
                    .unwrap_or_else(|_| tracing_subscriber::EnvFilter::new("info")),
            )
            .init();
    });
}

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
    /// Null-terminated UTF-8 error message, or all-zeros when there is no error.
    /// Inline buffer eliminates cross-language heap ownership.
    error_string: [c_char; 256],
}

fn write_error_string(msg: &str) -> [c_char; 256] {
    let mut buf = [0i8; 256];
    for (i, b) in msg.bytes().take(255).enumerate() {
        buf[i] = b as c_char;
    }
    buf
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

fn do_inference(img: Array3<u8>) -> Result<Array2<u8>, ExecutionError> {
    debug!("Running fish segmentation inference on {}x{} image", img.shape()[1], img.shape()[0]);
    let mut segmentation = SEGMENTATION.lock().unwrap();

    match segmentation.inference(&img) {
        Ok(mask) => {
            // Count in usize — mask is Array2<u8>, so the default `sum()` wraps at 256.
            let nonzero = mask.iter().filter(|&&v| v != 0).count();
            if nonzero > 0 {
                info!("Segmentation found fish — {} non-zero pixels in mask", nonzero);
                Ok(mask)
            } else {
                info!("Segmentation returned empty mask — no fish detected");
                Err(ExecutionError::FishNotFound)
            }
        },
        Err(err) => {
            error!("Segmentation inference failed: {}", err);
            Err(ExecutionError::SegmentationError(err))
        }
    }
}

fn inference(img_data: *const c_uchar, img_width: u32, img_height: u32) -> Result<Array2<u8>, ExecutionError> {
    debug!("Converting iOS RGBA image {}x{} to BGR", img_width, img_height);
    let img_cv = ios_image_into_cv_bgr(img_data, img_width, img_height)?;
    let (rows, cols) = (img_cv.rows() as usize, img_cv.cols() as usize);
    let data = unsafe { slice::from_raw_parts(img_cv.data(), rows * cols * 3) };
    let img_arr = Array3::from_shape_vec((rows, cols, 3), data.to_vec())
        .map_err(ExecutionError::ArrayShapeError)?;
    do_inference(img_arr)
}

#[allow(clippy::too_many_arguments)]
fn do_compute_length(
    img_data: *const c_uchar, img_width: u32, img_height: u32,
    depth_data: *const c_uchar, depth_width: u32, depth_height: u32,
    camera_intrinsics_inverted_data: *const f32,
    mask_out: *mut c_uchar,
) -> Result<(f32, Array1<f32>, Array1<f32>), ExecutionError> {
    info!("compute_length: image={}x{} depth={}x{}", img_width, img_height, depth_width, depth_height);

    // Segmentation runs in native camera-frame orientation. The returned mask
    // has shape (img_height, img_width) and head/tail coords come back as
    // [x, y] in the same image-pixel space.
    let mask = inference(img_data, img_width, img_height)?;

    // Copy the mask out to the caller-owned buffer so the UI can draw a
    // segmentation overlay. Using a caller-allocated buffer avoids any
    // cross-language heap ownership concerns.
    if !mask_out.is_null() {
        let total = (img_width as usize) * (img_height as usize);
        let mask_std = mask.as_standard_layout();
        if let Some(src) = mask_std.as_slice() {
            let n = src.len().min(total);
            unsafe { std::ptr::copy_nonoverlapping(src.as_ptr(), mask_out, n); }
        }
    }

    debug!("Loading depth map {}x{}", depth_width, depth_height);
    let depth_array = ios_f32_array_data_to_ndarray(
        depth_data as *const f32,
        depth_width as usize,
        depth_height as usize,
    )?;
    let camera_intrinsics_inverted = ios_f32_array_data_to_ndarray(camera_intrinsics_inverted_data, 3, 3)?;
    let depth_map = DepthMap(depth_array);

    // Stage 1: PCA + polygon-geometry refinement on the mask.
    let detector = FishHeadTailDetector {};
    let coords = detector.find_head_tail_img(&mask)
        .map_err(ExecutionError::HeadTailError)?;
    info!("Head/tail detected — head={:?}, tail={:?}", coords.head.0, coords.tail.0);

    // Stage 2: mask-bounded RANSAC plane fit → per-keypoint depth.
    // Replaces both the v1 depth-snap and naive depth-map sampling: robust to
    // the 1920×1440 mask / 256×192 ARKit depth resolution gap, in-mask depth
    // holes, and fish-on-board coplanarity.
    let (head_depth, tail_depth) = detector.predict_keypoint_depths(
        &depth_map,
        &mask,
        &camera_intrinsics_inverted,
        &coords.head,
        &coords.tail,
    ).map_err(ExecutionError::HeadTailError)?;
    info!("Plane-fit depths — head={:.4}m tail={:.4}m", head_depth, tail_depth);

    let world_point_handler = WorldPointHandler { camera_intrinsics_inverted };
    let head_3d = world_point_handler.compute_world_point_from_depth(&coords.head.0, head_depth);
    let tail_3d = world_point_handler.compute_world_point_from_depth(&coords.tail.0, tail_depth);
    let diff: Array1<f32> = &head_3d - &tail_3d;
    let length = diff.dot(&diff).sqrt();
    info!("Fish length calculated: {:.4}m", length);

    Ok((length, coords.head.0, coords.tail.0))
}

#[cfg(test)]
mod tests {
    use super::*;

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

/// Caller-allocated `mask_out` is a buffer of `img_width * img_height` bytes.
/// On success the segmentation mask is copied there in row-major order.
/// Pass null to skip mask output.
#[unsafe(no_mangle)]
pub extern "C" fn compute_length(
    img_data: *const c_uchar, img_width: u32, img_height: u32, // RGB
    depth_data: *const c_uchar, depth_width: u32, depth_height: u32, // Depth Map
    camera_intrinsics_inverted_data: *const f32,
    mask_out: *mut c_uchar,
) -> ComputeLengthResult {
    init_tracing();
    match do_compute_length(
        img_data, img_width, img_height, // RGB
        depth_data, depth_width, depth_height, // Depth Map
        camera_intrinsics_inverted_data,
        mask_out,
    ) {
        Ok((length, left, right)) => {
            info!("compute_length succeeded: length={:.4}m left={:?} right={:?}", length, left, right);
            ComputeLengthResult {
                length,
                left: Coordinate { x: left[0] as usize, y: left[1] as usize },
                right: Coordinate { x: right[0] as usize, y: right[1] as usize },
                fish_found: true,
                error_string: [0i8; 256],
            }
        },
        Err(error) => {
            match error {
                ExecutionError::FishNotFound => {
                    warn!("compute_length: no fish found in image");
                    ComputeLengthResult {
                        length: 0f32,
                        left: Coordinate { x: 0, y: 0 },
                        right: Coordinate { x: 0, y: 0 },
                        fish_found: false,
                        error_string: [0i8; 256],
                    }
                },
                other => {
                    error!("compute_length error: {}", other);
                    ComputeLengthResult {
                        length: 0f32,
                        left: Coordinate { x: 0, y: 0 },
                        right: Coordinate { x: 0, y: 0 },
                        fish_found: false,
                        error_string: write_error_string(&other.to_string()),
                    }
                },
            }
        }
    }
}