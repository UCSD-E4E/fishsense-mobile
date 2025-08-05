extern "C" {
	const cv::ppf_match_3d::Pose3D* cv_PtrLcv_ppf_match_3d_Pose3DG_getInnerPtr_const(const cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
			return instance->get();
	}
	
	cv::ppf_match_3d::Pose3D* cv_PtrLcv_ppf_match_3d_Pose3DG_getInnerPtrMut(cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_ppf_match_3d_Pose3DG_delete(cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::ppf_match_3d::Pose3D>* cv_PtrLcv_ppf_match_3d_Pose3DG_new_const_Pose3D(cv::ppf_match_3d::Pose3D* val) {
			return new cv::Ptr<cv::ppf_match_3d::Pose3D>(val);
	}
	
}

extern "C" {
	const cv::ppf_match_3d::PoseCluster3D* cv_PtrLcv_ppf_match_3d_PoseCluster3DG_getInnerPtr_const(const cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
			return instance->get();
	}
	
	cv::ppf_match_3d::PoseCluster3D* cv_PtrLcv_ppf_match_3d_PoseCluster3DG_getInnerPtrMut(cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_ppf_match_3d_PoseCluster3DG_delete(cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* cv_PtrLcv_ppf_match_3d_PoseCluster3DG_new_const_PoseCluster3D(cv::ppf_match_3d::PoseCluster3D* val) {
			return new cv::Ptr<cv::ppf_match_3d::PoseCluster3D>(val);
	}
	
}

extern "C" {
	std::vector<cv::ppf_match_3d::Pose3DPtr>* std_vectorLcv_ppf_match_3d_Pose3DPtrG_new_const() {
			std::vector<cv::ppf_match_3d::Pose3DPtr>* ret = new std::vector<cv::ppf_match_3d::Pose3DPtr>();
			return ret;
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_delete(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_ppf_match_3d_Pose3DPtrG_len_const(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_ppf_match_3d_Pose3DPtrG_isEmpty_const(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_ppf_match_3d_Pose3DPtrG_capacity_const(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_shrinkToFit(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_reserve_size_t(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_remove_size_t(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_swap_size_t_size_t(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_clear(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_push_const_Pose3DPtr(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, const cv::ppf_match_3d::Pose3DPtr* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_insert_size_t_const_Pose3DPtr(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index, const cv::ppf_match_3d::Pose3DPtr* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_get_const_size_t(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index, cv::ppf_match_3d::Pose3DPtr** ocvrs_return) {
			cv::ppf_match_3d::Pose3DPtr ret = (*instance)[index];
			*ocvrs_return = new cv::ppf_match_3d::Pose3DPtr(ret);
	}
	
	void std_vectorLcv_ppf_match_3d_Pose3DPtrG_set_size_t_const_Pose3DPtr(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index, const cv::ppf_match_3d::Pose3DPtr* val) {
			(*instance)[index] = *val;
	}
	
}


