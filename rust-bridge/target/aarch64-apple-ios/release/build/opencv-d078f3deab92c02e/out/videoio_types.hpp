extern "C" {
	const cv::IStreamReader* cv_PtrLcv_IStreamReaderG_getInnerPtr_const(const cv::Ptr<cv::IStreamReader>* instance) {
			return instance->get();
	}
	
	cv::IStreamReader* cv_PtrLcv_IStreamReaderG_getInnerPtrMut(cv::Ptr<cv::IStreamReader>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_IStreamReaderG_delete(cv::Ptr<cv::IStreamReader>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::vector<cv::VideoCapture>* std_vectorLcv_VideoCaptureG_new_const() {
			std::vector<cv::VideoCapture>* ret = new std::vector<cv::VideoCapture>();
			return ret;
	}
	
	void std_vectorLcv_VideoCaptureG_delete(std::vector<cv::VideoCapture>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_VideoCaptureG_len_const(const std::vector<cv::VideoCapture>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_VideoCaptureG_isEmpty_const(const std::vector<cv::VideoCapture>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_VideoCaptureG_capacity_const(const std::vector<cv::VideoCapture>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_VideoCaptureG_shrinkToFit(std::vector<cv::VideoCapture>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_VideoCaptureG_reserve_size_t(std::vector<cv::VideoCapture>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_VideoCaptureG_remove_size_t(std::vector<cv::VideoCapture>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_VideoCaptureG_swap_size_t_size_t(std::vector<cv::VideoCapture>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_VideoCaptureG_clear(std::vector<cv::VideoCapture>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_VideoCaptureG_push_const_VideoCapture(std::vector<cv::VideoCapture>* instance, const cv::VideoCapture* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_VideoCaptureG_insert_size_t_const_VideoCapture(std::vector<cv::VideoCapture>* instance, size_t index, const cv::VideoCapture* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_VideoCaptureG_get_const_size_t(const std::vector<cv::VideoCapture>* instance, size_t index, cv::VideoCapture** ocvrs_return) {
			cv::VideoCapture ret = (*instance)[index];
			*ocvrs_return = new cv::VideoCapture(ret);
	}
	
	void std_vectorLcv_VideoCaptureG_set_size_t_const_VideoCapture(std::vector<cv::VideoCapture>* instance, size_t index, const cv::VideoCapture* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::VideoCaptureAPIs>* std_vectorLcv_VideoCaptureAPIsG_new_const() {
			std::vector<cv::VideoCaptureAPIs>* ret = new std::vector<cv::VideoCaptureAPIs>();
			return ret;
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_delete(std::vector<cv::VideoCaptureAPIs>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_VideoCaptureAPIsG_len_const(const std::vector<cv::VideoCaptureAPIs>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_VideoCaptureAPIsG_isEmpty_const(const std::vector<cv::VideoCaptureAPIs>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_VideoCaptureAPIsG_capacity_const(const std::vector<cv::VideoCaptureAPIs>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_shrinkToFit(std::vector<cv::VideoCaptureAPIs>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_reserve_size_t(std::vector<cv::VideoCaptureAPIs>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_remove_size_t(std::vector<cv::VideoCaptureAPIs>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_swap_size_t_size_t(std::vector<cv::VideoCaptureAPIs>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_clear(std::vector<cv::VideoCaptureAPIs>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_push_const_VideoCaptureAPIs(std::vector<cv::VideoCaptureAPIs>* instance, const cv::VideoCaptureAPIs val) {
			instance->push_back(val);
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_insert_size_t_const_VideoCaptureAPIs(std::vector<cv::VideoCaptureAPIs>* instance, size_t index, const cv::VideoCaptureAPIs val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_get_const_size_t(const std::vector<cv::VideoCaptureAPIs>* instance, size_t index, cv::VideoCaptureAPIs* ocvrs_return) {
			cv::VideoCaptureAPIs ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void std_vectorLcv_VideoCaptureAPIsG_set_size_t_const_VideoCaptureAPIs(std::vector<cv::VideoCaptureAPIs>* instance, size_t index, const cv::VideoCaptureAPIs val) {
			(*instance)[index] = val;
	}
	
	std::vector<cv::VideoCaptureAPIs>* std_vectorLcv_VideoCaptureAPIsG_clone_const(const std::vector<cv::VideoCaptureAPIs>* instance) {
			std::vector<cv::VideoCaptureAPIs> ret = std::vector<cv::VideoCaptureAPIs>(*instance);
			return new std::vector<cv::VideoCaptureAPIs>(ret);
	}
	
	const cv::VideoCaptureAPIs* std_vectorLcv_VideoCaptureAPIsG_data_const(const std::vector<cv::VideoCaptureAPIs>* instance) {
			const cv::VideoCaptureAPIs* ret = instance->data();
			return ret;
	}
	
	cv::VideoCaptureAPIs* std_vectorLcv_VideoCaptureAPIsG_dataMut(std::vector<cv::VideoCaptureAPIs>* instance) {
			cv::VideoCaptureAPIs* ret = instance->data();
			return ret;
	}
	
	std::vector<cv::VideoCaptureAPIs>* cv_fromSlice_const_const_VideoCaptureAPIsX_size_t(const cv::VideoCaptureAPIs* data, size_t len) {
			return new std::vector<cv::VideoCaptureAPIs>(data, data + len);
	}
	
}


