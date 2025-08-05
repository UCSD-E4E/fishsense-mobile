#include "ocvrs_common.hpp"
#include <opencv2/rgbd.hpp>
#include "rgbd_types.hpp"

extern "C" {
	void cv_kinfu_makeVolume_VolumeType_float_Matx44f_float_float_int_float_Vec3i(cv::kinfu::VolumeType _volumeType, float _voxelSize, cv::Matx44f* _pose, float _raycastStepFactor, float _truncDist, int _maxWeight, float _truncateThreshold, cv::Vec3i* _resolution, Result<cv::Ptr<cv::kinfu::Volume>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::Volume> ret = cv::kinfu::makeVolume(_volumeType, _voxelSize, *_pose, _raycastStepFactor, _truncDist, _maxWeight, _truncateThreshold, *_resolution);
			Ok(new cv::Ptr<cv::kinfu::Volume>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_colormap_const_MatR_MatR(const cv::Mat* quantized, cv::Mat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::linemod::colormap(*quantized, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_drawFeatures_const__InputOutputArrayR_const_vectorLTemplateGR_const_Point2iR(const cv::_InputOutputArray* img, const std::vector<cv::linemod::Template>* templates, const cv::Point2i* tl, ResultVoid* ocvrs_return) {
		try {
			cv::linemod::drawFeatures(*img, *templates, *tl);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_drawFeatures_const__InputOutputArrayR_const_vectorLTemplateGR_const_Point2iR_int(const cv::_InputOutputArray* img, const std::vector<cv::linemod::Template>* templates, const cv::Point2i* tl, int size, ResultVoid* ocvrs_return) {
		try {
			cv::linemod::drawFeatures(*img, *templates, *tl, size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_getDefaultLINE(Result<cv::Ptr<cv::linemod::Detector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::Detector> ret = cv::linemod::getDefaultLINE();
			Ok(new cv::Ptr<cv::linemod::Detector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_getDefaultLINEMOD(Result<cv::Ptr<cv::linemod::Detector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::Detector> ret = cv::linemod::getDefaultLINEMOD();
			Ok(new cv::Ptr<cv::linemod::Detector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_depthTo3dSparse_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* depth, const cv::_InputArray* in_K, const cv::_InputArray* in_points, const cv::_OutputArray* points3d, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::depthTo3dSparse(*depth, *in_K, *in_points, *points3d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_depthTo3d_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* depth, const cv::_InputArray* K, const cv::_OutputArray* points3d, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::depthTo3d(*depth, *K, *points3d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_depthTo3d_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* depth, const cv::_InputArray* K, const cv::_OutputArray* points3d, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::depthTo3d(*depth, *K, *points3d, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_isValidDepth_const_doubleR(const double* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::rgbd::isValidDepth(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_isValidDepth_const_floatR(const float* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::rgbd::isValidDepth(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_isValidDepth_const_intR(const int* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::rgbd::isValidDepth(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_isValidDepth_const_shortR(const short* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::rgbd::isValidDepth(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_isValidDepth_const_unsigned_intR(const unsigned int* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::rgbd::isValidDepth(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_isValidDepth_const_unsigned_shortR(const unsigned short* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::rgbd::isValidDepth(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_registerDepth_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_const__OutputArrayR(const cv::_InputArray* unregisteredCameraMatrix, const cv::_InputArray* registeredCameraMatrix, const cv::_InputArray* registeredDistCoeffs, const cv::_InputArray* Rt, const cv::_InputArray* unregisteredDepth, const cv::Size* outputImagePlaneSize, const cv::_OutputArray* registeredDepth, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::registerDepth(*unregisteredCameraMatrix, *registeredCameraMatrix, *registeredDistCoeffs, *Rt, *unregisteredDepth, *outputImagePlaneSize, *registeredDepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_registerDepth_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_const__OutputArrayR_bool(const cv::_InputArray* unregisteredCameraMatrix, const cv::_InputArray* registeredCameraMatrix, const cv::_InputArray* registeredDistCoeffs, const cv::_InputArray* Rt, const cv::_InputArray* unregisteredDepth, const cv::Size* outputImagePlaneSize, const cv::_OutputArray* registeredDepth, bool depthDilation, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::registerDepth(*unregisteredCameraMatrix, *registeredCameraMatrix, *registeredDistCoeffs, *Rt, *unregisteredDepth, *outputImagePlaneSize, *registeredDepth, depthDilation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_rescaleDepth_const__InputArrayR_int_const__OutputArrayR(const cv::_InputArray* in, int depth, const cv::_OutputArray* out, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::rescaleDepth(*in, depth, *out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_rescaleDepth_const__InputArrayR_int_const__OutputArrayR_double(const cv::_InputArray* in, int depth, const cv::_OutputArray* out, double depth_factor, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::rescaleDepth(*in, depth, *out, depth_factor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_warpFrame_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const__OutputArrayR(const cv::Mat* image, const cv::Mat* depth, const cv::Mat* mask, const cv::Mat* Rt, const cv::Mat* cameraMatrix, const cv::Mat* distCoeff, const cv::_OutputArray* warpedImage, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::warpFrame(*image, *depth, *mask, *Rt, *cameraMatrix, *distCoeff, *warpedImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_warpFrame_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::Mat* image, const cv::Mat* depth, const cv::Mat* mask, const cv::Mat* Rt, const cv::Mat* cameraMatrix, const cv::Mat* distCoeff, const cv::_OutputArray* warpedImage, const cv::_OutputArray* warpedDepth, const cv::_OutputArray* warpedMask, ResultVoid* ocvrs_return) {
		try {
			cv::rgbd::warpFrame(*image, *depth, *mask, *Rt, *cameraMatrix, *distCoeff, *warpedImage, *warpedDepth, *warpedMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_create_const_PtrLParamsGR(const cv::Ptr<cv::colored_kinfu::Params>* _params, Result<cv::Ptr<cv::colored_kinfu::ColoredKinFu>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::colored_kinfu::ColoredKinFu> ret = cv::colored_kinfu::ColoredKinFu::create(*_params);
			Ok(new cv::Ptr<cv::colored_kinfu::ColoredKinFu>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_getParams_const(const cv::colored_kinfu::ColoredKinFu* instance, Result<cv::colored_kinfu::Params*>* ocvrs_return) {
		try {
			const cv::colored_kinfu::Params ret = instance->getParams();
			Ok(new const cv::colored_kinfu::Params(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_render_const_const__OutputArrayR(const cv::colored_kinfu::ColoredKinFu* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_render_const_const__OutputArrayR_const_Matx44fR(const cv::colored_kinfu::ColoredKinFu* instance, const cv::_OutputArray* image, const cv::Matx44f* cameraPose, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image, *cameraPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_getCloud_const_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::colored_kinfu::ColoredKinFu* instance, const cv::_OutputArray* points, const cv::_OutputArray* normals, const cv::_OutputArray* colors, ResultVoid* ocvrs_return) {
		try {
			instance->getCloud(*points, *normals, *colors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_getCloud_const_const__OutputArrayR_const__OutputArrayR(const cv::colored_kinfu::ColoredKinFu* instance, const cv::_OutputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getCloud(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_getPoints_const_const__OutputArrayR(const cv::colored_kinfu::ColoredKinFu* instance, const cv::_OutputArray* points, ResultVoid* ocvrs_return) {
		try {
			instance->getPoints(*points);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_getNormals_const_const__InputArrayR_const__OutputArrayR(const cv::colored_kinfu::ColoredKinFu* instance, const cv::_InputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getNormals(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_reset(cv::colored_kinfu::ColoredKinFu* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_getPose_const(const cv::colored_kinfu::ColoredKinFu* instance, Result<cv::Affine3f>* ocvrs_return) {
		try {
			cv::Affine3f ret = instance->getPose();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_update_const__InputArrayR_const__InputArrayR(cv::colored_kinfu::ColoredKinFu* instance, const cv::_InputArray* depth, const cv::_InputArray* rgb, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->update(*depth, *rgb);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_ColoredKinFu_delete(cv::colored_kinfu::ColoredKinFu* instance) {
			delete instance;
	}
	
	void cv_colored_kinfu_Params_Params(Result<cv::colored_kinfu::Params*>* ocvrs_return) {
		try {
			cv::colored_kinfu::Params* ret = new cv::colored_kinfu::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_Params_Matx33f_Vec3f(cv::Matx33f* volumeInitialPoseRot, cv::Vec3f* volumeInitialPoseTransl, Result<cv::colored_kinfu::Params*>* ocvrs_return) {
		try {
			cv::colored_kinfu::Params* ret = new cv::colored_kinfu::Params(*volumeInitialPoseRot, *volumeInitialPoseTransl);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_Params_Matx44f(cv::Matx44f* volumeInitialPose, Result<cv::colored_kinfu::Params*>* ocvrs_return) {
		try {
			cv::colored_kinfu::Params* ret = new cv::colored_kinfu::Params(*volumeInitialPose);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_setInitialVolumePose_Matx33f_Vec3f(cv::colored_kinfu::Params* instance, cv::Matx33f* R, cv::Vec3f* t, ResultVoid* ocvrs_return) {
		try {
			instance->setInitialVolumePose(*R, *t);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_setInitialVolumePose_Matx44f(cv::colored_kinfu::Params* instance, cv::Matx44f* homogen_tf, ResultVoid* ocvrs_return) {
		try {
			instance->setInitialVolumePose(*homogen_tf);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_defaultParams(Result<cv::Ptr<cv::colored_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::colored_kinfu::Params> ret = cv::colored_kinfu::Params::defaultParams();
			Ok(new cv::Ptr<cv::colored_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_coarseParams(Result<cv::Ptr<cv::colored_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::colored_kinfu::Params> ret = cv::colored_kinfu::Params::coarseParams();
			Ok(new cv::Ptr<cv::colored_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_hashTSDFParams_bool(bool isCoarse, Result<cv::Ptr<cv::colored_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::colored_kinfu::Params> ret = cv::colored_kinfu::Params::hashTSDFParams(isCoarse);
			Ok(new cv::Ptr<cv::colored_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_coloredTSDFParams_bool(bool isCoarse, Result<cv::Ptr<cv::colored_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::colored_kinfu::Params> ret = cv::colored_kinfu::Params::coloredTSDFParams(isCoarse);
			Ok(new cv::Ptr<cv::colored_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_colored_kinfu_Params_propFrameSize_const(const cv::colored_kinfu::Params* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->frameSize;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propFrameSize_const_Size(cv::colored_kinfu::Params* instance, const cv::Size* val) {
			instance->frameSize = *val;
	}
	
	void cv_colored_kinfu_Params_propRgb_frameSize_const(const cv::colored_kinfu::Params* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->rgb_frameSize;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propRgb_frameSize_const_Size(cv::colored_kinfu::Params* instance, const cv::Size* val) {
			instance->rgb_frameSize = *val;
	}
	
	void cv_colored_kinfu_Params_propVolumeType_const(const cv::colored_kinfu::Params* instance, cv::kinfu::VolumeType* ocvrs_return) {
			cv::kinfu::VolumeType ret = instance->volumeType;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propVolumeType_const_VolumeType(cv::colored_kinfu::Params* instance, const cv::kinfu::VolumeType val) {
			instance->volumeType = val;
	}
	
	void cv_colored_kinfu_Params_propIntr_const(const cv::colored_kinfu::Params* instance, cv::Matx33f* ocvrs_return) {
			cv::Matx33f ret = instance->intr;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propIntr_const_Matx33f(cv::colored_kinfu::Params* instance, const cv::Matx33f* val) {
			instance->intr = *val;
	}
	
	void cv_colored_kinfu_Params_propRgb_intr_const(const cv::colored_kinfu::Params* instance, cv::Matx33f* ocvrs_return) {
			cv::Matx33f ret = instance->rgb_intr;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propRgb_intr_const_Matx33f(cv::colored_kinfu::Params* instance, const cv::Matx33f* val) {
			instance->rgb_intr = *val;
	}
	
	float cv_colored_kinfu_Params_propDepthFactor_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->depthFactor;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propDepthFactor_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->depthFactor = val;
	}
	
	float cv_colored_kinfu_Params_propBilateral_sigma_depth_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->bilateral_sigma_depth;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propBilateral_sigma_depth_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->bilateral_sigma_depth = val;
	}
	
	float cv_colored_kinfu_Params_propBilateral_sigma_spatial_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->bilateral_sigma_spatial;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propBilateral_sigma_spatial_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->bilateral_sigma_spatial = val;
	}
	
	int cv_colored_kinfu_Params_propBilateral_kernel_size_const(const cv::colored_kinfu::Params* instance) {
			int ret = instance->bilateral_kernel_size;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propBilateral_kernel_size_const_int(cv::colored_kinfu::Params* instance, const int val) {
			instance->bilateral_kernel_size = val;
	}
	
	int cv_colored_kinfu_Params_propPyramidLevels_const(const cv::colored_kinfu::Params* instance) {
			int ret = instance->pyramidLevels;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propPyramidLevels_const_int(cv::colored_kinfu::Params* instance, const int val) {
			instance->pyramidLevels = val;
	}
	
	void cv_colored_kinfu_Params_propVolumeDims_const(const cv::colored_kinfu::Params* instance, cv::Vec3i* ocvrs_return) {
			cv::Vec3i ret = instance->volumeDims;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propVolumeDims_const_Vec3i(cv::colored_kinfu::Params* instance, const cv::Vec3i* val) {
			instance->volumeDims = *val;
	}
	
	float cv_colored_kinfu_Params_propVoxelSize_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->voxelSize;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propVoxelSize_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->voxelSize = val;
	}
	
	float cv_colored_kinfu_Params_propTsdf_min_camera_movement_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->tsdf_min_camera_movement;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propTsdf_min_camera_movement_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->tsdf_min_camera_movement = val;
	}
	
	void cv_colored_kinfu_Params_propVolumePose_const(const cv::colored_kinfu::Params* instance, cv::Affine3f* ocvrs_return) {
			cv::Affine3f ret = instance->volumePose;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propVolumePose_const_Affine3f(cv::colored_kinfu::Params* instance, const cv::Affine3f* val) {
			instance->volumePose = *val;
	}
	
	float cv_colored_kinfu_Params_propTsdf_trunc_dist_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->tsdf_trunc_dist;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propTsdf_trunc_dist_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->tsdf_trunc_dist = val;
	}
	
	int cv_colored_kinfu_Params_propTsdf_max_weight_const(const cv::colored_kinfu::Params* instance) {
			int ret = instance->tsdf_max_weight;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propTsdf_max_weight_const_int(cv::colored_kinfu::Params* instance, const int val) {
			instance->tsdf_max_weight = val;
	}
	
	float cv_colored_kinfu_Params_propRaycast_step_factor_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->raycast_step_factor;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propRaycast_step_factor_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->raycast_step_factor = val;
	}
	
	void cv_colored_kinfu_Params_propLightPose_const(const cv::colored_kinfu::Params* instance, cv::Vec3f* ocvrs_return) {
			cv::Vec3f ret = instance->lightPose;
			*ocvrs_return = ret;
	}
	
	void cv_colored_kinfu_Params_propLightPose_const_Vec3f(cv::colored_kinfu::Params* instance, const cv::Vec3f* val) {
			instance->lightPose = *val;
	}
	
	float cv_colored_kinfu_Params_propIcpDistThresh_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->icpDistThresh;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propIcpDistThresh_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->icpDistThresh = val;
	}
	
	float cv_colored_kinfu_Params_propIcpAngleThresh_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->icpAngleThresh;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propIcpAngleThresh_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->icpAngleThresh = val;
	}
	
	std::vector<int>* cv_colored_kinfu_Params_propIcpIterations_const(const cv::colored_kinfu::Params* instance) {
			std::vector<int> ret = instance->icpIterations;
			return new std::vector<int>(ret);
	}
	
	void cv_colored_kinfu_Params_propIcpIterations_const_vectorLintG(cv::colored_kinfu::Params* instance, const std::vector<int>* val) {
			instance->icpIterations = *val;
	}
	
	float cv_colored_kinfu_Params_propTruncateThreshold_const(const cv::colored_kinfu::Params* instance) {
			float ret = instance->truncateThreshold;
			return ret;
	}
	
	void cv_colored_kinfu_Params_propTruncateThreshold_const_float(cv::colored_kinfu::Params* instance, const float val) {
			instance->truncateThreshold = val;
	}
	
	void cv_colored_kinfu_Params_delete(cv::colored_kinfu::Params* instance) {
			delete instance;
	}
	
	void cv_dynafu_DynaFu_create_const_PtrLParamsGR(const cv::Ptr<cv::kinfu::Params>* _params, Result<cv::Ptr<cv::dynafu::DynaFu>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dynafu::DynaFu> ret = cv::dynafu::DynaFu::create(*_params);
			Ok(new cv::Ptr<cv::dynafu::DynaFu>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_getParams_const(const cv::dynafu::DynaFu* instance, Result<cv::kinfu::Params*>* ocvrs_return) {
		try {
			const cv::kinfu::Params ret = instance->getParams();
			Ok(new const cv::kinfu::Params(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_render_const_const__OutputArrayR_const_Matx44fR(const cv::dynafu::DynaFu* instance, const cv::_OutputArray* image, const cv::Matx44f* cameraPose, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image, *cameraPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_render_const_const__OutputArrayR(const cv::dynafu::DynaFu* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_getCloud_const_const__OutputArrayR_const__OutputArrayR(const cv::dynafu::DynaFu* instance, const cv::_OutputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getCloud(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_getPoints_const_const__OutputArrayR(const cv::dynafu::DynaFu* instance, const cv::_OutputArray* points, ResultVoid* ocvrs_return) {
		try {
			instance->getPoints(*points);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_getNormals_const_const__InputArrayR_const__OutputArrayR(const cv::dynafu::DynaFu* instance, const cv::_InputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getNormals(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_reset(cv::dynafu::DynaFu* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_getPose_const(const cv::dynafu::DynaFu* instance, Result<cv::Affine3f>* ocvrs_return) {
		try {
			cv::Affine3f ret = instance->getPose();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_update_const__InputArrayR(cv::dynafu::DynaFu* instance, const cv::_InputArray* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->update(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_getNodesPos_const(const cv::dynafu::DynaFu* instance, Result<std::vector<cv::Point3f>*>* ocvrs_return) {
		try {
			std::vector<cv::Point3f> ret = instance->getNodesPos();
			Ok(new std::vector<cv::Point3f>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_marchCubes_const_const__OutputArrayR_const__OutputArrayR(const cv::dynafu::DynaFu* instance, const cv::_OutputArray* vertices, const cv::_OutputArray* edges, ResultVoid* ocvrs_return) {
		try {
			instance->marchCubes(*vertices, *edges);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_renderSurface_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_bool(cv::dynafu::DynaFu* instance, const cv::_OutputArray* depthImage, const cv::_OutputArray* vertImage, const cv::_OutputArray* normImage, bool warp, ResultVoid* ocvrs_return) {
		try {
			instance->renderSurface(*depthImage, *vertImage, *normImage, warp);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_renderSurface_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::dynafu::DynaFu* instance, const cv::_OutputArray* depthImage, const cv::_OutputArray* vertImage, const cv::_OutputArray* normImage, ResultVoid* ocvrs_return) {
		try {
			instance->renderSurface(*depthImage, *vertImage, *normImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dynafu_DynaFu_delete(cv::dynafu::DynaFu* instance) {
			delete instance;
	}
	
	void cv_kinfu_Intr_Intr(Result<cv::kinfu::Intr>* ocvrs_return) {
		try {
			cv::kinfu::Intr ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_Intr_float_float_float_float(float _fx, float _fy, float _cx, float _cy, Result<cv::kinfu::Intr>* ocvrs_return) {
		try {
			cv::kinfu::Intr ret(_fx, _fy, _cx, _cy);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_Intr_Matx33f(cv::Matx33f* m, Result<cv::kinfu::Intr>* ocvrs_return) {
		try {
			cv::kinfu::Intr ret(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_scale_const_int(const cv::kinfu::Intr* instance, int pyr, Result<cv::kinfu::Intr>* ocvrs_return) {
		try {
			cv::kinfu::Intr ret = instance->scale(pyr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_makeReprojector_const(const cv::kinfu::Intr* instance, Result<cv::kinfu::Intr::Reprojector>* ocvrs_return) {
		try {
			cv::kinfu::Intr::Reprojector ret = instance->makeReprojector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_makeProjector_const(const cv::kinfu::Intr* instance, Result<cv::kinfu::Intr::Projector>* ocvrs_return) {
		try {
			cv::kinfu::Intr::Projector ret = instance->makeProjector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_getMat_const(const cv::kinfu::Intr* instance, Result<cv::Matx33f>* ocvrs_return) {
		try {
			cv::Matx33f ret = instance->getMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_Projector_Projector_Intr(cv::kinfu::Intr* intr, Result<cv::kinfu::Intr::Projector>* ocvrs_return) {
		try {
			cv::kinfu::Intr::Projector ret(*intr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_Reprojector_Reprojector(Result<cv::kinfu::Intr::Reprojector>* ocvrs_return) {
		try {
			cv::kinfu::Intr::Reprojector ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Intr_Reprojector_Reprojector_Intr(cv::kinfu::Intr* intr, Result<cv::kinfu::Intr::Reprojector>* ocvrs_return) {
		try {
			cv::kinfu::Intr::Reprojector ret(*intr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_create_const_PtrLParamsGR(const cv::Ptr<cv::kinfu::Params>* _params, Result<cv::Ptr<cv::kinfu::KinFu>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::KinFu> ret = cv::kinfu::KinFu::create(*_params);
			Ok(new cv::Ptr<cv::kinfu::KinFu>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_getParams_const(const cv::kinfu::KinFu* instance, Result<cv::kinfu::Params*>* ocvrs_return) {
		try {
			const cv::kinfu::Params ret = instance->getParams();
			Ok(new const cv::kinfu::Params(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_render_const_const__OutputArrayR(const cv::kinfu::KinFu* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_render_const_const__OutputArrayR_const_Matx44fR(const cv::kinfu::KinFu* instance, const cv::_OutputArray* image, const cv::Matx44f* cameraPose, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image, *cameraPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_getCloud_const_const__OutputArrayR_const__OutputArrayR(const cv::kinfu::KinFu* instance, const cv::_OutputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getCloud(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_getPoints_const_const__OutputArrayR(const cv::kinfu::KinFu* instance, const cv::_OutputArray* points, ResultVoid* ocvrs_return) {
		try {
			instance->getPoints(*points);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_getNormals_const_const__InputArrayR_const__OutputArrayR(const cv::kinfu::KinFu* instance, const cv::_InputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getNormals(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_reset(cv::kinfu::KinFu* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_getPose_const(const cv::kinfu::KinFu* instance, Result<cv::Affine3f>* ocvrs_return) {
		try {
			cv::Affine3f ret = instance->getPose();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_update_const__InputArrayR(cv::kinfu::KinFu* instance, const cv::_InputArray* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->update(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_KinFu_delete(cv::kinfu::KinFu* instance) {
			delete instance;
	}
	
	void cv_kinfu_Params_Params(Result<cv::kinfu::Params*>* ocvrs_return) {
		try {
			cv::kinfu::Params* ret = new cv::kinfu::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_Params_Matx33f_Vec3f(cv::Matx33f* volumeInitialPoseRot, cv::Vec3f* volumeInitialPoseTransl, Result<cv::kinfu::Params*>* ocvrs_return) {
		try {
			cv::kinfu::Params* ret = new cv::kinfu::Params(*volumeInitialPoseRot, *volumeInitialPoseTransl);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_Params_Matx44f(cv::Matx44f* volumeInitialPose, Result<cv::kinfu::Params*>* ocvrs_return) {
		try {
			cv::kinfu::Params* ret = new cv::kinfu::Params(*volumeInitialPose);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_setInitialVolumePose_Matx33f_Vec3f(cv::kinfu::Params* instance, cv::Matx33f* R, cv::Vec3f* t, ResultVoid* ocvrs_return) {
		try {
			instance->setInitialVolumePose(*R, *t);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_setInitialVolumePose_Matx44f(cv::kinfu::Params* instance, cv::Matx44f* homogen_tf, ResultVoid* ocvrs_return) {
		try {
			instance->setInitialVolumePose(*homogen_tf);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_defaultParams(Result<cv::Ptr<cv::kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::Params> ret = cv::kinfu::Params::defaultParams();
			Ok(new cv::Ptr<cv::kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_coarseParams(Result<cv::Ptr<cv::kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::Params> ret = cv::kinfu::Params::coarseParams();
			Ok(new cv::Ptr<cv::kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_hashTSDFParams_bool(bool isCoarse, Result<cv::Ptr<cv::kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::Params> ret = cv::kinfu::Params::hashTSDFParams(isCoarse);
			Ok(new cv::Ptr<cv::kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_coloredTSDFParams_bool(bool isCoarse, Result<cv::Ptr<cv::kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::Params> ret = cv::kinfu::Params::coloredTSDFParams(isCoarse);
			Ok(new cv::Ptr<cv::kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Params_propFrameSize_const(const cv::kinfu::Params* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->frameSize;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propFrameSize_const_Size(cv::kinfu::Params* instance, const cv::Size* val) {
			instance->frameSize = *val;
	}
	
	void cv_kinfu_Params_propVolumeType_const(const cv::kinfu::Params* instance, cv::kinfu::VolumeType* ocvrs_return) {
			cv::kinfu::VolumeType ret = instance->volumeType;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propVolumeType_const_VolumeType(cv::kinfu::Params* instance, const cv::kinfu::VolumeType val) {
			instance->volumeType = val;
	}
	
	void cv_kinfu_Params_propIntr_const(const cv::kinfu::Params* instance, cv::Matx33f* ocvrs_return) {
			cv::Matx33f ret = instance->intr;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propIntr_const_Matx33f(cv::kinfu::Params* instance, const cv::Matx33f* val) {
			instance->intr = *val;
	}
	
	void cv_kinfu_Params_propRgb_intr_const(const cv::kinfu::Params* instance, cv::Matx33f* ocvrs_return) {
			cv::Matx33f ret = instance->rgb_intr;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propRgb_intr_const_Matx33f(cv::kinfu::Params* instance, const cv::Matx33f* val) {
			instance->rgb_intr = *val;
	}
	
	float cv_kinfu_Params_propDepthFactor_const(const cv::kinfu::Params* instance) {
			float ret = instance->depthFactor;
			return ret;
	}
	
	void cv_kinfu_Params_propDepthFactor_const_float(cv::kinfu::Params* instance, const float val) {
			instance->depthFactor = val;
	}
	
	float cv_kinfu_Params_propBilateral_sigma_depth_const(const cv::kinfu::Params* instance) {
			float ret = instance->bilateral_sigma_depth;
			return ret;
	}
	
	void cv_kinfu_Params_propBilateral_sigma_depth_const_float(cv::kinfu::Params* instance, const float val) {
			instance->bilateral_sigma_depth = val;
	}
	
	float cv_kinfu_Params_propBilateral_sigma_spatial_const(const cv::kinfu::Params* instance) {
			float ret = instance->bilateral_sigma_spatial;
			return ret;
	}
	
	void cv_kinfu_Params_propBilateral_sigma_spatial_const_float(cv::kinfu::Params* instance, const float val) {
			instance->bilateral_sigma_spatial = val;
	}
	
	int cv_kinfu_Params_propBilateral_kernel_size_const(const cv::kinfu::Params* instance) {
			int ret = instance->bilateral_kernel_size;
			return ret;
	}
	
	void cv_kinfu_Params_propBilateral_kernel_size_const_int(cv::kinfu::Params* instance, const int val) {
			instance->bilateral_kernel_size = val;
	}
	
	int cv_kinfu_Params_propPyramidLevels_const(const cv::kinfu::Params* instance) {
			int ret = instance->pyramidLevels;
			return ret;
	}
	
	void cv_kinfu_Params_propPyramidLevels_const_int(cv::kinfu::Params* instance, const int val) {
			instance->pyramidLevels = val;
	}
	
	void cv_kinfu_Params_propVolumeDims_const(const cv::kinfu::Params* instance, cv::Vec3i* ocvrs_return) {
			cv::Vec3i ret = instance->volumeDims;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propVolumeDims_const_Vec3i(cv::kinfu::Params* instance, const cv::Vec3i* val) {
			instance->volumeDims = *val;
	}
	
	float cv_kinfu_Params_propVoxelSize_const(const cv::kinfu::Params* instance) {
			float ret = instance->voxelSize;
			return ret;
	}
	
	void cv_kinfu_Params_propVoxelSize_const_float(cv::kinfu::Params* instance, const float val) {
			instance->voxelSize = val;
	}
	
	float cv_kinfu_Params_propTsdf_min_camera_movement_const(const cv::kinfu::Params* instance) {
			float ret = instance->tsdf_min_camera_movement;
			return ret;
	}
	
	void cv_kinfu_Params_propTsdf_min_camera_movement_const_float(cv::kinfu::Params* instance, const float val) {
			instance->tsdf_min_camera_movement = val;
	}
	
	void cv_kinfu_Params_propVolumePose_const(const cv::kinfu::Params* instance, cv::Affine3f* ocvrs_return) {
			cv::Affine3f ret = instance->volumePose;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propVolumePose_const_Affine3f(cv::kinfu::Params* instance, const cv::Affine3f* val) {
			instance->volumePose = *val;
	}
	
	float cv_kinfu_Params_propTsdf_trunc_dist_const(const cv::kinfu::Params* instance) {
			float ret = instance->tsdf_trunc_dist;
			return ret;
	}
	
	void cv_kinfu_Params_propTsdf_trunc_dist_const_float(cv::kinfu::Params* instance, const float val) {
			instance->tsdf_trunc_dist = val;
	}
	
	int cv_kinfu_Params_propTsdf_max_weight_const(const cv::kinfu::Params* instance) {
			int ret = instance->tsdf_max_weight;
			return ret;
	}
	
	void cv_kinfu_Params_propTsdf_max_weight_const_int(cv::kinfu::Params* instance, const int val) {
			instance->tsdf_max_weight = val;
	}
	
	float cv_kinfu_Params_propRaycast_step_factor_const(const cv::kinfu::Params* instance) {
			float ret = instance->raycast_step_factor;
			return ret;
	}
	
	void cv_kinfu_Params_propRaycast_step_factor_const_float(cv::kinfu::Params* instance, const float val) {
			instance->raycast_step_factor = val;
	}
	
	void cv_kinfu_Params_propLightPose_const(const cv::kinfu::Params* instance, cv::Vec3f* ocvrs_return) {
			cv::Vec3f ret = instance->lightPose;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_Params_propLightPose_const_Vec3f(cv::kinfu::Params* instance, const cv::Vec3f* val) {
			instance->lightPose = *val;
	}
	
	float cv_kinfu_Params_propIcpDistThresh_const(const cv::kinfu::Params* instance) {
			float ret = instance->icpDistThresh;
			return ret;
	}
	
	void cv_kinfu_Params_propIcpDistThresh_const_float(cv::kinfu::Params* instance, const float val) {
			instance->icpDistThresh = val;
	}
	
	float cv_kinfu_Params_propIcpAngleThresh_const(const cv::kinfu::Params* instance) {
			float ret = instance->icpAngleThresh;
			return ret;
	}
	
	void cv_kinfu_Params_propIcpAngleThresh_const_float(cv::kinfu::Params* instance, const float val) {
			instance->icpAngleThresh = val;
	}
	
	std::vector<int>* cv_kinfu_Params_propIcpIterations_const(const cv::kinfu::Params* instance) {
			std::vector<int> ret = instance->icpIterations;
			return new std::vector<int>(ret);
	}
	
	void cv_kinfu_Params_propIcpIterations_const_vectorLintG(cv::kinfu::Params* instance, const std::vector<int>* val) {
			instance->icpIterations = *val;
	}
	
	float cv_kinfu_Params_propTruncateThreshold_const(const cv::kinfu::Params* instance) {
			float ret = instance->truncateThreshold;
			return ret;
	}
	
	void cv_kinfu_Params_propTruncateThreshold_const_float(cv::kinfu::Params* instance, const float val) {
			instance->truncateThreshold = val;
	}
	
	void cv_kinfu_Params_delete(cv::kinfu::Params* instance) {
			delete instance;
	}
	
	void cv_kinfu_Volume_integrate_const__InputArrayR_float_const_Matx44fR_const_IntrR_const_int(cv::kinfu::Volume* instance, const cv::_InputArray* _depth, float depthFactor, const cv::Matx44f* cameraPose, const cv::kinfu::Intr* intrinsics, const int frameId, ResultVoid* ocvrs_return) {
		try {
			instance->integrate(*_depth, depthFactor, *cameraPose, *intrinsics, frameId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_integrate_const__InputArrayR_float_const_Matx44fR_const_IntrR(cv::kinfu::Volume* instance, const cv::_InputArray* _depth, float depthFactor, const cv::Matx44f* cameraPose, const cv::kinfu::Intr* intrinsics, ResultVoid* ocvrs_return) {
		try {
			instance->integrate(*_depth, depthFactor, *cameraPose, *intrinsics);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_integrate_const__InputArrayR_const__InputArrayR_float_const_Matx44fR_const_IntrR_const_IntrR_const_int(cv::kinfu::Volume* instance, const cv::_InputArray* _depth, const cv::_InputArray* _rgb, float depthFactor, const cv::Matx44f* cameraPose, const cv::kinfu::Intr* intrinsics, const cv::kinfu::Intr* rgb_intrinsics, const int frameId, ResultVoid* ocvrs_return) {
		try {
			instance->integrate(*_depth, *_rgb, depthFactor, *cameraPose, *intrinsics, *rgb_intrinsics, frameId);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_integrate_const__InputArrayR_const__InputArrayR_float_const_Matx44fR_const_IntrR_const_IntrR(cv::kinfu::Volume* instance, const cv::_InputArray* _depth, const cv::_InputArray* _rgb, float depthFactor, const cv::Matx44f* cameraPose, const cv::kinfu::Intr* intrinsics, const cv::kinfu::Intr* rgb_intrinsics, ResultVoid* ocvrs_return) {
		try {
			instance->integrate(*_depth, *_rgb, depthFactor, *cameraPose, *intrinsics, *rgb_intrinsics);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_raycast_const_const_Matx44fR_const_IntrR_const_SizeR_const__OutputArrayR_const__OutputArrayR(const cv::kinfu::Volume* instance, const cv::Matx44f* cameraPose, const cv::kinfu::Intr* intrinsics, const cv::Size* frameSize, const cv::_OutputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->raycast(*cameraPose, *intrinsics, *frameSize, *points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_raycast_const_const_Matx44fR_const_IntrR_const_SizeR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::kinfu::Volume* instance, const cv::Matx44f* cameraPose, const cv::kinfu::Intr* intrinsics, const cv::Size* frameSize, const cv::_OutputArray* points, const cv::_OutputArray* normals, const cv::_OutputArray* colors, ResultVoid* ocvrs_return) {
		try {
			instance->raycast(*cameraPose, *intrinsics, *frameSize, *points, *normals, *colors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_fetchNormals_const_const__InputArrayR_const__OutputArrayR(const cv::kinfu::Volume* instance, const cv::_InputArray* points, const cv::_OutputArray* _normals, ResultVoid* ocvrs_return) {
		try {
			instance->fetchNormals(*points, *_normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_fetchPointsNormals_const_const__OutputArrayR_const__OutputArrayR(const cv::kinfu::Volume* instance, const cv::_OutputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->fetchPointsNormals(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_fetchPointsNormalsColors_const_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::kinfu::Volume* instance, const cv::_OutputArray* unnamed, const cv::_OutputArray* unnamed_1, const cv::_OutputArray* unnamed_2, ResultVoid* ocvrs_return) {
		try {
			instance->fetchPointsNormalsColors(*unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_Volume_reset(cv::kinfu::Volume* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	const float cv_kinfu_Volume_propVoxelSize_const(const cv::kinfu::Volume* instance) {
			const float ret = instance->voxelSize;
			return ret;
	}
	
	const float cv_kinfu_Volume_propVoxelSizeInv_const(const cv::kinfu::Volume* instance) {
			const float ret = instance->voxelSizeInv;
			return ret;
	}
	
	void cv_kinfu_Volume_propPose_const(const cv::kinfu::Volume* instance, cv::Affine3f* ocvrs_return) {
			const cv::Affine3f ret = instance->pose;
			*ocvrs_return = ret;
	}
	
	const float cv_kinfu_Volume_propRaycastStepFactor_const(const cv::kinfu::Volume* instance) {
			const float ret = instance->raycastStepFactor;
			return ret;
	}
	
	void cv_kinfu_Volume_delete(cv::kinfu::Volume* instance) {
			delete instance;
	}
	
	void cv_kinfu_VolumeParams_defaultParams_VolumeType(cv::kinfu::VolumeType _volumeType, Result<cv::Ptr<cv::kinfu::VolumeParams>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::VolumeParams> ret = cv::kinfu::VolumeParams::defaultParams(_volumeType);
			Ok(new cv::Ptr<cv::kinfu::VolumeParams>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_VolumeParams_coarseParams_VolumeType(cv::kinfu::VolumeType _volumeType, Result<cv::Ptr<cv::kinfu::VolumeParams>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::VolumeParams> ret = cv::kinfu::VolumeParams::coarseParams(_volumeType);
			Ok(new cv::Ptr<cv::kinfu::VolumeParams>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::kinfu::VolumeParams* cv_kinfu_VolumeParams_defaultNew_const() {
			cv::kinfu::VolumeParams* ret = new cv::kinfu::VolumeParams();
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propType_const(const cv::kinfu::VolumeParams* instance, cv::kinfu::VolumeType* ocvrs_return) {
			cv::kinfu::VolumeType ret = instance->type;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_VolumeParams_propType_const_VolumeType(cv::kinfu::VolumeParams* instance, const cv::kinfu::VolumeType val) {
			instance->type = val;
	}
	
	void cv_kinfu_VolumeParams_propResolution_const(const cv::kinfu::VolumeParams* instance, cv::Vec3i* ocvrs_return) {
			cv::Vec3i ret = instance->resolution;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_VolumeParams_propResolution_const_Vec3i(cv::kinfu::VolumeParams* instance, const cv::Vec3i* val) {
			instance->resolution = *val;
	}
	
	int cv_kinfu_VolumeParams_propUnitResolution_const(const cv::kinfu::VolumeParams* instance) {
			int ret = instance->unitResolution;
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propUnitResolution_const_int(cv::kinfu::VolumeParams* instance, const int val) {
			instance->unitResolution = val;
	}
	
	void cv_kinfu_VolumeParams_propPose_const(const cv::kinfu::VolumeParams* instance, cv::Affine3f* ocvrs_return) {
			cv::Affine3f ret = instance->pose;
			*ocvrs_return = ret;
	}
	
	void cv_kinfu_VolumeParams_propPose_const_Affine3f(cv::kinfu::VolumeParams* instance, const cv::Affine3f* val) {
			instance->pose = *val;
	}
	
	float cv_kinfu_VolumeParams_propVoxelSize_const(const cv::kinfu::VolumeParams* instance) {
			float ret = instance->voxelSize;
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propVoxelSize_const_float(cv::kinfu::VolumeParams* instance, const float val) {
			instance->voxelSize = val;
	}
	
	float cv_kinfu_VolumeParams_propTsdfTruncDist_const(const cv::kinfu::VolumeParams* instance) {
			float ret = instance->tsdfTruncDist;
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propTsdfTruncDist_const_float(cv::kinfu::VolumeParams* instance, const float val) {
			instance->tsdfTruncDist = val;
	}
	
	int cv_kinfu_VolumeParams_propMaxWeight_const(const cv::kinfu::VolumeParams* instance) {
			int ret = instance->maxWeight;
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propMaxWeight_const_int(cv::kinfu::VolumeParams* instance, const int val) {
			instance->maxWeight = val;
	}
	
	float cv_kinfu_VolumeParams_propDepthTruncThreshold_const(const cv::kinfu::VolumeParams* instance) {
			float ret = instance->depthTruncThreshold;
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propDepthTruncThreshold_const_float(cv::kinfu::VolumeParams* instance, const float val) {
			instance->depthTruncThreshold = val;
	}
	
	float cv_kinfu_VolumeParams_propRaycastStepFactor_const(const cv::kinfu::VolumeParams* instance) {
			float ret = instance->raycastStepFactor;
			return ret;
	}
	
	void cv_kinfu_VolumeParams_propRaycastStepFactor_const_float(cv::kinfu::VolumeParams* instance, const float val) {
			instance->raycastStepFactor = val;
	}
	
	void cv_kinfu_VolumeParams_delete(cv::kinfu::VolumeParams* instance) {
			delete instance;
	}
	
	void cv_kinfu_detail_PoseGraph_create(Result<cv::Ptr<cv::kinfu::detail::PoseGraph>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::kinfu::detail::PoseGraph> ret = cv::kinfu::detail::PoseGraph::create();
			Ok(new cv::Ptr<cv::kinfu::detail::PoseGraph>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_addNode_size_t_const_Affine3dR_bool(cv::kinfu::detail::PoseGraph* instance, size_t _nodeId, const cv::Affine3d* _pose, bool fixed, ResultVoid* ocvrs_return) {
		try {
			instance->addNode(_nodeId, *_pose, fixed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_isNodeExist_const_size_t(const cv::kinfu::detail::PoseGraph* instance, size_t nodeId, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isNodeExist(nodeId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_setNodeFixed_size_t_bool(cv::kinfu::detail::PoseGraph* instance, size_t nodeId, bool fixed, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setNodeFixed(nodeId, fixed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_isNodeFixed_const_size_t(const cv::kinfu::detail::PoseGraph* instance, size_t nodeId, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isNodeFixed(nodeId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_getNodePose_const_size_t(const cv::kinfu::detail::PoseGraph* instance, size_t nodeId, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = instance->getNodePose(nodeId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_getNodesIds_const(const cv::kinfu::detail::PoseGraph* instance, Result<std::vector<size_t>*>* ocvrs_return) {
		try {
			std::vector<size_t> ret = instance->getNodesIds();
			Ok(new std::vector<size_t>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_getNumNodes_const(const cv::kinfu::detail::PoseGraph* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getNumNodes();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_addEdge_size_t_size_t_const_Affine3fR_const_Matx66fR(cv::kinfu::detail::PoseGraph* instance, size_t _sourceNodeId, size_t _targetNodeId, const cv::Affine3f* _transformation, const cv::Matx66f* _information, ResultVoid* ocvrs_return) {
		try {
			instance->addEdge(_sourceNodeId, _targetNodeId, *_transformation, *_information);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_addEdge_size_t_size_t_const_Affine3fR(cv::kinfu::detail::PoseGraph* instance, size_t _sourceNodeId, size_t _targetNodeId, const cv::Affine3f* _transformation, ResultVoid* ocvrs_return) {
		try {
			instance->addEdge(_sourceNodeId, _targetNodeId, *_transformation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_getEdgeStart_const_size_t(const cv::kinfu::detail::PoseGraph* instance, size_t i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getEdgeStart(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_getEdgeEnd_const_size_t(const cv::kinfu::detail::PoseGraph* instance, size_t i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getEdgeEnd(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_getNumEdges_const(const cv::kinfu::detail::PoseGraph* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getNumEdges();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_isValid_const(const cv::kinfu::detail::PoseGraph* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isValid();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_optimize_const_TermCriteriaR(cv::kinfu::detail::PoseGraph* instance, const cv::TermCriteria* tc, Result<int>* ocvrs_return) {
		try {
			int ret = instance->optimize(*tc);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_optimize(cv::kinfu::detail::PoseGraph* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->optimize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_calcEnergy_const(const cv::kinfu::detail::PoseGraph* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->calcEnergy();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kinfu_detail_PoseGraph_delete(cv::kinfu::detail::PoseGraph* instance) {
			delete instance;
	}
	
	void cv_large_kinfu_LargeKinfu_create_const_PtrLParamsGR(const cv::Ptr<cv::large_kinfu::Params>* _params, Result<cv::Ptr<cv::large_kinfu::LargeKinfu>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::large_kinfu::LargeKinfu> ret = cv::large_kinfu::LargeKinfu::create(*_params);
			Ok(new cv::Ptr<cv::large_kinfu::LargeKinfu>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_getParams_const(const cv::large_kinfu::LargeKinfu* instance, Result<cv::large_kinfu::Params*>* ocvrs_return) {
		try {
			const cv::large_kinfu::Params ret = instance->getParams();
			Ok(new const cv::large_kinfu::Params(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_render_const_const__OutputArrayR(const cv::large_kinfu::LargeKinfu* instance, const cv::_OutputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_render_const_const__OutputArrayR_const_Matx44fR(const cv::large_kinfu::LargeKinfu* instance, const cv::_OutputArray* image, const cv::Matx44f* cameraPose, ResultVoid* ocvrs_return) {
		try {
			instance->render(*image, *cameraPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_getCloud_const_const__OutputArrayR_const__OutputArrayR(const cv::large_kinfu::LargeKinfu* instance, const cv::_OutputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getCloud(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_getPoints_const_const__OutputArrayR(const cv::large_kinfu::LargeKinfu* instance, const cv::_OutputArray* points, ResultVoid* ocvrs_return) {
		try {
			instance->getPoints(*points);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_getNormals_const_const__InputArrayR_const__OutputArrayR(const cv::large_kinfu::LargeKinfu* instance, const cv::_InputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->getNormals(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_reset(cv::large_kinfu::LargeKinfu* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_getPose_const(const cv::large_kinfu::LargeKinfu* instance, Result<cv::Affine3f>* ocvrs_return) {
		try {
			cv::Affine3f ret = instance->getPose();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_update_const__InputArrayR(cv::large_kinfu::LargeKinfu* instance, const cv::_InputArray* depth, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->update(*depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_LargeKinfu_delete(cv::large_kinfu::LargeKinfu* instance) {
			delete instance;
	}
	
	void cv_large_kinfu_Params_defaultParams(Result<cv::Ptr<cv::large_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::large_kinfu::Params> ret = cv::large_kinfu::Params::defaultParams();
			Ok(new cv::Ptr<cv::large_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_Params_coarseParams(Result<cv::Ptr<cv::large_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::large_kinfu::Params> ret = cv::large_kinfu::Params::coarseParams();
			Ok(new cv::Ptr<cv::large_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_large_kinfu_Params_hashTSDFParams_bool(bool isCoarse, Result<cv::Ptr<cv::large_kinfu::Params>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::large_kinfu::Params> ret = cv::large_kinfu::Params::hashTSDFParams(isCoarse);
			Ok(new cv::Ptr<cv::large_kinfu::Params>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::large_kinfu::Params* cv_large_kinfu_Params_defaultNew_const() {
			cv::large_kinfu::Params* ret = new cv::large_kinfu::Params();
			return ret;
	}
	
	void cv_large_kinfu_Params_propFrameSize_const(const cv::large_kinfu::Params* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->frameSize;
			*ocvrs_return = ret;
	}
	
	void cv_large_kinfu_Params_propFrameSize_const_Size(cv::large_kinfu::Params* instance, const cv::Size* val) {
			instance->frameSize = *val;
	}
	
	void cv_large_kinfu_Params_propIntr_const(const cv::large_kinfu::Params* instance, cv::Matx33f* ocvrs_return) {
			cv::Matx33f ret = instance->intr;
			*ocvrs_return = ret;
	}
	
	void cv_large_kinfu_Params_propIntr_const_Matx33f(cv::large_kinfu::Params* instance, const cv::Matx33f* val) {
			instance->intr = *val;
	}
	
	void cv_large_kinfu_Params_propRgb_intr_const(const cv::large_kinfu::Params* instance, cv::Matx33f* ocvrs_return) {
			cv::Matx33f ret = instance->rgb_intr;
			*ocvrs_return = ret;
	}
	
	void cv_large_kinfu_Params_propRgb_intr_const_Matx33f(cv::large_kinfu::Params* instance, const cv::Matx33f* val) {
			instance->rgb_intr = *val;
	}
	
	float cv_large_kinfu_Params_propDepthFactor_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->depthFactor;
			return ret;
	}
	
	void cv_large_kinfu_Params_propDepthFactor_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->depthFactor = val;
	}
	
	float cv_large_kinfu_Params_propBilateral_sigma_depth_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->bilateral_sigma_depth;
			return ret;
	}
	
	void cv_large_kinfu_Params_propBilateral_sigma_depth_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->bilateral_sigma_depth = val;
	}
	
	float cv_large_kinfu_Params_propBilateral_sigma_spatial_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->bilateral_sigma_spatial;
			return ret;
	}
	
	void cv_large_kinfu_Params_propBilateral_sigma_spatial_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->bilateral_sigma_spatial = val;
	}
	
	int cv_large_kinfu_Params_propBilateral_kernel_size_const(const cv::large_kinfu::Params* instance) {
			int ret = instance->bilateral_kernel_size;
			return ret;
	}
	
	void cv_large_kinfu_Params_propBilateral_kernel_size_const_int(cv::large_kinfu::Params* instance, const int val) {
			instance->bilateral_kernel_size = val;
	}
	
	int cv_large_kinfu_Params_propPyramidLevels_const(const cv::large_kinfu::Params* instance) {
			int ret = instance->pyramidLevels;
			return ret;
	}
	
	void cv_large_kinfu_Params_propPyramidLevels_const_int(cv::large_kinfu::Params* instance, const int val) {
			instance->pyramidLevels = val;
	}
	
	float cv_large_kinfu_Params_propTsdf_min_camera_movement_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->tsdf_min_camera_movement;
			return ret;
	}
	
	void cv_large_kinfu_Params_propTsdf_min_camera_movement_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->tsdf_min_camera_movement = val;
	}
	
	void cv_large_kinfu_Params_propLightPose_const(const cv::large_kinfu::Params* instance, cv::Vec3f* ocvrs_return) {
			cv::Vec3f ret = instance->lightPose;
			*ocvrs_return = ret;
	}
	
	void cv_large_kinfu_Params_propLightPose_const_Vec3f(cv::large_kinfu::Params* instance, const cv::Vec3f* val) {
			instance->lightPose = *val;
	}
	
	float cv_large_kinfu_Params_propIcpDistThresh_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->icpDistThresh;
			return ret;
	}
	
	void cv_large_kinfu_Params_propIcpDistThresh_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->icpDistThresh = val;
	}
	
	float cv_large_kinfu_Params_propIcpAngleThresh_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->icpAngleThresh;
			return ret;
	}
	
	void cv_large_kinfu_Params_propIcpAngleThresh_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->icpAngleThresh = val;
	}
	
	std::vector<int>* cv_large_kinfu_Params_propIcpIterations_const(const cv::large_kinfu::Params* instance) {
			std::vector<int> ret = instance->icpIterations;
			return new std::vector<int>(ret);
	}
	
	void cv_large_kinfu_Params_propIcpIterations_const_vectorLintG(cv::large_kinfu::Params* instance, const std::vector<int>* val) {
			instance->icpIterations = *val;
	}
	
	float cv_large_kinfu_Params_propTruncateThreshold_const(const cv::large_kinfu::Params* instance) {
			float ret = instance->truncateThreshold;
			return ret;
	}
	
	void cv_large_kinfu_Params_propTruncateThreshold_const_float(cv::large_kinfu::Params* instance, const float val) {
			instance->truncateThreshold = val;
	}
	
	cv::kinfu::VolumeParams* cv_large_kinfu_Params_propVolumeParams_const(const cv::large_kinfu::Params* instance) {
			cv::kinfu::VolumeParams ret = instance->volumeParams;
			return new cv::kinfu::VolumeParams(ret);
	}
	
	void cv_large_kinfu_Params_propVolumeParams_const_VolumeParams(cv::large_kinfu::Params* instance, const cv::kinfu::VolumeParams* val) {
			instance->volumeParams = *val;
	}
	
	void cv_large_kinfu_Params_delete(cv::large_kinfu::Params* instance) {
			delete instance;
	}
	
	void cv_linemod_ColorGradient_ColorGradient(Result<cv::linemod::ColorGradient*>* ocvrs_return) {
		try {
			cv::linemod::ColorGradient* ret = new cv::linemod::ColorGradient();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_ColorGradient_ColorGradient_float_size_t_float(float weak_threshold, size_t num_features, float strong_threshold, Result<cv::linemod::ColorGradient*>* ocvrs_return) {
		try {
			cv::linemod::ColorGradient* ret = new cv::linemod::ColorGradient(weak_threshold, num_features, strong_threshold);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_ColorGradient_create_float_size_t_float(float weak_threshold, size_t num_features, float strong_threshold, Result<cv::Ptr<cv::linemod::ColorGradient>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::ColorGradient> ret = cv::linemod::ColorGradient::create(weak_threshold, num_features, strong_threshold);
			Ok(new cv::Ptr<cv::linemod::ColorGradient>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_ColorGradient_name_const(const cv::linemod::ColorGradient* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->name();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_ColorGradient_read_const_FileNodeR(cv::linemod::ColorGradient* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_ColorGradient_write_const_FileStorageR(const cv::linemod::ColorGradient* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	float cv_linemod_ColorGradient_propWeak_threshold_const(const cv::linemod::ColorGradient* instance) {
			float ret = instance->weak_threshold;
			return ret;
	}
	
	void cv_linemod_ColorGradient_propWeak_threshold_const_float(cv::linemod::ColorGradient* instance, const float val) {
			instance->weak_threshold = val;
	}
	
	size_t cv_linemod_ColorGradient_propNum_features_const(const cv::linemod::ColorGradient* instance) {
			size_t ret = instance->num_features;
			return ret;
	}
	
	void cv_linemod_ColorGradient_propNum_features_const_size_t(cv::linemod::ColorGradient* instance, const size_t val) {
			instance->num_features = val;
	}
	
	float cv_linemod_ColorGradient_propStrong_threshold_const(const cv::linemod::ColorGradient* instance) {
			float ret = instance->strong_threshold;
			return ret;
	}
	
	void cv_linemod_ColorGradient_propStrong_threshold_const_float(cv::linemod::ColorGradient* instance, const float val) {
			instance->strong_threshold = val;
	}
	
	cv::linemod::Modality* cv_linemod_ColorGradient_to_LineMod_Modality(cv::linemod::ColorGradient* instance) {
			return dynamic_cast<cv::linemod::Modality*>(instance);
	}
	
	void cv_linemod_ColorGradient_delete(cv::linemod::ColorGradient* instance) {
			delete instance;
	}
	
	void cv_linemod_DepthNormal_DepthNormal(Result<cv::linemod::DepthNormal*>* ocvrs_return) {
		try {
			cv::linemod::DepthNormal* ret = new cv::linemod::DepthNormal();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_DepthNormal_DepthNormal_int_int_size_t_int(int distance_threshold, int difference_threshold, size_t num_features, int extract_threshold, Result<cv::linemod::DepthNormal*>* ocvrs_return) {
		try {
			cv::linemod::DepthNormal* ret = new cv::linemod::DepthNormal(distance_threshold, difference_threshold, num_features, extract_threshold);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_DepthNormal_create_int_int_size_t_int(int distance_threshold, int difference_threshold, size_t num_features, int extract_threshold, Result<cv::Ptr<cv::linemod::DepthNormal>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::DepthNormal> ret = cv::linemod::DepthNormal::create(distance_threshold, difference_threshold, num_features, extract_threshold);
			Ok(new cv::Ptr<cv::linemod::DepthNormal>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_DepthNormal_name_const(const cv::linemod::DepthNormal* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->name();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_DepthNormal_read_const_FileNodeR(cv::linemod::DepthNormal* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_DepthNormal_write_const_FileStorageR(const cv::linemod::DepthNormal* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_linemod_DepthNormal_propDistance_threshold_const(const cv::linemod::DepthNormal* instance) {
			int ret = instance->distance_threshold;
			return ret;
	}
	
	void cv_linemod_DepthNormal_propDistance_threshold_const_int(cv::linemod::DepthNormal* instance, const int val) {
			instance->distance_threshold = val;
	}
	
	int cv_linemod_DepthNormal_propDifference_threshold_const(const cv::linemod::DepthNormal* instance) {
			int ret = instance->difference_threshold;
			return ret;
	}
	
	void cv_linemod_DepthNormal_propDifference_threshold_const_int(cv::linemod::DepthNormal* instance, const int val) {
			instance->difference_threshold = val;
	}
	
	size_t cv_linemod_DepthNormal_propNum_features_const(const cv::linemod::DepthNormal* instance) {
			size_t ret = instance->num_features;
			return ret;
	}
	
	void cv_linemod_DepthNormal_propNum_features_const_size_t(cv::linemod::DepthNormal* instance, const size_t val) {
			instance->num_features = val;
	}
	
	int cv_linemod_DepthNormal_propExtract_threshold_const(const cv::linemod::DepthNormal* instance) {
			int ret = instance->extract_threshold;
			return ret;
	}
	
	void cv_linemod_DepthNormal_propExtract_threshold_const_int(cv::linemod::DepthNormal* instance, const int val) {
			instance->extract_threshold = val;
	}
	
	cv::linemod::Modality* cv_linemod_DepthNormal_to_LineMod_Modality(cv::linemod::DepthNormal* instance) {
			return dynamic_cast<cv::linemod::Modality*>(instance);
	}
	
	void cv_linemod_DepthNormal_delete(cv::linemod::DepthNormal* instance) {
			delete instance;
	}
	
	void cv_linemod_Detector_Detector(Result<cv::linemod::Detector*>* ocvrs_return) {
		try {
			cv::linemod::Detector* ret = new cv::linemod::Detector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_Detector_const_vectorLPtrLModalityGGR_const_vectorLintGR(const std::vector<cv::Ptr<cv::linemod::Modality>>* modalities, const std::vector<int>* T_pyramid, Result<cv::linemod::Detector*>* ocvrs_return) {
		try {
			cv::linemod::Detector* ret = new cv::linemod::Detector(*modalities, *T_pyramid);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_match_const_const_vectorLMatGR_float_vectorLMatchGR_const_vectorLStringGR_const__OutputArrayR_const_vectorLMatGR(const cv::linemod::Detector* instance, const std::vector<cv::Mat>* sources, float threshold, std::vector<cv::linemod::Match>* matches, const std::vector<cv::String>* class_ids, const cv::_OutputArray* quantized_images, const std::vector<cv::Mat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->match(*sources, threshold, *matches, *class_ids, *quantized_images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_match_const_const_vectorLMatGR_float_vectorLMatchGR(const cv::linemod::Detector* instance, const std::vector<cv::Mat>* sources, float threshold, std::vector<cv::linemod::Match>* matches, ResultVoid* ocvrs_return) {
		try {
			instance->match(*sources, threshold, *matches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_addTemplate_const_vectorLMatGR_const_StringR_const_MatR_RectX(cv::linemod::Detector* instance, const std::vector<cv::Mat>* sources, const char* class_id, const cv::Mat* object_mask, cv::Rect* bounding_box, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addTemplate(*sources, std::string(class_id), *object_mask, bounding_box);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_addTemplate_const_vectorLMatGR_const_StringR_const_MatR(cv::linemod::Detector* instance, const std::vector<cv::Mat>* sources, const char* class_id, const cv::Mat* object_mask, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addTemplate(*sources, std::string(class_id), *object_mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_addSyntheticTemplate_const_vectorLTemplateGR_const_StringR(cv::linemod::Detector* instance, const std::vector<cv::linemod::Template>* templates, const char* class_id, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addSyntheticTemplate(*templates, std::string(class_id));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_getModalities_const(const cv::linemod::Detector* instance, Result<std::vector<cv::Ptr<cv::linemod::Modality>>*>* ocvrs_return) {
		try {
			const std::vector<cv::Ptr<cv::linemod::Modality>> ret = instance->getModalities();
			Ok(new const std::vector<cv::Ptr<cv::linemod::Modality>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_getT_const_int(const cv::linemod::Detector* instance, int pyramid_level, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getT(pyramid_level);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_pyramidLevels_const(const cv::linemod::Detector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->pyramidLevels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_getTemplates_const_const_StringR_int(const cv::linemod::Detector* instance, const char* class_id, int template_id, Result<std::vector<cv::linemod::Template>*>* ocvrs_return) {
		try {
			const std::vector<cv::linemod::Template> ret = instance->getTemplates(std::string(class_id), template_id);
			Ok(new const std::vector<cv::linemod::Template>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_numTemplates_const(const cv::linemod::Detector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->numTemplates();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_numTemplates_const_const_StringR(const cv::linemod::Detector* instance, const char* class_id, Result<int>* ocvrs_return) {
		try {
			int ret = instance->numTemplates(std::string(class_id));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_numClasses_const(const cv::linemod::Detector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->numClasses();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_classIds_const(const cv::linemod::Detector* instance, Result<std::vector<cv::String>*>* ocvrs_return) {
		try {
			std::vector<cv::String> ret = instance->classIds();
			Ok(new std::vector<cv::String>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_read_const_FileNodeR(cv::linemod::Detector* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_write_const_FileStorageR(const cv::linemod::Detector* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_readClass_const_FileNodeR_const_StringR(cv::linemod::Detector* instance, const cv::FileNode* fn, const char* class_id_override, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->readClass(*fn, std::string(class_id_override));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_readClass_const_FileNodeR(cv::linemod::Detector* instance, const cv::FileNode* fn, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->readClass(*fn);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_writeClass_const_const_StringR_FileStorageR(const cv::linemod::Detector* instance, const char* class_id, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->writeClass(std::string(class_id), *fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_readClasses_const_vectorLStringGR_const_StringR(cv::linemod::Detector* instance, const std::vector<cv::String>* class_ids, const char* format, ResultVoid* ocvrs_return) {
		try {
			instance->readClasses(*class_ids, std::string(format));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_readClasses_const_vectorLStringGR(cv::linemod::Detector* instance, const std::vector<cv::String>* class_ids, ResultVoid* ocvrs_return) {
		try {
			instance->readClasses(*class_ids);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_writeClasses_const_const_StringR(const cv::linemod::Detector* instance, const char* format, ResultVoid* ocvrs_return) {
		try {
			instance->writeClasses(std::string(format));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_writeClasses_const(const cv::linemod::Detector* instance, ResultVoid* ocvrs_return) {
		try {
			instance->writeClasses();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Detector_delete(cv::linemod::Detector* instance) {
			delete instance;
	}
	
	void cv_linemod_Feature_Feature(Result<cv::linemod::Feature>* ocvrs_return) {
		try {
			cv::linemod::Feature ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Feature_Feature_int_int_int(int x, int y, int label, Result<cv::linemod::Feature>* ocvrs_return) {
		try {
			cv::linemod::Feature ret(x, y, label);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Feature_read_const_FileNodeR(cv::linemod::Feature* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Feature_write_const_FileStorageR(const cv::linemod::Feature* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Match_Match(Result<cv::linemod::Match*>* ocvrs_return) {
		try {
			cv::linemod::Match* ret = new cv::linemod::Match();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Match_Match_int_int_float_const_StringR_int(int x, int y, float similarity, const char* class_id, int template_id, Result<cv::linemod::Match*>* ocvrs_return) {
		try {
			cv::linemod::Match* ret = new cv::linemod::Match(x, y, similarity, std::string(class_id), template_id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Match_operatorL_const_const_MatchR(const cv::linemod::Match* instance, const cv::linemod::Match* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator<(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Match_operatorEQ_const_const_MatchR(const cv::linemod::Match* instance, const cv::linemod::Match* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::linemod::Match* cv_linemod_Match_implicitClone_const(const cv::linemod::Match* instance) {
			return new cv::linemod::Match(*instance);
	}
	
	int cv_linemod_Match_propX_const(const cv::linemod::Match* instance) {
			int ret = instance->x;
			return ret;
	}
	
	void cv_linemod_Match_propX_const_int(cv::linemod::Match* instance, const int val) {
			instance->x = val;
	}
	
	int cv_linemod_Match_propY_const(const cv::linemod::Match* instance) {
			int ret = instance->y;
			return ret;
	}
	
	void cv_linemod_Match_propY_const_int(cv::linemod::Match* instance, const int val) {
			instance->y = val;
	}
	
	float cv_linemod_Match_propSimilarity_const(const cv::linemod::Match* instance) {
			float ret = instance->similarity;
			return ret;
	}
	
	void cv_linemod_Match_propSimilarity_const_float(cv::linemod::Match* instance, const float val) {
			instance->similarity = val;
	}
	
	void* cv_linemod_Match_propClass_id_const(const cv::linemod::Match* instance) {
			cv::String ret = instance->class_id;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_linemod_Match_propClass_id_const_String(cv::linemod::Match* instance, const char* val) {
			instance->class_id = std::string(val);
	}
	
	int cv_linemod_Match_propTemplate_id_const(const cv::linemod::Match* instance) {
			int ret = instance->template_id;
			return ret;
	}
	
	void cv_linemod_Match_propTemplate_id_const_int(cv::linemod::Match* instance, const int val) {
			instance->template_id = val;
	}
	
	void cv_linemod_Match_delete(cv::linemod::Match* instance) {
			delete instance;
	}
	
	void cv_linemod_Modality_process_const_const_MatR_const_MatR(const cv::linemod::Modality* instance, const cv::Mat* src, const cv::Mat* mask, Result<cv::Ptr<cv::linemod::QuantizedPyramid>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::QuantizedPyramid> ret = instance->process(*src, *mask);
			Ok(new cv::Ptr<cv::linemod::QuantizedPyramid>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Modality_process_const_const_MatR(const cv::linemod::Modality* instance, const cv::Mat* src, Result<cv::Ptr<cv::linemod::QuantizedPyramid>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::QuantizedPyramid> ret = instance->process(*src);
			Ok(new cv::Ptr<cv::linemod::QuantizedPyramid>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Modality_name_const(const cv::linemod::Modality* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->name();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Modality_read_const_FileNodeR(cv::linemod::Modality* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Modality_write_const_FileStorageR(const cv::linemod::Modality* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Modality_create_const_StringR(const char* modality_type, Result<cv::Ptr<cv::linemod::Modality>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::Modality> ret = cv::linemod::Modality::create(std::string(modality_type));
			Ok(new cv::Ptr<cv::linemod::Modality>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Modality_create_const_FileNodeR(const cv::FileNode* fn, Result<cv::Ptr<cv::linemod::Modality>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::linemod::Modality> ret = cv::linemod::Modality::create(*fn);
			Ok(new cv::Ptr<cv::linemod::Modality>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::linemod::ColorGradient* cv_linemod_Modality_to_LineMod_ColorGradient(cv::linemod::Modality* instance) {
			return dynamic_cast<cv::linemod::ColorGradient*>(instance);
	}
	
	cv::linemod::DepthNormal* cv_linemod_Modality_to_LineMod_DepthNormal(cv::linemod::Modality* instance) {
			return dynamic_cast<cv::linemod::DepthNormal*>(instance);
	}
	
	void cv_linemod_Modality_delete(cv::linemod::Modality* instance) {
			delete instance;
	}
	
	void cv_linemod_QuantizedPyramid_quantize_const_MatR(const cv::linemod::QuantizedPyramid* instance, cv::Mat* dst, ResultVoid* ocvrs_return) {
		try {
			instance->quantize(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_QuantizedPyramid_extractTemplate_const_TemplateR(const cv::linemod::QuantizedPyramid* instance, cv::linemod::Template* templ, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->extractTemplate(*templ);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_QuantizedPyramid_pyrDown(cv::linemod::QuantizedPyramid* instance, ResultVoid* ocvrs_return) {
		try {
			instance->pyrDown();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_QuantizedPyramid_delete(cv::linemod::QuantizedPyramid* instance) {
			delete instance;
	}
	
	void cv_linemod_Template_read_const_FileNodeR(cv::linemod::Template* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_linemod_Template_write_const_FileStorageR(const cv::linemod::Template* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::linemod::Template* cv_linemod_Template_implicitClone_const(const cv::linemod::Template* instance) {
			return new cv::linemod::Template(*instance);
	}
	
	cv::linemod::Template* cv_linemod_Template_defaultNew_const() {
			cv::linemod::Template* ret = new cv::linemod::Template();
			return ret;
	}
	
	int cv_linemod_Template_propWidth_const(const cv::linemod::Template* instance) {
			int ret = instance->width;
			return ret;
	}
	
	void cv_linemod_Template_propWidth_const_int(cv::linemod::Template* instance, const int val) {
			instance->width = val;
	}
	
	int cv_linemod_Template_propHeight_const(const cv::linemod::Template* instance) {
			int ret = instance->height;
			return ret;
	}
	
	void cv_linemod_Template_propHeight_const_int(cv::linemod::Template* instance, const int val) {
			instance->height = val;
	}
	
	int cv_linemod_Template_propPyramid_level_const(const cv::linemod::Template* instance) {
			int ret = instance->pyramid_level;
			return ret;
	}
	
	void cv_linemod_Template_propPyramid_level_const_int(cv::linemod::Template* instance, const int val) {
			instance->pyramid_level = val;
	}
	
	std::vector<cv::linemod::Feature>* cv_linemod_Template_propFeatures_const(const cv::linemod::Template* instance) {
			std::vector<cv::linemod::Feature> ret = instance->features;
			return new std::vector<cv::linemod::Feature>(ret);
	}
	
	void cv_linemod_Template_propFeatures_const_vectorLFeatureG(cv::linemod::Template* instance, const std::vector<cv::linemod::Feature>* val) {
			instance->features = *val;
	}
	
	void cv_linemod_Template_delete(cv::linemod::Template* instance) {
			delete instance;
	}
	
	void cv_rgbd_DepthCleaner_DepthCleaner(Result<cv::rgbd::DepthCleaner*>* ocvrs_return) {
		try {
			cv::rgbd::DepthCleaner* ret = new cv::rgbd::DepthCleaner();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_DepthCleaner_int_int_int(int depth, int window_size, int method, Result<cv::rgbd::DepthCleaner*>* ocvrs_return) {
		try {
			cv::rgbd::DepthCleaner* ret = new cv::rgbd::DepthCleaner(depth, window_size, method);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_DepthCleaner_int(int depth, Result<cv::rgbd::DepthCleaner*>* ocvrs_return) {
		try {
			cv::rgbd::DepthCleaner* ret = new cv::rgbd::DepthCleaner(depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_create_int_int_int(int depth, int window_size, int method, Result<cv::Ptr<cv::rgbd::DepthCleaner>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::DepthCleaner> ret = cv::rgbd::DepthCleaner::create(depth, window_size, method);
			Ok(new cv::Ptr<cv::rgbd::DepthCleaner>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_create_int(int depth, Result<cv::Ptr<cv::rgbd::DepthCleaner>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::DepthCleaner> ret = cv::rgbd::DepthCleaner::create(depth);
			Ok(new cv::Ptr<cv::rgbd::DepthCleaner>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_operator___const_const__InputArrayR_const__OutputArrayR(const cv::rgbd::DepthCleaner* instance, const cv::_InputArray* points, const cv::_OutputArray* depth, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*points, *depth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_initialize_const(const cv::rgbd::DepthCleaner* instance, ResultVoid* ocvrs_return) {
		try {
			instance->initialize();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_getWindowSize_const(const cv::rgbd::DepthCleaner* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_setWindowSize_int(cv::rgbd::DepthCleaner* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_getDepth_const(const cv::rgbd::DepthCleaner* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_setDepth_int(cv::rgbd::DepthCleaner* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_getMethod_const(const cv::rgbd::DepthCleaner* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMethod();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_DepthCleaner_setMethod_int(cv::rgbd::DepthCleaner* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMethod(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_DepthCleaner_to_Algorithm(cv::rgbd::DepthCleaner* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_rgbd_DepthCleaner_delete(cv::rgbd::DepthCleaner* instance) {
			delete instance;
	}
	
	void cv_rgbd_FastICPOdometry_FastICPOdometry(Result<cv::rgbd::FastICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::FastICPOdometry* ret = new cv::rgbd::FastICPOdometry();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_FastICPOdometry_const_MatR_float_float_float_float_int_const_vectorLintGR(const cv::Mat* cameraMatrix, float maxDistDiff, float angleThreshold, float sigmaDepth, float sigmaSpatial, int kernelSize, const std::vector<int>* iterCounts, Result<cv::rgbd::FastICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::FastICPOdometry* ret = new cv::rgbd::FastICPOdometry(*cameraMatrix, maxDistDiff, angleThreshold, sigmaDepth, sigmaSpatial, kernelSize, *iterCounts);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_FastICPOdometry_const_MatR(const cv::Mat* cameraMatrix, Result<cv::rgbd::FastICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::FastICPOdometry* ret = new cv::rgbd::FastICPOdometry(*cameraMatrix);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_create_const_MatR_float_float_float_float_int_const_vectorLintGR(const cv::Mat* cameraMatrix, float maxDistDiff, float angleThreshold, float sigmaDepth, float sigmaSpatial, int kernelSize, const std::vector<int>* iterCounts, Result<cv::Ptr<cv::rgbd::FastICPOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::FastICPOdometry> ret = cv::rgbd::FastICPOdometry::create(*cameraMatrix, maxDistDiff, angleThreshold, sigmaDepth, sigmaSpatial, kernelSize, *iterCounts);
			Ok(new cv::Ptr<cv::rgbd::FastICPOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_create_const_MatR(const cv::Mat* cameraMatrix, Result<cv::Ptr<cv::rgbd::FastICPOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::FastICPOdometry> ret = cv::rgbd::FastICPOdometry::create(*cameraMatrix);
			Ok(new cv::Ptr<cv::rgbd::FastICPOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_prepareFrameCache_const_PtrLOdometryFrameGR_int(const cv::rgbd::FastICPOdometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* frame, int cacheType, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->prepareFrameCache(*frame, cacheType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getCameraMatrix_const(const cv::rgbd::FastICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getCameraMatrix();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setCameraMatrix_const_MatR(cv::rgbd::FastICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraMatrix(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getMaxDistDiff_const(const cv::rgbd::FastICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDistDiff();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setMaxDistDiff_float(cv::rgbd::FastICPOdometry* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDistDiff(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getAngleThreshold_const(const cv::rgbd::FastICPOdometry* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getAngleThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setAngleThreshold_float(cv::rgbd::FastICPOdometry* instance, float f, ResultVoid* ocvrs_return) {
		try {
			instance->setAngleThreshold(f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getSigmaDepth_const(const cv::rgbd::FastICPOdometry* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSigmaDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setSigmaDepth_float(cv::rgbd::FastICPOdometry* instance, float f, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaDepth(f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getSigmaSpatial_const(const cv::rgbd::FastICPOdometry* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSigmaSpatial();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setSigmaSpatial_float(cv::rgbd::FastICPOdometry* instance, float f, ResultVoid* ocvrs_return) {
		try {
			instance->setSigmaSpatial(f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getKernelSize_const(const cv::rgbd::FastICPOdometry* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getKernelSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setKernelSize_int(cv::rgbd::FastICPOdometry* instance, int f, ResultVoid* ocvrs_return) {
		try {
			instance->setKernelSize(f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getIterationCounts_const(const cv::rgbd::FastICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getIterationCounts();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setIterationCounts_const_MatR(cv::rgbd::FastICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterationCounts(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_getTransformType_const(const cv::rgbd::FastICPOdometry* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTransformType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_FastICPOdometry_setTransformType_int(cv::rgbd::FastICPOdometry* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTransformType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_FastICPOdometry_to_Algorithm(cv::rgbd::FastICPOdometry* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rgbd::Odometry* cv_rgbd_FastICPOdometry_to_Odometry(cv::rgbd::FastICPOdometry* instance) {
			return dynamic_cast<cv::rgbd::Odometry*>(instance);
	}
	
	void cv_rgbd_FastICPOdometry_delete(cv::rgbd::FastICPOdometry* instance) {
			delete instance;
	}
	
	void cv_rgbd_ICPOdometry_ICPOdometry(Result<cv::rgbd::ICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::ICPOdometry* ret = new cv::rgbd::ICPOdometry();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_ICPOdometry_const_MatR_float_float_float_float_const_vectorLintGR_int(const cv::Mat* cameraMatrix, float minDepth, float maxDepth, float maxDepthDiff, float maxPointsPart, const std::vector<int>* iterCounts, int transformType, Result<cv::rgbd::ICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::ICPOdometry* ret = new cv::rgbd::ICPOdometry(*cameraMatrix, minDepth, maxDepth, maxDepthDiff, maxPointsPart, *iterCounts, transformType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_ICPOdometry_const_MatR(const cv::Mat* cameraMatrix, Result<cv::rgbd::ICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::ICPOdometry* ret = new cv::rgbd::ICPOdometry(*cameraMatrix);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_create_const_MatR_float_float_float_float_const_vectorLintGR_int(const cv::Mat* cameraMatrix, float minDepth, float maxDepth, float maxDepthDiff, float maxPointsPart, const std::vector<int>* iterCounts, int transformType, Result<cv::Ptr<cv::rgbd::ICPOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::ICPOdometry> ret = cv::rgbd::ICPOdometry::create(*cameraMatrix, minDepth, maxDepth, maxDepthDiff, maxPointsPart, *iterCounts, transformType);
			Ok(new cv::Ptr<cv::rgbd::ICPOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_create(Result<cv::Ptr<cv::rgbd::ICPOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::ICPOdometry> ret = cv::rgbd::ICPOdometry::create();
			Ok(new cv::Ptr<cv::rgbd::ICPOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_prepareFrameCache_const_PtrLOdometryFrameGR_int(const cv::rgbd::ICPOdometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* frame, int cacheType, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->prepareFrameCache(*frame, cacheType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getCameraMatrix_const(const cv::rgbd::ICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getCameraMatrix();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setCameraMatrix_const_MatR(cv::rgbd::ICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraMatrix(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getMinDepth_const(const cv::rgbd::ICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMinDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setMinDepth_double(cv::rgbd::ICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getMaxDepth_const(const cv::rgbd::ICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setMaxDepth_double(cv::rgbd::ICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getMaxDepthDiff_const(const cv::rgbd::ICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDepthDiff();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setMaxDepthDiff_double(cv::rgbd::ICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDepthDiff(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getIterationCounts_const(const cv::rgbd::ICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getIterationCounts();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setIterationCounts_const_MatR(cv::rgbd::ICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterationCounts(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getMaxPointsPart_const(const cv::rgbd::ICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxPointsPart();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setMaxPointsPart_double(cv::rgbd::ICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxPointsPart(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getTransformType_const(const cv::rgbd::ICPOdometry* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTransformType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setTransformType_int(cv::rgbd::ICPOdometry* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTransformType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getMaxTranslation_const(const cv::rgbd::ICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxTranslation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setMaxTranslation_double(cv::rgbd::ICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxTranslation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getMaxRotation_const(const cv::rgbd::ICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxRotation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_setMaxRotation_double(cv::rgbd::ICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxRotation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_ICPOdometry_getNormalsComputer_const(const cv::rgbd::ICPOdometry* instance, Result<cv::Ptr<cv::rgbd::RgbdNormals>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdNormals> ret = instance->getNormalsComputer();
			Ok(new cv::Ptr<cv::rgbd::RgbdNormals>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_ICPOdometry_to_Algorithm(cv::rgbd::ICPOdometry* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rgbd::Odometry* cv_rgbd_ICPOdometry_to_Odometry(cv::rgbd::ICPOdometry* instance) {
			return dynamic_cast<cv::rgbd::Odometry*>(instance);
	}
	
	void cv_rgbd_ICPOdometry_delete(cv::rgbd::ICPOdometry* instance) {
			delete instance;
	}
	
	void cv_rgbd_Odometry_DEFAULT_MIN_DEPTH(Result<float>* ocvrs_return) {
		try {
			float ret = cv::rgbd::Odometry::DEFAULT_MIN_DEPTH();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_DEFAULT_MAX_DEPTH(Result<float>* ocvrs_return) {
		try {
			float ret = cv::rgbd::Odometry::DEFAULT_MAX_DEPTH();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_DEFAULT_MAX_DEPTH_DIFF(Result<float>* ocvrs_return) {
		try {
			float ret = cv::rgbd::Odometry::DEFAULT_MAX_DEPTH_DIFF();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_DEFAULT_MAX_POINTS_PART(Result<float>* ocvrs_return) {
		try {
			float ret = cv::rgbd::Odometry::DEFAULT_MAX_POINTS_PART();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_DEFAULT_MAX_TRANSLATION(Result<float>* ocvrs_return) {
		try {
			float ret = cv::rgbd::Odometry::DEFAULT_MAX_TRANSLATION();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_DEFAULT_MAX_ROTATION(Result<float>* ocvrs_return) {
		try {
			float ret = cv::rgbd::Odometry::DEFAULT_MAX_ROTATION();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_compute_const_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const__OutputArrayR_const_MatR(const cv::rgbd::Odometry* instance, const cv::Mat* srcImage, const cv::Mat* srcDepth, const cv::Mat* srcMask, const cv::Mat* dstImage, const cv::Mat* dstDepth, const cv::Mat* dstMask, const cv::_OutputArray* Rt, const cv::Mat* initRt, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compute(*srcImage, *srcDepth, *srcMask, *dstImage, *dstDepth, *dstMask, *Rt, *initRt);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_compute_const_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_const__OutputArrayR(const cv::rgbd::Odometry* instance, const cv::Mat* srcImage, const cv::Mat* srcDepth, const cv::Mat* srcMask, const cv::Mat* dstImage, const cv::Mat* dstDepth, const cv::Mat* dstMask, const cv::_OutputArray* Rt, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compute(*srcImage, *srcDepth, *srcMask, *dstImage, *dstDepth, *dstMask, *Rt);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_compute_const_PtrLOdometryFrameGR_PtrLOdometryFrameGR_const__OutputArrayR_const_MatR(const cv::rgbd::Odometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* srcFrame, cv::Ptr<cv::rgbd::OdometryFrame>* dstFrame, const cv::_OutputArray* Rt, const cv::Mat* initRt, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compute(*srcFrame, *dstFrame, *Rt, *initRt);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_compute_const_PtrLOdometryFrameGR_PtrLOdometryFrameGR_const__OutputArrayR(const cv::rgbd::Odometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* srcFrame, cv::Ptr<cv::rgbd::OdometryFrame>* dstFrame, const cv::_OutputArray* Rt, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compute(*srcFrame, *dstFrame, *Rt);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_prepareFrameCache_const_PtrLOdometryFrameGR_int(const cv::rgbd::Odometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* frame, int cacheType, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->prepareFrameCache(*frame, cacheType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_create_const_StringR(const char* odometryType, Result<cv::Ptr<cv::rgbd::Odometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::Odometry> ret = cv::rgbd::Odometry::create(std::string(odometryType));
			Ok(new cv::Ptr<cv::rgbd::Odometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_getCameraMatrix_const(const cv::rgbd::Odometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getCameraMatrix();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_setCameraMatrix_const_MatR(cv::rgbd::Odometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraMatrix(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_getTransformType_const(const cv::rgbd::Odometry* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTransformType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_Odometry_setTransformType_int(cv::rgbd::Odometry* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTransformType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::rgbd::FastICPOdometry* cv_rgbd_Odometry_to_FastICPOdometry(cv::rgbd::Odometry* instance) {
			return dynamic_cast<cv::rgbd::FastICPOdometry*>(instance);
	}
	
	cv::rgbd::ICPOdometry* cv_rgbd_Odometry_to_ICPOdometry(cv::rgbd::Odometry* instance) {
			return dynamic_cast<cv::rgbd::ICPOdometry*>(instance);
	}
	
	cv::rgbd::RgbdICPOdometry* cv_rgbd_Odometry_to_RgbdICPOdometry(cv::rgbd::Odometry* instance) {
			return dynamic_cast<cv::rgbd::RgbdICPOdometry*>(instance);
	}
	
	cv::rgbd::RgbdOdometry* cv_rgbd_Odometry_to_RgbdOdometry(cv::rgbd::Odometry* instance) {
			return dynamic_cast<cv::rgbd::RgbdOdometry*>(instance);
	}
	
	cv::Algorithm* cv_rgbd_Odometry_to_Algorithm(cv::rgbd::Odometry* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_rgbd_Odometry_delete(cv::rgbd::Odometry* instance) {
			delete instance;
	}
	
	void cv_rgbd_OdometryFrame_OdometryFrame(Result<cv::rgbd::OdometryFrame*>* ocvrs_return) {
		try {
			cv::rgbd::OdometryFrame* ret = new cv::rgbd::OdometryFrame();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_OdometryFrame_OdometryFrame_const_MatR_const_MatR_const_MatR_const_MatR_int(const cv::Mat* image, const cv::Mat* depth, const cv::Mat* mask, const cv::Mat* normals, int ID, Result<cv::rgbd::OdometryFrame*>* ocvrs_return) {
		try {
			cv::rgbd::OdometryFrame* ret = new cv::rgbd::OdometryFrame(*image, *depth, *mask, *normals, ID);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_OdometryFrame_OdometryFrame_const_MatR_const_MatR(const cv::Mat* image, const cv::Mat* depth, Result<cv::rgbd::OdometryFrame*>* ocvrs_return) {
		try {
			cv::rgbd::OdometryFrame* ret = new cv::rgbd::OdometryFrame(*image, *depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_OdometryFrame_create_const_MatR_const_MatR_const_MatR_const_MatR_int(const cv::Mat* image, const cv::Mat* depth, const cv::Mat* mask, const cv::Mat* normals, int ID, Result<cv::Ptr<cv::rgbd::OdometryFrame>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::OdometryFrame> ret = cv::rgbd::OdometryFrame::create(*image, *depth, *mask, *normals, ID);
			Ok(new cv::Ptr<cv::rgbd::OdometryFrame>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_OdometryFrame_create(Result<cv::Ptr<cv::rgbd::OdometryFrame>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::OdometryFrame> ret = cv::rgbd::OdometryFrame::create();
			Ok(new cv::Ptr<cv::rgbd::OdometryFrame>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_OdometryFrame_release(cv::rgbd::OdometryFrame* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_OdometryFrame_releasePyramids(cv::rgbd::OdometryFrame* instance, ResultVoid* ocvrs_return) {
		try {
			instance->releasePyramids();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidImage_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidImage;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidImage_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidImage = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidDepth_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidDepth;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidDepth_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidDepth = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidMask_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidMask;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidMask_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidMask = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidCloud_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidCloud;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidCloud_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidCloud = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramid_dI_dx_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramid_dI_dx;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramid_dI_dx_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramid_dI_dx = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramid_dI_dy_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramid_dI_dy;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramid_dI_dy_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramid_dI_dy = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidTexturedMask_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidTexturedMask;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidTexturedMask_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidTexturedMask = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidNormals_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidNormals;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidNormals_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidNormals = *val;
	}
	
	std::vector<cv::Mat>* cv_rgbd_OdometryFrame_propPyramidNormalsMask_const(const cv::rgbd::OdometryFrame* instance) {
			std::vector<cv::Mat> ret = instance->pyramidNormalsMask;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_rgbd_OdometryFrame_propPyramidNormalsMask_const_vectorLMatG(cv::rgbd::OdometryFrame* instance, const std::vector<cv::Mat>* val) {
			instance->pyramidNormalsMask = *val;
	}
	
	cv::rgbd::RgbdFrame* cv_rgbd_OdometryFrame_to_RgbdFrame(cv::rgbd::OdometryFrame* instance) {
			return dynamic_cast<cv::rgbd::RgbdFrame*>(instance);
	}
	
	void cv_rgbd_OdometryFrame_delete(cv::rgbd::OdometryFrame* instance) {
			delete instance;
	}
	
	void cv_rgbd_RgbdFrame_RgbdFrame(Result<cv::rgbd::RgbdFrame*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdFrame* ret = new cv::rgbd::RgbdFrame();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdFrame_RgbdFrame_const_MatR_const_MatR_const_MatR_const_MatR_int(const cv::Mat* image, const cv::Mat* depth, const cv::Mat* mask, const cv::Mat* normals, int ID, Result<cv::rgbd::RgbdFrame*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdFrame* ret = new cv::rgbd::RgbdFrame(*image, *depth, *mask, *normals, ID);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdFrame_RgbdFrame_const_MatR_const_MatR(const cv::Mat* image, const cv::Mat* depth, Result<cv::rgbd::RgbdFrame*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdFrame* ret = new cv::rgbd::RgbdFrame(*image, *depth);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdFrame_create_const_MatR_const_MatR_const_MatR_const_MatR_int(const cv::Mat* image, const cv::Mat* depth, const cv::Mat* mask, const cv::Mat* normals, int ID, Result<cv::Ptr<cv::rgbd::RgbdFrame>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdFrame> ret = cv::rgbd::RgbdFrame::create(*image, *depth, *mask, *normals, ID);
			Ok(new cv::Ptr<cv::rgbd::RgbdFrame>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdFrame_create(Result<cv::Ptr<cv::rgbd::RgbdFrame>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdFrame> ret = cv::rgbd::RgbdFrame::create();
			Ok(new cv::Ptr<cv::rgbd::RgbdFrame>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdFrame_release(cv::rgbd::RgbdFrame* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_rgbd_RgbdFrame_propID_const(const cv::rgbd::RgbdFrame* instance) {
			int ret = instance->ID;
			return ret;
	}
	
	void cv_rgbd_RgbdFrame_propID_const_int(cv::rgbd::RgbdFrame* instance, const int val) {
			instance->ID = val;
	}
	
	cv::Mat* cv_rgbd_RgbdFrame_propImage_const(const cv::rgbd::RgbdFrame* instance) {
			cv::Mat ret = instance->image;
			return new cv::Mat(ret);
	}
	
	void cv_rgbd_RgbdFrame_propImage_const_Mat(cv::rgbd::RgbdFrame* instance, const cv::Mat* val) {
			instance->image = *val;
	}
	
	cv::Mat* cv_rgbd_RgbdFrame_propDepth_const(const cv::rgbd::RgbdFrame* instance) {
			cv::Mat ret = instance->depth;
			return new cv::Mat(ret);
	}
	
	void cv_rgbd_RgbdFrame_propDepth_const_Mat(cv::rgbd::RgbdFrame* instance, const cv::Mat* val) {
			instance->depth = *val;
	}
	
	cv::Mat* cv_rgbd_RgbdFrame_propMask_const(const cv::rgbd::RgbdFrame* instance) {
			cv::Mat ret = instance->mask;
			return new cv::Mat(ret);
	}
	
	void cv_rgbd_RgbdFrame_propMask_const_Mat(cv::rgbd::RgbdFrame* instance, const cv::Mat* val) {
			instance->mask = *val;
	}
	
	cv::Mat* cv_rgbd_RgbdFrame_propNormals_const(const cv::rgbd::RgbdFrame* instance) {
			cv::Mat ret = instance->normals;
			return new cv::Mat(ret);
	}
	
	void cv_rgbd_RgbdFrame_propNormals_const_Mat(cv::rgbd::RgbdFrame* instance, const cv::Mat* val) {
			instance->normals = *val;
	}
	
	cv::rgbd::OdometryFrame* cv_rgbd_RgbdFrame_to_OdometryFrame(cv::rgbd::RgbdFrame* instance) {
			return dynamic_cast<cv::rgbd::OdometryFrame*>(instance);
	}
	
	void cv_rgbd_RgbdFrame_delete(cv::rgbd::RgbdFrame* instance) {
			delete instance;
	}
	
	void cv_rgbd_RgbdICPOdometry_RgbdICPOdometry(Result<cv::rgbd::RgbdICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdICPOdometry* ret = new cv::rgbd::RgbdICPOdometry();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_RgbdICPOdometry_const_MatR_float_float_float_float_const_vectorLintGR_const_vectorLfloatGR_int(const cv::Mat* cameraMatrix, float minDepth, float maxDepth, float maxDepthDiff, float maxPointsPart, const std::vector<int>* iterCounts, const std::vector<float>* minGradientMagnitudes, int transformType, Result<cv::rgbd::RgbdICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdICPOdometry* ret = new cv::rgbd::RgbdICPOdometry(*cameraMatrix, minDepth, maxDepth, maxDepthDiff, maxPointsPart, *iterCounts, *minGradientMagnitudes, transformType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_RgbdICPOdometry_const_MatR(const cv::Mat* cameraMatrix, Result<cv::rgbd::RgbdICPOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdICPOdometry* ret = new cv::rgbd::RgbdICPOdometry(*cameraMatrix);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_create_const_MatR_float_float_float_float_const_vectorLintGR_const_vectorLfloatGR_int(const cv::Mat* cameraMatrix, float minDepth, float maxDepth, float maxDepthDiff, float maxPointsPart, const std::vector<int>* iterCounts, const std::vector<float>* minGradientMagnitudes, int transformType, Result<cv::Ptr<cv::rgbd::RgbdICPOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdICPOdometry> ret = cv::rgbd::RgbdICPOdometry::create(*cameraMatrix, minDepth, maxDepth, maxDepthDiff, maxPointsPart, *iterCounts, *minGradientMagnitudes, transformType);
			Ok(new cv::Ptr<cv::rgbd::RgbdICPOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_create(Result<cv::Ptr<cv::rgbd::RgbdICPOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdICPOdometry> ret = cv::rgbd::RgbdICPOdometry::create();
			Ok(new cv::Ptr<cv::rgbd::RgbdICPOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_prepareFrameCache_const_PtrLOdometryFrameGR_int(const cv::rgbd::RgbdICPOdometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* frame, int cacheType, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->prepareFrameCache(*frame, cacheType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getCameraMatrix_const(const cv::rgbd::RgbdICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getCameraMatrix();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setCameraMatrix_const_MatR(cv::rgbd::RgbdICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraMatrix(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMinDepth_const(const cv::rgbd::RgbdICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMinDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMinDepth_double(cv::rgbd::RgbdICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMaxDepth_const(const cv::rgbd::RgbdICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMaxDepth_double(cv::rgbd::RgbdICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMaxDepthDiff_const(const cv::rgbd::RgbdICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDepthDiff();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMaxDepthDiff_double(cv::rgbd::RgbdICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDepthDiff(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMaxPointsPart_const(const cv::rgbd::RgbdICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxPointsPart();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMaxPointsPart_double(cv::rgbd::RgbdICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxPointsPart(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getIterationCounts_const(const cv::rgbd::RgbdICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getIterationCounts();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setIterationCounts_const_MatR(cv::rgbd::RgbdICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterationCounts(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMinGradientMagnitudes_const(const cv::rgbd::RgbdICPOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMinGradientMagnitudes();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMinGradientMagnitudes_const_MatR(cv::rgbd::RgbdICPOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinGradientMagnitudes(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getTransformType_const(const cv::rgbd::RgbdICPOdometry* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTransformType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setTransformType_int(cv::rgbd::RgbdICPOdometry* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTransformType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMaxTranslation_const(const cv::rgbd::RgbdICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxTranslation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMaxTranslation_double(cv::rgbd::RgbdICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxTranslation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getMaxRotation_const(const cv::rgbd::RgbdICPOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxRotation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_setMaxRotation_double(cv::rgbd::RgbdICPOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxRotation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdICPOdometry_getNormalsComputer_const(const cv::rgbd::RgbdICPOdometry* instance, Result<cv::Ptr<cv::rgbd::RgbdNormals>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdNormals> ret = instance->getNormalsComputer();
			Ok(new cv::Ptr<cv::rgbd::RgbdNormals>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_RgbdICPOdometry_to_Algorithm(cv::rgbd::RgbdICPOdometry* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rgbd::Odometry* cv_rgbd_RgbdICPOdometry_to_Odometry(cv::rgbd::RgbdICPOdometry* instance) {
			return dynamic_cast<cv::rgbd::Odometry*>(instance);
	}
	
	void cv_rgbd_RgbdICPOdometry_delete(cv::rgbd::RgbdICPOdometry* instance) {
			delete instance;
	}
	
	void cv_rgbd_RgbdNormals_RgbdNormals(Result<cv::rgbd::RgbdNormals*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdNormals* ret = new cv::rgbd::RgbdNormals();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_RgbdNormals_int_int_int_const__InputArrayR_int_int(int rows, int cols, int depth, const cv::_InputArray* K, int window_size, int method, Result<cv::rgbd::RgbdNormals*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdNormals* ret = new cv::rgbd::RgbdNormals(rows, cols, depth, *K, window_size, method);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_RgbdNormals_int_int_int_const__InputArrayR(int rows, int cols, int depth, const cv::_InputArray* K, Result<cv::rgbd::RgbdNormals*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdNormals* ret = new cv::rgbd::RgbdNormals(rows, cols, depth, *K);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_create_int_int_int_const__InputArrayR_int_int(int rows, int cols, int depth, const cv::_InputArray* K, int window_size, int method, Result<cv::Ptr<cv::rgbd::RgbdNormals>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdNormals> ret = cv::rgbd::RgbdNormals::create(rows, cols, depth, *K, window_size, method);
			Ok(new cv::Ptr<cv::rgbd::RgbdNormals>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_create_int_int_int_const__InputArrayR(int rows, int cols, int depth, const cv::_InputArray* K, Result<cv::Ptr<cv::rgbd::RgbdNormals>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdNormals> ret = cv::rgbd::RgbdNormals::create(rows, cols, depth, *K);
			Ok(new cv::Ptr<cv::rgbd::RgbdNormals>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_operator___const_const__InputArrayR_const__OutputArrayR(const cv::rgbd::RgbdNormals* instance, const cv::_InputArray* points, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*points, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_initialize_const(const cv::rgbd::RgbdNormals* instance, ResultVoid* ocvrs_return) {
		try {
			instance->initialize();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_getRows_const(const cv::rgbd::RgbdNormals* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getRows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_setRows_int(cv::rgbd::RgbdNormals* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRows(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_getCols_const(const cv::rgbd::RgbdNormals* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getCols();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_setCols_int(cv::rgbd::RgbdNormals* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setCols(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_getWindowSize_const(const cv::rgbd::RgbdNormals* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_setWindowSize_int(cv::rgbd::RgbdNormals* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_getDepth_const(const cv::rgbd::RgbdNormals* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_setDepth_int(cv::rgbd::RgbdNormals* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_getK_const(const cv::rgbd::RgbdNormals* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getK();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_setK_const_MatR(cv::rgbd::RgbdNormals* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setK(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_getMethod_const(const cv::rgbd::RgbdNormals* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMethod();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdNormals_setMethod_int(cv::rgbd::RgbdNormals* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMethod(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_RgbdNormals_to_Algorithm(cv::rgbd::RgbdNormals* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_rgbd_RgbdNormals_delete(cv::rgbd::RgbdNormals* instance) {
			delete instance;
	}
	
	void cv_rgbd_RgbdOdometry_RgbdOdometry(Result<cv::rgbd::RgbdOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdOdometry* ret = new cv::rgbd::RgbdOdometry();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_RgbdOdometry_const_MatR_float_float_float_const_vectorLintGR_const_vectorLfloatGR_float_int(const cv::Mat* cameraMatrix, float minDepth, float maxDepth, float maxDepthDiff, const std::vector<int>* iterCounts, const std::vector<float>* minGradientMagnitudes, float maxPointsPart, int transformType, Result<cv::rgbd::RgbdOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdOdometry* ret = new cv::rgbd::RgbdOdometry(*cameraMatrix, minDepth, maxDepth, maxDepthDiff, *iterCounts, *minGradientMagnitudes, maxPointsPart, transformType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_RgbdOdometry_const_MatR(const cv::Mat* cameraMatrix, Result<cv::rgbd::RgbdOdometry*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdOdometry* ret = new cv::rgbd::RgbdOdometry(*cameraMatrix);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_create_const_MatR_float_float_float_const_vectorLintGR_const_vectorLfloatGR_float_int(const cv::Mat* cameraMatrix, float minDepth, float maxDepth, float maxDepthDiff, const std::vector<int>* iterCounts, const std::vector<float>* minGradientMagnitudes, float maxPointsPart, int transformType, Result<cv::Ptr<cv::rgbd::RgbdOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdOdometry> ret = cv::rgbd::RgbdOdometry::create(*cameraMatrix, minDepth, maxDepth, maxDepthDiff, *iterCounts, *minGradientMagnitudes, maxPointsPart, transformType);
			Ok(new cv::Ptr<cv::rgbd::RgbdOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_create(Result<cv::Ptr<cv::rgbd::RgbdOdometry>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdOdometry> ret = cv::rgbd::RgbdOdometry::create();
			Ok(new cv::Ptr<cv::rgbd::RgbdOdometry>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_prepareFrameCache_const_PtrLOdometryFrameGR_int(const cv::rgbd::RgbdOdometry* instance, cv::Ptr<cv::rgbd::OdometryFrame>* frame, int cacheType, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->prepareFrameCache(*frame, cacheType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getCameraMatrix_const(const cv::rgbd::RgbdOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getCameraMatrix();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setCameraMatrix_const_MatR(cv::rgbd::RgbdOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraMatrix(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMinDepth_const(const cv::rgbd::RgbdOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMinDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMinDepth_double(cv::rgbd::RgbdOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMaxDepth_const(const cv::rgbd::RgbdOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMaxDepth_double(cv::rgbd::RgbdOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDepth(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMaxDepthDiff_const(const cv::rgbd::RgbdOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxDepthDiff();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMaxDepthDiff_double(cv::rgbd::RgbdOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxDepthDiff(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getIterationCounts_const(const cv::rgbd::RgbdOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getIterationCounts();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setIterationCounts_const_MatR(cv::rgbd::RgbdOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setIterationCounts(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMinGradientMagnitudes_const(const cv::rgbd::RgbdOdometry* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMinGradientMagnitudes();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMinGradientMagnitudes_const_MatR(cv::rgbd::RgbdOdometry* instance, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinGradientMagnitudes(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMaxPointsPart_const(const cv::rgbd::RgbdOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxPointsPart();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMaxPointsPart_double(cv::rgbd::RgbdOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxPointsPart(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getTransformType_const(const cv::rgbd::RgbdOdometry* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTransformType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setTransformType_int(cv::rgbd::RgbdOdometry* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setTransformType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMaxTranslation_const(const cv::rgbd::RgbdOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxTranslation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMaxTranslation_double(cv::rgbd::RgbdOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxTranslation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_getMaxRotation_const(const cv::rgbd::RgbdOdometry* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMaxRotation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdOdometry_setMaxRotation_double(cv::rgbd::RgbdOdometry* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxRotation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_RgbdOdometry_to_Algorithm(cv::rgbd::RgbdOdometry* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::rgbd::Odometry* cv_rgbd_RgbdOdometry_to_Odometry(cv::rgbd::RgbdOdometry* instance) {
			return dynamic_cast<cv::rgbd::Odometry*>(instance);
	}
	
	void cv_rgbd_RgbdOdometry_delete(cv::rgbd::RgbdOdometry* instance) {
			delete instance;
	}
	
	void cv_rgbd_RgbdPlane_RgbdPlane_int(int method, Result<cv::rgbd::RgbdPlane*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdPlane* ret = new cv::rgbd::RgbdPlane(method);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_RgbdPlane(Result<cv::rgbd::RgbdPlane*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdPlane* ret = new cv::rgbd::RgbdPlane();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_RgbdPlane_int_int_int_double_double_double_double(int method, int block_size, int min_size, double threshold, double sensor_error_a, double sensor_error_b, double sensor_error_c, Result<cv::rgbd::RgbdPlane*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdPlane* ret = new cv::rgbd::RgbdPlane(method, block_size, min_size, threshold, sensor_error_a, sensor_error_b, sensor_error_c);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_RgbdPlane_int_int_int_double(int method, int block_size, int min_size, double threshold, Result<cv::rgbd::RgbdPlane*>* ocvrs_return) {
		try {
			cv::rgbd::RgbdPlane* ret = new cv::rgbd::RgbdPlane(method, block_size, min_size, threshold);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_create_int_int_int_double_double_double_double(int method, int block_size, int min_size, double threshold, double sensor_error_a, double sensor_error_b, double sensor_error_c, Result<cv::Ptr<cv::rgbd::RgbdPlane>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdPlane> ret = cv::rgbd::RgbdPlane::create(method, block_size, min_size, threshold, sensor_error_a, sensor_error_b, sensor_error_c);
			Ok(new cv::Ptr<cv::rgbd::RgbdPlane>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_create_int_int_int_double(int method, int block_size, int min_size, double threshold, Result<cv::Ptr<cv::rgbd::RgbdPlane>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::rgbd::RgbdPlane> ret = cv::rgbd::RgbdPlane::create(method, block_size, min_size, threshold);
			Ok(new cv::Ptr<cv::rgbd::RgbdPlane>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_operator___const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::rgbd::RgbdPlane* instance, const cv::_InputArray* points3d, const cv::_InputArray* normals, const cv::_OutputArray* mask, const cv::_OutputArray* plane_coefficients, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*points3d, *normals, *mask, *plane_coefficients);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_operator___const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::rgbd::RgbdPlane* instance, const cv::_InputArray* points3d, const cv::_OutputArray* mask, const cv::_OutputArray* plane_coefficients, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*points3d, *mask, *plane_coefficients);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getBlockSize_const(const cv::rgbd::RgbdPlane* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getBlockSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setBlockSize_int(cv::rgbd::RgbdPlane* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setBlockSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getMinSize_const(const cv::rgbd::RgbdPlane* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setMinSize_int(cv::rgbd::RgbdPlane* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getMethod_const(const cv::rgbd::RgbdPlane* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMethod();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setMethod_int(cv::rgbd::RgbdPlane* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMethod(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getThreshold_const(const cv::rgbd::RgbdPlane* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setThreshold_double(cv::rgbd::RgbdPlane* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getSensorErrorA_const(const cv::rgbd::RgbdPlane* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSensorErrorA();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setSensorErrorA_double(cv::rgbd::RgbdPlane* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setSensorErrorA(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getSensorErrorB_const(const cv::rgbd::RgbdPlane* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSensorErrorB();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setSensorErrorB_double(cv::rgbd::RgbdPlane* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setSensorErrorB(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_getSensorErrorC_const(const cv::rgbd::RgbdPlane* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSensorErrorC();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rgbd_RgbdPlane_setSensorErrorC_double(cv::rgbd::RgbdPlane* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setSensorErrorC(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_rgbd_RgbdPlane_to_Algorithm(cv::rgbd::RgbdPlane* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_rgbd_RgbdPlane_delete(cv::rgbd::RgbdPlane* instance) {
			delete instance;
	}
	
}
