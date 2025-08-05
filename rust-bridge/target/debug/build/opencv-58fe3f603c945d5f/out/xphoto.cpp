#include "ocvrs_common.hpp"
#include <opencv2/xphoto.hpp>
#include "xphoto_types.hpp"

extern "C" {
	void cv_xphoto_applyChannelGains_const__InputArrayR_const__OutputArrayR_float_float_float(const cv::_InputArray* src, const cv::_OutputArray* dst, float gainB, float gainG, float gainR, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::applyChannelGains(*src, *dst, gainB, gainG, gainR);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_bm3dDenoising_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputOutputArray* dstStep1, const cv::_OutputArray* dstStep2, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::bm3dDenoising(*src, *dstStep1, *dstStep2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_bm3dDenoising_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_float_int_int_int_int_int_int_float_int_int_int(const cv::_InputArray* src, const cv::_InputOutputArray* dstStep1, const cv::_OutputArray* dstStep2, float h, int templateWindowSize, int searchWindowSize, int blockMatchingStep1, int blockMatchingStep2, int groupSize, int slidingStep, float beta, int normType, int step, int transformType, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::bm3dDenoising(*src, *dstStep1, *dstStep2, h, templateWindowSize, searchWindowSize, blockMatchingStep1, blockMatchingStep2, groupSize, slidingStep, beta, normType, step, transformType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_bm3dDenoising_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::bm3dDenoising(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_bm3dDenoising_const__InputArrayR_const__OutputArrayR_float_int_int_int_int_int_int_float_int_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, float h, int templateWindowSize, int searchWindowSize, int blockMatchingStep1, int blockMatchingStep2, int groupSize, int slidingStep, float beta, int normType, int step, int transformType, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::bm3dDenoising(*src, *dst, h, templateWindowSize, searchWindowSize, blockMatchingStep1, blockMatchingStep2, groupSize, slidingStep, beta, normType, step, transformType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_createGrayworldWB(Result<cv::Ptr<cv::xphoto::GrayworldWB>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xphoto::GrayworldWB> ret = cv::xphoto::createGrayworldWB();
			Ok(new cv::Ptr<cv::xphoto::GrayworldWB>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_createLearningBasedWB(Result<cv::Ptr<cv::xphoto::LearningBasedWB>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xphoto::LearningBasedWB> ret = cv::xphoto::createLearningBasedWB();
			Ok(new cv::Ptr<cv::xphoto::LearningBasedWB>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_createLearningBasedWB_const_StringR(const char* path_to_model, Result<cv::Ptr<cv::xphoto::LearningBasedWB>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xphoto::LearningBasedWB> ret = cv::xphoto::createLearningBasedWB(std::string(path_to_model));
			Ok(new cv::Ptr<cv::xphoto::LearningBasedWB>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_createSimpleWB(Result<cv::Ptr<cv::xphoto::SimpleWB>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xphoto::SimpleWB> ret = cv::xphoto::createSimpleWB();
			Ok(new cv::Ptr<cv::xphoto::SimpleWB>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_createTonemapDurand(Result<cv::Ptr<cv::xphoto::TonemapDurand>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xphoto::TonemapDurand> ret = cv::xphoto::createTonemapDurand();
			Ok(new cv::Ptr<cv::xphoto::TonemapDurand>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_createTonemapDurand_float_float_float_float_float(float gamma, float contrast, float saturation, float sigma_color, float sigma_space, Result<cv::Ptr<cv::xphoto::TonemapDurand>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xphoto::TonemapDurand> ret = cv::xphoto::createTonemapDurand(gamma, contrast, saturation, sigma_color, sigma_space);
			Ok(new cv::Ptr<cv::xphoto::TonemapDurand>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_dctDenoising_const_MatR_MatR_const_double(const cv::Mat* src, cv::Mat* dst, const double sigma, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::dctDenoising(*src, *dst, sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_dctDenoising_const_MatR_MatR_const_double_const_int(const cv::Mat* src, cv::Mat* dst, const double sigma, const int psize, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::dctDenoising(*src, *dst, sigma, psize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_inpaint_const_MatR_const_MatR_MatR_const_int(const cv::Mat* src, const cv::Mat* mask, cv::Mat* dst, const int algorithmType, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::inpaint(*src, *mask, *dst, algorithmType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_oilPainting_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int size, int dynRatio, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::oilPainting(*src, *dst, size, dynRatio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_oilPainting_const__InputArrayR_const__OutputArrayR_int_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int size, int dynRatio, int code, ResultVoid* ocvrs_return) {
		try {
			cv::xphoto::oilPainting(*src, *dst, size, dynRatio, code);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_GrayworldWB_getSaturationThreshold_const(const cv::xphoto::GrayworldWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSaturationThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_GrayworldWB_setSaturationThreshold_float(cv::xphoto::GrayworldWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setSaturationThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xphoto_GrayworldWB_to_Algorithm(cv::xphoto::GrayworldWB* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::xphoto::WhiteBalancer* cv_xphoto_GrayworldWB_to_WhiteBalancer(cv::xphoto::GrayworldWB* instance) {
			return dynamic_cast<cv::xphoto::WhiteBalancer*>(instance);
	}
	
	void cv_xphoto_GrayworldWB_delete(cv::xphoto::GrayworldWB* instance) {
			delete instance;
	}
	
	void cv_xphoto_LearningBasedWB_extractSimpleFeatures_const__InputArrayR_const__OutputArrayR(cv::xphoto::LearningBasedWB* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->extractSimpleFeatures(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_LearningBasedWB_getRangeMaxVal_const(const cv::xphoto::LearningBasedWB* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getRangeMaxVal();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_LearningBasedWB_setRangeMaxVal_int(cv::xphoto::LearningBasedWB* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRangeMaxVal(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_LearningBasedWB_getSaturationThreshold_const(const cv::xphoto::LearningBasedWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSaturationThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_LearningBasedWB_setSaturationThreshold_float(cv::xphoto::LearningBasedWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setSaturationThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_LearningBasedWB_getHistBinNum_const(const cv::xphoto::LearningBasedWB* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getHistBinNum();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_LearningBasedWB_setHistBinNum_int(cv::xphoto::LearningBasedWB* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setHistBinNum(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xphoto_LearningBasedWB_to_Algorithm(cv::xphoto::LearningBasedWB* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::xphoto::WhiteBalancer* cv_xphoto_LearningBasedWB_to_WhiteBalancer(cv::xphoto::LearningBasedWB* instance) {
			return dynamic_cast<cv::xphoto::WhiteBalancer*>(instance);
	}
	
	void cv_xphoto_LearningBasedWB_delete(cv::xphoto::LearningBasedWB* instance) {
			delete instance;
	}
	
	void cv_xphoto_SimpleWB_getInputMin_const(const cv::xphoto::SimpleWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getInputMin();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_setInputMin_float(cv::xphoto::SimpleWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setInputMin(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_getInputMax_const(const cv::xphoto::SimpleWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getInputMax();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_setInputMax_float(cv::xphoto::SimpleWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setInputMax(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_getOutputMin_const(const cv::xphoto::SimpleWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getOutputMin();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_setOutputMin_float(cv::xphoto::SimpleWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setOutputMin(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_getOutputMax_const(const cv::xphoto::SimpleWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getOutputMax();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_setOutputMax_float(cv::xphoto::SimpleWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setOutputMax(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_getP_const(const cv::xphoto::SimpleWB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getP();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_SimpleWB_setP_float(cv::xphoto::SimpleWB* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setP(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xphoto_SimpleWB_to_Algorithm(cv::xphoto::SimpleWB* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::xphoto::WhiteBalancer* cv_xphoto_SimpleWB_to_WhiteBalancer(cv::xphoto::SimpleWB* instance) {
			return dynamic_cast<cv::xphoto::WhiteBalancer*>(instance);
	}
	
	void cv_xphoto_SimpleWB_delete(cv::xphoto::SimpleWB* instance) {
			delete instance;
	}
	
	void cv_xphoto_TonemapDurand_getSaturation_const(const cv::xphoto::TonemapDurand* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSaturation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_setSaturation_float(cv::xphoto::TonemapDurand* instance, float saturation, ResultVoid* ocvrs_return) {
		try {
			instance->setSaturation(saturation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_getContrast_const(const cv::xphoto::TonemapDurand* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getContrast();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_setContrast_float(cv::xphoto::TonemapDurand* instance, float contrast, ResultVoid* ocvrs_return) {
		try {
			instance->setContrast(contrast);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_getSigmaSpace_const(const cv::xphoto::TonemapDurand* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSigmaSpace();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_setSigmaSpace_float(cv::xphoto::TonemapDurand* instance, float sigma_space, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaSpace(sigma_space);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_getSigmaColor_const(const cv::xphoto::TonemapDurand* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSigmaColor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xphoto_TonemapDurand_setSigmaColor_float(cv::xphoto::TonemapDurand* instance, float sigma_color, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaColor(sigma_color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xphoto_TonemapDurand_to_Algorithm(cv::xphoto::TonemapDurand* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Tonemap* cv_xphoto_TonemapDurand_to_Tonemap(cv::xphoto::TonemapDurand* instance) {
			return dynamic_cast<cv::Tonemap*>(instance);
	}
	
	void cv_xphoto_TonemapDurand_delete(cv::xphoto::TonemapDurand* instance) {
			delete instance;
	}
	
	void cv_xphoto_WhiteBalancer_balanceWhite_const__InputArrayR_const__OutputArrayR(cv::xphoto::WhiteBalancer* instance, const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->balanceWhite(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::xphoto::GrayworldWB* cv_xphoto_WhiteBalancer_to_GrayworldWB(cv::xphoto::WhiteBalancer* instance) {
			return dynamic_cast<cv::xphoto::GrayworldWB*>(instance);
	}
	
	cv::xphoto::LearningBasedWB* cv_xphoto_WhiteBalancer_to_LearningBasedWB(cv::xphoto::WhiteBalancer* instance) {
			return dynamic_cast<cv::xphoto::LearningBasedWB*>(instance);
	}
	
	cv::xphoto::SimpleWB* cv_xphoto_WhiteBalancer_to_SimpleWB(cv::xphoto::WhiteBalancer* instance) {
			return dynamic_cast<cv::xphoto::SimpleWB*>(instance);
	}
	
	cv::Algorithm* cv_xphoto_WhiteBalancer_to_Algorithm(cv::xphoto::WhiteBalancer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_xphoto_WhiteBalancer_delete(cv::xphoto::WhiteBalancer* instance) {
			delete instance;
	}
	
}
