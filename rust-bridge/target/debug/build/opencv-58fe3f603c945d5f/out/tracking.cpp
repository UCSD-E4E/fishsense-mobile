#include "ocvrs_common.hpp"
#include <opencv2/tracking.hpp>
#include "tracking_types.hpp"

extern "C" {
	void cv_tracking_TrackerCSRT_create_const_ParamsR(const cv::tracking::TrackerCSRT::Params* parameters, Result<cv::Ptr<cv::tracking::TrackerCSRT>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::tracking::TrackerCSRT> ret = cv::tracking::TrackerCSRT::create(*parameters);
			Ok(new cv::Ptr<cv::tracking::TrackerCSRT>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tracking_TrackerCSRT_create(Result<cv::Ptr<cv::tracking::TrackerCSRT>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::tracking::TrackerCSRT> ret = cv::tracking::TrackerCSRT::create();
			Ok(new cv::Ptr<cv::tracking::TrackerCSRT>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tracking_TrackerCSRT_setInitialMask_const__InputArrayR(cv::tracking::TrackerCSRT* instance, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setInitialMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_tracking_TrackerCSRT_to_Tracker(cv::tracking::TrackerCSRT* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_tracking_TrackerCSRT_delete(cv::tracking::TrackerCSRT* instance) {
			delete instance;
	}
	
	void cv_tracking_TrackerCSRT_Params_Params(Result<cv::tracking::TrackerCSRT::Params*>* ocvrs_return) {
		try {
			cv::tracking::TrackerCSRT::Params* ret = new cv::tracking::TrackerCSRT::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::tracking::TrackerCSRT::Params* cv_tracking_TrackerCSRT_Params_implicitClone_const(const cv::tracking::TrackerCSRT::Params* instance) {
			return new cv::tracking::TrackerCSRT::Params(*instance);
	}
	
	bool cv_tracking_TrackerCSRT_Params_propUse_hog_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_hog;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propUse_hog_const_bool(cv::tracking::TrackerCSRT::Params* instance, const bool val) {
			instance->use_hog = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_propUse_color_names_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_color_names;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propUse_color_names_const_bool(cv::tracking::TrackerCSRT::Params* instance, const bool val) {
			instance->use_color_names = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_propUse_gray_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_gray;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propUse_gray_const_bool(cv::tracking::TrackerCSRT::Params* instance, const bool val) {
			instance->use_gray = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_propUse_rgb_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_rgb;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propUse_rgb_const_bool(cv::tracking::TrackerCSRT::Params* instance, const bool val) {
			instance->use_rgb = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_propUse_channel_weights_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_channel_weights;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propUse_channel_weights_const_bool(cv::tracking::TrackerCSRT::Params* instance, const bool val) {
			instance->use_channel_weights = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_propUse_segmentation_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_segmentation;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propUse_segmentation_const_bool(cv::tracking::TrackerCSRT::Params* instance, const bool val) {
			instance->use_segmentation = val;
	}
	
	void* cv_tracking_TrackerCSRT_Params_propWindow_function_const(const cv::tracking::TrackerCSRT::Params* instance) {
			std::string ret = instance->window_function;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_tracking_TrackerCSRT_Params_propWindow_function_const_string(cv::tracking::TrackerCSRT::Params* instance, const char* val) {
			instance->window_function = std::string(val);
	}
	
	float cv_tracking_TrackerCSRT_Params_propKaiser_alpha_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->kaiser_alpha;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propKaiser_alpha_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->kaiser_alpha = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propCheb_attenuation_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->cheb_attenuation;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propCheb_attenuation_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->cheb_attenuation = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propTemplate_size_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->template_size;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propTemplate_size_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->template_size = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propGsl_sigma_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->gsl_sigma;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propGsl_sigma_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->gsl_sigma = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propHog_orientations_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->hog_orientations;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propHog_orientations_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->hog_orientations = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propHog_clip_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->hog_clip;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propHog_clip_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->hog_clip = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propPadding_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->padding;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propPadding_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->padding = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propFilter_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->filter_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propFilter_lr_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->filter_lr = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propWeights_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->weights_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propWeights_lr_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->weights_lr = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_propNum_hog_channels_used_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->num_hog_channels_used;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propNum_hog_channels_used_const_int(cv::tracking::TrackerCSRT::Params* instance, const int val) {
			instance->num_hog_channels_used = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_propAdmm_iterations_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->admm_iterations;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propAdmm_iterations_const_int(cv::tracking::TrackerCSRT::Params* instance, const int val) {
			instance->admm_iterations = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_propHistogram_bins_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->histogram_bins;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propHistogram_bins_const_int(cv::tracking::TrackerCSRT::Params* instance, const int val) {
			instance->histogram_bins = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propHistogram_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->histogram_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propHistogram_lr_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->histogram_lr = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_propBackground_ratio_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->background_ratio;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propBackground_ratio_const_int(cv::tracking::TrackerCSRT::Params* instance, const int val) {
			instance->background_ratio = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_propNumber_of_scales_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->number_of_scales;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propNumber_of_scales_const_int(cv::tracking::TrackerCSRT::Params* instance, const int val) {
			instance->number_of_scales = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propScale_sigma_factor_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_sigma_factor;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propScale_sigma_factor_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->scale_sigma_factor = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propScale_model_max_area_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_model_max_area;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propScale_model_max_area_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->scale_model_max_area = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propScale_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propScale_lr_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->scale_lr = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propScale_step_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_step;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propScale_step_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->scale_step = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_propPsr_threshold_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->psr_threshold;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_propPsr_threshold_const_float(cv::tracking::TrackerCSRT::Params* instance, const float val) {
			instance->psr_threshold = val;
	}
	
	void cv_tracking_TrackerCSRT_Params_delete(cv::tracking::TrackerCSRT::Params* instance) {
			delete instance;
	}
	
	void cv_tracking_TrackerKCF_create_const_ParamsR(const cv::tracking::TrackerKCF::Params* parameters, Result<cv::Ptr<cv::tracking::TrackerKCF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::tracking::TrackerKCF> ret = cv::tracking::TrackerKCF::create(*parameters);
			Ok(new cv::Ptr<cv::tracking::TrackerKCF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tracking_TrackerKCF_create(Result<cv::Ptr<cv::tracking::TrackerKCF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::tracking::TrackerKCF> ret = cv::tracking::TrackerKCF::create();
			Ok(new cv::Ptr<cv::tracking::TrackerKCF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tracking_TrackerKCF_setFeatureExtractor_FeatureExtractorCallbackFN_bool(cv::tracking::TrackerKCF* instance, cv::tracking::TrackerKCF::FeatureExtractorCallbackFN callback, bool pca_func, ResultVoid* ocvrs_return) {
		try {
			instance->setFeatureExtractor(callback, pca_func);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tracking_TrackerKCF_setFeatureExtractor_FeatureExtractorCallbackFN(cv::tracking::TrackerKCF* instance, cv::tracking::TrackerKCF::FeatureExtractorCallbackFN callback, ResultVoid* ocvrs_return) {
		try {
			instance->setFeatureExtractor(callback);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Tracker* cv_tracking_TrackerKCF_to_Tracker(cv::tracking::TrackerKCF* instance) {
			return dynamic_cast<cv::Tracker*>(instance);
	}
	
	void cv_tracking_TrackerKCF_delete(cv::tracking::TrackerKCF* instance) {
			delete instance;
	}
	
	void cv_tracking_TrackerKCF_Params_Params(Result<cv::tracking::TrackerKCF::Params>* ocvrs_return) {
		try {
			cv::tracking::TrackerKCF::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
