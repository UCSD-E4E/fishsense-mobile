extern "C" {
	const cv::dpm::DPMDetector* cv_PtrLcv_dpm_DPMDetectorG_getInnerPtr_const(const cv::Ptr<cv::dpm::DPMDetector>* instance) {
			return instance->get();
	}
	
	cv::dpm::DPMDetector* cv_PtrLcv_dpm_DPMDetectorG_getInnerPtrMut(cv::Ptr<cv::dpm::DPMDetector>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_dpm_DPMDetectorG_delete(cv::Ptr<cv::dpm::DPMDetector>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::vector<cv::dpm::DPMDetector::ObjectDetection>* std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_new_const() {
			std::vector<cv::dpm::DPMDetector::ObjectDetection>* ret = new std::vector<cv::dpm::DPMDetector::ObjectDetection>();
			return ret;
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_delete(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_len_const(const std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_isEmpty_const(const std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_capacity_const(const std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_shrinkToFit(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_reserve_size_t(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_remove_size_t(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_swap_size_t_size_t(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_clear(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_push_const_ObjectDetection(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, const cv::dpm::DPMDetector::ObjectDetection* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_insert_size_t_const_ObjectDetection(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, size_t index, const cv::dpm::DPMDetector::ObjectDetection* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_get_const_size_t(const std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, size_t index, cv::dpm::DPMDetector::ObjectDetection** ocvrs_return) {
			cv::dpm::DPMDetector::ObjectDetection ret = (*instance)[index];
			*ocvrs_return = new cv::dpm::DPMDetector::ObjectDetection(ret);
	}
	
	void std_vectorLcv_dpm_DPMDetector_ObjectDetectionG_set_size_t_const_ObjectDetection(std::vector<cv::dpm::DPMDetector::ObjectDetection>* instance, size_t index, const cv::dpm::DPMDetector::ObjectDetection* val) {
			(*instance)[index] = *val;
	}
	
}


