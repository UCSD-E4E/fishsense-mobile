extern "C" {
	std::pair<cv::gapi::GBackend, cv::GKernelImpl>* std_pairLcv_gapi_GBackend__cv_GKernelImplG_new_const_GBackend_GKernelImpl(cv::gapi::GBackend* arg, cv::GKernelImpl* arg_1) {
			std::pair<cv::gapi::GBackend, cv::GKernelImpl>* ret = new std::pair<cv::gapi::GBackend, cv::GKernelImpl>(*arg, *arg_1);
			return ret;
	}
	
	void std_pairLcv_gapi_GBackend__cv_GKernelImplG_get_0_const(const std::pair<cv::gapi::GBackend, cv::GKernelImpl>* instance, cv::gapi::GBackend** ocvrs_return) {
			cv::gapi::GBackend ret = std::get<0>(*instance);
			*ocvrs_return = new cv::gapi::GBackend(ret);
	}
	
	void std_pairLcv_gapi_GBackend__cv_GKernelImplG_get_1_const(const std::pair<cv::gapi::GBackend, cv::GKernelImpl>* instance, cv::GKernelImpl** ocvrs_return) {
			cv::GKernelImpl ret = std::get<1>(*instance);
			*ocvrs_return = new cv::GKernelImpl(ret);
	}
	
	void std_pairLcv_gapi_GBackend__cv_GKernelImplG_delete(std::pair<cv::gapi::GBackend, cv::GKernelImpl>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::tuple<cv::GMat, cv::GMat>* std_tupleLcv_GMat__cv_GMatG_new_const_GMat_GMat(cv::GMat* arg, cv::GMat* arg_1) {
			std::tuple<cv::GMat, cv::GMat>* ret = new std::tuple<cv::GMat, cv::GMat>(*arg, *arg_1);
			return ret;
	}
	
	void std_tupleLcv_GMat__cv_GMatG_get_0_const(const std::tuple<cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<0>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMatG_get_1_const(const std::tuple<cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<1>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMatG_delete(std::tuple<cv::GMat, cv::GMat>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::tuple<cv::GMat, cv::GMat, cv::GMat>* std_tupleLcv_GMat__cv_GMat__cv_GMatG_new_const_GMat_GMat_GMat(cv::GMat* arg, cv::GMat* arg_1, cv::GMat* arg_2) {
			std::tuple<cv::GMat, cv::GMat, cv::GMat>* ret = new std::tuple<cv::GMat, cv::GMat, cv::GMat>(*arg, *arg_1, *arg_2);
			return ret;
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMatG_get_0_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<0>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMatG_get_1_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<1>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMatG_get_2_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<2>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMatG_delete(std::tuple<cv::GMat, cv::GMat, cv::GMat>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_new_const_GMat_GMat_GMat_GMat(cv::GMat* arg, cv::GMat* arg_1, cv::GMat* arg_2, cv::GMat* arg_3) {
			std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* ret = new std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>(*arg, *arg_1, *arg_2, *arg_3);
			return ret;
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_0_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<0>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_1_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<1>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_2_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<2>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_3_const(const std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<3>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_delete(std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::tuple<cv::GMat, cv::GScalar>* std_tupleLcv_GMat__cv_GScalarG_new_const_GMat_GScalar(cv::GMat* arg, cv::GScalar* arg_1) {
			std::tuple<cv::GMat, cv::GScalar>* ret = new std::tuple<cv::GMat, cv::GScalar>(*arg, *arg_1);
			return ret;
	}
	
	void std_tupleLcv_GMat__cv_GScalarG_get_0_const(const std::tuple<cv::GMat, cv::GScalar>* instance, cv::GMat** ocvrs_return) {
			cv::GMat ret = std::get<0>(*instance);
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_tupleLcv_GMat__cv_GScalarG_get_1_const(const std::tuple<cv::GMat, cv::GScalar>* instance, cv::GScalar** ocvrs_return) {
			cv::GScalar ret = std::get<1>(*instance);
			*ocvrs_return = new cv::GScalar(ret);
	}
	
	void std_tupleLcv_GMat__cv_GScalarG_delete(std::tuple<cv::GMat, cv::GScalar>* instance) {
			delete instance;
	}
	
}

extern "C" {
	std::vector<cv::detail::OpaqueKind>* std_vectorLcv_detail_OpaqueKindG_new_const() {
			std::vector<cv::detail::OpaqueKind>* ret = new std::vector<cv::detail::OpaqueKind>();
			return ret;
	}
	
	void std_vectorLcv_detail_OpaqueKindG_delete(std::vector<cv::detail::OpaqueKind>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_detail_OpaqueKindG_len_const(const std::vector<cv::detail::OpaqueKind>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_detail_OpaqueKindG_isEmpty_const(const std::vector<cv::detail::OpaqueKind>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_detail_OpaqueKindG_capacity_const(const std::vector<cv::detail::OpaqueKind>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_detail_OpaqueKindG_shrinkToFit(std::vector<cv::detail::OpaqueKind>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_detail_OpaqueKindG_reserve_size_t(std::vector<cv::detail::OpaqueKind>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_detail_OpaqueKindG_remove_size_t(std::vector<cv::detail::OpaqueKind>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_detail_OpaqueKindG_swap_size_t_size_t(std::vector<cv::detail::OpaqueKind>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_detail_OpaqueKindG_clear(std::vector<cv::detail::OpaqueKind>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_detail_OpaqueKindG_push_const_OpaqueKind(std::vector<cv::detail::OpaqueKind>* instance, const cv::detail::OpaqueKind val) {
			instance->push_back(val);
	}
	
	void std_vectorLcv_detail_OpaqueKindG_insert_size_t_const_OpaqueKind(std::vector<cv::detail::OpaqueKind>* instance, size_t index, const cv::detail::OpaqueKind val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void std_vectorLcv_detail_OpaqueKindG_get_const_size_t(const std::vector<cv::detail::OpaqueKind>* instance, size_t index, cv::detail::OpaqueKind* ocvrs_return) {
			cv::detail::OpaqueKind ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void std_vectorLcv_detail_OpaqueKindG_set_size_t_const_OpaqueKind(std::vector<cv::detail::OpaqueKind>* instance, size_t index, const cv::detail::OpaqueKind val) {
			(*instance)[index] = val;
	}
	
	std::vector<cv::detail::OpaqueKind>* std_vectorLcv_detail_OpaqueKindG_clone_const(const std::vector<cv::detail::OpaqueKind>* instance) {
			std::vector<cv::detail::OpaqueKind> ret = std::vector<cv::detail::OpaqueKind>(*instance);
			return new std::vector<cv::detail::OpaqueKind>(ret);
	}
	
	const cv::detail::OpaqueKind* std_vectorLcv_detail_OpaqueKindG_data_const(const std::vector<cv::detail::OpaqueKind>* instance) {
			const cv::detail::OpaqueKind* ret = instance->data();
			return ret;
	}
	
	cv::detail::OpaqueKind* std_vectorLcv_detail_OpaqueKindG_dataMut(std::vector<cv::detail::OpaqueKind>* instance) {
			cv::detail::OpaqueKind* ret = instance->data();
			return ret;
	}
	
	std::vector<cv::detail::OpaqueKind>* cv_fromSlice_const_const_OpaqueKindX_size_t(const cv::detail::OpaqueKind* data, size_t len) {
			return new std::vector<cv::detail::OpaqueKind>(data, data + len);
	}
	
}


extern "C" {
	std::vector<cv::GArg>* std_vectorLcv_GArgG_new_const() {
			std::vector<cv::GArg>* ret = new std::vector<cv::GArg>();
			return ret;
	}
	
	void std_vectorLcv_GArgG_delete(std::vector<cv::GArg>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GArgG_len_const(const std::vector<cv::GArg>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GArgG_isEmpty_const(const std::vector<cv::GArg>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GArgG_capacity_const(const std::vector<cv::GArg>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GArgG_shrinkToFit(std::vector<cv::GArg>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GArgG_reserve_size_t(std::vector<cv::GArg>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GArgG_remove_size_t(std::vector<cv::GArg>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GArgG_swap_size_t_size_t(std::vector<cv::GArg>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GArgG_clear(std::vector<cv::GArg>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GArgG_push_const_GArg(std::vector<cv::GArg>* instance, const cv::GArg* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_GArgG_insert_size_t_const_GArg(std::vector<cv::GArg>* instance, size_t index, const cv::GArg* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_GArgG_get_const_size_t(const std::vector<cv::GArg>* instance, size_t index, cv::GArg** ocvrs_return) {
			cv::GArg ret = (*instance)[index];
			*ocvrs_return = new cv::GArg(ret);
	}
	
	void std_vectorLcv_GArgG_set_size_t_const_GArg(std::vector<cv::GArg>* instance, size_t index, const cv::GArg* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::gapi::GBackend>* std_vectorLcv_gapi_GBackendG_new_const() {
			std::vector<cv::gapi::GBackend>* ret = new std::vector<cv::gapi::GBackend>();
			return ret;
	}
	
	void std_vectorLcv_gapi_GBackendG_delete(std::vector<cv::gapi::GBackend>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_gapi_GBackendG_len_const(const std::vector<cv::gapi::GBackend>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_gapi_GBackendG_isEmpty_const(const std::vector<cv::gapi::GBackend>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_gapi_GBackendG_capacity_const(const std::vector<cv::gapi::GBackend>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_gapi_GBackendG_shrinkToFit(std::vector<cv::gapi::GBackend>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_gapi_GBackendG_reserve_size_t(std::vector<cv::gapi::GBackend>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_gapi_GBackendG_remove_size_t(std::vector<cv::gapi::GBackend>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_gapi_GBackendG_swap_size_t_size_t(std::vector<cv::gapi::GBackend>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_gapi_GBackendG_clear(std::vector<cv::gapi::GBackend>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_gapi_GBackendG_push_const_GBackend(std::vector<cv::gapi::GBackend>* instance, const cv::gapi::GBackend* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_gapi_GBackendG_insert_size_t_const_GBackend(std::vector<cv::gapi::GBackend>* instance, size_t index, const cv::gapi::GBackend* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_gapi_GBackendG_get_const_size_t(const std::vector<cv::gapi::GBackend>* instance, size_t index, cv::gapi::GBackend** ocvrs_return) {
			cv::gapi::GBackend ret = (*instance)[index];
			*ocvrs_return = new cv::gapi::GBackend(ret);
	}
	
	void std_vectorLcv_gapi_GBackendG_set_size_t_const_GBackend(std::vector<cv::gapi::GBackend>* instance, size_t index, const cv::gapi::GBackend* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::GCompileArg>* std_vectorLcv_GCompileArgG_new_const() {
			std::vector<cv::GCompileArg>* ret = new std::vector<cv::GCompileArg>();
			return ret;
	}
	
	void std_vectorLcv_GCompileArgG_delete(std::vector<cv::GCompileArg>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GCompileArgG_len_const(const std::vector<cv::GCompileArg>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GCompileArgG_isEmpty_const(const std::vector<cv::GCompileArg>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GCompileArgG_capacity_const(const std::vector<cv::GCompileArg>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GCompileArgG_shrinkToFit(std::vector<cv::GCompileArg>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GCompileArgG_reserve_size_t(std::vector<cv::GCompileArg>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GCompileArgG_remove_size_t(std::vector<cv::GCompileArg>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GCompileArgG_swap_size_t_size_t(std::vector<cv::GCompileArg>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GCompileArgG_clear(std::vector<cv::GCompileArg>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GCompileArgG_push_const_GCompileArg(std::vector<cv::GCompileArg>* instance, const cv::GCompileArg* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_GCompileArgG_insert_size_t_const_GCompileArg(std::vector<cv::GCompileArg>* instance, size_t index, const cv::GCompileArg* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_GCompileArgG_get_const_size_t(const std::vector<cv::GCompileArg>* instance, size_t index, cv::GCompileArg** ocvrs_return) {
			cv::GCompileArg ret = (*instance)[index];
			*ocvrs_return = new cv::GCompileArg(ret);
	}
	
	void std_vectorLcv_GCompileArgG_set_size_t_const_GCompileArg(std::vector<cv::GCompileArg>* instance, size_t index, const cv::GCompileArg* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::GMat>* std_vectorLcv_GMatG_new_const() {
			std::vector<cv::GMat>* ret = new std::vector<cv::GMat>();
			return ret;
	}
	
	void std_vectorLcv_GMatG_delete(std::vector<cv::GMat>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GMatG_len_const(const std::vector<cv::GMat>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GMatG_isEmpty_const(const std::vector<cv::GMat>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GMatG_capacity_const(const std::vector<cv::GMat>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GMatG_shrinkToFit(std::vector<cv::GMat>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GMatG_reserve_size_t(std::vector<cv::GMat>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GMatG_remove_size_t(std::vector<cv::GMat>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GMatG_swap_size_t_size_t(std::vector<cv::GMat>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GMatG_clear(std::vector<cv::GMat>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GMatG_push_const_GMat(std::vector<cv::GMat>* instance, const cv::GMat* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_GMatG_insert_size_t_const_GMat(std::vector<cv::GMat>* instance, size_t index, const cv::GMat* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_GMatG_get_const_size_t(const std::vector<cv::GMat>* instance, size_t index, cv::GMat** ocvrs_return) {
			cv::GMat ret = (*instance)[index];
			*ocvrs_return = new cv::GMat(ret);
	}
	
	void std_vectorLcv_GMatG_set_size_t_const_GMat(std::vector<cv::GMat>* instance, size_t index, const cv::GMat* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::GRunArg>* std_vectorLcv_GRunArgG_new_const() {
			std::vector<cv::GRunArg>* ret = new std::vector<cv::GRunArg>();
			return ret;
	}
	
	void std_vectorLcv_GRunArgG_delete(std::vector<cv::GRunArg>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GRunArgG_len_const(const std::vector<cv::GRunArg>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GRunArgG_isEmpty_const(const std::vector<cv::GRunArg>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GRunArgG_capacity_const(const std::vector<cv::GRunArg>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GRunArgG_shrinkToFit(std::vector<cv::GRunArg>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GRunArgG_reserve_size_t(std::vector<cv::GRunArg>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GRunArgG_remove_size_t(std::vector<cv::GRunArg>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GRunArgG_swap_size_t_size_t(std::vector<cv::GRunArg>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GRunArgG_clear(std::vector<cv::GRunArg>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GRunArgG_push_const_GRunArg(std::vector<cv::GRunArg>* instance, const cv::GRunArg* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_GRunArgG_insert_size_t_const_GRunArg(std::vector<cv::GRunArg>* instance, size_t index, const cv::GRunArg* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_GRunArgG_get_const_size_t(const std::vector<cv::GRunArg>* instance, size_t index, cv::GRunArg** ocvrs_return) {
			cv::GRunArg ret = (*instance)[index];
			*ocvrs_return = new cv::GRunArg(ret);
	}
	
	void std_vectorLcv_GRunArgG_set_size_t_const_GRunArg(std::vector<cv::GRunArg>* instance, size_t index, const cv::GRunArg* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::GShape>* std_vectorLcv_GShapeG_new_const() {
			std::vector<cv::GShape>* ret = new std::vector<cv::GShape>();
			return ret;
	}
	
	void std_vectorLcv_GShapeG_delete(std::vector<cv::GShape>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GShapeG_len_const(const std::vector<cv::GShape>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GShapeG_isEmpty_const(const std::vector<cv::GShape>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GShapeG_capacity_const(const std::vector<cv::GShape>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GShapeG_shrinkToFit(std::vector<cv::GShape>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GShapeG_reserve_size_t(std::vector<cv::GShape>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GShapeG_remove_size_t(std::vector<cv::GShape>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GShapeG_swap_size_t_size_t(std::vector<cv::GShape>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GShapeG_clear(std::vector<cv::GShape>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GShapeG_push_const_GShape(std::vector<cv::GShape>* instance, const cv::GShape val) {
			instance->push_back(val);
	}
	
	void std_vectorLcv_GShapeG_insert_size_t_const_GShape(std::vector<cv::GShape>* instance, size_t index, const cv::GShape val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void std_vectorLcv_GShapeG_get_const_size_t(const std::vector<cv::GShape>* instance, size_t index, cv::GShape* ocvrs_return) {
			cv::GShape ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void std_vectorLcv_GShapeG_set_size_t_const_GShape(std::vector<cv::GShape>* instance, size_t index, const cv::GShape val) {
			(*instance)[index] = val;
	}
	
	std::vector<cv::GShape>* std_vectorLcv_GShapeG_clone_const(const std::vector<cv::GShape>* instance) {
			std::vector<cv::GShape> ret = std::vector<cv::GShape>(*instance);
			return new std::vector<cv::GShape>(ret);
	}
	
	const cv::GShape* std_vectorLcv_GShapeG_data_const(const std::vector<cv::GShape>* instance) {
			const cv::GShape* ret = instance->data();
			return ret;
	}
	
	cv::GShape* std_vectorLcv_GShapeG_dataMut(std::vector<cv::GShape>* instance) {
			cv::GShape* ret = instance->data();
			return ret;
	}
	
	std::vector<cv::GShape>* cv_fromSlice_const_const_GShapeX_size_t(const cv::GShape* data, size_t len) {
			return new std::vector<cv::GShape>(data, data + len);
	}
	
}


extern "C" {
	std::vector<cv::GTransform>* std_vectorLcv_GTransformG_new_const() {
			std::vector<cv::GTransform>* ret = new std::vector<cv::GTransform>();
			return ret;
	}
	
	void std_vectorLcv_GTransformG_delete(std::vector<cv::GTransform>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GTransformG_len_const(const std::vector<cv::GTransform>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GTransformG_isEmpty_const(const std::vector<cv::GTransform>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GTransformG_capacity_const(const std::vector<cv::GTransform>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GTransformG_shrinkToFit(std::vector<cv::GTransform>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GTransformG_reserve_size_t(std::vector<cv::GTransform>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GTransformG_remove_size_t(std::vector<cv::GTransform>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GTransformG_swap_size_t_size_t(std::vector<cv::GTransform>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GTransformG_clear(std::vector<cv::GTransform>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GTransformG_push_const_GTransform(std::vector<cv::GTransform>* instance, const cv::GTransform* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_GTransformG_insert_size_t_const_GTransform(std::vector<cv::GTransform>* instance, size_t index, const cv::GTransform* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_GTransformG_get_const_size_t(const std::vector<cv::GTransform>* instance, size_t index, cv::GTransform** ocvrs_return) {
			cv::GTransform ret = (*instance)[index];
			*ocvrs_return = new cv::GTransform(ret);
	}
	
	void std_vectorLcv_GTransformG_set_size_t_const_GTransform(std::vector<cv::GTransform>* instance, size_t index, const cv::GTransform* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::GTypeInfo>* std_vectorLcv_GTypeInfoG_new_const() {
			std::vector<cv::GTypeInfo>* ret = new std::vector<cv::GTypeInfo>();
			return ret;
	}
	
	void std_vectorLcv_GTypeInfoG_delete(std::vector<cv::GTypeInfo>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_GTypeInfoG_len_const(const std::vector<cv::GTypeInfo>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_GTypeInfoG_isEmpty_const(const std::vector<cv::GTypeInfo>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_GTypeInfoG_capacity_const(const std::vector<cv::GTypeInfo>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_GTypeInfoG_shrinkToFit(std::vector<cv::GTypeInfo>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_GTypeInfoG_reserve_size_t(std::vector<cv::GTypeInfo>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_GTypeInfoG_remove_size_t(std::vector<cv::GTypeInfo>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_GTypeInfoG_swap_size_t_size_t(std::vector<cv::GTypeInfo>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_GTypeInfoG_clear(std::vector<cv::GTypeInfo>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_GTypeInfoG_push_const_GTypeInfo(std::vector<cv::GTypeInfo>* instance, const cv::GTypeInfo* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_GTypeInfoG_insert_size_t_const_GTypeInfo(std::vector<cv::GTypeInfo>* instance, size_t index, const cv::GTypeInfo* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_GTypeInfoG_get_const_size_t(const std::vector<cv::GTypeInfo>* instance, size_t index, cv::GTypeInfo** ocvrs_return) {
			cv::GTypeInfo ret = (*instance)[index];
			*ocvrs_return = new cv::GTypeInfo(ret);
	}
	
	void std_vectorLcv_GTypeInfoG_set_size_t_const_GTypeInfo(std::vector<cv::GTypeInfo>* instance, size_t index, const cv::GTypeInfo* val) {
			(*instance)[index] = *val;
	}
	
}


