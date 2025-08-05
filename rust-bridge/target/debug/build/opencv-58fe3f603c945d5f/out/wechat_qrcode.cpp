#include "ocvrs_common.hpp"
#include <opencv2/wechat_qrcode.hpp>
#include "wechat_qrcode_types.hpp"

extern "C" {
	void cv_wechat_qrcode_WeChatQRCode_WeChatQRCode_const_stringR_const_stringR_const_stringR_const_stringR(const char* detector_prototxt_path, const char* detector_caffe_model_path, const char* super_resolution_prototxt_path, const char* super_resolution_caffe_model_path, Result<cv::wechat_qrcode::WeChatQRCode*>* ocvrs_return) {
		try {
			cv::wechat_qrcode::WeChatQRCode* ret = new cv::wechat_qrcode::WeChatQRCode(std::string(detector_prototxt_path), std::string(detector_caffe_model_path), std::string(super_resolution_prototxt_path), std::string(super_resolution_caffe_model_path));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_wechat_qrcode_WeChatQRCode_WeChatQRCode(Result<cv::wechat_qrcode::WeChatQRCode*>* ocvrs_return) {
		try {
			cv::wechat_qrcode::WeChatQRCode* ret = new cv::wechat_qrcode::WeChatQRCode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_wechat_qrcode_WeChatQRCode_detectAndDecode_const__InputArrayR_const__OutputArrayR(cv::wechat_qrcode::WeChatQRCode* instance, const cv::_InputArray* img, const cv::_OutputArray* points, Result<std::vector<std::string>*>* ocvrs_return) {
		try {
			std::vector<std::string> ret = instance->detectAndDecode(*img, *points);
			Ok(new std::vector<std::string>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_wechat_qrcode_WeChatQRCode_detectAndDecode_const__InputArrayR(cv::wechat_qrcode::WeChatQRCode* instance, const cv::_InputArray* img, Result<std::vector<std::string>*>* ocvrs_return) {
		try {
			std::vector<std::string> ret = instance->detectAndDecode(*img);
			Ok(new std::vector<std::string>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_wechat_qrcode_WeChatQRCode_setScaleFactor_float(cv::wechat_qrcode::WeChatQRCode* instance, float _scalingFactor, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(_scalingFactor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_wechat_qrcode_WeChatQRCode_getScaleFactor(cv::wechat_qrcode::WeChatQRCode* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_wechat_qrcode_WeChatQRCode_delete(cv::wechat_qrcode::WeChatQRCode* instance) {
			delete instance;
	}
	
}
