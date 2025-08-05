extern "C" {
	const cv::hfs::HfsSegment* cv_PtrLcv_hfs_HfsSegmentG_getInnerPtr_const(const cv::Ptr<cv::hfs::HfsSegment>* instance) {
			return instance->get();
	}
	
	cv::hfs::HfsSegment* cv_PtrLcv_hfs_HfsSegmentG_getInnerPtrMut(cv::Ptr<cv::hfs::HfsSegment>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_hfs_HfsSegmentG_delete(cv::Ptr<cv::hfs::HfsSegment>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_hfs_HfsSegmentG_to_PtrOfAlgorithm(cv::Ptr<cv::hfs::HfsSegment>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
}

