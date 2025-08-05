#include "ocvrs_common.hpp"
#include <opencv2/fuzzy.hpp>
#include "fuzzy_types.hpp"

extern "C" {
	void cv_ft_FT02D_FL_process_const__InputArrayR_const_int_const__OutputArrayR(const cv::_InputArray* matrix, const int radius, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_FL_process(*matrix, radius, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_FL_process_float_const__InputArrayR_const_int_const__OutputArrayR(const cv::_InputArray* matrix, const int radius, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_FL_process_float(*matrix, radius, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_components_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* components, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_components(*matrix, *kernel, *components);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_components_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* components, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_components(*matrix, *kernel, *components, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_inverseFT_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* components, const cv::_InputArray* kernel, const cv::_OutputArray* output, int width, int height, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_inverseFT(*components, *kernel, *output, width, height);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_iteration_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__OutputArrayR_bool(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* output, const cv::_InputArray* mask, const cv::_OutputArray* maskOutput, bool firstStop, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ft::FT02D_iteration(*matrix, *kernel, *output, *mask, *maskOutput, firstStop);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_process_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_process(*matrix, *kernel, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT02D_process_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* output, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT02D_process(*matrix, *kernel, *output, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_components_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* components, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_components(*matrix, *kernel, *components);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_createPolynomMatrixHorizontal_int_const__OutputArrayR_const_int(int radius, const cv::_OutputArray* matrix, const int chn, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_createPolynomMatrixHorizontal(radius, *matrix, chn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_createPolynomMatrixVertical_int_const__OutputArrayR_const_int(int radius, const cv::_OutputArray* matrix, const int chn, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_createPolynomMatrixVertical(radius, *matrix, chn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_inverseFT_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* components, const cv::_InputArray* kernel, const cv::_OutputArray* output, int width, int height, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_inverseFT(*components, *kernel, *output, width, height);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_polynomial_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* c00, const cv::_OutputArray* c10, const cv::_OutputArray* c01, const cv::_OutputArray* components, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_polynomial(*matrix, *kernel, *c00, *c10, *c01, *components);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_polynomial_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* c00, const cv::_OutputArray* c10, const cv::_OutputArray* c01, const cv::_OutputArray* components, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_polynomial(*matrix, *kernel, *c00, *c10, *c01, *components, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_process_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_process(*matrix, *kernel, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_FT12D_process_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* matrix, const cv::_InputArray* kernel, const cv::_OutputArray* output, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::ft::FT12D_process(*matrix, *kernel, *output, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_createKernel_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const_int(const cv::_InputArray* A, const cv::_InputArray* B, const cv::_OutputArray* kernel, const int chn, ResultVoid* ocvrs_return) {
		try {
			cv::ft::createKernel(*A, *B, *kernel, chn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_createKernel_int_int_const__OutputArrayR_const_int(int function, int radius, const cv::_OutputArray* kernel, const int chn, ResultVoid* ocvrs_return) {
		try {
			cv::ft::createKernel(function, radius, *kernel, chn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_filter_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* image, const cv::_InputArray* kernel, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			cv::ft::filter(*image, *kernel, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ft_inpaint_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int_int(const cv::_InputArray* image, const cv::_InputArray* mask, const cv::_OutputArray* output, int radius, int function, int algorithm, ResultVoid* ocvrs_return) {
		try {
			cv::ft::inpaint(*image, *mask, *output, radius, function, algorithm);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
