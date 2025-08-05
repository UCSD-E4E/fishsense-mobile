extern "C" {
	const cv::mcc::CChecker* cv_PtrLcv_mcc_CCheckerG_getInnerPtr_const(const cv::Ptr<cv::mcc::CChecker>* instance) {
			return instance->get();
	}
	
	cv::mcc::CChecker* cv_PtrLcv_mcc_CCheckerG_getInnerPtrMut(cv::Ptr<cv::mcc::CChecker>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_mcc_CCheckerG_delete(cv::Ptr<cv::mcc::CChecker>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::mcc::CCheckerDetector* cv_PtrLcv_mcc_CCheckerDetectorG_getInnerPtr_const(const cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
			return instance->get();
	}
	
	cv::mcc::CCheckerDetector* cv_PtrLcv_mcc_CCheckerDetectorG_getInnerPtrMut(cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_mcc_CCheckerDetectorG_delete(cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_mcc_CCheckerDetectorG_to_PtrOfAlgorithm(cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
}

extern "C" {
	const cv::mcc::CCheckerDraw* cv_PtrLcv_mcc_CCheckerDrawG_getInnerPtr_const(const cv::Ptr<cv::mcc::CCheckerDraw>* instance) {
			return instance->get();
	}
	
	cv::mcc::CCheckerDraw* cv_PtrLcv_mcc_CCheckerDrawG_getInnerPtrMut(cv::Ptr<cv::mcc::CCheckerDraw>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_mcc_CCheckerDrawG_delete(cv::Ptr<cv::mcc::CCheckerDraw>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::mcc::DetectorParameters* cv_PtrLcv_mcc_DetectorParametersG_getInnerPtr_const(const cv::Ptr<cv::mcc::DetectorParameters>* instance) {
			return instance->get();
	}
	
	cv::mcc::DetectorParameters* cv_PtrLcv_mcc_DetectorParametersG_getInnerPtrMut(cv::Ptr<cv::mcc::DetectorParameters>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_mcc_DetectorParametersG_delete(cv::Ptr<cv::mcc::DetectorParameters>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::mcc::DetectorParameters>* cv_PtrLcv_mcc_DetectorParametersG_new_const_DetectorParameters(cv::mcc::DetectorParameters* val) {
			return new cv::Ptr<cv::mcc::DetectorParameters>(val);
	}
	
}

extern "C" {
	std::vector<cv::Ptr<cv::mcc::CChecker>>* std_vectorLcv_PtrLcv_mcc_CCheckerGG_new_const() {
			std::vector<cv::Ptr<cv::mcc::CChecker>>* ret = new std::vector<cv::Ptr<cv::mcc::CChecker>>();
			return ret;
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_delete(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_PtrLcv_mcc_CCheckerGG_len_const(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_PtrLcv_mcc_CCheckerGG_isEmpty_const(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_PtrLcv_mcc_CCheckerGG_capacity_const(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_shrinkToFit(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_reserve_size_t(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_remove_size_t(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_swap_size_t_size_t(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_clear(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_push_const_PtrLCCheckerG(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, const cv::Ptr<cv::mcc::CChecker>* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_insert_size_t_const_PtrLCCheckerG(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index, const cv::Ptr<cv::mcc::CChecker>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_get_const_size_t(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index, cv::Ptr<cv::mcc::CChecker>** ocvrs_return) {
			cv::Ptr<cv::mcc::CChecker> ret = (*instance)[index];
			*ocvrs_return = new cv::Ptr<cv::mcc::CChecker>(ret);
	}
	
	void std_vectorLcv_PtrLcv_mcc_CCheckerGG_set_size_t_const_PtrLCCheckerG(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index, const cv::Ptr<cv::mcc::CChecker>* val) {
			(*instance)[index] = *val;
	}
	
}


