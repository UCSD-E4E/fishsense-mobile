#include "ocvrs_common.hpp"
#include <opencv2/hfs.hpp>
#include "hfs_types.hpp"

extern "C" {
	void cv_hfs_HfsSegment_setSegEgbThresholdI_float(cv::hfs::HfsSegment* instance, float c, ResultVoid* ocvrs_return) {
		try {
			instance->setSegEgbThresholdI(c);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getSegEgbThresholdI(cv::hfs::HfsSegment* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSegEgbThresholdI();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_setMinRegionSizeI_int(cv::hfs::HfsSegment* instance, int n, ResultVoid* ocvrs_return) {
		try {
			instance->setMinRegionSizeI(n);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getMinRegionSizeI(cv::hfs::HfsSegment* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinRegionSizeI();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_setSegEgbThresholdII_float(cv::hfs::HfsSegment* instance, float c, ResultVoid* ocvrs_return) {
		try {
			instance->setSegEgbThresholdII(c);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getSegEgbThresholdII(cv::hfs::HfsSegment* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSegEgbThresholdII();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_setMinRegionSizeII_int(cv::hfs::HfsSegment* instance, int n, ResultVoid* ocvrs_return) {
		try {
			instance->setMinRegionSizeII(n);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getMinRegionSizeII(cv::hfs::HfsSegment* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinRegionSizeII();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_setSpatialWeight_float(cv::hfs::HfsSegment* instance, float w, ResultVoid* ocvrs_return) {
		try {
			instance->setSpatialWeight(w);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getSpatialWeight(cv::hfs::HfsSegment* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSpatialWeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_setSlicSpixelSize_int(cv::hfs::HfsSegment* instance, int n, ResultVoid* ocvrs_return) {
		try {
			instance->setSlicSpixelSize(n);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getSlicSpixelSize(cv::hfs::HfsSegment* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSlicSpixelSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_setNumSlicIter_int(cv::hfs::HfsSegment* instance, int n, ResultVoid* ocvrs_return) {
		try {
			instance->setNumSlicIter(n);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_getNumSlicIter(cv::hfs::HfsSegment* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumSlicIter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_performSegmentGpu_const__InputArrayR_bool(cv::hfs::HfsSegment* instance, const cv::_InputArray* src, bool ifDraw, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->performSegmentGpu(*src, ifDraw);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_performSegmentGpu_const__InputArrayR(cv::hfs::HfsSegment* instance, const cv::_InputArray* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->performSegmentGpu(*src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_performSegmentCpu_const__InputArrayR_bool(cv::hfs::HfsSegment* instance, const cv::_InputArray* src, bool ifDraw, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->performSegmentCpu(*src, ifDraw);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_performSegmentCpu_const__InputArrayR(cv::hfs::HfsSegment* instance, const cv::_InputArray* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->performSegmentCpu(*src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_create_int_int_float_int_float_int_float_int_int(int height, int width, float segEgbThresholdI, int minRegionSizeI, float segEgbThresholdII, int minRegionSizeII, float spatialWeight, int slicSpixelSize, int numSlicIter, Result<cv::Ptr<cv::hfs::HfsSegment>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::hfs::HfsSegment> ret = cv::hfs::HfsSegment::create(height, width, segEgbThresholdI, minRegionSizeI, segEgbThresholdII, minRegionSizeII, spatialWeight, slicSpixelSize, numSlicIter);
			Ok(new cv::Ptr<cv::hfs::HfsSegment>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfs_HfsSegment_create_int_int(int height, int width, Result<cv::Ptr<cv::hfs::HfsSegment>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::hfs::HfsSegment> ret = cv::hfs::HfsSegment::create(height, width);
			Ok(new cv::Ptr<cv::hfs::HfsSegment>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_hfs_HfsSegment_to_Algorithm(cv::hfs::HfsSegment* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_hfs_HfsSegment_delete(cv::hfs::HfsSegment* instance) {
			delete instance;
	}
	
}
