#[cfg(ocvrs_has_module_calib3d)]
include!(concat!(env!("OUT_DIR"), "/opencv/calib3d.rs"));
#[cfg(ocvrs_has_module_core)]
include!(concat!(env!("OUT_DIR"), "/opencv/core.rs"));
#[cfg(ocvrs_has_module_dnn)]
include!(concat!(env!("OUT_DIR"), "/opencv/dnn.rs"));
#[cfg(ocvrs_has_module_features2d)]
include!(concat!(env!("OUT_DIR"), "/opencv/features2d.rs"));
#[cfg(ocvrs_has_module_flann)]
include!(concat!(env!("OUT_DIR"), "/opencv/flann.rs"));
#[cfg(ocvrs_has_module_gapi)]
include!(concat!(env!("OUT_DIR"), "/opencv/gapi.rs"));
#[cfg(ocvrs_has_module_highgui)]
include!(concat!(env!("OUT_DIR"), "/opencv/highgui.rs"));
#[cfg(ocvrs_has_module_imgcodecs)]
include!(concat!(env!("OUT_DIR"), "/opencv/imgcodecs.rs"));
#[cfg(ocvrs_has_module_imgproc)]
include!(concat!(env!("OUT_DIR"), "/opencv/imgproc.rs"));
#[cfg(ocvrs_has_module_ml)]
include!(concat!(env!("OUT_DIR"), "/opencv/ml.rs"));
#[cfg(ocvrs_has_module_objdetect)]
include!(concat!(env!("OUT_DIR"), "/opencv/objdetect.rs"));
#[cfg(ocvrs_has_module_photo)]
include!(concat!(env!("OUT_DIR"), "/opencv/photo.rs"));
#[cfg(ocvrs_has_module_stitching)]
include!(concat!(env!("OUT_DIR"), "/opencv/stitching.rs"));
#[cfg(ocvrs_has_module_video)]
include!(concat!(env!("OUT_DIR"), "/opencv/video.rs"));
#[cfg(ocvrs_has_module_videoio)]
include!(concat!(env!("OUT_DIR"), "/opencv/videoio.rs"));
pub mod types {
	include!(concat!(env!("OUT_DIR"), "/opencv/types.rs"));
}
#[doc(hidden)]
pub mod sys {
	include!(concat!(env!("OUT_DIR"), "/opencv/sys.rs"));
}
pub mod hub_prelude {
	#[cfg(ocvrs_has_module_calib3d)]
	pub use super::calib3d::prelude::*;
	#[cfg(ocvrs_has_module_core)]
	pub use super::core::prelude::*;
	#[cfg(ocvrs_has_module_dnn)]
	pub use super::dnn::prelude::*;
	#[cfg(ocvrs_has_module_features2d)]
	pub use super::features2d::prelude::*;
	#[cfg(ocvrs_has_module_flann)]
	pub use super::flann::prelude::*;
	#[cfg(ocvrs_has_module_gapi)]
	pub use super::gapi::prelude::*;
	#[cfg(ocvrs_has_module_highgui)]
	pub use super::highgui::prelude::*;
	#[cfg(ocvrs_has_module_imgcodecs)]
	pub use super::imgcodecs::prelude::*;
	#[cfg(ocvrs_has_module_imgproc)]
	pub use super::imgproc::prelude::*;
	#[cfg(ocvrs_has_module_ml)]
	pub use super::ml::prelude::*;
	#[cfg(ocvrs_has_module_objdetect)]
	pub use super::objdetect::prelude::*;
	#[cfg(ocvrs_has_module_photo)]
	pub use super::photo::prelude::*;
	#[cfg(ocvrs_has_module_stitching)]
	pub use super::stitching::prelude::*;
	#[cfg(ocvrs_has_module_video)]
	pub use super::video::prelude::*;
	#[cfg(ocvrs_has_module_videoio)]
	pub use super::videoio::prelude::*;
}
