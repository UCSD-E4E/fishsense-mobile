#include "ocvrs_common.hpp"
#include <opencv2/bgsegm.hpp>
#include "bgsegm_types.hpp"

extern "C" {
	void cv_bgsegm_createBackgroundSubtractorCNT(Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT> ret = cv::bgsegm::createBackgroundSubtractorCNT();
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorCNT_int_bool_int_bool(int minPixelStability, bool useHistory, int maxPixelStability, bool isParallel, Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT> ret = cv::bgsegm::createBackgroundSubtractorCNT(minPixelStability, useHistory, maxPixelStability, isParallel);
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorGMG(Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG> ret = cv::bgsegm::createBackgroundSubtractorGMG();
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorGMG_int_double(int initializationFrames, double decisionThreshold, Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG> ret = cv::bgsegm::createBackgroundSubtractorGMG(initializationFrames, decisionThreshold);
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorGSOC(Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC> ret = cv::bgsegm::createBackgroundSubtractorGSOC();
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorGSOC_int_int_float_float_int_float_float_float_float_float_float(int mc, int nSamples, float replaceRate, float propagationRate, int hitsThreshold, float alpha, float beta, float blinkingSupressionDecay, float blinkingSupressionMultiplier, float noiseRemovalThresholdFacBG, float noiseRemovalThresholdFacFG, Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC> ret = cv::bgsegm::createBackgroundSubtractorGSOC(mc, nSamples, replaceRate, propagationRate, hitsThreshold, alpha, beta, blinkingSupressionDecay, blinkingSupressionMultiplier, noiseRemovalThresholdFacBG, noiseRemovalThresholdFacFG);
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorLSBP(Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP> ret = cv::bgsegm::createBackgroundSubtractorLSBP();
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorLSBP_int_int_int_float_float_float_float_float_float_float_float_int_int(int mc, int nSamples, int LSBPRadius, float Tlower, float Tupper, float Tinc, float Tdec, float Rscale, float Rincdec, float noiseRemovalThresholdFacBG, float noiseRemovalThresholdFacFG, int LSBPthreshold, int minCount, Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP> ret = cv::bgsegm::createBackgroundSubtractorLSBP(mc, nSamples, LSBPRadius, Tlower, Tupper, Tinc, Tdec, Rscale, Rincdec, noiseRemovalThresholdFacBG, noiseRemovalThresholdFacFG, LSBPthreshold, minCount);
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorMOG(Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG> ret = cv::bgsegm::createBackgroundSubtractorMOG();
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createBackgroundSubtractorMOG_int_int_double_double(int history, int nmixtures, double backgroundRatio, double noiseSigma, Result<cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG> ret = cv::bgsegm::createBackgroundSubtractorMOG(history, nmixtures, backgroundRatio, noiseSigma);
			Ok(new cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createSyntheticSequenceGenerator_const__InputArrayR_const__InputArrayR(const cv::_InputArray* background, const cv::_InputArray* object, Result<cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator> ret = cv::bgsegm::createSyntheticSequenceGenerator(*background, *object);
			Ok(new cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_createSyntheticSequenceGenerator_const__InputArrayR_const__InputArrayR_double_double_double_double(const cv::_InputArray* background, const cv::_InputArray* object, double amplitude, double wavelength, double wavespeed, double objspeed, Result<cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator> ret = cv::bgsegm::createSyntheticSequenceGenerator(*background, *object, amplitude, wavelength, wavespeed, objspeed);
			Ok(new cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_apply_const__InputArrayR_const__OutputArrayR_double(cv::bgsegm::BackgroundSubtractorCNT* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, double learningRate, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask, learningRate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_apply_const__InputArrayR_const__OutputArrayR(cv::bgsegm::BackgroundSubtractorCNT* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_getBackgroundImage_const_const__OutputArrayR(const cv::bgsegm::BackgroundSubtractorCNT* instance, const cv::_OutputArray* backgroundImage, ResultVoid* ocvrs_return) {
		try {
			instance->getBackgroundImage(*backgroundImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_getMinPixelStability_const(const cv::bgsegm::BackgroundSubtractorCNT* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinPixelStability();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_setMinPixelStability_int(cv::bgsegm::BackgroundSubtractorCNT* instance, int value, ResultVoid* ocvrs_return) {
		try {
			instance->setMinPixelStability(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_getMaxPixelStability_const(const cv::bgsegm::BackgroundSubtractorCNT* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxPixelStability();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_setMaxPixelStability_int(cv::bgsegm::BackgroundSubtractorCNT* instance, int value, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxPixelStability(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_getUseHistory_const(const cv::bgsegm::BackgroundSubtractorCNT* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseHistory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_setUseHistory_bool(cv::bgsegm::BackgroundSubtractorCNT* instance, bool value, ResultVoid* ocvrs_return) {
		try {
			instance->setUseHistory(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_getIsParallel_const(const cv::bgsegm::BackgroundSubtractorCNT* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getIsParallel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_setIsParallel_bool(cv::bgsegm::BackgroundSubtractorCNT* instance, bool value, ResultVoid* ocvrs_return) {
		try {
			instance->setIsParallel(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_bgsegm_BackgroundSubtractorCNT_to_Algorithm(cv::bgsegm::BackgroundSubtractorCNT* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_bgsegm_BackgroundSubtractorCNT_to_BackgroundSubtractor(cv::bgsegm::BackgroundSubtractorCNT* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_bgsegm_BackgroundSubtractorCNT_delete(cv::bgsegm::BackgroundSubtractorCNT* instance) {
			delete instance;
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_apply_const__InputArrayR_const__OutputArrayR_double(cv::bgsegm::BackgroundSubtractorGMG* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, double learningRate, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask, learningRate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_apply_const__InputArrayR_const__OutputArrayR(cv::bgsegm::BackgroundSubtractorGMG* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getBackgroundImage_const_const__OutputArrayR(const cv::bgsegm::BackgroundSubtractorGMG* instance, const cv::_OutputArray* backgroundImage, ResultVoid* ocvrs_return) {
		try {
			instance->getBackgroundImage(*backgroundImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getMaxFeatures_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxFeatures();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setMaxFeatures_int(cv::bgsegm::BackgroundSubtractorGMG* instance, int maxFeatures, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxFeatures(maxFeatures);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getDefaultLearningRate_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getDefaultLearningRate();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setDefaultLearningRate_double(cv::bgsegm::BackgroundSubtractorGMG* instance, double lr, ResultVoid* ocvrs_return) {
		try {
			instance->setDefaultLearningRate(lr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getNumFrames_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumFrames();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setNumFrames_int(cv::bgsegm::BackgroundSubtractorGMG* instance, int nframes, ResultVoid* ocvrs_return) {
		try {
			instance->setNumFrames(nframes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getQuantizationLevels_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getQuantizationLevels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setQuantizationLevels_int(cv::bgsegm::BackgroundSubtractorGMG* instance, int nlevels, ResultVoid* ocvrs_return) {
		try {
			instance->setQuantizationLevels(nlevels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getBackgroundPrior_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getBackgroundPrior();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setBackgroundPrior_double(cv::bgsegm::BackgroundSubtractorGMG* instance, double bgprior, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundPrior(bgprior);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getSmoothingRadius_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSmoothingRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setSmoothingRadius_int(cv::bgsegm::BackgroundSubtractorGMG* instance, int radius, ResultVoid* ocvrs_return) {
		try {
			instance->setSmoothingRadius(radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getDecisionThreshold_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getDecisionThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setDecisionThreshold_double(cv::bgsegm::BackgroundSubtractorGMG* instance, double thresh, ResultVoid* ocvrs_return) {
		try {
			instance->setDecisionThreshold(thresh);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getUpdateBackgroundModel_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUpdateBackgroundModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setUpdateBackgroundModel_bool(cv::bgsegm::BackgroundSubtractorGMG* instance, bool update, ResultVoid* ocvrs_return) {
		try {
			instance->setUpdateBackgroundModel(update);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getMinVal_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMinVal();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setMinVal_double(cv::bgsegm::BackgroundSubtractorGMG* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinVal(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_getMaxVal_const(const cv::bgsegm::BackgroundSubtractorGMG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxVal();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_setMaxVal_double(cv::bgsegm::BackgroundSubtractorGMG* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxVal(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_bgsegm_BackgroundSubtractorGMG_to_Algorithm(cv::bgsegm::BackgroundSubtractorGMG* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_bgsegm_BackgroundSubtractorGMG_to_BackgroundSubtractor(cv::bgsegm::BackgroundSubtractorGMG* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_bgsegm_BackgroundSubtractorGMG_delete(cv::bgsegm::BackgroundSubtractorGMG* instance) {
			delete instance;
	}
	
	void cv_bgsegm_BackgroundSubtractorGSOC_apply_const__InputArrayR_const__OutputArrayR_double(cv::bgsegm::BackgroundSubtractorGSOC* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, double learningRate, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask, learningRate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGSOC_apply_const__InputArrayR_const__OutputArrayR(cv::bgsegm::BackgroundSubtractorGSOC* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorGSOC_getBackgroundImage_const_const__OutputArrayR(const cv::bgsegm::BackgroundSubtractorGSOC* instance, const cv::_OutputArray* backgroundImage, ResultVoid* ocvrs_return) {
		try {
			instance->getBackgroundImage(*backgroundImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_bgsegm_BackgroundSubtractorGSOC_to_Algorithm(cv::bgsegm::BackgroundSubtractorGSOC* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_bgsegm_BackgroundSubtractorGSOC_to_BackgroundSubtractor(cv::bgsegm::BackgroundSubtractorGSOC* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_bgsegm_BackgroundSubtractorGSOC_delete(cv::bgsegm::BackgroundSubtractorGSOC* instance) {
			delete instance;
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBP_apply_const__InputArrayR_const__OutputArrayR_double(cv::bgsegm::BackgroundSubtractorLSBP* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, double learningRate, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask, learningRate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBP_apply_const__InputArrayR_const__OutputArrayR(cv::bgsegm::BackgroundSubtractorLSBP* instance, const cv::_InputArray* image, const cv::_OutputArray* fgmask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(*image, *fgmask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBP_getBackgroundImage_const_const__OutputArrayR(const cv::bgsegm::BackgroundSubtractorLSBP* instance, const cv::_OutputArray* backgroundImage, ResultVoid* ocvrs_return) {
		try {
			instance->getBackgroundImage(*backgroundImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_bgsegm_BackgroundSubtractorLSBP_to_Algorithm(cv::bgsegm::BackgroundSubtractorLSBP* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_bgsegm_BackgroundSubtractorLSBP_to_BackgroundSubtractor(cv::bgsegm::BackgroundSubtractorLSBP* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBP_delete(cv::bgsegm::BackgroundSubtractorLSBP* instance) {
			delete instance;
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBPDesc_calcLocalSVDValues_const__OutputArrayR_const_MatR(const cv::_OutputArray* localSVDValues, const cv::Mat* frame, ResultVoid* ocvrs_return) {
		try {
			cv::bgsegm::BackgroundSubtractorLSBPDesc::calcLocalSVDValues(*localSVDValues, *frame);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBPDesc_computeFromLocalSVDValues_const__OutputArrayR_const_MatR_const_Point2iX(const cv::_OutputArray* desc, const cv::Mat* localSVDValues, const cv::Point2i* LSBPSamplePoints, ResultVoid* ocvrs_return) {
		try {
			cv::bgsegm::BackgroundSubtractorLSBPDesc::computeFromLocalSVDValues(*desc, *localSVDValues, LSBPSamplePoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBPDesc_compute_const__OutputArrayR_const_MatR_const_Point2iX(const cv::_OutputArray* desc, const cv::Mat* frame, const cv::Point2i* LSBPSamplePoints, ResultVoid* ocvrs_return) {
		try {
			cv::bgsegm::BackgroundSubtractorLSBPDesc::compute(*desc, *frame, LSBPSamplePoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::bgsegm::BackgroundSubtractorLSBPDesc* cv_bgsegm_BackgroundSubtractorLSBPDesc_defaultNew_const() {
			cv::bgsegm::BackgroundSubtractorLSBPDesc* ret = new cv::bgsegm::BackgroundSubtractorLSBPDesc();
			return ret;
	}
	
	void cv_bgsegm_BackgroundSubtractorLSBPDesc_delete(cv::bgsegm::BackgroundSubtractorLSBPDesc* instance) {
			delete instance;
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_getHistory_const(const cv::bgsegm::BackgroundSubtractorMOG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getHistory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_setHistory_int(cv::bgsegm::BackgroundSubtractorMOG* instance, int nframes, ResultVoid* ocvrs_return) {
		try {
			instance->setHistory(nframes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_getNMixtures_const(const cv::bgsegm::BackgroundSubtractorMOG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNMixtures();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_setNMixtures_int(cv::bgsegm::BackgroundSubtractorMOG* instance, int nmix, ResultVoid* ocvrs_return) {
		try {
			instance->setNMixtures(nmix);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_getBackgroundRatio_const(const cv::bgsegm::BackgroundSubtractorMOG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getBackgroundRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_setBackgroundRatio_double(cv::bgsegm::BackgroundSubtractorMOG* instance, double backgroundRatio, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundRatio(backgroundRatio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_getNoiseSigma_const(const cv::bgsegm::BackgroundSubtractorMOG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getNoiseSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_setNoiseSigma_double(cv::bgsegm::BackgroundSubtractorMOG* instance, double noiseSigma, ResultVoid* ocvrs_return) {
		try {
			instance->setNoiseSigma(noiseSigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_bgsegm_BackgroundSubtractorMOG_to_Algorithm(cv::bgsegm::BackgroundSubtractorMOG* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::BackgroundSubtractor* cv_bgsegm_BackgroundSubtractorMOG_to_BackgroundSubtractor(cv::bgsegm::BackgroundSubtractorMOG* instance) {
			return dynamic_cast<cv::BackgroundSubtractor*>(instance);
	}
	
	void cv_bgsegm_BackgroundSubtractorMOG_delete(cv::bgsegm::BackgroundSubtractorMOG* instance) {
			delete instance;
	}
	
	void cv_bgsegm_SyntheticSequenceGenerator_SyntheticSequenceGenerator_const__InputArrayR_const__InputArrayR_double_double_double_double(const cv::_InputArray* background, const cv::_InputArray* object, double amplitude, double wavelength, double wavespeed, double objspeed, Result<cv::bgsegm::SyntheticSequenceGenerator*>* ocvrs_return) {
		try {
			cv::bgsegm::SyntheticSequenceGenerator* ret = new cv::bgsegm::SyntheticSequenceGenerator(*background, *object, amplitude, wavelength, wavespeed, objspeed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bgsegm_SyntheticSequenceGenerator_getNextFrame_const__OutputArrayR_const__OutputArrayR(cv::bgsegm::SyntheticSequenceGenerator* instance, const cv::_OutputArray* frame, const cv::_OutputArray* gtMask, ResultVoid* ocvrs_return) {
		try {
			instance->getNextFrame(*frame, *gtMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_bgsegm_SyntheticSequenceGenerator_to_Algorithm(cv::bgsegm::SyntheticSequenceGenerator* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_bgsegm_SyntheticSequenceGenerator_delete(cv::bgsegm::SyntheticSequenceGenerator* instance) {
			delete instance;
	}
	
}
