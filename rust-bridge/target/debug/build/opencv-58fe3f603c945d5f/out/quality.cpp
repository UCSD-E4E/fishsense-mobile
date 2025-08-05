#include "ocvrs_common.hpp"
#include <opencv2/quality.hpp>
#include "quality_types.hpp"

extern "C" {
	void cv_quality_QualityBRISQUE_compute_const__InputArrayR(cv::quality::QualityBRISQUE* instance, const cv::_InputArray* img, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = instance->compute(*img);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBRISQUE_create_const_StringR_const_StringR(const char* model_file_path, const char* range_file_path, Result<cv::Ptr<cv::quality::QualityBRISQUE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualityBRISQUE> ret = cv::quality::QualityBRISQUE::create(std::string(model_file_path), std::string(range_file_path));
			Ok(new cv::Ptr<cv::quality::QualityBRISQUE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBRISQUE_create_const_PtrLSVMGR_const_MatR(const cv::Ptr<cv::ml::SVM>* model, const cv::Mat* range, Result<cv::Ptr<cv::quality::QualityBRISQUE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualityBRISQUE> ret = cv::quality::QualityBRISQUE::create(*model, *range);
			Ok(new cv::Ptr<cv::quality::QualityBRISQUE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBRISQUE_compute_const__InputArrayR_const_StringR_const_StringR(const cv::_InputArray* img, const char* model_file_path, const char* range_file_path, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::quality::QualityBRISQUE::compute(*img, std::string(model_file_path), std::string(range_file_path));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBRISQUE_computeFeatures_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* img, const cv::_OutputArray* features, ResultVoid* ocvrs_return) {
		try {
			cv::quality::QualityBRISQUE::computeFeatures(*img, *features);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_quality_QualityBRISQUE_to_Algorithm(cv::quality::QualityBRISQUE* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::quality::QualityBase* cv_quality_QualityBRISQUE_to_QualityBase(cv::quality::QualityBRISQUE* instance) {
			return dynamic_cast<cv::quality::QualityBase*>(instance);
	}
	
	void cv_quality_QualityBRISQUE_delete(cv::quality::QualityBRISQUE* instance) {
			delete instance;
	}
	
	void cv_quality_QualityBase_compute_const__InputArrayR(cv::quality::QualityBase* instance, const cv::_InputArray* img, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = instance->compute(*img);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBase_getQualityMap_const_const__OutputArrayR(const cv::quality::QualityBase* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->getQualityMap(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBase_clear(cv::quality::QualityBase* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityBase_empty_const(const cv::quality::QualityBase* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::quality::QualityBRISQUE* cv_quality_QualityBase_to_QualityBRISQUE(cv::quality::QualityBase* instance) {
			return dynamic_cast<cv::quality::QualityBRISQUE*>(instance);
	}
	
	cv::quality::QualityGMSD* cv_quality_QualityBase_to_QualityGMSD(cv::quality::QualityBase* instance) {
			return dynamic_cast<cv::quality::QualityGMSD*>(instance);
	}
	
	cv::quality::QualityMSE* cv_quality_QualityBase_to_QualityMSE(cv::quality::QualityBase* instance) {
			return dynamic_cast<cv::quality::QualityMSE*>(instance);
	}
	
	cv::quality::QualityPSNR* cv_quality_QualityBase_to_QualityPSNR(cv::quality::QualityBase* instance) {
			return dynamic_cast<cv::quality::QualityPSNR*>(instance);
	}
	
	cv::quality::QualitySSIM* cv_quality_QualityBase_to_QualitySSIM(cv::quality::QualityBase* instance) {
			return dynamic_cast<cv::quality::QualitySSIM*>(instance);
	}
	
	cv::Algorithm* cv_quality_QualityBase_to_Algorithm(cv::quality::QualityBase* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_quality_QualityBase_delete(cv::quality::QualityBase* instance) {
			delete instance;
	}
	
	void cv_quality_QualityGMSD_compute_const__InputArrayR(cv::quality::QualityGMSD* instance, const cv::_InputArray* cmp, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = instance->compute(*cmp);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityGMSD_empty_const(const cv::quality::QualityGMSD* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityGMSD_clear(cv::quality::QualityGMSD* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityGMSD_create_const__InputArrayR(const cv::_InputArray* ref, Result<cv::Ptr<cv::quality::QualityGMSD>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualityGMSD> ret = cv::quality::QualityGMSD::create(*ref);
			Ok(new cv::Ptr<cv::quality::QualityGMSD>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityGMSD_compute_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* ref, const cv::_InputArray* cmp, const cv::_OutputArray* qualityMap, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::quality::QualityGMSD::compute(*ref, *cmp, *qualityMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_quality_QualityGMSD_to_Algorithm(cv::quality::QualityGMSD* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::quality::QualityBase* cv_quality_QualityGMSD_to_QualityBase(cv::quality::QualityGMSD* instance) {
			return dynamic_cast<cv::quality::QualityBase*>(instance);
	}
	
	void cv_quality_QualityGMSD_delete(cv::quality::QualityGMSD* instance) {
			delete instance;
	}
	
	void cv_quality_QualityMSE_compute_const__InputArrayR(cv::quality::QualityMSE* instance, const cv::_InputArray* cmpImgs, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = instance->compute(*cmpImgs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityMSE_empty_const(const cv::quality::QualityMSE* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityMSE_clear(cv::quality::QualityMSE* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityMSE_create_const__InputArrayR(const cv::_InputArray* ref, Result<cv::Ptr<cv::quality::QualityMSE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualityMSE> ret = cv::quality::QualityMSE::create(*ref);
			Ok(new cv::Ptr<cv::quality::QualityMSE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityMSE_compute_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* ref, const cv::_InputArray* cmp, const cv::_OutputArray* qualityMap, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::quality::QualityMSE::compute(*ref, *cmp, *qualityMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_quality_QualityMSE_to_Algorithm(cv::quality::QualityMSE* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::quality::QualityBase* cv_quality_QualityMSE_to_QualityBase(cv::quality::QualityMSE* instance) {
			return dynamic_cast<cv::quality::QualityBase*>(instance);
	}
	
	void cv_quality_QualityMSE_delete(cv::quality::QualityMSE* instance) {
			delete instance;
	}
	
	void cv_quality_QualityPSNR_create_const__InputArrayR_double(const cv::_InputArray* ref, double maxPixelValue, Result<cv::Ptr<cv::quality::QualityPSNR>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualityPSNR> ret = cv::quality::QualityPSNR::create(*ref, maxPixelValue);
			Ok(new cv::Ptr<cv::quality::QualityPSNR>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_create_const__InputArrayR(const cv::_InputArray* ref, Result<cv::Ptr<cv::quality::QualityPSNR>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualityPSNR> ret = cv::quality::QualityPSNR::create(*ref);
			Ok(new cv::Ptr<cv::quality::QualityPSNR>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_compute_const__InputArrayR(cv::quality::QualityPSNR* instance, const cv::_InputArray* cmp, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = instance->compute(*cmp);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_empty_const(const cv::quality::QualityPSNR* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_clear(cv::quality::QualityPSNR* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_compute_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double(const cv::_InputArray* ref, const cv::_InputArray* cmp, const cv::_OutputArray* qualityMap, double maxPixelValue, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::quality::QualityPSNR::compute(*ref, *cmp, *qualityMap, maxPixelValue);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_compute_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* ref, const cv::_InputArray* cmp, const cv::_OutputArray* qualityMap, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::quality::QualityPSNR::compute(*ref, *cmp, *qualityMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_getMaxPixelValue_const(const cv::quality::QualityPSNR* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxPixelValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualityPSNR_setMaxPixelValue_double(cv::quality::QualityPSNR* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxPixelValue(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_quality_QualityPSNR_to_Algorithm(cv::quality::QualityPSNR* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::quality::QualityBase* cv_quality_QualityPSNR_to_QualityBase(cv::quality::QualityPSNR* instance) {
			return dynamic_cast<cv::quality::QualityBase*>(instance);
	}
	
	void cv_quality_QualityPSNR_delete(cv::quality::QualityPSNR* instance) {
			delete instance;
	}
	
	void cv_quality_QualitySSIM_compute_const__InputArrayR(cv::quality::QualitySSIM* instance, const cv::_InputArray* cmp, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = instance->compute(*cmp);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualitySSIM_empty_const(const cv::quality::QualitySSIM* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualitySSIM_clear(cv::quality::QualitySSIM* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualitySSIM_create_const__InputArrayR(const cv::_InputArray* ref, Result<cv::Ptr<cv::quality::QualitySSIM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::quality::QualitySSIM> ret = cv::quality::QualitySSIM::create(*ref);
			Ok(new cv::Ptr<cv::quality::QualitySSIM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_quality_QualitySSIM_compute_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* ref, const cv::_InputArray* cmp, const cv::_OutputArray* qualityMap, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::quality::QualitySSIM::compute(*ref, *cmp, *qualityMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_quality_QualitySSIM_to_Algorithm(cv::quality::QualitySSIM* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::quality::QualityBase* cv_quality_QualitySSIM_to_QualityBase(cv::quality::QualitySSIM* instance) {
			return dynamic_cast<cv::quality::QualityBase*>(instance);
	}
	
	void cv_quality_QualitySSIM_delete(cv::quality::QualitySSIM* instance) {
			delete instance;
	}
	
}
