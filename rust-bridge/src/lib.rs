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
use std::ffi::c_uchar;

use cv_convert::TryIntoCv;
use fishsense::fish::FishSegmentation;
use ndarray::Array3;
use opencv::{core::{Mat, MatTrait, CV_8UC4}, imgproc::{cvt_color_def, COLOR_RGBA2BGR}};

#[no_mangle]
pub extern fn find_head_tail(data: *const c_uchar, width: u32, height: u32) {
    let img_cv = unsafe {
        let length = (width * height * 4) as usize;

        let mut img_cv = Mat::new_rows_cols(height as i32, width as i32, CV_8UC4).unwrap(); // TODO
        std::ptr::copy(data, img_cv.ptr_mut(0).unwrap(), length); // TODO

        img_cv
    };

    let mut img_bgr = Mat::default();
    cvt_color_def(&img_cv, &mut img_bgr, COLOR_RGBA2BGR).unwrap(); // TODO
    let img_arr: Array3<u8> = img_bgr.try_into_cv().unwrap(); // TODO

    let mut segmentation = FishSegmentation::from_web().unwrap(); // TODO
    segmentation.load_model().unwrap(); // TODO

    let mask = segmentation.inference(&img_arr).unwrap(); // TODO

    println!("fish found={}", mask.sum() > 0);
}