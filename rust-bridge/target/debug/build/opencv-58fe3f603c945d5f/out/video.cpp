#include "ocvrs_common.hpp"
#include <opencv2/video.hpp>
#include "video_types.hpp"

extern "C" {
	void cv_CamShift_const__InputArrayR_RectR_TermCriteria(const cv::_InputArray* probImage, cv::Rect* window, cv::TermCriteria* criteria, Result<cv::RotatedRect>* ocvrs_return) {
		try {
			cv::RotatedRect ret = cv::CamShift(*probImage, *window, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_buildOpticalFlowPyramid_const__InputArrayR_const__OutputArrayR_Size_int(const cv::_InputArray* img, const cv::_OutputArray* pyramid, cv::Size* winSize, int maxLevel, Result<int>* ocvrs_return) {
		try {
			int ret = cv::buildOpticalFlowPyramid(*img, *pyramid, *winSize, maxLevel);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_buildOpticalFlowPyramid_const__InputArrayR_const__OutputArrayR_Size_int_bool_int_int_bool(const cv::_InputArray* img, const cv::_OutputArray* pyramid, cv::Size* winSize, int maxLevel, bool withDerivatives, int pyrBorder, int derivBorder, bool tryReuseInputImage, Result<int>* ocvrs_return) {
		try {
			int ret = cv::buildOpticalFlowPyramid(*img, *pyramid, *winSize, maxLevel, withDerivatives, pyrBorder, derivBorder, tryReuseInputImage);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calcOpticalFlowFarneback_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_double_int_int_int_int_double_int(const cv::_InputArray* prev, const cv::_InputArray* next, const cv::_InputOutputArray* flow, double pyr_scale, int levels, int winsize, int iterations, int poly_n, double poly_sigma, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::calcOpticalFlowFarneback(*prev, *next, *flow, pyr_scale, levels, winsize, iterations, poly_n, poly_sigma, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calcOpticalFlowPyrLK_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* prevImg, const cv::_InputArray* nextImg, const cv::_InputArray* prevPts, const cv::_InputOutputArray* nextPts, const cv::_OutputArray* status, const cv::_OutputArray* err, ResultVoid* ocvrs_return) {
		try {
			cv::calcOpticalFlowPyrLK(*prevImg, *nextImg, *prevPts, *nextPts, *status, *err);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calcOpticalFlowPyrLK_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_Size_int_TermCriteria_int_double(const cv::_InputArray* prevImg, const cv::_InputArray* nextImg, const cv::_InputArray* prevPts, const cv::_InputOutputArray* nextPts, const cv::_OutputArray* status, const cv::_OutputArray* err, cv::Size* winSize, int maxLevel, cv::TermCriteria* criteria, int flags, double minEigThreshold, ResultVoid* ocvrs_return) {
		try {
			cv::calcOpticalFlowPyrLK(*prevImg, *nextImg, *prevPts, *nextPts, *status, *err, *winSize, maxLevel, *criteria, flags, minEigThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_computeECC_const__InputArrayR_const__InputArrayR(const cv::_InputArray* templateImage, const cv::_InputArray* inputImage, Result<double>* ocvrs_return) {
		try {
			double ret = cv::computeECC(*templateImage, *inputImage);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_computeECC_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* templateImage, const cv::_InputArray* inputImage, const cv::_InputArray* inputMask, Result<double>* ocvrs_return) {
		try {
			double ret = cv::computeECC(*templateImage, *inputImage, *inputMask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createBackgroundSubtractorKNN(Result<cv::Ptr<cv::BackgroundSubtractorKNN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BackgroundSubtractorKNN> ret = cv::createBackgroundSubtractorKNN();
			Ok(new cv::Ptr<cv::BackgroundSubtractorKNN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createBackgroundSubtractorKNN_int_double_bool(int history, double dist2Threshold, bool detectShadows, Result<cv::Ptr<cv::BackgroundSubtractorKNN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BackgroundSubtractorKNN> ret = cv::createBackgroundSubtractorKNN(history, dist2Threshold, detectShadows);
			Ok(new cv::Ptr<cv::BackgroundSubtractorKNN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createBackgroundSubtractorMOG2(Result<cv::Ptr<cv::BackgroundSubtractorMOG2>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BackgroundSubtractorMOG2> ret = cv::createBackgroundSubtractorMOG2();
			Ok(new cv::Ptr<cv::BackgroundSubtractorMOG2>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createBackgroundSubtractorMOG2_int_double_bool(int history, double varThreshold, bool detectShadows, Result<cv::Ptr<cv::BackgroundSubtractorMOG2>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BackgroundSubtractorMOG2> ret = cv::createBackgroundSubtractorMOG2(history, varThreshold, detectShadows);
			Ok(new cv::Ptr<cv::BackgroundSubtractorMOG2>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateRigidTransform_const__InputArrayR_const__InputArrayR_bool(const cv::_InputArray* src, const cv::_InputArray* dst, bool fullAffine, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateRigidTransform(*src, *dst, fullAffine);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findTransformECC_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR(const cv::_InputArray* templateImage, const cv::_InputArray* inputImage, const cv::_InputOutputArray* warpMatrix, Result<double>* ocvrs_return) {
		try {
			double ret = cv::findTransformECC(*templateImage, *inputImage, *warpMatrix);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findTransformECC_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_int_TermCriteria_const__InputArrayR(const cv::_InputArray* templateImage, const cv::_InputArray* inputImage, const cv::_InputOutputArray* warpMatrix, int motionType, cv::TermCriteria* criteria, const cv::_InputArray* inputMask, Result<double>* ocvrs_return) {
		try {
			double ret = cv::findTransformECC(*templateImage, *inputImage, *warpMatrix, motionType, *criteria, *inputMask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findTransformECC_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_int_TermCriteria_const__InputArrayR_int(const cv::_InputArray* templateImage, const cv::_InputArray* inputImage, const cv::_InputOutputArray* warpMatrix, int motionType, cv::TermCriteria* criteria, const cv::_InputArray* inputMask, int gaussFiltSize, Result<double>* ocvrs_return) {
		try {
			double ret = cv::findTransformECC(*templateImage, *inputImage, *warpMatrix, motionType, *criteria, *inputMask, gaussFiltSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_meanShift_const__InputArrayR_RectR_TermCriteria(const cv::_InputArray* probImage, cv::Rect* window, cv::TermCriteria* criteria, Result<int>* ocvrs_return) {
		try {
			int ret = cv::meanShift(*probImage, *window, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_readOpticalFlow_const_StringR(const char* path, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::readOpticalFlow(std::string(path));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_writeOpticalFlow_const_StringR_const__InputArrayR(const char* path, const cv::_InputArray* flow, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::writeOpticalFlow(std::string(path), *flow);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractor_apply_const__InputArrayR_const__OutputArrayR_double(cv::BackgroundSubtractor* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, double learningRate, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask, learningRate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractor_apply_const__InputArrayR_const__OutputArrayR(cv::BackgroundSubtractor* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractor_getBackgroundImage_const_const__OutputArrayR(const cv::BackgroundSubtractor* instance, const cv::_OutputArray* backgroundImage, ResultVoid* ocvrs_return) {
		try {
			instance->getBackgroundImage(*backgroundImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::BackgroundSubtractorKNN* cv_BackgroundSubtractor_to_BackgroundSubtractorKNN(cv::BackgroundSubtractor* instance) {
			return dynamic_cast<cv::BackgroundSubtractorKNN*>(instance);
	}
	
	cv::BackgroundSubtractorMOG2* cv_BackgroundSubtractor_to_BackgroundSubtractorMOG2(cv::BackgroundSubtractor* instance) {
			return dynamic_cast<cv::BackgroundSubtractorMOG2*>(instance);
	}
	
	cv::Algorithm* cv_BackgroundSubtractor_to_Algorithm(cv::BackgroundSubtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_BackgroundSubtractor_delete(cv::BackgroundSubtractor* instance) {
			delete instance;
	}
	
	void cv_BackgroundSubtractorKNN_getHistory_const(const cv::BackgroundSubtractorKNN* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getHistory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setHistory_int(cv::BackgroundSubtractorKNN* instance, int history, ResultVoid* ocvrs_return) {
		try {
			instance->setHistory(history);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_getNSamples_const(const cv::BackgroundSubtractorKNN* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNSamples();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setNSamples_int(cv::BackgroundSubtractorKNN* instance, int _nN, ResultVoid* ocvrs_return) {
		try {
			instance->setNSamples(_nN);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_getDist2Threshold_const(const cv::BackgroundSubtractorKNN* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getDist2Threshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setDist2Threshold_double(cv::BackgroundSubtractorKNN* instance, double _dist2Threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setDist2Threshold(_dist2Threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_getkNNSamples_const(const cv::BackgroundSubtractorKNN* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getkNNSamples();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setkNNSamples_int(cv::BackgroundSubtractorKNN* instance, int _nkNN, ResultVoid* ocvrs_return) {
		try {
			instance->setkNNSamples(_nkNN);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_getDetectShadows_const(const cv::BackgroundSubtractorKNN* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getDetectShadows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setDetectShadows_bool(cv::BackgroundSubtractorKNN* instance, bool detectShadows, ResultVoid* ocvrs_return) {
		try {
			instance->setDetectShadows(detectShadows);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_getShadowValue_const(const cv::BackgroundSubtractorKNN* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getShadowValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setShadowValue_int(cv::BackgroundSubtractorKNN* instance, int value, ResultVoid* ocvrs_return) {
		try {
			instance->setShadowValue(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_getShadowThreshold_const(const cv::BackgroundSubtractorKNN* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getShadowThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorKNN_setShadowThreshold_double(cv::BackgroundSubtractorKNN* instance, double threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setShadowThreshold(threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_BackgroundSubtractorKNN_to_Algorithm(cv::BackgroundSubtractorKNN* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_BackgroundSubtractorKNN_to_BackgroundSubtractor(cv::BackgroundSubtractorKNN* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_BackgroundSubtractorKNN_delete(cv::BackgroundSubtractorKNN* instance) {
			delete instance;
	}
	
	void cv_BackgroundSubtractorMOG2_getHistory_const(const cv::BackgroundSubtractorMOG2* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getHistory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setHistory_int(cv::BackgroundSubtractorMOG2* instance, int history, ResultVoid* ocvrs_return) {
		try {
			instance->setHistory(history);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getNMixtures_const(const cv::BackgroundSubtractorMOG2* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNMixtures();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setNMixtures_int(cv::BackgroundSubtractorMOG2* instance, int nmixtures, ResultVoid* ocvrs_return) {
		try {
			instance->setNMixtures(nmixtures);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getBackgroundRatio_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getBackgroundRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setBackgroundRatio_double(cv::BackgroundSubtractorMOG2* instance, double ratio, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundRatio(ratio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getVarThreshold_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getVarThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setVarThreshold_double(cv::BackgroundSubtractorMOG2* instance, double varThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->setVarThreshold(varThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getVarThresholdGen_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getVarThresholdGen();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setVarThresholdGen_double(cv::BackgroundSubtractorMOG2* instance, double varThresholdGen, ResultVoid* ocvrs_return) {
		try {
			instance->setVarThresholdGen(varThresholdGen);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getVarInit_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getVarInit();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setVarInit_double(cv::BackgroundSubtractorMOG2* instance, double varInit, ResultVoid* ocvrs_return) {
		try {
			instance->setVarInit(varInit);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getVarMin_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getVarMin();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setVarMin_double(cv::BackgroundSubtractorMOG2* instance, double varMin, ResultVoid* ocvrs_return) {
		try {
			instance->setVarMin(varMin);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getVarMax_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getVarMax();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setVarMax_double(cv::BackgroundSubtractorMOG2* instance, double varMax, ResultVoid* ocvrs_return) {
		try {
			instance->setVarMax(varMax);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getComplexityReductionThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold_double(cv::BackgroundSubtractorMOG2* instance, double ct, ResultVoid* ocvrs_return) {
		try {
			instance->setComplexityReductionThreshold(ct);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getDetectShadows_const(const cv::BackgroundSubtractorMOG2* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getDetectShadows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setDetectShadows_bool(cv::BackgroundSubtractorMOG2* instance, bool detectShadows, ResultVoid* ocvrs_return) {
		try {
			instance->setDetectShadows(detectShadows);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getShadowValue_const(const cv::BackgroundSubtractorMOG2* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getShadowValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setShadowValue_int(cv::BackgroundSubtractorMOG2* instance, int value, ResultVoid* ocvrs_return) {
		try {
			instance->setShadowValue(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_getShadowThreshold_const(const cv::BackgroundSubtractorMOG2* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getShadowThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_setShadowThreshold_double(cv::BackgroundSubtractorMOG2* instance, double threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setShadowThreshold(threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_apply_const__InputArrayR_const__OutputArrayR_double(cv::BackgroundSubtractorMOG2* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, double learningRate, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask, learningRate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BackgroundSubtractorMOG2_apply_const__InputArrayR_const__OutputArrayR(cv::BackgroundSubtractorMOG2* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_BackgroundSubtractorMOG2_to_Algorithm(cv::BackgroundSubtractorMOG2* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_BackgroundSubtractorMOG2_to_BackgroundSubtractor(cv::BackgroundSubtractorMOG2* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_BackgroundSubtractorMOG2_delete(cv::BackgroundSubtractorMOG2* instance) {
			delete instance;
	}
	
	void cv_DISOpticalFlow_getFinestScale_const(const cv::DISOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFinestScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setFinestScale_int(cv::DISOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setFinestScale(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getPatchSize_const(const cv::DISOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPatchSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setPatchSize_int(cv::DISOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setPatchSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getPatchStride_const(const cv::DISOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPatchStride();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setPatchStride_int(cv::DISOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setPatchStride(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getGradientDescentIterations_const(const cv::DISOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getGradientDescentIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setGradientDescentIterations_int(cv::DISOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setGradientDescentIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getVariationalRefinementIterations_const(const cv::DISOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getVariationalRefinementIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setVariationalRefinementIterations_int(cv::DISOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setVariationalRefinementIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getVariationalRefinementAlpha_const(const cv::DISOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getVariationalRefinementAlpha();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setVariationalRefinementAlpha_float(cv::DISOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setVariationalRefinementAlpha(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getVariationalRefinementDelta_const(const cv::DISOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getVariationalRefinementDelta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setVariationalRefinementDelta_float(cv::DISOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setVariationalRefinementDelta(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getVariationalRefinementGamma_const(const cv::DISOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getVariationalRefinementGamma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setVariationalRefinementGamma_float(cv::DISOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setVariationalRefinementGamma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getVariationalRefinementEpsilon_const(const cv::DISOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getVariationalRefinementEpsilon();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setVariationalRefinementEpsilon_float(cv::DISOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setVariationalRefinementEpsilon(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getUseMeanNormalization_const(const cv::DISOpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseMeanNormalization();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setUseMeanNormalization_bool(cv::DISOpticalFlow* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseMeanNormalization(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_getUseSpatialPropagation_const(const cv::DISOpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseSpatialPropagation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_setUseSpatialPropagation_bool(cv::DISOpticalFlow* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseSpatialPropagation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_create_int(int preset, Result<cv::Ptr<cv::DISOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DISOpticalFlow> ret = cv::DISOpticalFlow::create(preset);
			Ok(new cv::Ptr<cv::DISOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DISOpticalFlow_create(Result<cv::Ptr<cv::DISOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DISOpticalFlow> ret = cv::DISOpticalFlow::create();
			Ok(new cv::Ptr<cv::DISOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_DISOpticalFlow_to_Algorithm(cv::DISOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::DenseOpticalFlow* cv_DISOpticalFlow_to_DenseOpticalFlow(cv::DISOpticalFlow* instance) {
			return dynamic_cast<cv::DenseOpticalFlow*>(instance);
	}
	
	void cv_DISOpticalFlow_delete(cv::DISOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_DenseOpticalFlow_calc_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR(cv::DenseOpticalFlow* instance, const cv::_InputArray* I0, const cv::_InputArray* I1, const cv::_InputOutputArray* flow, ResultVoid* ocvrs_return) {
		try {
			instance->calc(*I0, *I1, *flow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DenseOpticalFlow_collectGarbage(cv::DenseOpticalFlow* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::DISOpticalFlow* cv_DenseOpticalFlow_to_DISOpticalFlow(cv::DenseOpticalFlow* instance) {
			return dynamic_cast<cv::DISOpticalFlow*>(instance);
	}
	
	cv::FarnebackOpticalFlow* cv_DenseOpticalFlow_to_FarnebackOpticalFlow(cv::DenseOpticalFlow* instance) {
			return dynamic_cast<cv::FarnebackOpticalFlow*>(instance);
	}
	
	cv::VariationalRefinement* cv_DenseOpticalFlow_to_VariationalRefinement(cv::DenseOpticalFlow* instance) {
			return dynamic_cast<cv::VariationalRefinement*>(instance);
	}
	
	cv::Algorithm* cv_DenseOpticalFlow_to_Algorithm(cv::DenseOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_DenseOpticalFlow_delete(cv::DenseOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_FarnebackOpticalFlow_getNumLevels_const(const cv::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumLevels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setNumLevels_int(cv::FarnebackOpticalFlow* instance, int numLevels, ResultVoid* ocvrs_return) {
		try {
			instance->setNumLevels(numLevels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getPyrScale_const(const cv::FarnebackOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getPyrScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setPyrScale_double(cv::FarnebackOpticalFlow* instance, double pyrScale, ResultVoid* ocvrs_return) {
		try {
			instance->setPyrScale(pyrScale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getFastPyramids_const(const cv::FarnebackOpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getFastPyramids();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setFastPyramids_bool(cv::FarnebackOpticalFlow* instance, bool fastPyramids, ResultVoid* ocvrs_return) {
		try {
			instance->setFastPyramids(fastPyramids);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getWinSize_const(const cv::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setWinSize_int(cv::FarnebackOpticalFlow* instance, int winSize, ResultVoid* ocvrs_return) {
		try {
			instance->setWinSize(winSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getNumIters_const(const cv::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumIters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setNumIters_int(cv::FarnebackOpticalFlow* instance, int numIters, ResultVoid* ocvrs_return) {
		try {
			instance->setNumIters(numIters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getPolyN_const(const cv::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPolyN();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setPolyN_int(cv::FarnebackOpticalFlow* instance, int polyN, ResultVoid* ocvrs_return) {
		try {
			instance->setPolyN(polyN);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getPolySigma_const(const cv::FarnebackOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getPolySigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setPolySigma_double(cv::FarnebackOpticalFlow* instance, double polySigma, ResultVoid* ocvrs_return) {
		try {
			instance->setPolySigma(polySigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_getFlags_const(const cv::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFlags();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_setFlags_int(cv::FarnebackOpticalFlow* instance, int flags, ResultVoid* ocvrs_return) {
		try {
			instance->setFlags(flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_create_int_double_bool_int_int_int_double_int(int numLevels, double pyrScale, bool fastPyramids, int winSize, int numIters, int polyN, double polySigma, int flags, Result<cv::Ptr<cv::FarnebackOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FarnebackOpticalFlow> ret = cv::FarnebackOpticalFlow::create(numLevels, pyrScale, fastPyramids, winSize, numIters, polyN, polySigma, flags);
			Ok(new cv::Ptr<cv::FarnebackOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FarnebackOpticalFlow_create(Result<cv::Ptr<cv::FarnebackOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FarnebackOpticalFlow> ret = cv::FarnebackOpticalFlow::create();
			Ok(new cv::Ptr<cv::FarnebackOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_FarnebackOpticalFlow_to_Algorithm(cv::FarnebackOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::DenseOpticalFlow* cv_FarnebackOpticalFlow_to_DenseOpticalFlow(cv::FarnebackOpticalFlow* instance) {
			return dynamic_cast<cv::DenseOpticalFlow*>(instance);
	}
	
	void cv_FarnebackOpticalFlow_delete(cv::FarnebackOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_KalmanFilter_KalmanFilter(Result<cv::KalmanFilter*>* ocvrs_return) {
		try {
			cv::KalmanFilter* ret = new cv::KalmanFilter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_KalmanFilter_int_int_int_int(int dynamParams, int measureParams, int controlParams, int type, Result<cv::KalmanFilter*>* ocvrs_return) {
		try {
			cv::KalmanFilter* ret = new cv::KalmanFilter(dynamParams, measureParams, controlParams, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_KalmanFilter_int_int(int dynamParams, int measureParams, Result<cv::KalmanFilter*>* ocvrs_return) {
		try {
			cv::KalmanFilter* ret = new cv::KalmanFilter(dynamParams, measureParams);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_init_int_int_int_int(cv::KalmanFilter* instance, int dynamParams, int measureParams, int controlParams, int type, ResultVoid* ocvrs_return) {
		try {
			instance->init(dynamParams, measureParams, controlParams, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_init_int_int(cv::KalmanFilter* instance, int dynamParams, int measureParams, ResultVoid* ocvrs_return) {
		try {
			instance->init(dynamParams, measureParams);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_predict_const_MatR(cv::KalmanFilter* instance, const cv::Mat* control, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->predict(*control);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_predict(cv::KalmanFilter* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->predict();
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KalmanFilter_correct_const_MatR(cv::KalmanFilter* instance, const cv::Mat* measurement, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->correct(*measurement);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Mat* cv_KalmanFilter_propStatePre_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->statePre;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propStatePre_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->statePre = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propStatePost_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->statePost;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propStatePost_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->statePost = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propTransitionMatrix_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->transitionMatrix;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propTransitionMatrix_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->transitionMatrix = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propControlMatrix_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->controlMatrix;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propControlMatrix_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->controlMatrix = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propMeasurementMatrix_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->measurementMatrix;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propMeasurementMatrix_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->measurementMatrix = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propProcessNoiseCov_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->processNoiseCov;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propProcessNoiseCov_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->processNoiseCov = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propMeasurementNoiseCov_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->measurementNoiseCov;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propMeasurementNoiseCov_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->measurementNoiseCov = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propErrorCovPre_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->errorCovPre;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propErrorCovPre_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->errorCovPre = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propGain_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->gain;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propGain_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->gain = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propErrorCovPost_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->errorCovPost;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propErrorCovPost_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->errorCovPost = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propTemp1_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->temp1;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propTemp1_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->temp1 = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propTemp2_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->temp2;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propTemp2_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->temp2 = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propTemp3_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->temp3;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propTemp3_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->temp3 = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propTemp4_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->temp4;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propTemp4_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->temp4 = *val;
	}
	
	cv::Mat* cv_KalmanFilter_propTemp5_const(const cv::KalmanFilter* instance) {
			cv::Mat ret = instance->temp5;
			return new cv::Mat(ret);
	}
	
	void cv_KalmanFilter_propTemp5_const_Mat(cv::KalmanFilter* instance, const cv::Mat* val) {
			instance->temp5 = *val;
	}
	
	void cv_KalmanFilter_delete(cv::KalmanFilter* instance) {
			delete instance;
	}
	
	void cv_SparseOpticalFlow_calc_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::SparseOpticalFlow* instance, const cv::_InputArray* prevImg, const cv::_InputArray* nextImg, const cv::_InputArray* prevPts, const cv::_InputOutputArray* nextPts, const cv::_OutputArray* status, const cv::_OutputArray* err, ResultVoid* ocvrs_return) {
		try {
			instance->calc(*prevImg, *nextImg, *prevPts, *nextPts, *status, *err);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseOpticalFlow_calc_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR(cv::SparseOpticalFlow* instance, const cv::_InputArray* prevImg, const cv::_InputArray* nextImg, const cv::_InputArray* prevPts, const cv::_InputOutputArray* nextPts, const cv::_OutputArray* status, ResultVoid* ocvrs_return) {
		try {
			instance->calc(*prevImg, *nextImg, *prevPts, *nextPts, *status);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::SparsePyrLKOpticalFlow* cv_SparseOpticalFlow_to_SparsePyrLKOpticalFlow(cv::SparseOpticalFlow* instance) {
			return dynamic_cast<cv::SparsePyrLKOpticalFlow*>(instance);
	}
	
	cv::Algorithm* cv_SparseOpticalFlow_to_Algorithm(cv::SparseOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_SparseOpticalFlow_delete(cv::SparseOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_SparsePyrLKOpticalFlow_getWinSize_const(const cv::SparsePyrLKOpticalFlow* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getWinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_setWinSize_Size(cv::SparsePyrLKOpticalFlow* instance, cv::Size* winSize, ResultVoid* ocvrs_return) {
		try {
			instance->setWinSize(*winSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_getMaxLevel_const(const cv::SparsePyrLKOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_setMaxLevel_int(cv::SparsePyrLKOpticalFlow* instance, int maxLevel, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxLevel(maxLevel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_getTermCriteria_const(const cv::SparsePyrLKOpticalFlow* instance, Result<cv::TermCriteria>* ocvrs_return) {
		try {
			cv::TermCriteria ret = instance->getTermCriteria();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_setTermCriteria_TermCriteriaR(cv::SparsePyrLKOpticalFlow* instance, cv::TermCriteria* crit, ResultVoid* ocvrs_return) {
		try {
			instance->setTermCriteria(*crit);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_getFlags_const(const cv::SparsePyrLKOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFlags();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_setFlags_int(cv::SparsePyrLKOpticalFlow* instance, int flags, ResultVoid* ocvrs_return) {
		try {
			instance->setFlags(flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_getMinEigThreshold_const(const cv::SparsePyrLKOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMinEigThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_setMinEigThreshold_double(cv::SparsePyrLKOpticalFlow* instance, double minEigThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->setMinEigThreshold(minEigThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_create_Size_int_TermCriteria_int_double(cv::Size* winSize, int maxLevel, cv::TermCriteria* crit, int flags, double minEigThreshold, Result<cv::Ptr<cv::SparsePyrLKOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::SparsePyrLKOpticalFlow> ret = cv::SparsePyrLKOpticalFlow::create(*winSize, maxLevel, *crit, flags, minEigThreshold);
			Ok(new cv::Ptr<cv::SparsePyrLKOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparsePyrLKOpticalFlow_create(Result<cv::Ptr<cv::SparsePyrLKOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::SparsePyrLKOpticalFlow> ret = cv::SparsePyrLKOpticalFlow::create();
			Ok(new cv::Ptr<cv::SparsePyrLKOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_SparsePyrLKOpticalFlow_to_Algorithm(cv::SparsePyrLKOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::SparseOpticalFlow* cv_SparsePyrLKOpticalFlow_to_SparseOpticalFlow(cv::SparsePyrLKOpticalFlow* instance) {
			return dynamic_cast<cv::SparseOpticalFlow*>(instance);
	}
	
	void cv_SparsePyrLKOpticalFlow_delete(cv::SparsePyrLKOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_Tracker_init_const__InputArrayR_const_RectR(cv::Tracker* instance, const cv::_InputArray* image, const cv::Rect* boundingBox, ResultVoid* ocvrs_return) {
		try {
			instance->init(*image, *boundingBox);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Tracker_update_const__InputArrayR_RectR(cv::Tracker* instance, const cv::_InputArray* image, cv::Rect* boundingBox, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->update(*image, *boundingBox);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::TrackerDaSiamRPN* cv_Tracker_to_TrackerDaSiamRPN(cv::Tracker* instance) {
			return dynamic_cast<cv::TrackerDaSiamRPN*>(instance);
	}
	
	cv::TrackerGOTURN* cv_Tracker_to_TrackerGOTURN(cv::Tracker* instance) {
			return dynamic_cast<cv::TrackerGOTURN*>(instance);
	}
	
	cv::TrackerMIL* cv_Tracker_to_TrackerMIL(cv::Tracker* instance) {
			return dynamic_cast<cv::TrackerMIL*>(instance);
	}
	
	cv::TrackerNano* cv_Tracker_to_TrackerNano(cv::Tracker* instance) {
			return dynamic_cast<cv::TrackerNano*>(instance);
	}
	
	cv::TrackerVit* cv_Tracker_to_TrackerVit(cv::Tracker* instance) {
			return dynamic_cast<cv::TrackerVit*>(instance);
	}
	
	void cv_Tracker_delete(cv::Tracker* instance) {
			delete instance;
	}
	
	void cv_TrackerDaSiamRPN_create_const_ParamsR(const cv::TrackerDaSiamRPN::Params* parameters, Result<cv::Ptr<cv::TrackerDaSiamRPN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerDaSiamRPN> ret = cv::TrackerDaSiamRPN::create(*parameters);
			Ok(new cv::Ptr<cv::TrackerDaSiamRPN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerDaSiamRPN_create(Result<cv::Ptr<cv::TrackerDaSiamRPN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerDaSiamRPN> ret = cv::TrackerDaSiamRPN::create();
			Ok(new cv::Ptr<cv::TrackerDaSiamRPN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerDaSiamRPN_getTrackingScore(cv::TrackerDaSiamRPN* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getTrackingScore();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_TrackerDaSiamRPN_to_Tracker(cv::TrackerDaSiamRPN* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_TrackerDaSiamRPN_delete(cv::TrackerDaSiamRPN* instance) {
			delete instance;
	}
	
	void cv_TrackerDaSiamRPN_Params_Params(Result<cv::TrackerDaSiamRPN::Params*>* ocvrs_return) {
		try {
			cv::TrackerDaSiamRPN::Params* ret = new cv::TrackerDaSiamRPN::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::TrackerDaSiamRPN::Params* cv_TrackerDaSiamRPN_Params_implicitClone_const(const cv::TrackerDaSiamRPN::Params* instance) {
			return new cv::TrackerDaSiamRPN::Params(*instance);
	}
	
	void* cv_TrackerDaSiamRPN_Params_propModel_const(const cv::TrackerDaSiamRPN::Params* instance) {
			std::string ret = instance->model;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerDaSiamRPN_Params_propModel_const_string(cv::TrackerDaSiamRPN::Params* instance, const char* val) {
			instance->model = std::string(val);
	}
	
	void* cv_TrackerDaSiamRPN_Params_propKernel_cls1_const(const cv::TrackerDaSiamRPN::Params* instance) {
			std::string ret = instance->kernel_cls1;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerDaSiamRPN_Params_propKernel_cls1_const_string(cv::TrackerDaSiamRPN::Params* instance, const char* val) {
			instance->kernel_cls1 = std::string(val);
	}
	
	void* cv_TrackerDaSiamRPN_Params_propKernel_r1_const(const cv::TrackerDaSiamRPN::Params* instance) {
			std::string ret = instance->kernel_r1;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerDaSiamRPN_Params_propKernel_r1_const_string(cv::TrackerDaSiamRPN::Params* instance, const char* val) {
			instance->kernel_r1 = std::string(val);
	}
	
	int cv_TrackerDaSiamRPN_Params_propBackend_const(const cv::TrackerDaSiamRPN::Params* instance) {
			int ret = instance->backend;
			return ret;
	}
	
	void cv_TrackerDaSiamRPN_Params_propBackend_const_int(cv::TrackerDaSiamRPN::Params* instance, const int val) {
			instance->backend = val;
	}
	
	int cv_TrackerDaSiamRPN_Params_propTarget_const(const cv::TrackerDaSiamRPN::Params* instance) {
			int ret = instance->target;
			return ret;
	}
	
	void cv_TrackerDaSiamRPN_Params_propTarget_const_int(cv::TrackerDaSiamRPN::Params* instance, const int val) {
			instance->target = val;
	}
	
	void cv_TrackerDaSiamRPN_Params_delete(cv::TrackerDaSiamRPN::Params* instance) {
			delete instance;
	}
	
	void cv_TrackerGOTURN_create_const_ParamsR(const cv::TrackerGOTURN::Params* parameters, Result<cv::Ptr<cv::TrackerGOTURN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerGOTURN> ret = cv::TrackerGOTURN::create(*parameters);
			Ok(new cv::Ptr<cv::TrackerGOTURN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerGOTURN_create(Result<cv::Ptr<cv::TrackerGOTURN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerGOTURN> ret = cv::TrackerGOTURN::create();
			Ok(new cv::Ptr<cv::TrackerGOTURN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_TrackerGOTURN_to_Tracker(cv::TrackerGOTURN* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_TrackerGOTURN_delete(cv::TrackerGOTURN* instance) {
			delete instance;
	}
	
	void cv_TrackerGOTURN_Params_Params(Result<cv::TrackerGOTURN::Params*>* ocvrs_return) {
		try {
			cv::TrackerGOTURN::Params* ret = new cv::TrackerGOTURN::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::TrackerGOTURN::Params* cv_TrackerGOTURN_Params_implicitClone_const(const cv::TrackerGOTURN::Params* instance) {
			return new cv::TrackerGOTURN::Params(*instance);
	}
	
	void* cv_TrackerGOTURN_Params_propModelTxt_const(const cv::TrackerGOTURN::Params* instance) {
			std::string ret = instance->modelTxt;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerGOTURN_Params_propModelTxt_const_string(cv::TrackerGOTURN::Params* instance, const char* val) {
			instance->modelTxt = std::string(val);
	}
	
	void* cv_TrackerGOTURN_Params_propModelBin_const(const cv::TrackerGOTURN::Params* instance) {
			std::string ret = instance->modelBin;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerGOTURN_Params_propModelBin_const_string(cv::TrackerGOTURN::Params* instance, const char* val) {
			instance->modelBin = std::string(val);
	}
	
	void cv_TrackerGOTURN_Params_delete(cv::TrackerGOTURN::Params* instance) {
			delete instance;
	}
	
	void cv_TrackerMIL_create_const_ParamsR(const cv::TrackerMIL::Params* parameters, Result<cv::Ptr<cv::TrackerMIL>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerMIL> ret = cv::TrackerMIL::create(*parameters);
			Ok(new cv::Ptr<cv::TrackerMIL>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerMIL_create(Result<cv::Ptr<cv::TrackerMIL>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerMIL> ret = cv::TrackerMIL::create();
			Ok(new cv::Ptr<cv::TrackerMIL>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_TrackerMIL_to_Tracker(cv::TrackerMIL* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_TrackerMIL_delete(cv::TrackerMIL* instance) {
			delete instance;
	}
	
	void cv_TrackerMIL_Params_Params(Result<cv::TrackerMIL::Params>* ocvrs_return) {
		try {
			cv::TrackerMIL::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerNano_create_const_ParamsR(const cv::TrackerNano::Params* parameters, Result<cv::Ptr<cv::TrackerNano>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerNano> ret = cv::TrackerNano::create(*parameters);
			Ok(new cv::Ptr<cv::TrackerNano>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerNano_create(Result<cv::Ptr<cv::TrackerNano>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerNano> ret = cv::TrackerNano::create();
			Ok(new cv::Ptr<cv::TrackerNano>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerNano_getTrackingScore(cv::TrackerNano* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getTrackingScore();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_TrackerNano_to_Tracker(cv::TrackerNano* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_TrackerNano_delete(cv::TrackerNano* instance) {
			delete instance;
	}
	
	void cv_TrackerNano_Params_Params(Result<cv::TrackerNano::Params*>* ocvrs_return) {
		try {
			cv::TrackerNano::Params* ret = new cv::TrackerNano::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::TrackerNano::Params* cv_TrackerNano_Params_implicitClone_const(const cv::TrackerNano::Params* instance) {
			return new cv::TrackerNano::Params(*instance);
	}
	
	void* cv_TrackerNano_Params_propBackbone_const(const cv::TrackerNano::Params* instance) {
			std::string ret = instance->backbone;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerNano_Params_propBackbone_const_string(cv::TrackerNano::Params* instance, const char* val) {
			instance->backbone = std::string(val);
	}
	
	void* cv_TrackerNano_Params_propNeckhead_const(const cv::TrackerNano::Params* instance) {
			std::string ret = instance->neckhead;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerNano_Params_propNeckhead_const_string(cv::TrackerNano::Params* instance, const char* val) {
			instance->neckhead = std::string(val);
	}
	
	int cv_TrackerNano_Params_propBackend_const(const cv::TrackerNano::Params* instance) {
			int ret = instance->backend;
			return ret;
	}
	
	void cv_TrackerNano_Params_propBackend_const_int(cv::TrackerNano::Params* instance, const int val) {
			instance->backend = val;
	}
	
	int cv_TrackerNano_Params_propTarget_const(const cv::TrackerNano::Params* instance) {
			int ret = instance->target;
			return ret;
	}
	
	void cv_TrackerNano_Params_propTarget_const_int(cv::TrackerNano::Params* instance, const int val) {
			instance->target = val;
	}
	
	void cv_TrackerNano_Params_delete(cv::TrackerNano::Params* instance) {
			delete instance;
	}
	
	void cv_TrackerVit_create_const_ParamsR(const cv::TrackerVit::Params* parameters, Result<cv::Ptr<cv::TrackerVit>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerVit> ret = cv::TrackerVit::create(*parameters);
			Ok(new cv::Ptr<cv::TrackerVit>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerVit_create(Result<cv::Ptr<cv::TrackerVit>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::TrackerVit> ret = cv::TrackerVit::create();
			Ok(new cv::Ptr<cv::TrackerVit>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TrackerVit_getTrackingScore(cv::TrackerVit* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getTrackingScore();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_TrackerVit_to_Tracker(cv::TrackerVit* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_TrackerVit_delete(cv::TrackerVit* instance) {
			delete instance;
	}
	
	void cv_TrackerVit_Params_Params(Result<cv::TrackerVit::Params*>* ocvrs_return) {
		try {
			cv::TrackerVit::Params* ret = new cv::TrackerVit::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::TrackerVit::Params* cv_TrackerVit_Params_implicitClone_const(const cv::TrackerVit::Params* instance) {
			return new cv::TrackerVit::Params(*instance);
	}
	
	void* cv_TrackerVit_Params_propNet_const(const cv::TrackerVit::Params* instance) {
			std::string ret = instance->net;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_TrackerVit_Params_propNet_const_string(cv::TrackerVit::Params* instance, const char* val) {
			instance->net = std::string(val);
	}
	
	int cv_TrackerVit_Params_propBackend_const(const cv::TrackerVit::Params* instance) {
			int ret = instance->backend;
			return ret;
	}
	
	void cv_TrackerVit_Params_propBackend_const_int(cv::TrackerVit::Params* instance, const int val) {
			instance->backend = val;
	}
	
	int cv_TrackerVit_Params_propTarget_const(const cv::TrackerVit::Params* instance) {
			int ret = instance->target;
			return ret;
	}
	
	void cv_TrackerVit_Params_propTarget_const_int(cv::TrackerVit::Params* instance, const int val) {
			instance->target = val;
	}
	
	void cv_TrackerVit_Params_propMeanvalue_const(const cv::TrackerVit::Params* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->meanvalue;
			*ocvrs_return = ret;
	}
	
	void cv_TrackerVit_Params_propMeanvalue_const_Scalar(cv::TrackerVit::Params* instance, const cv::Scalar* val) {
			instance->meanvalue = *val;
	}
	
	void cv_TrackerVit_Params_propStdvalue_const(const cv::TrackerVit::Params* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->stdvalue;
			*ocvrs_return = ret;
	}
	
	void cv_TrackerVit_Params_propStdvalue_const_Scalar(cv::TrackerVit::Params* instance, const cv::Scalar* val) {
			instance->stdvalue = *val;
	}
	
	float cv_TrackerVit_Params_propTracking_score_threshold_const(const cv::TrackerVit::Params* instance) {
			float ret = instance->tracking_score_threshold;
			return ret;
	}
	
	void cv_TrackerVit_Params_propTracking_score_threshold_const_float(cv::TrackerVit::Params* instance, const float val) {
			instance->tracking_score_threshold = val;
	}
	
	void cv_TrackerVit_Params_delete(cv::TrackerVit::Params* instance) {
			delete instance;
	}
	
	void cv_VariationalRefinement_calcUV_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(cv::VariationalRefinement* instance, const cv::_InputArray* I0, const cv::_InputArray* I1, const cv::_InputOutputArray* flow_u, const cv::_InputOutputArray* flow_v, ResultVoid* ocvrs_return) {
		try {
			instance->calcUV(*I0, *I1, *flow_u, *flow_v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getFixedPointIterations_const(const cv::VariationalRefinement* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFixedPointIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setFixedPointIterations_int(cv::VariationalRefinement* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setFixedPointIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getSorIterations_const(const cv::VariationalRefinement* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSorIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setSorIterations_int(cv::VariationalRefinement* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setSorIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getOmega_const(const cv::VariationalRefinement* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getOmega();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setOmega_float(cv::VariationalRefinement* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setOmega(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getAlpha_const(const cv::VariationalRefinement* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getAlpha();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setAlpha_float(cv::VariationalRefinement* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setAlpha(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getDelta_const(const cv::VariationalRefinement* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getDelta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setDelta_float(cv::VariationalRefinement* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setDelta(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getGamma_const(const cv::VariationalRefinement* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getGamma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setGamma_float(cv::VariationalRefinement* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setGamma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_getEpsilon_const(const cv::VariationalRefinement* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getEpsilon();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_setEpsilon_float(cv::VariationalRefinement* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setEpsilon(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VariationalRefinement_create(Result<cv::Ptr<cv::VariationalRefinement>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::VariationalRefinement> ret = cv::VariationalRefinement::create();
			Ok(new cv::Ptr<cv::VariationalRefinement>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_VariationalRefinement_to_Algorithm(cv::VariationalRefinement* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::DenseOpticalFlow* cv_VariationalRefinement_to_DenseOpticalFlow(cv::VariationalRefinement* instance) {
			return dynamic_cast<cv::DenseOpticalFlow*>(instance);
	}
	
	void cv_VariationalRefinement_delete(cv::VariationalRefinement* instance) {
			delete instance;
	}
	
}
