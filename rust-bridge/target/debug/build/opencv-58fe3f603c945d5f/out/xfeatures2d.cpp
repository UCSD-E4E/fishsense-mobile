#include "xfeatures2d.hpp"
#include "xfeatures2d_types.hpp"

extern "C" {
	void cv_xfeatures2d_FASTForPointSet_const__InputArrayR_vectorLKeyPointGR_int(const cv::_InputArray* image, std::vector<cv::KeyPoint>* keypoints, int threshold, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::FASTForPointSet(*image, *keypoints, threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FASTForPointSet_const__InputArrayR_vectorLKeyPointGR_int_bool_DetectorType(const cv::_InputArray* image, std::vector<cv::KeyPoint>* keypoints, int threshold, bool nonmaxSuppression, cv::FastFeatureDetector::DetectorType type, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::FASTForPointSet(*image, *keypoints, threshold, nonmaxSuppression, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_matchGMS_const_SizeR_const_SizeR_const_vectorLKeyPointGR_const_vectorLKeyPointGR_const_vectorLDMatchGR_vectorLDMatchGR(const cv::Size* size1, const cv::Size* size2, const std::vector<cv::KeyPoint>* keypoints1, const std::vector<cv::KeyPoint>* keypoints2, const std::vector<cv::DMatch>* matches1to2, std::vector<cv::DMatch>* matchesGMS, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::matchGMS(*size1, *size2, *keypoints1, *keypoints2, *matches1to2, *matchesGMS);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_matchGMS_const_SizeR_const_SizeR_const_vectorLKeyPointGR_const_vectorLKeyPointGR_const_vectorLDMatchGR_vectorLDMatchGR_const_bool_const_bool_const_double(const cv::Size* size1, const cv::Size* size2, const std::vector<cv::KeyPoint>* keypoints1, const std::vector<cv::KeyPoint>* keypoints2, const std::vector<cv::DMatch>* matches1to2, std::vector<cv::DMatch>* matchesGMS, const bool withRotation, const bool withScale, const double thresholdFactor, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::matchGMS(*size1, *size2, *keypoints1, *keypoints2, *matches1to2, *matchesGMS, withRotation, withScale, thresholdFactor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_matchLOGOS_const_vectorLKeyPointGR_const_vectorLKeyPointGR_const_vectorLintGR_const_vectorLintGR_vectorLDMatchGR(const std::vector<cv::KeyPoint>* keypoints1, const std::vector<cv::KeyPoint>* keypoints2, const std::vector<int>* nn1, const std::vector<int>* nn2, std::vector<cv::DMatch>* matches1to2, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::matchLOGOS(*keypoints1, *keypoints2, *nn1, *nn2, *matches1to2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_SURF_CUDA(Result<cv::cuda::SURF_CUDA*>* ocvrs_return) {
		try {
			cv::cuda::SURF_CUDA* ret = new cv::cuda::SURF_CUDA();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_SURF_CUDA_double_int_int_bool_float_bool(double _hessianThreshold, int _nOctaves, int _nOctaveLayers, bool _extended, float _keypointsRatio, bool _upright, Result<cv::cuda::SURF_CUDA*>* ocvrs_return) {
		try {
			cv::cuda::SURF_CUDA* ret = new cv::cuda::SURF_CUDA(_hessianThreshold, _nOctaves, _nOctaveLayers, _extended, _keypointsRatio, _upright);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_SURF_CUDA_double(double _hessianThreshold, Result<cv::cuda::SURF_CUDA*>* ocvrs_return) {
		try {
			cv::cuda::SURF_CUDA* ret = new cv::cuda::SURF_CUDA(_hessianThreshold);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_create_double_int_int_bool_float_bool(double _hessianThreshold, int _nOctaves, int _nOctaveLayers, bool _extended, float _keypointsRatio, bool _upright, Result<cv::Ptr<cv::cuda::SURF_CUDA>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::cuda::SURF_CUDA> ret = cv::cuda::SURF_CUDA::create(_hessianThreshold, _nOctaves, _nOctaveLayers, _extended, _keypointsRatio, _upright);
			Ok(new cv::Ptr<cv::cuda::SURF_CUDA>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_create_double(double _hessianThreshold, Result<cv::Ptr<cv::cuda::SURF_CUDA>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::cuda::SURF_CUDA> ret = cv::cuda::SURF_CUDA::create(_hessianThreshold);
			Ok(new cv::Ptr<cv::cuda::SURF_CUDA>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_descriptorSize_const(const cv::cuda::SURF_CUDA* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->descriptorSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_defaultNorm_const(const cv::cuda::SURF_CUDA* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->defaultNorm();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_uploadKeypoints_const_vectorLKeyPointGR_GpuMatR(cv::cuda::SURF_CUDA* instance, const std::vector<cv::KeyPoint>* keypoints, cv::cuda::GpuMat* keypointsGPU, ResultVoid* ocvrs_return) {
		try {
			instance->uploadKeypoints(*keypoints, *keypointsGPU);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_downloadKeypoints_const_GpuMatR_vectorLKeyPointGR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* keypointsGPU, std::vector<cv::KeyPoint>* keypoints, ResultVoid* ocvrs_return) {
		try {
			instance->downloadKeypoints(*keypointsGPU, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_downloadDescriptors_const_GpuMatR_vectorLfloatGR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* descriptorsGPU, std::vector<float>* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->downloadDescriptors(*descriptorsGPU, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_GpuMatR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, cv::cuda::GpuMat* keypoints, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_GpuMatR_GpuMatR_bool(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, cv::cuda::GpuMat* keypoints, cv::cuda::GpuMat* descriptors, bool useProvidedKeypoints, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints, *descriptors, useProvidedKeypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_GpuMatR_GpuMatR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, cv::cuda::GpuMat* keypoints, cv::cuda::GpuMat* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_detect_const_GpuMatR_const_GpuMatR_GpuMatR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, cv::cuda::GpuMat* keypoints, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*img, *mask, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_vectorLKeyPointGR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, std::vector<cv::KeyPoint>* keypoints, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_vectorLKeyPointGR_GpuMatR_bool(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, std::vector<cv::KeyPoint>* keypoints, cv::cuda::GpuMat* descriptors, bool useProvidedKeypoints, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints, *descriptors, useProvidedKeypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_vectorLKeyPointGR_GpuMatR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, std::vector<cv::KeyPoint>* keypoints, cv::cuda::GpuMat* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_detectWithDescriptors_const_GpuMatR_const_GpuMatR_GpuMatR_GpuMatR_bool(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, cv::cuda::GpuMat* keypoints, cv::cuda::GpuMat* descriptors, bool useProvidedKeypoints, ResultVoid* ocvrs_return) {
		try {
			instance->detectWithDescriptors(*img, *mask, *keypoints, *descriptors, useProvidedKeypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_detectWithDescriptors_const_GpuMatR_const_GpuMatR_GpuMatR_GpuMatR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, cv::cuda::GpuMat* keypoints, cv::cuda::GpuMat* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->detectWithDescriptors(*img, *mask, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_vectorLKeyPointGR_vectorLfloatGR_bool(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, std::vector<cv::KeyPoint>* keypoints, std::vector<float>* descriptors, bool useProvidedKeypoints, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints, *descriptors, useProvidedKeypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_operator___const_GpuMatR_const_GpuMatR_vectorLKeyPointGR_vectorLfloatGR(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* img, const cv::cuda::GpuMat* mask, std::vector<cv::KeyPoint>* keypoints, std::vector<float>* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*img, *mask, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_SURF_CUDA_releaseMemory(cv::cuda::SURF_CUDA* instance, ResultVoid* ocvrs_return) {
		try {
			instance->releaseMemory();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	double cv_cuda_SURF_CUDA_propHessianThreshold_const(const cv::cuda::SURF_CUDA* instance) {
			double ret = instance->hessianThreshold;
			return ret;
	}
	
	void cv_cuda_SURF_CUDA_propHessianThreshold_const_double(cv::cuda::SURF_CUDA* instance, const double val) {
			instance->hessianThreshold = val;
	}
	
	int cv_cuda_SURF_CUDA_propNOctaves_const(const cv::cuda::SURF_CUDA* instance) {
			int ret = instance->nOctaves;
			return ret;
	}
	
	void cv_cuda_SURF_CUDA_propNOctaves_const_int(cv::cuda::SURF_CUDA* instance, const int val) {
			instance->nOctaves = val;
	}
	
	int cv_cuda_SURF_CUDA_propNOctaveLayers_const(const cv::cuda::SURF_CUDA* instance) {
			int ret = instance->nOctaveLayers;
			return ret;
	}
	
	void cv_cuda_SURF_CUDA_propNOctaveLayers_const_int(cv::cuda::SURF_CUDA* instance, const int val) {
			instance->nOctaveLayers = val;
	}
	
	bool cv_cuda_SURF_CUDA_propExtended_const(const cv::cuda::SURF_CUDA* instance) {
			bool ret = instance->extended;
			return ret;
	}
	
	void cv_cuda_SURF_CUDA_propExtended_const_bool(cv::cuda::SURF_CUDA* instance, const bool val) {
			instance->extended = val;
	}
	
	bool cv_cuda_SURF_CUDA_propUpright_const(const cv::cuda::SURF_CUDA* instance) {
			bool ret = instance->upright;
			return ret;
	}
	
	void cv_cuda_SURF_CUDA_propUpright_const_bool(cv::cuda::SURF_CUDA* instance, const bool val) {
			instance->upright = val;
	}
	
	float cv_cuda_SURF_CUDA_propKeypointsRatio_const(const cv::cuda::SURF_CUDA* instance) {
			float ret = instance->keypointsRatio;
			return ret;
	}
	
	void cv_cuda_SURF_CUDA_propKeypointsRatio_const_float(cv::cuda::SURF_CUDA* instance, const float val) {
			instance->keypointsRatio = val;
	}
	
	cv::cuda::GpuMat* cv_cuda_SURF_CUDA_propSum_const(const cv::cuda::SURF_CUDA* instance) {
			cv::cuda::GpuMat ret = instance->sum;
			return new cv::cuda::GpuMat(ret);
	}
	
	void cv_cuda_SURF_CUDA_propSum_const_GpuMat(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* val) {
			instance->sum = *val;
	}
	
	cv::cuda::GpuMat* cv_cuda_SURF_CUDA_propMask1_const(const cv::cuda::SURF_CUDA* instance) {
			cv::cuda::GpuMat ret = instance->mask1;
			return new cv::cuda::GpuMat(ret);
	}
	
	void cv_cuda_SURF_CUDA_propMask1_const_GpuMat(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* val) {
			instance->mask1 = *val;
	}
	
	cv::cuda::GpuMat* cv_cuda_SURF_CUDA_propMaskSum_const(const cv::cuda::SURF_CUDA* instance) {
			cv::cuda::GpuMat ret = instance->maskSum;
			return new cv::cuda::GpuMat(ret);
	}
	
	void cv_cuda_SURF_CUDA_propMaskSum_const_GpuMat(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* val) {
			instance->maskSum = *val;
	}
	
	cv::cuda::GpuMat* cv_cuda_SURF_CUDA_propDet_const(const cv::cuda::SURF_CUDA* instance) {
			cv::cuda::GpuMat ret = instance->det;
			return new cv::cuda::GpuMat(ret);
	}
	
	void cv_cuda_SURF_CUDA_propDet_const_GpuMat(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* val) {
			instance->det = *val;
	}
	
	cv::cuda::GpuMat* cv_cuda_SURF_CUDA_propTrace_const(const cv::cuda::SURF_CUDA* instance) {
			cv::cuda::GpuMat ret = instance->trace;
			return new cv::cuda::GpuMat(ret);
	}
	
	void cv_cuda_SURF_CUDA_propTrace_const_GpuMat(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* val) {
			instance->trace = *val;
	}
	
	cv::cuda::GpuMat* cv_cuda_SURF_CUDA_propMaxPosBuffer_const(const cv::cuda::SURF_CUDA* instance) {
			cv::cuda::GpuMat ret = instance->maxPosBuffer;
			return new cv::cuda::GpuMat(ret);
	}
	
	void cv_cuda_SURF_CUDA_propMaxPosBuffer_const_GpuMat(cv::cuda::SURF_CUDA* instance, const cv::cuda::GpuMat* val) {
			instance->maxPosBuffer = *val;
	}
	
	void cv_cuda_SURF_CUDA_delete(cv::cuda::SURF_CUDA* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_AffineFeature2D_create_PtrLFeature2DG_PtrLFeature2DG(cv::Ptr<cv::Feature2D>* keypoint_detector, cv::Ptr<cv::Feature2D>* descriptor_extractor, Result<cv::Ptr<cv::xfeatures2d::AffineFeature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::AffineFeature2D> ret = cv::xfeatures2d::AffineFeature2D::create(*keypoint_detector, *descriptor_extractor);
			Ok(new cv::Ptr<cv::xfeatures2d::AffineFeature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_AffineFeature2D_create_PtrLFeature2DG(cv::Ptr<cv::Feature2D>* keypoint_detector, Result<cv::Ptr<cv::xfeatures2d::AffineFeature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::AffineFeature2D> ret = cv::xfeatures2d::AffineFeature2D::create(*keypoint_detector);
			Ok(new cv::Ptr<cv::xfeatures2d::AffineFeature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_AffineFeature2D_detect_const__InputArrayR_vectorLElliptic_KeyPointGR_const__InputArrayR(cv::xfeatures2d::AffineFeature2D* instance, const cv::_InputArray* image, std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* keypoints, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*image, *keypoints, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_AffineFeature2D_detect_const__InputArrayR_vectorLElliptic_KeyPointGR(cv::xfeatures2d::AffineFeature2D* instance, const cv::_InputArray* image, std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* keypoints, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*image, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_AffineFeature2D_detectAndCompute_const__InputArrayR_const__InputArrayR_vectorLElliptic_KeyPointGR_const__OutputArrayR_bool(cv::xfeatures2d::AffineFeature2D* instance, const cv::_InputArray* image, const cv::_InputArray* mask, std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* keypoints, const cv::_OutputArray* descriptors, bool useProvidedKeypoints, ResultVoid* ocvrs_return) {
		try {
			instance->detectAndCompute(*image, *mask, *keypoints, *descriptors, useProvidedKeypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_AffineFeature2D_detectAndCompute_const__InputArrayR_const__InputArrayR_vectorLElliptic_KeyPointGR_const__OutputArrayR(cv::xfeatures2d::AffineFeature2D* instance, const cv::_InputArray* image, const cv::_InputArray* mask, std::vector<cv::xfeatures2d::Elliptic_KeyPoint>* keypoints, const cv::_OutputArray* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->detectAndCompute(*image, *mask, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::xfeatures2d::TBMR* cv_xfeatures2d_AffineFeature2D_to_TBMR(cv::xfeatures2d::AffineFeature2D* instance) {
			return dynamic_cast<cv::xfeatures2d::TBMR*>(instance);
	}
	
	cv::Algorithm* cv_xfeatures2d_AffineFeature2D_to_Algorithm(cv::xfeatures2d::AffineFeature2D* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_AffineFeature2D_to_Feature2D(cv::xfeatures2d::AffineFeature2D* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_AffineFeature2D_delete(cv::xfeatures2d::AffineFeature2D* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_BEBLID_create_float_int(float scale_factor, int n_bits, Result<cv::Ptr<cv::xfeatures2d::BEBLID>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::BEBLID> ret = cv::xfeatures2d::BEBLID::create(scale_factor, n_bits);
			Ok(new cv::Ptr<cv::xfeatures2d::BEBLID>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BEBLID_create_float(float scale_factor, Result<cv::Ptr<cv::xfeatures2d::BEBLID>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::BEBLID> ret = cv::xfeatures2d::BEBLID::create(scale_factor);
			Ok(new cv::Ptr<cv::xfeatures2d::BEBLID>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BEBLID_setScaleFactor_float(cv::xfeatures2d::BEBLID* instance, float scale_factor, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(scale_factor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BEBLID_getScaleFactor_const(const cv::xfeatures2d::BEBLID* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BEBLID_getDefaultName_const(const cv::xfeatures2d::BEBLID* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_BEBLID_to_Algorithm(cv::xfeatures2d::BEBLID* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_BEBLID_to_Feature2D(cv::xfeatures2d::BEBLID* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_BEBLID_delete(cv::xfeatures2d::BEBLID* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_BoostDesc_create_int_bool_float(int desc, bool use_scale_orientation, float scale_factor, Result<cv::Ptr<cv::xfeatures2d::BoostDesc>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::BoostDesc> ret = cv::xfeatures2d::BoostDesc::create(desc, use_scale_orientation, scale_factor);
			Ok(new cv::Ptr<cv::xfeatures2d::BoostDesc>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BoostDesc_create(Result<cv::Ptr<cv::xfeatures2d::BoostDesc>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::BoostDesc> ret = cv::xfeatures2d::BoostDesc::create();
			Ok(new cv::Ptr<cv::xfeatures2d::BoostDesc>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BoostDesc_getDefaultName_const(const cv::xfeatures2d::BoostDesc* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BoostDesc_setUseScaleOrientation_const_bool(cv::xfeatures2d::BoostDesc* instance, const bool use_scale_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setUseScaleOrientation(use_scale_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BoostDesc_getUseScaleOrientation_const(const cv::xfeatures2d::BoostDesc* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseScaleOrientation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BoostDesc_setScaleFactor_const_float(cv::xfeatures2d::BoostDesc* instance, const float scale_factor, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(scale_factor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BoostDesc_getScaleFactor_const(const cv::xfeatures2d::BoostDesc* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_BoostDesc_to_Algorithm(cv::xfeatures2d::BoostDesc* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_BoostDesc_to_Feature2D(cv::xfeatures2d::BoostDesc* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_BoostDesc_delete(cv::xfeatures2d::BoostDesc* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_create_int_bool(int bytes, bool use_orientation, Result<cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor> ret = cv::xfeatures2d::BriefDescriptorExtractor::create(bytes, use_orientation);
			Ok(new cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_create(Result<cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor> ret = cv::xfeatures2d::BriefDescriptorExtractor::create();
			Ok(new cv::Ptr<cv::xfeatures2d::BriefDescriptorExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_setDescriptorSize_int(cv::xfeatures2d::BriefDescriptorExtractor* instance, int bytes, ResultVoid* ocvrs_return) {
		try {
			instance->setDescriptorSize(bytes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_getDescriptorSize_const(const cv::xfeatures2d::BriefDescriptorExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDescriptorSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_setUseOrientation_bool(cv::xfeatures2d::BriefDescriptorExtractor* instance, bool use_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setUseOrientation(use_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_getUseOrientation_const(const cv::xfeatures2d::BriefDescriptorExtractor* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseOrientation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_getDefaultName_const(const cv::xfeatures2d::BriefDescriptorExtractor* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_BriefDescriptorExtractor_to_Algorithm(cv::xfeatures2d::BriefDescriptorExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_BriefDescriptorExtractor_to_Feature2D(cv::xfeatures2d::BriefDescriptorExtractor* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_BriefDescriptorExtractor_delete(cv::xfeatures2d::BriefDescriptorExtractor* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_DAISY_create_float_int_int_int_NormalizationType_const__InputArrayR_bool_bool(float radius, int q_radius, int q_theta, int q_hist, cv::xfeatures2d::DAISY::NormalizationType norm, const cv::_InputArray* H, bool interpolation, bool use_orientation, Result<cv::Ptr<cv::xfeatures2d::DAISY>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::DAISY> ret = cv::xfeatures2d::DAISY::create(radius, q_radius, q_theta, q_hist, norm, *H, interpolation, use_orientation);
			Ok(new cv::Ptr<cv::xfeatures2d::DAISY>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_create(Result<cv::Ptr<cv::xfeatures2d::DAISY>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::DAISY> ret = cv::xfeatures2d::DAISY::create();
			Ok(new cv::Ptr<cv::xfeatures2d::DAISY>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setRadius_float(cv::xfeatures2d::DAISY* instance, float radius, ResultVoid* ocvrs_return) {
		try {
			instance->setRadius(radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getRadius_const(const cv::xfeatures2d::DAISY* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setQRadius_int(cv::xfeatures2d::DAISY* instance, int q_radius, ResultVoid* ocvrs_return) {
		try {
			instance->setQRadius(q_radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getQRadius_const(const cv::xfeatures2d::DAISY* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getQRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setQTheta_int(cv::xfeatures2d::DAISY* instance, int q_theta, ResultVoid* ocvrs_return) {
		try {
			instance->setQTheta(q_theta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getQTheta_const(const cv::xfeatures2d::DAISY* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getQTheta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setQHist_int(cv::xfeatures2d::DAISY* instance, int q_hist, ResultVoid* ocvrs_return) {
		try {
			instance->setQHist(q_hist);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getQHist_const(const cv::xfeatures2d::DAISY* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getQHist();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setNorm_int(cv::xfeatures2d::DAISY* instance, int norm, ResultVoid* ocvrs_return) {
		try {
			instance->setNorm(norm);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getNorm_const(const cv::xfeatures2d::DAISY* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNorm();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setH_const__InputArrayR(cv::xfeatures2d::DAISY* instance, const cv::_InputArray* H, ResultVoid* ocvrs_return) {
		try {
			instance->setH(*H);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getH_const(const cv::xfeatures2d::DAISY* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getH();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setInterpolation_bool(cv::xfeatures2d::DAISY* instance, bool interpolation, ResultVoid* ocvrs_return) {
		try {
			instance->setInterpolation(interpolation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getInterpolation_const(const cv::xfeatures2d::DAISY* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getInterpolation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_setUseOrientation_bool(cv::xfeatures2d::DAISY* instance, bool use_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setUseOrientation(use_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getUseOrientation_const(const cv::xfeatures2d::DAISY* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseOrientation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_getDefaultName_const(const cv::xfeatures2d::DAISY* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_compute_const__InputArrayR_vectorLKeyPointGR_const__OutputArrayR(cv::xfeatures2d::DAISY* instance, const cv::_InputArray* image, std::vector<cv::KeyPoint>* keypoints, const cv::_OutputArray* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*image, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_compute_const__InputArrayR_vectorLvectorLKeyPointGGR_const__OutputArrayR(cv::xfeatures2d::DAISY* instance, const cv::_InputArray* images, std::vector<std::vector<cv::KeyPoint>>* keypoints, const cv::_OutputArray* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*images, *keypoints, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_compute_const__InputArrayR_Rect_const__OutputArrayR(cv::xfeatures2d::DAISY* instance, const cv::_InputArray* image, cv::Rect* roi, const cv::_OutputArray* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*image, *roi, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_compute_const__InputArrayR_const__OutputArrayR(cv::xfeatures2d::DAISY* instance, const cv::_InputArray* image, const cv::_OutputArray* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*image, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_GetDescriptor_const_double_double_int_floatX(const cv::xfeatures2d::DAISY* instance, double y, double x, int orientation, float* descriptor, ResultVoid* ocvrs_return) {
		try {
			instance->GetDescriptor(y, x, orientation, descriptor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_GetDescriptor_const_double_double_int_floatX_doubleX(const cv::xfeatures2d::DAISY* instance, double y, double x, int orientation, float* descriptor, double* H, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->GetDescriptor(y, x, orientation, descriptor, H);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_GetUnnormalizedDescriptor_const_double_double_int_floatX(const cv::xfeatures2d::DAISY* instance, double y, double x, int orientation, float* descriptor, ResultVoid* ocvrs_return) {
		try {
			instance->GetUnnormalizedDescriptor(y, x, orientation, descriptor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_DAISY_GetUnnormalizedDescriptor_const_double_double_int_floatX_doubleX(const cv::xfeatures2d::DAISY* instance, double y, double x, int orientation, float* descriptor, double* H, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->GetUnnormalizedDescriptor(y, x, orientation, descriptor, H);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_DAISY_to_Algorithm(cv::xfeatures2d::DAISY* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_DAISY_to_Feature2D(cv::xfeatures2d::DAISY* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_DAISY_delete(cv::xfeatures2d::DAISY* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_Elliptic_KeyPoint(Result<cv::xfeatures2d::Elliptic_KeyPoint*>* ocvrs_return) {
		try {
			cv::xfeatures2d::Elliptic_KeyPoint* ret = new cv::xfeatures2d::Elliptic_KeyPoint();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_Elliptic_KeyPoint_Point2f_float_Size_float_float(cv::Point2f* pt, float angle, cv::Size* axes, float size, float si, Result<cv::xfeatures2d::Elliptic_KeyPoint*>* ocvrs_return) {
		try {
			cv::xfeatures2d::Elliptic_KeyPoint* ret = new cv::xfeatures2d::Elliptic_KeyPoint(*pt, angle, *axes, size, si);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_propAxes_const(const cv::xfeatures2d::Elliptic_KeyPoint* instance, cv::Size_<float>* ocvrs_return) {
			cv::Size_<float> ret = instance->axes;
			*ocvrs_return = ret;
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_propAxes_const_Size_LfloatG(cv::xfeatures2d::Elliptic_KeyPoint* instance, const cv::Size_<float>* val) {
			instance->axes = *val;
	}
	
	float cv_xfeatures2d_Elliptic_KeyPoint_propSi_const(const cv::xfeatures2d::Elliptic_KeyPoint* instance) {
			float ret = instance->si;
			return ret;
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_propSi_const_float(cv::xfeatures2d::Elliptic_KeyPoint* instance, const float val) {
			instance->si = val;
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_propTransf_const(const cv::xfeatures2d::Elliptic_KeyPoint* instance, cv::Matx23f* ocvrs_return) {
			cv::Matx23f ret = instance->transf;
			*ocvrs_return = ret;
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_propTransf_const_Matx23f(cv::xfeatures2d::Elliptic_KeyPoint* instance, const cv::Matx23f* val) {
			instance->transf = *val;
	}
	
	cv::KeyPoint* cv_xfeatures2d_Elliptic_KeyPoint_to_KeyPoint(cv::xfeatures2d::Elliptic_KeyPoint* instance) {
			return dynamic_cast<cv::KeyPoint*>(instance);
	}
	
	void cv_xfeatures2d_Elliptic_KeyPoint_delete(cv::xfeatures2d::Elliptic_KeyPoint* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_FREAK_create_bool_bool_float_int_const_vectorLintGR(bool orientationNormalized, bool scaleNormalized, float patternScale, int nOctaves, const std::vector<int>* selectedPairs, Result<cv::Ptr<cv::xfeatures2d::FREAK>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::FREAK> ret = cv::xfeatures2d::FREAK::create(orientationNormalized, scaleNormalized, patternScale, nOctaves, *selectedPairs);
			Ok(new cv::Ptr<cv::xfeatures2d::FREAK>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_create(Result<cv::Ptr<cv::xfeatures2d::FREAK>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::FREAK> ret = cv::xfeatures2d::FREAK::create();
			Ok(new cv::Ptr<cv::xfeatures2d::FREAK>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_setOrientationNormalized_bool(cv::xfeatures2d::FREAK* instance, bool orientationNormalized, ResultVoid* ocvrs_return) {
		try {
			instance->setOrientationNormalized(orientationNormalized);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_getOrientationNormalized_const(const cv::xfeatures2d::FREAK* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getOrientationNormalized();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_setScaleNormalized_bool(cv::xfeatures2d::FREAK* instance, bool scaleNormalized, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleNormalized(scaleNormalized);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_getScaleNormalized_const(const cv::xfeatures2d::FREAK* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getScaleNormalized();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_setPatternScale_double(cv::xfeatures2d::FREAK* instance, double patternScale, ResultVoid* ocvrs_return) {
		try {
			instance->setPatternScale(patternScale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_getPatternScale_const(const cv::xfeatures2d::FREAK* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getPatternScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_setNOctaves_int(cv::xfeatures2d::FREAK* instance, int nOctaves, ResultVoid* ocvrs_return) {
		try {
			instance->setNOctaves(nOctaves);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_getNOctaves_const(const cv::xfeatures2d::FREAK* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNOctaves();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_FREAK_getDefaultName_const(const cv::xfeatures2d::FREAK* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_FREAK_to_Algorithm(cv::xfeatures2d::FREAK* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_FREAK_to_Feature2D(cv::xfeatures2d::FREAK* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_FREAK_delete(cv::xfeatures2d::FREAK* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_create_int_float_float_int_int(int numOctaves, float corn_thresh, float DOG_thresh, int maxCorners, int num_layers, Result<cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector> ret = cv::xfeatures2d::HarrisLaplaceFeatureDetector::create(numOctaves, corn_thresh, DOG_thresh, maxCorners, num_layers);
			Ok(new cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_create(Result<cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector> ret = cv::xfeatures2d::HarrisLaplaceFeatureDetector::create();
			Ok(new cv::Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_setNumOctaves_int(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, int numOctaves_, ResultVoid* ocvrs_return) {
		try {
			instance->setNumOctaves(numOctaves_);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_getNumOctaves_const(const cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumOctaves();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_setCornThresh_float(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, float corn_thresh_, ResultVoid* ocvrs_return) {
		try {
			instance->setCornThresh(corn_thresh_);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_getCornThresh_const(const cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getCornThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_setDOGThresh_float(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, float DOG_thresh_, ResultVoid* ocvrs_return) {
		try {
			instance->setDOGThresh(DOG_thresh_);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_getDOGThresh_const(const cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getDOGThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_setMaxCorners_int(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, int maxCorners_, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxCorners(maxCorners_);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_getMaxCorners_const(const cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxCorners();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_setNumLayers_int(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, int num_layers_, ResultVoid* ocvrs_return) {
		try {
			instance->setNumLayers(num_layers_);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_getNumLayers_const(const cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumLayers();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_getDefaultName_const(const cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_HarrisLaplaceFeatureDetector_to_Algorithm(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_HarrisLaplaceFeatureDetector_to_Feature2D(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_HarrisLaplaceFeatureDetector_delete(cv::xfeatures2d::HarrisLaplaceFeatureDetector* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_LATCH_create_int_bool_int_double(int bytes, bool rotationInvariance, int half_ssd_size, double sigma, Result<cv::Ptr<cv::xfeatures2d::LATCH>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::LATCH> ret = cv::xfeatures2d::LATCH::create(bytes, rotationInvariance, half_ssd_size, sigma);
			Ok(new cv::Ptr<cv::xfeatures2d::LATCH>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_create(Result<cv::Ptr<cv::xfeatures2d::LATCH>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::LATCH> ret = cv::xfeatures2d::LATCH::create();
			Ok(new cv::Ptr<cv::xfeatures2d::LATCH>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_setBytes_int(cv::xfeatures2d::LATCH* instance, int bytes, ResultVoid* ocvrs_return) {
		try {
			instance->setBytes(bytes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_getBytes_const(const cv::xfeatures2d::LATCH* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getBytes();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_setRotationInvariance_bool(cv::xfeatures2d::LATCH* instance, bool rotationInvariance, ResultVoid* ocvrs_return) {
		try {
			instance->setRotationInvariance(rotationInvariance);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_getRotationInvariance_const(const cv::xfeatures2d::LATCH* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getRotationInvariance();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_setHalfSSDsize_int(cv::xfeatures2d::LATCH* instance, int half_ssd_size, ResultVoid* ocvrs_return) {
		try {
			instance->setHalfSSDsize(half_ssd_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_getHalfSSDsize_const(const cv::xfeatures2d::LATCH* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getHalfSSDsize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_setSigma_double(cv::xfeatures2d::LATCH* instance, double sigma, ResultVoid* ocvrs_return) {
		try {
			instance->setSigma(sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_getSigma_const(const cv::xfeatures2d::LATCH* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LATCH_getDefaultName_const(const cv::xfeatures2d::LATCH* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_LATCH_to_Algorithm(cv::xfeatures2d::LATCH* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_LATCH_to_Feature2D(cv::xfeatures2d::LATCH* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_LATCH_delete(cv::xfeatures2d::LATCH* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_LUCID_create_const_int_const_int(const int lucid_kernel, const int blur_kernel, Result<cv::Ptr<cv::xfeatures2d::LUCID>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::LUCID> ret = cv::xfeatures2d::LUCID::create(lucid_kernel, blur_kernel);
			Ok(new cv::Ptr<cv::xfeatures2d::LUCID>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LUCID_create(Result<cv::Ptr<cv::xfeatures2d::LUCID>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::LUCID> ret = cv::xfeatures2d::LUCID::create();
			Ok(new cv::Ptr<cv::xfeatures2d::LUCID>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LUCID_setLucidKernel_int(cv::xfeatures2d::LUCID* instance, int lucid_kernel, ResultVoid* ocvrs_return) {
		try {
			instance->setLucidKernel(lucid_kernel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LUCID_getLucidKernel_const(const cv::xfeatures2d::LUCID* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLucidKernel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LUCID_setBlurKernel_int(cv::xfeatures2d::LUCID* instance, int blur_kernel, ResultVoid* ocvrs_return) {
		try {
			instance->setBlurKernel(blur_kernel);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LUCID_getBlurKernel_const(const cv::xfeatures2d::LUCID* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getBlurKernel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_LUCID_getDefaultName_const(const cv::xfeatures2d::LUCID* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_LUCID_to_Algorithm(cv::xfeatures2d::LUCID* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_LUCID_to_Feature2D(cv::xfeatures2d::LUCID* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_LUCID_delete(cv::xfeatures2d::LUCID* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_MSDDetector_create_int_int_int_int_float_int_float_int_bool(int m_patch_radius, int m_search_area_radius, int m_nms_radius, int m_nms_scale_radius, float m_th_saliency, int m_kNN, float m_scale_factor, int m_n_scales, bool m_compute_orientation, Result<cv::Ptr<cv::xfeatures2d::MSDDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::MSDDetector> ret = cv::xfeatures2d::MSDDetector::create(m_patch_radius, m_search_area_radius, m_nms_radius, m_nms_scale_radius, m_th_saliency, m_kNN, m_scale_factor, m_n_scales, m_compute_orientation);
			Ok(new cv::Ptr<cv::xfeatures2d::MSDDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_create(Result<cv::Ptr<cv::xfeatures2d::MSDDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::MSDDetector> ret = cv::xfeatures2d::MSDDetector::create();
			Ok(new cv::Ptr<cv::xfeatures2d::MSDDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setPatchRadius_int(cv::xfeatures2d::MSDDetector* instance, int patch_radius, ResultVoid* ocvrs_return) {
		try {
			instance->setPatchRadius(patch_radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getPatchRadius_const(const cv::xfeatures2d::MSDDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPatchRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setSearchAreaRadius_int(cv::xfeatures2d::MSDDetector* instance, int use_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setSearchAreaRadius(use_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getSearchAreaRadius_const(const cv::xfeatures2d::MSDDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSearchAreaRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setNmsRadius_int(cv::xfeatures2d::MSDDetector* instance, int nms_radius, ResultVoid* ocvrs_return) {
		try {
			instance->setNmsRadius(nms_radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getNmsRadius_const(const cv::xfeatures2d::MSDDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNmsRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setNmsScaleRadius_int(cv::xfeatures2d::MSDDetector* instance, int nms_scale_radius, ResultVoid* ocvrs_return) {
		try {
			instance->setNmsScaleRadius(nms_scale_radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getNmsScaleRadius_const(const cv::xfeatures2d::MSDDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNmsScaleRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setThSaliency_float(cv::xfeatures2d::MSDDetector* instance, float th_saliency, ResultVoid* ocvrs_return) {
		try {
			instance->setThSaliency(th_saliency);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getThSaliency_const(const cv::xfeatures2d::MSDDetector* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getThSaliency();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setKNN_int(cv::xfeatures2d::MSDDetector* instance, int kNN, ResultVoid* ocvrs_return) {
		try {
			instance->setKNN(kNN);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getKNN_const(const cv::xfeatures2d::MSDDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getKNN();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setScaleFactor_float(cv::xfeatures2d::MSDDetector* instance, float scale_factor, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(scale_factor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getScaleFactor_const(const cv::xfeatures2d::MSDDetector* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setNScales_int(cv::xfeatures2d::MSDDetector* instance, int use_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setNScales(use_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getNScales_const(const cv::xfeatures2d::MSDDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNScales();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_setComputeOrientation_bool(cv::xfeatures2d::MSDDetector* instance, bool compute_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setComputeOrientation(compute_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getComputeOrientation_const(const cv::xfeatures2d::MSDDetector* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getComputeOrientation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_MSDDetector_getDefaultName_const(const cv::xfeatures2d::MSDDetector* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_MSDDetector_to_Algorithm(cv::xfeatures2d::MSDDetector* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_MSDDetector_to_Feature2D(cv::xfeatures2d::MSDDetector* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_MSDDetector_delete(cv::xfeatures2d::MSDDetector* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_PCTSignatures_create_const_int_const_int_const_int(const int initSampleCount, const int initSeedCount, const int pointDistribution, Result<cv::Ptr<cv::xfeatures2d::PCTSignatures>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create(initSampleCount, initSeedCount, pointDistribution);
			Ok(new cv::Ptr<cv::xfeatures2d::PCTSignatures>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_create(Result<cv::Ptr<cv::xfeatures2d::PCTSignatures>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create();
			Ok(new cv::Ptr<cv::xfeatures2d::PCTSignatures>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_create_const_vectorLPoint2fGR_const_int(const std::vector<cv::Point2f>* initSamplingPoints, const int initSeedCount, Result<cv::Ptr<cv::xfeatures2d::PCTSignatures>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create(*initSamplingPoints, initSeedCount);
			Ok(new cv::Ptr<cv::xfeatures2d::PCTSignatures>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_create_const_vectorLPoint2fGR_const_vectorLintGR(const std::vector<cv::Point2f>* initSamplingPoints, const std::vector<int>* initClusterSeedIndexes, Result<cv::Ptr<cv::xfeatures2d::PCTSignatures>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create(*initSamplingPoints, *initClusterSeedIndexes);
			Ok(new cv::Ptr<cv::xfeatures2d::PCTSignatures>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_computeSignature_const_const__InputArrayR_const__OutputArrayR(const cv::xfeatures2d::PCTSignatures* instance, const cv::_InputArray* image, const cv::_OutputArray* signature, ResultVoid* ocvrs_return) {
		try {
			instance->computeSignature(*image, *signature);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_computeSignatures_const_const_vectorLMatGR_vectorLMatGR(const cv::xfeatures2d::PCTSignatures* instance, const std::vector<cv::Mat>* images, std::vector<cv::Mat>* signatures, ResultVoid* ocvrs_return) {
		try {
			instance->computeSignatures(*images, *signatures);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_drawSignature_const__InputArrayR_const__InputArrayR_const__OutputArrayR_float_int(const cv::_InputArray* source, const cv::_InputArray* signature, const cv::_OutputArray* result, float radiusToShorterSideRatio, int borderThickness, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::PCTSignatures::drawSignature(*source, *signature, *result, radiusToShorterSideRatio, borderThickness);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_drawSignature_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* source, const cv::_InputArray* signature, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::PCTSignatures::drawSignature(*source, *signature, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_generateInitPoints_vectorLPoint2fGR_const_int_int(std::vector<cv::Point2f>* initPoints, const int count, int pointDistribution, ResultVoid* ocvrs_return) {
		try {
			cv::xfeatures2d::PCTSignatures::generateInitPoints(*initPoints, count, pointDistribution);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getSampleCount_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSampleCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getGrayscaleBits_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getGrayscaleBits();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setGrayscaleBits_int(cv::xfeatures2d::PCTSignatures* instance, int grayscaleBits, ResultVoid* ocvrs_return) {
		try {
			instance->setGrayscaleBits(grayscaleBits);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWindowRadius_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWindowRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWindowRadius_int(cv::xfeatures2d::PCTSignatures* instance, int radius, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowRadius(radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightX_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightX();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightX_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightX(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightY_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightY();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightY_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightY(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightL_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightL();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightL_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightL(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightA_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightA();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightA_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightA(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightB_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightB();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightB_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightB(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightContrast_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightContrast();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightContrast_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightContrast(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getWeightEntropy_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getWeightEntropy();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeightEntropy_float(cv::xfeatures2d::PCTSignatures* instance, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->setWeightEntropy(weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getSamplingPoints_const(const cv::xfeatures2d::PCTSignatures* instance, Result<std::vector<cv::Point2f>*>* ocvrs_return) {
		try {
			std::vector<cv::Point2f> ret = instance->getSamplingPoints();
			Ok(new std::vector<cv::Point2f>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeight_int_float(cv::xfeatures2d::PCTSignatures* instance, int idx, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setWeight(idx, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setWeights_const_vectorLfloatGR(cv::xfeatures2d::PCTSignatures* instance, const std::vector<float>* weights, ResultVoid* ocvrs_return) {
		try {
			instance->setWeights(*weights);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setTranslation_int_float(cv::xfeatures2d::PCTSignatures* instance, int idx, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setTranslation(idx, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setTranslations_const_vectorLfloatGR(cv::xfeatures2d::PCTSignatures* instance, const std::vector<float>* translations, ResultVoid* ocvrs_return) {
		try {
			instance->setTranslations(*translations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setSamplingPoints_vectorLPoint2fG(cv::xfeatures2d::PCTSignatures* instance, std::vector<cv::Point2f>* samplingPoints, ResultVoid* ocvrs_return) {
		try {
			instance->setSamplingPoints(*samplingPoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getInitSeedIndexes_const(const cv::xfeatures2d::PCTSignatures* instance, Result<std::vector<int>*>* ocvrs_return) {
		try {
			std::vector<int> ret = instance->getInitSeedIndexes();
			Ok(new std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setInitSeedIndexes_vectorLintG(cv::xfeatures2d::PCTSignatures* instance, std::vector<int>* initSeedIndexes, ResultVoid* ocvrs_return) {
		try {
			instance->setInitSeedIndexes(*initSeedIndexes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getInitSeedCount_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getInitSeedCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getIterationCount_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIterationCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setIterationCount_int(cv::xfeatures2d::PCTSignatures* instance, int iterationCount, ResultVoid* ocvrs_return) {
		try {
			instance->setIterationCount(iterationCount);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getMaxClustersCount_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxClustersCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setMaxClustersCount_int(cv::xfeatures2d::PCTSignatures* instance, int maxClustersCount, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxClustersCount(maxClustersCount);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getClusterMinSize_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getClusterMinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setClusterMinSize_int(cv::xfeatures2d::PCTSignatures* instance, int clusterMinSize, ResultVoid* ocvrs_return) {
		try {
			instance->setClusterMinSize(clusterMinSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getJoiningDistance_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getJoiningDistance();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setJoiningDistance_float(cv::xfeatures2d::PCTSignatures* instance, float joiningDistance, ResultVoid* ocvrs_return) {
		try {
			instance->setJoiningDistance(joiningDistance);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getDropThreshold_const(const cv::xfeatures2d::PCTSignatures* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getDropThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setDropThreshold_float(cv::xfeatures2d::PCTSignatures* instance, float dropThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->setDropThreshold(dropThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_getDistanceFunction_const(const cv::xfeatures2d::PCTSignatures* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDistanceFunction();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignatures_setDistanceFunction_int(cv::xfeatures2d::PCTSignatures* instance, int distanceFunction, ResultVoid* ocvrs_return) {
		try {
			instance->setDistanceFunction(distanceFunction);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_PCTSignatures_to_Algorithm(cv::xfeatures2d::PCTSignatures* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_xfeatures2d_PCTSignatures_delete(cv::xfeatures2d::PCTSignatures* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_PCTSignaturesSQFD_create_const_int_const_int_const_float(const int distanceFunction, const int similarityFunction, const float similarityParameter, Result<cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD> ret = cv::xfeatures2d::PCTSignaturesSQFD::create(distanceFunction, similarityFunction, similarityParameter);
			Ok(new cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignaturesSQFD_create(Result<cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD> ret = cv::xfeatures2d::PCTSignaturesSQFD::create();
			Ok(new cv::Ptr<cv::xfeatures2d::PCTSignaturesSQFD>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistance_const_const__InputArrayR_const__InputArrayR(const cv::xfeatures2d::PCTSignaturesSQFD* instance, const cv::_InputArray* _signature0, const cv::_InputArray* _signature1, Result<float>* ocvrs_return) {
		try {
			float ret = instance->computeQuadraticFormDistance(*_signature0, *_signature1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistances_const_const_MatR_const_vectorLMatGR_vectorLfloatGR(const cv::xfeatures2d::PCTSignaturesSQFD* instance, const cv::Mat* sourceSignature, const std::vector<cv::Mat>* imageSignatures, std::vector<float>* distances, ResultVoid* ocvrs_return) {
		try {
			instance->computeQuadraticFormDistances(*sourceSignature, *imageSignatures, *distances);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_PCTSignaturesSQFD_to_Algorithm(cv::xfeatures2d::PCTSignaturesSQFD* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_xfeatures2d_PCTSignaturesSQFD_delete(cv::xfeatures2d::PCTSignaturesSQFD* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_SURF_create_double_int_int_bool_bool(double hessianThreshold, int nOctaves, int nOctaveLayers, bool extended, bool upright, Result<cv::Ptr<cv::xfeatures2d::SURF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::SURF> ret = cv::xfeatures2d::SURF::create(hessianThreshold, nOctaves, nOctaveLayers, extended, upright);
			Ok(new cv::Ptr<cv::xfeatures2d::SURF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_create(Result<cv::Ptr<cv::xfeatures2d::SURF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::SURF> ret = cv::xfeatures2d::SURF::create();
			Ok(new cv::Ptr<cv::xfeatures2d::SURF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_setHessianThreshold_double(cv::xfeatures2d::SURF* instance, double hessianThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->setHessianThreshold(hessianThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_getHessianThreshold_const(const cv::xfeatures2d::SURF* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getHessianThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_setNOctaves_int(cv::xfeatures2d::SURF* instance, int nOctaves, ResultVoid* ocvrs_return) {
		try {
			instance->setNOctaves(nOctaves);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_getNOctaves_const(const cv::xfeatures2d::SURF* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNOctaves();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_setNOctaveLayers_int(cv::xfeatures2d::SURF* instance, int nOctaveLayers, ResultVoid* ocvrs_return) {
		try {
			instance->setNOctaveLayers(nOctaveLayers);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_getNOctaveLayers_const(const cv::xfeatures2d::SURF* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNOctaveLayers();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_setExtended_bool(cv::xfeatures2d::SURF* instance, bool extended, ResultVoid* ocvrs_return) {
		try {
			instance->setExtended(extended);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_getExtended_const(const cv::xfeatures2d::SURF* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getExtended();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_setUpright_bool(cv::xfeatures2d::SURF* instance, bool upright, ResultVoid* ocvrs_return) {
		try {
			instance->setUpright(upright);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_getUpright_const(const cv::xfeatures2d::SURF* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUpright();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_SURF_getDefaultName_const(const cv::xfeatures2d::SURF* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_SURF_to_Algorithm(cv::xfeatures2d::SURF* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_SURF_to_Feature2D(cv::xfeatures2d::SURF* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_SURF_delete(cv::xfeatures2d::SURF* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_StarDetector_create_int_int_int_int_int(int maxSize, int responseThreshold, int lineThresholdProjected, int lineThresholdBinarized, int suppressNonmaxSize, Result<cv::Ptr<cv::xfeatures2d::StarDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::StarDetector> ret = cv::xfeatures2d::StarDetector::create(maxSize, responseThreshold, lineThresholdProjected, lineThresholdBinarized, suppressNonmaxSize);
			Ok(new cv::Ptr<cv::xfeatures2d::StarDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_create(Result<cv::Ptr<cv::xfeatures2d::StarDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::StarDetector> ret = cv::xfeatures2d::StarDetector::create();
			Ok(new cv::Ptr<cv::xfeatures2d::StarDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_setMaxSize_int(cv::xfeatures2d::StarDetector* instance, int _maxSize, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxSize(_maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_getMaxSize_const(const cv::xfeatures2d::StarDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_setResponseThreshold_int(cv::xfeatures2d::StarDetector* instance, int _responseThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->setResponseThreshold(_responseThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_getResponseThreshold_const(const cv::xfeatures2d::StarDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getResponseThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_setLineThresholdProjected_int(cv::xfeatures2d::StarDetector* instance, int _lineThresholdProjected, ResultVoid* ocvrs_return) {
		try {
			instance->setLineThresholdProjected(_lineThresholdProjected);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_getLineThresholdProjected_const(const cv::xfeatures2d::StarDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLineThresholdProjected();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_setLineThresholdBinarized_int(cv::xfeatures2d::StarDetector* instance, int _lineThresholdBinarized, ResultVoid* ocvrs_return) {
		try {
			instance->setLineThresholdBinarized(_lineThresholdBinarized);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_getLineThresholdBinarized_const(const cv::xfeatures2d::StarDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLineThresholdBinarized();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_setSuppressNonmaxSize_int(cv::xfeatures2d::StarDetector* instance, int _suppressNonmaxSize, ResultVoid* ocvrs_return) {
		try {
			instance->setSuppressNonmaxSize(_suppressNonmaxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_getSuppressNonmaxSize_const(const cv::xfeatures2d::StarDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSuppressNonmaxSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_StarDetector_getDefaultName_const(const cv::xfeatures2d::StarDetector* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_StarDetector_to_Algorithm(cv::xfeatures2d::StarDetector* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_StarDetector_to_Feature2D(cv::xfeatures2d::StarDetector* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_StarDetector_delete(cv::xfeatures2d::StarDetector* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_TBMR_create_int_float_float_int(int min_area, float max_area_relative, float scale_factor, int n_scales, Result<cv::Ptr<cv::xfeatures2d::TBMR>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::TBMR> ret = cv::xfeatures2d::TBMR::create(min_area, max_area_relative, scale_factor, n_scales);
			Ok(new cv::Ptr<cv::xfeatures2d::TBMR>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_create(Result<cv::Ptr<cv::xfeatures2d::TBMR>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::TBMR> ret = cv::xfeatures2d::TBMR::create();
			Ok(new cv::Ptr<cv::xfeatures2d::TBMR>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_setMinArea_int(cv::xfeatures2d::TBMR* instance, int minArea, ResultVoid* ocvrs_return) {
		try {
			instance->setMinArea(minArea);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_getMinArea_const(const cv::xfeatures2d::TBMR* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinArea();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_setMaxAreaRelative_float(cv::xfeatures2d::TBMR* instance, float maxArea, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxAreaRelative(maxArea);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_getMaxAreaRelative_const(const cv::xfeatures2d::TBMR* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMaxAreaRelative();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_setScaleFactor_float(cv::xfeatures2d::TBMR* instance, float scale_factor, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(scale_factor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_getScaleFactor_const(const cv::xfeatures2d::TBMR* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_setNScales_int(cv::xfeatures2d::TBMR* instance, int n_scales, ResultVoid* ocvrs_return) {
		try {
			instance->setNScales(n_scales);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_getNScales_const(const cv::xfeatures2d::TBMR* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNScales();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TBMR_getDefaultName_const(const cv::xfeatures2d::TBMR* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::xfeatures2d::AffineFeature2D* cv_xfeatures2d_TBMR_to_AffineFeature2D(cv::xfeatures2d::TBMR* instance) {
			return dynamic_cast<cv::xfeatures2d::AffineFeature2D*>(instance);
	}
	
	cv::Algorithm* cv_xfeatures2d_TBMR_to_Algorithm(cv::xfeatures2d::TBMR* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_TBMR_to_Feature2D(cv::xfeatures2d::TBMR* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_TBMR_delete(cv::xfeatures2d::TBMR* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_TEBLID_create_float_int(float scale_factor, int n_bits, Result<cv::Ptr<cv::xfeatures2d::TEBLID>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::TEBLID> ret = cv::xfeatures2d::TEBLID::create(scale_factor, n_bits);
			Ok(new cv::Ptr<cv::xfeatures2d::TEBLID>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TEBLID_create_float(float scale_factor, Result<cv::Ptr<cv::xfeatures2d::TEBLID>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::TEBLID> ret = cv::xfeatures2d::TEBLID::create(scale_factor);
			Ok(new cv::Ptr<cv::xfeatures2d::TEBLID>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_TEBLID_getDefaultName_const(const cv::xfeatures2d::TEBLID* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::xfeatures2d::TEBLID* cv_xfeatures2d_TEBLID_defaultNew_const() {
			cv::xfeatures2d::TEBLID* ret = new cv::xfeatures2d::TEBLID();
			return ret;
	}
	
	cv::Algorithm* cv_xfeatures2d_TEBLID_to_Algorithm(cv::xfeatures2d::TEBLID* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_TEBLID_to_Feature2D(cv::xfeatures2d::TEBLID* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_TEBLID_delete(cv::xfeatures2d::TEBLID* instance) {
			delete instance;
	}
	
	void cv_xfeatures2d_VGG_create_int_float_bool_bool_float_bool(int desc, float isigma, bool img_normalize, bool use_scale_orientation, float scale_factor, bool dsc_normalize, Result<cv::Ptr<cv::xfeatures2d::VGG>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::VGG> ret = cv::xfeatures2d::VGG::create(desc, isigma, img_normalize, use_scale_orientation, scale_factor, dsc_normalize);
			Ok(new cv::Ptr<cv::xfeatures2d::VGG>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_create(Result<cv::Ptr<cv::xfeatures2d::VGG>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::xfeatures2d::VGG> ret = cv::xfeatures2d::VGG::create();
			Ok(new cv::Ptr<cv::xfeatures2d::VGG>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_getDefaultName_const(const cv::xfeatures2d::VGG* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_setSigma_const_float(cv::xfeatures2d::VGG* instance, const float isigma, ResultVoid* ocvrs_return) {
		try {
			instance->setSigma(isigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_getSigma_const(const cv::xfeatures2d::VGG* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_setUseNormalizeImage_const_bool(cv::xfeatures2d::VGG* instance, const bool img_normalize, ResultVoid* ocvrs_return) {
		try {
			instance->setUseNormalizeImage(img_normalize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_getUseNormalizeImage_const(const cv::xfeatures2d::VGG* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseNormalizeImage();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_setUseScaleOrientation_const_bool(cv::xfeatures2d::VGG* instance, const bool use_scale_orientation, ResultVoid* ocvrs_return) {
		try {
			instance->setUseScaleOrientation(use_scale_orientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_getUseScaleOrientation_const(const cv::xfeatures2d::VGG* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseScaleOrientation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_setScaleFactor_const_float(cv::xfeatures2d::VGG* instance, const float scale_factor, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(scale_factor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_getScaleFactor_const(const cv::xfeatures2d::VGG* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_setUseNormalizeDescriptor_const_bool(cv::xfeatures2d::VGG* instance, const bool dsc_normalize, ResultVoid* ocvrs_return) {
		try {
			instance->setUseNormalizeDescriptor(dsc_normalize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_xfeatures2d_VGG_getUseNormalizeDescriptor_const(const cv::xfeatures2d::VGG* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseNormalizeDescriptor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_xfeatures2d_VGG_to_Algorithm(cv::xfeatures2d::VGG* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::Feature2D* cv_xfeatures2d_VGG_to_Feature2D(cv::xfeatures2d::VGG* instance) {
			return dynamic_cast<cv::Feature2D*>(instance);
	}
	
	void cv_xfeatures2d_VGG_delete(cv::xfeatures2d::VGG* instance) {
			delete instance;
	}
	
}
