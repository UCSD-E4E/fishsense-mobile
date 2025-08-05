#include "ocvrs_common.hpp"
#include <opencv2/saliency.hpp>
#include "saliency_types.hpp"

extern "C" {
	cv::saliency::MotionSaliencyBinWangApr2014* cv_saliency_MotionSaliency_to_MotionSaliencyBinWangApr2014(cv::saliency::MotionSaliency* instance) {
			return dynamic_cast<cv::saliency::MotionSaliencyBinWangApr2014*>(instance);
	}
	
	cv::Algorithm* cv_saliency_MotionSaliency_to_Algorithm(cv::saliency::MotionSaliency* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_MotionSaliency_to_Saliency(cv::saliency::MotionSaliency* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	void cv_saliency_MotionSaliency_delete(cv::saliency::MotionSaliency* instance) {
			delete instance;
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_MotionSaliencyBinWangApr2014(Result<cv::saliency::MotionSaliencyBinWangApr2014*>* ocvrs_return) {
		try {
			cv::saliency::MotionSaliencyBinWangApr2014* ret = new cv::saliency::MotionSaliencyBinWangApr2014();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_create(Result<cv::Ptr<cv::saliency::MotionSaliencyBinWangApr2014>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::saliency::MotionSaliencyBinWangApr2014> ret = cv::saliency::MotionSaliencyBinWangApr2014::create();
			Ok(new cv::Ptr<cv::saliency::MotionSaliencyBinWangApr2014>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_computeSaliency_const__InputArrayR_const__OutputArrayR(cv::saliency::MotionSaliencyBinWangApr2014* instance, const cv::_InputArray* image, const cv::_OutputArray* saliencyMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->computeSaliency(*image, *saliencyMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_setImagesize_int_int(cv::saliency::MotionSaliencyBinWangApr2014* instance, int W, int H, ResultVoid* ocvrs_return) {
		try {
			instance->setImagesize(W, H);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_init(cv::saliency::MotionSaliencyBinWangApr2014* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->init();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_getImageWidth_const(const cv::saliency::MotionSaliencyBinWangApr2014* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getImageWidth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_setImageWidth_int(cv::saliency::MotionSaliencyBinWangApr2014* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setImageWidth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_getImageHeight_const(const cv::saliency::MotionSaliencyBinWangApr2014* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getImageHeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_setImageHeight_int(cv::saliency::MotionSaliencyBinWangApr2014* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setImageHeight(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_saliency_MotionSaliencyBinWangApr2014_to_Algorithm(cv::saliency::MotionSaliencyBinWangApr2014* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::MotionSaliency* cv_saliency_MotionSaliencyBinWangApr2014_to_MotionSaliency(cv::saliency::MotionSaliencyBinWangApr2014* instance) {
			return dynamic_cast<cv::saliency::MotionSaliency*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_MotionSaliencyBinWangApr2014_to_Saliency(cv::saliency::MotionSaliencyBinWangApr2014* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	void cv_saliency_MotionSaliencyBinWangApr2014_delete(cv::saliency::MotionSaliencyBinWangApr2014* instance) {
			delete instance;
	}
	
	cv::saliency::ObjectnessBING* cv_saliency_Objectness_to_ObjectnessBING(cv::saliency::Objectness* instance) {
			return dynamic_cast<cv::saliency::ObjectnessBING*>(instance);
	}
	
	cv::Algorithm* cv_saliency_Objectness_to_Algorithm(cv::saliency::Objectness* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_Objectness_to_Saliency(cv::saliency::Objectness* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	void cv_saliency_Objectness_delete(cv::saliency::Objectness* instance) {
			delete instance;
	}
	
	void cv_saliency_ObjectnessBING_ObjectnessBING(Result<cv::saliency::ObjectnessBING*>* ocvrs_return) {
		try {
			cv::saliency::ObjectnessBING* ret = new cv::saliency::ObjectnessBING();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_create(Result<cv::Ptr<cv::saliency::ObjectnessBING>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::saliency::ObjectnessBING> ret = cv::saliency::ObjectnessBING::create();
			Ok(new cv::Ptr<cv::saliency::ObjectnessBING>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_computeSaliency_const__InputArrayR_const__OutputArrayR(cv::saliency::ObjectnessBING* instance, const cv::_InputArray* image, const cv::_OutputArray* saliencyMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->computeSaliency(*image, *saliencyMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_read(cv::saliency::ObjectnessBING* instance, ResultVoid* ocvrs_return) {
		try {
			instance->read();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_write_const(const cv::saliency::ObjectnessBING* instance, ResultVoid* ocvrs_return) {
		try {
			instance->write();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_getobjectnessValues(cv::saliency::ObjectnessBING* instance, Result<std::vector<float>*>* ocvrs_return) {
		try {
			std::vector<float> ret = instance->getobjectnessValues();
			Ok(new std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_setTrainingPath_const_StringR(cv::saliency::ObjectnessBING* instance, const char* trainingPath, ResultVoid* ocvrs_return) {
		try {
			instance->setTrainingPath(std::string(trainingPath));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_setBBResDir_const_StringR(cv::saliency::ObjectnessBING* instance, const char* resultsDir, ResultVoid* ocvrs_return) {
		try {
			instance->setBBResDir(std::string(resultsDir));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_getBase_const(const cv::saliency::ObjectnessBING* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getBase();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_setBase_double(cv::saliency::ObjectnessBING* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setBase(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_getNSS_const(const cv::saliency::ObjectnessBING* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNSS();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_setNSS_int(cv::saliency::ObjectnessBING* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setNSS(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_getW_const(const cv::saliency::ObjectnessBING* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getW();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_ObjectnessBING_setW_int(cv::saliency::ObjectnessBING* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setW(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_saliency_ObjectnessBING_to_Algorithm(cv::saliency::ObjectnessBING* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::Objectness* cv_saliency_ObjectnessBING_to_Objectness(cv::saliency::ObjectnessBING* instance) {
			return dynamic_cast<cv::saliency::Objectness*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_ObjectnessBING_to_Saliency(cv::saliency::ObjectnessBING* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	void cv_saliency_ObjectnessBING_delete(cv::saliency::ObjectnessBING* instance) {
			delete instance;
	}
	
	void cv_saliency_Saliency_computeSaliency_const__InputArrayR_const__OutputArrayR(cv::saliency::Saliency* instance, const cv::_InputArray* image, const cv::_OutputArray* saliencyMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->computeSaliency(*image, *saliencyMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::saliency::MotionSaliency* cv_saliency_Saliency_to_MotionSaliency(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::MotionSaliency*>(instance);
	}
	
	cv::saliency::MotionSaliencyBinWangApr2014* cv_saliency_Saliency_to_MotionSaliencyBinWangApr2014(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::MotionSaliencyBinWangApr2014*>(instance);
	}
	
	cv::saliency::Objectness* cv_saliency_Saliency_to_Objectness(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::Objectness*>(instance);
	}
	
	cv::saliency::ObjectnessBING* cv_saliency_Saliency_to_ObjectnessBING(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::ObjectnessBING*>(instance);
	}
	
	cv::saliency::StaticSaliency* cv_saliency_Saliency_to_StaticSaliency(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::StaticSaliency*>(instance);
	}
	
	cv::saliency::StaticSaliencyFineGrained* cv_saliency_Saliency_to_StaticSaliencyFineGrained(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::StaticSaliencyFineGrained*>(instance);
	}
	
	cv::saliency::StaticSaliencySpectralResidual* cv_saliency_Saliency_to_StaticSaliencySpectralResidual(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::saliency::StaticSaliencySpectralResidual*>(instance);
	}
	
	cv::Algorithm* cv_saliency_Saliency_to_Algorithm(cv::saliency::Saliency* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_saliency_Saliency_delete(cv::saliency::Saliency* instance) {
			delete instance;
	}
	
	void cv_saliency_StaticSaliency_computeBinaryMap_const__InputArrayR_const__OutputArrayR(cv::saliency::StaticSaliency* instance, const cv::_InputArray* _saliencyMap, const cv::_OutputArray* _binaryMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->computeBinaryMap(*_saliencyMap, *_binaryMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::saliency::StaticSaliencyFineGrained* cv_saliency_StaticSaliency_to_StaticSaliencyFineGrained(cv::saliency::StaticSaliency* instance) {
			return dynamic_cast<cv::saliency::StaticSaliencyFineGrained*>(instance);
	}
	
	cv::saliency::StaticSaliencySpectralResidual* cv_saliency_StaticSaliency_to_StaticSaliencySpectralResidual(cv::saliency::StaticSaliency* instance) {
			return dynamic_cast<cv::saliency::StaticSaliencySpectralResidual*>(instance);
	}
	
	cv::Algorithm* cv_saliency_StaticSaliency_to_Algorithm(cv::saliency::StaticSaliency* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_StaticSaliency_to_Saliency(cv::saliency::StaticSaliency* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	void cv_saliency_StaticSaliency_delete(cv::saliency::StaticSaliency* instance) {
			delete instance;
	}
	
	void cv_saliency_StaticSaliencyFineGrained_StaticSaliencyFineGrained(Result<cv::saliency::StaticSaliencyFineGrained*>* ocvrs_return) {
		try {
			cv::saliency::StaticSaliencyFineGrained* ret = new cv::saliency::StaticSaliencyFineGrained();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencyFineGrained_create(Result<cv::Ptr<cv::saliency::StaticSaliencyFineGrained>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::saliency::StaticSaliencyFineGrained> ret = cv::saliency::StaticSaliencyFineGrained::create();
			Ok(new cv::Ptr<cv::saliency::StaticSaliencyFineGrained>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencyFineGrained_computeSaliency_const__InputArrayR_const__OutputArrayR(cv::saliency::StaticSaliencyFineGrained* instance, const cv::_InputArray* image, const cv::_OutputArray* saliencyMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->computeSaliency(*image, *saliencyMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_saliency_StaticSaliencyFineGrained_to_Algorithm(cv::saliency::StaticSaliencyFineGrained* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_StaticSaliencyFineGrained_to_Saliency(cv::saliency::StaticSaliencyFineGrained* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	cv::saliency::StaticSaliency* cv_saliency_StaticSaliencyFineGrained_to_StaticSaliency(cv::saliency::StaticSaliencyFineGrained* instance) {
			return dynamic_cast<cv::saliency::StaticSaliency*>(instance);
	}
	
	void cv_saliency_StaticSaliencyFineGrained_delete(cv::saliency::StaticSaliencyFineGrained* instance) {
			delete instance;
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_StaticSaliencySpectralResidual(Result<cv::saliency::StaticSaliencySpectralResidual*>* ocvrs_return) {
		try {
			cv::saliency::StaticSaliencySpectralResidual* ret = new cv::saliency::StaticSaliencySpectralResidual();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_create(Result<cv::Ptr<cv::saliency::StaticSaliencySpectralResidual>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::saliency::StaticSaliencySpectralResidual> ret = cv::saliency::StaticSaliencySpectralResidual::create();
			Ok(new cv::Ptr<cv::saliency::StaticSaliencySpectralResidual>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_computeSaliency_const__InputArrayR_const__OutputArrayR(cv::saliency::StaticSaliencySpectralResidual* instance, const cv::_InputArray* image, const cv::_OutputArray* saliencyMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->computeSaliency(*image, *saliencyMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_read_const_FileNodeR(cv::saliency::StaticSaliencySpectralResidual* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_write_const_FileStorageR(const cv::saliency::StaticSaliencySpectralResidual* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_getImageWidth_const(const cv::saliency::StaticSaliencySpectralResidual* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getImageWidth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_setImageWidth_int(cv::saliency::StaticSaliencySpectralResidual* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setImageWidth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_getImageHeight_const(const cv::saliency::StaticSaliencySpectralResidual* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getImageHeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_setImageHeight_int(cv::saliency::StaticSaliencySpectralResidual* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setImageHeight(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_saliency_StaticSaliencySpectralResidual_to_Algorithm(cv::saliency::StaticSaliencySpectralResidual* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::saliency::Saliency* cv_saliency_StaticSaliencySpectralResidual_to_Saliency(cv::saliency::StaticSaliencySpectralResidual* instance) {
			return dynamic_cast<cv::saliency::Saliency*>(instance);
	}
	
	cv::saliency::StaticSaliency* cv_saliency_StaticSaliencySpectralResidual_to_StaticSaliency(cv::saliency::StaticSaliencySpectralResidual* instance) {
			return dynamic_cast<cv::saliency::StaticSaliency*>(instance);
	}
	
	void cv_saliency_StaticSaliencySpectralResidual_delete(cv::saliency::StaticSaliencySpectralResidual* instance) {
			delete instance;
	}
	
}
