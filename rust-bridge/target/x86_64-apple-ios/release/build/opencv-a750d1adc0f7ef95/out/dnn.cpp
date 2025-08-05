#include "dnn.hpp"
#include "dnn_types.hpp"

extern "C" {
	void cv_dnn_NMSBoxesBatched_const_vectorLRect2dGR_const_vectorLfloatGR_const_vectorLintGR_const_float_const_float_vectorLintGR(const std::vector<cv::Rect2d>* bboxes, const std::vector<float>* scores, const std::vector<int>* class_ids, const float score_threshold, const float nms_threshold, std::vector<int>* indices, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxesBatched(*bboxes, *scores, *class_ids, score_threshold, nms_threshold, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxesBatched_const_vectorLRect2dGR_const_vectorLfloatGR_const_vectorLintGR_const_float_const_float_vectorLintGR_const_float_const_int(const std::vector<cv::Rect2d>* bboxes, const std::vector<float>* scores, const std::vector<int>* class_ids, const float score_threshold, const float nms_threshold, std::vector<int>* indices, const float eta, const int top_k, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxesBatched(*bboxes, *scores, *class_ids, score_threshold, nms_threshold, *indices, eta, top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxesBatched_const_vectorLRectGR_const_vectorLfloatGR_const_vectorLintGR_const_float_const_float_vectorLintGR(const std::vector<cv::Rect>* bboxes, const std::vector<float>* scores, const std::vector<int>* class_ids, const float score_threshold, const float nms_threshold, std::vector<int>* indices, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxesBatched(*bboxes, *scores, *class_ids, score_threshold, nms_threshold, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxesBatched_const_vectorLRectGR_const_vectorLfloatGR_const_vectorLintGR_const_float_const_float_vectorLintGR_const_float_const_int(const std::vector<cv::Rect>* bboxes, const std::vector<float>* scores, const std::vector<int>* class_ids, const float score_threshold, const float nms_threshold, std::vector<int>* indices, const float eta, const int top_k, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxesBatched(*bboxes, *scores, *class_ids, score_threshold, nms_threshold, *indices, eta, top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxes_const_vectorLRect2dGR_const_vectorLfloatGR_const_float_const_float_vectorLintGR(const std::vector<cv::Rect2d>* bboxes, const std::vector<float>* scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxes_const_vectorLRect2dGR_const_vectorLfloatGR_const_float_const_float_vectorLintGR_const_float_const_int(const std::vector<cv::Rect2d>* bboxes, const std::vector<float>* scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, const float eta, const int top_k, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices, eta, top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxes_const_vectorLRectGR_const_vectorLfloatGR_const_float_const_float_vectorLintGR(const std::vector<cv::Rect>* bboxes, const std::vector<float>* scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxes_const_vectorLRectGR_const_vectorLfloatGR_const_float_const_float_vectorLintGR_const_float_const_int(const std::vector<cv::Rect>* bboxes, const std::vector<float>* scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, const float eta, const int top_k, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices, eta, top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxes_const_vectorLRotatedRectGR_const_vectorLfloatGR_const_float_const_float_vectorLintGR(const std::vector<cv::RotatedRect>* bboxes, const std::vector<float>* scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_NMSBoxes_const_vectorLRotatedRectGR_const_vectorLfloatGR_const_float_const_float_vectorLintGR_const_float_const_int(const std::vector<cv::RotatedRect>* bboxes, const std::vector<float>* scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, const float eta, const int top_k, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::NMSBoxes(*bboxes, *scores, score_threshold, nms_threshold, *indices, eta, top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImageWithParams_const__InputArrayR(const cv::_InputArray* image, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImageWithParams(*image);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImageWithParams_const__InputArrayR_const_Image2BlobParamsR(const cv::_InputArray* image, const cv::dnn::Image2BlobParams* param, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImageWithParams(*image, *param);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImageWithParams_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* image, const cv::_OutputArray* blob, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImageWithParams(*image, *blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImageWithParams_const__InputArrayR_const__OutputArrayR_const_Image2BlobParamsR(const cv::_InputArray* image, const cv::_OutputArray* blob, const cv::dnn::Image2BlobParams* param, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImageWithParams(*image, *blob, *param);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImage_const__InputArrayR(const cv::_InputArray* image, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImage(*image);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImage_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* image, const cv::_OutputArray* blob, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImage(*image, *blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImage_const__InputArrayR_const__OutputArrayR_double_const_SizeR_const_ScalarR_bool_bool_int(const cv::_InputArray* image, const cv::_OutputArray* blob, double scalefactor, const cv::Size* size, const cv::Scalar* mean, bool swapRB, bool crop, int ddepth, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImage(*image, *blob, scalefactor, *size, *mean, swapRB, crop, ddepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImage_const__InputArrayR_double_const_SizeR_const_ScalarR_bool_bool_int(const cv::_InputArray* image, double scalefactor, const cv::Size* size, const cv::Scalar* mean, bool swapRB, bool crop, int ddepth, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImage(*image, scalefactor, *size, *mean, swapRB, crop, ddepth);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImagesWithParams_const__InputArrayR(const cv::_InputArray* images, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImagesWithParams(*images);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImagesWithParams_const__InputArrayR_const_Image2BlobParamsR(const cv::_InputArray* images, const cv::dnn::Image2BlobParams* param, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImagesWithParams(*images, *param);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImagesWithParams_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* images, const cv::_OutputArray* blob, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImagesWithParams(*images, *blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImagesWithParams_const__InputArrayR_const__OutputArrayR_const_Image2BlobParamsR(const cv::_InputArray* images, const cv::_OutputArray* blob, const cv::dnn::Image2BlobParams* param, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImagesWithParams(*images, *blob, *param);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImages_const__InputArrayR(const cv::_InputArray* images, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImages(*images);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImages_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* images, const cv::_OutputArray* blob, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImages(*images, *blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImages_const__InputArrayR_const__OutputArrayR_double_Size_const_ScalarR_bool_bool_int(const cv::_InputArray* images, const cv::_OutputArray* blob, double scalefactor, cv::Size* size, const cv::Scalar* mean, bool swapRB, bool crop, int ddepth, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::blobFromImages(*images, *blob, scalefactor, *size, *mean, swapRB, crop, ddepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_blobFromImages_const__InputArrayR_double_Size_const_ScalarR_bool_bool_int(const cv::_InputArray* images, double scalefactor, cv::Size* size, const cv::Scalar* mean, bool swapRB, bool crop, int ddepth, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::blobFromImages(*images, scalefactor, *size, *mean, swapRB, crop, ddepth);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_concat_const_MatShapeR_const_MatShapeR(const cv::dnn::MatShape* a, const cv::dnn::MatShape* b, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::concat(*a, *b);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_enableModelDiagnostics_bool(bool isDiagnosticsMode, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::enableModelDiagnostics(isDiagnosticsMode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_getAvailableBackends(Result<std::vector<std::pair<cv::dnn::Backend, cv::dnn::Target>>*>* ocvrs_return) {
		try {
			std::vector<std::pair<cv::dnn::Backend, cv::dnn::Target>> ret = cv::dnn::getAvailableBackends();
			Ok(new std::vector<std::pair<cv::dnn::Backend, cv::dnn::Target>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_getAvailableTargets_Backend(cv::dnn::Backend be, Result<std::vector<cv::dnn::Target>*>* ocvrs_return) {
		try {
			std::vector<cv::dnn::Target> ret = cv::dnn::getAvailableTargets(be);
			Ok(new std::vector<cv::dnn::Target>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_getInferenceEngineBackendType(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::dnn::getInferenceEngineBackendType();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_getInferenceEngineCPUType(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::dnn::getInferenceEngineCPUType();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_getInferenceEngineVPUType(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::dnn::getInferenceEngineVPUType();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_getPlane_const_MatR_int_int(const cv::Mat* m, int n, int cn, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::getPlane(*m, n, cn);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_imagesFromBlob_const_MatR_const__OutputArrayR(const cv::Mat* blob_, const cv::_OutputArray* images_, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::imagesFromBlob(*blob_, *images_);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromCaffe_const_StringR(const char* prototxt, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromCaffe(std::string(prototxt));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromCaffe_const_StringR_const_StringR(const char* prototxt, const char* caffeModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromCaffe(std::string(prototxt), std::string(caffeModel));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromCaffe_const_charX_size_t(const char* bufferProto, size_t lenProto, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromCaffe(bufferProto, lenProto);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromCaffe_const_charX_size_t_const_charX_size_t(const char* bufferProto, size_t lenProto, const char* bufferModel, size_t lenModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromCaffe(bufferProto, lenProto, bufferModel, lenModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromCaffe_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferProto, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromCaffe(*bufferProto);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromCaffe_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferProto, const std::vector<unsigned char>* bufferModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromCaffe(*bufferProto, *bufferModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromDarknet_const_StringR(const char* cfgFile, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromDarknet(std::string(cfgFile));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromDarknet_const_StringR_const_StringR(const char* cfgFile, const char* darknetModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromDarknet(std::string(cfgFile), std::string(darknetModel));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromDarknet_const_charX_size_t(const char* bufferCfg, size_t lenCfg, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromDarknet(bufferCfg, lenCfg);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromDarknet_const_charX_size_t_const_charX_size_t(const char* bufferCfg, size_t lenCfg, const char* bufferModel, size_t lenModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromDarknet(bufferCfg, lenCfg, bufferModel, lenModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromDarknet_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferCfg, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromDarknet(*bufferCfg);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromDarknet_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferCfg, const std::vector<unsigned char>* bufferModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromDarknet(*bufferCfg, *bufferModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromModelOptimizer_const_StringR(const char* xml, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromModelOptimizer(std::string(xml));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromModelOptimizer_const_StringR_const_StringR(const char* xml, const char* bin, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromModelOptimizer(std::string(xml), std::string(bin));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromModelOptimizer_const_unsigned_charX_size_t_const_unsigned_charX_size_t(const unsigned char* bufferModelConfigPtr, size_t bufferModelConfigSize, const unsigned char* bufferWeightsPtr, size_t bufferWeightsSize, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromModelOptimizer(bufferModelConfigPtr, bufferModelConfigSize, bufferWeightsPtr, bufferWeightsSize);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromModelOptimizer_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferModelConfig, const std::vector<unsigned char>* bufferWeights, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromModelOptimizer(*bufferModelConfig, *bufferWeights);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromONNX_const_StringR(const char* onnxFile, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromONNX(std::string(onnxFile));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromONNX_const_charX_size_t(const char* buffer, size_t sizeBuffer, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromONNX(buffer, sizeBuffer);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromONNX_const_vectorLunsigned_charGR(const std::vector<unsigned char>* buffer, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromONNX(*buffer);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTFLite_const_StringR(const char* model, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTFLite(std::string(model));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTFLite_const_charX_size_t(const char* bufferModel, size_t lenModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTFLite(bufferModel, lenModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTFLite_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTFLite(*bufferModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTensorflow_const_StringR(const char* model, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(std::string(model));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTensorflow_const_StringR_const_StringR(const char* model, const char* config, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(std::string(model), std::string(config));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTensorflow_const_charX_size_t(const char* bufferModel, size_t lenModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(bufferModel, lenModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTensorflow_const_charX_size_t_const_charX_size_t(const char* bufferModel, size_t lenModel, const char* bufferConfig, size_t lenConfig, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(bufferModel, lenModel, bufferConfig, lenConfig);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTensorflow_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(*bufferModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTensorflow_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferModel, const std::vector<unsigned char>* bufferConfig, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(*bufferModel, *bufferConfig);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTorch_const_StringR(const char* model, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTorch(std::string(model));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNetFromTorch_const_StringR_bool_bool(const char* model, bool isBinary, bool evaluate, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNetFromTorch(std::string(model), isBinary, evaluate);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNet_const_StringR(const char* model, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNet(std::string(model));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNet_const_StringR_const_StringR_const_StringR(const char* model, const char* config, const char* framework, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNet(std::string(model), std::string(config), std::string(framework));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNet_const_StringR_const_vectorLunsigned_charGR(const char* framework, const std::vector<unsigned char>* bufferModel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNet(std::string(framework), *bufferModel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readNet_const_StringR_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const char* framework, const std::vector<unsigned char>* bufferModel, const std::vector<unsigned char>* bufferConfig, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::readNet(std::string(framework), *bufferModel, *bufferConfig);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readTensorFromONNX_const_StringR(const char* path, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::readTensorFromONNX(std::string(path));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readTorchBlob_const_StringR(const char* filename, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::readTorchBlob(std::string(filename));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_readTorchBlob_const_StringR_bool(const char* filename, bool isBinary, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::readTorchBlob(std::string(filename), isBinary);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_releaseHDDLPlugin(ResultVoid* ocvrs_return) {
		try {
			cv::dnn::releaseHDDLPlugin();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_resetMyriadDevice(ResultVoid* ocvrs_return) {
		try {
			cv::dnn::resetMyriadDevice();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_setInferenceEngineBackendType_const_StringR(const char* newBackendType, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::dnn::setInferenceEngineBackendType(std::string(newBackendType));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shape_const_MatR(const cv::Mat* mat, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::shape(*mat);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shape_const_MatSizeR(const cv::MatSize* sz, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::shape(*sz);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shape_const_UMatR(const cv::UMat* mat, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::shape(*mat);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shape_const_intX_const_int(const int* dims, const int n, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::shape(dims, n);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shape_int(int a0, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::shape(a0);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shape_int_int_int_int(int a0, int a1, int a2, int a3, Result<cv::dnn::MatShape*>* ocvrs_return) {
		try {
			cv::dnn::MatShape ret = cv::dnn::shape(a0, a1, a2, a3);
			Ok(new cv::dnn::MatShape(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shrinkCaffeModel_const_StringR_const_StringR(const char* src, const char* dst, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::shrinkCaffeModel(std::string(src), std::string(dst));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_shrinkCaffeModel_const_StringR_const_StringR_const_vectorLStringGR(const char* src, const char* dst, const std::vector<cv::String>* layersTypes, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::shrinkCaffeModel(std::string(src), std::string(dst), *layersTypes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_slice_const_MatR_const__RangeR(const cv::Mat* m, const cv::dnn::_Range* r0, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::slice(*m, *r0);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_slice_const_MatR_const__RangeR_const__RangeR(const cv::Mat* m, const cv::dnn::_Range* r0, const cv::dnn::_Range* r1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::slice(*m, *r0, *r1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_slice_const_MatR_const__RangeR_const__RangeR_const__RangeR(const cv::Mat* m, const cv::dnn::_Range* r0, const cv::dnn::_Range* r1, const cv::dnn::_Range* r2, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::slice(*m, *r0, *r1, *r2);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_slice_const_MatR_const__RangeR_const__RangeR_const__RangeR_const__RangeR(const cv::Mat* m, const cv::dnn::_Range* r0, const cv::dnn::_Range* r1, const cv::dnn::_Range* r2, const cv::dnn::_Range* r3, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::dnn::slice(*m, *r0, *r1, *r2, *r3);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_softNMSBoxes_const_vectorLRectGR_const_vectorLfloatGR_vectorLfloatGR_const_float_const_float_vectorLintGR(const std::vector<cv::Rect>* bboxes, const std::vector<float>* scores, std::vector<float>* updated_scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::softNMSBoxes(*bboxes, *scores, *updated_scores, score_threshold, nms_threshold, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_softNMSBoxes_const_vectorLRectGR_const_vectorLfloatGR_vectorLfloatGR_const_float_const_float_vectorLintGR_size_t_const_float_SoftNMSMethod(const std::vector<cv::Rect>* bboxes, const std::vector<float>* scores, std::vector<float>* updated_scores, const float score_threshold, const float nms_threshold, std::vector<int>* indices, size_t top_k, const float sigma, cv::dnn::SoftNMSMethod method, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::softNMSBoxes(*bboxes, *scores, *updated_scores, score_threshold, nms_threshold, *indices, top_k, sigma, method);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_total_const_MatR(const cv::Mat* mat, Result<int>* ocvrs_return) {
		try {
			int ret = cv::dnn::total(*mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_total_const_MatR_int_int(const cv::Mat* mat, int start, int end, Result<int>* ocvrs_return) {
		try {
			int ret = cv::dnn::total(*mat, start, end);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_total_const_MatShapeR(const cv::dnn::MatShape* shape, Result<int>* ocvrs_return) {
		try {
			int ret = cv::dnn::total(*shape);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_total_const_MatShapeR_int_int(const cv::dnn::MatShape* shape, int start, int end, Result<int>* ocvrs_return) {
		try {
			int ret = cv::dnn::total(*shape, start, end);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_writeTextGraph_const_StringR_const_StringR(const char* model, const char* output, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::writeTextGraph(std::string(model), std::string(output));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_AbsLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AbsLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AbsLayer> ret = cv::dnn::AbsLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AbsLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AbsLayer* cv_dnn_AbsLayer_defaultNew_const() {
			cv::dnn::AbsLayer* ret = new cv::dnn::AbsLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AbsLayer_to_ActivationLayer(cv::dnn::AbsLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AbsLayer_to_Algorithm(cv::dnn::AbsLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AbsLayer_to_Layer(cv::dnn::AbsLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AbsLayer_delete(cv::dnn::AbsLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AccumLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AccumLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AccumLayer> ret = cv::dnn::AccumLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AccumLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AccumLayer* cv_dnn_AccumLayer_defaultNew_const() {
			cv::dnn::AccumLayer* ret = new cv::dnn::AccumLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_AccumLayer_to_Algorithm(cv::dnn::AccumLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AccumLayer_to_Layer(cv::dnn::AccumLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AccumLayer_delete(cv::dnn::AccumLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AcosLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AcosLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AcosLayer> ret = cv::dnn::AcosLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AcosLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AcosLayer* cv_dnn_AcosLayer_defaultNew_const() {
			cv::dnn::AcosLayer* ret = new cv::dnn::AcosLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AcosLayer_to_ActivationLayer(cv::dnn::AcosLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AcosLayer_to_Algorithm(cv::dnn::AcosLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AcosLayer_to_Layer(cv::dnn::AcosLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AcosLayer_delete(cv::dnn::AcosLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AcoshLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AcoshLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AcoshLayer> ret = cv::dnn::AcoshLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AcoshLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AcoshLayer* cv_dnn_AcoshLayer_defaultNew_const() {
			cv::dnn::AcoshLayer* ret = new cv::dnn::AcoshLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AcoshLayer_to_ActivationLayer(cv::dnn::AcoshLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AcoshLayer_to_Algorithm(cv::dnn::AcoshLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AcoshLayer_to_Layer(cv::dnn::AcoshLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AcoshLayer_delete(cv::dnn::AcoshLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ActivationLayer_forwardSlice_const_const_floatX_floatX_int_size_t_int_int(const cv::dnn::ActivationLayer* instance, const float* src, float* dst, int len, size_t outPlaneSize, int cn0, int cn1, ResultVoid* ocvrs_return) {
		try {
			instance->forwardSlice(src, dst, len, outPlaneSize, cn0, cn1);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ActivationLayer_forwardSlice_const_const_intX_const_intX_intX_int_size_t_int_int(const cv::dnn::ActivationLayer* instance, const int* src, const int* lut, int* dst, int len, size_t outPlaneSize, int cn0, int cn1, ResultVoid* ocvrs_return) {
		try {
			instance->forwardSlice(src, lut, dst, len, outPlaneSize, cn0, cn1);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ActivationLayer_defaultNew_const() {
			cv::dnn::ActivationLayer* ret = new cv::dnn::ActivationLayer();
			return ret;
	}
	
	cv::dnn::AbsLayer* cv_dnn_ActivationLayer_to_AbsLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AbsLayer*>(instance);
	}
	
	cv::dnn::AcosLayer* cv_dnn_ActivationLayer_to_AcosLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AcosLayer*>(instance);
	}
	
	cv::dnn::AcoshLayer* cv_dnn_ActivationLayer_to_AcoshLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AcoshLayer*>(instance);
	}
	
	cv::dnn::ActivationLayerInt8* cv_dnn_ActivationLayer_to_ActivationLayerInt8(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayerInt8*>(instance);
	}
	
	cv::dnn::AsinLayer* cv_dnn_ActivationLayer_to_AsinLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AsinLayer*>(instance);
	}
	
	cv::dnn::AsinhLayer* cv_dnn_ActivationLayer_to_AsinhLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AsinhLayer*>(instance);
	}
	
	cv::dnn::AtanLayer* cv_dnn_ActivationLayer_to_AtanLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AtanLayer*>(instance);
	}
	
	cv::dnn::AtanhLayer* cv_dnn_ActivationLayer_to_AtanhLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::AtanhLayer*>(instance);
	}
	
	cv::dnn::BNLLLayer* cv_dnn_ActivationLayer_to_BNLLLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::BNLLLayer*>(instance);
	}
	
	cv::dnn::BatchNormLayer* cv_dnn_ActivationLayer_to_BatchNormLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::BatchNormLayer*>(instance);
	}
	
	cv::dnn::BatchNormLayerInt8* cv_dnn_ActivationLayer_to_BatchNormLayerInt8(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::BatchNormLayerInt8*>(instance);
	}
	
	cv::dnn::CeilLayer* cv_dnn_ActivationLayer_to_CeilLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::CeilLayer*>(instance);
	}
	
	cv::dnn::CeluLayer* cv_dnn_ActivationLayer_to_CeluLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::CeluLayer*>(instance);
	}
	
	cv::dnn::ChannelsPReLULayer* cv_dnn_ActivationLayer_to_ChannelsPReLULayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ChannelsPReLULayer*>(instance);
	}
	
	cv::dnn::CosLayer* cv_dnn_ActivationLayer_to_CosLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::CosLayer*>(instance);
	}
	
	cv::dnn::CoshLayer* cv_dnn_ActivationLayer_to_CoshLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::CoshLayer*>(instance);
	}
	
	cv::dnn::ELULayer* cv_dnn_ActivationLayer_to_ELULayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ELULayer*>(instance);
	}
	
	cv::dnn::ErfLayer* cv_dnn_ActivationLayer_to_ErfLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ErfLayer*>(instance);
	}
	
	cv::dnn::ExpLayer* cv_dnn_ActivationLayer_to_ExpLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ExpLayer*>(instance);
	}
	
	cv::dnn::FloorLayer* cv_dnn_ActivationLayer_to_FloorLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::FloorLayer*>(instance);
	}
	
	cv::dnn::GeluApproximationLayer* cv_dnn_ActivationLayer_to_GeluApproximationLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::GeluApproximationLayer*>(instance);
	}
	
	cv::dnn::GeluLayer* cv_dnn_ActivationLayer_to_GeluLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::GeluLayer*>(instance);
	}
	
	cv::dnn::HardSigmoidLayer* cv_dnn_ActivationLayer_to_HardSigmoidLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::HardSigmoidLayer*>(instance);
	}
	
	cv::dnn::HardSwishLayer* cv_dnn_ActivationLayer_to_HardSwishLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::HardSwishLayer*>(instance);
	}
	
	cv::dnn::LogLayer* cv_dnn_ActivationLayer_to_LogLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::LogLayer*>(instance);
	}
	
	cv::dnn::MishLayer* cv_dnn_ActivationLayer_to_MishLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::MishLayer*>(instance);
	}
	
	cv::dnn::NotLayer* cv_dnn_ActivationLayer_to_NotLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::NotLayer*>(instance);
	}
	
	cv::dnn::PowerLayer* cv_dnn_ActivationLayer_to_PowerLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::PowerLayer*>(instance);
	}
	
	cv::dnn::ReLU6Layer* cv_dnn_ActivationLayer_to_ReLU6Layer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ReLU6Layer*>(instance);
	}
	
	cv::dnn::ReLULayer* cv_dnn_ActivationLayer_to_ReLULayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ReLULayer*>(instance);
	}
	
	cv::dnn::ReciprocalLayer* cv_dnn_ActivationLayer_to_ReciprocalLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ReciprocalLayer*>(instance);
	}
	
	cv::dnn::RoundLayer* cv_dnn_ActivationLayer_to_RoundLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::RoundLayer*>(instance);
	}
	
	cv::dnn::SeluLayer* cv_dnn_ActivationLayer_to_SeluLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SeluLayer*>(instance);
	}
	
	cv::dnn::ShrinkLayer* cv_dnn_ActivationLayer_to_ShrinkLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ShrinkLayer*>(instance);
	}
	
	cv::dnn::SigmoidLayer* cv_dnn_ActivationLayer_to_SigmoidLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SigmoidLayer*>(instance);
	}
	
	cv::dnn::SignLayer* cv_dnn_ActivationLayer_to_SignLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SignLayer*>(instance);
	}
	
	cv::dnn::SinLayer* cv_dnn_ActivationLayer_to_SinLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SinLayer*>(instance);
	}
	
	cv::dnn::SinhLayer* cv_dnn_ActivationLayer_to_SinhLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SinhLayer*>(instance);
	}
	
	cv::dnn::SoftplusLayer* cv_dnn_ActivationLayer_to_SoftplusLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SoftplusLayer*>(instance);
	}
	
	cv::dnn::SoftsignLayer* cv_dnn_ActivationLayer_to_SoftsignLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SoftsignLayer*>(instance);
	}
	
	cv::dnn::SqrtLayer* cv_dnn_ActivationLayer_to_SqrtLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SqrtLayer*>(instance);
	}
	
	cv::dnn::SwishLayer* cv_dnn_ActivationLayer_to_SwishLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::SwishLayer*>(instance);
	}
	
	cv::dnn::TanHLayer* cv_dnn_ActivationLayer_to_TanHLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::TanHLayer*>(instance);
	}
	
	cv::dnn::TanLayer* cv_dnn_ActivationLayer_to_TanLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::TanLayer*>(instance);
	}
	
	cv::dnn::ThresholdedReluLayer* cv_dnn_ActivationLayer_to_ThresholdedReluLayer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::ThresholdedReluLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ActivationLayer_to_Algorithm(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ActivationLayer_to_Layer(cv::dnn::ActivationLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ActivationLayer_delete(cv::dnn::ActivationLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ActivationLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ActivationLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ActivationLayerInt8> ret = cv::dnn::ActivationLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::ActivationLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ActivationLayerInt8* cv_dnn_ActivationLayerInt8_defaultNew_const() {
			cv::dnn::ActivationLayerInt8* ret = new cv::dnn::ActivationLayerInt8();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ActivationLayerInt8_to_ActivationLayer(cv::dnn::ActivationLayerInt8* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ActivationLayerInt8_to_Algorithm(cv::dnn::ActivationLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ActivationLayerInt8_to_Layer(cv::dnn::ActivationLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ActivationLayerInt8_delete(cv::dnn::ActivationLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_ArgLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ArgLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ArgLayer> ret = cv::dnn::ArgLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ArgLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ArgLayer* cv_dnn_ArgLayer_defaultNew_const() {
			cv::dnn::ArgLayer* ret = new cv::dnn::ArgLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ArgLayer_to_Algorithm(cv::dnn::ArgLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ArgLayer_to_Layer(cv::dnn::ArgLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ArgLayer_delete(cv::dnn::ArgLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AsinLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AsinLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AsinLayer> ret = cv::dnn::AsinLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AsinLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AsinLayer* cv_dnn_AsinLayer_defaultNew_const() {
			cv::dnn::AsinLayer* ret = new cv::dnn::AsinLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AsinLayer_to_ActivationLayer(cv::dnn::AsinLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AsinLayer_to_Algorithm(cv::dnn::AsinLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AsinLayer_to_Layer(cv::dnn::AsinLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AsinLayer_delete(cv::dnn::AsinLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AsinhLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AsinhLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AsinhLayer> ret = cv::dnn::AsinhLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AsinhLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AsinhLayer* cv_dnn_AsinhLayer_defaultNew_const() {
			cv::dnn::AsinhLayer* ret = new cv::dnn::AsinhLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AsinhLayer_to_ActivationLayer(cv::dnn::AsinhLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AsinhLayer_to_Algorithm(cv::dnn::AsinhLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AsinhLayer_to_Layer(cv::dnn::AsinhLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AsinhLayer_delete(cv::dnn::AsinhLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AtanLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AtanLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AtanLayer> ret = cv::dnn::AtanLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AtanLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AtanLayer* cv_dnn_AtanLayer_defaultNew_const() {
			cv::dnn::AtanLayer* ret = new cv::dnn::AtanLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AtanLayer_to_ActivationLayer(cv::dnn::AtanLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AtanLayer_to_Algorithm(cv::dnn::AtanLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AtanLayer_to_Layer(cv::dnn::AtanLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AtanLayer_delete(cv::dnn::AtanLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AtanhLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AtanhLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AtanhLayer> ret = cv::dnn::AtanhLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AtanhLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AtanhLayer* cv_dnn_AtanhLayer_defaultNew_const() {
			cv::dnn::AtanhLayer* ret = new cv::dnn::AtanhLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_AtanhLayer_to_ActivationLayer(cv::dnn::AtanhLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_AtanhLayer_to_Algorithm(cv::dnn::AtanhLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AtanhLayer_to_Layer(cv::dnn::AtanhLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AtanhLayer_delete(cv::dnn::AtanhLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_AttentionLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::AttentionLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::AttentionLayer> ret = cv::dnn::AttentionLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::AttentionLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::AttentionLayer* cv_dnn_AttentionLayer_defaultNew_const() {
			cv::dnn::AttentionLayer* ret = new cv::dnn::AttentionLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_AttentionLayer_to_Algorithm(cv::dnn::AttentionLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_AttentionLayer_to_Layer(cv::dnn::AttentionLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_AttentionLayer_delete(cv::dnn::AttentionLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_BNLLLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::BNLLLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BNLLLayer> ret = cv::dnn::BNLLLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::BNLLLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::BNLLLayer* cv_dnn_BNLLLayer_defaultNew_const() {
			cv::dnn::BNLLLayer* ret = new cv::dnn::BNLLLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_BNLLLayer_to_ActivationLayer(cv::dnn::BNLLLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_BNLLLayer_to_Algorithm(cv::dnn::BNLLLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_BNLLLayer_to_Layer(cv::dnn::BNLLLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_BNLLLayer_delete(cv::dnn::BNLLLayer* instance) {
			delete instance;
	}
	
	int cv_dnn_BackendNode_propBackendId_const(const cv::dnn::BackendNode* instance) {
			int ret = instance->backendId;
			return ret;
	}
	
	void cv_dnn_BackendNode_propBackendId_const_int(cv::dnn::BackendNode* instance, const int val) {
			instance->backendId = val;
	}
	
	void cv_dnn_BackendNode_delete(cv::dnn::BackendNode* instance) {
			delete instance;
	}
	
	void cv_dnn_BackendWrapper_copyToHost(cv::dnn::BackendWrapper* instance, ResultVoid* ocvrs_return) {
		try {
			instance->copyToHost();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_BackendWrapper_setHostDirty(cv::dnn::BackendWrapper* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setHostDirty();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_dnn_BackendWrapper_propBackendId_const(const cv::dnn::BackendWrapper* instance) {
			int ret = instance->backendId;
			return ret;
	}
	
	void cv_dnn_BackendWrapper_propBackendId_const_int(cv::dnn::BackendWrapper* instance, const int val) {
			instance->backendId = val;
	}
	
	int cv_dnn_BackendWrapper_propTargetId_const(const cv::dnn::BackendWrapper* instance) {
			int ret = instance->targetId;
			return ret;
	}
	
	void cv_dnn_BackendWrapper_propTargetId_const_int(cv::dnn::BackendWrapper* instance, const int val) {
			instance->targetId = val;
	}
	
	void cv_dnn_BackendWrapper_delete(cv::dnn::BackendWrapper* instance) {
			delete instance;
	}
	
	cv::dnn::BaseConvolutionLayer* cv_dnn_BaseConvolutionLayer_defaultNew_const() {
			cv::dnn::BaseConvolutionLayer* ret = new cv::dnn::BaseConvolutionLayer();
			return ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propKernel_const(const cv::dnn::BaseConvolutionLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->kernel;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propKernel_const_Size(cv::dnn::BaseConvolutionLayer* instance, const cv::Size* val) {
			instance->kernel = *val;
	}
	
	void cv_dnn_BaseConvolutionLayer_propStride_const(const cv::dnn::BaseConvolutionLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->stride;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propStride_const_Size(cv::dnn::BaseConvolutionLayer* instance, const cv::Size* val) {
			instance->stride = *val;
	}
	
	void cv_dnn_BaseConvolutionLayer_propPad_const(const cv::dnn::BaseConvolutionLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->pad;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propPad_const_Size(cv::dnn::BaseConvolutionLayer* instance, const cv::Size* val) {
			instance->pad = *val;
	}
	
	void cv_dnn_BaseConvolutionLayer_propDilation_const(const cv::dnn::BaseConvolutionLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->dilation;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propDilation_const_Size(cv::dnn::BaseConvolutionLayer* instance, const cv::Size* val) {
			instance->dilation = *val;
	}
	
	void cv_dnn_BaseConvolutionLayer_propAdjustPad_const(const cv::dnn::BaseConvolutionLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->adjustPad;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propAdjustPad_const_Size(cv::dnn::BaseConvolutionLayer* instance, const cv::Size* val) {
			instance->adjustPad = *val;
	}
	
	std::vector<size_t>* cv_dnn_BaseConvolutionLayer_propAdjust_pads_const(const cv::dnn::BaseConvolutionLayer* instance) {
			std::vector<size_t> ret = instance->adjust_pads;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_BaseConvolutionLayer_propAdjust_pads_const_vectorLsize_tG(cv::dnn::BaseConvolutionLayer* instance, const std::vector<size_t>* val) {
			instance->adjust_pads = *val;
	}
	
	std::vector<size_t>* cv_dnn_BaseConvolutionLayer_propKernel_size_const(const cv::dnn::BaseConvolutionLayer* instance) {
			std::vector<size_t> ret = instance->kernel_size;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_BaseConvolutionLayer_propKernel_size_const_vectorLsize_tG(cv::dnn::BaseConvolutionLayer* instance, const std::vector<size_t>* val) {
			instance->kernel_size = *val;
	}
	
	std::vector<size_t>* cv_dnn_BaseConvolutionLayer_propStrides_const(const cv::dnn::BaseConvolutionLayer* instance) {
			std::vector<size_t> ret = instance->strides;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_BaseConvolutionLayer_propStrides_const_vectorLsize_tG(cv::dnn::BaseConvolutionLayer* instance, const std::vector<size_t>* val) {
			instance->strides = *val;
	}
	
	std::vector<size_t>* cv_dnn_BaseConvolutionLayer_propDilations_const(const cv::dnn::BaseConvolutionLayer* instance) {
			std::vector<size_t> ret = instance->dilations;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_BaseConvolutionLayer_propDilations_const_vectorLsize_tG(cv::dnn::BaseConvolutionLayer* instance, const std::vector<size_t>* val) {
			instance->dilations = *val;
	}
	
	std::vector<size_t>* cv_dnn_BaseConvolutionLayer_propPads_begin_const(const cv::dnn::BaseConvolutionLayer* instance) {
			std::vector<size_t> ret = instance->pads_begin;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_BaseConvolutionLayer_propPads_begin_const_vectorLsize_tG(cv::dnn::BaseConvolutionLayer* instance, const std::vector<size_t>* val) {
			instance->pads_begin = *val;
	}
	
	std::vector<size_t>* cv_dnn_BaseConvolutionLayer_propPads_end_const(const cv::dnn::BaseConvolutionLayer* instance) {
			std::vector<size_t> ret = instance->pads_end;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_BaseConvolutionLayer_propPads_end_const_vectorLsize_tG(cv::dnn::BaseConvolutionLayer* instance, const std::vector<size_t>* val) {
			instance->pads_end = *val;
	}
	
	void* cv_dnn_BaseConvolutionLayer_propPadMode_const(const cv::dnn::BaseConvolutionLayer* instance) {
			cv::String ret = instance->padMode;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_BaseConvolutionLayer_propPadMode_const_String(cv::dnn::BaseConvolutionLayer* instance, const char* val) {
			instance->padMode = std::string(val);
	}
	
	int cv_dnn_BaseConvolutionLayer_propNumOutput_const(const cv::dnn::BaseConvolutionLayer* instance) {
			int ret = instance->numOutput;
			return ret;
	}
	
	void cv_dnn_BaseConvolutionLayer_propNumOutput_const_int(cv::dnn::BaseConvolutionLayer* instance, const int val) {
			instance->numOutput = val;
	}
	
	cv::Algorithm* cv_dnn_BaseConvolutionLayer_to_Algorithm(cv::dnn::BaseConvolutionLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_BaseConvolutionLayer_to_Layer(cv::dnn::BaseConvolutionLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_BaseConvolutionLayer_delete(cv::dnn::BaseConvolutionLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_BatchNormLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::BatchNormLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BatchNormLayer> ret = cv::dnn::BatchNormLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::BatchNormLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::BatchNormLayer* cv_dnn_BatchNormLayer_defaultNew_const() {
			cv::dnn::BatchNormLayer* ret = new cv::dnn::BatchNormLayer();
			return ret;
	}
	
	bool cv_dnn_BatchNormLayer_propHasWeights_const(const cv::dnn::BatchNormLayer* instance) {
			bool ret = instance->hasWeights;
			return ret;
	}
	
	void cv_dnn_BatchNormLayer_propHasWeights_const_bool(cv::dnn::BatchNormLayer* instance, const bool val) {
			instance->hasWeights = val;
	}
	
	bool cv_dnn_BatchNormLayer_propHasBias_const(const cv::dnn::BatchNormLayer* instance) {
			bool ret = instance->hasBias;
			return ret;
	}
	
	void cv_dnn_BatchNormLayer_propHasBias_const_bool(cv::dnn::BatchNormLayer* instance, const bool val) {
			instance->hasBias = val;
	}
	
	float cv_dnn_BatchNormLayer_propEpsilon_const(const cv::dnn::BatchNormLayer* instance) {
			float ret = instance->epsilon;
			return ret;
	}
	
	void cv_dnn_BatchNormLayer_propEpsilon_const_float(cv::dnn::BatchNormLayer* instance, const float val) {
			instance->epsilon = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_BatchNormLayer_to_ActivationLayer(cv::dnn::BatchNormLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_BatchNormLayer_to_Algorithm(cv::dnn::BatchNormLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_BatchNormLayer_to_Layer(cv::dnn::BatchNormLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_BatchNormLayer_delete(cv::dnn::BatchNormLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_BatchNormLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::BatchNormLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BatchNormLayerInt8> ret = cv::dnn::BatchNormLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::BatchNormLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::BatchNormLayerInt8* cv_dnn_BatchNormLayerInt8_defaultNew_const() {
			cv::dnn::BatchNormLayerInt8* ret = new cv::dnn::BatchNormLayerInt8();
			return ret;
	}
	
	float cv_dnn_BatchNormLayerInt8_propInput_sc_const(const cv::dnn::BatchNormLayerInt8* instance) {
			float ret = instance->input_sc;
			return ret;
	}
	
	void cv_dnn_BatchNormLayerInt8_propInput_sc_const_float(cv::dnn::BatchNormLayerInt8* instance, const float val) {
			instance->input_sc = val;
	}
	
	float cv_dnn_BatchNormLayerInt8_propOutput_sc_const(const cv::dnn::BatchNormLayerInt8* instance) {
			float ret = instance->output_sc;
			return ret;
	}
	
	void cv_dnn_BatchNormLayerInt8_propOutput_sc_const_float(cv::dnn::BatchNormLayerInt8* instance, const float val) {
			instance->output_sc = val;
	}
	
	int cv_dnn_BatchNormLayerInt8_propInput_zp_const(const cv::dnn::BatchNormLayerInt8* instance) {
			int ret = instance->input_zp;
			return ret;
	}
	
	void cv_dnn_BatchNormLayerInt8_propInput_zp_const_int(cv::dnn::BatchNormLayerInt8* instance, const int val) {
			instance->input_zp = val;
	}
	
	int cv_dnn_BatchNormLayerInt8_propOutput_zp_const(const cv::dnn::BatchNormLayerInt8* instance) {
			int ret = instance->output_zp;
			return ret;
	}
	
	void cv_dnn_BatchNormLayerInt8_propOutput_zp_const_int(cv::dnn::BatchNormLayerInt8* instance, const int val) {
			instance->output_zp = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_BatchNormLayerInt8_to_ActivationLayer(cv::dnn::BatchNormLayerInt8* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_BatchNormLayerInt8_to_Algorithm(cv::dnn::BatchNormLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::BatchNormLayer* cv_dnn_BatchNormLayerInt8_to_BatchNormLayer(cv::dnn::BatchNormLayerInt8* instance) {
			return dynamic_cast<cv::dnn::BatchNormLayer*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_BatchNormLayerInt8_to_Layer(cv::dnn::BatchNormLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_BatchNormLayerInt8_delete(cv::dnn::BatchNormLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_BlankLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::BlankLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::BlankLayer* cv_dnn_BlankLayer_defaultNew_const() {
			cv::dnn::BlankLayer* ret = new cv::dnn::BlankLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_BlankLayer_to_Algorithm(cv::dnn::BlankLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_BlankLayer_to_Layer(cv::dnn::BlankLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_BlankLayer_delete(cv::dnn::BlankLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CeilLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::CeilLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::CeilLayer> ret = cv::dnn::CeilLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::CeilLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CeilLayer* cv_dnn_CeilLayer_defaultNew_const() {
			cv::dnn::CeilLayer* ret = new cv::dnn::CeilLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_CeilLayer_to_ActivationLayer(cv::dnn::CeilLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_CeilLayer_to_Algorithm(cv::dnn::CeilLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CeilLayer_to_Layer(cv::dnn::CeilLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CeilLayer_delete(cv::dnn::CeilLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CeluLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::CeluLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::CeluLayer> ret = cv::dnn::CeluLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::CeluLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CeluLayer* cv_dnn_CeluLayer_defaultNew_const() {
			cv::dnn::CeluLayer* ret = new cv::dnn::CeluLayer();
			return ret;
	}
	
	float cv_dnn_CeluLayer_propAlpha_const(const cv::dnn::CeluLayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_CeluLayer_propAlpha_const_float(cv::dnn::CeluLayer* instance, const float val) {
			instance->alpha = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_CeluLayer_to_ActivationLayer(cv::dnn::CeluLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_CeluLayer_to_Algorithm(cv::dnn::CeluLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CeluLayer_to_Layer(cv::dnn::CeluLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CeluLayer_delete(cv::dnn::CeluLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ChannelsPReLULayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::ChannelsPReLULayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ChannelsPReLULayer* cv_dnn_ChannelsPReLULayer_defaultNew_const() {
			cv::dnn::ChannelsPReLULayer* ret = new cv::dnn::ChannelsPReLULayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ChannelsPReLULayer_to_ActivationLayer(cv::dnn::ChannelsPReLULayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ChannelsPReLULayer_to_Algorithm(cv::dnn::ChannelsPReLULayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ChannelsPReLULayer_to_Layer(cv::dnn::ChannelsPReLULayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ChannelsPReLULayer_delete(cv::dnn::ChannelsPReLULayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ClassificationModel_ClassificationModel(Result<cv::dnn::ClassificationModel*>* ocvrs_return) {
		try {
			cv::dnn::ClassificationModel* ret = new cv::dnn::ClassificationModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_ClassificationModel_const_StringR_const_StringR(const char* model, const char* config, Result<cv::dnn::ClassificationModel*>* ocvrs_return) {
		try {
			cv::dnn::ClassificationModel* ret = new cv::dnn::ClassificationModel(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_ClassificationModel_const_StringR(const char* model, Result<cv::dnn::ClassificationModel*>* ocvrs_return) {
		try {
			cv::dnn::ClassificationModel* ret = new cv::dnn::ClassificationModel(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_ClassificationModel_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::ClassificationModel*>* ocvrs_return) {
		try {
			cv::dnn::ClassificationModel* ret = new cv::dnn::ClassificationModel(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_setEnableSoftmaxPostProcessing_bool(cv::dnn::ClassificationModel* instance, bool enable, Result<cv::dnn::ClassificationModel*>* ocvrs_return) {
		try {
			cv::dnn::ClassificationModel ret = instance->setEnableSoftmaxPostProcessing(enable);
			Ok(new cv::dnn::ClassificationModel(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_getEnableSoftmaxPostProcessing_const(const cv::dnn::ClassificationModel* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getEnableSoftmaxPostProcessing();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_classify_const__InputArrayR(cv::dnn::ClassificationModel* instance, const cv::_InputArray* frame, Result<std::pair<int, float>*>* ocvrs_return) {
		try {
			std::pair<int, float> ret = instance->classify(*frame);
			Ok(new std::pair<int, float>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_ClassificationModel_classify_const__InputArrayR_intR_floatR(cv::dnn::ClassificationModel* instance, const cv::_InputArray* frame, int* classId, float* conf, ResultVoid* ocvrs_return) {
		try {
			instance->classify(*frame, *classId, *conf);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ClassificationModel* cv_dnn_ClassificationModel_implicitClone_const(const cv::dnn::ClassificationModel* instance) {
			return new cv::dnn::ClassificationModel(*instance);
	}
	
	cv::dnn::Model* cv_dnn_ClassificationModel_to_Model(cv::dnn::ClassificationModel* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	void cv_dnn_ClassificationModel_delete(cv::dnn::ClassificationModel* instance) {
			delete instance;
	}
	
	void cv_dnn_CompareLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::CompareLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CompareLayer* cv_dnn_CompareLayer_defaultNew_const() {
			cv::dnn::CompareLayer* ret = new cv::dnn::CompareLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_CompareLayer_to_Algorithm(cv::dnn::CompareLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CompareLayer_to_Layer(cv::dnn::CompareLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CompareLayer_delete(cv::dnn::CompareLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ConcatLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ConcatLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ConcatLayer> ret = cv::dnn::ConcatLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ConcatLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ConcatLayer* cv_dnn_ConcatLayer_defaultNew_const() {
			cv::dnn::ConcatLayer* ret = new cv::dnn::ConcatLayer();
			return ret;
	}
	
	int cv_dnn_ConcatLayer_propAxis_const(const cv::dnn::ConcatLayer* instance) {
			int ret = instance->axis;
			return ret;
	}
	
	void cv_dnn_ConcatLayer_propAxis_const_int(cv::dnn::ConcatLayer* instance, const int val) {
			instance->axis = val;
	}
	
	bool cv_dnn_ConcatLayer_propPadding_const(const cv::dnn::ConcatLayer* instance) {
			bool ret = instance->padding;
			return ret;
	}
	
	void cv_dnn_ConcatLayer_propPadding_const_bool(cv::dnn::ConcatLayer* instance, const bool val) {
			instance->padding = val;
	}
	
	int cv_dnn_ConcatLayer_propPaddingValue_const(const cv::dnn::ConcatLayer* instance) {
			int ret = instance->paddingValue;
			return ret;
	}
	
	void cv_dnn_ConcatLayer_propPaddingValue_const_int(cv::dnn::ConcatLayer* instance, const int val) {
			instance->paddingValue = val;
	}
	
	cv::Algorithm* cv_dnn_ConcatLayer_to_Algorithm(cv::dnn::ConcatLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ConcatLayer_to_Layer(cv::dnn::ConcatLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ConcatLayer_delete(cv::dnn::ConcatLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ConstLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::ConstLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ConstLayer* cv_dnn_ConstLayer_defaultNew_const() {
			cv::dnn::ConstLayer* ret = new cv::dnn::ConstLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ConstLayer_to_Algorithm(cv::dnn::ConstLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ConstLayer_to_Layer(cv::dnn::ConstLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ConstLayer_delete(cv::dnn::ConstLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ConvolutionLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::BaseConvolutionLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BaseConvolutionLayer> ret = cv::dnn::ConvolutionLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::BaseConvolutionLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ConvolutionLayer* cv_dnn_ConvolutionLayer_defaultNew_const() {
			cv::dnn::ConvolutionLayer* ret = new cv::dnn::ConvolutionLayer();
			return ret;
	}
	
	bool cv_dnn_ConvolutionLayer_propFusedActivation_const(const cv::dnn::ConvolutionLayer* instance) {
			bool ret = instance->fusedActivation;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayer_propFusedActivation_const_bool(cv::dnn::ConvolutionLayer* instance, const bool val) {
			instance->fusedActivation = val;
	}
	
	bool cv_dnn_ConvolutionLayer_propFusedAdd_const(const cv::dnn::ConvolutionLayer* instance) {
			bool ret = instance->fusedAdd;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayer_propFusedAdd_const_bool(cv::dnn::ConvolutionLayer* instance, const bool val) {
			instance->fusedAdd = val;
	}
	
	bool cv_dnn_ConvolutionLayer_propUseWinograd_const(const cv::dnn::ConvolutionLayer* instance) {
			bool ret = instance->useWinograd;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayer_propUseWinograd_const_bool(cv::dnn::ConvolutionLayer* instance, const bool val) {
			instance->useWinograd = val;
	}
	
	cv::Algorithm* cv_dnn_ConvolutionLayer_to_Algorithm(cv::dnn::ConvolutionLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::BaseConvolutionLayer* cv_dnn_ConvolutionLayer_to_BaseConvolutionLayer(cv::dnn::ConvolutionLayer* instance) {
			return dynamic_cast<cv::dnn::BaseConvolutionLayer*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ConvolutionLayer_to_Layer(cv::dnn::ConvolutionLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ConvolutionLayer_delete(cv::dnn::ConvolutionLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ConvolutionLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::BaseConvolutionLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BaseConvolutionLayer> ret = cv::dnn::ConvolutionLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::BaseConvolutionLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ConvolutionLayerInt8* cv_dnn_ConvolutionLayerInt8_defaultNew_const() {
			cv::dnn::ConvolutionLayerInt8* ret = new cv::dnn::ConvolutionLayerInt8();
			return ret;
	}
	
	int cv_dnn_ConvolutionLayerInt8_propInput_zp_const(const cv::dnn::ConvolutionLayerInt8* instance) {
			int ret = instance->input_zp;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayerInt8_propInput_zp_const_int(cv::dnn::ConvolutionLayerInt8* instance, const int val) {
			instance->input_zp = val;
	}
	
	int cv_dnn_ConvolutionLayerInt8_propOutput_zp_const(const cv::dnn::ConvolutionLayerInt8* instance) {
			int ret = instance->output_zp;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayerInt8_propOutput_zp_const_int(cv::dnn::ConvolutionLayerInt8* instance, const int val) {
			instance->output_zp = val;
	}
	
	float cv_dnn_ConvolutionLayerInt8_propInput_sc_const(const cv::dnn::ConvolutionLayerInt8* instance) {
			float ret = instance->input_sc;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayerInt8_propInput_sc_const_float(cv::dnn::ConvolutionLayerInt8* instance, const float val) {
			instance->input_sc = val;
	}
	
	float cv_dnn_ConvolutionLayerInt8_propOutput_sc_const(const cv::dnn::ConvolutionLayerInt8* instance) {
			float ret = instance->output_sc;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayerInt8_propOutput_sc_const_float(cv::dnn::ConvolutionLayerInt8* instance, const float val) {
			instance->output_sc = val;
	}
	
	bool cv_dnn_ConvolutionLayerInt8_propPer_channel_const(const cv::dnn::ConvolutionLayerInt8* instance) {
			bool ret = instance->per_channel;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayerInt8_propPer_channel_const_bool(cv::dnn::ConvolutionLayerInt8* instance, const bool val) {
			instance->per_channel = val;
	}
	
	bool cv_dnn_ConvolutionLayerInt8_propUseWinograd_const(const cv::dnn::ConvolutionLayerInt8* instance) {
			bool ret = instance->useWinograd;
			return ret;
	}
	
	void cv_dnn_ConvolutionLayerInt8_propUseWinograd_const_bool(cv::dnn::ConvolutionLayerInt8* instance, const bool val) {
			instance->useWinograd = val;
	}
	
	cv::Algorithm* cv_dnn_ConvolutionLayerInt8_to_Algorithm(cv::dnn::ConvolutionLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::BaseConvolutionLayer* cv_dnn_ConvolutionLayerInt8_to_BaseConvolutionLayer(cv::dnn::ConvolutionLayerInt8* instance) {
			return dynamic_cast<cv::dnn::BaseConvolutionLayer*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ConvolutionLayerInt8_to_Layer(cv::dnn::ConvolutionLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ConvolutionLayerInt8_delete(cv::dnn::ConvolutionLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_CorrelationLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::CorrelationLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::CorrelationLayer> ret = cv::dnn::CorrelationLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::CorrelationLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CorrelationLayer* cv_dnn_CorrelationLayer_defaultNew_const() {
			cv::dnn::CorrelationLayer* ret = new cv::dnn::CorrelationLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_CorrelationLayer_to_Algorithm(cv::dnn::CorrelationLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CorrelationLayer_to_Layer(cv::dnn::CorrelationLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CorrelationLayer_delete(cv::dnn::CorrelationLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CosLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::CosLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::CosLayer> ret = cv::dnn::CosLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::CosLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CosLayer* cv_dnn_CosLayer_defaultNew_const() {
			cv::dnn::CosLayer* ret = new cv::dnn::CosLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_CosLayer_to_ActivationLayer(cv::dnn::CosLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_CosLayer_to_Algorithm(cv::dnn::CosLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CosLayer_to_Layer(cv::dnn::CosLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CosLayer_delete(cv::dnn::CosLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CoshLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::CoshLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::CoshLayer> ret = cv::dnn::CoshLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::CoshLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CoshLayer* cv_dnn_CoshLayer_defaultNew_const() {
			cv::dnn::CoshLayer* ret = new cv::dnn::CoshLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_CoshLayer_to_ActivationLayer(cv::dnn::CoshLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_CoshLayer_to_Algorithm(cv::dnn::CoshLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CoshLayer_to_Layer(cv::dnn::CoshLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CoshLayer_delete(cv::dnn::CoshLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CropAndResizeLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::CropAndResizeLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CropAndResizeLayer* cv_dnn_CropAndResizeLayer_defaultNew_const() {
			cv::dnn::CropAndResizeLayer* ret = new cv::dnn::CropAndResizeLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_CropAndResizeLayer_to_Algorithm(cv::dnn::CropAndResizeLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CropAndResizeLayer_to_Layer(cv::dnn::CropAndResizeLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CropAndResizeLayer_delete(cv::dnn::CropAndResizeLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CropLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::CropLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CropLayer* cv_dnn_CropLayer_defaultNew_const() {
			cv::dnn::CropLayer* ret = new cv::dnn::CropLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_CropLayer_to_Algorithm(cv::dnn::CropLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CropLayer_to_Layer(cv::dnn::CropLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CropLayer_delete(cv::dnn::CropLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_CumSumLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::CumSumLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::CumSumLayer> ret = cv::dnn::CumSumLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::CumSumLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::CumSumLayer* cv_dnn_CumSumLayer_defaultNew_const() {
			cv::dnn::CumSumLayer* ret = new cv::dnn::CumSumLayer();
			return ret;
	}
	
	int cv_dnn_CumSumLayer_propExclusive_const(const cv::dnn::CumSumLayer* instance) {
			int ret = instance->exclusive;
			return ret;
	}
	
	void cv_dnn_CumSumLayer_propExclusive_const_int(cv::dnn::CumSumLayer* instance, const int val) {
			instance->exclusive = val;
	}
	
	int cv_dnn_CumSumLayer_propReverse_const(const cv::dnn::CumSumLayer* instance) {
			int ret = instance->reverse;
			return ret;
	}
	
	void cv_dnn_CumSumLayer_propReverse_const_int(cv::dnn::CumSumLayer* instance, const int val) {
			instance->reverse = val;
	}
	
	cv::Algorithm* cv_dnn_CumSumLayer_to_Algorithm(cv::dnn::CumSumLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_CumSumLayer_to_Layer(cv::dnn::CumSumLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_CumSumLayer_delete(cv::dnn::CumSumLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_DataAugmentationLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::DataAugmentationLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::DataAugmentationLayer> ret = cv::dnn::DataAugmentationLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::DataAugmentationLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::DataAugmentationLayer* cv_dnn_DataAugmentationLayer_defaultNew_const() {
			cv::dnn::DataAugmentationLayer* ret = new cv::dnn::DataAugmentationLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_DataAugmentationLayer_to_Algorithm(cv::dnn::DataAugmentationLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_DataAugmentationLayer_to_Layer(cv::dnn::DataAugmentationLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_DataAugmentationLayer_delete(cv::dnn::DataAugmentationLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_DeconvolutionLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::BaseConvolutionLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BaseConvolutionLayer> ret = cv::dnn::DeconvolutionLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::BaseConvolutionLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::DeconvolutionLayer* cv_dnn_DeconvolutionLayer_defaultNew_const() {
			cv::dnn::DeconvolutionLayer* ret = new cv::dnn::DeconvolutionLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_DeconvolutionLayer_to_Algorithm(cv::dnn::DeconvolutionLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::BaseConvolutionLayer* cv_dnn_DeconvolutionLayer_to_BaseConvolutionLayer(cv::dnn::DeconvolutionLayer* instance) {
			return dynamic_cast<cv::dnn::BaseConvolutionLayer*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_DeconvolutionLayer_to_Layer(cv::dnn::DeconvolutionLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_DeconvolutionLayer_delete(cv::dnn::DeconvolutionLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_DepthToSpaceLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::DepthToSpaceLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::DepthToSpaceLayer> ret = cv::dnn::DepthToSpaceLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::DepthToSpaceLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::DepthToSpaceLayer* cv_dnn_DepthToSpaceLayer_defaultNew_const() {
			cv::dnn::DepthToSpaceLayer* ret = new cv::dnn::DepthToSpaceLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_DepthToSpaceLayer_to_Algorithm(cv::dnn::DepthToSpaceLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_DepthToSpaceLayer_to_Layer(cv::dnn::DepthToSpaceLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_DepthToSpaceLayer_delete(cv::dnn::DepthToSpaceLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_DequantizeLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::DequantizeLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::DequantizeLayer> ret = cv::dnn::DequantizeLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::DequantizeLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::DequantizeLayer* cv_dnn_DequantizeLayer_defaultNew_const() {
			cv::dnn::DequantizeLayer* ret = new cv::dnn::DequantizeLayer();
			return ret;
	}
	
	std::vector<float>* cv_dnn_DequantizeLayer_propScales_const(const cv::dnn::DequantizeLayer* instance) {
			std::vector<float> ret = instance->scales;
			return new std::vector<float>(ret);
	}
	
	void cv_dnn_DequantizeLayer_propScales_const_vectorLfloatG(cv::dnn::DequantizeLayer* instance, const std::vector<float>* val) {
			instance->scales = *val;
	}
	
	std::vector<int>* cv_dnn_DequantizeLayer_propZeropoints_const(const cv::dnn::DequantizeLayer* instance) {
			std::vector<int> ret = instance->zeropoints;
			return new std::vector<int>(ret);
	}
	
	void cv_dnn_DequantizeLayer_propZeropoints_const_vectorLintG(cv::dnn::DequantizeLayer* instance, const std::vector<int>* val) {
			instance->zeropoints = *val;
	}
	
	cv::Algorithm* cv_dnn_DequantizeLayer_to_Algorithm(cv::dnn::DequantizeLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_DequantizeLayer_to_Layer(cv::dnn::DequantizeLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_DequantizeLayer_delete(cv::dnn::DequantizeLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_DetectionModel_DetectionModel_const_StringR_const_StringR(const char* model, const char* config, Result<cv::dnn::DetectionModel*>* ocvrs_return) {
		try {
			cv::dnn::DetectionModel* ret = new cv::dnn::DetectionModel(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_DetectionModel_const_StringR(const char* model, Result<cv::dnn::DetectionModel*>* ocvrs_return) {
		try {
			cv::dnn::DetectionModel* ret = new cv::dnn::DetectionModel(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_DetectionModel_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::DetectionModel*>* ocvrs_return) {
		try {
			cv::dnn::DetectionModel* ret = new cv::dnn::DetectionModel(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_DetectionModel(Result<cv::dnn::DetectionModel*>* ocvrs_return) {
		try {
			cv::dnn::DetectionModel* ret = new cv::dnn::DetectionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_setNmsAcrossClasses_bool(cv::dnn::DetectionModel* instance, bool value, Result<cv::dnn::DetectionModel*>* ocvrs_return) {
		try {
			cv::dnn::DetectionModel ret = instance->setNmsAcrossClasses(value);
			Ok(new cv::dnn::DetectionModel(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_getNmsAcrossClasses(cv::dnn::DetectionModel* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getNmsAcrossClasses();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_detect_const__InputArrayR_vectorLintGR_vectorLfloatGR_vectorLRectGR_float_float(cv::dnn::DetectionModel* instance, const cv::_InputArray* frame, std::vector<int>* classIds, std::vector<float>* confidences, std::vector<cv::Rect>* boxes, float confThreshold, float nmsThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*frame, *classIds, *confidences, *boxes, confThreshold, nmsThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DetectionModel_detect_const__InputArrayR_vectorLintGR_vectorLfloatGR_vectorLRectGR(cv::dnn::DetectionModel* instance, const cv::_InputArray* frame, std::vector<int>* classIds, std::vector<float>* confidences, std::vector<cv::Rect>* boxes, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*frame, *classIds, *confidences, *boxes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::DetectionModel* cv_dnn_DetectionModel_implicitClone_const(const cv::dnn::DetectionModel* instance) {
			return new cv::dnn::DetectionModel(*instance);
	}
	
	cv::dnn::Model* cv_dnn_DetectionModel_to_Model(cv::dnn::DetectionModel* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	void cv_dnn_DetectionModel_delete(cv::dnn::DetectionModel* instance) {
			delete instance;
	}
	
	void cv_dnn_DetectionOutputLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::DetectionOutputLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::DetectionOutputLayer> ret = cv::dnn::DetectionOutputLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::DetectionOutputLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::DetectionOutputLayer* cv_dnn_DetectionOutputLayer_defaultNew_const() {
			cv::dnn::DetectionOutputLayer* ret = new cv::dnn::DetectionOutputLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_DetectionOutputLayer_to_Algorithm(cv::dnn::DetectionOutputLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_DetectionOutputLayer_to_Layer(cv::dnn::DetectionOutputLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_DetectionOutputLayer_delete(cv::dnn::DetectionOutputLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_Dict_has_const_const_StringR(const cv::dnn::Dict* instance, const char* key, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->has(std::string(key));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_ptr_const_StringR(cv::dnn::Dict* instance, const char* key, Result<cv::dnn::DictValue**>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = instance->ptr(std::string(key));
			Ok(new cv::dnn::DictValue*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_ptr_const_const_StringR(const cv::dnn::Dict* instance, const char* key, Result<const cv::dnn::DictValue**>* ocvrs_return) {
		try {
			const cv::dnn::DictValue* ret = instance->ptr(std::string(key));
			Ok(new const cv::dnn::DictValue*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_get_const_const_StringR(const cv::dnn::Dict* instance, const char* key, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			const cv::dnn::DictValue ret = instance->get(std::string(key));
			Ok(new const cv::dnn::DictValue(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_set_const_cv_String_const_StringR_const_StringR(cv::dnn::Dict* instance, const char* key, const char* value, Result<void*>* ocvrs_return) {
		try {
			const cv::String ret = instance->set<cv::String>(std::string(key), cv::String(value));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_set_const_cv_dnn_DictValue_const_StringR_const_DictValueR(cv::dnn::Dict* instance, const char* key, const cv::dnn::DictValue* value, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			const cv::dnn::DictValue ret = instance->set<cv::dnn::DictValue>(std::string(key), *value);
			Ok(new const cv::dnn::DictValue(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_set_const_double_const_StringR_const_doubleR(cv::dnn::Dict* instance, const char* key, const double* value, Result<double>* ocvrs_return) {
		try {
			const double ret = instance->set<double>(std::string(key), *value);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_set_const_int64_t_const_StringR_const_int64_tR(cv::dnn::Dict* instance, const char* key, const int64_t* value, Result<int64_t>* ocvrs_return) {
		try {
			const int64_t ret = instance->set<int64_t>(std::string(key), *value);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Dict_erase_const_StringR(cv::dnn::Dict* instance, const char* key, ResultVoid* ocvrs_return) {
		try {
			instance->erase(std::string(key));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::Dict* cv_dnn_Dict_defaultNew_const() {
			cv::dnn::Dict* ret = new cv::dnn::Dict();
			return ret;
	}
	
	void cv_dnn_Dict_delete(cv::dnn::Dict* instance) {
			delete instance;
	}
	
	void cv_dnn_DictValue_DictValue_const_DictValueR(const cv::dnn::DictValue* r, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(*r);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue_bool(bool i, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue_int64_t(int64_t i, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue(Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue_int(int i, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue_unsigned_int(unsigned int p, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(p);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue_double(double p, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(p);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_DictValue_const_charX(const char* s, Result<cv::dnn::DictValue*>* ocvrs_return) {
		try {
			cv::dnn::DictValue* ret = new cv::dnn::DictValue(s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_cv_String_const_int(const cv::dnn::DictValue* instance, int idx, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->get<cv::String>(idx);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_cv_String_const(const cv::dnn::DictValue* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->get<cv::String>();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_double_const_int(const cv::dnn::DictValue* instance, int idx, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get<double>(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_double_const(const cv::dnn::DictValue* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get<double>();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_int_const_int(const cv::dnn::DictValue* instance, int idx, Result<int>* ocvrs_return) {
		try {
			int ret = instance->get<int>(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_int_const(const cv::dnn::DictValue* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->get<int>();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_int64_t_const_int(const cv::dnn::DictValue* instance, int idx, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->get<int64_t>(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_get_int64_t_const(const cv::dnn::DictValue* instance, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->get<int64_t>();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_size_const(const cv::dnn::DictValue* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_isInt_const(const cv::dnn::DictValue* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isInt();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_isString_const(const cv::dnn::DictValue* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isString();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_isReal_const(const cv::dnn::DictValue* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isReal();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_getIntValue_const_int(const cv::dnn::DictValue* instance, int idx, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIntValue(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_getIntValue_const(const cv::dnn::DictValue* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIntValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_getRealValue_const_int(const cv::dnn::DictValue* instance, int idx, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getRealValue(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_getRealValue_const(const cv::dnn::DictValue* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getRealValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_getStringValue_const_int(const cv::dnn::DictValue* instance, int idx, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getStringValue(idx);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_getStringValue_const(const cv::dnn::DictValue* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getStringValue();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_operatorST_const_DictValueR(cv::dnn::DictValue* instance, const cv::dnn::DictValue* r, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*r);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_DictValue_delete(cv::dnn::DictValue* instance) {
			delete instance;
	}
	
	void cv_dnn_ELULayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ELULayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ELULayer> ret = cv::dnn::ELULayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ELULayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ELULayer* cv_dnn_ELULayer_defaultNew_const() {
			cv::dnn::ELULayer* ret = new cv::dnn::ELULayer();
			return ret;
	}
	
	float cv_dnn_ELULayer_propAlpha_const(const cv::dnn::ELULayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_ELULayer_propAlpha_const_float(cv::dnn::ELULayer* instance, const float val) {
			instance->alpha = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ELULayer_to_ActivationLayer(cv::dnn::ELULayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ELULayer_to_Algorithm(cv::dnn::ELULayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ELULayer_to_Layer(cv::dnn::ELULayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ELULayer_delete(cv::dnn::ELULayer* instance) {
			delete instance;
	}
	
	void cv_dnn_EinsumLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::EinsumLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::EinsumLayer> ret = cv::dnn::EinsumLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::EinsumLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::EinsumLayer* cv_dnn_EinsumLayer_defaultNew_const() {
			cv::dnn::EinsumLayer* ret = new cv::dnn::EinsumLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_EinsumLayer_to_Algorithm(cv::dnn::EinsumLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_EinsumLayer_to_Layer(cv::dnn::EinsumLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_EinsumLayer_delete(cv::dnn::EinsumLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_EltwiseLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::EltwiseLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::EltwiseLayer> ret = cv::dnn::EltwiseLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::EltwiseLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::EltwiseLayer* cv_dnn_EltwiseLayer_defaultNew_const() {
			cv::dnn::EltwiseLayer* ret = new cv::dnn::EltwiseLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_EltwiseLayer_to_Algorithm(cv::dnn::EltwiseLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_EltwiseLayer_to_Layer(cv::dnn::EltwiseLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_EltwiseLayer_delete(cv::dnn::EltwiseLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_EltwiseLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::EltwiseLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::EltwiseLayerInt8> ret = cv::dnn::EltwiseLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::EltwiseLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::EltwiseLayerInt8* cv_dnn_EltwiseLayerInt8_defaultNew_const() {
			cv::dnn::EltwiseLayerInt8* ret = new cv::dnn::EltwiseLayerInt8();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_EltwiseLayerInt8_to_Algorithm(cv::dnn::EltwiseLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_EltwiseLayerInt8_to_Layer(cv::dnn::EltwiseLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_EltwiseLayerInt8_delete(cv::dnn::EltwiseLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_ErfLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ErfLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ErfLayer> ret = cv::dnn::ErfLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ErfLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ErfLayer* cv_dnn_ErfLayer_defaultNew_const() {
			cv::dnn::ErfLayer* ret = new cv::dnn::ErfLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ErfLayer_to_ActivationLayer(cv::dnn::ErfLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ErfLayer_to_Algorithm(cv::dnn::ErfLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ErfLayer_to_Layer(cv::dnn::ErfLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ErfLayer_delete(cv::dnn::ErfLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ExpLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ExpLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ExpLayer> ret = cv::dnn::ExpLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ExpLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ExpLayer* cv_dnn_ExpLayer_defaultNew_const() {
			cv::dnn::ExpLayer* ret = new cv::dnn::ExpLayer();
			return ret;
	}
	
	float cv_dnn_ExpLayer_propBase_const(const cv::dnn::ExpLayer* instance) {
			float ret = instance->base;
			return ret;
	}
	
	void cv_dnn_ExpLayer_propBase_const_float(cv::dnn::ExpLayer* instance, const float val) {
			instance->base = val;
	}
	
	float cv_dnn_ExpLayer_propScale_const(const cv::dnn::ExpLayer* instance) {
			float ret = instance->scale;
			return ret;
	}
	
	void cv_dnn_ExpLayer_propScale_const_float(cv::dnn::ExpLayer* instance, const float val) {
			instance->scale = val;
	}
	
	float cv_dnn_ExpLayer_propShift_const(const cv::dnn::ExpLayer* instance) {
			float ret = instance->shift;
			return ret;
	}
	
	void cv_dnn_ExpLayer_propShift_const_float(cv::dnn::ExpLayer* instance, const float val) {
			instance->shift = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ExpLayer_to_ActivationLayer(cv::dnn::ExpLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ExpLayer_to_Algorithm(cv::dnn::ExpLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ExpLayer_to_Layer(cv::dnn::ExpLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ExpLayer_delete(cv::dnn::ExpLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ExpandLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ExpandLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ExpandLayer> ret = cv::dnn::ExpandLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ExpandLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ExpandLayer* cv_dnn_ExpandLayer_defaultNew_const() {
			cv::dnn::ExpandLayer* ret = new cv::dnn::ExpandLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ExpandLayer_to_Algorithm(cv::dnn::ExpandLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ExpandLayer_to_Layer(cv::dnn::ExpandLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ExpandLayer_delete(cv::dnn::ExpandLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_FlattenLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::FlattenLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::FlattenLayer> ret = cv::dnn::FlattenLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::FlattenLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::FlattenLayer* cv_dnn_FlattenLayer_defaultNew_const() {
			cv::dnn::FlattenLayer* ret = new cv::dnn::FlattenLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_FlattenLayer_to_Algorithm(cv::dnn::FlattenLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_FlattenLayer_to_Layer(cv::dnn::FlattenLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_FlattenLayer_delete(cv::dnn::FlattenLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_FloorLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::FloorLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::FloorLayer> ret = cv::dnn::FloorLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::FloorLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::FloorLayer* cv_dnn_FloorLayer_defaultNew_const() {
			cv::dnn::FloorLayer* ret = new cv::dnn::FloorLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_FloorLayer_to_ActivationLayer(cv::dnn::FloorLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_FloorLayer_to_Algorithm(cv::dnn::FloorLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_FloorLayer_to_Layer(cv::dnn::FloorLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_FloorLayer_delete(cv::dnn::FloorLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_FlowWarpLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::FlowWarpLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::FlowWarpLayer> ret = cv::dnn::FlowWarpLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::FlowWarpLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::FlowWarpLayer* cv_dnn_FlowWarpLayer_defaultNew_const() {
			cv::dnn::FlowWarpLayer* ret = new cv::dnn::FlowWarpLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_FlowWarpLayer_to_Algorithm(cv::dnn::FlowWarpLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_FlowWarpLayer_to_Layer(cv::dnn::FlowWarpLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_FlowWarpLayer_delete(cv::dnn::FlowWarpLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GRULayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GRULayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GRULayer> ret = cv::dnn::GRULayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GRULayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GRULayer* cv_dnn_GRULayer_defaultNew_const() {
			cv::dnn::GRULayer* ret = new cv::dnn::GRULayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_GRULayer_to_Algorithm(cv::dnn::GRULayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GRULayer_to_Layer(cv::dnn::GRULayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GRULayer_delete(cv::dnn::GRULayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GatherElementsLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GatherElementsLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GatherElementsLayer> ret = cv::dnn::GatherElementsLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GatherElementsLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GatherElementsLayer* cv_dnn_GatherElementsLayer_defaultNew_const() {
			cv::dnn::GatherElementsLayer* ret = new cv::dnn::GatherElementsLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_GatherElementsLayer_to_Algorithm(cv::dnn::GatherElementsLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GatherElementsLayer_to_Layer(cv::dnn::GatherElementsLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GatherElementsLayer_delete(cv::dnn::GatherElementsLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GatherLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GatherLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GatherLayer> ret = cv::dnn::GatherLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GatherLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GatherLayer* cv_dnn_GatherLayer_defaultNew_const() {
			cv::dnn::GatherLayer* ret = new cv::dnn::GatherLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_GatherLayer_to_Algorithm(cv::dnn::GatherLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GatherLayer_to_Layer(cv::dnn::GatherLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GatherLayer_delete(cv::dnn::GatherLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GeluApproximationLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GeluApproximationLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GeluApproximationLayer> ret = cv::dnn::GeluApproximationLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GeluApproximationLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GeluApproximationLayer* cv_dnn_GeluApproximationLayer_defaultNew_const() {
			cv::dnn::GeluApproximationLayer* ret = new cv::dnn::GeluApproximationLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_GeluApproximationLayer_to_ActivationLayer(cv::dnn::GeluApproximationLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_GeluApproximationLayer_to_Algorithm(cv::dnn::GeluApproximationLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GeluApproximationLayer_to_Layer(cv::dnn::GeluApproximationLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GeluApproximationLayer_delete(cv::dnn::GeluApproximationLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GeluLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GeluLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GeluLayer> ret = cv::dnn::GeluLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GeluLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GeluLayer* cv_dnn_GeluLayer_defaultNew_const() {
			cv::dnn::GeluLayer* ret = new cv::dnn::GeluLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_GeluLayer_to_ActivationLayer(cv::dnn::GeluLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_GeluLayer_to_Algorithm(cv::dnn::GeluLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GeluLayer_to_Layer(cv::dnn::GeluLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GeluLayer_delete(cv::dnn::GeluLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GemmLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GemmLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GemmLayer> ret = cv::dnn::GemmLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GemmLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GemmLayer* cv_dnn_GemmLayer_defaultNew_const() {
			cv::dnn::GemmLayer* ret = new cv::dnn::GemmLayer();
			return ret;
	}
	
	bool cv_dnn_GemmLayer_propTrans_a_const(const cv::dnn::GemmLayer* instance) {
			bool ret = instance->trans_a;
			return ret;
	}
	
	void cv_dnn_GemmLayer_propTrans_a_const_bool(cv::dnn::GemmLayer* instance, const bool val) {
			instance->trans_a = val;
	}
	
	bool cv_dnn_GemmLayer_propTrans_b_const(const cv::dnn::GemmLayer* instance) {
			bool ret = instance->trans_b;
			return ret;
	}
	
	void cv_dnn_GemmLayer_propTrans_b_const_bool(cv::dnn::GemmLayer* instance, const bool val) {
			instance->trans_b = val;
	}
	
	float cv_dnn_GemmLayer_propAlpha_const(const cv::dnn::GemmLayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_GemmLayer_propAlpha_const_float(cv::dnn::GemmLayer* instance, const float val) {
			instance->alpha = val;
	}
	
	float cv_dnn_GemmLayer_propBeta_const(const cv::dnn::GemmLayer* instance) {
			float ret = instance->beta;
			return ret;
	}
	
	void cv_dnn_GemmLayer_propBeta_const_float(cv::dnn::GemmLayer* instance, const float val) {
			instance->beta = val;
	}
	
	cv::Algorithm* cv_dnn_GemmLayer_to_Algorithm(cv::dnn::GemmLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GemmLayer_to_Layer(cv::dnn::GemmLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GemmLayer_delete(cv::dnn::GemmLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_GroupNormLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::GroupNormLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::GroupNormLayer> ret = cv::dnn::GroupNormLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::GroupNormLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::GroupNormLayer* cv_dnn_GroupNormLayer_defaultNew_const() {
			cv::dnn::GroupNormLayer* ret = new cv::dnn::GroupNormLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_GroupNormLayer_to_Algorithm(cv::dnn::GroupNormLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_GroupNormLayer_to_Layer(cv::dnn::GroupNormLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_GroupNormLayer_delete(cv::dnn::GroupNormLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_HardSigmoidLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::HardSigmoidLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::HardSigmoidLayer> ret = cv::dnn::HardSigmoidLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::HardSigmoidLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::HardSigmoidLayer* cv_dnn_HardSigmoidLayer_defaultNew_const() {
			cv::dnn::HardSigmoidLayer* ret = new cv::dnn::HardSigmoidLayer();
			return ret;
	}
	
	float cv_dnn_HardSigmoidLayer_propAlpha_const(const cv::dnn::HardSigmoidLayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_HardSigmoidLayer_propAlpha_const_float(cv::dnn::HardSigmoidLayer* instance, const float val) {
			instance->alpha = val;
	}
	
	float cv_dnn_HardSigmoidLayer_propBeta_const(const cv::dnn::HardSigmoidLayer* instance) {
			float ret = instance->beta;
			return ret;
	}
	
	void cv_dnn_HardSigmoidLayer_propBeta_const_float(cv::dnn::HardSigmoidLayer* instance, const float val) {
			instance->beta = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_HardSigmoidLayer_to_ActivationLayer(cv::dnn::HardSigmoidLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_HardSigmoidLayer_to_Algorithm(cv::dnn::HardSigmoidLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_HardSigmoidLayer_to_Layer(cv::dnn::HardSigmoidLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_HardSigmoidLayer_delete(cv::dnn::HardSigmoidLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_HardSwishLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::HardSwishLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::HardSwishLayer> ret = cv::dnn::HardSwishLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::HardSwishLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::HardSwishLayer* cv_dnn_HardSwishLayer_defaultNew_const() {
			cv::dnn::HardSwishLayer* ret = new cv::dnn::HardSwishLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_HardSwishLayer_to_ActivationLayer(cv::dnn::HardSwishLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_HardSwishLayer_to_Algorithm(cv::dnn::HardSwishLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_HardSwishLayer_to_Layer(cv::dnn::HardSwishLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_HardSwishLayer_delete(cv::dnn::HardSwishLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_Image2BlobParams_Image2BlobParams(Result<cv::dnn::Image2BlobParams>* ocvrs_return) {
		try {
			cv::dnn::Image2BlobParams ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Image2BlobParams_Image2BlobParams_const_ScalarR_const_SizeR_const_ScalarR_bool_int_DataLayout_ImagePaddingMode_Scalar(const cv::Scalar* scalefactor, const cv::Size* size, const cv::Scalar* mean, bool swapRB, int ddepth, cv::dnn::DataLayout datalayout, cv::dnn::ImagePaddingMode mode, cv::Scalar* borderValue, Result<cv::dnn::Image2BlobParams>* ocvrs_return) {
		try {
			cv::dnn::Image2BlobParams ret(*scalefactor, *size, *mean, swapRB, ddepth, datalayout, mode, *borderValue);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Image2BlobParams_Image2BlobParams_const_ScalarR(const cv::Scalar* scalefactor, Result<cv::dnn::Image2BlobParams>* ocvrs_return) {
		try {
			cv::dnn::Image2BlobParams ret(*scalefactor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Image2BlobParams_blobRectToImageRect_const_RectR_const_SizeR(cv::dnn::Image2BlobParams* instance, const cv::Rect* rBlob, const cv::Size* size, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->blobRectToImageRect(*rBlob, *size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Image2BlobParams_blobRectsToImageRects_const_vectorLRectGR_vectorLRectGR_const_SizeR(cv::dnn::Image2BlobParams* instance, const std::vector<cv::Rect>* rBlob, std::vector<cv::Rect>* rImg, const cv::Size* size, ResultVoid* ocvrs_return) {
		try {
			instance->blobRectsToImageRects(*rBlob, *rImg, *size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_InnerProductLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::InnerProductLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::InnerProductLayer> ret = cv::dnn::InnerProductLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::InnerProductLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::InnerProductLayer* cv_dnn_InnerProductLayer_defaultNew_const() {
			cv::dnn::InnerProductLayer* ret = new cv::dnn::InnerProductLayer();
			return ret;
	}
	
	int cv_dnn_InnerProductLayer_propAxis_const(const cv::dnn::InnerProductLayer* instance) {
			int ret = instance->axis;
			return ret;
	}
	
	void cv_dnn_InnerProductLayer_propAxis_const_int(cv::dnn::InnerProductLayer* instance, const int val) {
			instance->axis = val;
	}
	
	cv::Algorithm* cv_dnn_InnerProductLayer_to_Algorithm(cv::dnn::InnerProductLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_InnerProductLayer_to_Layer(cv::dnn::InnerProductLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_InnerProductLayer_delete(cv::dnn::InnerProductLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_InnerProductLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::InnerProductLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::InnerProductLayerInt8> ret = cv::dnn::InnerProductLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::InnerProductLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::InnerProductLayerInt8* cv_dnn_InnerProductLayerInt8_defaultNew_const() {
			cv::dnn::InnerProductLayerInt8* ret = new cv::dnn::InnerProductLayerInt8();
			return ret;
	}
	
	int cv_dnn_InnerProductLayerInt8_propInput_zp_const(const cv::dnn::InnerProductLayerInt8* instance) {
			int ret = instance->input_zp;
			return ret;
	}
	
	void cv_dnn_InnerProductLayerInt8_propInput_zp_const_int(cv::dnn::InnerProductLayerInt8* instance, const int val) {
			instance->input_zp = val;
	}
	
	int cv_dnn_InnerProductLayerInt8_propOutput_zp_const(const cv::dnn::InnerProductLayerInt8* instance) {
			int ret = instance->output_zp;
			return ret;
	}
	
	void cv_dnn_InnerProductLayerInt8_propOutput_zp_const_int(cv::dnn::InnerProductLayerInt8* instance, const int val) {
			instance->output_zp = val;
	}
	
	float cv_dnn_InnerProductLayerInt8_propInput_sc_const(const cv::dnn::InnerProductLayerInt8* instance) {
			float ret = instance->input_sc;
			return ret;
	}
	
	void cv_dnn_InnerProductLayerInt8_propInput_sc_const_float(cv::dnn::InnerProductLayerInt8* instance, const float val) {
			instance->input_sc = val;
	}
	
	float cv_dnn_InnerProductLayerInt8_propOutput_sc_const(const cv::dnn::InnerProductLayerInt8* instance) {
			float ret = instance->output_sc;
			return ret;
	}
	
	void cv_dnn_InnerProductLayerInt8_propOutput_sc_const_float(cv::dnn::InnerProductLayerInt8* instance, const float val) {
			instance->output_sc = val;
	}
	
	bool cv_dnn_InnerProductLayerInt8_propPer_channel_const(const cv::dnn::InnerProductLayerInt8* instance) {
			bool ret = instance->per_channel;
			return ret;
	}
	
	void cv_dnn_InnerProductLayerInt8_propPer_channel_const_bool(cv::dnn::InnerProductLayerInt8* instance, const bool val) {
			instance->per_channel = val;
	}
	
	cv::Algorithm* cv_dnn_InnerProductLayerInt8_to_Algorithm(cv::dnn::InnerProductLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::InnerProductLayer* cv_dnn_InnerProductLayerInt8_to_InnerProductLayer(cv::dnn::InnerProductLayerInt8* instance) {
			return dynamic_cast<cv::dnn::InnerProductLayer*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_InnerProductLayerInt8_to_Layer(cv::dnn::InnerProductLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_InnerProductLayerInt8_delete(cv::dnn::InnerProductLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_InstanceNormLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::InstanceNormLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::InstanceNormLayer> ret = cv::dnn::InstanceNormLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::InstanceNormLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::InstanceNormLayer* cv_dnn_InstanceNormLayer_defaultNew_const() {
			cv::dnn::InstanceNormLayer* ret = new cv::dnn::InstanceNormLayer();
			return ret;
	}
	
	float cv_dnn_InstanceNormLayer_propEpsilon_const(const cv::dnn::InstanceNormLayer* instance) {
			float ret = instance->epsilon;
			return ret;
	}
	
	void cv_dnn_InstanceNormLayer_propEpsilon_const_float(cv::dnn::InstanceNormLayer* instance, const float val) {
			instance->epsilon = val;
	}
	
	cv::Algorithm* cv_dnn_InstanceNormLayer_to_Algorithm(cv::dnn::InstanceNormLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_InstanceNormLayer_to_Layer(cv::dnn::InstanceNormLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_InstanceNormLayer_delete(cv::dnn::InstanceNormLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_InterpLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::InterpLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::InterpLayer* cv_dnn_InterpLayer_defaultNew_const() {
			cv::dnn::InterpLayer* ret = new cv::dnn::InterpLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_InterpLayer_to_Algorithm(cv::dnn::InterpLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_InterpLayer_to_Layer(cv::dnn::InterpLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_InterpLayer_delete(cv::dnn::InterpLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_KeypointsModel_KeypointsModel_const_StringR_const_StringR(const char* model, const char* config, Result<cv::dnn::KeypointsModel*>* ocvrs_return) {
		try {
			cv::dnn::KeypointsModel* ret = new cv::dnn::KeypointsModel(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_KeypointsModel_KeypointsModel_const_StringR(const char* model, Result<cv::dnn::KeypointsModel*>* ocvrs_return) {
		try {
			cv::dnn::KeypointsModel* ret = new cv::dnn::KeypointsModel(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_KeypointsModel_KeypointsModel_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::KeypointsModel*>* ocvrs_return) {
		try {
			cv::dnn::KeypointsModel* ret = new cv::dnn::KeypointsModel(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_KeypointsModel_estimate_const__InputArrayR_float(cv::dnn::KeypointsModel* instance, const cv::_InputArray* frame, float thresh, Result<std::vector<cv::Point2f>*>* ocvrs_return) {
		try {
			std::vector<cv::Point2f> ret = instance->estimate(*frame, thresh);
			Ok(new std::vector<cv::Point2f>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_KeypointsModel_estimate_const__InputArrayR(cv::dnn::KeypointsModel* instance, const cv::_InputArray* frame, Result<std::vector<cv::Point2f>*>* ocvrs_return) {
		try {
			std::vector<cv::Point2f> ret = instance->estimate(*frame);
			Ok(new std::vector<cv::Point2f>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::KeypointsModel* cv_dnn_KeypointsModel_implicitClone_const(const cv::dnn::KeypointsModel* instance) {
			return new cv::dnn::KeypointsModel(*instance);
	}
	
	cv::dnn::Model* cv_dnn_KeypointsModel_to_Model(cv::dnn::KeypointsModel* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	void cv_dnn_KeypointsModel_delete(cv::dnn::KeypointsModel* instance) {
			delete instance;
	}
	
	void cv_dnn_LRNLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::LRNLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::LRNLayer> ret = cv::dnn::LRNLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::LRNLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::LRNLayer* cv_dnn_LRNLayer_defaultNew_const() {
			cv::dnn::LRNLayer* ret = new cv::dnn::LRNLayer();
			return ret;
	}
	
	int cv_dnn_LRNLayer_propType_const(const cv::dnn::LRNLayer* instance) {
			int ret = instance->type;
			return ret;
	}
	
	void cv_dnn_LRNLayer_propType_const_int(cv::dnn::LRNLayer* instance, const int val) {
			instance->type = val;
	}
	
	int cv_dnn_LRNLayer_propSize_const(const cv::dnn::LRNLayer* instance) {
			int ret = instance->size;
			return ret;
	}
	
	void cv_dnn_LRNLayer_propSize_const_int(cv::dnn::LRNLayer* instance, const int val) {
			instance->size = val;
	}
	
	float cv_dnn_LRNLayer_propAlpha_const(const cv::dnn::LRNLayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_LRNLayer_propAlpha_const_float(cv::dnn::LRNLayer* instance, const float val) {
			instance->alpha = val;
	}
	
	float cv_dnn_LRNLayer_propBeta_const(const cv::dnn::LRNLayer* instance) {
			float ret = instance->beta;
			return ret;
	}
	
	void cv_dnn_LRNLayer_propBeta_const_float(cv::dnn::LRNLayer* instance, const float val) {
			instance->beta = val;
	}
	
	float cv_dnn_LRNLayer_propBias_const(const cv::dnn::LRNLayer* instance) {
			float ret = instance->bias;
			return ret;
	}
	
	void cv_dnn_LRNLayer_propBias_const_float(cv::dnn::LRNLayer* instance, const float val) {
			instance->bias = val;
	}
	
	bool cv_dnn_LRNLayer_propNormBySize_const(const cv::dnn::LRNLayer* instance) {
			bool ret = instance->normBySize;
			return ret;
	}
	
	void cv_dnn_LRNLayer_propNormBySize_const_bool(cv::dnn::LRNLayer* instance, const bool val) {
			instance->normBySize = val;
	}
	
	cv::Algorithm* cv_dnn_LRNLayer_to_Algorithm(cv::dnn::LRNLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_LRNLayer_to_Layer(cv::dnn::LRNLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_LRNLayer_delete(cv::dnn::LRNLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_LSTMLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::LSTMLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::LSTMLayer> ret = cv::dnn::LSTMLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::LSTMLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setWeights_const_MatR_const_MatR_const_MatR(cv::dnn::LSTMLayer* instance, const cv::Mat* Wh, const cv::Mat* Wx, const cv::Mat* b, ResultVoid* ocvrs_return) {
		try {
			instance->setWeights(*Wh, *Wx, *b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setOutShape_const_MatShapeR(cv::dnn::LSTMLayer* instance, const cv::dnn::MatShape* outTailShape, ResultVoid* ocvrs_return) {
		try {
			instance->setOutShape(*outTailShape);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setOutShape(cv::dnn::LSTMLayer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setOutShape();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setUseTimstampsDim_bool(cv::dnn::LSTMLayer* instance, bool use, ResultVoid* ocvrs_return) {
		try {
			instance->setUseTimstampsDim(use);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setUseTimstampsDim(cv::dnn::LSTMLayer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setUseTimstampsDim();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setProduceCellOutput_bool(cv::dnn::LSTMLayer* instance, bool produce, ResultVoid* ocvrs_return) {
		try {
			instance->setProduceCellOutput(produce);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_setProduceCellOutput(cv::dnn::LSTMLayer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setProduceCellOutput();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_inputNameToIndex_String(cv::dnn::LSTMLayer* instance, const char* inputName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->inputNameToIndex(std::string(inputName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LSTMLayer_outputNameToIndex_const_StringR(cv::dnn::LSTMLayer* instance, const char* outputName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->outputNameToIndex(std::string(outputName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_dnn_LSTMLayer_to_Algorithm(cv::dnn::LSTMLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_LSTMLayer_to_Layer(cv::dnn::LSTMLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_LSTMLayer_delete(cv::dnn::LSTMLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_Layer_finalize_const__InputArrayR_const__OutputArrayR(cv::dnn::Layer* instance, const cv::_InputArray* inputs, const cv::_OutputArray* outputs, ResultVoid* ocvrs_return) {
		try {
			instance->finalize(*inputs, *outputs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_forward_vectorLMatXGR_vectorLMatGR_vectorLMatGR(cv::dnn::Layer* instance, std::vector<cv::Mat*>* input, std::vector<cv::Mat>* output, std::vector<cv::Mat>* internals, ResultVoid* ocvrs_return) {
		try {
			instance->forward(*input, *output, *internals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_forward_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::dnn::Layer* instance, const cv::_InputArray* inputs, const cv::_OutputArray* outputs, const cv::_OutputArray* internals, ResultVoid* ocvrs_return) {
		try {
			instance->forward(*inputs, *outputs, *internals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_tryQuantize_const_vectorLvectorLfloatGGR_const_vectorLvectorLintGGR_LayerParamsR(cv::dnn::Layer* instance, const std::vector<std::vector<float>>* scales, const std::vector<std::vector<int>>* zeropoints, cv::dnn::LayerParams* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->tryQuantize(*scales, *zeropoints, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_forward_fallback_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::dnn::Layer* instance, const cv::_InputArray* inputs, const cv::_OutputArray* outputs, const cv::_OutputArray* internals, ResultVoid* ocvrs_return) {
		try {
			instance->forward_fallback(*inputs, *outputs, *internals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_finalize_const_vectorLMatGR_vectorLMatGR(cv::dnn::Layer* instance, const std::vector<cv::Mat>* inputs, std::vector<cv::Mat>* outputs, ResultVoid* ocvrs_return) {
		try {
			instance->finalize(*inputs, *outputs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_finalize_const_vectorLMatGR(cv::dnn::Layer* instance, const std::vector<cv::Mat>* inputs, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			std::vector<cv::Mat> ret = instance->finalize(*inputs);
			Ok(new std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_run_const_vectorLMatGR_vectorLMatGR_vectorLMatGR(cv::dnn::Layer* instance, const std::vector<cv::Mat>* inputs, std::vector<cv::Mat>* outputs, std::vector<cv::Mat>* internals, ResultVoid* ocvrs_return) {
		try {
			instance->run(*inputs, *outputs, *internals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_inputNameToIndex_String(cv::dnn::Layer* instance, const char* inputName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->inputNameToIndex(std::string(inputName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_outputNameToIndex_const_StringR(cv::dnn::Layer* instance, const char* outputName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->outputNameToIndex(std::string(outputName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_supportBackend_int(cv::dnn::Layer* instance, int backendId, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->supportBackend(backendId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initHalide_const_vectorLPtrLBackendWrapperGGR(cv::dnn::Layer* instance, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputs, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initHalide(*inputs);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initNgraph_const_vectorLPtrLBackendWrapperGGR_const_vectorLPtrLBackendNodeGGR(cv::dnn::Layer* instance, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputs, const std::vector<cv::Ptr<cv::dnn::BackendNode>>* nodes, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initNgraph(*inputs, *nodes);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initVkCom_const_vectorLPtrLBackendWrapperGGR_vectorLPtrLBackendWrapperGGR(cv::dnn::Layer* instance, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputs, std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* outputs, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initVkCom(*inputs, *outputs);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initWebnn_const_vectorLPtrLBackendWrapperGGR_const_vectorLPtrLBackendNodeGGR(cv::dnn::Layer* instance, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputs, const std::vector<cv::Ptr<cv::dnn::BackendNode>>* nodes, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initWebnn(*inputs, *nodes);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initCUDA_voidX_const_vectorLPtrLBackendWrapperGGR_const_vectorLPtrLBackendWrapperGGR(cv::dnn::Layer* instance, void* context, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputs, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* outputs, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initCUDA(context, *inputs, *outputs);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initTimVX_voidX_const_vectorLPtrLBackendWrapperGGR_const_vectorLPtrLBackendWrapperGGR_bool(cv::dnn::Layer* instance, void* timVxInfo, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputsWrapper, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* outputsWrapper, bool isLast, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initTimVX(timVxInfo, *inputsWrapper, *outputsWrapper, isLast);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_initCann_const_vectorLPtrLBackendWrapperGGR_const_vectorLPtrLBackendWrapperGGR_const_vectorLPtrLBackendNodeGGR(cv::dnn::Layer* instance, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* inputs, const std::vector<cv::Ptr<cv::dnn::BackendWrapper>>* outputs, const std::vector<cv::Ptr<cv::dnn::BackendNode>>* nodes, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->initCann(*inputs, *outputs, *nodes);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_applyHalideScheduler_const_PtrLBackendNodeGR_const_vectorLMatXGR_const_vectorLMatGR_int(const cv::dnn::Layer* instance, cv::Ptr<cv::dnn::BackendNode>* node, const std::vector<cv::Mat*>* inputs, const std::vector<cv::Mat>* outputs, int targetId, ResultVoid* ocvrs_return) {
		try {
			instance->applyHalideScheduler(*node, *inputs, *outputs, targetId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_tryAttach_const_PtrLBackendNodeGR(cv::dnn::Layer* instance, const cv::Ptr<cv::dnn::BackendNode>* node, Result<cv::Ptr<cv::dnn::BackendNode>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::BackendNode> ret = instance->tryAttach(*node);
			Ok(new cv::Ptr<cv::dnn::BackendNode>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_setActivation_const_PtrLActivationLayerGR(cv::dnn::Layer* instance, const cv::Ptr<cv::dnn::ActivationLayer>* layer, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setActivation(*layer);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_tryFuse_PtrLLayerGR(cv::dnn::Layer* instance, cv::Ptr<cv::dnn::Layer>* top, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->tryFuse(*top);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_getScaleShift_const_MatR_MatR(const cv::dnn::Layer* instance, cv::Mat* scale, cv::Mat* shift, ResultVoid* ocvrs_return) {
		try {
			instance->getScaleShift(*scale, *shift);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_getScaleZeropoint_const_floatR_intR(const cv::dnn::Layer* instance, float* scale, int* zeropoint, ResultVoid* ocvrs_return) {
		try {
			instance->getScaleZeropoint(*scale, *zeropoint);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_unsetAttached(cv::dnn::Layer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->unsetAttached();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_getMemoryShapes_const_const_vectorLMatShapeGR_const_int_vectorLMatShapeGR_vectorLMatShapeGR(const cv::dnn::Layer* instance, const std::vector<cv::dnn::MatShape>* inputs, const int requiredOutputs, std::vector<cv::dnn::MatShape>* outputs, std::vector<cv::dnn::MatShape>* internals, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getMemoryShapes(*inputs, requiredOutputs, *outputs, *internals);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_getFLOPS_const_const_vectorLMatShapeGR_const_vectorLMatShapeGR(const cv::dnn::Layer* instance, const std::vector<cv::dnn::MatShape>* inputs, const std::vector<cv::dnn::MatShape>* outputs, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getFLOPS(*inputs, *outputs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_updateMemoryShapes_const_vectorLMatShapeGR(cv::dnn::Layer* instance, const std::vector<cv::dnn::MatShape>* inputs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->updateMemoryShapes(*inputs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_Layer(Result<cv::dnn::Layer*>* ocvrs_return) {
		try {
			cv::dnn::Layer* ret = new cv::dnn::Layer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_Layer_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::dnn::Layer*>* ocvrs_return) {
		try {
			cv::dnn::Layer* ret = new cv::dnn::Layer(*params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Layer_setParamsFrom_const_LayerParamsR(cv::dnn::Layer* instance, const cv::dnn::LayerParams* params, ResultVoid* ocvrs_return) {
		try {
			instance->setParamsFrom(*params);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	std::vector<cv::Mat>* cv_dnn_Layer_propBlobs_const(const cv::dnn::Layer* instance) {
			std::vector<cv::Mat> ret = instance->blobs;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_dnn_Layer_propBlobs_const_vectorLMatG(cv::dnn::Layer* instance, const std::vector<cv::Mat>* val) {
			instance->blobs = *val;
	}
	
	void* cv_dnn_Layer_propName_const(const cv::dnn::Layer* instance) {
			cv::String ret = instance->name;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_Layer_propName_const_String(cv::dnn::Layer* instance, const char* val) {
			instance->name = std::string(val);
	}
	
	void* cv_dnn_Layer_propType_const(const cv::dnn::Layer* instance) {
			cv::String ret = instance->type;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_Layer_propType_const_String(cv::dnn::Layer* instance, const char* val) {
			instance->type = std::string(val);
	}
	
	int cv_dnn_Layer_propPreferableTarget_const(const cv::dnn::Layer* instance) {
			int ret = instance->preferableTarget;
			return ret;
	}
	
	void cv_dnn_Layer_propPreferableTarget_const_int(cv::dnn::Layer* instance, const int val) {
			instance->preferableTarget = val;
	}
	
	cv::dnn::AbsLayer* cv_dnn_Layer_to_AbsLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AbsLayer*>(instance);
	}
	
	cv::dnn::AccumLayer* cv_dnn_Layer_to_AccumLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AccumLayer*>(instance);
	}
	
	cv::dnn::AcosLayer* cv_dnn_Layer_to_AcosLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AcosLayer*>(instance);
	}
	
	cv::dnn::AcoshLayer* cv_dnn_Layer_to_AcoshLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AcoshLayer*>(instance);
	}
	
	cv::dnn::ActivationLayer* cv_dnn_Layer_to_ActivationLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::dnn::ActivationLayerInt8* cv_dnn_Layer_to_ActivationLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayerInt8*>(instance);
	}
	
	cv::dnn::ArgLayer* cv_dnn_Layer_to_ArgLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ArgLayer*>(instance);
	}
	
	cv::dnn::AsinLayer* cv_dnn_Layer_to_AsinLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AsinLayer*>(instance);
	}
	
	cv::dnn::AsinhLayer* cv_dnn_Layer_to_AsinhLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AsinhLayer*>(instance);
	}
	
	cv::dnn::AtanLayer* cv_dnn_Layer_to_AtanLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AtanLayer*>(instance);
	}
	
	cv::dnn::AtanhLayer* cv_dnn_Layer_to_AtanhLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AtanhLayer*>(instance);
	}
	
	cv::dnn::AttentionLayer* cv_dnn_Layer_to_AttentionLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::AttentionLayer*>(instance);
	}
	
	cv::dnn::BNLLLayer* cv_dnn_Layer_to_BNLLLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::BNLLLayer*>(instance);
	}
	
	cv::dnn::BaseConvolutionLayer* cv_dnn_Layer_to_BaseConvolutionLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::BaseConvolutionLayer*>(instance);
	}
	
	cv::dnn::BatchNormLayer* cv_dnn_Layer_to_BatchNormLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::BatchNormLayer*>(instance);
	}
	
	cv::dnn::BatchNormLayerInt8* cv_dnn_Layer_to_BatchNormLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::BatchNormLayerInt8*>(instance);
	}
	
	cv::dnn::BlankLayer* cv_dnn_Layer_to_BlankLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::BlankLayer*>(instance);
	}
	
	cv::dnn::CeilLayer* cv_dnn_Layer_to_CeilLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CeilLayer*>(instance);
	}
	
	cv::dnn::CeluLayer* cv_dnn_Layer_to_CeluLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CeluLayer*>(instance);
	}
	
	cv::dnn::ChannelsPReLULayer* cv_dnn_Layer_to_ChannelsPReLULayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ChannelsPReLULayer*>(instance);
	}
	
	cv::dnn::CompareLayer* cv_dnn_Layer_to_CompareLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CompareLayer*>(instance);
	}
	
	cv::dnn::ConcatLayer* cv_dnn_Layer_to_ConcatLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ConcatLayer*>(instance);
	}
	
	cv::dnn::ConstLayer* cv_dnn_Layer_to_ConstLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ConstLayer*>(instance);
	}
	
	cv::dnn::ConvolutionLayer* cv_dnn_Layer_to_ConvolutionLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ConvolutionLayer*>(instance);
	}
	
	cv::dnn::ConvolutionLayerInt8* cv_dnn_Layer_to_ConvolutionLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ConvolutionLayerInt8*>(instance);
	}
	
	cv::dnn::CorrelationLayer* cv_dnn_Layer_to_CorrelationLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CorrelationLayer*>(instance);
	}
	
	cv::dnn::CosLayer* cv_dnn_Layer_to_CosLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CosLayer*>(instance);
	}
	
	cv::dnn::CoshLayer* cv_dnn_Layer_to_CoshLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CoshLayer*>(instance);
	}
	
	cv::dnn::CropAndResizeLayer* cv_dnn_Layer_to_CropAndResizeLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CropAndResizeLayer*>(instance);
	}
	
	cv::dnn::CropLayer* cv_dnn_Layer_to_CropLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CropLayer*>(instance);
	}
	
	cv::dnn::CumSumLayer* cv_dnn_Layer_to_CumSumLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::CumSumLayer*>(instance);
	}
	
	cv::dnn::DataAugmentationLayer* cv_dnn_Layer_to_DataAugmentationLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::DataAugmentationLayer*>(instance);
	}
	
	cv::dnn::DeconvolutionLayer* cv_dnn_Layer_to_DeconvolutionLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::DeconvolutionLayer*>(instance);
	}
	
	cv::dnn::DepthToSpaceLayer* cv_dnn_Layer_to_DepthToSpaceLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::DepthToSpaceLayer*>(instance);
	}
	
	cv::dnn::DequantizeLayer* cv_dnn_Layer_to_DequantizeLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::DequantizeLayer*>(instance);
	}
	
	cv::dnn::DetectionOutputLayer* cv_dnn_Layer_to_DetectionOutputLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::DetectionOutputLayer*>(instance);
	}
	
	cv::dnn::ELULayer* cv_dnn_Layer_to_ELULayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ELULayer*>(instance);
	}
	
	cv::dnn::EinsumLayer* cv_dnn_Layer_to_EinsumLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::EinsumLayer*>(instance);
	}
	
	cv::dnn::EltwiseLayer* cv_dnn_Layer_to_EltwiseLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::EltwiseLayer*>(instance);
	}
	
	cv::dnn::EltwiseLayerInt8* cv_dnn_Layer_to_EltwiseLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::EltwiseLayerInt8*>(instance);
	}
	
	cv::dnn::ErfLayer* cv_dnn_Layer_to_ErfLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ErfLayer*>(instance);
	}
	
	cv::dnn::ExpLayer* cv_dnn_Layer_to_ExpLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ExpLayer*>(instance);
	}
	
	cv::dnn::ExpandLayer* cv_dnn_Layer_to_ExpandLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ExpandLayer*>(instance);
	}
	
	cv::dnn::FlattenLayer* cv_dnn_Layer_to_FlattenLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::FlattenLayer*>(instance);
	}
	
	cv::dnn::FloorLayer* cv_dnn_Layer_to_FloorLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::FloorLayer*>(instance);
	}
	
	cv::dnn::FlowWarpLayer* cv_dnn_Layer_to_FlowWarpLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::FlowWarpLayer*>(instance);
	}
	
	cv::dnn::GRULayer* cv_dnn_Layer_to_GRULayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GRULayer*>(instance);
	}
	
	cv::dnn::GatherElementsLayer* cv_dnn_Layer_to_GatherElementsLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GatherElementsLayer*>(instance);
	}
	
	cv::dnn::GatherLayer* cv_dnn_Layer_to_GatherLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GatherLayer*>(instance);
	}
	
	cv::dnn::GeluApproximationLayer* cv_dnn_Layer_to_GeluApproximationLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GeluApproximationLayer*>(instance);
	}
	
	cv::dnn::GeluLayer* cv_dnn_Layer_to_GeluLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GeluLayer*>(instance);
	}
	
	cv::dnn::GemmLayer* cv_dnn_Layer_to_GemmLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GemmLayer*>(instance);
	}
	
	cv::dnn::GroupNormLayer* cv_dnn_Layer_to_GroupNormLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::GroupNormLayer*>(instance);
	}
	
	cv::dnn::HardSigmoidLayer* cv_dnn_Layer_to_HardSigmoidLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::HardSigmoidLayer*>(instance);
	}
	
	cv::dnn::HardSwishLayer* cv_dnn_Layer_to_HardSwishLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::HardSwishLayer*>(instance);
	}
	
	cv::dnn::InnerProductLayer* cv_dnn_Layer_to_InnerProductLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::InnerProductLayer*>(instance);
	}
	
	cv::dnn::InnerProductLayerInt8* cv_dnn_Layer_to_InnerProductLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::InnerProductLayerInt8*>(instance);
	}
	
	cv::dnn::InstanceNormLayer* cv_dnn_Layer_to_InstanceNormLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::InstanceNormLayer*>(instance);
	}
	
	cv::dnn::InterpLayer* cv_dnn_Layer_to_InterpLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::InterpLayer*>(instance);
	}
	
	cv::dnn::LRNLayer* cv_dnn_Layer_to_LRNLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::LRNLayer*>(instance);
	}
	
	cv::dnn::LSTMLayer* cv_dnn_Layer_to_LSTMLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::LSTMLayer*>(instance);
	}
	
	cv::dnn::LayerNormLayer* cv_dnn_Layer_to_LayerNormLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::LayerNormLayer*>(instance);
	}
	
	cv::dnn::LogLayer* cv_dnn_Layer_to_LogLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::LogLayer*>(instance);
	}
	
	cv::dnn::MVNLayer* cv_dnn_Layer_to_MVNLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::MVNLayer*>(instance);
	}
	
	cv::dnn::MatMulLayer* cv_dnn_Layer_to_MatMulLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::MatMulLayer*>(instance);
	}
	
	cv::dnn::MaxUnpoolLayer* cv_dnn_Layer_to_MaxUnpoolLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::MaxUnpoolLayer*>(instance);
	}
	
	cv::dnn::MishLayer* cv_dnn_Layer_to_MishLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::MishLayer*>(instance);
	}
	
	cv::dnn::NaryEltwiseLayer* cv_dnn_Layer_to_NaryEltwiseLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::NaryEltwiseLayer*>(instance);
	}
	
	cv::dnn::NormalizeBBoxLayer* cv_dnn_Layer_to_NormalizeBBoxLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::NormalizeBBoxLayer*>(instance);
	}
	
	cv::dnn::NotLayer* cv_dnn_Layer_to_NotLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::NotLayer*>(instance);
	}
	
	cv::dnn::PaddingLayer* cv_dnn_Layer_to_PaddingLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::PaddingLayer*>(instance);
	}
	
	cv::dnn::PermuteLayer* cv_dnn_Layer_to_PermuteLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::PermuteLayer*>(instance);
	}
	
	cv::dnn::PoolingLayer* cv_dnn_Layer_to_PoolingLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::PoolingLayer*>(instance);
	}
	
	cv::dnn::PoolingLayerInt8* cv_dnn_Layer_to_PoolingLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::PoolingLayerInt8*>(instance);
	}
	
	cv::dnn::PowerLayer* cv_dnn_Layer_to_PowerLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::PowerLayer*>(instance);
	}
	
	cv::dnn::PriorBoxLayer* cv_dnn_Layer_to_PriorBoxLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::PriorBoxLayer*>(instance);
	}
	
	cv::dnn::ProposalLayer* cv_dnn_Layer_to_ProposalLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ProposalLayer*>(instance);
	}
	
	cv::dnn::QuantizeLayer* cv_dnn_Layer_to_QuantizeLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::QuantizeLayer*>(instance);
	}
	
	cv::dnn::RNNLayer* cv_dnn_Layer_to_RNNLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::RNNLayer*>(instance);
	}
	
	cv::dnn::ReLU6Layer* cv_dnn_Layer_to_ReLU6Layer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ReLU6Layer*>(instance);
	}
	
	cv::dnn::ReLULayer* cv_dnn_Layer_to_ReLULayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ReLULayer*>(instance);
	}
	
	cv::dnn::ReciprocalLayer* cv_dnn_Layer_to_ReciprocalLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ReciprocalLayer*>(instance);
	}
	
	cv::dnn::ReduceLayer* cv_dnn_Layer_to_ReduceLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ReduceLayer*>(instance);
	}
	
	cv::dnn::RegionLayer* cv_dnn_Layer_to_RegionLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::RegionLayer*>(instance);
	}
	
	cv::dnn::ReorgLayer* cv_dnn_Layer_to_ReorgLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ReorgLayer*>(instance);
	}
	
	cv::dnn::RequantizeLayer* cv_dnn_Layer_to_RequantizeLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::RequantizeLayer*>(instance);
	}
	
	cv::dnn::ReshapeLayer* cv_dnn_Layer_to_ReshapeLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ReshapeLayer*>(instance);
	}
	
	cv::dnn::ResizeLayer* cv_dnn_Layer_to_ResizeLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ResizeLayer*>(instance);
	}
	
	cv::dnn::RoundLayer* cv_dnn_Layer_to_RoundLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::RoundLayer*>(instance);
	}
	
	cv::dnn::ScaleLayer* cv_dnn_Layer_to_ScaleLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ScaleLayer*>(instance);
	}
	
	cv::dnn::ScaleLayerInt8* cv_dnn_Layer_to_ScaleLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ScaleLayerInt8*>(instance);
	}
	
	cv::dnn::ScatterLayer* cv_dnn_Layer_to_ScatterLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ScatterLayer*>(instance);
	}
	
	cv::dnn::ScatterNDLayer* cv_dnn_Layer_to_ScatterNDLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ScatterNDLayer*>(instance);
	}
	
	cv::dnn::SeluLayer* cv_dnn_Layer_to_SeluLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SeluLayer*>(instance);
	}
	
	cv::dnn::ShiftLayer* cv_dnn_Layer_to_ShiftLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ShiftLayer*>(instance);
	}
	
	cv::dnn::ShiftLayerInt8* cv_dnn_Layer_to_ShiftLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ShiftLayerInt8*>(instance);
	}
	
	cv::dnn::ShrinkLayer* cv_dnn_Layer_to_ShrinkLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ShrinkLayer*>(instance);
	}
	
	cv::dnn::ShuffleChannelLayer* cv_dnn_Layer_to_ShuffleChannelLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ShuffleChannelLayer*>(instance);
	}
	
	cv::dnn::SigmoidLayer* cv_dnn_Layer_to_SigmoidLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SigmoidLayer*>(instance);
	}
	
	cv::dnn::SignLayer* cv_dnn_Layer_to_SignLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SignLayer*>(instance);
	}
	
	cv::dnn::SinLayer* cv_dnn_Layer_to_SinLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SinLayer*>(instance);
	}
	
	cv::dnn::SinhLayer* cv_dnn_Layer_to_SinhLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SinhLayer*>(instance);
	}
	
	cv::dnn::SliceLayer* cv_dnn_Layer_to_SliceLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SliceLayer*>(instance);
	}
	
	cv::dnn::SoftmaxLayer* cv_dnn_Layer_to_SoftmaxLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SoftmaxLayer*>(instance);
	}
	
	cv::dnn::SoftmaxLayerInt8* cv_dnn_Layer_to_SoftmaxLayerInt8(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SoftmaxLayerInt8*>(instance);
	}
	
	cv::dnn::SoftplusLayer* cv_dnn_Layer_to_SoftplusLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SoftplusLayer*>(instance);
	}
	
	cv::dnn::SoftsignLayer* cv_dnn_Layer_to_SoftsignLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SoftsignLayer*>(instance);
	}
	
	cv::dnn::SpaceToDepthLayer* cv_dnn_Layer_to_SpaceToDepthLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SpaceToDepthLayer*>(instance);
	}
	
	cv::dnn::SplitLayer* cv_dnn_Layer_to_SplitLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SplitLayer*>(instance);
	}
	
	cv::dnn::SqrtLayer* cv_dnn_Layer_to_SqrtLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SqrtLayer*>(instance);
	}
	
	cv::dnn::SwishLayer* cv_dnn_Layer_to_SwishLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::SwishLayer*>(instance);
	}
	
	cv::dnn::TanHLayer* cv_dnn_Layer_to_TanHLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::TanHLayer*>(instance);
	}
	
	cv::dnn::TanLayer* cv_dnn_Layer_to_TanLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::TanLayer*>(instance);
	}
	
	cv::dnn::ThresholdedReluLayer* cv_dnn_Layer_to_ThresholdedReluLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::ThresholdedReluLayer*>(instance);
	}
	
	cv::dnn::TileLayer* cv_dnn_Layer_to_TileLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::TileLayer*>(instance);
	}
	
	cv::dnn::TopKLayer* cv_dnn_Layer_to_TopKLayer(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::dnn::TopKLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_Layer_to_Algorithm(cv::dnn::Layer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_dnn_Layer_delete(cv::dnn::Layer* instance) {
			delete instance;
	}
	
	void cv_dnn_LayerFactory_registerLayer_const_StringR_Constructor(const char* type, cv::dnn::LayerFactory::Constructor constructor, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::LayerFactory::registerLayer(std::string(type), constructor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LayerFactory_unregisterLayer_const_StringR(const char* type, ResultVoid* ocvrs_return) {
		try {
			cv::dnn::LayerFactory::unregisterLayer(std::string(type));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LayerFactory_isLayerRegistered_const_stringR(const char* type, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::dnn::LayerFactory::isLayerRegistered(std::string(type));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LayerFactory_createLayerInstance_const_StringR_LayerParamsR(const char* type, cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::LayerFactory::createLayerInstance(std::string(type), *params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_LayerFactory_delete(cv::dnn::LayerFactory* instance) {
			delete instance;
	}
	
	void cv_dnn_LayerNormLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::LayerNormLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::LayerNormLayer> ret = cv::dnn::LayerNormLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::LayerNormLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::LayerNormLayer* cv_dnn_LayerNormLayer_defaultNew_const() {
			cv::dnn::LayerNormLayer* ret = new cv::dnn::LayerNormLayer();
			return ret;
	}
	
	bool cv_dnn_LayerNormLayer_propHasBias_const(const cv::dnn::LayerNormLayer* instance) {
			bool ret = instance->hasBias;
			return ret;
	}
	
	void cv_dnn_LayerNormLayer_propHasBias_const_bool(cv::dnn::LayerNormLayer* instance, const bool val) {
			instance->hasBias = val;
	}
	
	int cv_dnn_LayerNormLayer_propAxis_const(const cv::dnn::LayerNormLayer* instance) {
			int ret = instance->axis;
			return ret;
	}
	
	void cv_dnn_LayerNormLayer_propAxis_const_int(cv::dnn::LayerNormLayer* instance, const int val) {
			instance->axis = val;
	}
	
	float cv_dnn_LayerNormLayer_propEpsilon_const(const cv::dnn::LayerNormLayer* instance) {
			float ret = instance->epsilon;
			return ret;
	}
	
	void cv_dnn_LayerNormLayer_propEpsilon_const_float(cv::dnn::LayerNormLayer* instance, const float val) {
			instance->epsilon = val;
	}
	
	cv::Algorithm* cv_dnn_LayerNormLayer_to_Algorithm(cv::dnn::LayerNormLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_LayerNormLayer_to_Layer(cv::dnn::LayerNormLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_LayerNormLayer_delete(cv::dnn::LayerNormLayer* instance) {
			delete instance;
	}
	
	cv::dnn::LayerParams* cv_dnn_LayerParams_defaultNew_const() {
			cv::dnn::LayerParams* ret = new cv::dnn::LayerParams();
			return ret;
	}
	
	std::vector<cv::Mat>* cv_dnn_LayerParams_propBlobs_const(const cv::dnn::LayerParams* instance) {
			std::vector<cv::Mat> ret = instance->blobs;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_dnn_LayerParams_propBlobs_const_vectorLMatG(cv::dnn::LayerParams* instance, const std::vector<cv::Mat>* val) {
			instance->blobs = *val;
	}
	
	void* cv_dnn_LayerParams_propName_const(const cv::dnn::LayerParams* instance) {
			cv::String ret = instance->name;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_LayerParams_propName_const_String(cv::dnn::LayerParams* instance, const char* val) {
			instance->name = std::string(val);
	}
	
	void* cv_dnn_LayerParams_propType_const(const cv::dnn::LayerParams* instance) {
			cv::String ret = instance->type;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_LayerParams_propType_const_String(cv::dnn::LayerParams* instance, const char* val) {
			instance->type = std::string(val);
	}
	
	cv::dnn::Dict* cv_dnn_LayerParams_to_Dict(cv::dnn::LayerParams* instance) {
			return dynamic_cast<cv::dnn::Dict*>(instance);
	}
	
	void cv_dnn_LayerParams_delete(cv::dnn::LayerParams* instance) {
			delete instance;
	}
	
	void cv_dnn_LogLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::LogLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::LogLayer> ret = cv::dnn::LogLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::LogLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::LogLayer* cv_dnn_LogLayer_defaultNew_const() {
			cv::dnn::LogLayer* ret = new cv::dnn::LogLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_LogLayer_to_ActivationLayer(cv::dnn::LogLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_LogLayer_to_Algorithm(cv::dnn::LogLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_LogLayer_to_Layer(cv::dnn::LogLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_LogLayer_delete(cv::dnn::LogLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_MVNLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::MVNLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::MVNLayer> ret = cv::dnn::MVNLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::MVNLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::MVNLayer* cv_dnn_MVNLayer_defaultNew_const() {
			cv::dnn::MVNLayer* ret = new cv::dnn::MVNLayer();
			return ret;
	}
	
	float cv_dnn_MVNLayer_propEps_const(const cv::dnn::MVNLayer* instance) {
			float ret = instance->eps;
			return ret;
	}
	
	void cv_dnn_MVNLayer_propEps_const_float(cv::dnn::MVNLayer* instance, const float val) {
			instance->eps = val;
	}
	
	bool cv_dnn_MVNLayer_propNormVariance_const(const cv::dnn::MVNLayer* instance) {
			bool ret = instance->normVariance;
			return ret;
	}
	
	void cv_dnn_MVNLayer_propNormVariance_const_bool(cv::dnn::MVNLayer* instance, const bool val) {
			instance->normVariance = val;
	}
	
	bool cv_dnn_MVNLayer_propAcrossChannels_const(const cv::dnn::MVNLayer* instance) {
			bool ret = instance->acrossChannels;
			return ret;
	}
	
	void cv_dnn_MVNLayer_propAcrossChannels_const_bool(cv::dnn::MVNLayer* instance, const bool val) {
			instance->acrossChannels = val;
	}
	
	cv::Algorithm* cv_dnn_MVNLayer_to_Algorithm(cv::dnn::MVNLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_MVNLayer_to_Layer(cv::dnn::MVNLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_MVNLayer_delete(cv::dnn::MVNLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_MatMulLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::MatMulLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::MatMulLayer> ret = cv::dnn::MatMulLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::MatMulLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::MatMulLayer* cv_dnn_MatMulLayer_defaultNew_const() {
			cv::dnn::MatMulLayer* ret = new cv::dnn::MatMulLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_MatMulLayer_to_Algorithm(cv::dnn::MatMulLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_MatMulLayer_to_Layer(cv::dnn::MatMulLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_MatMulLayer_delete(cv::dnn::MatMulLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_MaxUnpoolLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::MaxUnpoolLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::MaxUnpoolLayer> ret = cv::dnn::MaxUnpoolLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::MaxUnpoolLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::MaxUnpoolLayer* cv_dnn_MaxUnpoolLayer_defaultNew_const() {
			cv::dnn::MaxUnpoolLayer* ret = new cv::dnn::MaxUnpoolLayer();
			return ret;
	}
	
	void cv_dnn_MaxUnpoolLayer_propPoolKernel_const(const cv::dnn::MaxUnpoolLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->poolKernel;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_MaxUnpoolLayer_propPoolKernel_const_Size(cv::dnn::MaxUnpoolLayer* instance, const cv::Size* val) {
			instance->poolKernel = *val;
	}
	
	void cv_dnn_MaxUnpoolLayer_propPoolPad_const(const cv::dnn::MaxUnpoolLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->poolPad;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_MaxUnpoolLayer_propPoolPad_const_Size(cv::dnn::MaxUnpoolLayer* instance, const cv::Size* val) {
			instance->poolPad = *val;
	}
	
	void cv_dnn_MaxUnpoolLayer_propPoolStride_const(const cv::dnn::MaxUnpoolLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->poolStride;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_MaxUnpoolLayer_propPoolStride_const_Size(cv::dnn::MaxUnpoolLayer* instance, const cv::Size* val) {
			instance->poolStride = *val;
	}
	
	cv::Algorithm* cv_dnn_MaxUnpoolLayer_to_Algorithm(cv::dnn::MaxUnpoolLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_MaxUnpoolLayer_to_Layer(cv::dnn::MaxUnpoolLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_MaxUnpoolLayer_delete(cv::dnn::MaxUnpoolLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_MishLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::MishLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::MishLayer> ret = cv::dnn::MishLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::MishLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::MishLayer* cv_dnn_MishLayer_defaultNew_const() {
			cv::dnn::MishLayer* ret = new cv::dnn::MishLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_MishLayer_to_ActivationLayer(cv::dnn::MishLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_MishLayer_to_Algorithm(cv::dnn::MishLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_MishLayer_to_Layer(cv::dnn::MishLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_MishLayer_delete(cv::dnn::MishLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_Model_Model(Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model* ret = new cv::dnn::Model();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::Model* cv_dnn_Model_Model_const_ModelR(const cv::dnn::Model* unnamed) {
			cv::dnn::Model* ret = new cv::dnn::Model(*unnamed);
			return ret;
	}
	
	cv::dnn::Model* cv_dnn_Model_Model_ModelRR(cv::dnn::Model* unnamed) {
			cv::dnn::Model* ret = new cv::dnn::Model(std::move(*unnamed));
			return ret;
	}
	
	void cv_dnn_Model_operatorST_const_ModelR(cv::dnn::Model* instance, const cv::dnn::Model* unnamed) {
			instance->operator=(*unnamed);
	}
	
	void cv_dnn_Model_operatorST_ModelRR(cv::dnn::Model* instance, cv::dnn::Model* unnamed) {
			instance->operator=(std::move(*unnamed));
	}
	
	void cv_dnn_Model_Model_const_StringR_const_StringR(const char* model, const char* config, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model* ret = new cv::dnn::Model(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_Model_const_StringR(const char* model, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model* ret = new cv::dnn::Model(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_Model_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model* ret = new cv::dnn::Model(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputSize_const_SizeR(cv::dnn::Model* instance, const cv::Size* size, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setInputSize(*size);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputSize_int_int(cv::dnn::Model* instance, int width, int height, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setInputSize(width, height);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputMean_const_ScalarR(cv::dnn::Model* instance, const cv::Scalar* mean, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setInputMean(*mean);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputScale_const_ScalarR(cv::dnn::Model* instance, const cv::Scalar* scale, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setInputScale(*scale);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputCrop_bool(cv::dnn::Model* instance, bool crop, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setInputCrop(crop);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputSwapRB_bool(cv::dnn::Model* instance, bool swapRB, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setInputSwapRB(swapRB);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setOutputNames_const_vectorLStringGR(cv::dnn::Model* instance, const std::vector<cv::String>* outNames, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setOutputNames(*outNames);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputParams_double_const_SizeR_const_ScalarR_bool_bool(cv::dnn::Model* instance, double scale, const cv::Size* size, const cv::Scalar* mean, bool swapRB, bool crop, ResultVoid* ocvrs_return) {
		try {
			instance->setInputParams(scale, *size, *mean, swapRB, crop);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setInputParams(cv::dnn::Model* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setInputParams();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_predict_const_const__InputArrayR_const__OutputArrayR(const cv::dnn::Model* instance, const cv::_InputArray* frame, const cv::_OutputArray* outs, ResultVoid* ocvrs_return) {
		try {
			instance->predict(*frame, *outs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setPreferableBackend_Backend(cv::dnn::Model* instance, cv::dnn::Backend backendId, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setPreferableBackend(backendId);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_setPreferableTarget_Target(cv::dnn::Model* instance, cv::dnn::Target targetId, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->setPreferableTarget(targetId);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_enableWinograd_bool(cv::dnn::Model* instance, bool useWinograd, Result<cv::dnn::Model*>* ocvrs_return) {
		try {
			cv::dnn::Model ret = instance->enableWinograd(useWinograd);
			Ok(new cv::dnn::Model(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_getNetwork__const(const cv::dnn::Model* instance, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = instance->getNetwork_();
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Model_getNetwork_(cv::dnn::Model* instance, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = instance->getNetwork_();
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::Model* cv_dnn_Model_implicitClone_const(const cv::dnn::Model* instance) {
			return new cv::dnn::Model(*instance);
	}
	
	void cv_dnn_Model_delete(cv::dnn::Model* instance) {
			delete instance;
	}
	
	void cv_dnn_NaryEltwiseLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::NaryEltwiseLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::NaryEltwiseLayer> ret = cv::dnn::NaryEltwiseLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::NaryEltwiseLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::NaryEltwiseLayer* cv_dnn_NaryEltwiseLayer_defaultNew_const() {
			cv::dnn::NaryEltwiseLayer* ret = new cv::dnn::NaryEltwiseLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_NaryEltwiseLayer_to_Algorithm(cv::dnn::NaryEltwiseLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_NaryEltwiseLayer_to_Layer(cv::dnn::NaryEltwiseLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_NaryEltwiseLayer_delete(cv::dnn::NaryEltwiseLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_Net_Net(Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net* ret = new cv::dnn::Net();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_readFromModelOptimizer_const_StringR_const_StringR(const char* xml, const char* bin, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::Net::readFromModelOptimizer(std::string(xml), std::string(bin));
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_readFromModelOptimizer_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const std::vector<unsigned char>* bufferModelConfig, const std::vector<unsigned char>* bufferWeights, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::Net::readFromModelOptimizer(*bufferModelConfig, *bufferWeights);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_readFromModelOptimizer_const_unsigned_charX_size_t_const_unsigned_charX_size_t(const unsigned char* bufferModelConfigPtr, size_t bufferModelConfigSize, const unsigned char* bufferWeightsPtr, size_t bufferWeightsSize, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = cv::dnn::Net::readFromModelOptimizer(bufferModelConfigPtr, bufferModelConfigSize, bufferWeightsPtr, bufferWeightsSize);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_empty_const(const cv::dnn::Net* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_dump(cv::dnn::Net* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->dump();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_dumpToFile_const_StringR(cv::dnn::Net* instance, const char* path, ResultVoid* ocvrs_return) {
		try {
			instance->dumpToFile(std::string(path));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_dumpToPbtxt_const_StringR(cv::dnn::Net* instance, const char* path, ResultVoid* ocvrs_return) {
		try {
			instance->dumpToPbtxt(std::string(path));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_addLayer_const_StringR_const_StringR_const_intR_LayerParamsR(cv::dnn::Net* instance, const char* name, const char* type, const int* dtype, cv::dnn::LayerParams* params, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addLayer(std::string(name), std::string(type), *dtype, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_addLayer_const_StringR_const_StringR_LayerParamsR(cv::dnn::Net* instance, const char* name, const char* type, cv::dnn::LayerParams* params, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addLayer(std::string(name), std::string(type), *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_addLayerToPrev_const_StringR_const_StringR_const_intR_LayerParamsR(cv::dnn::Net* instance, const char* name, const char* type, const int* dtype, cv::dnn::LayerParams* params, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addLayerToPrev(std::string(name), std::string(type), *dtype, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_addLayerToPrev_const_StringR_const_StringR_LayerParamsR(cv::dnn::Net* instance, const char* name, const char* type, cv::dnn::LayerParams* params, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addLayerToPrev(std::string(name), std::string(type), *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayerId_const_const_StringR(const cv::dnn::Net* instance, const char* layer, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLayerId(std::string(layer));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayerNames_const(const cv::dnn::Net* instance, Result<std::vector<cv::String>*>* ocvrs_return) {
		try {
			std::vector<cv::String> ret = instance->getLayerNames();
			Ok(new std::vector<cv::String>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayer_const_int(const cv::dnn::Net* instance, int layerId, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = instance->getLayer(layerId);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayer_const_const_StringR(const cv::dnn::Net* instance, const char* layerName, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = instance->getLayer(std::string(layerName));
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayer_const_const_LayerIdR(const cv::dnn::Net* instance, const cv::dnn::Net::LayerId* layerId, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = instance->getLayer(*layerId);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayerInputs_const_int(const cv::dnn::Net* instance, int layerId, Result<std::vector<cv::Ptr<cv::dnn::Layer>>*>* ocvrs_return) {
		try {
			std::vector<cv::Ptr<cv::dnn::Layer>> ret = instance->getLayerInputs(layerId);
			Ok(new std::vector<cv::Ptr<cv::dnn::Layer>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_connect_String_String(cv::dnn::Net* instance, const char* outPin, const char* inpPin, ResultVoid* ocvrs_return) {
		try {
			instance->connect(std::string(outPin), std::string(inpPin));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_connect_int_int_int_int(cv::dnn::Net* instance, int outLayerId, int outNum, int inpLayerId, int inpNum, ResultVoid* ocvrs_return) {
		try {
			instance->connect(outLayerId, outNum, inpLayerId, inpNum);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_registerOutput_const_stringR_int_int(cv::dnn::Net* instance, const char* outputName, int layerId, int outputPort, Result<int>* ocvrs_return) {
		try {
			int ret = instance->registerOutput(std::string(outputName), layerId, outputPort);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setInputsNames_const_vectorLStringGR(cv::dnn::Net* instance, const std::vector<cv::String>* inputBlobNames, ResultVoid* ocvrs_return) {
		try {
			instance->setInputsNames(*inputBlobNames);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setInputShape_const_StringR_const_MatShapeR(cv::dnn::Net* instance, const char* inputName, const cv::dnn::MatShape* shape, ResultVoid* ocvrs_return) {
		try {
			instance->setInputShape(std::string(inputName), *shape);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forward_const_StringR(cv::dnn::Net* instance, const char* outputName, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->forward(std::string(outputName));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forward(cv::dnn::Net* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->forward();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forwardAsync_const_StringR(cv::dnn::Net* instance, const char* outputName, Result<cv::AsyncArray*>* ocvrs_return) {
		try {
			cv::AsyncArray ret = instance->forwardAsync(std::string(outputName));
			Ok(new cv::AsyncArray(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forwardAsync(cv::dnn::Net* instance, Result<cv::AsyncArray*>* ocvrs_return) {
		try {
			cv::AsyncArray ret = instance->forwardAsync();
			Ok(new cv::AsyncArray(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forward_const__OutputArrayR_const_StringR(cv::dnn::Net* instance, const cv::_OutputArray* outputBlobs, const char* outputName, ResultVoid* ocvrs_return) {
		try {
			instance->forward(*outputBlobs, std::string(outputName));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forward_const__OutputArrayR(cv::dnn::Net* instance, const cv::_OutputArray* outputBlobs, ResultVoid* ocvrs_return) {
		try {
			instance->forward(*outputBlobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forward_const__OutputArrayR_const_vectorLStringGR(cv::dnn::Net* instance, const cv::_OutputArray* outputBlobs, const std::vector<cv::String>* outBlobNames, ResultVoid* ocvrs_return) {
		try {
			instance->forward(*outputBlobs, *outBlobNames);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_forward_vectorLvectorLMatGGR_const_vectorLStringGR(cv::dnn::Net* instance, std::vector<std::vector<cv::Mat>>* outputBlobs, const std::vector<cv::String>* outBlobNames, ResultVoid* ocvrs_return) {
		try {
			instance->forward(*outputBlobs, *outBlobNames);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_quantize_const__InputArrayR_int_int_bool(cv::dnn::Net* instance, const cv::_InputArray* calibData, int inputsDtype, int outputsDtype, bool perChannel, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = instance->quantize(*calibData, inputsDtype, outputsDtype, perChannel);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_quantize_const__InputArrayR_int_int(cv::dnn::Net* instance, const cv::_InputArray* calibData, int inputsDtype, int outputsDtype, Result<cv::dnn::Net*>* ocvrs_return) {
		try {
			cv::dnn::Net ret = instance->quantize(*calibData, inputsDtype, outputsDtype);
			Ok(new cv::dnn::Net(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getInputDetails_const_vectorLfloatGR_vectorLintGR(const cv::dnn::Net* instance, std::vector<float>* scales, std::vector<int>* zeropoints, ResultVoid* ocvrs_return) {
		try {
			instance->getInputDetails(*scales, *zeropoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getOutputDetails_const_vectorLfloatGR_vectorLintGR(const cv::dnn::Net* instance, std::vector<float>* scales, std::vector<int>* zeropoints, ResultVoid* ocvrs_return) {
		try {
			instance->getOutputDetails(*scales, *zeropoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setHalideScheduler_const_StringR(cv::dnn::Net* instance, const char* scheduler, ResultVoid* ocvrs_return) {
		try {
			instance->setHalideScheduler(std::string(scheduler));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setPreferableBackend_int(cv::dnn::Net* instance, int backendId, ResultVoid* ocvrs_return) {
		try {
			instance->setPreferableBackend(backendId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setPreferableTarget_int(cv::dnn::Net* instance, int targetId, ResultVoid* ocvrs_return) {
		try {
			instance->setPreferableTarget(targetId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setInput_const__InputArrayR_const_StringR_double_const_ScalarR(cv::dnn::Net* instance, const cv::_InputArray* blob, const char* name, double scalefactor, const cv::Scalar* mean, ResultVoid* ocvrs_return) {
		try {
			instance->setInput(*blob, std::string(name), scalefactor, *mean);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setInput_const__InputArrayR(cv::dnn::Net* instance, const cv::_InputArray* blob, ResultVoid* ocvrs_return) {
		try {
			instance->setInput(*blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setParam_int_int_const_MatR(cv::dnn::Net* instance, int layer, int numParam, const cv::Mat* blob, ResultVoid* ocvrs_return) {
		try {
			instance->setParam(layer, numParam, *blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_setParam_const_StringR_int_const_MatR(cv::dnn::Net* instance, const char* layerName, int numParam, const cv::Mat* blob, ResultVoid* ocvrs_return) {
		try {
			instance->setParam(std::string(layerName), numParam, *blob);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getParam_const_int_int(const cv::dnn::Net* instance, int layer, int numParam, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getParam(layer, numParam);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getParam_const_int(const cv::dnn::Net* instance, int layer, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getParam(layer);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getParam_const_const_StringR_int(const cv::dnn::Net* instance, const char* layerName, int numParam, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getParam(std::string(layerName), numParam);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getParam_const_const_StringR(const cv::dnn::Net* instance, const char* layerName, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getParam(std::string(layerName));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getUnconnectedOutLayers_const(const cv::dnn::Net* instance, Result<std::vector<int>*>* ocvrs_return) {
		try {
			std::vector<int> ret = instance->getUnconnectedOutLayers();
			Ok(new std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getUnconnectedOutLayersNames_const(const cv::dnn::Net* instance, Result<std::vector<cv::String>*>* ocvrs_return) {
		try {
			std::vector<cv::String> ret = instance->getUnconnectedOutLayersNames();
			Ok(new std::vector<cv::String>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayersShapes_const_const_vectorLMatShapeGR_vectorLintGR_vectorLvectorLMatShapeGGR_vectorLvectorLMatShapeGGR(const cv::dnn::Net* instance, const std::vector<cv::dnn::MatShape>* netInputShapes, std::vector<int>* layersIds, std::vector<std::vector<cv::dnn::MatShape>>* inLayersShapes, std::vector<std::vector<cv::dnn::MatShape>>* outLayersShapes, ResultVoid* ocvrs_return) {
		try {
			instance->getLayersShapes(*netInputShapes, *layersIds, *inLayersShapes, *outLayersShapes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayersShapes_const_const_MatShapeR_vectorLintGR_vectorLvectorLMatShapeGGR_vectorLvectorLMatShapeGGR(const cv::dnn::Net* instance, const cv::dnn::MatShape* netInputShape, std::vector<int>* layersIds, std::vector<std::vector<cv::dnn::MatShape>>* inLayersShapes, std::vector<std::vector<cv::dnn::MatShape>>* outLayersShapes, ResultVoid* ocvrs_return) {
		try {
			instance->getLayersShapes(*netInputShape, *layersIds, *inLayersShapes, *outLayersShapes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayerShapes_const_const_MatShapeR_const_int_vectorLMatShapeGR_vectorLMatShapeGR(const cv::dnn::Net* instance, const cv::dnn::MatShape* netInputShape, const int layerId, std::vector<cv::dnn::MatShape>* inLayerShapes, std::vector<cv::dnn::MatShape>* outLayerShapes, ResultVoid* ocvrs_return) {
		try {
			instance->getLayerShapes(*netInputShape, layerId, *inLayerShapes, *outLayerShapes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayerShapes_const_const_vectorLMatShapeGR_const_int_vectorLMatShapeGR_vectorLMatShapeGR(const cv::dnn::Net* instance, const std::vector<cv::dnn::MatShape>* netInputShapes, const int layerId, std::vector<cv::dnn::MatShape>* inLayerShapes, std::vector<cv::dnn::MatShape>* outLayerShapes, ResultVoid* ocvrs_return) {
		try {
			instance->getLayerShapes(*netInputShapes, layerId, *inLayerShapes, *outLayerShapes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getFLOPS_const_const_vectorLMatShapeGR(const cv::dnn::Net* instance, const std::vector<cv::dnn::MatShape>* netInputShapes, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getFLOPS(*netInputShapes);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getFLOPS_const_const_MatShapeR(const cv::dnn::Net* instance, const cv::dnn::MatShape* netInputShape, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getFLOPS(*netInputShape);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getFLOPS_const_const_int_const_vectorLMatShapeGR(const cv::dnn::Net* instance, const int layerId, const std::vector<cv::dnn::MatShape>* netInputShapes, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getFLOPS(layerId, *netInputShapes);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getFLOPS_const_const_int_const_MatShapeR(const cv::dnn::Net* instance, const int layerId, const cv::dnn::MatShape* netInputShape, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getFLOPS(layerId, *netInputShape);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayerTypes_const_vectorLStringGR(const cv::dnn::Net* instance, std::vector<cv::String>* layersTypes, ResultVoid* ocvrs_return) {
		try {
			instance->getLayerTypes(*layersTypes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getLayersCount_const_const_StringR(const cv::dnn::Net* instance, const char* layerType, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLayersCount(std::string(layerType));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getMemoryConsumption_const_const_vectorLMatShapeGR_size_tR_size_tR(const cv::dnn::Net* instance, const std::vector<cv::dnn::MatShape>* netInputShapes, size_t* weights, size_t* blobs, ResultVoid* ocvrs_return) {
		try {
			instance->getMemoryConsumption(*netInputShapes, *weights, *blobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getMemoryConsumption_const_const_MatShapeR_size_tR_size_tR(const cv::dnn::Net* instance, const cv::dnn::MatShape* netInputShape, size_t* weights, size_t* blobs, ResultVoid* ocvrs_return) {
		try {
			instance->getMemoryConsumption(*netInputShape, *weights, *blobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getMemoryConsumption_const_const_int_const_vectorLMatShapeGR_size_tR_size_tR(const cv::dnn::Net* instance, const int layerId, const std::vector<cv::dnn::MatShape>* netInputShapes, size_t* weights, size_t* blobs, ResultVoid* ocvrs_return) {
		try {
			instance->getMemoryConsumption(layerId, *netInputShapes, *weights, *blobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getMemoryConsumption_const_const_int_const_MatShapeR_size_tR_size_tR(const cv::dnn::Net* instance, const int layerId, const cv::dnn::MatShape* netInputShape, size_t* weights, size_t* blobs, ResultVoid* ocvrs_return) {
		try {
			instance->getMemoryConsumption(layerId, *netInputShape, *weights, *blobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getMemoryConsumption_const_const_vectorLMatShapeGR_vectorLintGR_vectorLsize_tGR_vectorLsize_tGR(const cv::dnn::Net* instance, const std::vector<cv::dnn::MatShape>* netInputShapes, std::vector<int>* layerIds, std::vector<size_t>* weights, std::vector<size_t>* blobs, ResultVoid* ocvrs_return) {
		try {
			instance->getMemoryConsumption(*netInputShapes, *layerIds, *weights, *blobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getMemoryConsumption_const_const_MatShapeR_vectorLintGR_vectorLsize_tGR_vectorLsize_tGR(const cv::dnn::Net* instance, const cv::dnn::MatShape* netInputShape, std::vector<int>* layerIds, std::vector<size_t>* weights, std::vector<size_t>* blobs, ResultVoid* ocvrs_return) {
		try {
			instance->getMemoryConsumption(*netInputShape, *layerIds, *weights, *blobs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_enableFusion_bool(cv::dnn::Net* instance, bool fusion, ResultVoid* ocvrs_return) {
		try {
			instance->enableFusion(fusion);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_enableWinograd_bool(cv::dnn::Net* instance, bool useWinograd, ResultVoid* ocvrs_return) {
		try {
			instance->enableWinograd(useWinograd);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_Net_getPerfProfile_vectorLdoubleGR(cv::dnn::Net* instance, std::vector<double>* timings, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getPerfProfile(*timings);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::Net* cv_dnn_Net_implicitClone_const(const cv::dnn::Net* instance) {
			return new cv::dnn::Net(*instance);
	}
	
	void cv_dnn_Net_delete(cv::dnn::Net* instance) {
			delete instance;
	}
	
	void cv_dnn_NormalizeBBoxLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::NormalizeBBoxLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::NormalizeBBoxLayer> ret = cv::dnn::NormalizeBBoxLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::NormalizeBBoxLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::NormalizeBBoxLayer* cv_dnn_NormalizeBBoxLayer_defaultNew_const() {
			cv::dnn::NormalizeBBoxLayer* ret = new cv::dnn::NormalizeBBoxLayer();
			return ret;
	}
	
	float cv_dnn_NormalizeBBoxLayer_propPnorm_const(const cv::dnn::NormalizeBBoxLayer* instance) {
			float ret = instance->pnorm;
			return ret;
	}
	
	void cv_dnn_NormalizeBBoxLayer_propPnorm_const_float(cv::dnn::NormalizeBBoxLayer* instance, const float val) {
			instance->pnorm = val;
	}
	
	float cv_dnn_NormalizeBBoxLayer_propEpsilon_const(const cv::dnn::NormalizeBBoxLayer* instance) {
			float ret = instance->epsilon;
			return ret;
	}
	
	void cv_dnn_NormalizeBBoxLayer_propEpsilon_const_float(cv::dnn::NormalizeBBoxLayer* instance, const float val) {
			instance->epsilon = val;
	}
	
	bool cv_dnn_NormalizeBBoxLayer_propAcrossSpatial_const(const cv::dnn::NormalizeBBoxLayer* instance) {
			bool ret = instance->acrossSpatial;
			return ret;
	}
	
	void cv_dnn_NormalizeBBoxLayer_propAcrossSpatial_const_bool(cv::dnn::NormalizeBBoxLayer* instance, const bool val) {
			instance->acrossSpatial = val;
	}
	
	cv::Algorithm* cv_dnn_NormalizeBBoxLayer_to_Algorithm(cv::dnn::NormalizeBBoxLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_NormalizeBBoxLayer_to_Layer(cv::dnn::NormalizeBBoxLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_NormalizeBBoxLayer_delete(cv::dnn::NormalizeBBoxLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_NotLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::NotLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::NotLayer> ret = cv::dnn::NotLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::NotLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::NotLayer* cv_dnn_NotLayer_defaultNew_const() {
			cv::dnn::NotLayer* ret = new cv::dnn::NotLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_NotLayer_to_ActivationLayer(cv::dnn::NotLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_NotLayer_to_Algorithm(cv::dnn::NotLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_NotLayer_to_Layer(cv::dnn::NotLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_NotLayer_delete(cv::dnn::NotLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_PaddingLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::PaddingLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::PaddingLayer> ret = cv::dnn::PaddingLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::PaddingLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::PaddingLayer* cv_dnn_PaddingLayer_defaultNew_const() {
			cv::dnn::PaddingLayer* ret = new cv::dnn::PaddingLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_PaddingLayer_to_Algorithm(cv::dnn::PaddingLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_PaddingLayer_to_Layer(cv::dnn::PaddingLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_PaddingLayer_delete(cv::dnn::PaddingLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_PermuteLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::PermuteLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::PermuteLayer> ret = cv::dnn::PermuteLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::PermuteLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::PermuteLayer* cv_dnn_PermuteLayer_defaultNew_const() {
			cv::dnn::PermuteLayer* ret = new cv::dnn::PermuteLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_PermuteLayer_to_Algorithm(cv::dnn::PermuteLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_PermuteLayer_to_Layer(cv::dnn::PermuteLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_PermuteLayer_delete(cv::dnn::PermuteLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_PoolingLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::PoolingLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::PoolingLayer> ret = cv::dnn::PoolingLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::PoolingLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::PoolingLayer* cv_dnn_PoolingLayer_defaultNew_const() {
			cv::dnn::PoolingLayer* ret = new cv::dnn::PoolingLayer();
			return ret;
	}
	
	int cv_dnn_PoolingLayer_propType_const(const cv::dnn::PoolingLayer* instance) {
			int ret = instance->type;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propType_const_int(cv::dnn::PoolingLayer* instance, const int val) {
			instance->type = val;
	}
	
	std::vector<size_t>* cv_dnn_PoolingLayer_propKernel_size_const(const cv::dnn::PoolingLayer* instance) {
			std::vector<size_t> ret = instance->kernel_size;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_PoolingLayer_propKernel_size_const_vectorLsize_tG(cv::dnn::PoolingLayer* instance, const std::vector<size_t>* val) {
			instance->kernel_size = *val;
	}
	
	std::vector<size_t>* cv_dnn_PoolingLayer_propStrides_const(const cv::dnn::PoolingLayer* instance) {
			std::vector<size_t> ret = instance->strides;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_PoolingLayer_propStrides_const_vectorLsize_tG(cv::dnn::PoolingLayer* instance, const std::vector<size_t>* val) {
			instance->strides = *val;
	}
	
	std::vector<size_t>* cv_dnn_PoolingLayer_propPads_begin_const(const cv::dnn::PoolingLayer* instance) {
			std::vector<size_t> ret = instance->pads_begin;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_PoolingLayer_propPads_begin_const_vectorLsize_tG(cv::dnn::PoolingLayer* instance, const std::vector<size_t>* val) {
			instance->pads_begin = *val;
	}
	
	std::vector<size_t>* cv_dnn_PoolingLayer_propPads_end_const(const cv::dnn::PoolingLayer* instance) {
			std::vector<size_t> ret = instance->pads_end;
			return new std::vector<size_t>(ret);
	}
	
	void cv_dnn_PoolingLayer_propPads_end_const_vectorLsize_tG(cv::dnn::PoolingLayer* instance, const std::vector<size_t>* val) {
			instance->pads_end = *val;
	}
	
	bool cv_dnn_PoolingLayer_propGlobalPooling_const(const cv::dnn::PoolingLayer* instance) {
			bool ret = instance->globalPooling;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propGlobalPooling_const_bool(cv::dnn::PoolingLayer* instance, const bool val) {
			instance->globalPooling = val;
	}
	
	std::vector<bool>* cv_dnn_PoolingLayer_propIsGlobalPooling_const(const cv::dnn::PoolingLayer* instance) {
			std::vector<bool> ret = instance->isGlobalPooling;
			return new std::vector<bool>(ret);
	}
	
	void cv_dnn_PoolingLayer_propIsGlobalPooling_const_vectorLboolG(cv::dnn::PoolingLayer* instance, const std::vector<bool>* val) {
			instance->isGlobalPooling = *val;
	}
	
	bool cv_dnn_PoolingLayer_propComputeMaxIdx_const(const cv::dnn::PoolingLayer* instance) {
			bool ret = instance->computeMaxIdx;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propComputeMaxIdx_const_bool(cv::dnn::PoolingLayer* instance, const bool val) {
			instance->computeMaxIdx = val;
	}
	
	void* cv_dnn_PoolingLayer_propPadMode_const(const cv::dnn::PoolingLayer* instance) {
			cv::String ret = instance->padMode;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_PoolingLayer_propPadMode_const_String(cv::dnn::PoolingLayer* instance, const char* val) {
			instance->padMode = std::string(val);
	}
	
	bool cv_dnn_PoolingLayer_propCeilMode_const(const cv::dnn::PoolingLayer* instance) {
			bool ret = instance->ceilMode;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propCeilMode_const_bool(cv::dnn::PoolingLayer* instance, const bool val) {
			instance->ceilMode = val;
	}
	
	bool cv_dnn_PoolingLayer_propAvePoolPaddedArea_const(const cv::dnn::PoolingLayer* instance) {
			bool ret = instance->avePoolPaddedArea;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propAvePoolPaddedArea_const_bool(cv::dnn::PoolingLayer* instance, const bool val) {
			instance->avePoolPaddedArea = val;
	}
	
	void cv_dnn_PoolingLayer_propPooledSize_const(const cv::dnn::PoolingLayer* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->pooledSize;
			*ocvrs_return = ret;
	}
	
	void cv_dnn_PoolingLayer_propPooledSize_const_Size(cv::dnn::PoolingLayer* instance, const cv::Size* val) {
			instance->pooledSize = *val;
	}
	
	float cv_dnn_PoolingLayer_propSpatialScale_const(const cv::dnn::PoolingLayer* instance) {
			float ret = instance->spatialScale;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propSpatialScale_const_float(cv::dnn::PoolingLayer* instance, const float val) {
			instance->spatialScale = val;
	}
	
	int cv_dnn_PoolingLayer_propPsRoiOutChannels_const(const cv::dnn::PoolingLayer* instance) {
			int ret = instance->psRoiOutChannels;
			return ret;
	}
	
	void cv_dnn_PoolingLayer_propPsRoiOutChannels_const_int(cv::dnn::PoolingLayer* instance, const int val) {
			instance->psRoiOutChannels = val;
	}
	
	cv::Algorithm* cv_dnn_PoolingLayer_to_Algorithm(cv::dnn::PoolingLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_PoolingLayer_to_Layer(cv::dnn::PoolingLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_PoolingLayer_delete(cv::dnn::PoolingLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_PoolingLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::PoolingLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::PoolingLayerInt8> ret = cv::dnn::PoolingLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::PoolingLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::PoolingLayerInt8* cv_dnn_PoolingLayerInt8_defaultNew_const() {
			cv::dnn::PoolingLayerInt8* ret = new cv::dnn::PoolingLayerInt8();
			return ret;
	}
	
	int cv_dnn_PoolingLayerInt8_propInput_zp_const(const cv::dnn::PoolingLayerInt8* instance) {
			int ret = instance->input_zp;
			return ret;
	}
	
	void cv_dnn_PoolingLayerInt8_propInput_zp_const_int(cv::dnn::PoolingLayerInt8* instance, const int val) {
			instance->input_zp = val;
	}
	
	int cv_dnn_PoolingLayerInt8_propOutput_zp_const(const cv::dnn::PoolingLayerInt8* instance) {
			int ret = instance->output_zp;
			return ret;
	}
	
	void cv_dnn_PoolingLayerInt8_propOutput_zp_const_int(cv::dnn::PoolingLayerInt8* instance, const int val) {
			instance->output_zp = val;
	}
	
	float cv_dnn_PoolingLayerInt8_propInput_sc_const(const cv::dnn::PoolingLayerInt8* instance) {
			float ret = instance->input_sc;
			return ret;
	}
	
	void cv_dnn_PoolingLayerInt8_propInput_sc_const_float(cv::dnn::PoolingLayerInt8* instance, const float val) {
			instance->input_sc = val;
	}
	
	float cv_dnn_PoolingLayerInt8_propOutput_sc_const(const cv::dnn::PoolingLayerInt8* instance) {
			float ret = instance->output_sc;
			return ret;
	}
	
	void cv_dnn_PoolingLayerInt8_propOutput_sc_const_float(cv::dnn::PoolingLayerInt8* instance, const float val) {
			instance->output_sc = val;
	}
	
	cv::Algorithm* cv_dnn_PoolingLayerInt8_to_Algorithm(cv::dnn::PoolingLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_PoolingLayerInt8_to_Layer(cv::dnn::PoolingLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	cv::dnn::PoolingLayer* cv_dnn_PoolingLayerInt8_to_PoolingLayer(cv::dnn::PoolingLayerInt8* instance) {
			return dynamic_cast<cv::dnn::PoolingLayer*>(instance);
	}
	
	void cv_dnn_PoolingLayerInt8_delete(cv::dnn::PoolingLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_PowerLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::PowerLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::PowerLayer> ret = cv::dnn::PowerLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::PowerLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::PowerLayer* cv_dnn_PowerLayer_defaultNew_const() {
			cv::dnn::PowerLayer* ret = new cv::dnn::PowerLayer();
			return ret;
	}
	
	float cv_dnn_PowerLayer_propPower_const(const cv::dnn::PowerLayer* instance) {
			float ret = instance->power;
			return ret;
	}
	
	void cv_dnn_PowerLayer_propPower_const_float(cv::dnn::PowerLayer* instance, const float val) {
			instance->power = val;
	}
	
	float cv_dnn_PowerLayer_propScale_const(const cv::dnn::PowerLayer* instance) {
			float ret = instance->scale;
			return ret;
	}
	
	void cv_dnn_PowerLayer_propScale_const_float(cv::dnn::PowerLayer* instance, const float val) {
			instance->scale = val;
	}
	
	float cv_dnn_PowerLayer_propShift_const(const cv::dnn::PowerLayer* instance) {
			float ret = instance->shift;
			return ret;
	}
	
	void cv_dnn_PowerLayer_propShift_const_float(cv::dnn::PowerLayer* instance, const float val) {
			instance->shift = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_PowerLayer_to_ActivationLayer(cv::dnn::PowerLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_PowerLayer_to_Algorithm(cv::dnn::PowerLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_PowerLayer_to_Layer(cv::dnn::PowerLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_PowerLayer_delete(cv::dnn::PowerLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_PriorBoxLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::PriorBoxLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::PriorBoxLayer> ret = cv::dnn::PriorBoxLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::PriorBoxLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::PriorBoxLayer* cv_dnn_PriorBoxLayer_defaultNew_const() {
			cv::dnn::PriorBoxLayer* ret = new cv::dnn::PriorBoxLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_PriorBoxLayer_to_Algorithm(cv::dnn::PriorBoxLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_PriorBoxLayer_to_Layer(cv::dnn::PriorBoxLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_PriorBoxLayer_delete(cv::dnn::PriorBoxLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ProposalLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ProposalLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ProposalLayer> ret = cv::dnn::ProposalLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ProposalLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ProposalLayer* cv_dnn_ProposalLayer_defaultNew_const() {
			cv::dnn::ProposalLayer* ret = new cv::dnn::ProposalLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ProposalLayer_to_Algorithm(cv::dnn::ProposalLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ProposalLayer_to_Layer(cv::dnn::ProposalLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ProposalLayer_delete(cv::dnn::ProposalLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_QuantizeLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::QuantizeLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::QuantizeLayer> ret = cv::dnn::QuantizeLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::QuantizeLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::QuantizeLayer* cv_dnn_QuantizeLayer_defaultNew_const() {
			cv::dnn::QuantizeLayer* ret = new cv::dnn::QuantizeLayer();
			return ret;
	}
	
	std::vector<float>* cv_dnn_QuantizeLayer_propScales_const(const cv::dnn::QuantizeLayer* instance) {
			std::vector<float> ret = instance->scales;
			return new std::vector<float>(ret);
	}
	
	void cv_dnn_QuantizeLayer_propScales_const_vectorLfloatG(cv::dnn::QuantizeLayer* instance, const std::vector<float>* val) {
			instance->scales = *val;
	}
	
	std::vector<int>* cv_dnn_QuantizeLayer_propZeropoints_const(const cv::dnn::QuantizeLayer* instance) {
			std::vector<int> ret = instance->zeropoints;
			return new std::vector<int>(ret);
	}
	
	void cv_dnn_QuantizeLayer_propZeropoints_const_vectorLintG(cv::dnn::QuantizeLayer* instance, const std::vector<int>* val) {
			instance->zeropoints = *val;
	}
	
	cv::Algorithm* cv_dnn_QuantizeLayer_to_Algorithm(cv::dnn::QuantizeLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_QuantizeLayer_to_Layer(cv::dnn::QuantizeLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_QuantizeLayer_delete(cv::dnn::QuantizeLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_RNNLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::RNNLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::RNNLayer> ret = cv::dnn::RNNLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::RNNLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_RNNLayer_setWeights_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR(cv::dnn::RNNLayer* instance, const cv::Mat* Wxh, const cv::Mat* bh, const cv::Mat* Whh, const cv::Mat* Who, const cv::Mat* bo, ResultVoid* ocvrs_return) {
		try {
			instance->setWeights(*Wxh, *bh, *Whh, *Who, *bo);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_RNNLayer_setProduceHiddenOutput_bool(cv::dnn::RNNLayer* instance, bool produce, ResultVoid* ocvrs_return) {
		try {
			instance->setProduceHiddenOutput(produce);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_RNNLayer_setProduceHiddenOutput(cv::dnn::RNNLayer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setProduceHiddenOutput();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_dnn_RNNLayer_to_Algorithm(cv::dnn::RNNLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_RNNLayer_to_Layer(cv::dnn::RNNLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_RNNLayer_delete(cv::dnn::RNNLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ReLU6Layer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ReLU6Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ReLU6Layer> ret = cv::dnn::ReLU6Layer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ReLU6Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ReLU6Layer* cv_dnn_ReLU6Layer_defaultNew_const() {
			cv::dnn::ReLU6Layer* ret = new cv::dnn::ReLU6Layer();
			return ret;
	}
	
	float cv_dnn_ReLU6Layer_propMinValue_const(const cv::dnn::ReLU6Layer* instance) {
			float ret = instance->minValue;
			return ret;
	}
	
	void cv_dnn_ReLU6Layer_propMinValue_const_float(cv::dnn::ReLU6Layer* instance, const float val) {
			instance->minValue = val;
	}
	
	float cv_dnn_ReLU6Layer_propMaxValue_const(const cv::dnn::ReLU6Layer* instance) {
			float ret = instance->maxValue;
			return ret;
	}
	
	void cv_dnn_ReLU6Layer_propMaxValue_const_float(cv::dnn::ReLU6Layer* instance, const float val) {
			instance->maxValue = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ReLU6Layer_to_ActivationLayer(cv::dnn::ReLU6Layer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ReLU6Layer_to_Algorithm(cv::dnn::ReLU6Layer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ReLU6Layer_to_Layer(cv::dnn::ReLU6Layer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ReLU6Layer_delete(cv::dnn::ReLU6Layer* instance) {
			delete instance;
	}
	
	void cv_dnn_ReLULayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ReLULayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ReLULayer> ret = cv::dnn::ReLULayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ReLULayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ReLULayer* cv_dnn_ReLULayer_defaultNew_const() {
			cv::dnn::ReLULayer* ret = new cv::dnn::ReLULayer();
			return ret;
	}
	
	float cv_dnn_ReLULayer_propNegativeSlope_const(const cv::dnn::ReLULayer* instance) {
			float ret = instance->negativeSlope;
			return ret;
	}
	
	void cv_dnn_ReLULayer_propNegativeSlope_const_float(cv::dnn::ReLULayer* instance, const float val) {
			instance->negativeSlope = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ReLULayer_to_ActivationLayer(cv::dnn::ReLULayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ReLULayer_to_Algorithm(cv::dnn::ReLULayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ReLULayer_to_Layer(cv::dnn::ReLULayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ReLULayer_delete(cv::dnn::ReLULayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ReciprocalLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ReciprocalLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ReciprocalLayer> ret = cv::dnn::ReciprocalLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ReciprocalLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ReciprocalLayer* cv_dnn_ReciprocalLayer_defaultNew_const() {
			cv::dnn::ReciprocalLayer* ret = new cv::dnn::ReciprocalLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ReciprocalLayer_to_ActivationLayer(cv::dnn::ReciprocalLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ReciprocalLayer_to_Algorithm(cv::dnn::ReciprocalLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ReciprocalLayer_to_Layer(cv::dnn::ReciprocalLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ReciprocalLayer_delete(cv::dnn::ReciprocalLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ReduceLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ReduceLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ReduceLayer> ret = cv::dnn::ReduceLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ReduceLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ReduceLayer* cv_dnn_ReduceLayer_defaultNew_const() {
			cv::dnn::ReduceLayer* ret = new cv::dnn::ReduceLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ReduceLayer_to_Algorithm(cv::dnn::ReduceLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ReduceLayer_to_Layer(cv::dnn::ReduceLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ReduceLayer_delete(cv::dnn::ReduceLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_RegionLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::RegionLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::RegionLayer> ret = cv::dnn::RegionLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::RegionLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::RegionLayer* cv_dnn_RegionLayer_defaultNew_const() {
			cv::dnn::RegionLayer* ret = new cv::dnn::RegionLayer();
			return ret;
	}
	
	float cv_dnn_RegionLayer_propNmsThreshold_const(const cv::dnn::RegionLayer* instance) {
			float ret = instance->nmsThreshold;
			return ret;
	}
	
	void cv_dnn_RegionLayer_propNmsThreshold_const_float(cv::dnn::RegionLayer* instance, const float val) {
			instance->nmsThreshold = val;
	}
	
	cv::Algorithm* cv_dnn_RegionLayer_to_Algorithm(cv::dnn::RegionLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_RegionLayer_to_Layer(cv::dnn::RegionLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_RegionLayer_delete(cv::dnn::RegionLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ReorgLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ReorgLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ReorgLayer> ret = cv::dnn::ReorgLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ReorgLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ReorgLayer* cv_dnn_ReorgLayer_defaultNew_const() {
			cv::dnn::ReorgLayer* ret = new cv::dnn::ReorgLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ReorgLayer_to_Algorithm(cv::dnn::ReorgLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ReorgLayer_to_Layer(cv::dnn::ReorgLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ReorgLayer_delete(cv::dnn::ReorgLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_RequantizeLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::RequantizeLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::RequantizeLayer> ret = cv::dnn::RequantizeLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::RequantizeLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::RequantizeLayer* cv_dnn_RequantizeLayer_defaultNew_const() {
			cv::dnn::RequantizeLayer* ret = new cv::dnn::RequantizeLayer();
			return ret;
	}
	
	float cv_dnn_RequantizeLayer_propScale_const(const cv::dnn::RequantizeLayer* instance) {
			float ret = instance->scale;
			return ret;
	}
	
	void cv_dnn_RequantizeLayer_propScale_const_float(cv::dnn::RequantizeLayer* instance, const float val) {
			instance->scale = val;
	}
	
	float cv_dnn_RequantizeLayer_propShift_const(const cv::dnn::RequantizeLayer* instance) {
			float ret = instance->shift;
			return ret;
	}
	
	void cv_dnn_RequantizeLayer_propShift_const_float(cv::dnn::RequantizeLayer* instance, const float val) {
			instance->shift = val;
	}
	
	cv::Algorithm* cv_dnn_RequantizeLayer_to_Algorithm(cv::dnn::RequantizeLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_RequantizeLayer_to_Layer(cv::dnn::RequantizeLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_RequantizeLayer_delete(cv::dnn::RequantizeLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ReshapeLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ReshapeLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ReshapeLayer> ret = cv::dnn::ReshapeLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ReshapeLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ReshapeLayer* cv_dnn_ReshapeLayer_defaultNew_const() {
			cv::dnn::ReshapeLayer* ret = new cv::dnn::ReshapeLayer();
			return ret;
	}
	
	cv::dnn::MatShape* cv_dnn_ReshapeLayer_propNewShapeDesc_const(const cv::dnn::ReshapeLayer* instance) {
			cv::dnn::MatShape ret = instance->newShapeDesc;
			return new cv::dnn::MatShape(ret);
	}
	
	void cv_dnn_ReshapeLayer_propNewShapeDesc_const_MatShape(cv::dnn::ReshapeLayer* instance, const cv::dnn::MatShape* val) {
			instance->newShapeDesc = *val;
	}
	
	cv::Range* cv_dnn_ReshapeLayer_propNewShapeRange_const(const cv::dnn::ReshapeLayer* instance) {
			cv::Range ret = instance->newShapeRange;
			return new cv::Range(ret);
	}
	
	void cv_dnn_ReshapeLayer_propNewShapeRange_const_Range(cv::dnn::ReshapeLayer* instance, const cv::Range* val) {
			instance->newShapeRange = *val;
	}
	
	cv::Algorithm* cv_dnn_ReshapeLayer_to_Algorithm(cv::dnn::ReshapeLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ReshapeLayer_to_Layer(cv::dnn::ReshapeLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ReshapeLayer_delete(cv::dnn::ReshapeLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ResizeLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ResizeLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ResizeLayer> ret = cv::dnn::ResizeLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ResizeLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ResizeLayer* cv_dnn_ResizeLayer_defaultNew_const() {
			cv::dnn::ResizeLayer* ret = new cv::dnn::ResizeLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ResizeLayer_to_Algorithm(cv::dnn::ResizeLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ResizeLayer_to_Layer(cv::dnn::ResizeLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ResizeLayer_delete(cv::dnn::ResizeLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_RoundLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::RoundLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::RoundLayer> ret = cv::dnn::RoundLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::RoundLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::RoundLayer* cv_dnn_RoundLayer_defaultNew_const() {
			cv::dnn::RoundLayer* ret = new cv::dnn::RoundLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_RoundLayer_to_ActivationLayer(cv::dnn::RoundLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_RoundLayer_to_Algorithm(cv::dnn::RoundLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_RoundLayer_to_Layer(cv::dnn::RoundLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_RoundLayer_delete(cv::dnn::RoundLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ScaleLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ScaleLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ScaleLayer> ret = cv::dnn::ScaleLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ScaleLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ScaleLayer* cv_dnn_ScaleLayer_defaultNew_const() {
			cv::dnn::ScaleLayer* ret = new cv::dnn::ScaleLayer();
			return ret;
	}
	
	bool cv_dnn_ScaleLayer_propHasBias_const(const cv::dnn::ScaleLayer* instance) {
			bool ret = instance->hasBias;
			return ret;
	}
	
	void cv_dnn_ScaleLayer_propHasBias_const_bool(cv::dnn::ScaleLayer* instance, const bool val) {
			instance->hasBias = val;
	}
	
	int cv_dnn_ScaleLayer_propAxis_const(const cv::dnn::ScaleLayer* instance) {
			int ret = instance->axis;
			return ret;
	}
	
	void cv_dnn_ScaleLayer_propAxis_const_int(cv::dnn::ScaleLayer* instance, const int val) {
			instance->axis = val;
	}
	
	void* cv_dnn_ScaleLayer_propMode_const(const cv::dnn::ScaleLayer* instance) {
			cv::String ret = instance->mode;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_dnn_ScaleLayer_propMode_const_String(cv::dnn::ScaleLayer* instance, const char* val) {
			instance->mode = std::string(val);
	}
	
	cv::Algorithm* cv_dnn_ScaleLayer_to_Algorithm(cv::dnn::ScaleLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ScaleLayer_to_Layer(cv::dnn::ScaleLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ScaleLayer_delete(cv::dnn::ScaleLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ScaleLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ScaleLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ScaleLayerInt8> ret = cv::dnn::ScaleLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::ScaleLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ScaleLayerInt8* cv_dnn_ScaleLayerInt8_defaultNew_const() {
			cv::dnn::ScaleLayerInt8* ret = new cv::dnn::ScaleLayerInt8();
			return ret;
	}
	
	float cv_dnn_ScaleLayerInt8_propOutput_sc_const(const cv::dnn::ScaleLayerInt8* instance) {
			float ret = instance->output_sc;
			return ret;
	}
	
	void cv_dnn_ScaleLayerInt8_propOutput_sc_const_float(cv::dnn::ScaleLayerInt8* instance, const float val) {
			instance->output_sc = val;
	}
	
	int cv_dnn_ScaleLayerInt8_propOutput_zp_const(const cv::dnn::ScaleLayerInt8* instance) {
			int ret = instance->output_zp;
			return ret;
	}
	
	void cv_dnn_ScaleLayerInt8_propOutput_zp_const_int(cv::dnn::ScaleLayerInt8* instance, const int val) {
			instance->output_zp = val;
	}
	
	cv::Algorithm* cv_dnn_ScaleLayerInt8_to_Algorithm(cv::dnn::ScaleLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ScaleLayerInt8_to_Layer(cv::dnn::ScaleLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	cv::dnn::ScaleLayer* cv_dnn_ScaleLayerInt8_to_ScaleLayer(cv::dnn::ScaleLayerInt8* instance) {
			return dynamic_cast<cv::dnn::ScaleLayer*>(instance);
	}
	
	void cv_dnn_ScaleLayerInt8_delete(cv::dnn::ScaleLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_ScatterLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ScatterLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ScatterLayer> ret = cv::dnn::ScatterLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ScatterLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ScatterLayer* cv_dnn_ScatterLayer_defaultNew_const() {
			cv::dnn::ScatterLayer* ret = new cv::dnn::ScatterLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ScatterLayer_to_Algorithm(cv::dnn::ScatterLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ScatterLayer_to_Layer(cv::dnn::ScatterLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ScatterLayer_delete(cv::dnn::ScatterLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ScatterNDLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ScatterNDLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ScatterNDLayer> ret = cv::dnn::ScatterNDLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ScatterNDLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ScatterNDLayer* cv_dnn_ScatterNDLayer_defaultNew_const() {
			cv::dnn::ScatterNDLayer* ret = new cv::dnn::ScatterNDLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ScatterNDLayer_to_Algorithm(cv::dnn::ScatterNDLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ScatterNDLayer_to_Layer(cv::dnn::ScatterNDLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ScatterNDLayer_delete(cv::dnn::ScatterNDLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SegmentationModel_SegmentationModel_const_StringR_const_StringR(const char* model, const char* config, Result<cv::dnn::SegmentationModel*>* ocvrs_return) {
		try {
			cv::dnn::SegmentationModel* ret = new cv::dnn::SegmentationModel(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_SegmentationModel_SegmentationModel_const_StringR(const char* model, Result<cv::dnn::SegmentationModel*>* ocvrs_return) {
		try {
			cv::dnn::SegmentationModel* ret = new cv::dnn::SegmentationModel(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_SegmentationModel_SegmentationModel_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::SegmentationModel*>* ocvrs_return) {
		try {
			cv::dnn::SegmentationModel* ret = new cv::dnn::SegmentationModel(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_SegmentationModel_segment_const__InputArrayR_const__OutputArrayR(cv::dnn::SegmentationModel* instance, const cv::_InputArray* frame, const cv::_OutputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->segment(*frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SegmentationModel* cv_dnn_SegmentationModel_implicitClone_const(const cv::dnn::SegmentationModel* instance) {
			return new cv::dnn::SegmentationModel(*instance);
	}
	
	cv::dnn::Model* cv_dnn_SegmentationModel_to_Model(cv::dnn::SegmentationModel* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	void cv_dnn_SegmentationModel_delete(cv::dnn::SegmentationModel* instance) {
			delete instance;
	}
	
	void cv_dnn_SeluLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SeluLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SeluLayer> ret = cv::dnn::SeluLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SeluLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SeluLayer* cv_dnn_SeluLayer_defaultNew_const() {
			cv::dnn::SeluLayer* ret = new cv::dnn::SeluLayer();
			return ret;
	}
	
	float cv_dnn_SeluLayer_propAlpha_const(const cv::dnn::SeluLayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_SeluLayer_propAlpha_const_float(cv::dnn::SeluLayer* instance, const float val) {
			instance->alpha = val;
	}
	
	float cv_dnn_SeluLayer_propGamma_const(const cv::dnn::SeluLayer* instance) {
			float ret = instance->gamma;
			return ret;
	}
	
	void cv_dnn_SeluLayer_propGamma_const_float(cv::dnn::SeluLayer* instance, const float val) {
			instance->gamma = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SeluLayer_to_ActivationLayer(cv::dnn::SeluLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SeluLayer_to_Algorithm(cv::dnn::SeluLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SeluLayer_to_Layer(cv::dnn::SeluLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SeluLayer_delete(cv::dnn::SeluLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ShiftLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::ShiftLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ShiftLayer* cv_dnn_ShiftLayer_defaultNew_const() {
			cv::dnn::ShiftLayer* ret = new cv::dnn::ShiftLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ShiftLayer_to_Algorithm(cv::dnn::ShiftLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ShiftLayer_to_Layer(cv::dnn::ShiftLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ShiftLayer_delete(cv::dnn::ShiftLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ShiftLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::ShiftLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ShiftLayerInt8* cv_dnn_ShiftLayerInt8_defaultNew_const() {
			cv::dnn::ShiftLayerInt8* ret = new cv::dnn::ShiftLayerInt8();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_ShiftLayerInt8_to_Algorithm(cv::dnn::ShiftLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ShiftLayerInt8_to_Layer(cv::dnn::ShiftLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ShiftLayerInt8_delete(cv::dnn::ShiftLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_ShrinkLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ShrinkLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ShrinkLayer> ret = cv::dnn::ShrinkLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ShrinkLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ShrinkLayer* cv_dnn_ShrinkLayer_defaultNew_const() {
			cv::dnn::ShrinkLayer* ret = new cv::dnn::ShrinkLayer();
			return ret;
	}
	
	float cv_dnn_ShrinkLayer_propBias_const(const cv::dnn::ShrinkLayer* instance) {
			float ret = instance->bias;
			return ret;
	}
	
	void cv_dnn_ShrinkLayer_propBias_const_float(cv::dnn::ShrinkLayer* instance, const float val) {
			instance->bias = val;
	}
	
	float cv_dnn_ShrinkLayer_propLambd_const(const cv::dnn::ShrinkLayer* instance) {
			float ret = instance->lambd;
			return ret;
	}
	
	void cv_dnn_ShrinkLayer_propLambd_const_float(cv::dnn::ShrinkLayer* instance, const float val) {
			instance->lambd = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ShrinkLayer_to_ActivationLayer(cv::dnn::ShrinkLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ShrinkLayer_to_Algorithm(cv::dnn::ShrinkLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ShrinkLayer_to_Layer(cv::dnn::ShrinkLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ShrinkLayer_delete(cv::dnn::ShrinkLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_ShuffleChannelLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::Layer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::Layer> ret = cv::dnn::ShuffleChannelLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::Layer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ShuffleChannelLayer* cv_dnn_ShuffleChannelLayer_defaultNew_const() {
			cv::dnn::ShuffleChannelLayer* ret = new cv::dnn::ShuffleChannelLayer();
			return ret;
	}
	
	int cv_dnn_ShuffleChannelLayer_propGroup_const(const cv::dnn::ShuffleChannelLayer* instance) {
			int ret = instance->group;
			return ret;
	}
	
	void cv_dnn_ShuffleChannelLayer_propGroup_const_int(cv::dnn::ShuffleChannelLayer* instance, const int val) {
			instance->group = val;
	}
	
	cv::Algorithm* cv_dnn_ShuffleChannelLayer_to_Algorithm(cv::dnn::ShuffleChannelLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ShuffleChannelLayer_to_Layer(cv::dnn::ShuffleChannelLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ShuffleChannelLayer_delete(cv::dnn::ShuffleChannelLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SigmoidLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SigmoidLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SigmoidLayer> ret = cv::dnn::SigmoidLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SigmoidLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SigmoidLayer* cv_dnn_SigmoidLayer_defaultNew_const() {
			cv::dnn::SigmoidLayer* ret = new cv::dnn::SigmoidLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SigmoidLayer_to_ActivationLayer(cv::dnn::SigmoidLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SigmoidLayer_to_Algorithm(cv::dnn::SigmoidLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SigmoidLayer_to_Layer(cv::dnn::SigmoidLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SigmoidLayer_delete(cv::dnn::SigmoidLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SignLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SignLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SignLayer> ret = cv::dnn::SignLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SignLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SignLayer* cv_dnn_SignLayer_defaultNew_const() {
			cv::dnn::SignLayer* ret = new cv::dnn::SignLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SignLayer_to_ActivationLayer(cv::dnn::SignLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SignLayer_to_Algorithm(cv::dnn::SignLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SignLayer_to_Layer(cv::dnn::SignLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SignLayer_delete(cv::dnn::SignLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SinLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SinLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SinLayer> ret = cv::dnn::SinLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SinLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SinLayer* cv_dnn_SinLayer_defaultNew_const() {
			cv::dnn::SinLayer* ret = new cv::dnn::SinLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SinLayer_to_ActivationLayer(cv::dnn::SinLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SinLayer_to_Algorithm(cv::dnn::SinLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SinLayer_to_Layer(cv::dnn::SinLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SinLayer_delete(cv::dnn::SinLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SinhLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SinhLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SinhLayer> ret = cv::dnn::SinhLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SinhLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SinhLayer* cv_dnn_SinhLayer_defaultNew_const() {
			cv::dnn::SinhLayer* ret = new cv::dnn::SinhLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SinhLayer_to_ActivationLayer(cv::dnn::SinhLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SinhLayer_to_Algorithm(cv::dnn::SinhLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SinhLayer_to_Layer(cv::dnn::SinhLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SinhLayer_delete(cv::dnn::SinhLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SliceLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SliceLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SliceLayer> ret = cv::dnn::SliceLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SliceLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SliceLayer* cv_dnn_SliceLayer_defaultNew_const() {
			cv::dnn::SliceLayer* ret = new cv::dnn::SliceLayer();
			return ret;
	}
	
	std::vector<std::vector<cv::Range>>* cv_dnn_SliceLayer_propSliceRanges_const(const cv::dnn::SliceLayer* instance) {
			std::vector<std::vector<cv::Range>> ret = instance->sliceRanges;
			return new std::vector<std::vector<cv::Range>>(ret);
	}
	
	void cv_dnn_SliceLayer_propSliceRanges_const_vectorLvectorLRangeGG(cv::dnn::SliceLayer* instance, const std::vector<std::vector<cv::Range>>* val) {
			instance->sliceRanges = *val;
	}
	
	std::vector<std::vector<int>>* cv_dnn_SliceLayer_propSliceSteps_const(const cv::dnn::SliceLayer* instance) {
			std::vector<std::vector<int>> ret = instance->sliceSteps;
			return new std::vector<std::vector<int>>(ret);
	}
	
	void cv_dnn_SliceLayer_propSliceSteps_const_vectorLvectorLintGG(cv::dnn::SliceLayer* instance, const std::vector<std::vector<int>>* val) {
			instance->sliceSteps = *val;
	}
	
	int cv_dnn_SliceLayer_propAxis_const(const cv::dnn::SliceLayer* instance) {
			int ret = instance->axis;
			return ret;
	}
	
	void cv_dnn_SliceLayer_propAxis_const_int(cv::dnn::SliceLayer* instance, const int val) {
			instance->axis = val;
	}
	
	int cv_dnn_SliceLayer_propNum_split_const(const cv::dnn::SliceLayer* instance) {
			int ret = instance->num_split;
			return ret;
	}
	
	void cv_dnn_SliceLayer_propNum_split_const_int(cv::dnn::SliceLayer* instance, const int val) {
			instance->num_split = val;
	}
	
	cv::Algorithm* cv_dnn_SliceLayer_to_Algorithm(cv::dnn::SliceLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SliceLayer_to_Layer(cv::dnn::SliceLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SliceLayer_delete(cv::dnn::SliceLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SoftmaxLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SoftmaxLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SoftmaxLayer> ret = cv::dnn::SoftmaxLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SoftmaxLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SoftmaxLayer* cv_dnn_SoftmaxLayer_defaultNew_const() {
			cv::dnn::SoftmaxLayer* ret = new cv::dnn::SoftmaxLayer();
			return ret;
	}
	
	bool cv_dnn_SoftmaxLayer_propLogSoftMax_const(const cv::dnn::SoftmaxLayer* instance) {
			bool ret = instance->logSoftMax;
			return ret;
	}
	
	void cv_dnn_SoftmaxLayer_propLogSoftMax_const_bool(cv::dnn::SoftmaxLayer* instance, const bool val) {
			instance->logSoftMax = val;
	}
	
	cv::Algorithm* cv_dnn_SoftmaxLayer_to_Algorithm(cv::dnn::SoftmaxLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SoftmaxLayer_to_Layer(cv::dnn::SoftmaxLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SoftmaxLayer_delete(cv::dnn::SoftmaxLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SoftmaxLayerInt8_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SoftmaxLayerInt8>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SoftmaxLayerInt8> ret = cv::dnn::SoftmaxLayerInt8::create(*params);
			Ok(new cv::Ptr<cv::dnn::SoftmaxLayerInt8>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SoftmaxLayerInt8* cv_dnn_SoftmaxLayerInt8_defaultNew_const() {
			cv::dnn::SoftmaxLayerInt8* ret = new cv::dnn::SoftmaxLayerInt8();
			return ret;
	}
	
	float cv_dnn_SoftmaxLayerInt8_propOutput_sc_const(const cv::dnn::SoftmaxLayerInt8* instance) {
			float ret = instance->output_sc;
			return ret;
	}
	
	void cv_dnn_SoftmaxLayerInt8_propOutput_sc_const_float(cv::dnn::SoftmaxLayerInt8* instance, const float val) {
			instance->output_sc = val;
	}
	
	int cv_dnn_SoftmaxLayerInt8_propOutput_zp_const(const cv::dnn::SoftmaxLayerInt8* instance) {
			int ret = instance->output_zp;
			return ret;
	}
	
	void cv_dnn_SoftmaxLayerInt8_propOutput_zp_const_int(cv::dnn::SoftmaxLayerInt8* instance, const int val) {
			instance->output_zp = val;
	}
	
	cv::Algorithm* cv_dnn_SoftmaxLayerInt8_to_Algorithm(cv::dnn::SoftmaxLayerInt8* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SoftmaxLayerInt8_to_Layer(cv::dnn::SoftmaxLayerInt8* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	cv::dnn::SoftmaxLayer* cv_dnn_SoftmaxLayerInt8_to_SoftmaxLayer(cv::dnn::SoftmaxLayerInt8* instance) {
			return dynamic_cast<cv::dnn::SoftmaxLayer*>(instance);
	}
	
	void cv_dnn_SoftmaxLayerInt8_delete(cv::dnn::SoftmaxLayerInt8* instance) {
			delete instance;
	}
	
	void cv_dnn_SoftplusLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SoftplusLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SoftplusLayer> ret = cv::dnn::SoftplusLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SoftplusLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SoftplusLayer* cv_dnn_SoftplusLayer_defaultNew_const() {
			cv::dnn::SoftplusLayer* ret = new cv::dnn::SoftplusLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SoftplusLayer_to_ActivationLayer(cv::dnn::SoftplusLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SoftplusLayer_to_Algorithm(cv::dnn::SoftplusLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SoftplusLayer_to_Layer(cv::dnn::SoftplusLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SoftplusLayer_delete(cv::dnn::SoftplusLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SoftsignLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SoftsignLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SoftsignLayer> ret = cv::dnn::SoftsignLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SoftsignLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SoftsignLayer* cv_dnn_SoftsignLayer_defaultNew_const() {
			cv::dnn::SoftsignLayer* ret = new cv::dnn::SoftsignLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SoftsignLayer_to_ActivationLayer(cv::dnn::SoftsignLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SoftsignLayer_to_Algorithm(cv::dnn::SoftsignLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SoftsignLayer_to_Layer(cv::dnn::SoftsignLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SoftsignLayer_delete(cv::dnn::SoftsignLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SpaceToDepthLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SpaceToDepthLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SpaceToDepthLayer> ret = cv::dnn::SpaceToDepthLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SpaceToDepthLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SpaceToDepthLayer* cv_dnn_SpaceToDepthLayer_defaultNew_const() {
			cv::dnn::SpaceToDepthLayer* ret = new cv::dnn::SpaceToDepthLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_SpaceToDepthLayer_to_Algorithm(cv::dnn::SpaceToDepthLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SpaceToDepthLayer_to_Layer(cv::dnn::SpaceToDepthLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SpaceToDepthLayer_delete(cv::dnn::SpaceToDepthLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SplitLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SplitLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SplitLayer> ret = cv::dnn::SplitLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SplitLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SplitLayer* cv_dnn_SplitLayer_defaultNew_const() {
			cv::dnn::SplitLayer* ret = new cv::dnn::SplitLayer();
			return ret;
	}
	
	int cv_dnn_SplitLayer_propOutputsCount_const(const cv::dnn::SplitLayer* instance) {
			int ret = instance->outputsCount;
			return ret;
	}
	
	void cv_dnn_SplitLayer_propOutputsCount_const_int(cv::dnn::SplitLayer* instance, const int val) {
			instance->outputsCount = val;
	}
	
	cv::Algorithm* cv_dnn_SplitLayer_to_Algorithm(cv::dnn::SplitLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SplitLayer_to_Layer(cv::dnn::SplitLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SplitLayer_delete(cv::dnn::SplitLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SqrtLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SqrtLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SqrtLayer> ret = cv::dnn::SqrtLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SqrtLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SqrtLayer* cv_dnn_SqrtLayer_defaultNew_const() {
			cv::dnn::SqrtLayer* ret = new cv::dnn::SqrtLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SqrtLayer_to_ActivationLayer(cv::dnn::SqrtLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SqrtLayer_to_Algorithm(cv::dnn::SqrtLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SqrtLayer_to_Layer(cv::dnn::SqrtLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SqrtLayer_delete(cv::dnn::SqrtLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_SwishLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::SwishLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::SwishLayer> ret = cv::dnn::SwishLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::SwishLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::SwishLayer* cv_dnn_SwishLayer_defaultNew_const() {
			cv::dnn::SwishLayer* ret = new cv::dnn::SwishLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_SwishLayer_to_ActivationLayer(cv::dnn::SwishLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_SwishLayer_to_Algorithm(cv::dnn::SwishLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_SwishLayer_to_Layer(cv::dnn::SwishLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_SwishLayer_delete(cv::dnn::SwishLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_TanHLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::TanHLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::TanHLayer> ret = cv::dnn::TanHLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::TanHLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TanHLayer* cv_dnn_TanHLayer_defaultNew_const() {
			cv::dnn::TanHLayer* ret = new cv::dnn::TanHLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_TanHLayer_to_ActivationLayer(cv::dnn::TanHLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_TanHLayer_to_Algorithm(cv::dnn::TanHLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_TanHLayer_to_Layer(cv::dnn::TanHLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_TanHLayer_delete(cv::dnn::TanHLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_TanLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::TanLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::TanLayer> ret = cv::dnn::TanLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::TanLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TanLayer* cv_dnn_TanLayer_defaultNew_const() {
			cv::dnn::TanLayer* ret = new cv::dnn::TanLayer();
			return ret;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_TanLayer_to_ActivationLayer(cv::dnn::TanLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_TanLayer_to_Algorithm(cv::dnn::TanLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_TanLayer_to_Layer(cv::dnn::TanLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_TanLayer_delete(cv::dnn::TanLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_TextDetectionModel_detect_const_const__InputArrayR_vectorLvectorLPointGGR_vectorLfloatGR(const cv::dnn::TextDetectionModel* instance, const cv::_InputArray* frame, std::vector<std::vector<cv::Point>>* detections, std::vector<float>* confidences, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*frame, *detections, *confidences);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_detect_const_const__InputArrayR_vectorLvectorLPointGGR(const cv::dnn::TextDetectionModel* instance, const cv::_InputArray* frame, std::vector<std::vector<cv::Point>>* detections, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*frame, *detections);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_detectTextRectangles_const_const__InputArrayR_vectorLRotatedRectGR_vectorLfloatGR(const cv::dnn::TextDetectionModel* instance, const cv::_InputArray* frame, std::vector<cv::RotatedRect>* detections, std::vector<float>* confidences, ResultVoid* ocvrs_return) {
		try {
			instance->detectTextRectangles(*frame, *detections, *confidences);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_detectTextRectangles_const_const__InputArrayR_vectorLRotatedRectGR(const cv::dnn::TextDetectionModel* instance, const cv::_InputArray* frame, std::vector<cv::RotatedRect>* detections, ResultVoid* ocvrs_return) {
		try {
			instance->detectTextRectangles(*frame, *detections);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::Model* cv_dnn_TextDetectionModel_to_Model(cv::dnn::TextDetectionModel* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	void cv_dnn_TextDetectionModel_delete(cv::dnn::TextDetectionModel* instance) {
			delete instance;
	}
	
	void cv_dnn_TextDetectionModel_DB_TextDetectionModel_DB(Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB* ret = new cv::dnn::TextDetectionModel_DB();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_TextDetectionModel_DB_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB* ret = new cv::dnn::TextDetectionModel_DB(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_TextDetectionModel_DB_const_stringR_const_stringR(const char* model, const char* config, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB* ret = new cv::dnn::TextDetectionModel_DB(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_TextDetectionModel_DB_const_stringR(const char* model, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB* ret = new cv::dnn::TextDetectionModel_DB(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_setBinaryThreshold_float(cv::dnn::TextDetectionModel_DB* instance, float binaryThreshold, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB ret = instance->setBinaryThreshold(binaryThreshold);
			Ok(new cv::dnn::TextDetectionModel_DB(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_getBinaryThreshold_const(const cv::dnn::TextDetectionModel_DB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getBinaryThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_setPolygonThreshold_float(cv::dnn::TextDetectionModel_DB* instance, float polygonThreshold, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB ret = instance->setPolygonThreshold(polygonThreshold);
			Ok(new cv::dnn::TextDetectionModel_DB(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_getPolygonThreshold_const(const cv::dnn::TextDetectionModel_DB* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getPolygonThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_setUnclipRatio_double(cv::dnn::TextDetectionModel_DB* instance, double unclipRatio, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB ret = instance->setUnclipRatio(unclipRatio);
			Ok(new cv::dnn::TextDetectionModel_DB(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_getUnclipRatio_const(const cv::dnn::TextDetectionModel_DB* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getUnclipRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_setMaxCandidates_int(cv::dnn::TextDetectionModel_DB* instance, int maxCandidates, Result<cv::dnn::TextDetectionModel_DB*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_DB ret = instance->setMaxCandidates(maxCandidates);
			Ok(new cv::dnn::TextDetectionModel_DB(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_DB_getMaxCandidates_const(const cv::dnn::TextDetectionModel_DB* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxCandidates();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TextDetectionModel_DB* cv_dnn_TextDetectionModel_DB_implicitClone_const(const cv::dnn::TextDetectionModel_DB* instance) {
			return new cv::dnn::TextDetectionModel_DB(*instance);
	}
	
	cv::dnn::Model* cv_dnn_TextDetectionModel_DB_to_Model(cv::dnn::TextDetectionModel_DB* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	cv::dnn::TextDetectionModel* cv_dnn_TextDetectionModel_DB_to_TextDetectionModel(cv::dnn::TextDetectionModel_DB* instance) {
			return dynamic_cast<cv::dnn::TextDetectionModel*>(instance);
	}
	
	void cv_dnn_TextDetectionModel_DB_delete(cv::dnn::TextDetectionModel_DB* instance) {
			delete instance;
	}
	
	void cv_dnn_TextDetectionModel_EAST_TextDetectionModel_EAST(Result<cv::dnn::TextDetectionModel_EAST*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_EAST* ret = new cv::dnn::TextDetectionModel_EAST();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_TextDetectionModel_EAST_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::TextDetectionModel_EAST*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_EAST* ret = new cv::dnn::TextDetectionModel_EAST(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_TextDetectionModel_EAST_const_stringR_const_stringR(const char* model, const char* config, Result<cv::dnn::TextDetectionModel_EAST*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_EAST* ret = new cv::dnn::TextDetectionModel_EAST(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_TextDetectionModel_EAST_const_stringR(const char* model, Result<cv::dnn::TextDetectionModel_EAST*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_EAST* ret = new cv::dnn::TextDetectionModel_EAST(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_setConfidenceThreshold_float(cv::dnn::TextDetectionModel_EAST* instance, float confThreshold, Result<cv::dnn::TextDetectionModel_EAST*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_EAST ret = instance->setConfidenceThreshold(confThreshold);
			Ok(new cv::dnn::TextDetectionModel_EAST(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_getConfidenceThreshold_const(const cv::dnn::TextDetectionModel_EAST* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getConfidenceThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_setNMSThreshold_float(cv::dnn::TextDetectionModel_EAST* instance, float nmsThreshold, Result<cv::dnn::TextDetectionModel_EAST*>* ocvrs_return) {
		try {
			cv::dnn::TextDetectionModel_EAST ret = instance->setNMSThreshold(nmsThreshold);
			Ok(new cv::dnn::TextDetectionModel_EAST(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextDetectionModel_EAST_getNMSThreshold_const(const cv::dnn::TextDetectionModel_EAST* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getNMSThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TextDetectionModel_EAST* cv_dnn_TextDetectionModel_EAST_implicitClone_const(const cv::dnn::TextDetectionModel_EAST* instance) {
			return new cv::dnn::TextDetectionModel_EAST(*instance);
	}
	
	cv::dnn::Model* cv_dnn_TextDetectionModel_EAST_to_Model(cv::dnn::TextDetectionModel_EAST* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	cv::dnn::TextDetectionModel* cv_dnn_TextDetectionModel_EAST_to_TextDetectionModel(cv::dnn::TextDetectionModel_EAST* instance) {
			return dynamic_cast<cv::dnn::TextDetectionModel*>(instance);
	}
	
	void cv_dnn_TextDetectionModel_EAST_delete(cv::dnn::TextDetectionModel_EAST* instance) {
			delete instance;
	}
	
	void cv_dnn_TextRecognitionModel_TextRecognitionModel(Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel* ret = new cv::dnn::TextRecognitionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_TextRecognitionModel_const_NetR(const cv::dnn::Net* network, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel* ret = new cv::dnn::TextRecognitionModel(*network);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_TextRecognitionModel_const_stringR_const_stringR(const char* model, const char* config, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel* ret = new cv::dnn::TextRecognitionModel(std::string(model), std::string(config));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_TextRecognitionModel_const_stringR(const char* model, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel* ret = new cv::dnn::TextRecognitionModel(std::string(model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_setDecodeType_const_stringR(cv::dnn::TextRecognitionModel* instance, const char* decodeType, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel ret = instance->setDecodeType(std::string(decodeType));
			Ok(new cv::dnn::TextRecognitionModel(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_getDecodeType_const(const cv::dnn::TextRecognitionModel* instance, Result<void*>* ocvrs_return) {
		try {
			const std::string ret = instance->getDecodeType();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_setDecodeOptsCTCPrefixBeamSearch_int_int(cv::dnn::TextRecognitionModel* instance, int beamSize, int vocPruneSize, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel ret = instance->setDecodeOptsCTCPrefixBeamSearch(beamSize, vocPruneSize);
			Ok(new cv::dnn::TextRecognitionModel(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_setDecodeOptsCTCPrefixBeamSearch_int(cv::dnn::TextRecognitionModel* instance, int beamSize, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel ret = instance->setDecodeOptsCTCPrefixBeamSearch(beamSize);
			Ok(new cv::dnn::TextRecognitionModel(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_setVocabulary_const_vectorLstringGR(cv::dnn::TextRecognitionModel* instance, const std::vector<std::string>* vocabulary, Result<cv::dnn::TextRecognitionModel*>* ocvrs_return) {
		try {
			cv::dnn::TextRecognitionModel ret = instance->setVocabulary(*vocabulary);
			Ok(new cv::dnn::TextRecognitionModel(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_getVocabulary_const(const cv::dnn::TextRecognitionModel* instance, Result<std::vector<std::string>*>* ocvrs_return) {
		try {
			const std::vector<std::string> ret = instance->getVocabulary();
			Ok(new const std::vector<std::string>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_recognize_const_const__InputArrayR(const cv::dnn::TextRecognitionModel* instance, const cv::_InputArray* frame, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->recognize(*frame);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn_TextRecognitionModel_recognize_const_const__InputArrayR_const__InputArrayR_vectorLstringGR(const cv::dnn::TextRecognitionModel* instance, const cv::_InputArray* frame, const cv::_InputArray* roiRects, std::vector<std::string>* results, ResultVoid* ocvrs_return) {
		try {
			instance->recognize(*frame, *roiRects, *results);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TextRecognitionModel* cv_dnn_TextRecognitionModel_implicitClone_const(const cv::dnn::TextRecognitionModel* instance) {
			return new cv::dnn::TextRecognitionModel(*instance);
	}
	
	cv::dnn::Model* cv_dnn_TextRecognitionModel_to_Model(cv::dnn::TextRecognitionModel* instance) {
			return dynamic_cast<cv::dnn::Model*>(instance);
	}
	
	void cv_dnn_TextRecognitionModel_delete(cv::dnn::TextRecognitionModel* instance) {
			delete instance;
	}
	
	void cv_dnn_ThresholdedReluLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::ThresholdedReluLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::ThresholdedReluLayer> ret = cv::dnn::ThresholdedReluLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::ThresholdedReluLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::ThresholdedReluLayer* cv_dnn_ThresholdedReluLayer_defaultNew_const() {
			cv::dnn::ThresholdedReluLayer* ret = new cv::dnn::ThresholdedReluLayer();
			return ret;
	}
	
	float cv_dnn_ThresholdedReluLayer_propAlpha_const(const cv::dnn::ThresholdedReluLayer* instance) {
			float ret = instance->alpha;
			return ret;
	}
	
	void cv_dnn_ThresholdedReluLayer_propAlpha_const_float(cv::dnn::ThresholdedReluLayer* instance, const float val) {
			instance->alpha = val;
	}
	
	cv::dnn::ActivationLayer* cv_dnn_ThresholdedReluLayer_to_ActivationLayer(cv::dnn::ThresholdedReluLayer* instance) {
			return dynamic_cast<cv::dnn::ActivationLayer*>(instance);
	}
	
	cv::Algorithm* cv_dnn_ThresholdedReluLayer_to_Algorithm(cv::dnn::ThresholdedReluLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_ThresholdedReluLayer_to_Layer(cv::dnn::ThresholdedReluLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_ThresholdedReluLayer_delete(cv::dnn::ThresholdedReluLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_TileLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::TileLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::TileLayer> ret = cv::dnn::TileLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::TileLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TileLayer* cv_dnn_TileLayer_defaultNew_const() {
			cv::dnn::TileLayer* ret = new cv::dnn::TileLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_TileLayer_to_Algorithm(cv::dnn::TileLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_TileLayer_to_Layer(cv::dnn::TileLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_TileLayer_delete(cv::dnn::TileLayer* instance) {
			delete instance;
	}
	
	void cv_dnn_TopKLayer_create_const_LayerParamsR(const cv::dnn::LayerParams* params, Result<cv::Ptr<cv::dnn::TopKLayer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dnn::TopKLayer> ret = cv::dnn::TopKLayer::create(*params);
			Ok(new cv::Ptr<cv::dnn::TopKLayer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::dnn::TopKLayer* cv_dnn_TopKLayer_defaultNew_const() {
			cv::dnn::TopKLayer* ret = new cv::dnn::TopKLayer();
			return ret;
	}
	
	cv::Algorithm* cv_dnn_TopKLayer_to_Algorithm(cv::dnn::TopKLayer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::dnn::Layer* cv_dnn_TopKLayer_to_Layer(cv::dnn::TopKLayer* instance) {
			return dynamic_cast<cv::dnn::Layer*>(instance);
	}
	
	void cv_dnn_TopKLayer_delete(cv::dnn::TopKLayer* instance) {
			delete instance;
	}
	
	void cv_dnn__Range__Range_const_RangeR(const cv::Range* r, Result<cv::dnn::_Range*>* ocvrs_return) {
		try {
			cv::dnn::_Range* ret = new cv::dnn::_Range(*r);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn__Range__Range_int_int(int start_, int size_, Result<cv::dnn::_Range*>* ocvrs_return) {
		try {
			cv::dnn::_Range* ret = new cv::dnn::_Range(start_, size_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dnn__Range__Range_int(int start_, Result<cv::dnn::_Range*>* ocvrs_return) {
		try {
			cv::dnn::_Range* ret = new cv::dnn::_Range(start_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Range* cv_dnn__Range_to_Range(cv::dnn::_Range* instance) {
			return dynamic_cast<cv::Range*>(instance);
	}
	
	void cv_dnn__Range_delete(cv::dnn::_Range* instance) {
			delete instance;
	}
	
}
