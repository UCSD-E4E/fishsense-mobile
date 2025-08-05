#include "ocvrs_common.hpp"
#include <opencv2/videostab.hpp>
#include "videostab_types.hpp"

extern "C" {
	void cv_videostab_calcBlurriness_const_MatR(const cv::Mat* frame, Result<float>* ocvrs_return) {
		try {
			float ret = cv::videostab::calcBlurriness(*frame);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_calcFlowMask_const_MatR_const_MatR_const_MatR_float_const_MatR_const_MatR_MatR(const cv::Mat* flowX, const cv::Mat* flowY, const cv::Mat* errors, float maxError, const cv::Mat* mask0, const cv::Mat* mask1, cv::Mat* flowMask, ResultVoid* ocvrs_return) {
		try {
			cv::videostab::calcFlowMask(*flowX, *flowY, *errors, maxError, *mask0, *mask1, *flowMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_completeFrameAccordingToFlow_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_float_MatR_MatR(const cv::Mat* flowMask, const cv::Mat* flowX, const cv::Mat* flowY, const cv::Mat* frame1, const cv::Mat* mask1, float distThresh, cv::Mat* frame0, cv::Mat* mask0, ResultVoid* ocvrs_return) {
		try {
			cv::videostab::completeFrameAccordingToFlow(*flowMask, *flowX, *flowY, *frame1, *mask1, distThresh, *frame0, *mask0);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ensureInclusionConstraint_const_MatR_Size_float(const cv::Mat* M, cv::Size* size, float trimRatio, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::ensureInclusionConstraint(*M, *size, trimRatio);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_estimateGlobalMotionLeastSquares_const__InputOutputArrayR_const__InputOutputArrayR(const cv::_InputOutputArray* points0, const cv::_InputOutputArray* points1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::estimateGlobalMotionLeastSquares(*points0, *points1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_estimateGlobalMotionLeastSquares_const__InputOutputArrayR_const__InputOutputArrayR_int_floatX(const cv::_InputOutputArray* points0, const cv::_InputOutputArray* points1, int model, float* rmse, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::estimateGlobalMotionLeastSquares(*points0, *points1, model, rmse);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_estimateGlobalMotionRansac_const__InputArrayR_const__InputArrayR(const cv::_InputArray* points0, const cv::_InputArray* points1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::estimateGlobalMotionRansac(*points0, *points1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_estimateGlobalMotionRansac_const__InputArrayR_const__InputArrayR_int_const_RansacParamsR_floatX_intX(const cv::_InputArray* points0, const cv::_InputArray* points1, int model, const cv::videostab::RansacParams* params, float* rmse, int* ninliers, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::estimateGlobalMotionRansac(*points0, *points1, model, *params, rmse, ninliers);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_estimateOptimalTrimRatio_const_MatR_Size(const cv::Mat* M, cv::Size* size, Result<float>* ocvrs_return) {
		try {
			float ret = cv::videostab::estimateOptimalTrimRatio(*M, *size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_getMotion_int_int_const_vectorLMatGR(int from, int to, const std::vector<cv::Mat>* motions, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::getMotion(from, to, *motions);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ColorAverageInpainter_inpaint_int_MatR_MatR(cv::videostab::ColorAverageInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::ColorAverageInpainter* cv_videostab_ColorAverageInpainter_defaultNew_const() {
			cv::videostab::ColorAverageInpainter* ret = new cv::videostab::ColorAverageInpainter();
			return ret;
	}
	
	cv::videostab::InpainterBase* cv_videostab_ColorAverageInpainter_to_InpainterBase(cv::videostab::ColorAverageInpainter* instance) {
			return dynamic_cast<cv::videostab::InpainterBase*>(instance);
	}
	
	void cv_videostab_ColorAverageInpainter_delete(cv::videostab::ColorAverageInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_ColorInpainter_ColorInpainter_int_double(int method, double radius, Result<cv::videostab::ColorInpainter*>* ocvrs_return) {
		try {
			cv::videostab::ColorInpainter* ret = new cv::videostab::ColorInpainter(method, radius);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ColorInpainter_ColorInpainter(Result<cv::videostab::ColorInpainter*>* ocvrs_return) {
		try {
			cv::videostab::ColorInpainter* ret = new cv::videostab::ColorInpainter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ColorInpainter_inpaint_int_MatR_MatR(cv::videostab::ColorInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::InpainterBase* cv_videostab_ColorInpainter_to_InpainterBase(cv::videostab::ColorInpainter* instance) {
			return dynamic_cast<cv::videostab::InpainterBase*>(instance);
	}
	
	void cv_videostab_ColorInpainter_delete(cv::videostab::ColorInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_ConsistentMosaicInpainter_ConsistentMosaicInpainter(Result<cv::videostab::ConsistentMosaicInpainter*>* ocvrs_return) {
		try {
			cv::videostab::ConsistentMosaicInpainter* ret = new cv::videostab::ConsistentMosaicInpainter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_setStdevThresh_float(cv::videostab::ConsistentMosaicInpainter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setStdevThresh(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_stdevThresh_const(const cv::videostab::ConsistentMosaicInpainter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->stdevThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_inpaint_int_MatR_MatR(cv::videostab::ConsistentMosaicInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::InpainterBase* cv_videostab_ConsistentMosaicInpainter_to_InpainterBase(cv::videostab::ConsistentMosaicInpainter* instance) {
			return dynamic_cast<cv::videostab::InpainterBase*>(instance);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_delete(cv::videostab::ConsistentMosaicInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_DeblurerBase_setRadius_int(cv::videostab::DeblurerBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_radius_const(const cv::videostab::DeblurerBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_deblur_int_MatR_const_RangeR(cv::videostab::DeblurerBase* instance, int idx, cv::Mat* frame, const cv::Range* range, ResultVoid* ocvrs_return) {
		try {
			instance->deblur(idx, *frame, *range);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setFrames_const_vectorLMatGR(cv::videostab::DeblurerBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_frames_const(const cv::videostab::DeblurerBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->frames();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setMotions_const_vectorLMatGR(cv::videostab::DeblurerBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_motions_const(const cv::videostab::DeblurerBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setBlurrinessRates_const_vectorLfloatGR(cv::videostab::DeblurerBase* instance, const std::vector<float>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setBlurrinessRates(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_blurrinessRates_const(const cv::videostab::DeblurerBase* instance, Result<std::vector<float>*>* ocvrs_return) {
		try {
			const std::vector<float> ret = instance->blurrinessRates();
			Ok(new const std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullDeblurer* cv_videostab_DeblurerBase_to_NullDeblurer(cv::videostab::DeblurerBase* instance) {
			return dynamic_cast<cv::videostab::NullDeblurer*>(instance);
	}
	
	cv::videostab::WeightingDeblurer* cv_videostab_DeblurerBase_to_WeightingDeblurer(cv::videostab::DeblurerBase* instance) {
			return dynamic_cast<cv::videostab::WeightingDeblurer*>(instance);
	}
	
	void cv_videostab_DeblurerBase_delete(cv::videostab::DeblurerBase* instance) {
			delete instance;
	}
	
	void cv_videostab_FastMarchingMethod_FastMarchingMethod(Result<cv::videostab::FastMarchingMethod*>* ocvrs_return) {
		try {
			cv::videostab::FastMarchingMethod* ret = new cv::videostab::FastMarchingMethod();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_FastMarchingMethod_distanceMap_const(const cv::videostab::FastMarchingMethod* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->distanceMap();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_FastMarchingMethod_delete(cv::videostab::FastMarchingMethod* instance) {
			delete instance;
	}
	
	void cv_videostab_FromFileMotionReader_FromFileMotionReader_const_StringR(const char* path, Result<cv::videostab::FromFileMotionReader*>* ocvrs_return) {
		try {
			cv::videostab::FromFileMotionReader* ret = new cv::videostab::FromFileMotionReader(std::string(path));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_FromFileMotionReader_estimate_const_MatR_const_MatR_boolX(cv::videostab::FromFileMotionReader* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_FromFileMotionReader_estimate_const_MatR_const_MatR(cv::videostab::FromFileMotionReader* instance, const cv::Mat* frame0, const cv::Mat* frame1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::ImageMotionEstimatorBase* cv_videostab_FromFileMotionReader_to_ImageMotionEstimatorBase(cv::videostab::FromFileMotionReader* instance) {
			return dynamic_cast<cv::videostab::ImageMotionEstimatorBase*>(instance);
	}
	
	void cv_videostab_FromFileMotionReader_delete(cv::videostab::FromFileMotionReader* instance) {
			delete instance;
	}
	
	void cv_videostab_GaussianMotionFilter_GaussianMotionFilter_int_float(int radius, float stdev, Result<cv::videostab::GaussianMotionFilter*>* ocvrs_return) {
		try {
			cv::videostab::GaussianMotionFilter* ret = new cv::videostab::GaussianMotionFilter(radius, stdev);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_GaussianMotionFilter(Result<cv::videostab::GaussianMotionFilter*>* ocvrs_return) {
		try {
			cv::videostab::GaussianMotionFilter* ret = new cv::videostab::GaussianMotionFilter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_setParams_int_float(cv::videostab::GaussianMotionFilter* instance, int radius, float stdev, ResultVoid* ocvrs_return) {
		try {
			instance->setParams(radius, stdev);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_setParams_int(cv::videostab::GaussianMotionFilter* instance, int radius, ResultVoid* ocvrs_return) {
		try {
			instance->setParams(radius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_radius_const(const cv::videostab::GaussianMotionFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_stdev_const(const cv::videostab::GaussianMotionFilter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->stdev();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_stabilize_int_const_vectorLMatGR_const_RangeR(cv::videostab::GaussianMotionFilter* instance, int idx, const std::vector<cv::Mat>* motions, const cv::Range* range, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->stabilize(idx, *motions, *range);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IMotionStabilizer* cv_videostab_GaussianMotionFilter_to_IMotionStabilizer(cv::videostab::GaussianMotionFilter* instance) {
			return dynamic_cast<cv::videostab::IMotionStabilizer*>(instance);
	}
	
	cv::videostab::MotionFilterBase* cv_videostab_GaussianMotionFilter_to_MotionFilterBase(cv::videostab::GaussianMotionFilter* instance) {
			return dynamic_cast<cv::videostab::MotionFilterBase*>(instance);
	}
	
	void cv_videostab_GaussianMotionFilter_delete(cv::videostab::GaussianMotionFilter* instance) {
			delete instance;
	}
	
	void cv_videostab_IDenseOptFlowEstimator_run_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR(cv::videostab::IDenseOptFlowEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_InputOutputArray* flowX, const cv::_InputOutputArray* flowY, const cv::_OutputArray* errors, ResultVoid* ocvrs_return) {
		try {
			instance->run(*frame0, *frame1, *flowX, *flowY, *errors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_IDenseOptFlowEstimator_delete(cv::videostab::IDenseOptFlowEstimator* instance) {
			delete instance;
	}
	
	void cv_videostab_IFrameSource_reset(cv::videostab::IFrameSource* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_IFrameSource_nextFrame(cv::videostab::IFrameSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MaskFrameSource* cv_videostab_IFrameSource_to_MaskFrameSource(cv::videostab::IFrameSource* instance) {
			return dynamic_cast<cv::videostab::MaskFrameSource*>(instance);
	}
	
	cv::videostab::NullFrameSource* cv_videostab_IFrameSource_to_NullFrameSource(cv::videostab::IFrameSource* instance) {
			return dynamic_cast<cv::videostab::NullFrameSource*>(instance);
	}
	
	cv::videostab::OnePassStabilizer* cv_videostab_IFrameSource_to_OnePassStabilizer(cv::videostab::IFrameSource* instance) {
			return dynamic_cast<cv::videostab::OnePassStabilizer*>(instance);
	}
	
	cv::videostab::TwoPassStabilizer* cv_videostab_IFrameSource_to_TwoPassStabilizer(cv::videostab::IFrameSource* instance) {
			return dynamic_cast<cv::videostab::TwoPassStabilizer*>(instance);
	}
	
	cv::videostab::VideoFileSource* cv_videostab_IFrameSource_to_VideoFileSource(cv::videostab::IFrameSource* instance) {
			return dynamic_cast<cv::videostab::VideoFileSource*>(instance);
	}
	
	void cv_videostab_IFrameSource_delete(cv::videostab::IFrameSource* instance) {
			delete instance;
	}
	
	void cv_videostab_ILog_print_const_charX(cv::videostab::ILog* instance, const char* format, ResultVoid* ocvrs_return) {
		try {
			instance->print(format);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::LogToStdout* cv_videostab_ILog_to_LogToStdout(cv::videostab::ILog* instance) {
			return dynamic_cast<cv::videostab::LogToStdout*>(instance);
	}
	
	cv::videostab::NullLog* cv_videostab_ILog_to_NullLog(cv::videostab::ILog* instance) {
			return dynamic_cast<cv::videostab::NullLog*>(instance);
	}
	
	void cv_videostab_ILog_delete(cv::videostab::ILog* instance) {
			delete instance;
	}
	
	void cv_videostab_IMotionStabilizer_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::IMotionStabilizer* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, ResultVoid* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::GaussianMotionFilter* cv_videostab_IMotionStabilizer_to_GaussianMotionFilter(cv::videostab::IMotionStabilizer* instance) {
			return dynamic_cast<cv::videostab::GaussianMotionFilter*>(instance);
	}
	
	cv::videostab::LpMotionStabilizer* cv_videostab_IMotionStabilizer_to_LpMotionStabilizer(cv::videostab::IMotionStabilizer* instance) {
			return dynamic_cast<cv::videostab::LpMotionStabilizer*>(instance);
	}
	
	cv::videostab::MotionFilterBase* cv_videostab_IMotionStabilizer_to_MotionFilterBase(cv::videostab::IMotionStabilizer* instance) {
			return dynamic_cast<cv::videostab::MotionFilterBase*>(instance);
	}
	
	cv::videostab::MotionStabilizationPipeline* cv_videostab_IMotionStabilizer_to_MotionStabilizationPipeline(cv::videostab::IMotionStabilizer* instance) {
			return dynamic_cast<cv::videostab::MotionStabilizationPipeline*>(instance);
	}
	
	void cv_videostab_IMotionStabilizer_delete(cv::videostab::IMotionStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_IOutlierRejector_process_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::videostab::IOutlierRejector* instance, cv::Size* frameSize, const cv::_InputArray* points0, const cv::_InputArray* points1, const cv::_OutputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->process(*frameSize, *points0, *points1, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullOutlierRejector* cv_videostab_IOutlierRejector_to_NullOutlierRejector(cv::videostab::IOutlierRejector* instance) {
			return dynamic_cast<cv::videostab::NullOutlierRejector*>(instance);
	}
	
	cv::videostab::TranslationBasedLocalOutlierRejector* cv_videostab_IOutlierRejector_to_TranslationBasedLocalOutlierRejector(cv::videostab::IOutlierRejector* instance) {
			return dynamic_cast<cv::videostab::TranslationBasedLocalOutlierRejector*>(instance);
	}
	
	void cv_videostab_IOutlierRejector_delete(cv::videostab::IOutlierRejector* instance) {
			delete instance;
	}
	
	void cv_videostab_ISparseOptFlowEstimator_run_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::videostab::ISparseOptFlowEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_InputArray* points0, const cv::_InputOutputArray* points1, const cv::_OutputArray* status, const cv::_OutputArray* errors, ResultVoid* ocvrs_return) {
		try {
			instance->run(*frame0, *frame1, *points0, *points1, *status, *errors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::SparsePyrLkOptFlowEstimator* cv_videostab_ISparseOptFlowEstimator_to_SparsePyrLkOptFlowEstimator(cv::videostab::ISparseOptFlowEstimator* instance) {
			return dynamic_cast<cv::videostab::SparsePyrLkOptFlowEstimator*>(instance);
	}
	
	void cv_videostab_ISparseOptFlowEstimator_delete(cv::videostab::ISparseOptFlowEstimator* instance) {
			delete instance;
	}
	
	void cv_videostab_ImageMotionEstimatorBase_setMotionModel_MotionModel(cv::videostab::ImageMotionEstimatorBase* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_motionModel_const(const cv::videostab::ImageMotionEstimatorBase* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_setFrameMask_const__InputArrayR(cv::videostab::ImageMotionEstimatorBase* instance, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setFrameMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_estimate_const_MatR_const_MatR_boolX(cv::videostab::ImageMotionEstimatorBase* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_estimate_const_MatR_const_MatR(cv::videostab::ImageMotionEstimatorBase* instance, const cv::Mat* frame0, const cv::Mat* frame1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::FromFileMotionReader* cv_videostab_ImageMotionEstimatorBase_to_FromFileMotionReader(cv::videostab::ImageMotionEstimatorBase* instance) {
			return dynamic_cast<cv::videostab::FromFileMotionReader*>(instance);
	}
	
	cv::videostab::KeypointBasedMotionEstimator* cv_videostab_ImageMotionEstimatorBase_to_KeypointBasedMotionEstimator(cv::videostab::ImageMotionEstimatorBase* instance) {
			return dynamic_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance);
	}
	
	cv::videostab::ToFileMotionWriter* cv_videostab_ImageMotionEstimatorBase_to_ToFileMotionWriter(cv::videostab::ImageMotionEstimatorBase* instance) {
			return dynamic_cast<cv::videostab::ToFileMotionWriter*>(instance);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_delete(cv::videostab::ImageMotionEstimatorBase* instance) {
			delete instance;
	}
	
	void cv_videostab_InpainterBase_setRadius_int(cv::videostab::InpainterBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_radius_const(const cv::videostab::InpainterBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setMotionModel_MotionModel(cv::videostab::InpainterBase* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_motionModel_const(const cv::videostab::InpainterBase* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_inpaint_int_MatR_MatR(cv::videostab::InpainterBase* instance, int idx, cv::Mat* frame, cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setFrames_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_frames_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->frames();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setMotions_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_motions_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setStabilizedFrames_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setStabilizedFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_stabilizedFrames_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->stabilizedFrames();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setStabilizationMotions_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setStabilizationMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_stabilizationMotions_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->stabilizationMotions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::ColorAverageInpainter* cv_videostab_InpainterBase_to_ColorAverageInpainter(cv::videostab::InpainterBase* instance) {
			return dynamic_cast<cv::videostab::ColorAverageInpainter*>(instance);
	}
	
	cv::videostab::ColorInpainter* cv_videostab_InpainterBase_to_ColorInpainter(cv::videostab::InpainterBase* instance) {
			return dynamic_cast<cv::videostab::ColorInpainter*>(instance);
	}
	
	cv::videostab::ConsistentMosaicInpainter* cv_videostab_InpainterBase_to_ConsistentMosaicInpainter(cv::videostab::InpainterBase* instance) {
			return dynamic_cast<cv::videostab::ConsistentMosaicInpainter*>(instance);
	}
	
	cv::videostab::InpaintingPipeline* cv_videostab_InpainterBase_to_InpaintingPipeline(cv::videostab::InpainterBase* instance) {
			return dynamic_cast<cv::videostab::InpaintingPipeline*>(instance);
	}
	
	cv::videostab::MotionInpainter* cv_videostab_InpainterBase_to_MotionInpainter(cv::videostab::InpainterBase* instance) {
			return dynamic_cast<cv::videostab::MotionInpainter*>(instance);
	}
	
	cv::videostab::NullInpainter* cv_videostab_InpainterBase_to_NullInpainter(cv::videostab::InpainterBase* instance) {
			return dynamic_cast<cv::videostab::NullInpainter*>(instance);
	}
	
	void cv_videostab_InpainterBase_delete(cv::videostab::InpainterBase* instance) {
			delete instance;
	}
	
	void cv_videostab_InpaintingPipeline_pushBack_PtrLInpainterBaseG(cv::videostab::InpaintingPipeline* instance, cv::Ptr<cv::videostab::InpainterBase>* inpainter, ResultVoid* ocvrs_return) {
		try {
			instance->pushBack(*inpainter);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_empty_const(const cv::videostab::InpaintingPipeline* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setRadius_int(cv::videostab::InpaintingPipeline* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setMotionModel_MotionModel(cv::videostab::InpaintingPipeline* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setFrames_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setMotions_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setStabilizedFrames_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setStabilizedFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setStabilizationMotions_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setStabilizationMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_inpaint_int_MatR_MatR(cv::videostab::InpaintingPipeline* instance, int idx, cv::Mat* frame, cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::InpaintingPipeline* cv_videostab_InpaintingPipeline_defaultNew_const() {
			cv::videostab::InpaintingPipeline* ret = new cv::videostab::InpaintingPipeline();
			return ret;
	}
	
	cv::videostab::InpainterBase* cv_videostab_InpaintingPipeline_to_InpainterBase(cv::videostab::InpaintingPipeline* instance) {
			return dynamic_cast<cv::videostab::InpainterBase*>(instance);
	}
	
	void cv_videostab_InpaintingPipeline_delete(cv::videostab::InpaintingPipeline* instance) {
			delete instance;
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_KeypointBasedMotionEstimator_PtrLMotionEstimatorBaseG(cv::Ptr<cv::videostab::MotionEstimatorBase>* estimator, Result<cv::videostab::KeypointBasedMotionEstimator*>* ocvrs_return) {
		try {
			cv::videostab::KeypointBasedMotionEstimator* ret = new cv::videostab::KeypointBasedMotionEstimator(*estimator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setMotionModel_MotionModel(cv::videostab::KeypointBasedMotionEstimator* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_motionModel_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setDetector_PtrLFeature2DG(cv::videostab::KeypointBasedMotionEstimator* instance, cv::Ptr<cv::Feature2D>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setDetector(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_detector_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::Ptr<cv::Feature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Feature2D> ret = instance->detector();
			Ok(new cv::Ptr<cv::Feature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setOpticalFlowEstimator_PtrLISparseOptFlowEstimatorG(cv::videostab::KeypointBasedMotionEstimator* instance, cv::Ptr<cv::videostab::ISparseOptFlowEstimator>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setOpticalFlowEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_opticalFlowEstimator_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::Ptr<cv::videostab::ISparseOptFlowEstimator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ISparseOptFlowEstimator> ret = instance->opticalFlowEstimator();
			Ok(new cv::Ptr<cv::videostab::ISparseOptFlowEstimator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setOutlierRejector_PtrLIOutlierRejectorG(cv::videostab::KeypointBasedMotionEstimator* instance, cv::Ptr<cv::videostab::IOutlierRejector>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setOutlierRejector(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_outlierRejector_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::Ptr<cv::videostab::IOutlierRejector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IOutlierRejector> ret = instance->outlierRejector();
			Ok(new cv::Ptr<cv::videostab::IOutlierRejector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setFrameMask_const__InputArrayR(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setFrameMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_estimate_const_MatR_const_MatR_boolX(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_estimate_const_MatR_const_MatR(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::Mat* frame0, const cv::Mat* frame1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_estimate_const__InputArrayR_const__InputArrayR(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::ImageMotionEstimatorBase* cv_videostab_KeypointBasedMotionEstimator_to_ImageMotionEstimatorBase(cv::videostab::KeypointBasedMotionEstimator* instance) {
			return dynamic_cast<cv::videostab::ImageMotionEstimatorBase*>(instance);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_delete(cv::videostab::KeypointBasedMotionEstimator* instance) {
			delete instance;
	}
	
	void cv_videostab_LogToStdout_print_const_charX(cv::videostab::LogToStdout* instance, const char* format, ResultVoid* ocvrs_return) {
		try {
			instance->print(format);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::LogToStdout* cv_videostab_LogToStdout_defaultNew_const() {
			cv::videostab::LogToStdout* ret = new cv::videostab::LogToStdout();
			return ret;
	}
	
	cv::videostab::ILog* cv_videostab_LogToStdout_to_ILog(cv::videostab::LogToStdout* instance) {
			return dynamic_cast<cv::videostab::ILog*>(instance);
	}
	
	void cv_videostab_LogToStdout_delete(cv::videostab::LogToStdout* instance) {
			delete instance;
	}
	
	void cv_videostab_LpMotionStabilizer_LpMotionStabilizer_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::LpMotionStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::LpMotionStabilizer* ret = new cv::videostab::LpMotionStabilizer(model);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_LpMotionStabilizer(Result<cv::videostab::LpMotionStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::LpMotionStabilizer* ret = new cv::videostab::LpMotionStabilizer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setMotionModel_MotionModel(cv::videostab::LpMotionStabilizer* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_motionModel_const(const cv::videostab::LpMotionStabilizer* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setFrameSize_Size(cv::videostab::LpMotionStabilizer* instance, cv::Size* val, ResultVoid* ocvrs_return) {
		try {
			instance->setFrameSize(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_frameSize_const(const cv::videostab::LpMotionStabilizer* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->frameSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setTrimRatio_float(cv::videostab::LpMotionStabilizer* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setTrimRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_trimRatio_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->trimRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight1_float(cv::videostab::LpMotionStabilizer* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setWeight1(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight1_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight2_float(cv::videostab::LpMotionStabilizer* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setWeight2(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight2_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight2();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight3_float(cv::videostab::LpMotionStabilizer* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setWeight3(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight3_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight3();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight4_float(cv::videostab::LpMotionStabilizer* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setWeight4(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight4_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight4();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::LpMotionStabilizer* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, ResultVoid* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IMotionStabilizer* cv_videostab_LpMotionStabilizer_to_IMotionStabilizer(cv::videostab::LpMotionStabilizer* instance) {
			return dynamic_cast<cv::videostab::IMotionStabilizer*>(instance);
	}
	
	void cv_videostab_LpMotionStabilizer_delete(cv::videostab::LpMotionStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_MaskFrameSource_MaskFrameSource_const_PtrLIFrameSourceGR(const cv::Ptr<cv::videostab::IFrameSource>* source, Result<cv::videostab::MaskFrameSource*>* ocvrs_return) {
		try {
			cv::videostab::MaskFrameSource* ret = new cv::videostab::MaskFrameSource(*source);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MaskFrameSource_reset(cv::videostab::MaskFrameSource* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MaskFrameSource_nextFrame(cv::videostab::MaskFrameSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IFrameSource* cv_videostab_MaskFrameSource_to_IFrameSource(cv::videostab::MaskFrameSource* instance) {
			return dynamic_cast<cv::videostab::IFrameSource*>(instance);
	}
	
	void cv_videostab_MaskFrameSource_delete(cv::videostab::MaskFrameSource* instance) {
			delete instance;
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressor_suppress_int_const_MatR_MatR(cv::videostab::MoreAccurateMotionWobbleSuppressor* instance, int idx, const cv::Mat* frame, cv::Mat* result, ResultVoid* ocvrs_return) {
		try {
			instance->suppress(idx, *frame, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MoreAccurateMotionWobbleSuppressor* cv_videostab_MoreAccurateMotionWobbleSuppressor_defaultNew_const() {
			cv::videostab::MoreAccurateMotionWobbleSuppressor* ret = new cv::videostab::MoreAccurateMotionWobbleSuppressor();
			return ret;
	}
	
	cv::videostab::MoreAccurateMotionWobbleSuppressorBase* cv_videostab_MoreAccurateMotionWobbleSuppressor_to_MoreAccurateMotionWobbleSuppressorBase(cv::videostab::MoreAccurateMotionWobbleSuppressor* instance) {
			return dynamic_cast<cv::videostab::MoreAccurateMotionWobbleSuppressorBase*>(instance);
	}
	
	cv::videostab::WobbleSuppressorBase* cv_videostab_MoreAccurateMotionWobbleSuppressor_to_WobbleSuppressorBase(cv::videostab::MoreAccurateMotionWobbleSuppressor* instance) {
			return dynamic_cast<cv::videostab::WobbleSuppressorBase*>(instance);
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressor_delete(cv::videostab::MoreAccurateMotionWobbleSuppressor* instance) {
			delete instance;
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressorBase_setPeriod_int(cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setPeriod(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressorBase_period_const(const cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->period();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MoreAccurateMotionWobbleSuppressor* cv_videostab_MoreAccurateMotionWobbleSuppressorBase_to_MoreAccurateMotionWobbleSuppressor(cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance) {
			return dynamic_cast<cv::videostab::MoreAccurateMotionWobbleSuppressor*>(instance);
	}
	
	cv::videostab::WobbleSuppressorBase* cv_videostab_MoreAccurateMotionWobbleSuppressorBase_to_WobbleSuppressorBase(cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance) {
			return dynamic_cast<cv::videostab::WobbleSuppressorBase*>(instance);
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressorBase_delete(cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionEstimatorBase_setMotionModel_MotionModel(cv::videostab::MotionEstimatorBase* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorBase_motionModel_const(const cv::videostab::MotionEstimatorBase* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorBase_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::MotionEstimatorBase* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorBase_estimate_const__InputArrayR_const__InputArrayR(cv::videostab::MotionEstimatorBase* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MotionEstimatorL1* cv_videostab_MotionEstimatorBase_to_MotionEstimatorL1(cv::videostab::MotionEstimatorBase* instance) {
			return dynamic_cast<cv::videostab::MotionEstimatorL1*>(instance);
	}
	
	cv::videostab::MotionEstimatorRansacL2* cv_videostab_MotionEstimatorBase_to_MotionEstimatorRansacL2(cv::videostab::MotionEstimatorBase* instance) {
			return dynamic_cast<cv::videostab::MotionEstimatorRansacL2*>(instance);
	}
	
	void cv_videostab_MotionEstimatorBase_delete(cv::videostab::MotionEstimatorBase* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionEstimatorL1_MotionEstimatorL1_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::MotionEstimatorL1*>* ocvrs_return) {
		try {
			cv::videostab::MotionEstimatorL1* ret = new cv::videostab::MotionEstimatorL1(model);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorL1_MotionEstimatorL1(Result<cv::videostab::MotionEstimatorL1*>* ocvrs_return) {
		try {
			cv::videostab::MotionEstimatorL1* ret = new cv::videostab::MotionEstimatorL1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorL1_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::MotionEstimatorL1* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorL1_estimate_const__InputArrayR_const__InputArrayR(cv::videostab::MotionEstimatorL1* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MotionEstimatorBase* cv_videostab_MotionEstimatorL1_to_MotionEstimatorBase(cv::videostab::MotionEstimatorL1* instance) {
			return dynamic_cast<cv::videostab::MotionEstimatorBase*>(instance);
	}
	
	void cv_videostab_MotionEstimatorL1_delete(cv::videostab::MotionEstimatorL1* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionEstimatorRansacL2_MotionEstimatorRansacL2_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::MotionEstimatorRansacL2*>* ocvrs_return) {
		try {
			cv::videostab::MotionEstimatorRansacL2* ret = new cv::videostab::MotionEstimatorRansacL2(model);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_MotionEstimatorRansacL2(Result<cv::videostab::MotionEstimatorRansacL2*>* ocvrs_return) {
		try {
			cv::videostab::MotionEstimatorRansacL2* ret = new cv::videostab::MotionEstimatorRansacL2();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_setRansacParams_const_RansacParamsR(cv::videostab::MotionEstimatorRansacL2* instance, const cv::videostab::RansacParams* val, ResultVoid* ocvrs_return) {
		try {
			instance->setRansacParams(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_ransacParams_const(const cv::videostab::MotionEstimatorRansacL2* instance, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams ret = instance->ransacParams();
			Ok(new cv::videostab::RansacParams(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_setMinInlierRatio_float(cv::videostab::MotionEstimatorRansacL2* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinInlierRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_minInlierRatio_const(const cv::videostab::MotionEstimatorRansacL2* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->minInlierRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::MotionEstimatorRansacL2* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_estimate_const__InputArrayR_const__InputArrayR(cv::videostab::MotionEstimatorRansacL2* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MotionEstimatorBase* cv_videostab_MotionEstimatorRansacL2_to_MotionEstimatorBase(cv::videostab::MotionEstimatorRansacL2* instance) {
			return dynamic_cast<cv::videostab::MotionEstimatorBase*>(instance);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_delete(cv::videostab::MotionEstimatorRansacL2* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionFilterBase_stabilize_int_const_vectorLMatGR_const_RangeR(cv::videostab::MotionFilterBase* instance, int idx, const std::vector<cv::Mat>* motions, const cv::Range* range, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->stabilize(idx, *motions, *range);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionFilterBase_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::MotionFilterBase* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, ResultVoid* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::GaussianMotionFilter* cv_videostab_MotionFilterBase_to_GaussianMotionFilter(cv::videostab::MotionFilterBase* instance) {
			return dynamic_cast<cv::videostab::GaussianMotionFilter*>(instance);
	}
	
	cv::videostab::IMotionStabilizer* cv_videostab_MotionFilterBase_to_IMotionStabilizer(cv::videostab::MotionFilterBase* instance) {
			return dynamic_cast<cv::videostab::IMotionStabilizer*>(instance);
	}
	
	void cv_videostab_MotionFilterBase_delete(cv::videostab::MotionFilterBase* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionInpainter_MotionInpainter(Result<cv::videostab::MotionInpainter*>* ocvrs_return) {
		try {
			cv::videostab::MotionInpainter* ret = new cv::videostab::MotionInpainter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setOptFlowEstimator_PtrLIDenseOptFlowEstimatorG(cv::videostab::MotionInpainter* instance, cv::Ptr<cv::videostab::IDenseOptFlowEstimator>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setOptFlowEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_optFlowEstimator_const(const cv::videostab::MotionInpainter* instance, Result<cv::Ptr<cv::videostab::IDenseOptFlowEstimator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IDenseOptFlowEstimator> ret = instance->optFlowEstimator();
			Ok(new cv::Ptr<cv::videostab::IDenseOptFlowEstimator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setFlowErrorThreshold_float(cv::videostab::MotionInpainter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setFlowErrorThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_flowErrorThreshold_const(const cv::videostab::MotionInpainter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->flowErrorThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setDistThreshold_float(cv::videostab::MotionInpainter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setDistThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_distThresh_const(const cv::videostab::MotionInpainter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->distThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setBorderMode_int(cv::videostab::MotionInpainter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setBorderMode(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_borderMode_const(const cv::videostab::MotionInpainter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->borderMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_inpaint_int_MatR_MatR(cv::videostab::MotionInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::InpainterBase* cv_videostab_MotionInpainter_to_InpainterBase(cv::videostab::MotionInpainter* instance) {
			return dynamic_cast<cv::videostab::InpainterBase*>(instance);
	}
	
	void cv_videostab_MotionInpainter_delete(cv::videostab::MotionInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionStabilizationPipeline_pushBack_PtrLIMotionStabilizerG(cv::videostab::MotionStabilizationPipeline* instance, cv::Ptr<cv::videostab::IMotionStabilizer>* stabilizer, ResultVoid* ocvrs_return) {
		try {
			instance->pushBack(*stabilizer);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionStabilizationPipeline_empty_const(const cv::videostab::MotionStabilizationPipeline* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_MotionStabilizationPipeline_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::MotionStabilizationPipeline* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, ResultVoid* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MotionStabilizationPipeline* cv_videostab_MotionStabilizationPipeline_defaultNew_const() {
			cv::videostab::MotionStabilizationPipeline* ret = new cv::videostab::MotionStabilizationPipeline();
			return ret;
	}
	
	cv::videostab::IMotionStabilizer* cv_videostab_MotionStabilizationPipeline_to_IMotionStabilizer(cv::videostab::MotionStabilizationPipeline* instance) {
			return dynamic_cast<cv::videostab::IMotionStabilizer*>(instance);
	}
	
	void cv_videostab_MotionStabilizationPipeline_delete(cv::videostab::MotionStabilizationPipeline* instance) {
			delete instance;
	}
	
	void cv_videostab_NullDeblurer_deblur_int_MatR_const_RangeR(cv::videostab::NullDeblurer* instance, int unnamed, cv::Mat* unnamed_1, const cv::Range* unnamed_2, ResultVoid* ocvrs_return) {
		try {
			instance->deblur(unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullDeblurer* cv_videostab_NullDeblurer_defaultNew_const() {
			cv::videostab::NullDeblurer* ret = new cv::videostab::NullDeblurer();
			return ret;
	}
	
	cv::videostab::DeblurerBase* cv_videostab_NullDeblurer_to_DeblurerBase(cv::videostab::NullDeblurer* instance) {
			return dynamic_cast<cv::videostab::DeblurerBase*>(instance);
	}
	
	void cv_videostab_NullDeblurer_delete(cv::videostab::NullDeblurer* instance) {
			delete instance;
	}
	
	void cv_videostab_NullFrameSource_reset(cv::videostab::NullFrameSource* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_NullFrameSource_nextFrame(cv::videostab::NullFrameSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullFrameSource* cv_videostab_NullFrameSource_defaultNew_const() {
			cv::videostab::NullFrameSource* ret = new cv::videostab::NullFrameSource();
			return ret;
	}
	
	cv::videostab::IFrameSource* cv_videostab_NullFrameSource_to_IFrameSource(cv::videostab::NullFrameSource* instance) {
			return dynamic_cast<cv::videostab::IFrameSource*>(instance);
	}
	
	void cv_videostab_NullFrameSource_delete(cv::videostab::NullFrameSource* instance) {
			delete instance;
	}
	
	void cv_videostab_NullInpainter_inpaint_int_MatR_MatR(cv::videostab::NullInpainter* instance, int unnamed, cv::Mat* unnamed_1, cv::Mat* unnamed_2, ResultVoid* ocvrs_return) {
		try {
			instance->inpaint(unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullInpainter* cv_videostab_NullInpainter_defaultNew_const() {
			cv::videostab::NullInpainter* ret = new cv::videostab::NullInpainter();
			return ret;
	}
	
	cv::videostab::InpainterBase* cv_videostab_NullInpainter_to_InpainterBase(cv::videostab::NullInpainter* instance) {
			return dynamic_cast<cv::videostab::InpainterBase*>(instance);
	}
	
	void cv_videostab_NullInpainter_delete(cv::videostab::NullInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_NullLog_print_const_charX(cv::videostab::NullLog* instance, const char* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->print(unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullLog* cv_videostab_NullLog_defaultNew_const() {
			cv::videostab::NullLog* ret = new cv::videostab::NullLog();
			return ret;
	}
	
	cv::videostab::ILog* cv_videostab_NullLog_to_ILog(cv::videostab::NullLog* instance) {
			return dynamic_cast<cv::videostab::ILog*>(instance);
	}
	
	void cv_videostab_NullLog_delete(cv::videostab::NullLog* instance) {
			delete instance;
	}
	
	void cv_videostab_NullOutlierRejector_process_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::videostab::NullOutlierRejector* instance, cv::Size* frameSize, const cv::_InputArray* points0, const cv::_InputArray* points1, const cv::_OutputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->process(*frameSize, *points0, *points1, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullOutlierRejector* cv_videostab_NullOutlierRejector_defaultNew_const() {
			cv::videostab::NullOutlierRejector* ret = new cv::videostab::NullOutlierRejector();
			return ret;
	}
	
	cv::videostab::IOutlierRejector* cv_videostab_NullOutlierRejector_to_IOutlierRejector(cv::videostab::NullOutlierRejector* instance) {
			return dynamic_cast<cv::videostab::IOutlierRejector*>(instance);
	}
	
	void cv_videostab_NullOutlierRejector_delete(cv::videostab::NullOutlierRejector* instance) {
			delete instance;
	}
	
	void cv_videostab_NullWobbleSuppressor_suppress_int_const_MatR_MatR(cv::videostab::NullWobbleSuppressor* instance, int idx, const cv::Mat* frame, cv::Mat* result, ResultVoid* ocvrs_return) {
		try {
			instance->suppress(idx, *frame, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::NullWobbleSuppressor* cv_videostab_NullWobbleSuppressor_defaultNew_const() {
			cv::videostab::NullWobbleSuppressor* ret = new cv::videostab::NullWobbleSuppressor();
			return ret;
	}
	
	cv::videostab::WobbleSuppressorBase* cv_videostab_NullWobbleSuppressor_to_WobbleSuppressorBase(cv::videostab::NullWobbleSuppressor* instance) {
			return dynamic_cast<cv::videostab::WobbleSuppressorBase*>(instance);
	}
	
	void cv_videostab_NullWobbleSuppressor_delete(cv::videostab::NullWobbleSuppressor* instance) {
			delete instance;
	}
	
	void cv_videostab_OnePassStabilizer_OnePassStabilizer(Result<cv::videostab::OnePassStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::OnePassStabilizer* ret = new cv::videostab::OnePassStabilizer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_setMotionFilter_PtrLMotionFilterBaseG(cv::videostab::OnePassStabilizer* instance, cv::Ptr<cv::videostab::MotionFilterBase>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionFilter(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_motionFilter_const(const cv::videostab::OnePassStabilizer* instance, Result<cv::Ptr<cv::videostab::MotionFilterBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::MotionFilterBase> ret = instance->motionFilter();
			Ok(new cv::Ptr<cv::videostab::MotionFilterBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_reset(cv::videostab::OnePassStabilizer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_nextFrame(cv::videostab::OnePassStabilizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IFrameSource* cv_videostab_OnePassStabilizer_to_IFrameSource(cv::videostab::OnePassStabilizer* instance) {
			return dynamic_cast<cv::videostab::IFrameSource*>(instance);
	}
	
	cv::videostab::StabilizerBase* cv_videostab_OnePassStabilizer_to_StabilizerBase(cv::videostab::OnePassStabilizer* instance) {
			return dynamic_cast<cv::videostab::StabilizerBase*>(instance);
	}
	
	void cv_videostab_OnePassStabilizer_delete(cv::videostab::OnePassStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_PyrLkOptFlowEstimatorBase(Result<cv::videostab::PyrLkOptFlowEstimatorBase*>* ocvrs_return) {
		try {
			cv::videostab::PyrLkOptFlowEstimatorBase* ret = new cv::videostab::PyrLkOptFlowEstimatorBase();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_setWinSize_Size(cv::videostab::PyrLkOptFlowEstimatorBase* instance, cv::Size* val, ResultVoid* ocvrs_return) {
		try {
			instance->setWinSize(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_winSize_const(const cv::videostab::PyrLkOptFlowEstimatorBase* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->winSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_setMaxLevel_int(cv::videostab::PyrLkOptFlowEstimatorBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxLevel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_maxLevel_const(const cv::videostab::PyrLkOptFlowEstimatorBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::SparsePyrLkOptFlowEstimator* cv_videostab_PyrLkOptFlowEstimatorBase_to_SparsePyrLkOptFlowEstimator(cv::videostab::PyrLkOptFlowEstimatorBase* instance) {
			return dynamic_cast<cv::videostab::SparsePyrLkOptFlowEstimator*>(instance);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_delete(cv::videostab::PyrLkOptFlowEstimatorBase* instance) {
			delete instance;
	}
	
	void cv_videostab_RansacParams_RansacParams(Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams* ret = new cv::videostab::RansacParams();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_RansacParams_RansacParams_int_float_float_float(int size, float thresh, float eps, float prob, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams* ret = new cv::videostab::RansacParams(size, thresh, eps, prob);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_RansacParams_niters_const(const cv::videostab::RansacParams* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->niters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_RansacParams_default2dMotion_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams ret = cv::videostab::RansacParams::default2dMotion(model);
			Ok(new cv::videostab::RansacParams(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_videostab_RansacParams_propSize_const(const cv::videostab::RansacParams* instance) {
			int ret = instance->size;
			return ret;
	}
	
	void cv_videostab_RansacParams_propSize_const_int(cv::videostab::RansacParams* instance, const int val) {
			instance->size = val;
	}
	
	float cv_videostab_RansacParams_propThresh_const(const cv::videostab::RansacParams* instance) {
			float ret = instance->thresh;
			return ret;
	}
	
	void cv_videostab_RansacParams_propThresh_const_float(cv::videostab::RansacParams* instance, const float val) {
			instance->thresh = val;
	}
	
	float cv_videostab_RansacParams_propEps_const(const cv::videostab::RansacParams* instance) {
			float ret = instance->eps;
			return ret;
	}
	
	void cv_videostab_RansacParams_propEps_const_float(cv::videostab::RansacParams* instance, const float val) {
			instance->eps = val;
	}
	
	float cv_videostab_RansacParams_propProb_const(const cv::videostab::RansacParams* instance) {
			float ret = instance->prob;
			return ret;
	}
	
	void cv_videostab_RansacParams_propProb_const_float(cv::videostab::RansacParams* instance, const float val) {
			instance->prob = val;
	}
	
	void cv_videostab_RansacParams_delete(cv::videostab::RansacParams* instance) {
			delete instance;
	}
	
	void cv_videostab_SparsePyrLkOptFlowEstimator_run_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::videostab::SparsePyrLkOptFlowEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_InputArray* points0, const cv::_InputOutputArray* points1, const cv::_OutputArray* status, const cv::_OutputArray* errors, ResultVoid* ocvrs_return) {
		try {
			instance->run(*frame0, *frame1, *points0, *points1, *status, *errors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::SparsePyrLkOptFlowEstimator* cv_videostab_SparsePyrLkOptFlowEstimator_defaultNew_const() {
			cv::videostab::SparsePyrLkOptFlowEstimator* ret = new cv::videostab::SparsePyrLkOptFlowEstimator();
			return ret;
	}
	
	cv::videostab::ISparseOptFlowEstimator* cv_videostab_SparsePyrLkOptFlowEstimator_to_ISparseOptFlowEstimator(cv::videostab::SparsePyrLkOptFlowEstimator* instance) {
			return dynamic_cast<cv::videostab::ISparseOptFlowEstimator*>(instance);
	}
	
	cv::videostab::PyrLkOptFlowEstimatorBase* cv_videostab_SparsePyrLkOptFlowEstimator_to_PyrLkOptFlowEstimatorBase(cv::videostab::SparsePyrLkOptFlowEstimator* instance) {
			return dynamic_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance);
	}
	
	void cv_videostab_SparsePyrLkOptFlowEstimator_delete(cv::videostab::SparsePyrLkOptFlowEstimator* instance) {
			delete instance;
	}
	
	void cv_videostab_StabilizerBase_setLog_PtrLILogG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::ILog>* ilog, ResultVoid* ocvrs_return) {
		try {
			instance->setLog(*ilog);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_log_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::ILog>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ILog> ret = instance->log();
			Ok(new cv::Ptr<cv::videostab::ILog>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setRadius_int(cv::videostab::StabilizerBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_radius_const(const cv::videostab::StabilizerBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setFrameSource_PtrLIFrameSourceG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::IFrameSource>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setFrameSource(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_frameSource_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::IFrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IFrameSource> ret = instance->frameSource();
			Ok(new cv::Ptr<cv::videostab::IFrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setMaskSource_const_PtrLIFrameSourceGR(cv::videostab::StabilizerBase* instance, const cv::Ptr<cv::videostab::IFrameSource>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaskSource(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_maskSource_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::IFrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IFrameSource> ret = instance->maskSource();
			Ok(new cv::Ptr<cv::videostab::IFrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setMotionEstimator_PtrLImageMotionEstimatorBaseG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_motionEstimator_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::ImageMotionEstimatorBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ImageMotionEstimatorBase> ret = instance->motionEstimator();
			Ok(new cv::Ptr<cv::videostab::ImageMotionEstimatorBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setDeblurer_PtrLDeblurerBaseG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::DeblurerBase>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setDeblurer(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_deblurrer_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::DeblurerBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::DeblurerBase> ret = instance->deblurrer();
			Ok(new cv::Ptr<cv::videostab::DeblurerBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setTrimRatio_float(cv::videostab::StabilizerBase* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setTrimRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_trimRatio_const(const cv::videostab::StabilizerBase* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->trimRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setCorrectionForInclusion_bool(cv::videostab::StabilizerBase* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setCorrectionForInclusion(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_doCorrectionForInclusion_const(const cv::videostab::StabilizerBase* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->doCorrectionForInclusion();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setBorderMode_int(cv::videostab::StabilizerBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setBorderMode(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_borderMode_const(const cv::videostab::StabilizerBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->borderMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setInpainter_PtrLInpainterBaseG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::InpainterBase>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setInpainter(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_inpainter_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::InpainterBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::InpainterBase> ret = instance->inpainter();
			Ok(new cv::Ptr<cv::videostab::InpainterBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::OnePassStabilizer* cv_videostab_StabilizerBase_to_OnePassStabilizer(cv::videostab::StabilizerBase* instance) {
			return dynamic_cast<cv::videostab::OnePassStabilizer*>(instance);
	}
	
	cv::videostab::TwoPassStabilizer* cv_videostab_StabilizerBase_to_TwoPassStabilizer(cv::videostab::StabilizerBase* instance) {
			return dynamic_cast<cv::videostab::TwoPassStabilizer*>(instance);
	}
	
	void cv_videostab_StabilizerBase_delete(cv::videostab::StabilizerBase* instance) {
			delete instance;
	}
	
	void cv_videostab_ToFileMotionWriter_ToFileMotionWriter_const_StringR_PtrLImageMotionEstimatorBaseG(const char* path, cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* estimator, Result<cv::videostab::ToFileMotionWriter*>* ocvrs_return) {
		try {
			cv::videostab::ToFileMotionWriter* ret = new cv::videostab::ToFileMotionWriter(std::string(path), *estimator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_setMotionModel_MotionModel(cv::videostab::ToFileMotionWriter* instance, cv::videostab::MotionModel val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_motionModel_const(const cv::videostab::ToFileMotionWriter* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_setFrameMask_const__InputArrayR(cv::videostab::ToFileMotionWriter* instance, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setFrameMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_estimate_const_MatR_const_MatR_boolX(cv::videostab::ToFileMotionWriter* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_estimate_const_MatR_const_MatR(cv::videostab::ToFileMotionWriter* instance, const cv::Mat* frame0, const cv::Mat* frame1, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::ImageMotionEstimatorBase* cv_videostab_ToFileMotionWriter_to_ImageMotionEstimatorBase(cv::videostab::ToFileMotionWriter* instance) {
			return dynamic_cast<cv::videostab::ImageMotionEstimatorBase*>(instance);
	}
	
	void cv_videostab_ToFileMotionWriter_delete(cv::videostab::ToFileMotionWriter* instance) {
			delete instance;
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_TranslationBasedLocalOutlierRejector(Result<cv::videostab::TranslationBasedLocalOutlierRejector*>* ocvrs_return) {
		try {
			cv::videostab::TranslationBasedLocalOutlierRejector* ret = new cv::videostab::TranslationBasedLocalOutlierRejector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_setCellSize_Size(cv::videostab::TranslationBasedLocalOutlierRejector* instance, cv::Size* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCellSize(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_cellSize_const(const cv::videostab::TranslationBasedLocalOutlierRejector* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->cellSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_setRansacParams_RansacParams(cv::videostab::TranslationBasedLocalOutlierRejector* instance, cv::videostab::RansacParams* val, ResultVoid* ocvrs_return) {
		try {
			instance->setRansacParams(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_ransacParams_const(const cv::videostab::TranslationBasedLocalOutlierRejector* instance, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams ret = instance->ransacParams();
			Ok(new cv::videostab::RansacParams(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_process_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::videostab::TranslationBasedLocalOutlierRejector* instance, cv::Size* frameSize, const cv::_InputArray* points0, const cv::_InputArray* points1, const cv::_OutputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->process(*frameSize, *points0, *points1, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IOutlierRejector* cv_videostab_TranslationBasedLocalOutlierRejector_to_IOutlierRejector(cv::videostab::TranslationBasedLocalOutlierRejector* instance) {
			return dynamic_cast<cv::videostab::IOutlierRejector*>(instance);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_delete(cv::videostab::TranslationBasedLocalOutlierRejector* instance) {
			delete instance;
	}
	
	void cv_videostab_TwoPassStabilizer_TwoPassStabilizer(Result<cv::videostab::TwoPassStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::TwoPassStabilizer* ret = new cv::videostab::TwoPassStabilizer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_setMotionStabilizer_PtrLIMotionStabilizerG(cv::videostab::TwoPassStabilizer* instance, cv::Ptr<cv::videostab::IMotionStabilizer>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionStabilizer(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_motionStabilizer_const(const cv::videostab::TwoPassStabilizer* instance, Result<cv::Ptr<cv::videostab::IMotionStabilizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IMotionStabilizer> ret = instance->motionStabilizer();
			Ok(new cv::Ptr<cv::videostab::IMotionStabilizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_setWobbleSuppressor_PtrLWobbleSuppressorBaseG(cv::videostab::TwoPassStabilizer* instance, cv::Ptr<cv::videostab::WobbleSuppressorBase>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setWobbleSuppressor(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_wobbleSuppressor_const(const cv::videostab::TwoPassStabilizer* instance, Result<cv::Ptr<cv::videostab::WobbleSuppressorBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::WobbleSuppressorBase> ret = instance->wobbleSuppressor();
			Ok(new cv::Ptr<cv::videostab::WobbleSuppressorBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_setEstimateTrimRatio_bool(cv::videostab::TwoPassStabilizer* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setEstimateTrimRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_mustEstimateTrimaRatio_const(const cv::videostab::TwoPassStabilizer* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->mustEstimateTrimaRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_reset(cv::videostab::TwoPassStabilizer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_nextFrame(cv::videostab::TwoPassStabilizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IFrameSource* cv_videostab_TwoPassStabilizer_to_IFrameSource(cv::videostab::TwoPassStabilizer* instance) {
			return dynamic_cast<cv::videostab::IFrameSource*>(instance);
	}
	
	cv::videostab::StabilizerBase* cv_videostab_TwoPassStabilizer_to_StabilizerBase(cv::videostab::TwoPassStabilizer* instance) {
			return dynamic_cast<cv::videostab::StabilizerBase*>(instance);
	}
	
	void cv_videostab_TwoPassStabilizer_delete(cv::videostab::TwoPassStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_VideoFileSource_VideoFileSource_const_StringR_bool(const char* path, bool volatileFrame, Result<cv::videostab::VideoFileSource*>* ocvrs_return) {
		try {
			cv::videostab::VideoFileSource* ret = new cv::videostab::VideoFileSource(std::string(path), volatileFrame);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_VideoFileSource_const_StringR(const char* path, Result<cv::videostab::VideoFileSource*>* ocvrs_return) {
		try {
			cv::videostab::VideoFileSource* ret = new cv::videostab::VideoFileSource(std::string(path));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_reset(cv::videostab::VideoFileSource* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_nextFrame(cv::videostab::VideoFileSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_width(cv::videostab::VideoFileSource* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->width();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_height(cv::videostab::VideoFileSource* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->height();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_count(cv::videostab::VideoFileSource* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->count();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_fps(cv::videostab::VideoFileSource* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->fps();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::IFrameSource* cv_videostab_VideoFileSource_to_IFrameSource(cv::videostab::VideoFileSource* instance) {
			return dynamic_cast<cv::videostab::IFrameSource*>(instance);
	}
	
	void cv_videostab_VideoFileSource_delete(cv::videostab::VideoFileSource* instance) {
			delete instance;
	}
	
	void cv_videostab_WeightingDeblurer_WeightingDeblurer(Result<cv::videostab::WeightingDeblurer*>* ocvrs_return) {
		try {
			cv::videostab::WeightingDeblurer* ret = new cv::videostab::WeightingDeblurer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WeightingDeblurer_setSensitivity_float(cv::videostab::WeightingDeblurer* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setSensitivity(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WeightingDeblurer_sensitivity_const(const cv::videostab::WeightingDeblurer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->sensitivity();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WeightingDeblurer_deblur_int_MatR_const_RangeR(cv::videostab::WeightingDeblurer* instance, int idx, cv::Mat* frame, const cv::Range* range, ResultVoid* ocvrs_return) {
		try {
			instance->deblur(idx, *frame, *range);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::DeblurerBase* cv_videostab_WeightingDeblurer_to_DeblurerBase(cv::videostab::WeightingDeblurer* instance) {
			return dynamic_cast<cv::videostab::DeblurerBase*>(instance);
	}
	
	void cv_videostab_WeightingDeblurer_delete(cv::videostab::WeightingDeblurer* instance) {
			delete instance;
	}
	
	void cv_videostab_WobbleSuppressorBase_setMotionEstimator_PtrLImageMotionEstimatorBaseG(cv::videostab::WobbleSuppressorBase* instance, cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotionEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_motionEstimator_const(const cv::videostab::WobbleSuppressorBase* instance, Result<cv::Ptr<cv::videostab::ImageMotionEstimatorBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ImageMotionEstimatorBase> ret = instance->motionEstimator();
			Ok(new cv::Ptr<cv::videostab::ImageMotionEstimatorBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_suppress_int_const_MatR_MatR(cv::videostab::WobbleSuppressorBase* instance, int idx, const cv::Mat* frame, cv::Mat* result, ResultVoid* ocvrs_return) {
		try {
			instance->suppress(idx, *frame, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setFrameCount_int(cv::videostab::WobbleSuppressorBase* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setFrameCount(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_frameCount_const(const cv::videostab::WobbleSuppressorBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->frameCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setMotions_const_vectorLMatGR(cv::videostab::WobbleSuppressorBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_motions_const(const cv::videostab::WobbleSuppressorBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setMotions2_const_vectorLMatGR(cv::videostab::WobbleSuppressorBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setMotions2(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_motions2_const(const cv::videostab::WobbleSuppressorBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions2();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setStabilizationMotions_const_vectorLMatGR(cv::videostab::WobbleSuppressorBase* instance, const std::vector<cv::Mat>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setStabilizationMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_stabilizationMotions_const(const cv::videostab::WobbleSuppressorBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->stabilizationMotions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::videostab::MoreAccurateMotionWobbleSuppressor* cv_videostab_WobbleSuppressorBase_to_MoreAccurateMotionWobbleSuppressor(cv::videostab::WobbleSuppressorBase* instance) {
			return dynamic_cast<cv::videostab::MoreAccurateMotionWobbleSuppressor*>(instance);
	}
	
	cv::videostab::MoreAccurateMotionWobbleSuppressorBase* cv_videostab_WobbleSuppressorBase_to_MoreAccurateMotionWobbleSuppressorBase(cv::videostab::WobbleSuppressorBase* instance) {
			return dynamic_cast<cv::videostab::MoreAccurateMotionWobbleSuppressorBase*>(instance);
	}
	
	cv::videostab::NullWobbleSuppressor* cv_videostab_WobbleSuppressorBase_to_NullWobbleSuppressor(cv::videostab::WobbleSuppressorBase* instance) {
			return dynamic_cast<cv::videostab::NullWobbleSuppressor*>(instance);
	}
	
	void cv_videostab_WobbleSuppressorBase_delete(cv::videostab::WobbleSuppressorBase* instance) {
			delete instance;
	}
	
}
