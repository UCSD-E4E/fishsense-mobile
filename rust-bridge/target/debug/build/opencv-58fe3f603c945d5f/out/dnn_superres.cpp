#include "ocvrs_common.hpp"
#include <opencv2/dnn_superres.hpp>
#include "dnn_superres_types.hpp"

extern "C" {
	void cv_dnn_superres_DnnSuperResImpl_create(Result<cv::Ptr<cv::dnn_superres::DnnSuperResImpl>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn_superres::DnnSuperResImpl> ret = cv::dnn_superres::DnnSuperResImpl::create();
			Ok(new cv::Ptr<cv::dnn_superres::DnnSuperResImpl>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_DnnSuperResImpl(Result<cv::dnn_superres::DnnSuperResImpl*>* ocvrs_return) {
		try {
			cv::dnn_superres::DnnSuperResImpl* ret = new cv::dnn_superres::DnnSuperResImpl();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_DnnSuperResImpl_const_StringR_int(const char* algo, int scale, Result<cv::dnn_superres::DnnSuperResImpl*>* ocvrs_return) {
		try {
			cv::dnn_superres::DnnSuperResImpl* ret = new cv::dnn_superres::DnnSuperResImpl(std::string(algo), scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_readModel_const_StringR(cv::dnn_superres::DnnSuperResImpl* instance, const char* path, ResultVoid* ocvrs_return) {
		try {
			instance->readModel(std::string(path));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_readModel_const_StringR_const_StringR(cv::dnn_superres::DnnSuperResImpl* instance, const char* weights, const char* definition, ResultVoid* ocvrs_return) {
		try {
			instance->readModel(std::string(weights), std::string(definition));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_setModel_const_StringR_int(cv::dnn_superres::DnnSuperResImpl* instance, const char* algo, int scale, ResultVoid* ocvrs_return) {
		try {
			instance->setModel(std::string(algo), scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_setPreferableBackend_int(cv::dnn_superres::DnnSuperResImpl* instance, int backendId, ResultVoid* ocvrs_return) {
		try {
			instance->setPreferableBackend(backendId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_setPreferableTarget_int(cv::dnn_superres::DnnSuperResImpl* instance, int targetId, ResultVoid* ocvrs_return) {
		try {
			instance->setPreferableTarget(targetId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_upsample_const__InputArrayR_const__OutputArrayR(cv::dnn_superres::DnnSuperResImpl* instance, const cv::_InputArray* img, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			instance->upsample(*img, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_upsampleMultioutput_const__InputArrayR_vectorLMatGR_const_vectorLintGR_const_vectorLStringGR(cv::dnn_superres::DnnSuperResImpl* instance, const cv::_InputArray* img, std::vector<cv::Mat>* imgs_new, const std::vector<int>* scale_factors, const std::vector<cv::String>* node_names, ResultVoid* ocvrs_return) {
		try {
			instance->upsampleMultioutput(*img, *imgs_new, *scale_factors, *node_names);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_getScale(cv::dnn_superres::DnnSuperResImpl* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_getAlgorithm(cv::dnn_superres::DnnSuperResImpl* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getAlgorithm();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_superres_DnnSuperResImpl_delete(cv::dnn_superres::DnnSuperResImpl* instance) {
			delete instance;
	}
	
}
