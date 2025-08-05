#include "alphamat.hpp"
#include "alphamat_types.hpp"

extern "C" {
	void cv_alphamat_infoFlow_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* image, const cv::_InputArray* tmap, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			cv::alphamat::infoFlow(*image, *tmap, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
