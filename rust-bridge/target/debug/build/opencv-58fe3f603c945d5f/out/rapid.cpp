#include "ocvrs_common.hpp"
#include <opencv2/rapid.hpp>
#include "rapid_types.hpp"

extern "C" {
	void cv_rapid_convertCorrespondencies_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* cols, const cv::_InputArray* srcLocations, const cv::_OutputArray* pts2d, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::convertCorrespondencies(*cols, *srcLocations, *pts2d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_convertCorrespondencies_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputOutputArrayR_const__InputArrayR(const cv::_InputArray* cols, const cv::_InputArray* srcLocations, const cv::_OutputArray* pts2d, const cv::_InputOutputArray* pts3d, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::convertCorrespondencies(*cols, *srcLocations, *pts2d, *pts3d, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_drawCorrespondencies_const__InputOutputArrayR_const__InputArrayR(const cv::_InputOutputArray* bundle, const cv::_InputArray* cols, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::drawCorrespondencies(*bundle, *cols);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_drawCorrespondencies_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputOutputArray* bundle, const cv::_InputArray* cols, const cv::_InputArray* colors, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::drawCorrespondencies(*bundle, *cols, *colors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_drawSearchLines_const__InputOutputArrayR_const__InputArrayR_const_ScalarR(const cv::_InputOutputArray* img, const cv::_InputArray* locations, const cv::Scalar* color, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::drawSearchLines(*img, *locations, *color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_drawWireframe_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const_ScalarR(const cv::_InputOutputArray* img, const cv::_InputArray* pts2d, const cv::_InputArray* tris, const cv::Scalar* color, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::drawWireframe(*img, *pts2d, *tris, *color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_drawWireframe_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const_ScalarR_int_bool(const cv::_InputOutputArray* img, const cv::_InputArray* pts2d, const cv::_InputArray* tris, const cv::Scalar* color, int type, bool cullBackface, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::drawWireframe(*img, *pts2d, *tris, *color, type, cullBackface);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_extractControlPoints_int_int_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(int num, int len, const cv::_InputArray* pts3d, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* K, const cv::Size* imsize, const cv::_InputArray* tris, const cv::_OutputArray* ctl2d, const cv::_OutputArray* ctl3d, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::extractControlPoints(num, len, *pts3d, *rvec, *tvec, *K, *imsize, *tris, *ctl2d, *ctl3d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_extractLineBundle_int_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(int len, const cv::_InputArray* ctl2d, const cv::_InputArray* img, const cv::_OutputArray* bundle, const cv::_OutputArray* srcLocations, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::extractLineBundle(len, *ctl2d, *img, *bundle, *srcLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_findCorrespondencies_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* bundle, const cv::_OutputArray* cols, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::findCorrespondencies(*bundle, *cols);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_findCorrespondencies_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* bundle, const cv::_OutputArray* cols, const cv::_OutputArray* response, ResultVoid* ocvrs_return) {
		try {
			cv::rapid::findCorrespondencies(*bundle, *cols, *response);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_rapid_const__InputArrayR_int_int_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::_InputArray* img, int num, int len, const cv::_InputArray* pts3d, const cv::_InputArray* tris, const cv::_InputArray* K, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, Result<float>* ocvrs_return) {
		try {
			float ret = cv::rapid::rapid(*img, num, len, *pts3d, *tris, *K, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_rapid_const__InputArrayR_int_int_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_doubleX(const cv::_InputArray* img, int num, int len, const cv::_InputArray* pts3d, const cv::_InputArray* tris, const cv::_InputArray* K, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, double* rmsd, Result<float>* ocvrs_return) {
		try {
			float ret = cv::rapid::rapid(*img, num, len, *pts3d, *tris, *K, *rvec, *tvec, rmsd);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_GOSTracker_create_const__InputArrayR_const__InputArrayR_int_unsigned_char(const cv::_InputArray* pts3d, const cv::_InputArray* tris, int histBins, unsigned char sobelThesh, Result<cv::Ptr<cv::rapid::OLSTracker>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rapid::OLSTracker> ret = cv::rapid::GOSTracker::create(*pts3d, *tris, histBins, sobelThesh);
			Ok(new cv::Ptr<cv::rapid::OLSTracker>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_GOSTracker_create_const__InputArrayR_const__InputArrayR(const cv::_InputArray* pts3d, const cv::_InputArray* tris, Result<cv::Ptr<cv::rapid::OLSTracker>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rapid::OLSTracker> ret = cv::rapid::GOSTracker::create(*pts3d, *tris);
			Ok(new cv::Ptr<cv::rapid::OLSTracker>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rapid_GOSTracker_to_Algorithm(cv::rapid::GOSTracker* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rapid::Tracker* cv_rapid_GOSTracker_to_Rapid_Tracker(cv::rapid::GOSTracker* instance) {
			return dynamic_cast<cv::rapid::Tracker*>(instance);
	}
	
	void cv_rapid_GOSTracker_delete(cv::rapid::GOSTracker* instance) {
			delete instance;
	}
	
	void cv_rapid_OLSTracker_create_const__InputArrayR_const__InputArrayR_int_unsigned_char(const cv::_InputArray* pts3d, const cv::_InputArray* tris, int histBins, unsigned char sobelThesh, Result<cv::Ptr<cv::rapid::OLSTracker>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rapid::OLSTracker> ret = cv::rapid::OLSTracker::create(*pts3d, *tris, histBins, sobelThesh);
			Ok(new cv::Ptr<cv::rapid::OLSTracker>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_OLSTracker_create_const__InputArrayR_const__InputArrayR(const cv::_InputArray* pts3d, const cv::_InputArray* tris, Result<cv::Ptr<cv::rapid::OLSTracker>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rapid::OLSTracker> ret = cv::rapid::OLSTracker::create(*pts3d, *tris);
			Ok(new cv::Ptr<cv::rapid::OLSTracker>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rapid_OLSTracker_to_Algorithm(cv::rapid::OLSTracker* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rapid::Tracker* cv_rapid_OLSTracker_to_Rapid_Tracker(cv::rapid::OLSTracker* instance) {
			return dynamic_cast<cv::rapid::Tracker*>(instance);
	}
	
	void cv_rapid_OLSTracker_delete(cv::rapid::OLSTracker* instance) {
			delete instance;
	}
	
	void cv_rapid_Rapid_create_const__InputArrayR_const__InputArrayR(const cv::_InputArray* pts3d, const cv::_InputArray* tris, Result<cv::Ptr<cv::rapid::Rapid>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rapid::Rapid> ret = cv::rapid::Rapid::create(*pts3d, *tris);
			Ok(new cv::Ptr<cv::rapid::Rapid>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rapid_Rapid_to_Algorithm(cv::rapid::Rapid* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rapid::Tracker* cv_rapid_Rapid_to_Rapid_Tracker(cv::rapid::Rapid* instance) {
			return dynamic_cast<cv::rapid::Tracker*>(instance);
	}
	
	void cv_rapid_Rapid_delete(cv::rapid::Rapid* instance) {
			delete instance;
	}
	
	void cv_rapid_Tracker_compute_const__InputArrayR_int_int_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const_TermCriteriaR(cv::rapid::Tracker* instance, const cv::_InputArray* img, int num, int len, const cv::_InputArray* K, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, const cv::TermCriteria* termcrit, Result<float>* ocvrs_return) {
		try {
			float ret = instance->compute(*img, num, len, *K, *rvec, *tvec, *termcrit);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_Tracker_compute_const__InputArrayR_int_int_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(cv::rapid::Tracker* instance, const cv::_InputArray* img, int num, int len, const cv::_InputArray* K, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, Result<float>* ocvrs_return) {
		try {
			float ret = instance->compute(*img, num, len, *K, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rapid_Tracker_clearState(cv::rapid::Tracker* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clearState();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::rapid::GOSTracker* cv_rapid_Tracker_to_Rapid_GOSTracker(cv::rapid::Tracker* instance) {
			return dynamic_cast<cv::rapid::GOSTracker*>(instance);
	}
	
	cv::rapid::OLSTracker* cv_rapid_Tracker_to_Rapid_OLSTracker(cv::rapid::Tracker* instance) {
			return dynamic_cast<cv::rapid::OLSTracker*>(instance);
	}
	
	cv::rapid::Rapid* cv_rapid_Tracker_to_Rapid_Rapid(cv::rapid::Tracker* instance) {
			return dynamic_cast<cv::rapid::Rapid*>(instance);
	}
	
	cv::Algorithm* cv_rapid_Tracker_to_Algorithm(cv::rapid::Tracker* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_rapid_Tracker_delete(cv::rapid::Tracker* instance) {
			delete instance;
	}
	
}
