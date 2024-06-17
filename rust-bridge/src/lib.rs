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
use std::{ffi::c_uchar, mem};

use fishsense::fish::FishSegmentation;
use ndarray::Array;

#[no_mangle]
pub extern fn find_head_tail(data: *const c_uchar, width: u32, height: u32) {
    let data_vec = unsafe {
        let data_ptr = libc::malloc((mem::size_of::<u8>() as u32 * width * height * 3) as libc::size_t) as *mut u8;
        if data_ptr.is_null() {
            // TODO: Error
        }

        let length = (width * height * 3) as usize;
        std::ptr::copy(data, data_ptr, length);

        Vec::from_raw_parts(data_ptr, length, length)
    };

    let img_arr = Array::from_vec(data_vec).into_shape((height as usize, width as usize, 3 as usize)).unwrap(); // TODO
    let mut segmentation = FishSegmentation::from_web().unwrap(); // TODO
    segmentation.load_model().unwrap(); // TODO

    let mask = segmentation.inference(&img_arr).unwrap(); // TODO

    println!("this is a test, {}", mask.sum() > 0);
}