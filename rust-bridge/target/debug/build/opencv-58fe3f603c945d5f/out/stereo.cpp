#include "ocvrs_common.hpp"
#include <opencv2/stereo.hpp>
#include "stereo_types.hpp"

extern "C" {
	void cv_stereo_censusTransform_const_MatR_const_MatR_int_MatR_MatR_const_int(const cv::Mat* image1, const cv::Mat* image2, int kernelSize, cv::Mat* dist1, cv::Mat* dist2, const int type, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::censusTransform(*image1, *image2, kernelSize, *dist1, *dist2, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_censusTransform_const_MatR_int_MatR_const_int(const cv::Mat* image1, int kernelSize, cv::Mat* dist1, const int type, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::censusTransform(*image1, kernelSize, *dist1, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_modifiedCensusTransform_const_MatR_const_MatR_int_MatR_MatR_const_int(const cv::Mat* img1, const cv::Mat* img2, int kernelSize, cv::Mat* dist1, cv::Mat* dist2, const int type, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::modifiedCensusTransform(*img1, *img2, kernelSize, *dist1, *dist2, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_modifiedCensusTransform_const_MatR_const_MatR_int_MatR_MatR_const_int_int_const_MatR_const_MatR(const cv::Mat* img1, const cv::Mat* img2, int kernelSize, cv::Mat* dist1, cv::Mat* dist2, const int type, int t, const cv::Mat* integralImage1, const cv::Mat* integralImage2, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::modifiedCensusTransform(*img1, *img2, kernelSize, *dist1, *dist2, type, t, *integralImage1, *integralImage2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_modifiedCensusTransform_const_MatR_int_MatR_const_int(const cv::Mat* img1, int kernelSize, cv::Mat* dist, const int type, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::modifiedCensusTransform(*img1, kernelSize, *dist, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_modifiedCensusTransform_const_MatR_int_MatR_const_int_int_const_MatR(const cv::Mat* img1, int kernelSize, cv::Mat* dist, const int type, int t, const cv::Mat* integralImage, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::modifiedCensusTransform(*img1, kernelSize, *dist, type, t, *integralImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_starCensusTransform_const_MatR_const_MatR_int_MatR_MatR(const cv::Mat* img1, const cv::Mat* img2, int kernelSize, cv::Mat* dist1, cv::Mat* dist2, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::starCensusTransform(*img1, *img2, kernelSize, *dist1, *dist2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_starCensusTransform_const_MatR_int_MatR(const cv::Mat* img1, int kernelSize, cv::Mat* dist, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::starCensusTransform(*img1, kernelSize, *dist);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_symetricCensusTransform_const_MatR_const_MatR_int_MatR_MatR_const_int(const cv::Mat* img1, const cv::Mat* img2, int kernelSize, cv::Mat* dist1, cv::Mat* dist2, const int type, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::symetricCensusTransform(*img1, *img2, kernelSize, *dist1, *dist2, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_symetricCensusTransform_const_MatR_int_MatR_const_int(const cv::Mat* img1, int kernelSize, cv::Mat* dist1, const int type, ResultVoid* ocvrs_return) {
		try {
			cv::stereo::symetricCensusTransform(*img1, kernelSize, *dist1, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_MatchQuasiDense_MatchQuasiDense(Result<cv::stereo::MatchQuasiDense>* ocvrs_return) {
		try {
			cv::stereo::MatchQuasiDense ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_MatchQuasiDense_operatorL_const_const_MatchQuasiDenseR(const cv::stereo::MatchQuasiDense* instance, const cv::stereo::MatchQuasiDense* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator<(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_loadParameters_String(cv::stereo::QuasiDenseStereo* instance, const char* filepath, Result<int>* ocvrs_return) {
		try {
			int ret = instance->loadParameters(std::string(filepath));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_saveParameters_String(cv::stereo::QuasiDenseStereo* instance, const char* filepath, Result<int>* ocvrs_return) {
		try {
			int ret = instance->saveParameters(std::string(filepath));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_getSparseMatches_vectorLMatchQuasiDenseGR(cv::stereo::QuasiDenseStereo* instance, std::vector<cv::stereo::MatchQuasiDense>* sMatches, ResultVoid* ocvrs_return) {
		try {
			instance->getSparseMatches(*sMatches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_getDenseMatches_vectorLMatchQuasiDenseGR(cv::stereo::QuasiDenseStereo* instance, std::vector<cv::stereo::MatchQuasiDense>* denseMatches, ResultVoid* ocvrs_return) {
		try {
			instance->getDenseMatches(*denseMatches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_process_const_MatR_const_MatR(cv::stereo::QuasiDenseStereo* instance, const cv::Mat* imgLeft, const cv::Mat* imgRight, ResultVoid* ocvrs_return) {
		try {
			instance->process(*imgLeft, *imgRight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_getMatch_const_int_const_int(cv::stereo::QuasiDenseStereo* instance, const int x, const int y, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->getMatch(x, y);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_getDisparity(cv::stereo::QuasiDenseStereo* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getDisparity();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_create_Size_String(cv::Size* monoImgSize, const char* paramFilepath, Result<cv::Ptr<cv::stereo::QuasiDenseStereo>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::stereo::QuasiDenseStereo> ret = cv::stereo::QuasiDenseStereo::create(*monoImgSize, std::string(paramFilepath));
			Ok(new cv::Ptr<cv::stereo::QuasiDenseStereo>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_create_Size(cv::Size* monoImgSize, Result<cv::Ptr<cv::stereo::QuasiDenseStereo>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::stereo::QuasiDenseStereo> ret = cv::stereo::QuasiDenseStereo::create(*monoImgSize);
			Ok(new cv::Ptr<cv::stereo::QuasiDenseStereo>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereo_QuasiDenseStereo_propParam_const(const cv::stereo::QuasiDenseStereo* instance, cv::stereo::PropagationParameters* ocvrs_return) {
			cv::stereo::PropagationParameters ret = instance->Param;
			*ocvrs_return = ret;
	}
	
	void cv_stereo_QuasiDenseStereo_propParam_const_PropagationParameters(cv::stereo::QuasiDenseStereo* instance, const cv::stereo::PropagationParameters* val) {
			instance->Param = *val;
	}
	
	void cv_stereo_QuasiDenseStereo_delete(cv::stereo::QuasiDenseStereo* instance) {
			delete instance;
	}
	
}
