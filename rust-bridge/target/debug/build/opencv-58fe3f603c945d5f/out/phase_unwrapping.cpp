#include "ocvrs_common.hpp"
#include <opencv2/phase_unwrapping.hpp>
#include "phase_unwrapping_types.hpp"

extern "C" {
	void cv_phase_unwrapping_HistogramPhaseUnwrapping_create_const_ParamsR(const cv::phase_unwrapping::HistogramPhaseUnwrapping::Params* parameters, Result<cv::Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping> ret = cv::phase_unwrapping::HistogramPhaseUnwrapping::create(*parameters);
			Ok(new cv::Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_phase_unwrapping_HistogramPhaseUnwrapping_create(Result<cv::Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping> ret = cv::phase_unwrapping::HistogramPhaseUnwrapping::create();
			Ok(new cv::Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_phase_unwrapping_HistogramPhaseUnwrapping_getInverseReliabilityMap_const__OutputArrayR(cv::phase_unwrapping::HistogramPhaseUnwrapping* instance, const cv::_OutputArray* reliabilityMap, ResultVoid* ocvrs_return) {
		try {
			instance->getInverseReliabilityMap(*reliabilityMap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_phase_unwrapping_HistogramPhaseUnwrapping_to_Algorithm(cv::phase_unwrapping::HistogramPhaseUnwrapping* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::phase_unwrapping::PhaseUnwrapping* cv_phase_unwrapping_HistogramPhaseUnwrapping_to_PhaseUnwrapping(cv::phase_unwrapping::HistogramPhaseUnwrapping* instance) {
			return dynamic_cast<cv::phase_unwrapping::PhaseUnwrapping*>(instance);
	}
	
	void cv_phase_unwrapping_HistogramPhaseUnwrapping_delete(cv::phase_unwrapping::HistogramPhaseUnwrapping* instance) {
			delete instance;
	}
	
	void cv_phase_unwrapping_HistogramPhaseUnwrapping_Params_Params(Result<cv::phase_unwrapping::HistogramPhaseUnwrapping::Params>* ocvrs_return) {
		try {
			cv::phase_unwrapping::HistogramPhaseUnwrapping::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_phase_unwrapping_PhaseUnwrapping_unwrapPhaseMap_const__InputArrayR_const__OutputArrayR_const__InputArrayR(cv::phase_unwrapping::PhaseUnwrapping* instance, const cv::_InputArray* wrappedPhaseMap, const cv::_OutputArray* unwrappedPhaseMap, const cv::_InputArray* shadowMask, ResultVoid* ocvrs_return) {
		try {
			instance->unwrapPhaseMap(*wrappedPhaseMap, *unwrappedPhaseMap, *shadowMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_phase_unwrapping_PhaseUnwrapping_unwrapPhaseMap_const__InputArrayR_const__OutputArrayR(cv::phase_unwrapping::PhaseUnwrapping* instance, const cv::_InputArray* wrappedPhaseMap, const cv::_OutputArray* unwrappedPhaseMap, ResultVoid* ocvrs_return) {
		try {
			instance->unwrapPhaseMap(*wrappedPhaseMap, *unwrappedPhaseMap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::phase_unwrapping::HistogramPhaseUnwrapping* cv_phase_unwrapping_PhaseUnwrapping_to_HistogramPhaseUnwrapping(cv::phase_unwrapping::PhaseUnwrapping* instance) {
			return dynamic_cast<cv::phase_unwrapping::HistogramPhaseUnwrapping*>(instance);
	}
	
	cv::Algorithm* cv_phase_unwrapping_PhaseUnwrapping_to_Algorithm(cv::phase_unwrapping::PhaseUnwrapping* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_phase_unwrapping_PhaseUnwrapping_delete(cv::phase_unwrapping::PhaseUnwrapping* instance) {
			delete instance;
	}
	
}
