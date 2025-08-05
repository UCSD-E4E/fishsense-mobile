extern "C" {
	const cv::sfm::BaseSFM* cv_PtrLcv_sfm_BaseSFMG_getInnerPtr_const(const cv::Ptr<cv::sfm::BaseSFM>* instance) {
			return instance->get();
	}
	
	cv::sfm::BaseSFM* cv_PtrLcv_sfm_BaseSFMG_getInnerPtrMut(cv::Ptr<cv::sfm::BaseSFM>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_sfm_BaseSFMG_delete(cv::Ptr<cv::sfm::BaseSFM>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::sfm::SFMLibmvEuclideanReconstruction* cv_PtrLcv_sfm_SFMLibmvEuclideanReconstructionG_getInnerPtr_const(const cv::Ptr<cv::sfm::SFMLibmvEuclideanReconstruction>* instance) {
			return instance->get();
	}
	
	cv::sfm::SFMLibmvEuclideanReconstruction* cv_PtrLcv_sfm_SFMLibmvEuclideanReconstructionG_getInnerPtrMut(cv::Ptr<cv::sfm::SFMLibmvEuclideanReconstruction>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_sfm_SFMLibmvEuclideanReconstructionG_delete(cv::Ptr<cv::sfm::SFMLibmvEuclideanReconstruction>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::sfm::BaseSFM>* cv_PtrLcv_sfm_SFMLibmvEuclideanReconstructionG_to_PtrOfBaseSFM(cv::Ptr<cv::sfm::SFMLibmvEuclideanReconstruction>* instance) {
			return new cv::Ptr<cv::sfm::BaseSFM>(instance->dynamicCast<cv::sfm::BaseSFM>());
	}
	
}

