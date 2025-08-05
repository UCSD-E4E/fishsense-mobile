extern "C" {
	const cv::LMSolver* cv_PtrLcv_LMSolverG_getInnerPtr_const(const cv::Ptr<cv::LMSolver>* instance) {
			return instance->get();
	}
	
	cv::LMSolver* cv_PtrLcv_LMSolverG_getInnerPtrMut(cv::Ptr<cv::LMSolver>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_LMSolverG_delete(cv::Ptr<cv::LMSolver>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_LMSolverG_to_PtrOfAlgorithm(cv::Ptr<cv::LMSolver>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
}

extern "C" {
	const cv::LMSolver::Callback* cv_PtrLcv_LMSolver_CallbackG_getInnerPtr_const(const cv::Ptr<cv::LMSolver::Callback>* instance) {
			return instance->get();
	}
	
	cv::LMSolver::Callback* cv_PtrLcv_LMSolver_CallbackG_getInnerPtrMut(cv::Ptr<cv::LMSolver::Callback>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_LMSolver_CallbackG_delete(cv::Ptr<cv::LMSolver::Callback>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::StereoBM* cv_PtrLcv_StereoBMG_getInnerPtr_const(const cv::Ptr<cv::StereoBM>* instance) {
			return instance->get();
	}
	
	cv::StereoBM* cv_PtrLcv_StereoBMG_getInnerPtrMut(cv::Ptr<cv::StereoBM>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_StereoBMG_delete(cv::Ptr<cv::StereoBM>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_StereoBMG_to_PtrOfAlgorithm(cv::Ptr<cv::StereoBM>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
	cv::Ptr<cv::StereoMatcher>* cv_PtrLcv_StereoBMG_to_PtrOfStereoMatcher(cv::Ptr<cv::StereoBM>* instance) {
			return new cv::Ptr<cv::StereoMatcher>(instance->dynamicCast<cv::StereoMatcher>());
	}
	
}

extern "C" {
	const cv::StereoMatcher* cv_PtrLcv_StereoMatcherG_getInnerPtr_const(const cv::Ptr<cv::StereoMatcher>* instance) {
			return instance->get();
	}
	
	cv::StereoMatcher* cv_PtrLcv_StereoMatcherG_getInnerPtrMut(cv::Ptr<cv::StereoMatcher>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_StereoMatcherG_delete(cv::Ptr<cv::StereoMatcher>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_StereoMatcherG_to_PtrOfAlgorithm(cv::Ptr<cv::StereoMatcher>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
}

extern "C" {
	const cv::StereoSGBM* cv_PtrLcv_StereoSGBMG_getInnerPtr_const(const cv::Ptr<cv::StereoSGBM>* instance) {
			return instance->get();
	}
	
	cv::StereoSGBM* cv_PtrLcv_StereoSGBMG_getInnerPtrMut(cv::Ptr<cv::StereoSGBM>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_StereoSGBMG_delete(cv::Ptr<cv::StereoSGBM>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_StereoSGBMG_to_PtrOfAlgorithm(cv::Ptr<cv::StereoSGBM>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
	cv::Ptr<cv::StereoMatcher>* cv_PtrLcv_StereoSGBMG_to_PtrOfStereoMatcher(cv::Ptr<cv::StereoSGBM>* instance) {
			return new cv::Ptr<cv::StereoMatcher>(instance->dynamicCast<cv::StereoMatcher>());
	}
	
}

