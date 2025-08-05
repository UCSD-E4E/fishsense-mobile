#include "ocvrs_common.hpp"
#include <opencv2/xobjdetect.hpp>
#include "xobjdetect_types.hpp"

extern "C" {
	void cv_xobjdetect_WBDetector_read_const_FileNodeR(cv::xobjdetect::WBDetector* instance, const cv::FileNode* node, ResultVoid* ocvrs_return) {
		try {
			instance->read(*node);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xobjdetect_WBDetector_write_const_FileStorageR(const cv::xobjdetect::WBDetector* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xobjdetect_WBDetector_train_const_stringR_const_stringR(cv::xobjdetect::WBDetector* instance, const char* pos_samples, const char* neg_imgs, ResultVoid* ocvrs_return) {
		try {
			instance->train(std::string(pos_samples), std::string(neg_imgs));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xobjdetect_WBDetector_detect_const_MatR_vectorLRectGR_vectorLdoubleGR(cv::xobjdetect::WBDetector* instance, const cv::Mat* img, std::vector<cv::Rect>* bboxes, std::vector<double>* confidences, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*img, *bboxes, *confidences);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xobjdetect_WBDetector_create(Result<cv::Ptr<cv::xobjdetect::WBDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xobjdetect::WBDetector> ret = cv::xobjdetect::WBDetector::create();
			Ok(new cv::Ptr<cv::xobjdetect::WBDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xobjdetect_WBDetector_delete(cv::xobjdetect::WBDetector* instance) {
			delete instance;
	}
	
}
