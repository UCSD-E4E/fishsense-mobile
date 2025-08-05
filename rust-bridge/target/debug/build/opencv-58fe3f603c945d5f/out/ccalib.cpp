#include "ccalib.hpp"
#include "ccalib_types.hpp"

extern "C" {
	void cv_omnidir_calibrate_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* size, const cv::_InputOutputArray* K, const cv::_InputOutputArray* xi, const cv::_InputOutputArray* D, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::omnidir::calibrate(*objectPoints, *imagePoints, *size, *K, *xi, *D, *rvecs, *tvecs, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_calibrate_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* size, const cv::_InputOutputArray* K, const cv::_InputOutputArray* xi, const cv::_InputOutputArray* D, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria, const cv::_OutputArray* idx, Result<double>* ocvrs_return) {
		try {
			double ret = cv::omnidir::calibrate(*objectPoints, *imagePoints, *size, *K, *xi, *D, *rvecs, *tvecs, flags, *criteria, *idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_initUndistortRectifyMap_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_int_const__OutputArrayR_const__OutputArrayR_int(const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* xi, const cv::_InputArray* R, const cv::_InputArray* P, const cv::Size* size, int m1type, const cv::_OutputArray* map1, const cv::_OutputArray* map2, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::initUndistortRectifyMap(*K, *D, *xi, *R, *P, *size, m1type, *map1, *map2, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_projectPoints_const__InputArrayR_const__OutputArrayR_const_Affine3dR_const__InputArrayR_double_const__InputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::Affine3d* affine, const cv::_InputArray* K, double xi, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::projectPoints(*objectPoints, *imagePoints, *affine, *K, xi, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_projectPoints_const__InputArrayR_const__OutputArrayR_const_Affine3dR_const__InputArrayR_double_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::Affine3d* affine, const cv::_InputArray* K, double xi, const cv::_InputArray* D, const cv::_OutputArray* jacobian, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::projectPoints(*objectPoints, *imagePoints, *affine, *K, xi, *D, *jacobian);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_projectPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_double_const__InputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* K, double xi, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::projectPoints(*objectPoints, *imagePoints, *rvec, *tvec, *K, xi, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_projectPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_double_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* K, double xi, const cv::_InputArray* D, const cv::_OutputArray* jacobian, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::projectPoints(*objectPoints, *imagePoints, *rvec, *tvec, *K, xi, *D, *jacobian);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_stereoCalibrate_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const_SizeR_const_SizeR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputOutputArray* objectPoints, const cv::_InputOutputArray* imagePoints1, const cv::_InputOutputArray* imagePoints2, const cv::Size* imageSize1, const cv::Size* imageSize2, const cv::_InputOutputArray* K1, const cv::_InputOutputArray* xi1, const cv::_InputOutputArray* D1, const cv::_InputOutputArray* K2, const cv::_InputOutputArray* xi2, const cv::_InputOutputArray* D2, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, const cv::_OutputArray* rvecsL, const cv::_OutputArray* tvecsL, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::omnidir::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *imageSize1, *imageSize2, *K1, *xi1, *D1, *K2, *xi2, *D2, *rvec, *tvec, *rvecsL, *tvecsL, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_stereoCalibrate_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const_SizeR_const_SizeR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria_const__OutputArrayR(const cv::_InputOutputArray* objectPoints, const cv::_InputOutputArray* imagePoints1, const cv::_InputOutputArray* imagePoints2, const cv::Size* imageSize1, const cv::Size* imageSize2, const cv::_InputOutputArray* K1, const cv::_InputOutputArray* xi1, const cv::_InputOutputArray* D1, const cv::_InputOutputArray* K2, const cv::_InputOutputArray* xi2, const cv::_InputOutputArray* D2, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, const cv::_OutputArray* rvecsL, const cv::_OutputArray* tvecsL, int flags, cv::TermCriteria* criteria, const cv::_OutputArray* idx, Result<double>* ocvrs_return) {
		try {
			double ret = cv::omnidir::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *imageSize1, *imageSize2, *K1, *xi1, *D1, *K2, *xi2, *D2, *rvec, *tvec, *rvecsL, *tvecsL, flags, *criteria, *idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_stereoReconstruct_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_int_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* image1, const cv::_InputArray* image2, const cv::_InputArray* K1, const cv::_InputArray* D1, const cv::_InputArray* xi1, const cv::_InputArray* K2, const cv::_InputArray* D2, const cv::_InputArray* xi2, const cv::_InputArray* R, const cv::_InputArray* T, int flag, int numDisparities, int SADWindowSize, const cv::_OutputArray* disparity, const cv::_OutputArray* image1Rec, const cv::_OutputArray* image2Rec, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::stereoReconstruct(*image1, *image2, *K1, *D1, *xi1, *K2, *D2, *xi2, *R, *T, flag, numDisparities, SADWindowSize, *disparity, *image1Rec, *image2Rec);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_stereoReconstruct_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_int_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const_SizeR_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* image1, const cv::_InputArray* image2, const cv::_InputArray* K1, const cv::_InputArray* D1, const cv::_InputArray* xi1, const cv::_InputArray* K2, const cv::_InputArray* D2, const cv::_InputArray* xi2, const cv::_InputArray* R, const cv::_InputArray* T, int flag, int numDisparities, int SADWindowSize, const cv::_OutputArray* disparity, const cv::_OutputArray* image1Rec, const cv::_OutputArray* image2Rec, const cv::Size* newSize, const cv::_InputArray* Knew, const cv::_OutputArray* pointCloud, int pointType, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::stereoReconstruct(*image1, *image2, *K1, *D1, *xi1, *K2, *D2, *xi2, *R, *T, flag, numDisparities, SADWindowSize, *disparity, *image1Rec, *image2Rec, *newSize, *Knew, *pointCloud, pointType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_stereoRectify_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* R, const cv::_InputArray* T, const cv::_OutputArray* R1, const cv::_OutputArray* R2, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::stereoRectify(*R, *T, *R1, *R2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_undistortImage_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* xi, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::undistortImage(*distorted, *undistorted, *K, *D, *xi, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_undistortImage_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_const__InputArrayR_const_SizeR_const__InputArrayR(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* xi, int flags, const cv::_InputArray* Knew, const cv::Size* new_size, const cv::_InputArray* R, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::undistortImage(*distorted, *undistorted, *K, *D, *xi, flags, *Knew, *new_size, *R);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_omnidir_undistortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* xi, const cv::_InputArray* R, ResultVoid* ocvrs_return) {
		try {
			cv::omnidir::undistortPoints(*distorted, *undistorted, *K, *D, *xi, *R);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_CustomPattern(Result<cv::ccalib::CustomPattern*>* ocvrs_return) {
		try {
			cv::ccalib::CustomPattern* ret = new cv::ccalib::CustomPattern();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_create_const__InputArrayR_const_Size2f_const__OutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* pattern, const cv::Size2f* boardSize, const cv::_OutputArray* output, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create(*pattern, *boardSize, *output);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_create_const__InputArrayR_const_Size2f(cv::ccalib::CustomPattern* instance, const cv::_InputArray* pattern, const cv::Size2f* boardSize, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create(*pattern, *boardSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findPattern_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const_double_const_double_const_bool_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* image, const cv::_OutputArray* matched_features, const cv::_OutputArray* pattern_points, const double ratio, const double proj_error, const bool refine_position, const cv::_OutputArray* out, const cv::_OutputArray* H, const cv::_OutputArray* pattern_corners, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findPattern(*image, *matched_features, *pattern_points, ratio, proj_error, refine_position, *out, *H, *pattern_corners);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findPattern_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* image, const cv::_OutputArray* matched_features, const cv::_OutputArray* pattern_points, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findPattern(*image, *matched_features, *pattern_points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_isInitialized(cv::ccalib::CustomPattern* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isInitialized();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_getPatternPoints_vectorLKeyPointGR(cv::ccalib::CustomPattern* instance, std::vector<cv::KeyPoint>* original_points, ResultVoid* ocvrs_return) {
		try {
			instance->getPatternPoints(*original_points);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_getPixelSize(cv::ccalib::CustomPattern* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getPixelSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_setFeatureDetector_PtrLFeature2DG(cv::ccalib::CustomPattern* instance, cv::Ptr<cv::Feature2D>* featureDetector, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setFeatureDetector(*featureDetector);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_setDescriptorExtractor_PtrLFeature2DG(cv::ccalib::CustomPattern* instance, cv::Ptr<cv::Feature2D>* extractor, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setDescriptorExtractor(*extractor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_setDescriptorMatcher_PtrLDescriptorMatcherG(cv::ccalib::CustomPattern* instance, cv::Ptr<cv::DescriptorMatcher>* matcher, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setDescriptorMatcher(*matcher);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_getFeatureDetector(cv::ccalib::CustomPattern* instance, Result<cv::Ptr<cv::Feature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Feature2D> ret = instance->getFeatureDetector();
			Ok(new cv::Ptr<cv::Feature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_getDescriptorExtractor(cv::ccalib::CustomPattern* instance, Result<cv::Ptr<cv::Feature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Feature2D> ret = instance->getDescriptorExtractor();
			Ok(new cv::Ptr<cv::Feature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_getDescriptorMatcher(cv::ccalib::CustomPattern* instance, Result<cv::Ptr<cv::DescriptorMatcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DescriptorMatcher> ret = instance->getDescriptorMatcher();
			Ok(new cv::Ptr<cv::DescriptorMatcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_calibrate_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(cv::ccalib::CustomPattern* instance, const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = instance->calibrate(*objectPoints, *imagePoints, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_calibrate_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, Result<double>* ocvrs_return) {
		try {
			double ret = instance->calibrate(*objectPoints, *imagePoints, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRt_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_bool_int(cv::ccalib::CustomPattern* instance, const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, bool useExtrinsicGuess, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRt(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRt_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRt(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRt_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_bool_int(cv::ccalib::CustomPattern* instance, const cv::_InputArray* image, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, bool useExtrinsicGuess, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRt(*image, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRt_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* image, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRt(*image, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRtRANSAC_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_bool_int_float_int_const__OutputArrayR_int(cv::ccalib::CustomPattern* instance, const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, bool useExtrinsicGuess, int iterationsCount, float reprojectionError, int minInliersCount, const cv::_OutputArray* inliers, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRtRANSAC(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, iterationsCount, reprojectionError, minInliersCount, *inliers, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRtRANSAC_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRtRANSAC(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRtRANSAC_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_bool_int_float_int_const__OutputArrayR_int(cv::ccalib::CustomPattern* instance, const cv::_InputArray* image, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, bool useExtrinsicGuess, int iterationsCount, float reprojectionError, int minInliersCount, const cv::_OutputArray* inliers, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRtRANSAC(*image, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, iterationsCount, reprojectionError, minInliersCount, *inliers, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_findRtRANSAC_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputArray* image, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->findRtRANSAC(*image, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_drawOrientation_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_double_int(cv::ccalib::CustomPattern* instance, const cv::_InputOutputArray* image, const cv::_InputArray* tvec, const cv::_InputArray* rvec, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, double axis_length, int axis_width, ResultVoid* ocvrs_return) {
		try {
			instance->drawOrientation(*image, *tvec, *rvec, *cameraMatrix, *distCoeffs, axis_length, axis_width);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ccalib_CustomPattern_drawOrientation_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(cv::ccalib::CustomPattern* instance, const cv::_InputOutputArray* image, const cv::_InputArray* tvec, const cv::_InputArray* rvec, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, ResultVoid* ocvrs_return) {
		try {
			instance->drawOrientation(*image, *tvec, *rvec, *cameraMatrix, *distCoeffs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ccalib_CustomPattern_to_Algorithm(cv::ccalib::CustomPattern* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ccalib_CustomPattern_delete(cv::ccalib::CustomPattern* instance) {
			delete instance;
	}
	
	void cv_multicalib_MultiCameraCalibration_MultiCameraCalibration_int_int_const_stringR_float_float_int_int_int_int_TermCriteria_PtrLFeature2DG_PtrLFeature2DG_PtrLDescriptorMatcherG(int cameraType, int nCameras, const char* fileName, float patternWidth, float patternHeight, int verbose, int showExtration, int nMiniMatches, int flags, cv::TermCriteria* criteria, cv::Ptr<cv::Feature2D>* detector, cv::Ptr<cv::Feature2D>* descriptor, cv::Ptr<cv::DescriptorMatcher>* matcher, Result<cv::multicalib::MultiCameraCalibration*>* ocvrs_return) {
		try {
			cv::multicalib::MultiCameraCalibration* ret = new cv::multicalib::MultiCameraCalibration(cameraType, nCameras, std::string(fileName), patternWidth, patternHeight, verbose, showExtration, nMiniMatches, flags, *criteria, *detector, *descriptor, *matcher);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_MultiCameraCalibration_int_int_const_stringR_float_float(int cameraType, int nCameras, const char* fileName, float patternWidth, float patternHeight, Result<cv::multicalib::MultiCameraCalibration*>* ocvrs_return) {
		try {
			cv::multicalib::MultiCameraCalibration* ret = new cv::multicalib::MultiCameraCalibration(cameraType, nCameras, std::string(fileName), patternWidth, patternHeight);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_loadImages(cv::multicalib::MultiCameraCalibration* instance, ResultVoid* ocvrs_return) {
		try {
			instance->loadImages();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_initialize(cv::multicalib::MultiCameraCalibration* instance, ResultVoid* ocvrs_return) {
		try {
			instance->initialize();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_optimizeExtrinsics(cv::multicalib::MultiCameraCalibration* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->optimizeExtrinsics();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_run(cv::multicalib::MultiCameraCalibration* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->run();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_writeParameters_const_stringR(cv::multicalib::MultiCameraCalibration* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->writeParameters(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_delete(cv::multicalib::MultiCameraCalibration* instance) {
			delete instance;
	}
	
	void cv_multicalib_MultiCameraCalibration_edge_edge_int_int_int_Mat(int cv, int pv, int pi, cv::Mat* trans, Result<cv::multicalib::MultiCameraCalibration::edge*>* ocvrs_return) {
		try {
			cv::multicalib::MultiCameraCalibration::edge* ret = new cv::multicalib::MultiCameraCalibration::edge(cv, pv, pi, *trans);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_multicalib_MultiCameraCalibration_edge_propCameraVertex_const(const cv::multicalib::MultiCameraCalibration::edge* instance) {
			int ret = instance->cameraVertex;
			return ret;
	}
	
	void cv_multicalib_MultiCameraCalibration_edge_propCameraVertex_const_int(cv::multicalib::MultiCameraCalibration::edge* instance, const int val) {
			instance->cameraVertex = val;
	}
	
	int cv_multicalib_MultiCameraCalibration_edge_propPhotoVertex_const(const cv::multicalib::MultiCameraCalibration::edge* instance) {
			int ret = instance->photoVertex;
			return ret;
	}
	
	void cv_multicalib_MultiCameraCalibration_edge_propPhotoVertex_const_int(cv::multicalib::MultiCameraCalibration::edge* instance, const int val) {
			instance->photoVertex = val;
	}
	
	int cv_multicalib_MultiCameraCalibration_edge_propPhotoIndex_const(const cv::multicalib::MultiCameraCalibration::edge* instance) {
			int ret = instance->photoIndex;
			return ret;
	}
	
	void cv_multicalib_MultiCameraCalibration_edge_propPhotoIndex_const_int(cv::multicalib::MultiCameraCalibration::edge* instance, const int val) {
			instance->photoIndex = val;
	}
	
	cv::Mat* cv_multicalib_MultiCameraCalibration_edge_propTransform_const(const cv::multicalib::MultiCameraCalibration::edge* instance) {
			cv::Mat ret = instance->transform;
			return new cv::Mat(ret);
	}
	
	void cv_multicalib_MultiCameraCalibration_edge_propTransform_const_Mat(cv::multicalib::MultiCameraCalibration::edge* instance, const cv::Mat* val) {
			instance->transform = *val;
	}
	
	void cv_multicalib_MultiCameraCalibration_edge_delete(cv::multicalib::MultiCameraCalibration::edge* instance) {
			delete instance;
	}
	
	void cv_multicalib_MultiCameraCalibration_vertex_vertex_Mat_int(cv::Mat* po, int ts, Result<cv::multicalib::MultiCameraCalibration::vertex*>* ocvrs_return) {
		try {
			cv::multicalib::MultiCameraCalibration::vertex* ret = new cv::multicalib::MultiCameraCalibration::vertex(*po, ts);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multicalib_MultiCameraCalibration_vertex_vertex(Result<cv::multicalib::MultiCameraCalibration::vertex*>* ocvrs_return) {
		try {
			cv::multicalib::MultiCameraCalibration::vertex* ret = new cv::multicalib::MultiCameraCalibration::vertex();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Mat* cv_multicalib_MultiCameraCalibration_vertex_propPose_const(const cv::multicalib::MultiCameraCalibration::vertex* instance) {
			cv::Mat ret = instance->pose;
			return new cv::Mat(ret);
	}
	
	void cv_multicalib_MultiCameraCalibration_vertex_propPose_const_Mat(cv::multicalib::MultiCameraCalibration::vertex* instance, const cv::Mat* val) {
			instance->pose = *val;
	}
	
	int cv_multicalib_MultiCameraCalibration_vertex_propTimestamp_const(const cv::multicalib::MultiCameraCalibration::vertex* instance) {
			int ret = instance->timestamp;
			return ret;
	}
	
	void cv_multicalib_MultiCameraCalibration_vertex_propTimestamp_const_int(cv::multicalib::MultiCameraCalibration::vertex* instance, const int val) {
			instance->timestamp = val;
	}
	
	void cv_multicalib_MultiCameraCalibration_vertex_delete(cv::multicalib::MultiCameraCalibration::vertex* instance) {
			delete instance;
	}
	
	void cv_randpattern_RandomPatternCornerFinder_RandomPatternCornerFinder_float_float_int_int_int_int_PtrLFeature2DG_PtrLFeature2DG_PtrLDescriptorMatcherG(float patternWidth, float patternHeight, int nminiMatch, int depth, int verbose, int showExtraction, cv::Ptr<cv::Feature2D>* detector, cv::Ptr<cv::Feature2D>* descriptor, cv::Ptr<cv::DescriptorMatcher>* matcher, Result<cv::randpattern::RandomPatternCornerFinder*>* ocvrs_return) {
		try {
			cv::randpattern::RandomPatternCornerFinder* ret = new cv::randpattern::RandomPatternCornerFinder(patternWidth, patternHeight, nminiMatch, depth, verbose, showExtraction, *detector, *descriptor, *matcher);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_RandomPatternCornerFinder_float_float(float patternWidth, float patternHeight, Result<cv::randpattern::RandomPatternCornerFinder*>* ocvrs_return) {
		try {
			cv::randpattern::RandomPatternCornerFinder* ret = new cv::randpattern::RandomPatternCornerFinder(patternWidth, patternHeight);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_loadPattern_const_MatR(cv::randpattern::RandomPatternCornerFinder* instance, const cv::Mat* patternImage, ResultVoid* ocvrs_return) {
		try {
			instance->loadPattern(*patternImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_loadPattern_const_MatR_const_vectorLKeyPointGR_const_MatR(cv::randpattern::RandomPatternCornerFinder* instance, const cv::Mat* patternImage, const std::vector<cv::KeyPoint>* patternKeyPoints, const cv::Mat* patternDescriptors, ResultVoid* ocvrs_return) {
		try {
			instance->loadPattern(*patternImage, *patternKeyPoints, *patternDescriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_computeObjectImagePoints_vectorLMatG(cv::randpattern::RandomPatternCornerFinder* instance, std::vector<cv::Mat>* inputImages, ResultVoid* ocvrs_return) {
		try {
			instance->computeObjectImagePoints(*inputImages);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_computeObjectImagePointsForSingle_Mat(cv::randpattern::RandomPatternCornerFinder* instance, cv::Mat* inputImage, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			std::vector<cv::Mat> ret = instance->computeObjectImagePointsForSingle(*inputImage);
			Ok(new std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_getObjectPoints(cv::randpattern::RandomPatternCornerFinder* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->getObjectPoints();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_getImagePoints(cv::randpattern::RandomPatternCornerFinder* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->getImagePoints();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternCornerFinder_delete(cv::randpattern::RandomPatternCornerFinder* instance) {
			delete instance;
	}
	
	void cv_randpattern_RandomPatternGenerator_RandomPatternGenerator_int_int(int imageWidth, int imageHeight, Result<cv::randpattern::RandomPatternGenerator*>* ocvrs_return) {
		try {
			cv::randpattern::RandomPatternGenerator* ret = new cv::randpattern::RandomPatternGenerator(imageWidth, imageHeight);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternGenerator_generatePattern(cv::randpattern::RandomPatternGenerator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->generatePattern();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternGenerator_getPattern(cv::randpattern::RandomPatternGenerator* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getPattern();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randpattern_RandomPatternGenerator_delete(cv::randpattern::RandomPatternGenerator* instance) {
			delete instance;
	}
	
}
