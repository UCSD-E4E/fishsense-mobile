#include "ocvrs_common.hpp"
#include <opencv2/intensity_transform.hpp>
#include "intensity_transform_types.hpp"

extern "C" {
	void cv_intensity_transform_BIMEF_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* input, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::BIMEF(*input, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_intensity_transform_BIMEF_const__InputArrayR_const__OutputArrayR_float_float_float(const cv::_InputArray* input, const cv::_OutputArray* output, float mu, float a, float b, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::BIMEF(*input, *output, mu, a, b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_intensity_transform_BIMEF_const__InputArrayR_const__OutputArrayR_float_float_float_float(const cv::_InputArray* input, const cv::_OutputArray* output, float k, float mu, float a, float b, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::BIMEF(*input, *output, k, mu, a, b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_intensity_transform_autoscaling_const_Mat_MatR(const cv::Mat* input, cv::Mat* output, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::autoscaling(*input, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_intensity_transform_contrastStretching_const_Mat_MatR_const_int_const_int_const_int_const_int(const cv::Mat* input, cv::Mat* output, const int r1, const int s1, const int r2, const int s2, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::contrastStretching(*input, *output, r1, s1, r2, s2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_intensity_transform_gammaCorrection_const_Mat_MatR_const_float(const cv::Mat* input, cv::Mat* output, const float gamma, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::gammaCorrection(*input, *output, gamma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_intensity_transform_logTransform_const_Mat_MatR(const cv::Mat* input, cv::Mat* output, ResultVoid* ocvrs_return) {
		try {
			cv::intensity_transform::logTransform(*input, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
