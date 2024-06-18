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
use std::{ffi::c_uchar, fs::{create_dir, File}, io::{copy, Cursor, Read}, mem};

use app_dirs2::{app_root, AppDataType, AppInfo};
use fishsense::fish::FishSegmentation;
use ndarray::{Array, Array3};
use ndarray_npy::{NpzReader, NpzWriter};
use opencv::imgcodecs::{self, imdecode};
use reqwest::blocking::get;

#[no_mangle]
pub extern fn find_head_tail(data: *const c_uchar, width: u32, height: u32) {
    println!("RUST: ({}, {})", height, width);

    let data_vec = unsafe {
        let data_ptr = libc::malloc((mem::size_of::<u8>() as u32 * width * height * 3) as libc::size_t) as *mut u8;
        if data_ptr.is_null() {
            // TODO: Error
        }

        let length = (width * height * 3) as usize;
        std::ptr::copy(data, data_ptr, length);

        Vec::from_raw_parts(data_ptr, length, length)
    };

    let img_arr = Array::from_vec(data_vec);//.into_shape((height as usize, width as usize, 3 as usize)).unwrap(); // TODO

    let mut path = app_root(AppDataType::UserData, &AppInfo{
            name: "fishsense-mobile",
            author: "Engineers for Exploration"
    }).unwrap();

    // let mut path = app_root(AppDataType::UserCache, &AppInfo{
    //     name: "fishsense-mobile",
    //     author: "Engineers for Exploration"
    // }).unwrap();

    if !path.exists() {
        create_dir(&path).unwrap();
    }

    path.push("fish_segmentation.npz");
    // // if !path.exists() {
    //     let bytes = get("http://ogre01:9876/api/public/dl/icPC5abq/img8.npz").unwrap().bytes().unwrap();
    //     let mut file = File::create(&path).unwrap();
    //     let mut content =  Cursor::new(bytes);
    //     copy(&mut content, &mut file).unwrap();
    // // }

    {
        let mut npz = NpzWriter::new_compressed(File::create(&path).unwrap());
        npz.add_array("img8", &img_arr).unwrap();
    }

    let file = File::open(path).unwrap();
    let client = reqwest::blocking::Client::new();
    let response = client.put("http://ogre01:9654/fish_segmentation.npz")
        .body(file)
        .send().unwrap();

    println!("RUST: upload url: {}", response.text().unwrap());

    // let mut npz = NpzReader::new(File::open(path).unwrap()).unwrap();
    // let img_arr: Array3<u8> = npz.by_name("img8").unwrap();

    // let mut segmentation = FishSegmentation::from_web().unwrap(); // TODO
    // segmentation.load_model().unwrap(); // TODO

    // let mask = segmentation.inference(&img_arr).unwrap(); // TODO

    // println!("this is a test, {}", mask.sum() > 0);
}