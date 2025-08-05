extern "C" {
	const cv::ccalib::CustomPattern* cv_PtrLcv_ccalib_CustomPatternG_getInnerPtr_const(const cv::Ptr<cv::ccalib::CustomPattern>* instance) {
			return instance->get();
	}
	
	cv::ccalib::CustomPattern* cv_PtrLcv_ccalib_CustomPatternG_getInnerPtrMut(cv::Ptr<cv::ccalib::CustomPattern>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_ccalib_CustomPatternG_delete(cv::Ptr<cv::ccalib::CustomPattern>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_ccalib_CustomPatternG_to_PtrOfAlgorithm(cv::Ptr<cv::ccalib::CustomPattern>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
	cv::Ptr<cv::ccalib::CustomPattern>* cv_PtrLcv_ccalib_CustomPatternG_new_const_CustomPattern(cv::ccalib::CustomPattern* val) {
			return new cv::Ptr<cv::ccalib::CustomPattern>(val);
	}
	
}

