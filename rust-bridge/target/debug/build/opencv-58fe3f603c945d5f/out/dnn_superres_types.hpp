extern "C" {
	const cv::dnn_superres::DnnSuperResImpl* cv_PtrLcv_dnn_superres_DnnSuperResImplG_getInnerPtr_const(const cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* instance) {
			return instance->get();
	}
	
	cv::dnn_superres::DnnSuperResImpl* cv_PtrLcv_dnn_superres_DnnSuperResImplG_getInnerPtrMut(cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_dnn_superres_DnnSuperResImplG_delete(cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::dnn_superres::DnnSuperResImpl>* cv_PtrLcv_dnn_superres_DnnSuperResImplG_new_const_DnnSuperResImpl(cv::dnn_superres::DnnSuperResImpl* val) {
			return new cv::Ptr<cv::dnn_superres::DnnSuperResImpl>(val);
	}
	
}

