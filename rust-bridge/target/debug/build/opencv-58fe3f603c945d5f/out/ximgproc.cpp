#include "ocvrs_common.hpp"
#include <opencv2/ximgproc.hpp>
#include "ximgproc_types.hpp"

extern "C" {
	void cv_ximgproc_BrightEdges_MatR_MatR(cv::Mat* _original, cv::Mat* _edgeview, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::BrightEdges(*_original, *_edgeview);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_BrightEdges_MatR_MatR_int_int_int(cv::Mat* _original, cv::Mat* _edgeview, int contrast, int shortrange, int longrange, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::BrightEdges(*_original, *_edgeview, contrast, shortrange, longrange);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_FastHoughTransform_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int dstMatDepth, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::FastHoughTransform(*src, *dst, dstMatDepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_FastHoughTransform_const__InputArrayR_const__OutputArrayR_int_int_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int dstMatDepth, int angleRange, int op, int makeSkew, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::FastHoughTransform(*src, *dst, dstMatDepth, angleRange, op, makeSkew);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_GradientDericheX_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* op, const cv::_OutputArray* dst, double alpha, double omega, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::GradientDericheX(*op, *dst, alpha, omega);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_GradientDericheY_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* op, const cv::_OutputArray* dst, double alpha, double omega, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::GradientDericheY(*op, *dst, alpha, omega);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_GradientPaillouX_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* op, const cv::_OutputArray* _dst, double alpha, double omega, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::GradientPaillouX(*op, *_dst, alpha, omega);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_GradientPaillouY_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* op, const cv::_OutputArray* _dst, double alpha, double omega, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::GradientPaillouY(*op, *_dst, alpha, omega);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_HoughPoint2Line_const_PointR_const__InputArrayR(const cv::Point* houghPoint, const cv::_InputArray* srcImgInfo, Result<cv::Vec4i>* ocvrs_return) {
		try {
			cv::Vec4i ret = cv::ximgproc::HoughPoint2Line(*houghPoint, *srcImgInfo);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_HoughPoint2Line_const_PointR_const__InputArrayR_int_int_int(const cv::Point* houghPoint, const cv::_InputArray* srcImgInfo, int angleRange, int makeSkew, int rules, Result<cv::Vec4i>* ocvrs_return) {
		try {
			cv::Vec4i ret = cv::ximgproc::HoughPoint2Line(*houghPoint, *srcImgInfo, angleRange, makeSkew, rules);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_PeiLinNormalization_const__InputArrayR(const cv::_InputArray* I, Result<cv::Matx23d>* ocvrs_return) {
		try {
			cv::Matx23d ret = cv::ximgproc::PeiLinNormalization(*I);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_PeiLinNormalization_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* I, const cv::_OutputArray* T, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::PeiLinNormalization(*I, *T);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RadonTransform_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::RadonTransform(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RadonTransform_const__InputArrayR_const__OutputArrayR_double_double_double_bool_bool(const cv::_InputArray* src, const cv::_OutputArray* dst, double theta, double start_angle, double end_angle, bool crop, bool norm, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::RadonTransform(*src, *dst, theta, start_angle, end_angle, crop, norm);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_amFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* joint, const cv::_InputArray* src, const cv::_OutputArray* dst, double sigma_s, double sigma_r, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::amFilter(*joint, *src, *dst, sigma_s, sigma_r);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_amFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double_bool(const cv::_InputArray* joint, const cv::_InputArray* src, const cv::_OutputArray* dst, double sigma_s, double sigma_r, bool adjust_outliers, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::amFilter(*joint, *src, *dst, sigma_s, sigma_r, adjust_outliers);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_anisotropicDiffusion_const__InputArrayR_const__OutputArrayR_float_float_int(const cv::_InputArray* src, const cv::_OutputArray* dst, float alpha, float K, int niters, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::anisotropicDiffusion(*src, *dst, alpha, K, niters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_bilateralTextureFilter_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::bilateralTextureFilter(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_bilateralTextureFilter_const__InputArrayR_const__OutputArrayR_int_int_double_double(const cv::_InputArray* src, const cv::_OutputArray* dst, int fr, int numIter, double sigmaAlpha, double sigmaAvg, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::bilateralTextureFilter(*src, *dst, fr, numIter, sigmaAlpha, sigmaAvg);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_colorMatchTemplate_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* img, const cv::_InputArray* templ, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::colorMatchTemplate(*img, *templ, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_computeBadPixelPercent_const__InputArrayR_const__InputArrayR_Rect(const cv::_InputArray* GT, const cv::_InputArray* src, cv::Rect* ROI, Result<double>* ocvrs_return) {
		try {
			double ret = cv::ximgproc::computeBadPixelPercent(*GT, *src, *ROI);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_computeBadPixelPercent_const__InputArrayR_const__InputArrayR_Rect_int(const cv::_InputArray* GT, const cv::_InputArray* src, cv::Rect* ROI, int thresh, Result<double>* ocvrs_return) {
		try {
			double ret = cv::ximgproc::computeBadPixelPercent(*GT, *src, *ROI, thresh);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_computeMSE_const__InputArrayR_const__InputArrayR_Rect(const cv::_InputArray* GT, const cv::_InputArray* src, cv::Rect* ROI, Result<double>* ocvrs_return) {
		try {
			double ret = cv::ximgproc::computeMSE(*GT, *src, *ROI);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_contourSampling_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* out, int nbElt, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::contourSampling(*src, *out, nbElt);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_covarianceEstimation_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int windowRows, int windowCols, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::covarianceEstimation(*src, *dst, windowRows, windowCols);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createAMFilter_double_double(double sigma_s, double sigma_r, Result<cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter> ret = cv::ximgproc::createAMFilter(sigma_s, sigma_r);
			Ok(new cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createAMFilter_double_double_bool(double sigma_s, double sigma_r, bool adjust_outliers, Result<cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter> ret = cv::ximgproc::createAMFilter(sigma_s, sigma_r, adjust_outliers);
			Ok(new cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createContourFitting(Result<cv::Ptr<cv::ximgproc::ContourFitting>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::ContourFitting> ret = cv::ximgproc::createContourFitting();
			Ok(new cv::Ptr<cv::ximgproc::ContourFitting>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createContourFitting_int_int(int ctr, int fd, Result<cv::Ptr<cv::ximgproc::ContourFitting>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::ContourFitting> ret = cv::ximgproc::createContourFitting(ctr, fd);
			Ok(new cv::Ptr<cv::ximgproc::ContourFitting>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createDTFilter_const__InputArrayR_double_double(const cv::_InputArray* guide, double sigmaSpatial, double sigmaColor, Result<cv::Ptr<cv::ximgproc::DTFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::DTFilter> ret = cv::ximgproc::createDTFilter(*guide, sigmaSpatial, sigmaColor);
			Ok(new cv::Ptr<cv::ximgproc::DTFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createDTFilter_const__InputArrayR_double_double_int_int(const cv::_InputArray* guide, double sigmaSpatial, double sigmaColor, int mode, int numIters, Result<cv::Ptr<cv::ximgproc::DTFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::DTFilter> ret = cv::ximgproc::createDTFilter(*guide, sigmaSpatial, sigmaColor, mode, numIters);
			Ok(new cv::Ptr<cv::ximgproc::DTFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createDisparityWLSFilterGeneric_bool(bool use_confidence, Result<cv::Ptr<cv::ximgproc::DisparityWLSFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::DisparityWLSFilter> ret = cv::ximgproc::createDisparityWLSFilterGeneric(use_confidence);
			Ok(new cv::Ptr<cv::ximgproc::DisparityWLSFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createDisparityWLSFilter_PtrLStereoMatcherG(cv::Ptr<cv::StereoMatcher>* matcher_left, Result<cv::Ptr<cv::ximgproc::DisparityWLSFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::DisparityWLSFilter> ret = cv::ximgproc::createDisparityWLSFilter(*matcher_left);
			Ok(new cv::Ptr<cv::ximgproc::DisparityWLSFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createEdgeAwareInterpolator(Result<cv::Ptr<cv::ximgproc::EdgeAwareInterpolator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::EdgeAwareInterpolator> ret = cv::ximgproc::createEdgeAwareInterpolator();
			Ok(new cv::Ptr<cv::ximgproc::EdgeAwareInterpolator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createEdgeBoxes(Result<cv::Ptr<cv::ximgproc::EdgeBoxes>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::EdgeBoxes> ret = cv::ximgproc::createEdgeBoxes();
			Ok(new cv::Ptr<cv::ximgproc::EdgeBoxes>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createEdgeBoxes_float_float_float_float_int_float_float_float_float_float_float_float(float alpha, float beta, float eta, float minScore, int maxBoxes, float edgeMinMag, float edgeMergeThr, float clusterMinMag, float maxAspectRatio, float minBoxArea, float gamma, float kappa, Result<cv::Ptr<cv::ximgproc::EdgeBoxes>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::EdgeBoxes> ret = cv::ximgproc::createEdgeBoxes(alpha, beta, eta, minScore, maxBoxes, edgeMinMag, edgeMergeThr, clusterMinMag, maxAspectRatio, minBoxArea, gamma, kappa);
			Ok(new cv::Ptr<cv::ximgproc::EdgeBoxes>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createEdgeDrawing(Result<cv::Ptr<cv::ximgproc::EdgeDrawing>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::EdgeDrawing> ret = cv::ximgproc::createEdgeDrawing();
			Ok(new cv::Ptr<cv::ximgproc::EdgeDrawing>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createFastBilateralSolverFilter_const__InputArrayR_double_double_double(const cv::_InputArray* guide, double sigma_spatial, double sigma_luma, double sigma_chroma, Result<cv::Ptr<cv::ximgproc::FastBilateralSolverFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::FastBilateralSolverFilter> ret = cv::ximgproc::createFastBilateralSolverFilter(*guide, sigma_spatial, sigma_luma, sigma_chroma);
			Ok(new cv::Ptr<cv::ximgproc::FastBilateralSolverFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createFastBilateralSolverFilter_const__InputArrayR_double_double_double_double_int_double(const cv::_InputArray* guide, double sigma_spatial, double sigma_luma, double sigma_chroma, double lambda, int num_iter, double max_tol, Result<cv::Ptr<cv::ximgproc::FastBilateralSolverFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::FastBilateralSolverFilter> ret = cv::ximgproc::createFastBilateralSolverFilter(*guide, sigma_spatial, sigma_luma, sigma_chroma, lambda, num_iter, max_tol);
			Ok(new cv::Ptr<cv::ximgproc::FastBilateralSolverFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createFastGlobalSmootherFilter_const__InputArrayR_double_double(const cv::_InputArray* guide, double lambda, double sigma_color, Result<cv::Ptr<cv::ximgproc::FastGlobalSmootherFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::FastGlobalSmootherFilter> ret = cv::ximgproc::createFastGlobalSmootherFilter(*guide, lambda, sigma_color);
			Ok(new cv::Ptr<cv::ximgproc::FastGlobalSmootherFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createFastGlobalSmootherFilter_const__InputArrayR_double_double_double_int(const cv::_InputArray* guide, double lambda, double sigma_color, double lambda_attenuation, int num_iter, Result<cv::Ptr<cv::ximgproc::FastGlobalSmootherFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::FastGlobalSmootherFilter> ret = cv::ximgproc::createFastGlobalSmootherFilter(*guide, lambda, sigma_color, lambda_attenuation, num_iter);
			Ok(new cv::Ptr<cv::ximgproc::FastGlobalSmootherFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createFastLineDetector(Result<cv::Ptr<cv::ximgproc::FastLineDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::FastLineDetector> ret = cv::ximgproc::createFastLineDetector();
			Ok(new cv::Ptr<cv::ximgproc::FastLineDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createFastLineDetector_int_float_double_double_int_bool(int length_threshold, float distance_threshold, double canny_th1, double canny_th2, int canny_aperture_size, bool do_merge, Result<cv::Ptr<cv::ximgproc::FastLineDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::FastLineDetector> ret = cv::ximgproc::createFastLineDetector(length_threshold, distance_threshold, canny_th1, canny_th2, canny_aperture_size, do_merge);
			Ok(new cv::Ptr<cv::ximgproc::FastLineDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createGuidedFilter_const__InputArrayR_int_double(const cv::_InputArray* guide, int radius, double eps, Result<cv::Ptr<cv::ximgproc::GuidedFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::GuidedFilter> ret = cv::ximgproc::createGuidedFilter(*guide, radius, eps);
			Ok(new cv::Ptr<cv::ximgproc::GuidedFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createGuidedFilter_const__InputArrayR_int_double_double(const cv::_InputArray* guide, int radius, double eps, double scale, Result<cv::Ptr<cv::ximgproc::GuidedFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::GuidedFilter> ret = cv::ximgproc::createGuidedFilter(*guide, radius, eps, scale);
			Ok(new cv::Ptr<cv::ximgproc::GuidedFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createQuaternionImage_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* img, const cv::_OutputArray* qimg, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::createQuaternionImage(*img, *qimg);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createRFFeatureGetter(Result<cv::Ptr<cv::ximgproc::RFFeatureGetter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::RFFeatureGetter> ret = cv::ximgproc::createRFFeatureGetter();
			Ok(new cv::Ptr<cv::ximgproc::RFFeatureGetter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createRICInterpolator(Result<cv::Ptr<cv::ximgproc::RICInterpolator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::RICInterpolator> ret = cv::ximgproc::createRICInterpolator();
			Ok(new cv::Ptr<cv::ximgproc::RICInterpolator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createRightMatcher_PtrLStereoMatcherG(cv::Ptr<cv::StereoMatcher>* matcher_left, Result<cv::Ptr<cv::StereoMatcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::StereoMatcher> ret = cv::ximgproc::createRightMatcher(*matcher_left);
			Ok(new cv::Ptr<cv::StereoMatcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createScanSegment_int_int_int(int image_width, int image_height, int num_superpixels, Result<cv::Ptr<cv::ximgproc::ScanSegment>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::ScanSegment> ret = cv::ximgproc::createScanSegment(image_width, image_height, num_superpixels);
			Ok(new cv::Ptr<cv::ximgproc::ScanSegment>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createScanSegment_int_int_int_int_bool(int image_width, int image_height, int num_superpixels, int slices, bool merge_small, Result<cv::Ptr<cv::ximgproc::ScanSegment>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::ScanSegment> ret = cv::ximgproc::createScanSegment(image_width, image_height, num_superpixels, slices, merge_small);
			Ok(new cv::Ptr<cv::ximgproc::ScanSegment>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createStructuredEdgeDetection_const_StringR(const char* model, Result<cv::Ptr<cv::ximgproc::StructuredEdgeDetection>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::StructuredEdgeDetection> ret = cv::ximgproc::createStructuredEdgeDetection(std::string(model));
			Ok(new cv::Ptr<cv::ximgproc::StructuredEdgeDetection>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createStructuredEdgeDetection_const_StringR_PtrLconst_RFFeatureGetterG(const char* model, const cv::Ptr<const cv::ximgproc::RFFeatureGetter>* howToGetFeatures, Result<cv::Ptr<cv::ximgproc::StructuredEdgeDetection>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::StructuredEdgeDetection> ret = cv::ximgproc::createStructuredEdgeDetection(std::string(model), *howToGetFeatures);
			Ok(new cv::Ptr<cv::ximgproc::StructuredEdgeDetection>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createSuperpixelLSC_const__InputArrayR(const cv::_InputArray* image, Result<cv::Ptr<cv::ximgproc::SuperpixelLSC>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::SuperpixelLSC> ret = cv::ximgproc::createSuperpixelLSC(*image);
			Ok(new cv::Ptr<cv::ximgproc::SuperpixelLSC>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createSuperpixelLSC_const__InputArrayR_int_float(const cv::_InputArray* image, int region_size, float ratio, Result<cv::Ptr<cv::ximgproc::SuperpixelLSC>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::SuperpixelLSC> ret = cv::ximgproc::createSuperpixelLSC(*image, region_size, ratio);
			Ok(new cv::Ptr<cv::ximgproc::SuperpixelLSC>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createSuperpixelSEEDS_int_int_int_int_int(int image_width, int image_height, int image_channels, int num_superpixels, int num_levels, Result<cv::Ptr<cv::ximgproc::SuperpixelSEEDS>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::SuperpixelSEEDS> ret = cv::ximgproc::createSuperpixelSEEDS(image_width, image_height, image_channels, num_superpixels, num_levels);
			Ok(new cv::Ptr<cv::ximgproc::SuperpixelSEEDS>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createSuperpixelSEEDS_int_int_int_int_int_int_int_bool(int image_width, int image_height, int image_channels, int num_superpixels, int num_levels, int prior, int histogram_bins, bool double_step, Result<cv::Ptr<cv::ximgproc::SuperpixelSEEDS>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::SuperpixelSEEDS> ret = cv::ximgproc::createSuperpixelSEEDS(image_width, image_height, image_channels, num_superpixels, num_levels, prior, histogram_bins, double_step);
			Ok(new cv::Ptr<cv::ximgproc::SuperpixelSEEDS>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createSuperpixelSLIC_const__InputArrayR(const cv::_InputArray* image, Result<cv::Ptr<cv::ximgproc::SuperpixelSLIC>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::SuperpixelSLIC> ret = cv::ximgproc::createSuperpixelSLIC(*image);
			Ok(new cv::Ptr<cv::ximgproc::SuperpixelSLIC>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_createSuperpixelSLIC_const__InputArrayR_int_int_float(const cv::_InputArray* image, int algorithm, int region_size, float ruler, Result<cv::Ptr<cv::ximgproc::SuperpixelSLIC>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::SuperpixelSLIC> ret = cv::ximgproc::createSuperpixelSLIC(*image, algorithm, region_size, ruler);
			Ok(new cv::Ptr<cv::ximgproc::SuperpixelSLIC>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_dtFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_OutputArray* dst, double sigmaSpatial, double sigmaColor, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::dtFilter(*guide, *src, *dst, sigmaSpatial, sigmaColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_dtFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double_int_int(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_OutputArray* dst, double sigmaSpatial, double sigmaColor, int mode, int numIters, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::dtFilter(*guide, *src, *dst, sigmaSpatial, sigmaColor, mode, numIters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_edgePreservingFilter_const__InputArrayR_const__OutputArrayR_int_double(const cv::_InputArray* src, const cv::_OutputArray* dst, int d, double threshold, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::edgePreservingFilter(*src, *dst, d, threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_fastBilateralSolverFilter_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_InputArray* confidence, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::fastBilateralSolverFilter(*guide, *src, *confidence, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_fastBilateralSolverFilter_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double_double_double_int_double(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_InputArray* confidence, const cv::_OutputArray* dst, double sigma_spatial, double sigma_luma, double sigma_chroma, double lambda, int num_iter, double max_tol, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::fastBilateralSolverFilter(*guide, *src, *confidence, *dst, sigma_spatial, sigma_luma, sigma_chroma, lambda, num_iter, max_tol);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_fastGlobalSmootherFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_OutputArray* dst, double lambda, double sigma_color, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::fastGlobalSmootherFilter(*guide, *src, *dst, lambda, sigma_color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_fastGlobalSmootherFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_double_double_int(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_OutputArray* dst, double lambda, double sigma_color, double lambda_attenuation, int num_iter, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::fastGlobalSmootherFilter(*guide, *src, *dst, lambda, sigma_color, lambda_attenuation, num_iter);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_findEllipses_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* image, const cv::_OutputArray* ellipses, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::findEllipses(*image, *ellipses);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_findEllipses_const__InputArrayR_const__OutputArrayR_float_float_float(const cv::_InputArray* image, const cv::_OutputArray* ellipses, float scoreThreshold, float reliabilityThreshold, float centerDistanceThreshold, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::findEllipses(*image, *ellipses, scoreThreshold, reliabilityThreshold, centerDistanceThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_fourierDescriptor_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::fourierDescriptor(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_fourierDescriptor_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int nbElt, int nbFD, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::fourierDescriptor(*src, *dst, nbElt, nbFD);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_getDisparityVis_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::getDisparityVis(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_getDisparityVis_const__InputArrayR_const__OutputArrayR_double(const cv::_InputArray* src, const cv::_OutputArray* dst, double scale, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::getDisparityVis(*src, *dst, scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_guidedFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_OutputArray* dst, int radius, double eps, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::guidedFilter(*guide, *src, *dst, radius, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_guidedFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_int_double(const cv::_InputArray* guide, const cv::_InputArray* src, const cv::_OutputArray* dst, int radius, double eps, int dDepth, double scale, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::guidedFilter(*guide, *src, *dst, radius, eps, dDepth, scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_jointBilateralFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_double(const cv::_InputArray* joint, const cv::_InputArray* src, const cv::_OutputArray* dst, int d, double sigmaColor, double sigmaSpace, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::jointBilateralFilter(*joint, *src, *dst, d, sigmaColor, sigmaSpace);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_jointBilateralFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_double_int(const cv::_InputArray* joint, const cv::_InputArray* src, const cv::_OutputArray* dst, int d, double sigmaColor, double sigmaSpace, int borderType, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::jointBilateralFilter(*joint, *src, *dst, d, sigmaColor, sigmaSpace, borderType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_l0Smooth_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::l0Smooth(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_l0Smooth_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* src, const cv::_OutputArray* dst, double lambda, double kappa, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::l0Smooth(*src, *dst, lambda, kappa);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_niBlackThreshold_const__InputArrayR_const__OutputArrayR_double_int_int_double(const cv::_InputArray* _src, const cv::_OutputArray* _dst, double maxValue, int type, int blockSize, double k, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::niBlackThreshold(*_src, *_dst, maxValue, type, blockSize, k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_niBlackThreshold_const__InputArrayR_const__OutputArrayR_double_int_int_double_int_double(const cv::_InputArray* _src, const cv::_OutputArray* _dst, double maxValue, int type, int blockSize, double k, int binarizationMethod, double r, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::niBlackThreshold(*_src, *_dst, maxValue, type, blockSize, k, binarizationMethod, r);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_qconj_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* qimg, const cv::_OutputArray* qcimg, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::qconj(*qimg, *qcimg);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_qdft_const__InputArrayR_const__OutputArrayR_int_bool(const cv::_InputArray* img, const cv::_OutputArray* qimg, int flags, bool sideLeft, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::qdft(*img, *qimg, flags, sideLeft);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_qmultiply_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::qmultiply(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_qunitary_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* qimg, const cv::_OutputArray* qnimg, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::qunitary(*qimg, *qnimg);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_readGT_String_const__OutputArrayR(const char* src_path, const cv::_OutputArray* dst, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ximgproc::readGT(std::string(src_path), *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_createRLEImage_const_vectorLPoint3iGR_const__OutputArrayR(const std::vector<cv::Point3i>* runs, const cv::_OutputArray* res, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::createRLEImage(*runs, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_createRLEImage_const_vectorLPoint3iGR_const__OutputArrayR_Size(const std::vector<cv::Point3i>* runs, const cv::_OutputArray* res, cv::Size* size, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::createRLEImage(*runs, *res, *size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_dilate_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* rlSrc, const cv::_OutputArray* rlDest, const cv::_InputArray* rlKernel, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::dilate(*rlSrc, *rlDest, *rlKernel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_dilate_const__InputArrayR_const__OutputArrayR_const__InputArrayR_Point(const cv::_InputArray* rlSrc, const cv::_OutputArray* rlDest, const cv::_InputArray* rlKernel, cv::Point* anchor, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::dilate(*rlSrc, *rlDest, *rlKernel, *anchor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_erode_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* rlSrc, const cv::_OutputArray* rlDest, const cv::_InputArray* rlKernel, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::erode(*rlSrc, *rlDest, *rlKernel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_erode_const__InputArrayR_const__OutputArrayR_const__InputArrayR_bool_Point(const cv::_InputArray* rlSrc, const cv::_OutputArray* rlDest, const cv::_InputArray* rlKernel, bool bBoundaryOn, cv::Point* anchor, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::erode(*rlSrc, *rlDest, *rlKernel, bBoundaryOn, *anchor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_getStructuringElement_int_Size(int shape, cv::Size* ksize, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::ximgproc::rl::getStructuringElement(shape, *ksize);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_isRLMorphologyPossible_const__InputArrayR(const cv::_InputArray* rlStructuringElement, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ximgproc::rl::isRLMorphologyPossible(*rlStructuringElement);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_morphologyEx_const__InputArrayR_const__OutputArrayR_int_const__InputArrayR(const cv::_InputArray* rlSrc, const cv::_OutputArray* rlDest, int op, const cv::_InputArray* rlKernel, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::morphologyEx(*rlSrc, *rlDest, op, *rlKernel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_morphologyEx_const__InputArrayR_const__OutputArrayR_int_const__InputArrayR_bool_Point(const cv::_InputArray* rlSrc, const cv::_OutputArray* rlDest, int op, const cv::_InputArray* rlKernel, bool bBoundaryOnForErosion, cv::Point* anchor, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::morphologyEx(*rlSrc, *rlDest, op, *rlKernel, bBoundaryOnForErosion, *anchor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_paint_const__InputOutputArrayR_const__InputArrayR_const_ScalarR(const cv::_InputOutputArray* image, const cv::_InputArray* rlSrc, const cv::Scalar* value, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::paint(*image, *rlSrc, *value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rl_threshold_const__InputArrayR_const__OutputArrayR_double_int(const cv::_InputArray* src, const cv::_OutputArray* rlDest, double thresh, int type, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rl::threshold(*src, *rlDest, thresh, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rollingGuidanceFilter_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rollingGuidanceFilter(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_rollingGuidanceFilter_const__InputArrayR_const__OutputArrayR_int_double_double_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int d, double sigmaColor, double sigmaSpace, int numOfIter, int borderType, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::rollingGuidanceFilter(*src, *dst, d, sigmaColor, sigmaSpace, numOfIter, borderType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createGraphSegmentation(Result<cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation> ret = cv::ximgproc::segmentation::createGraphSegmentation();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createGraphSegmentation_double_float_int(double sigma, float k, int min_size, Result<cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation> ret = cv::ximgproc::segmentation::createGraphSegmentation(sigma, k, min_size);
			Ok(new cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentation(Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentation();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentation>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyColor(Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyColor();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyFill(Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyFill();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyMultiple(Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyMultiple_PtrLSelectiveSearchSegmentationStrategyG(cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s1, Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(*s1);
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyMultiple_PtrLSelectiveSearchSegmentationStrategyG_PtrLSelectiveSearchSegmentationStrategyG(cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s1, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s2, Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(*s1, *s2);
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyMultiple_PtrLSelectiveSearchSegmentationStrategyG_PtrLSelectiveSearchSegmentationStrategyG_PtrLSelectiveSearchSegmentationStrategyG(cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s1, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s2, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s3, Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(*s1, *s2, *s3);
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyMultiple_PtrLSelectiveSearchSegmentationStrategyG_PtrLSelectiveSearchSegmentationStrategyG_PtrLSelectiveSearchSegmentationStrategyG_PtrLSelectiveSearchSegmentationStrategyG(cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s1, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s2, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s3, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s4, Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyMultiple(*s1, *s2, *s3, *s4);
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategySize(Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategySize();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_createSelectiveSearchSegmentationStrategyTexture(Result<cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture> ret = cv::ximgproc::segmentation::createSelectiveSearchSegmentationStrategyTexture();
			Ok(new cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_thinning_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::thinning(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_thinning_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int thinningType, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::thinning(*src, *dst, thinningType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_transformFD_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputArray* t, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::transformFD(*src, *t, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_transformFD_const__InputArrayR_const__InputArrayR_const__OutputArrayR_bool(const cv::_InputArray* src, const cv::_InputArray* t, const cv::_OutputArray* dst, bool fdContour, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::transformFD(*src, *t, *dst, fdContour);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_weightedMedianFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* joint, const cv::_InputArray* src, const cv::_OutputArray* dst, int r, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::weightedMedianFilter(*joint, *src, *dst, r);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_weightedMedianFilter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_int_const__InputArrayR(const cv::_InputArray* joint, const cv::_InputArray* src, const cv::_OutputArray* dst, int r, double sigma, int weightType, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::ximgproc::weightedMedianFilter(*joint, *src, *dst, r, sigma, weightType, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_filter_const__InputArrayR_const__OutputArrayR_const__InputArrayR(cv::ximgproc::AdaptiveManifoldFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* joint, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst, *joint);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_filter_const__InputArrayR_const__OutputArrayR(cv::ximgproc::AdaptiveManifoldFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_collectGarbage(cv::ximgproc::AdaptiveManifoldFilter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_create(Result<cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter> ret = cv::ximgproc::AdaptiveManifoldFilter::create();
			Ok(new cv::Ptr<cv::ximgproc::AdaptiveManifoldFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_getSigmaS_const(const cv::ximgproc::AdaptiveManifoldFilter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSigmaS();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_setSigmaS_double(cv::ximgproc::AdaptiveManifoldFilter* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaS(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_getSigmaR_const(const cv::ximgproc::AdaptiveManifoldFilter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSigmaR();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_setSigmaR_double(cv::ximgproc::AdaptiveManifoldFilter* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaR(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_getTreeHeight_const(const cv::ximgproc::AdaptiveManifoldFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTreeHeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_setTreeHeight_int(cv::ximgproc::AdaptiveManifoldFilter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTreeHeight(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_getPCAIterations_const(const cv::ximgproc::AdaptiveManifoldFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPCAIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_setPCAIterations_int(cv::ximgproc::AdaptiveManifoldFilter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setPCAIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_getAdjustOutliers_const(const cv::ximgproc::AdaptiveManifoldFilter* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getAdjustOutliers();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_setAdjustOutliers_bool(cv::ximgproc::AdaptiveManifoldFilter* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setAdjustOutliers(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_getUseRNG_const(const cv::ximgproc::AdaptiveManifoldFilter* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseRNG();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_setUseRNG_bool(cv::ximgproc::AdaptiveManifoldFilter* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseRNG(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_AdaptiveManifoldFilter_to_Algorithm(cv::ximgproc::AdaptiveManifoldFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_AdaptiveManifoldFilter_delete(cv::ximgproc::AdaptiveManifoldFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_ContourFitting_ContourFitting_int_int(int ctr, int fd, Result<cv::ximgproc::ContourFitting*>* ocvrs_return) {
		try {
			cv::ximgproc::ContourFitting* ret = new cv::ximgproc::ContourFitting(ctr, fd);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_ContourFitting(Result<cv::ximgproc::ContourFitting*>* ocvrs_return) {
		try {
			cv::ximgproc::ContourFitting* ret = new cv::ximgproc::ContourFitting();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_estimateTransformation_const__InputArrayR_const__InputArrayR_const__OutputArrayR_doubleX_bool(cv::ximgproc::ContourFitting* instance, const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* alphaPhiST, double* dist, bool fdContour, ResultVoid* ocvrs_return) {
		try {
			instance->estimateTransformation(*src, *dst, *alphaPhiST, dist, fdContour);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_estimateTransformation_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::ximgproc::ContourFitting* instance, const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* alphaPhiST, ResultVoid* ocvrs_return) {
		try {
			instance->estimateTransformation(*src, *dst, *alphaPhiST);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_estimateTransformation_const__InputArrayR_const__InputArrayR_const__OutputArrayR_doubleR_bool(cv::ximgproc::ContourFitting* instance, const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* alphaPhiST, double* dist, bool fdContour, ResultVoid* ocvrs_return) {
		try {
			instance->estimateTransformation(*src, *dst, *alphaPhiST, *dist, fdContour);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_estimateTransformation_const__InputArrayR_const__InputArrayR_const__OutputArrayR_doubleR(cv::ximgproc::ContourFitting* instance, const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* alphaPhiST, double* dist, ResultVoid* ocvrs_return) {
		try {
			instance->estimateTransformation(*src, *dst, *alphaPhiST, *dist);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_setCtrSize_int(cv::ximgproc::ContourFitting* instance, int n, ResultVoid* ocvrs_return) {
		try {
			instance->setCtrSize(n);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_setFDSize_int(cv::ximgproc::ContourFitting* instance, int n, ResultVoid* ocvrs_return) {
		try {
			instance->setFDSize(n);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_getCtrSize(cv::ximgproc::ContourFitting* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getCtrSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ContourFitting_getFDSize(cv::ximgproc::ContourFitting* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFDSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_ContourFitting_to_Algorithm(cv::ximgproc::ContourFitting* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_ContourFitting_delete(cv::ximgproc::ContourFitting* instance) {
			delete instance;
	}
	
	void cv_ximgproc_DTFilter_filter_const__InputArrayR_const__OutputArrayR_int(cv::ximgproc::DTFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, int dDepth, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst, dDepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DTFilter_filter_const__InputArrayR_const__OutputArrayR(cv::ximgproc::DTFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_DTFilter_to_Algorithm(cv::ximgproc::DTFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_DTFilter_delete(cv::ximgproc::DTFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_DisparityFilter_filter_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR_Rect_const__InputArrayR(cv::ximgproc::DisparityFilter* instance, const cv::_InputArray* disparity_map_left, const cv::_InputArray* left_view, const cv::_OutputArray* filtered_disparity_map, const cv::_InputArray* disparity_map_right, cv::Rect* ROI, const cv::_InputArray* right_view, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*disparity_map_left, *left_view, *filtered_disparity_map, *disparity_map_right, *ROI, *right_view);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityFilter_filter_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::ximgproc::DisparityFilter* instance, const cv::_InputArray* disparity_map_left, const cv::_InputArray* left_view, const cv::_OutputArray* filtered_disparity_map, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*disparity_map_left, *left_view, *filtered_disparity_map);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ximgproc::DisparityWLSFilter* cv_ximgproc_DisparityFilter_to_DisparityWLSFilter(cv::ximgproc::DisparityFilter* instance) {
			return dynamic_cast<cv::ximgproc::DisparityWLSFilter*>(instance);
	}
	
	cv::Algorithm* cv_ximgproc_DisparityFilter_to_Algorithm(cv::ximgproc::DisparityFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_DisparityFilter_delete(cv::ximgproc::DisparityFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_DisparityWLSFilter_getLambda(cv::ximgproc::DisparityWLSFilter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_setLambda_double(cv::ximgproc::DisparityWLSFilter* instance, double _lambda, ResultVoid* ocvrs_return) {
		try {
			instance->setLambda(_lambda);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_getSigmaColor(cv::ximgproc::DisparityWLSFilter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSigmaColor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_setSigmaColor_double(cv::ximgproc::DisparityWLSFilter* instance, double _sigma_color, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaColor(_sigma_color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_getLRCthresh(cv::ximgproc::DisparityWLSFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLRCthresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_setLRCthresh_int(cv::ximgproc::DisparityWLSFilter* instance, int _LRC_thresh, ResultVoid* ocvrs_return) {
		try {
			instance->setLRCthresh(_LRC_thresh);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_getDepthDiscontinuityRadius(cv::ximgproc::DisparityWLSFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDepthDiscontinuityRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_setDepthDiscontinuityRadius_int(cv::ximgproc::DisparityWLSFilter* instance, int _disc_radius, ResultVoid* ocvrs_return) {
		try {
			instance->setDepthDiscontinuityRadius(_disc_radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_getConfidenceMap(cv::ximgproc::DisparityWLSFilter* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getConfidenceMap();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_DisparityWLSFilter_getROI(cv::ximgproc::DisparityWLSFilter* instance, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->getROI();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_DisparityWLSFilter_to_Algorithm(cv::ximgproc::DisparityWLSFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::DisparityFilter* cv_ximgproc_DisparityWLSFilter_to_DisparityFilter(cv::ximgproc::DisparityWLSFilter* instance) {
			return dynamic_cast<cv::ximgproc::DisparityFilter*>(instance);
	}
	
	void cv_ximgproc_DisparityWLSFilter_delete(cv::ximgproc::DisparityWLSFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setCostMap_const_MatR(cv::ximgproc::EdgeAwareInterpolator* instance, const cv::Mat* _costMap, ResultVoid* ocvrs_return) {
		try {
			instance->setCostMap(*_costMap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setK_int(cv::ximgproc::EdgeAwareInterpolator* instance, int _k, ResultVoid* ocvrs_return) {
		try {
			instance->setK(_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_getK(cv::ximgproc::EdgeAwareInterpolator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getK();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setSigma_float(cv::ximgproc::EdgeAwareInterpolator* instance, float _sigma, ResultVoid* ocvrs_return) {
		try {
			instance->setSigma(_sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_getSigma(cv::ximgproc::EdgeAwareInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setLambda_float(cv::ximgproc::EdgeAwareInterpolator* instance, float _lambda, ResultVoid* ocvrs_return) {
		try {
			instance->setLambda(_lambda);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_getLambda(cv::ximgproc::EdgeAwareInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setUsePostProcessing_bool(cv::ximgproc::EdgeAwareInterpolator* instance, bool _use_post_proc, ResultVoid* ocvrs_return) {
		try {
			instance->setUsePostProcessing(_use_post_proc);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_getUsePostProcessing(cv::ximgproc::EdgeAwareInterpolator* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUsePostProcessing();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setFGSLambda_float(cv::ximgproc::EdgeAwareInterpolator* instance, float _lambda, ResultVoid* ocvrs_return) {
		try {
			instance->setFGSLambda(_lambda);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_getFGSLambda(cv::ximgproc::EdgeAwareInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFGSLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_setFGSSigma_float(cv::ximgproc::EdgeAwareInterpolator* instance, float _sigma, ResultVoid* ocvrs_return) {
		try {
			instance->setFGSSigma(_sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_getFGSSigma(cv::ximgproc::EdgeAwareInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFGSSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_EdgeAwareInterpolator_to_Algorithm(cv::ximgproc::EdgeAwareInterpolator* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::SparseMatchInterpolator* cv_ximgproc_EdgeAwareInterpolator_to_SparseMatchInterpolator(cv::ximgproc::EdgeAwareInterpolator* instance) {
			return dynamic_cast<cv::ximgproc::SparseMatchInterpolator*>(instance);
	}
	
	void cv_ximgproc_EdgeAwareInterpolator_delete(cv::ximgproc::EdgeAwareInterpolator* instance) {
			delete instance;
	}
	
	void cv_ximgproc_EdgeBoxes_getBoundingBoxes_const__InputArrayR_const__InputArrayR_vectorLRectGR_const__OutputArrayR(cv::ximgproc::EdgeBoxes* instance, const cv::_InputArray* edge_map, const cv::_InputArray* orientation_map, std::vector<cv::Rect>* boxes, const cv::_OutputArray* scores, ResultVoid* ocvrs_return) {
		try {
			instance->getBoundingBoxes(*edge_map, *orientation_map, *boxes, *scores);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getBoundingBoxes_const__InputArrayR_const__InputArrayR_vectorLRectGR(cv::ximgproc::EdgeBoxes* instance, const cv::_InputArray* edge_map, const cv::_InputArray* orientation_map, std::vector<cv::Rect>* boxes, ResultVoid* ocvrs_return) {
		try {
			instance->getBoundingBoxes(*edge_map, *orientation_map, *boxes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getAlpha_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getAlpha();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setAlpha_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setAlpha(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getBeta_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getBeta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setBeta_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setBeta(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getEta_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getEta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setEta_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setEta(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getMinScore_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMinScore();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setMinScore_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setMinScore(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getMaxBoxes_const(const cv::ximgproc::EdgeBoxes* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxBoxes();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setMaxBoxes_int(cv::ximgproc::EdgeBoxes* instance, int value, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxBoxes(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getEdgeMinMag_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getEdgeMinMag();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setEdgeMinMag_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setEdgeMinMag(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getEdgeMergeThr_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getEdgeMergeThr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setEdgeMergeThr_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setEdgeMergeThr(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getClusterMinMag_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getClusterMinMag();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setClusterMinMag_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setClusterMinMag(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getMaxAspectRatio_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMaxAspectRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setMaxAspectRatio_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxAspectRatio(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getMinBoxArea_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMinBoxArea();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setMinBoxArea_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setMinBoxArea(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getGamma_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getGamma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setGamma_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setGamma(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_getKappa_const(const cv::ximgproc::EdgeBoxes* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getKappa();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeBoxes_setKappa_float(cv::ximgproc::EdgeBoxes* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setKappa(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_EdgeBoxes_to_Algorithm(cv::ximgproc::EdgeBoxes* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_EdgeBoxes_delete(cv::ximgproc::EdgeBoxes* instance) {
			delete instance;
	}
	
	void cv_ximgproc_EdgeDrawing_detectEdges_const__InputArrayR(cv::ximgproc::EdgeDrawing* instance, const cv::_InputArray* src, ResultVoid* ocvrs_return) {
		try {
			instance->detectEdges(*src);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_getEdgeImage_const__OutputArrayR(cv::ximgproc::EdgeDrawing* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->getEdgeImage(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_getGradientImage_const__OutputArrayR(cv::ximgproc::EdgeDrawing* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->getGradientImage(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_getSegments(cv::ximgproc::EdgeDrawing* instance, Result<std::vector<std::vector<cv::Point>>*>* ocvrs_return) {
		try {
			std::vector<std::vector<cv::Point>> ret = instance->getSegments();
			Ok(new std::vector<std::vector<cv::Point>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_getSegmentIndicesOfLines_const(const cv::ximgproc::EdgeDrawing* instance, Result<std::vector<int>*>* ocvrs_return) {
		try {
			std::vector<int> ret = instance->getSegmentIndicesOfLines();
			Ok(new std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_detectLines_const__OutputArrayR(cv::ximgproc::EdgeDrawing* instance, const cv::_OutputArray* lines, ResultVoid* ocvrs_return) {
		try {
			instance->detectLines(*lines);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_detectEllipses_const__OutputArrayR(cv::ximgproc::EdgeDrawing* instance, const cv::_OutputArray* ellipses, ResultVoid* ocvrs_return) {
		try {
			instance->detectEllipses(*ellipses);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_setParams_const_ParamsR(cv::ximgproc::EdgeDrawing* instance, const cv::ximgproc::EdgeDrawing::Params* parameters, ResultVoid* ocvrs_return) {
		try {
			instance->setParams(*parameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_propParams_const(const cv::ximgproc::EdgeDrawing* instance, cv::ximgproc::EdgeDrawing::Params* ocvrs_return) {
			cv::ximgproc::EdgeDrawing::Params ret = instance->params;
			*ocvrs_return = ret;
	}
	
	void cv_ximgproc_EdgeDrawing_propParams_const_Params(cv::ximgproc::EdgeDrawing* instance, const cv::ximgproc::EdgeDrawing::Params* val) {
			instance->params = *val;
	}
	
	cv::Algorithm* cv_ximgproc_EdgeDrawing_to_Algorithm(cv::ximgproc::EdgeDrawing* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_EdgeDrawing_delete(cv::ximgproc::EdgeDrawing* instance) {
			delete instance;
	}
	
	void cv_ximgproc_EdgeDrawing_Params_Params(Result<cv::ximgproc::EdgeDrawing::Params>* ocvrs_return) {
		try {
			cv::ximgproc::EdgeDrawing::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_Params_read_const_FileNodeR(cv::ximgproc::EdgeDrawing::Params* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_EdgeDrawing_Params_write_const_FileStorageR(const cv::ximgproc::EdgeDrawing::Params* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_FastBilateralSolverFilter_filter_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::ximgproc::FastBilateralSolverFilter* instance, const cv::_InputArray* src, const cv::_InputArray* confidence, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *confidence, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_FastBilateralSolverFilter_to_Algorithm(cv::ximgproc::FastBilateralSolverFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_FastBilateralSolverFilter_delete(cv::ximgproc::FastBilateralSolverFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_FastGlobalSmootherFilter_filter_const__InputArrayR_const__OutputArrayR(cv::ximgproc::FastGlobalSmootherFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_FastGlobalSmootherFilter_to_Algorithm(cv::ximgproc::FastGlobalSmootherFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_FastGlobalSmootherFilter_delete(cv::ximgproc::FastGlobalSmootherFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_FastLineDetector_detect_const__InputArrayR_const__OutputArrayR(cv::ximgproc::FastLineDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* lines, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*image, *lines);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_FastLineDetector_drawSegments_const__InputOutputArrayR_const__InputArrayR_bool_Scalar_int(cv::ximgproc::FastLineDetector* instance, const cv::_InputOutputArray* image, const cv::_InputArray* lines, bool draw_arrow, cv::Scalar* linecolor, int linethickness, ResultVoid* ocvrs_return) {
		try {
			instance->drawSegments(*image, *lines, draw_arrow, *linecolor, linethickness);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_FastLineDetector_drawSegments_const__InputOutputArrayR_const__InputArrayR(cv::ximgproc::FastLineDetector* instance, const cv::_InputOutputArray* image, const cv::_InputArray* lines, ResultVoid* ocvrs_return) {
		try {
			instance->drawSegments(*image, *lines);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_FastLineDetector_to_Algorithm(cv::ximgproc::FastLineDetector* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_FastLineDetector_delete(cv::ximgproc::FastLineDetector* instance) {
			delete instance;
	}
	
	void cv_ximgproc_GuidedFilter_filter_const__InputArrayR_const__OutputArrayR_int(cv::ximgproc::GuidedFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, int dDepth, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst, dDepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_GuidedFilter_filter_const__InputArrayR_const__OutputArrayR(cv::ximgproc::GuidedFilter* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->filter(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_GuidedFilter_to_Algorithm(cv::ximgproc::GuidedFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_GuidedFilter_delete(cv::ximgproc::GuidedFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_RFFeatureGetter_getFeatures_const_const_MatR_MatR_const_int_const_int_const_int_const_int_const_int(const cv::ximgproc::RFFeatureGetter* instance, const cv::Mat* src, cv::Mat* features, const int gnrmRad, const int gsmthRad, const int shrink, const int outNum, const int gradNum, ResultVoid* ocvrs_return) {
		try {
			instance->getFeatures(*src, *features, gnrmRad, gsmthRad, shrink, outNum, gradNum);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_RFFeatureGetter_to_Algorithm(cv::ximgproc::RFFeatureGetter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_RFFeatureGetter_delete(cv::ximgproc::RFFeatureGetter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_RICInterpolator_setK_int(cv::ximgproc::RICInterpolator* instance, int k, ResultVoid* ocvrs_return) {
		try {
			instance->setK(k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setK(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setK();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getK_const(const cv::ximgproc::RICInterpolator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getK();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setCostMap_const_MatR(cv::ximgproc::RICInterpolator* instance, const cv::Mat* costMap, ResultVoid* ocvrs_return) {
		try {
			instance->setCostMap(*costMap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelSize_int(cv::ximgproc::RICInterpolator* instance, int spSize, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelSize(spSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelSize(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelSize();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getSuperpixelSize_const(const cv::ximgproc::RICInterpolator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSuperpixelSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelNNCnt_int(cv::ximgproc::RICInterpolator* instance, int spNN, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelNNCnt(spNN);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelNNCnt(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelNNCnt();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getSuperpixelNNCnt_const(const cv::ximgproc::RICInterpolator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSuperpixelNNCnt();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelRuler_float(cv::ximgproc::RICInterpolator* instance, float ruler, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelRuler(ruler);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelRuler(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelRuler();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getSuperpixelRuler_const(const cv::ximgproc::RICInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSuperpixelRuler();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelMode_int(cv::ximgproc::RICInterpolator* instance, int mode, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelMode(mode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setSuperpixelMode(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setSuperpixelMode();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getSuperpixelMode_const(const cv::ximgproc::RICInterpolator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSuperpixelMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setAlpha_float(cv::ximgproc::RICInterpolator* instance, float alpha, ResultVoid* ocvrs_return) {
		try {
			instance->setAlpha(alpha);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setAlpha(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setAlpha();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getAlpha_const(const cv::ximgproc::RICInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getAlpha();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setModelIter_int(cv::ximgproc::RICInterpolator* instance, int modelIter, ResultVoid* ocvrs_return) {
		try {
			instance->setModelIter(modelIter);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setModelIter(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setModelIter();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getModelIter_const(const cv::ximgproc::RICInterpolator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getModelIter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setRefineModels_bool(cv::ximgproc::RICInterpolator* instance, bool refineModles, ResultVoid* ocvrs_return) {
		try {
			instance->setRefineModels(refineModles);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setRefineModels(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setRefineModels();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getRefineModels_const(const cv::ximgproc::RICInterpolator* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getRefineModels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setMaxFlow_float(cv::ximgproc::RICInterpolator* instance, float maxFlow, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxFlow(maxFlow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setMaxFlow(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxFlow();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getMaxFlow_const(const cv::ximgproc::RICInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMaxFlow();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setUseVariationalRefinement_bool(cv::ximgproc::RICInterpolator* instance, bool use_variational_refinement, ResultVoid* ocvrs_return) {
		try {
			instance->setUseVariationalRefinement(use_variational_refinement);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setUseVariationalRefinement(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setUseVariationalRefinement();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getUseVariationalRefinement_const(const cv::ximgproc::RICInterpolator* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseVariationalRefinement();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setUseGlobalSmootherFilter_bool(cv::ximgproc::RICInterpolator* instance, bool use_FGS, ResultVoid* ocvrs_return) {
		try {
			instance->setUseGlobalSmootherFilter(use_FGS);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setUseGlobalSmootherFilter(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setUseGlobalSmootherFilter();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getUseGlobalSmootherFilter_const(const cv::ximgproc::RICInterpolator* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseGlobalSmootherFilter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setFGSLambda_float(cv::ximgproc::RICInterpolator* instance, float lambda, ResultVoid* ocvrs_return) {
		try {
			instance->setFGSLambda(lambda);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setFGSLambda(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setFGSLambda();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getFGSLambda_const(const cv::ximgproc::RICInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFGSLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setFGSSigma_float(cv::ximgproc::RICInterpolator* instance, float sigma, ResultVoid* ocvrs_return) {
		try {
			instance->setFGSSigma(sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_setFGSSigma(cv::ximgproc::RICInterpolator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setFGSSigma();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RICInterpolator_getFGSSigma_const(const cv::ximgproc::RICInterpolator* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFGSSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_RICInterpolator_to_Algorithm(cv::ximgproc::RICInterpolator* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::SparseMatchInterpolator* cv_ximgproc_RICInterpolator_to_SparseMatchInterpolator(cv::ximgproc::RICInterpolator* instance) {
			return dynamic_cast<cv::ximgproc::SparseMatchInterpolator*>(instance);
	}
	
	void cv_ximgproc_RICInterpolator_delete(cv::ximgproc::RICInterpolator* instance) {
			delete instance;
	}
	
	void cv_ximgproc_RidgeDetectionFilter_create_int_int_int_int_int_double_double_int(int ddepth, int dx, int dy, int ksize, int out_dtype, double scale, double delta, int borderType, Result<cv::Ptr<cv::ximgproc::RidgeDetectionFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::RidgeDetectionFilter> ret = cv::ximgproc::RidgeDetectionFilter::create(ddepth, dx, dy, ksize, out_dtype, scale, delta, borderType);
			Ok(new cv::Ptr<cv::ximgproc::RidgeDetectionFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RidgeDetectionFilter_create(Result<cv::Ptr<cv::ximgproc::RidgeDetectionFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ximgproc::RidgeDetectionFilter> ret = cv::ximgproc::RidgeDetectionFilter::create();
			Ok(new cv::Ptr<cv::ximgproc::RidgeDetectionFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_RidgeDetectionFilter_getRidgeFilteredImage_const__InputArrayR_const__OutputArrayR(cv::ximgproc::RidgeDetectionFilter* instance, const cv::_InputArray* _img, const cv::_OutputArray* out, ResultVoid* ocvrs_return) {
		try {
			instance->getRidgeFilteredImage(*_img, *out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_RidgeDetectionFilter_to_Algorithm(cv::ximgproc::RidgeDetectionFilter* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_RidgeDetectionFilter_delete(cv::ximgproc::RidgeDetectionFilter* instance) {
			delete instance;
	}
	
	void cv_ximgproc_ScanSegment_getNumberOfSuperpixels(cv::ximgproc::ScanSegment* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumberOfSuperpixels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ScanSegment_iterate_const__InputArrayR(cv::ximgproc::ScanSegment* instance, const cv::_InputArray* img, ResultVoid* ocvrs_return) {
		try {
			instance->iterate(*img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ScanSegment_getLabels_const__OutputArrayR(cv::ximgproc::ScanSegment* instance, const cv::_OutputArray* labels_out, ResultVoid* ocvrs_return) {
		try {
			instance->getLabels(*labels_out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ScanSegment_getLabelContourMask_const__OutputArrayR_bool(cv::ximgproc::ScanSegment* instance, const cv::_OutputArray* image, bool thick_line, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image, thick_line);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_ScanSegment_getLabelContourMask_const__OutputArrayR(cv::ximgproc::ScanSegment* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_ScanSegment_to_Algorithm(cv::ximgproc::ScanSegment* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_ScanSegment_delete(cv::ximgproc::ScanSegment* instance) {
			delete instance;
	}
	
	void cv_ximgproc_SparseMatchInterpolator_interpolate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::ximgproc::SparseMatchInterpolator* instance, const cv::_InputArray* from_image, const cv::_InputArray* from_points, const cv::_InputArray* to_image, const cv::_InputArray* to_points, const cv::_OutputArray* dense_flow, ResultVoid* ocvrs_return) {
		try {
			instance->interpolate(*from_image, *from_points, *to_image, *to_points, *dense_flow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ximgproc::EdgeAwareInterpolator* cv_ximgproc_SparseMatchInterpolator_to_EdgeAwareInterpolator(cv::ximgproc::SparseMatchInterpolator* instance) {
			return dynamic_cast<cv::ximgproc::EdgeAwareInterpolator*>(instance);
	}
	
	cv::ximgproc::RICInterpolator* cv_ximgproc_SparseMatchInterpolator_to_RICInterpolator(cv::ximgproc::SparseMatchInterpolator* instance) {
			return dynamic_cast<cv::ximgproc::RICInterpolator*>(instance);
	}
	
	cv::Algorithm* cv_ximgproc_SparseMatchInterpolator_to_Algorithm(cv::ximgproc::SparseMatchInterpolator* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_SparseMatchInterpolator_delete(cv::ximgproc::SparseMatchInterpolator* instance) {
			delete instance;
	}
	
	void cv_ximgproc_StructuredEdgeDetection_detectEdges_const_const__InputArrayR_const__OutputArrayR(const cv::ximgproc::StructuredEdgeDetection* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->detectEdges(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_StructuredEdgeDetection_computeOrientation_const_const__InputArrayR_const__OutputArrayR(const cv::ximgproc::StructuredEdgeDetection* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->computeOrientation(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_StructuredEdgeDetection_edgesNms_const_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int_float_bool(const cv::ximgproc::StructuredEdgeDetection* instance, const cv::_InputArray* edge_image, const cv::_InputArray* orientation_image, const cv::_OutputArray* dst, int r, int s, float m, bool isParallel, ResultVoid* ocvrs_return) {
		try {
			instance->edgesNms(*edge_image, *orientation_image, *dst, r, s, m, isParallel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_StructuredEdgeDetection_edgesNms_const_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::ximgproc::StructuredEdgeDetection* instance, const cv::_InputArray* edge_image, const cv::_InputArray* orientation_image, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->edgesNms(*edge_image, *orientation_image, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_StructuredEdgeDetection_to_Algorithm(cv::ximgproc::StructuredEdgeDetection* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_StructuredEdgeDetection_delete(cv::ximgproc::StructuredEdgeDetection* instance) {
			delete instance;
	}
	
	void cv_ximgproc_SuperpixelLSC_getNumberOfSuperpixels_const(const cv::ximgproc::SuperpixelLSC* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumberOfSuperpixels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_iterate_int(cv::ximgproc::SuperpixelLSC* instance, int num_iterations, ResultVoid* ocvrs_return) {
		try {
			instance->iterate(num_iterations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_iterate(cv::ximgproc::SuperpixelLSC* instance, ResultVoid* ocvrs_return) {
		try {
			instance->iterate();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_getLabels_const_const__OutputArrayR(const cv::ximgproc::SuperpixelLSC* instance, const cv::_OutputArray* labels_out, ResultVoid* ocvrs_return) {
		try {
			instance->getLabels(*labels_out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_getLabelContourMask_const_const__OutputArrayR_bool(const cv::ximgproc::SuperpixelLSC* instance, const cv::_OutputArray* image, bool thick_line, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image, thick_line);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_getLabelContourMask_const_const__OutputArrayR(const cv::ximgproc::SuperpixelLSC* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_enforceLabelConnectivity_int(cv::ximgproc::SuperpixelLSC* instance, int min_element_size, ResultVoid* ocvrs_return) {
		try {
			instance->enforceLabelConnectivity(min_element_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelLSC_enforceLabelConnectivity(cv::ximgproc::SuperpixelLSC* instance, ResultVoid* ocvrs_return) {
		try {
			instance->enforceLabelConnectivity();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_SuperpixelLSC_to_Algorithm(cv::ximgproc::SuperpixelLSC* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_SuperpixelLSC_delete(cv::ximgproc::SuperpixelLSC* instance) {
			delete instance;
	}
	
	void cv_ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels(cv::ximgproc::SuperpixelSEEDS* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumberOfSuperpixels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSEEDS_iterate_const__InputArrayR_int(cv::ximgproc::SuperpixelSEEDS* instance, const cv::_InputArray* img, int num_iterations, ResultVoid* ocvrs_return) {
		try {
			instance->iterate(*img, num_iterations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSEEDS_iterate_const__InputArrayR(cv::ximgproc::SuperpixelSEEDS* instance, const cv::_InputArray* img, ResultVoid* ocvrs_return) {
		try {
			instance->iterate(*img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSEEDS_getLabels_const__OutputArrayR(cv::ximgproc::SuperpixelSEEDS* instance, const cv::_OutputArray* labels_out, ResultVoid* ocvrs_return) {
		try {
			instance->getLabels(*labels_out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSEEDS_getLabelContourMask_const__OutputArrayR_bool(cv::ximgproc::SuperpixelSEEDS* instance, const cv::_OutputArray* image, bool thick_line, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image, thick_line);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSEEDS_getLabelContourMask_const__OutputArrayR(cv::ximgproc::SuperpixelSEEDS* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_SuperpixelSEEDS_to_Algorithm(cv::ximgproc::SuperpixelSEEDS* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_SuperpixelSEEDS_delete(cv::ximgproc::SuperpixelSEEDS* instance) {
			delete instance;
	}
	
	void cv_ximgproc_SuperpixelSLIC_getNumberOfSuperpixels_const(const cv::ximgproc::SuperpixelSLIC* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumberOfSuperpixels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_iterate_int(cv::ximgproc::SuperpixelSLIC* instance, int num_iterations, ResultVoid* ocvrs_return) {
		try {
			instance->iterate(num_iterations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_iterate(cv::ximgproc::SuperpixelSLIC* instance, ResultVoid* ocvrs_return) {
		try {
			instance->iterate();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_getLabels_const_const__OutputArrayR(const cv::ximgproc::SuperpixelSLIC* instance, const cv::_OutputArray* labels_out, ResultVoid* ocvrs_return) {
		try {
			instance->getLabels(*labels_out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_getLabelContourMask_const_const__OutputArrayR_bool(const cv::ximgproc::SuperpixelSLIC* instance, const cv::_OutputArray* image, bool thick_line, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image, thick_line);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_getLabelContourMask_const_const__OutputArrayR(const cv::ximgproc::SuperpixelSLIC* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->getLabelContourMask(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_int(cv::ximgproc::SuperpixelSLIC* instance, int min_element_size, ResultVoid* ocvrs_return) {
		try {
			instance->enforceLabelConnectivity(min_element_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_SuperpixelSLIC_enforceLabelConnectivity(cv::ximgproc::SuperpixelSLIC* instance, ResultVoid* ocvrs_return) {
		try {
			instance->enforceLabelConnectivity();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_SuperpixelSLIC_to_Algorithm(cv::ximgproc::SuperpixelSLIC* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_SuperpixelSLIC_delete(cv::ximgproc::SuperpixelSLIC* instance) {
			delete instance;
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_processImage_const__InputArrayR_const__OutputArrayR(cv::ximgproc::segmentation::GraphSegmentation* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->processImage(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_setSigma_double(cv::ximgproc::segmentation::GraphSegmentation* instance, double sigma, ResultVoid* ocvrs_return) {
		try {
			instance->setSigma(sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_getSigma(cv::ximgproc::segmentation::GraphSegmentation* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_setK_float(cv::ximgproc::segmentation::GraphSegmentation* instance, float k, ResultVoid* ocvrs_return) {
		try {
			instance->setK(k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_getK(cv::ximgproc::segmentation::GraphSegmentation* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getK();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_setMinSize_int(cv::ximgproc::segmentation::GraphSegmentation* instance, int min_size, ResultVoid* ocvrs_return) {
		try {
			instance->setMinSize(min_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_getMinSize(cv::ximgproc::segmentation::GraphSegmentation* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_GraphSegmentation_to_Algorithm(cv::ximgproc::segmentation::GraphSegmentation* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_segmentation_GraphSegmentation_delete(cv::ximgproc::segmentation::GraphSegmentation* instance) {
			delete instance;
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_setBaseImage_const__InputArrayR(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, const cv::_InputArray* img, ResultVoid* ocvrs_return) {
		try {
			instance->setBaseImage(*img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_switchToSingleStrategy_int_float(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, int k, float sigma, ResultVoid* ocvrs_return) {
		try {
			instance->switchToSingleStrategy(k, sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_switchToSingleStrategy(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, ResultVoid* ocvrs_return) {
		try {
			instance->switchToSingleStrategy();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_switchToSelectiveSearchFast_int_int_float(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, int base_k, int inc_k, float sigma, ResultVoid* ocvrs_return) {
		try {
			instance->switchToSelectiveSearchFast(base_k, inc_k, sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_switchToSelectiveSearchFast(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, ResultVoid* ocvrs_return) {
		try {
			instance->switchToSelectiveSearchFast();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_switchToSelectiveSearchQuality_int_int_float(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, int base_k, int inc_k, float sigma, ResultVoid* ocvrs_return) {
		try {
			instance->switchToSelectiveSearchQuality(base_k, inc_k, sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_switchToSelectiveSearchQuality(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, ResultVoid* ocvrs_return) {
		try {
			instance->switchToSelectiveSearchQuality();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_addImage_const__InputArrayR(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, const cv::_InputArray* img, ResultVoid* ocvrs_return) {
		try {
			instance->addImage(*img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_clearImages(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clearImages();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_addGraphSegmentation_PtrLGraphSegmentationG(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, cv::Ptr<cv::ximgproc::segmentation::GraphSegmentation>* g, ResultVoid* ocvrs_return) {
		try {
			instance->addGraphSegmentation(*g);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_clearGraphSegmentations(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clearGraphSegmentations();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_addStrategy_PtrLSelectiveSearchSegmentationStrategyG(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* s, ResultVoid* ocvrs_return) {
		try {
			instance->addStrategy(*s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_clearStrategies(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clearStrategies();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_process_vectorLRectGR(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance, std::vector<cv::Rect>* rects, ResultVoid* ocvrs_return) {
		try {
			instance->process(*rects);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentation_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentation_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentation* instance) {
			delete instance;
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_setImage_const__InputArrayR_const__InputArrayR_const__InputArrayR_int(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance, const cv::_InputArray* img, const cv::_InputArray* regions, const cv::_InputArray* sizes, int image_id, ResultVoid* ocvrs_return) {
		try {
			instance->setImage(*img, *regions, *sizes, image_id);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_setImage_const__InputArrayR_const__InputArrayR_const__InputArrayR(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance, const cv::_InputArray* img, const cv::_InputArray* regions, const cv::_InputArray* sizes, ResultVoid* ocvrs_return) {
		try {
			instance->setImage(*img, *regions, *sizes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_get_int_int(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance, int r1, int r2, Result<float>* ocvrs_return) {
		try {
			float ret = instance->get(r1, r2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_merge_int_int(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance, int r1, int r2, ResultVoid* ocvrs_return) {
		try {
			instance->merge(r1, r2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_to_SelectiveSearchSegmentationStrategyColor(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_to_SelectiveSearchSegmentationStrategyFill(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_to_SelectiveSearchSegmentationStrategyMultiple(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_to_SelectiveSearchSegmentationStrategySize(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_to_SelectiveSearchSegmentationStrategyTexture(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture*>(instance);
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategy_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* instance) {
			delete instance;
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyColor_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyColor_to_SelectiveSearchSegmentationStrategy(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyColor_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyColor* instance) {
			delete instance;
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyFill_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyFill_to_SelectiveSearchSegmentationStrategy(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyFill_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyFill* instance) {
			delete instance;
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyMultiple_addStrategy_PtrLSelectiveSearchSegmentationStrategyG_float(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple* instance, cv::Ptr<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy>* g, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->addStrategy(*g, weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyMultiple_clearStrategies(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clearStrategies();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyMultiple_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyMultiple_to_SelectiveSearchSegmentationStrategy(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyMultiple_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyMultiple* instance) {
			delete instance;
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategySize_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategySize_to_SelectiveSearchSegmentationStrategy(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategySize_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategySize* instance) {
			delete instance;
	}
	
	cv::Algorithm* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyTexture_to_Algorithm(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy* cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyTexture_to_SelectiveSearchSegmentationStrategy(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture* instance) {
			return dynamic_cast<cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategy*>(instance);
	}
	
	void cv_ximgproc_segmentation_SelectiveSearchSegmentationStrategyTexture_delete(cv::ximgproc::segmentation::SelectiveSearchSegmentationStrategyTexture* instance) {
			delete instance;
	}
	
}
