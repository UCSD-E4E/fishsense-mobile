extern "C" {
	const cv::stereo::QuasiDenseStereo* cv_PtrLcv_stereo_QuasiDenseStereoG_getInnerPtr_const(const cv::Ptr<cv::stereo::QuasiDenseStereo>* instance) {
			return instance->get();
	}
	
	cv::stereo::QuasiDenseStereo* cv_PtrLcv_stereo_QuasiDenseStereoG_getInnerPtrMut(cv::Ptr<cv::stereo::QuasiDenseStereo>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_stereo_QuasiDenseStereoG_delete(cv::Ptr<cv::stereo::QuasiDenseStereo>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::vector<cv::stereo::MatchQuasiDense>* std_vectorLcv_stereo_MatchQuasiDenseG_new_const() {
			std::vector<cv::stereo::MatchQuasiDense>* ret = new std::vector<cv::stereo::MatchQuasiDense>();
			return ret;
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_delete(std::vector<cv::stereo::MatchQuasiDense>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_stereo_MatchQuasiDenseG_len_const(const std::vector<cv::stereo::MatchQuasiDense>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_stereo_MatchQuasiDenseG_isEmpty_const(const std::vector<cv::stereo::MatchQuasiDense>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_stereo_MatchQuasiDenseG_capacity_const(const std::vector<cv::stereo::MatchQuasiDense>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_shrinkToFit(std::vector<cv::stereo::MatchQuasiDense>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_reserve_size_t(std::vector<cv::stereo::MatchQuasiDense>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_remove_size_t(std::vector<cv::stereo::MatchQuasiDense>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_swap_size_t_size_t(std::vector<cv::stereo::MatchQuasiDense>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_clear(std::vector<cv::stereo::MatchQuasiDense>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_push_const_MatchQuasiDense(std::vector<cv::stereo::MatchQuasiDense>* instance, const cv::stereo::MatchQuasiDense* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_insert_size_t_const_MatchQuasiDense(std::vector<cv::stereo::MatchQuasiDense>* instance, size_t index, const cv::stereo::MatchQuasiDense* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_get_const_size_t(const std::vector<cv::stereo::MatchQuasiDense>* instance, size_t index, cv::stereo::MatchQuasiDense* ocvrs_return) {
			cv::stereo::MatchQuasiDense ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void std_vectorLcv_stereo_MatchQuasiDenseG_set_size_t_const_MatchQuasiDense(std::vector<cv::stereo::MatchQuasiDense>* instance, size_t index, const cv::stereo::MatchQuasiDense* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::stereo::MatchQuasiDense>* std_vectorLcv_stereo_MatchQuasiDenseG_clone_const(const std::vector<cv::stereo::MatchQuasiDense>* instance) {
			std::vector<cv::stereo::MatchQuasiDense> ret = std::vector<cv::stereo::MatchQuasiDense>(*instance);
			return new std::vector<cv::stereo::MatchQuasiDense>(ret);
	}
	
	const cv::stereo::MatchQuasiDense* std_vectorLcv_stereo_MatchQuasiDenseG_data_const(const std::vector<cv::stereo::MatchQuasiDense>* instance) {
			const cv::stereo::MatchQuasiDense* ret = instance->data();
			return ret;
	}
	
	cv::stereo::MatchQuasiDense* std_vectorLcv_stereo_MatchQuasiDenseG_dataMut(std::vector<cv::stereo::MatchQuasiDense>* instance) {
			cv::stereo::MatchQuasiDense* ret = instance->data();
			return ret;
	}
	
	std::vector<cv::stereo::MatchQuasiDense>* cv_fromSlice_const_const_MatchQuasiDenseX_size_t(const cv::stereo::MatchQuasiDense* data, size_t len) {
			return new std::vector<cv::stereo::MatchQuasiDense>(data, data + len);
	}
	
}


