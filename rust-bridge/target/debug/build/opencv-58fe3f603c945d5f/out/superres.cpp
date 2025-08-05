#include "ocvrs_common.hpp"
#include <opencv2/superres.hpp>
#include "superres_types.hpp"

extern "C" {
	void cv_superres_createFrameSource_Camera(Result<cv::Ptr<cv::superres::FrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Camera();
			Ok(new cv::Ptr<cv::superres::FrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createFrameSource_Camera_int(int deviceId, Result<cv::Ptr<cv::superres::FrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Camera(deviceId);
			Ok(new cv::Ptr<cv::superres::FrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createFrameSource_Empty(Result<cv::Ptr<cv::superres::FrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Empty();
			Ok(new cv::Ptr<cv::superres::FrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createFrameSource_Video_CUDA_const_StringR(const char* fileName, Result<cv::Ptr<cv::superres::FrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Video_CUDA(std::string(fileName));
			Ok(new cv::Ptr<cv::superres::FrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createFrameSource_Video_const_StringR(const char* fileName, Result<cv::Ptr<cv::superres::FrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Video(std::string(fileName));
			Ok(new cv::Ptr<cv::superres::FrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createOptFlow_Brox_CUDA(Result<cv::Ptr<cv::superres::BroxOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::BroxOpticalFlow> ret = cv::superres::createOptFlow_Brox_CUDA();
			Ok(new cv::Ptr<cv::superres::BroxOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createOptFlow_DualTVL1(Result<cv::Ptr<cv::superres::DualTVL1OpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::DualTVL1OpticalFlow> ret = cv::superres::createOptFlow_DualTVL1();
			Ok(new cv::Ptr<cv::superres::DualTVL1OpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createOptFlow_DualTVL1_CUDA(Result<cv::Ptr<cv::superres::DualTVL1OpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::DualTVL1OpticalFlow> ret = cv::superres::createOptFlow_DualTVL1_CUDA();
			Ok(new cv::Ptr<cv::superres::DualTVL1OpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createOptFlow_Farneback(Result<cv::Ptr<cv::superres::FarnebackOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FarnebackOpticalFlow> ret = cv::superres::createOptFlow_Farneback();
			Ok(new cv::Ptr<cv::superres::FarnebackOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createOptFlow_Farneback_CUDA(Result<cv::Ptr<cv::superres::FarnebackOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::FarnebackOpticalFlow> ret = cv::superres::createOptFlow_Farneback_CUDA();
			Ok(new cv::Ptr<cv::superres::FarnebackOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createOptFlow_PyrLK_CUDA(Result<cv::Ptr<cv::superres::PyrLKOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::PyrLKOpticalFlow> ret = cv::superres::createOptFlow_PyrLK_CUDA();
			Ok(new cv::Ptr<cv::superres::PyrLKOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createSuperResolution_BTVL1(Result<cv::Ptr<cv::superres::SuperResolution>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::SuperResolution> ret = cv::superres::createSuperResolution_BTVL1();
			Ok(new cv::Ptr<cv::superres::SuperResolution>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_createSuperResolution_BTVL1_CUDA(Result<cv::Ptr<cv::superres::SuperResolution>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::SuperResolution> ret = cv::superres::createSuperResolution_BTVL1_CUDA();
			Ok(new cv::Ptr<cv::superres::SuperResolution>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_getAlpha_const(const cv::superres::BroxOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getAlpha();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_setAlpha_double(cv::superres::BroxOpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setAlpha(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_getGamma_const(const cv::superres::BroxOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getGamma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_setGamma_double(cv::superres::BroxOpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setGamma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_getScaleFactor_const(const cv::superres::BroxOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_setScaleFactor_double(cv::superres::BroxOpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_getInnerIterations_const(const cv::superres::BroxOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getInnerIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_setInnerIterations_int(cv::superres::BroxOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setInnerIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_getOuterIterations_const(const cv::superres::BroxOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getOuterIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_setOuterIterations_int(cv::superres::BroxOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setOuterIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_getSolverIterations_const(const cv::superres::BroxOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSolverIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_BroxOpticalFlow_setSolverIterations_int(cv::superres::BroxOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setSolverIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_superres_BroxOpticalFlow_to_Algorithm(cv::superres::BroxOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::superres::DenseOpticalFlowExt* cv_superres_BroxOpticalFlow_to_SuperRes_DenseOpticalFlowExt(cv::superres::BroxOpticalFlow* instance) {
			return dynamic_cast<cv::superres::DenseOpticalFlowExt*>(instance);
	}
	
	void cv_superres_BroxOpticalFlow_delete(cv::superres::BroxOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_superres_DenseOpticalFlowExt_calc_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::superres::DenseOpticalFlowExt* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_OutputArray* flow1, const cv::_OutputArray* flow2, ResultVoid* ocvrs_return) {
		try {
			instance->calc(*frame0, *frame1, *flow1, *flow2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DenseOpticalFlowExt_calc_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::superres::DenseOpticalFlowExt* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_OutputArray* flow1, ResultVoid* ocvrs_return) {
		try {
			instance->calc(*frame0, *frame1, *flow1);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DenseOpticalFlowExt_collectGarbage(cv::superres::DenseOpticalFlowExt* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::superres::BroxOpticalFlow* cv_superres_DenseOpticalFlowExt_to_SuperRes_BroxOpticalFlow(cv::superres::DenseOpticalFlowExt* instance) {
			return dynamic_cast<cv::superres::BroxOpticalFlow*>(instance);
	}
	
	cv::superres::DualTVL1OpticalFlow* cv_superres_DenseOpticalFlowExt_to_SuperRes_DualTVL1OpticalFlow(cv::superres::DenseOpticalFlowExt* instance) {
			return dynamic_cast<cv::superres::DualTVL1OpticalFlow*>(instance);
	}
	
	cv::superres::FarnebackOpticalFlow* cv_superres_DenseOpticalFlowExt_to_SuperRes_FarnebackOpticalFlow(cv::superres::DenseOpticalFlowExt* instance) {
			return dynamic_cast<cv::superres::FarnebackOpticalFlow*>(instance);
	}
	
	cv::superres::PyrLKOpticalFlow* cv_superres_DenseOpticalFlowExt_to_SuperRes_PyrLKOpticalFlow(cv::superres::DenseOpticalFlowExt* instance) {
			return dynamic_cast<cv::superres::PyrLKOpticalFlow*>(instance);
	}
	
	cv::Algorithm* cv_superres_DenseOpticalFlowExt_to_Algorithm(cv::superres::DenseOpticalFlowExt* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_superres_DenseOpticalFlowExt_delete(cv::superres::DenseOpticalFlowExt* instance) {
			delete instance;
	}
	
	void cv_superres_DualTVL1OpticalFlow_getTau_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTau();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setTau_double(cv::superres::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setTau(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getLambda_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setLambda_double(cv::superres::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setLambda(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getTheta_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTheta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setTheta_double(cv::superres::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setTheta(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getScalesNumber_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getScalesNumber();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setScalesNumber_int(cv::superres::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setScalesNumber(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getWarpingsNumber_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWarpingsNumber();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setWarpingsNumber_int(cv::superres::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setWarpingsNumber(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getEpsilon_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getEpsilon();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setEpsilon_double(cv::superres::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setEpsilon(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getIterations_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setIterations_int(cv::superres::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_getUseInitialFlow_const(const cv::superres::DualTVL1OpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseInitialFlow();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_DualTVL1OpticalFlow_setUseInitialFlow_bool(cv::superres::DualTVL1OpticalFlow* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseInitialFlow(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_superres_DualTVL1OpticalFlow_to_Algorithm(cv::superres::DualTVL1OpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::superres::DenseOpticalFlowExt* cv_superres_DualTVL1OpticalFlow_to_SuperRes_DenseOpticalFlowExt(cv::superres::DualTVL1OpticalFlow* instance) {
			return dynamic_cast<cv::superres::DenseOpticalFlowExt*>(instance);
	}
	
	void cv_superres_DualTVL1OpticalFlow_delete(cv::superres::DualTVL1OpticalFlow* instance) {
			delete instance;
	}
	
	void cv_superres_FarnebackOpticalFlow_getPyrScale_const(const cv::superres::FarnebackOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getPyrScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setPyrScale_double(cv::superres::FarnebackOpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setPyrScale(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_getLevelsNumber_const(const cv::superres::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLevelsNumber();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setLevelsNumber_int(cv::superres::FarnebackOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setLevelsNumber(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_getWindowSize_const(const cv::superres::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setWindowSize_int(cv::superres::FarnebackOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_getIterations_const(const cv::superres::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setIterations_int(cv::superres::FarnebackOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_getPolyN_const(const cv::superres::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPolyN();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setPolyN_int(cv::superres::FarnebackOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setPolyN(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_getPolySigma_const(const cv::superres::FarnebackOpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getPolySigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setPolySigma_double(cv::superres::FarnebackOpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setPolySigma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_getFlags_const(const cv::superres::FarnebackOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFlags();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FarnebackOpticalFlow_setFlags_int(cv::superres::FarnebackOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setFlags(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_superres_FarnebackOpticalFlow_to_Algorithm(cv::superres::FarnebackOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::superres::DenseOpticalFlowExt* cv_superres_FarnebackOpticalFlow_to_SuperRes_DenseOpticalFlowExt(cv::superres::FarnebackOpticalFlow* instance) {
			return dynamic_cast<cv::superres::DenseOpticalFlowExt*>(instance);
	}
	
	void cv_superres_FarnebackOpticalFlow_delete(cv::superres::FarnebackOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_superres_FrameSource_nextFrame_const__OutputArrayR(cv::superres::FrameSource* instance, const cv::_OutputArray* frame, ResultVoid* ocvrs_return) {
		try {
			instance->nextFrame(*frame);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_FrameSource_reset(cv::superres::FrameSource* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::superres::SuperResolution* cv_superres_FrameSource_to_SuperRes_SuperResolution(cv::superres::FrameSource* instance) {
			return dynamic_cast<cv::superres::SuperResolution*>(instance);
	}
	
	void cv_superres_FrameSource_delete(cv::superres::FrameSource* instance) {
			delete instance;
	}
	
	void cv_superres_PyrLKOpticalFlow_getWindowSize_const(const cv::superres::PyrLKOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_PyrLKOpticalFlow_setWindowSize_int(cv::superres::PyrLKOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_PyrLKOpticalFlow_getMaxLevel_const(const cv::superres::PyrLKOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_PyrLKOpticalFlow_setMaxLevel_int(cv::superres::PyrLKOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxLevel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_PyrLKOpticalFlow_getIterations_const(const cv::superres::PyrLKOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_PyrLKOpticalFlow_setIterations_int(cv::superres::PyrLKOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_superres_PyrLKOpticalFlow_to_Algorithm(cv::superres::PyrLKOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::superres::DenseOpticalFlowExt* cv_superres_PyrLKOpticalFlow_to_SuperRes_DenseOpticalFlowExt(cv::superres::PyrLKOpticalFlow* instance) {
			return dynamic_cast<cv::superres::DenseOpticalFlowExt*>(instance);
	}
	
	void cv_superres_PyrLKOpticalFlow_delete(cv::superres::PyrLKOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_superres_SuperResolution_setInput_const_PtrLFrameSourceGR(cv::superres::SuperResolution* instance, const cv::Ptr<cv::superres::FrameSource>* frameSource, ResultVoid* ocvrs_return) {
		try {
			instance->setInput(*frameSource);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_nextFrame_const__OutputArrayR(cv::superres::SuperResolution* instance, const cv::_OutputArray* frame, ResultVoid* ocvrs_return) {
		try {
			instance->nextFrame(*frame);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_reset(cv::superres::SuperResolution* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_collectGarbage(cv::superres::SuperResolution* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getScale_const(const cv::superres::SuperResolution* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setScale_int(cv::superres::SuperResolution* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setScale(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getIterations_const(const cv::superres::SuperResolution* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setIterations_int(cv::superres::SuperResolution* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getTau_const(const cv::superres::SuperResolution* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTau();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setTau_double(cv::superres::SuperResolution* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setTau(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getLambda_const(const cv::superres::SuperResolution* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setLambda_double(cv::superres::SuperResolution* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setLambda(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getAlpha_const(const cv::superres::SuperResolution* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getAlpha();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setAlpha_double(cv::superres::SuperResolution* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setAlpha(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getKernelSize_const(const cv::superres::SuperResolution* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getKernelSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setKernelSize_int(cv::superres::SuperResolution* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setKernelSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getBlurKernelSize_const(const cv::superres::SuperResolution* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getBlurKernelSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setBlurKernelSize_int(cv::superres::SuperResolution* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setBlurKernelSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getBlurSigma_const(const cv::superres::SuperResolution* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getBlurSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setBlurSigma_double(cv::superres::SuperResolution* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setBlurSigma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getTemporalAreaRadius_const(const cv::superres::SuperResolution* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTemporalAreaRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setTemporalAreaRadius_int(cv::superres::SuperResolution* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTemporalAreaRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_getOpticalFlow_const(const cv::superres::SuperResolution* instance, Result<cv::Ptr<cv::superres::DenseOpticalFlowExt>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::superres::DenseOpticalFlowExt> ret = instance->getOpticalFlow();
			Ok(new cv::Ptr<cv::superres::DenseOpticalFlowExt>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_superres_SuperResolution_setOpticalFlow_const_PtrLDenseOpticalFlowExtGR(cv::superres::SuperResolution* instance, const cv::Ptr<cv::superres::DenseOpticalFlowExt>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setOpticalFlow(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_superres_SuperResolution_to_Algorithm(cv::superres::SuperResolution* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::superres::FrameSource* cv_superres_SuperResolution_to_SuperRes_FrameSource(cv::superres::SuperResolution* instance) {
			return dynamic_cast<cv::superres::FrameSource*>(instance);
	}
	
	void cv_superres_SuperResolution_delete(cv::superres::SuperResolution* instance) {
			delete instance;
	}
	
}
