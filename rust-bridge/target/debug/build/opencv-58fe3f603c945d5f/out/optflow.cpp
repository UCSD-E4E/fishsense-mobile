#include "ocvrs_common.hpp"
#include <opencv2/optflow.hpp>
#include "optflow_types.hpp"

extern "C" {
	void cv_motempl_calcGlobalOrientation_const__InputArrayR_const__InputArrayR_const__InputArrayR_double_double(const cv::_InputArray* orientation, const cv::_InputArray* mask, const cv::_InputArray* mhi, double timestamp, double duration, Result<double>* ocvrs_return) {
		try {
			double ret = cv::motempl::calcGlobalOrientation(*orientation, *mask, *mhi, timestamp, duration);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_motempl_calcMotionGradient_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* mhi, const cv::_OutputArray* mask, const cv::_OutputArray* orientation, double delta1, double delta2, ResultVoid* ocvrs_return) {
		try {
			cv::motempl::calcMotionGradient(*mhi, *mask, *orientation, delta1, delta2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_motempl_calcMotionGradient_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double_double_int(const cv::_InputArray* mhi, const cv::_OutputArray* mask, const cv::_OutputArray* orientation, double delta1, double delta2, int apertureSize, ResultVoid* ocvrs_return) {
		try {
			cv::motempl::calcMotionGradient(*mhi, *mask, *orientation, delta1, delta2, apertureSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_motempl_segmentMotion_const__InputArrayR_const__OutputArrayR_vectorLRectGR_double_double(const cv::_InputArray* mhi, const cv::_OutputArray* segmask, std::vector<cv::Rect>* boundingRects, double timestamp, double segThresh, ResultVoid* ocvrs_return) {
		try {
			cv::motempl::segmentMotion(*mhi, *segmask, *boundingRects, timestamp, segThresh);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_motempl_updateMotionHistory_const__InputArrayR_const__InputOutputArrayR_double_double(const cv::_InputArray* silhouette, const cv::_InputOutputArray* mhi, double timestamp, double duration, ResultVoid* ocvrs_return) {
		try {
			cv::motempl::updateMotionHistory(*silhouette, *mhi, timestamp, duration);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowDenseRLOF_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR(const cv::_InputArray* I0, const cv::_InputArray* I1, const cv::_InputOutputArray* flow, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowDenseRLOF(*I0, *I1, *flow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowDenseRLOF_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_PtrLRLOFOpticalFlowParameterG_float_Size_InterpolationType_int_float_float_int_int_bool_float_float_bool(const cv::_InputArray* I0, const cv::_InputArray* I1, const cv::_InputOutputArray* flow, cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* rlofParam, float forwardBackwardThreshold, cv::Size* gridStep, cv::optflow::InterpolationType interp_type, int epicK, float epicSigma, float epicLambda, int ricSPSize, int ricSLICType, bool use_post_proc, float fgsLambda, float fgsSigma, bool use_variational_refinement, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowDenseRLOF(*I0, *I1, *flow, *rlofParam, forwardBackwardThreshold, *gridStep, interp_type, epicK, epicSigma, epicLambda, ricSPSize, ricSLICType, use_post_proc, fgsLambda, fgsSigma, use_variational_refinement);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowSF_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int_int(const cv::_InputArray* from, const cv::_InputArray* to, const cv::_OutputArray* flow, int layers, int averaging_block_size, int max_flow, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowSF(*from, *to, *flow, layers, averaging_block_size, max_flow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowSF_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int_int_double_double_int_double_double_double_int_double_double_double(const cv::_InputArray* from, const cv::_InputArray* to, const cv::_OutputArray* flow, int layers, int averaging_block_size, int max_flow, double sigma_dist, double sigma_color, int postprocess_window, double sigma_dist_fix, double sigma_color_fix, double occ_thr, int upscale_averaging_radius, double upscale_sigma_dist, double upscale_sigma_color, double speed_up_thr, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowSF(*from, *to, *flow, layers, averaging_block_size, max_flow, sigma_dist, sigma_color, postprocess_window, sigma_dist_fix, sigma_color_fix, occ_thr, upscale_averaging_radius, upscale_sigma_dist, upscale_sigma_color, speed_up_thr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowSparseRLOF_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* prevImg, const cv::_InputArray* nextImg, const cv::_InputArray* prevPts, const cv::_InputOutputArray* nextPts, const cv::_OutputArray* status, const cv::_OutputArray* err, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowSparseRLOF(*prevImg, *nextImg, *prevPts, *nextPts, *status, *err);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowSparseRLOF_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_PtrLRLOFOpticalFlowParameterG_float(const cv::_InputArray* prevImg, const cv::_InputArray* nextImg, const cv::_InputArray* prevPts, const cv::_InputOutputArray* nextPts, const cv::_OutputArray* status, const cv::_OutputArray* err, cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* rlofParam, float forwardBackwardThreshold, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowSparseRLOF(*prevImg, *nextImg, *prevPts, *nextPts, *status, *err, *rlofParam, forwardBackwardThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowSparseToDense_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* from, const cv::_InputArray* to, const cv::_OutputArray* flow, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowSparseToDense(*from, *to, *flow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_calcOpticalFlowSparseToDense_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_int_float_bool_float_float(const cv::_InputArray* from, const cv::_InputArray* to, const cv::_OutputArray* flow, int grid_step, int k, float sigma, bool use_post_proc, float fgs_lambda, float fgs_sigma, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::calcOpticalFlowSparseToDense(*from, *to, *flow, grid_step, k, sigma, use_post_proc, fgs_lambda, fgs_sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_DeepFlow(Result<cv::Ptr<cv::DenseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DenseOpticalFlow> ret = cv::optflow::createOptFlow_DeepFlow();
			Ok(new cv::Ptr<cv::DenseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_DenseRLOF(Result<cv::Ptr<cv::DenseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DenseOpticalFlow> ret = cv::optflow::createOptFlow_DenseRLOF();
			Ok(new cv::Ptr<cv::DenseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_DualTVL1(Result<cv::Ptr<cv::optflow::DualTVL1OpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::DualTVL1OpticalFlow> ret = cv::optflow::createOptFlow_DualTVL1();
			Ok(new cv::Ptr<cv::optflow::DualTVL1OpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_Farneback(Result<cv::Ptr<cv::DenseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DenseOpticalFlow> ret = cv::optflow::createOptFlow_Farneback();
			Ok(new cv::Ptr<cv::DenseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_PCAFlow(Result<cv::Ptr<cv::DenseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DenseOpticalFlow> ret = cv::optflow::createOptFlow_PCAFlow();
			Ok(new cv::Ptr<cv::DenseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_SimpleFlow(Result<cv::Ptr<cv::DenseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DenseOpticalFlow> ret = cv::optflow::createOptFlow_SimpleFlow();
			Ok(new cv::Ptr<cv::DenseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_SparseRLOF(Result<cv::Ptr<cv::SparseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::SparseOpticalFlow> ret = cv::optflow::createOptFlow_SparseRLOF();
			Ok(new cv::Ptr<cv::SparseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_createOptFlow_SparseToDense(Result<cv::Ptr<cv::DenseOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DenseOpticalFlow> ret = cv::optflow::createOptFlow_SparseToDense();
			Ok(new cv::Ptr<cv::DenseOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_NodeR_Node(const cv::FileNode* fn, cv::optflow::GPCTree::Node* node, cv::optflow::GPCTree::Node* unnamed, ResultVoid* ocvrs_return) {
		try {
			cv::read(*fn, *node, *unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_const_NodeR(cv::FileStorage* fs, const char* name, const cv::optflow::GPCTree::Node* node, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), *node);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setRLOFOpticalFlowParameter_PtrLRLOFOpticalFlowParameterG(cv::optflow::DenseRLOFOpticalFlow* instance, cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setRLOFOpticalFlowParameter(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getRLOFOpticalFlowParameter_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::RLOFOpticalFlowParameter> ret = instance->getRLOFOpticalFlowParameter();
			Ok(new cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setForwardBackward_float(cv::optflow::DenseRLOFOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setForwardBackward(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getForwardBackward_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getForwardBackward();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getGridStep_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getGridStep();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setGridStep_Size(cv::optflow::DenseRLOFOpticalFlow* instance, cv::Size* val, ResultVoid* ocvrs_return) {
		try {
			instance->setGridStep(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setInterpolation_InterpolationType(cv::optflow::DenseRLOFOpticalFlow* instance, cv::optflow::InterpolationType val, ResultVoid* ocvrs_return) {
		try {
			instance->setInterpolation(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getInterpolation_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<cv::optflow::InterpolationType>* ocvrs_return) {
		try {
			cv::optflow::InterpolationType ret = instance->getInterpolation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getEPICK_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getEPICK();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setEPICK_int(cv::optflow::DenseRLOFOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setEPICK(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getEPICSigma_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getEPICSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setEPICSigma_float(cv::optflow::DenseRLOFOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setEPICSigma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getEPICLambda_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getEPICLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setEPICLambda_float(cv::optflow::DenseRLOFOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setEPICLambda(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getFgsLambda_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFgsLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setFgsLambda_float(cv::optflow::DenseRLOFOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setFgsLambda(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getFgsSigma_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFgsSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setFgsSigma_float(cv::optflow::DenseRLOFOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setFgsSigma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setUsePostProc_bool(cv::optflow::DenseRLOFOpticalFlow* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUsePostProc(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getUsePostProc_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUsePostProc();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setUseVariationalRefinement_bool(cv::optflow::DenseRLOFOpticalFlow* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseVariationalRefinement(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getUseVariationalRefinement_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseVariationalRefinement();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setRICSPSize_int(cv::optflow::DenseRLOFOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRICSPSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getRICSPSize_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getRICSPSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_setRICSLICType_int(cv::optflow::DenseRLOFOpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRICSLICType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_getRICSLICType_const(const cv::optflow::DenseRLOFOpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getRICSLICType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_create_PtrLRLOFOpticalFlowParameterG_float_Size_InterpolationType_int_float_float_int_int_bool_float_float_bool(cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* rlofParam, float forwardBackwardThreshold, cv::Size* gridStep, cv::optflow::InterpolationType interp_type, int epicK, float epicSigma, float epicLambda, int ricSPSize, int ricSLICType, bool use_post_proc, float fgsLambda, float fgsSigma, bool use_variational_refinement, Result<cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::DenseRLOFOpticalFlow> ret = cv::optflow::DenseRLOFOpticalFlow::create(*rlofParam, forwardBackwardThreshold, *gridStep, interp_type, epicK, epicSigma, epicLambda, ricSPSize, ricSLICType, use_post_proc, fgsLambda, fgsSigma, use_variational_refinement);
			Ok(new cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_create(Result<cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::DenseRLOFOpticalFlow> ret = cv::optflow::DenseRLOFOpticalFlow::create();
			Ok(new cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_optflow_DenseRLOFOpticalFlow_to_Algorithm(cv::optflow::DenseRLOFOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::DenseOpticalFlow* cv_optflow_DenseRLOFOpticalFlow_to_DenseOpticalFlow(cv::optflow::DenseRLOFOpticalFlow* instance) {
			return dynamic_cast<cv::DenseOpticalFlow*>(instance);
	}
	
	void cv_optflow_DenseRLOFOpticalFlow_delete(cv::optflow::DenseRLOFOpticalFlow* instance) {
			delete instance;
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getTau_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTau();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setTau_double(cv::optflow::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setTau(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getLambda_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLambda();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setLambda_double(cv::optflow::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setLambda(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getTheta_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTheta();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setTheta_double(cv::optflow::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setTheta(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getGamma_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getGamma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setGamma_double(cv::optflow::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setGamma(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getScalesNumber_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getScalesNumber();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setScalesNumber_int(cv::optflow::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setScalesNumber(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getWarpingsNumber_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWarpingsNumber();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setWarpingsNumber_int(cv::optflow::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setWarpingsNumber(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getEpsilon_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getEpsilon();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setEpsilon_double(cv::optflow::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setEpsilon(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getInnerIterations_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getInnerIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setInnerIterations_int(cv::optflow::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setInnerIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getOuterIterations_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getOuterIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setOuterIterations_int(cv::optflow::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setOuterIterations(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getUseInitialFlow_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseInitialFlow();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setUseInitialFlow_bool(cv::optflow::DualTVL1OpticalFlow* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseInitialFlow(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getScaleStep_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getScaleStep();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setScaleStep_double(cv::optflow::DualTVL1OpticalFlow* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleStep(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_getMedianFiltering_const(const cv::optflow::DualTVL1OpticalFlow* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMedianFiltering();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_setMedianFiltering_int(cv::optflow::DualTVL1OpticalFlow* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMedianFiltering(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_create_double_double_double_int_int_double_int_int_double_double_int_bool(double tau, double lambda, double theta, int nscales, int warps, double epsilon, int innnerIterations, int outerIterations, double scaleStep, double gamma, int medianFiltering, bool useInitialFlow, Result<cv::Ptr<cv::optflow::DualTVL1OpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::DualTVL1OpticalFlow> ret = cv::optflow::DualTVL1OpticalFlow::create(tau, lambda, theta, nscales, warps, epsilon, innnerIterations, outerIterations, scaleStep, gamma, medianFiltering, useInitialFlow);
			Ok(new cv::Ptr<cv::optflow::DualTVL1OpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_create(Result<cv::Ptr<cv::optflow::DualTVL1OpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::DualTVL1OpticalFlow> ret = cv::optflow::DualTVL1OpticalFlow::create();
			Ok(new cv::Ptr<cv::optflow::DualTVL1OpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_optflow_DualTVL1OpticalFlow_to_Algorithm(cv::optflow::DualTVL1OpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::DenseOpticalFlow* cv_optflow_DualTVL1OpticalFlow_to_DenseOpticalFlow(cv::optflow::DualTVL1OpticalFlow* instance) {
			return dynamic_cast<cv::DenseOpticalFlow*>(instance);
	}
	
	void cv_optflow_DualTVL1OpticalFlow_delete(cv::optflow::DualTVL1OpticalFlow* instance) {
			delete instance;
	}
	
	void cv_optflow_GPCDetails_dropOutliers_vectorLpairLcv_Point2i__cv_Point2iGGR(std::vector<std::pair<cv::Point2i, cv::Point2i>>* corr, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::GPCDetails::dropOutliers(*corr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCDetails_getAllDescriptorsForImage_const_MatX_vectorLGPCPatchDescriptorGR_const_GPCMatchingParamsR_int(const cv::Mat* imgCh, std::vector<cv::optflow::GPCPatchDescriptor>* descr, const cv::optflow::GPCMatchingParams* mp, int type, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::GPCDetails::getAllDescriptorsForImage(imgCh, *descr, *mp, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCDetails_getCoordinatesFromIndex_size_t_Size_intR_intR(size_t index, cv::Size* sz, int* x, int* y, ResultVoid* ocvrs_return) {
		try {
			cv::optflow::GPCDetails::getCoordinatesFromIndex(index, *sz, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::optflow::GPCDetails* cv_optflow_GPCDetails_defaultNew_const() {
			cv::optflow::GPCDetails* ret = new cv::optflow::GPCDetails();
			return ret;
	}
	
	void cv_optflow_GPCDetails_delete(cv::optflow::GPCDetails* instance) {
			delete instance;
	}
	
	void cv_optflow_GPCMatchingParams_GPCMatchingParams_bool(bool _useOpenCL, Result<cv::optflow::GPCMatchingParams>* ocvrs_return) {
		try {
			cv::optflow::GPCMatchingParams ret(_useOpenCL);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCMatchingParams_GPCMatchingParams(Result<cv::optflow::GPCMatchingParams>* ocvrs_return) {
		try {
			cv::optflow::GPCMatchingParams ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCMatchingParams_GPCMatchingParams_const_GPCMatchingParamsR(const cv::optflow::GPCMatchingParams* params, Result<cv::optflow::GPCMatchingParams>* ocvrs_return) {
		try {
			cv::optflow::GPCMatchingParams ret(*params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCPatchDescriptor_dot_const_const_VecLdouble__18GR(const cv::optflow::GPCPatchDescriptor* instance, const cv::Vec<double, 18>* coef, Result<double>* ocvrs_return) {
		try {
			double ret = instance->dot(*coef);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCPatchDescriptor_markAsSeparated(cv::optflow::GPCPatchDescriptor* instance, ResultVoid* ocvrs_return) {
		try {
			instance->markAsSeparated();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCPatchDescriptor_isSeparated_const(const cv::optflow::GPCPatchDescriptor* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isSeparated();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::optflow::GPCPatchDescriptor* cv_optflow_GPCPatchDescriptor_defaultNew_const() {
			cv::optflow::GPCPatchDescriptor* ret = new cv::optflow::GPCPatchDescriptor();
			return ret;
	}
	
	void cv_optflow_GPCPatchDescriptor_propFeature_const(const cv::optflow::GPCPatchDescriptor* instance, cv::Vec<double, 18>* ocvrs_return) {
			cv::Vec<double, 18> ret = instance->feature;
			*ocvrs_return = ret;
	}
	
	void cv_optflow_GPCPatchDescriptor_propFeature_const_VecLdouble__18G(cv::optflow::GPCPatchDescriptor* instance, const cv::Vec<double, 18>* val) {
			instance->feature = *val;
	}
	
	void cv_optflow_GPCPatchDescriptor_delete(cv::optflow::GPCPatchDescriptor* instance) {
			delete instance;
	}
	
	void cv_optflow_GPCPatchSample_getDirections_const_boolR_boolR_boolR_const_VecLdouble__18GR_double(const cv::optflow::GPCPatchSample* instance, bool* refdir, bool* posdir, bool* negdir, const cv::Vec<double, 18>* coef, double rhs, ResultVoid* ocvrs_return) {
		try {
			instance->getDirections(*refdir, *posdir, *negdir, *coef, rhs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::optflow::GPCPatchSample* cv_optflow_GPCPatchSample_defaultNew_const() {
			cv::optflow::GPCPatchSample* ret = new cv::optflow::GPCPatchSample();
			return ret;
	}
	
	cv::optflow::GPCPatchDescriptor* cv_optflow_GPCPatchSample_propRef_const(const cv::optflow::GPCPatchSample* instance) {
			cv::optflow::GPCPatchDescriptor ret = instance->ref;
			return new cv::optflow::GPCPatchDescriptor(ret);
	}
	
	void cv_optflow_GPCPatchSample_propRef_const_GPCPatchDescriptor(cv::optflow::GPCPatchSample* instance, const cv::optflow::GPCPatchDescriptor* val) {
			instance->ref = *val;
	}
	
	cv::optflow::GPCPatchDescriptor* cv_optflow_GPCPatchSample_propPos_const(const cv::optflow::GPCPatchSample* instance) {
			cv::optflow::GPCPatchDescriptor ret = instance->pos;
			return new cv::optflow::GPCPatchDescriptor(ret);
	}
	
	void cv_optflow_GPCPatchSample_propPos_const_GPCPatchDescriptor(cv::optflow::GPCPatchSample* instance, const cv::optflow::GPCPatchDescriptor* val) {
			instance->pos = *val;
	}
	
	cv::optflow::GPCPatchDescriptor* cv_optflow_GPCPatchSample_propNeg_const(const cv::optflow::GPCPatchSample* instance) {
			cv::optflow::GPCPatchDescriptor ret = instance->neg;
			return new cv::optflow::GPCPatchDescriptor(ret);
	}
	
	void cv_optflow_GPCPatchSample_propNeg_const_GPCPatchDescriptor(cv::optflow::GPCPatchSample* instance, const cv::optflow::GPCPatchDescriptor* val) {
			instance->neg = *val;
	}
	
	void cv_optflow_GPCPatchSample_delete(cv::optflow::GPCPatchSample* instance) {
			delete instance;
	}
	
	void cv_optflow_GPCTrainingParams_GPCTrainingParams_unsigned_int_int_GPCDescType_bool(unsigned int _maxTreeDepth, int _minNumberOfSamples, cv::optflow::GPCDescType _descriptorType, bool _printProgress, Result<cv::optflow::GPCTrainingParams>* ocvrs_return) {
		try {
			cv::optflow::GPCTrainingParams ret(_maxTreeDepth, _minNumberOfSamples, _descriptorType, _printProgress);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTrainingParams_GPCTrainingParams(Result<cv::optflow::GPCTrainingParams>* ocvrs_return) {
		try {
			cv::optflow::GPCTrainingParams ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTrainingParams_check_const(const cv::optflow::GPCTrainingParams* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->check();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTrainingSamples_create_const_vectorLStringGR_const_vectorLStringGR_const_vectorLStringGR_int(const std::vector<cv::String>* imagesFrom, const std::vector<cv::String>* imagesTo, const std::vector<cv::String>* gt, int descriptorType, Result<cv::Ptr<cv::optflow::GPCTrainingSamples>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::GPCTrainingSamples> ret = cv::optflow::GPCTrainingSamples::create(*imagesFrom, *imagesTo, *gt, descriptorType);
			Ok(new cv::Ptr<cv::optflow::GPCTrainingSamples>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTrainingSamples_create_const__InputArrayR_const__InputArrayR_const__InputArrayR_int(const cv::_InputArray* imagesFrom, const cv::_InputArray* imagesTo, const cv::_InputArray* gt, int descriptorType, Result<cv::Ptr<cv::optflow::GPCTrainingSamples>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::GPCTrainingSamples> ret = cv::optflow::GPCTrainingSamples::create(*imagesFrom, *imagesTo, *gt, descriptorType);
			Ok(new cv::Ptr<cv::optflow::GPCTrainingSamples>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTrainingSamples_size_const(const cv::optflow::GPCTrainingSamples* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTrainingSamples_type_const(const cv::optflow::GPCTrainingSamples* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::optflow::GPCTrainingSamples* cv_optflow_GPCTrainingSamples_defaultNew_const() {
			cv::optflow::GPCTrainingSamples* ret = new cv::optflow::GPCTrainingSamples();
			return ret;
	}
	
	void cv_optflow_GPCTrainingSamples_delete(cv::optflow::GPCTrainingSamples* instance) {
			delete instance;
	}
	
	void cv_optflow_GPCTree_train_GPCTrainingSamplesR_const_GPCTrainingParams(cv::optflow::GPCTree* instance, cv::optflow::GPCTrainingSamples* samples, const cv::optflow::GPCTrainingParams* params, ResultVoid* ocvrs_return) {
		try {
			instance->train(*samples, *params);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_train_GPCTrainingSamplesR(cv::optflow::GPCTree* instance, cv::optflow::GPCTrainingSamples* samples, ResultVoid* ocvrs_return) {
		try {
			instance->train(*samples);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_write_const_FileStorageR(const cv::optflow::GPCTree* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_read_const_FileNodeR(cv::optflow::GPCTree* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_findLeafForPatch_const_const_GPCPatchDescriptorR(const cv::optflow::GPCTree* instance, const cv::optflow::GPCPatchDescriptor* descr, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->findLeafForPatch(*descr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_create(Result<cv::Ptr<cv::optflow::GPCTree>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::GPCTree> ret = cv::optflow::GPCTree::create();
			Ok(new cv::Ptr<cv::optflow::GPCTree>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_operatorEQ_const_const_GPCTreeR(const cv::optflow::GPCTree* instance, const cv::optflow::GPCTree* t, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*t);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_GPCTree_getDescriptorType_const(const cv::optflow::GPCTree* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDescriptorType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::optflow::GPCTree* cv_optflow_GPCTree_defaultNew_const() {
			cv::optflow::GPCTree* ret = new cv::optflow::GPCTree();
			return ret;
	}
	
	cv::Algorithm* cv_optflow_GPCTree_to_Algorithm(cv::optflow::GPCTree* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_optflow_GPCTree_delete(cv::optflow::GPCTree* instance) {
			delete instance;
	}
	
	void cv_optflow_GPCTree_Node_operatorEQ_const_const_NodeR(const cv::optflow::GPCTree::Node* instance, const cv::optflow::GPCTree::Node* n, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*n);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_OpticalFlowPCAFlow_OpticalFlowPCAFlow_PtrLconst_PCAPriorG_const_Size_float_float_float_float_float(const cv::Ptr<const cv::optflow::PCAPrior>* _prior, const cv::Size* _basisSize, float _sparseRate, float _retainedCornersFraction, float _occlusionsThreshold, float _dampingFactor, float _claheClip, Result<cv::optflow::OpticalFlowPCAFlow*>* ocvrs_return) {
		try {
			cv::optflow::OpticalFlowPCAFlow* ret = new cv::optflow::OpticalFlowPCAFlow(*_prior, *_basisSize, _sparseRate, _retainedCornersFraction, _occlusionsThreshold, _dampingFactor, _claheClip);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_OpticalFlowPCAFlow_OpticalFlowPCAFlow(Result<cv::optflow::OpticalFlowPCAFlow*>* ocvrs_return) {
		try {
			cv::optflow::OpticalFlowPCAFlow* ret = new cv::optflow::OpticalFlowPCAFlow();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_OpticalFlowPCAFlow_calc_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR(cv::optflow::OpticalFlowPCAFlow* instance, const cv::_InputArray* I0, const cv::_InputArray* I1, const cv::_InputOutputArray* flow, ResultVoid* ocvrs_return) {
		try {
			instance->calc(*I0, *I1, *flow);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_OpticalFlowPCAFlow_collectGarbage(cv::optflow::OpticalFlowPCAFlow* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_optflow_OpticalFlowPCAFlow_to_Algorithm(cv::optflow::OpticalFlowPCAFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::DenseOpticalFlow* cv_optflow_OpticalFlowPCAFlow_to_DenseOpticalFlow(cv::optflow::OpticalFlowPCAFlow* instance) {
			return dynamic_cast<cv::DenseOpticalFlow*>(instance);
	}
	
	void cv_optflow_OpticalFlowPCAFlow_delete(cv::optflow::OpticalFlowPCAFlow* instance) {
			delete instance;
	}
	
	void cv_optflow_PCAPrior_PCAPrior_const_charX(const char* pathToPrior, Result<cv::optflow::PCAPrior*>* ocvrs_return) {
		try {
			cv::optflow::PCAPrior* ret = new cv::optflow::PCAPrior(pathToPrior);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_PCAPrior_getPadding_const(const cv::optflow::PCAPrior* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPadding();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_PCAPrior_getBasisSize_const(const cv::optflow::PCAPrior* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getBasisSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_PCAPrior_fillConstraints_const_floatX_floatX_floatX_floatX(const cv::optflow::PCAPrior* instance, float* A1, float* A2, float* b1, float* b2, ResultVoid* ocvrs_return) {
		try {
			instance->fillConstraints(A1, A2, b1, b2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_PCAPrior_delete(cv::optflow::PCAPrior* instance) {
			delete instance;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_RLOFOpticalFlowParameter(Result<cv::optflow::RLOFOpticalFlowParameter*>* ocvrs_return) {
		try {
			cv::optflow::RLOFOpticalFlowParameter* ret = new cv::optflow::RLOFOpticalFlowParameter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setUseMEstimator_bool(cv::optflow::RLOFOpticalFlowParameter* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseMEstimator(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setSolverType_SolverType(cv::optflow::RLOFOpticalFlowParameter* instance, cv::optflow::SolverType val, ResultVoid* ocvrs_return) {
		try {
			instance->setSolverType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getSolverType_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<cv::optflow::SolverType>* ocvrs_return) {
		try {
			cv::optflow::SolverType ret = instance->getSolverType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setSupportRegionType_SupportRegionType(cv::optflow::RLOFOpticalFlowParameter* instance, cv::optflow::SupportRegionType val, ResultVoid* ocvrs_return) {
		try {
			instance->setSupportRegionType(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getSupportRegionType_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<cv::optflow::SupportRegionType>* ocvrs_return) {
		try {
			cv::optflow::SupportRegionType ret = instance->getSupportRegionType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setNormSigma0_float(cv::optflow::RLOFOpticalFlowParameter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setNormSigma0(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getNormSigma0_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getNormSigma0();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setNormSigma1_float(cv::optflow::RLOFOpticalFlowParameter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setNormSigma1(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getNormSigma1_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getNormSigma1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setSmallWinSize_int(cv::optflow::RLOFOpticalFlowParameter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setSmallWinSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getSmallWinSize_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSmallWinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setLargeWinSize_int(cv::optflow::RLOFOpticalFlowParameter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setLargeWinSize(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getLargeWinSize_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getLargeWinSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setCrossSegmentationThreshold_int(cv::optflow::RLOFOpticalFlowParameter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setCrossSegmentationThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getCrossSegmentationThreshold_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getCrossSegmentationThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setMaxLevel_int(cv::optflow::RLOFOpticalFlowParameter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxLevel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getMaxLevel_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setUseInitialFlow_bool(cv::optflow::RLOFOpticalFlowParameter* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseInitialFlow(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getUseInitialFlow_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseInitialFlow();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setUseIlluminationModel_bool(cv::optflow::RLOFOpticalFlowParameter* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseIlluminationModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getUseIlluminationModel_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseIlluminationModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setUseGlobalMotionPrior_bool(cv::optflow::RLOFOpticalFlowParameter* instance, bool val, ResultVoid* ocvrs_return) {
		try {
			instance->setUseGlobalMotionPrior(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getUseGlobalMotionPrior_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUseGlobalMotionPrior();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setMaxIteration_int(cv::optflow::RLOFOpticalFlowParameter* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxIteration(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getMaxIteration_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxIteration();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setMinEigenValue_float(cv::optflow::RLOFOpticalFlowParameter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setMinEigenValue(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getMinEigenValue_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMinEigenValue();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_setGlobalMotionRansacThreshold_float(cv::optflow::RLOFOpticalFlowParameter* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setGlobalMotionRansacThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_getGlobalMotionRansacThreshold_const(const cv::optflow::RLOFOpticalFlowParameter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getGlobalMotionRansacThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_create(Result<cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::RLOFOpticalFlowParameter> ret = cv::optflow::RLOFOpticalFlowParameter::create();
			Ok(new cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propSolverType_const(const cv::optflow::RLOFOpticalFlowParameter* instance, cv::optflow::SolverType* ocvrs_return) {
			cv::optflow::SolverType ret = instance->solverType;
			*ocvrs_return = ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propSolverType_const_SolverType(cv::optflow::RLOFOpticalFlowParameter* instance, const cv::optflow::SolverType val) {
			instance->solverType = val;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propSupportRegionType_const(const cv::optflow::RLOFOpticalFlowParameter* instance, cv::optflow::SupportRegionType* ocvrs_return) {
			cv::optflow::SupportRegionType ret = instance->supportRegionType;
			*ocvrs_return = ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propSupportRegionType_const_SupportRegionType(cv::optflow::RLOFOpticalFlowParameter* instance, const cv::optflow::SupportRegionType val) {
			instance->supportRegionType = val;
	}
	
	float cv_optflow_RLOFOpticalFlowParameter_propNormSigma0_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			float ret = instance->normSigma0;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propNormSigma0_const_float(cv::optflow::RLOFOpticalFlowParameter* instance, const float val) {
			instance->normSigma0 = val;
	}
	
	float cv_optflow_RLOFOpticalFlowParameter_propNormSigma1_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			float ret = instance->normSigma1;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propNormSigma1_const_float(cv::optflow::RLOFOpticalFlowParameter* instance, const float val) {
			instance->normSigma1 = val;
	}
	
	int cv_optflow_RLOFOpticalFlowParameter_propSmallWinSize_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			int ret = instance->smallWinSize;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propSmallWinSize_const_int(cv::optflow::RLOFOpticalFlowParameter* instance, const int val) {
			instance->smallWinSize = val;
	}
	
	int cv_optflow_RLOFOpticalFlowParameter_propLargeWinSize_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			int ret = instance->largeWinSize;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propLargeWinSize_const_int(cv::optflow::RLOFOpticalFlowParameter* instance, const int val) {
			instance->largeWinSize = val;
	}
	
	int cv_optflow_RLOFOpticalFlowParameter_propCrossSegmentationThreshold_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			int ret = instance->crossSegmentationThreshold;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propCrossSegmentationThreshold_const_int(cv::optflow::RLOFOpticalFlowParameter* instance, const int val) {
			instance->crossSegmentationThreshold = val;
	}
	
	int cv_optflow_RLOFOpticalFlowParameter_propMaxLevel_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			int ret = instance->maxLevel;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propMaxLevel_const_int(cv::optflow::RLOFOpticalFlowParameter* instance, const int val) {
			instance->maxLevel = val;
	}
	
	bool cv_optflow_RLOFOpticalFlowParameter_propUseInitialFlow_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			bool ret = instance->useInitialFlow;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propUseInitialFlow_const_bool(cv::optflow::RLOFOpticalFlowParameter* instance, const bool val) {
			instance->useInitialFlow = val;
	}
	
	bool cv_optflow_RLOFOpticalFlowParameter_propUseIlluminationModel_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			bool ret = instance->useIlluminationModel;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propUseIlluminationModel_const_bool(cv::optflow::RLOFOpticalFlowParameter* instance, const bool val) {
			instance->useIlluminationModel = val;
	}
	
	bool cv_optflow_RLOFOpticalFlowParameter_propUseGlobalMotionPrior_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			bool ret = instance->useGlobalMotionPrior;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propUseGlobalMotionPrior_const_bool(cv::optflow::RLOFOpticalFlowParameter* instance, const bool val) {
			instance->useGlobalMotionPrior = val;
	}
	
	int cv_optflow_RLOFOpticalFlowParameter_propMaxIteration_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			int ret = instance->maxIteration;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propMaxIteration_const_int(cv::optflow::RLOFOpticalFlowParameter* instance, const int val) {
			instance->maxIteration = val;
	}
	
	float cv_optflow_RLOFOpticalFlowParameter_propMinEigenValue_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			float ret = instance->minEigenValue;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propMinEigenValue_const_float(cv::optflow::RLOFOpticalFlowParameter* instance, const float val) {
			instance->minEigenValue = val;
	}
	
	float cv_optflow_RLOFOpticalFlowParameter_propGlobalMotionRansacThreshold_const(const cv::optflow::RLOFOpticalFlowParameter* instance) {
			float ret = instance->globalMotionRansacThreshold;
			return ret;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_propGlobalMotionRansacThreshold_const_float(cv::optflow::RLOFOpticalFlowParameter* instance, const float val) {
			instance->globalMotionRansacThreshold = val;
	}
	
	void cv_optflow_RLOFOpticalFlowParameter_delete(cv::optflow::RLOFOpticalFlowParameter* instance) {
			delete instance;
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_setRLOFOpticalFlowParameter_PtrLRLOFOpticalFlowParameterG(cv::optflow::SparseRLOFOpticalFlow* instance, cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* val, ResultVoid* ocvrs_return) {
		try {
			instance->setRLOFOpticalFlowParameter(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_getRLOFOpticalFlowParameter_const(const cv::optflow::SparseRLOFOpticalFlow* instance, Result<cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::RLOFOpticalFlowParameter> ret = instance->getRLOFOpticalFlowParameter();
			Ok(new cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_setForwardBackward_float(cv::optflow::SparseRLOFOpticalFlow* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setForwardBackward(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_getForwardBackward_const(const cv::optflow::SparseRLOFOpticalFlow* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getForwardBackward();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_create_PtrLRLOFOpticalFlowParameterG_float(cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* rlofParam, float forwardBackwardThreshold, Result<cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::SparseRLOFOpticalFlow> ret = cv::optflow::SparseRLOFOpticalFlow::create(*rlofParam, forwardBackwardThreshold);
			Ok(new cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_create(Result<cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::optflow::SparseRLOFOpticalFlow> ret = cv::optflow::SparseRLOFOpticalFlow::create();
			Ok(new cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_optflow_SparseRLOFOpticalFlow_to_Algorithm(cv::optflow::SparseRLOFOpticalFlow* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::SparseOpticalFlow* cv_optflow_SparseRLOFOpticalFlow_to_SparseOpticalFlow(cv::optflow::SparseRLOFOpticalFlow* instance) {
			return dynamic_cast<cv::SparseOpticalFlow*>(instance);
	}
	
	void cv_optflow_SparseRLOFOpticalFlow_delete(cv::optflow::SparseRLOFOpticalFlow* instance) {
			delete instance;
	}
	
}
