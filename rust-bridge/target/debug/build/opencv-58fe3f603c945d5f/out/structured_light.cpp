#include "ocvrs_common.hpp"
#include <opencv2/structured_light.hpp>
#include "structured_light_types.hpp"

extern "C" {
	void cv_structured_light_GrayCodePattern_create_const_ParamsR(const cv::structured_light::GrayCodePattern::Params* parameters, Result<cv::Ptr<cv::structured_light::GrayCodePattern>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::structured_light::GrayCodePattern> ret = cv::structured_light::GrayCodePattern::create(*parameters);
			Ok(new cv::Ptr<cv::structured_light::GrayCodePattern>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_create(Result<cv::Ptr<cv::structured_light::GrayCodePattern>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::structured_light::GrayCodePattern> ret = cv::structured_light::GrayCodePattern::create();
			Ok(new cv::Ptr<cv::structured_light::GrayCodePattern>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_create_int_int(int width, int height, Result<cv::Ptr<cv::structured_light::GrayCodePattern>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::structured_light::GrayCodePattern> ret = cv::structured_light::GrayCodePattern::create(width, height);
			Ok(new cv::Ptr<cv::structured_light::GrayCodePattern>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_getNumberOfPatternImages_const(const cv::structured_light::GrayCodePattern* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getNumberOfPatternImages();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_setWhiteThreshold_size_t(cv::structured_light::GrayCodePattern* instance, size_t value, ResultVoid* ocvrs_return) {
		try {
			instance->setWhiteThreshold(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_setBlackThreshold_size_t(cv::structured_light::GrayCodePattern* instance, size_t value, ResultVoid* ocvrs_return) {
		try {
			instance->setBlackThreshold(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_getImagesForShadowMasks_const_const__InputOutputArrayR_const__InputOutputArrayR(const cv::structured_light::GrayCodePattern* instance, const cv::_InputOutputArray* blackImage, const cv::_InputOutputArray* whiteImage, ResultVoid* ocvrs_return) {
		try {
			instance->getImagesForShadowMasks(*blackImage, *whiteImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_GrayCodePattern_getProjPixel_const_const__InputArrayR_int_int_PointR(const cv::structured_light::GrayCodePattern* instance, const cv::_InputArray* patternImages, int x, int y, cv::Point* projPix, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getProjPixel(*patternImages, x, y, *projPix);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_structured_light_GrayCodePattern_to_Algorithm(cv::structured_light::GrayCodePattern* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::structured_light::StructuredLightPattern* cv_structured_light_GrayCodePattern_to_StructuredLightPattern(cv::structured_light::GrayCodePattern* instance) {
			return dynamic_cast<cv::structured_light::StructuredLightPattern*>(instance);
	}
	
	void cv_structured_light_GrayCodePattern_delete(cv::structured_light::GrayCodePattern* instance) {
			delete instance;
	}
	
	void cv_structured_light_GrayCodePattern_Params_Params(Result<cv::structured_light::GrayCodePattern::Params*>* ocvrs_return) {
		try {
			cv::structured_light::GrayCodePattern::Params* ret = new cv::structured_light::GrayCodePattern::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_structured_light_GrayCodePattern_Params_propWidth_const(const cv::structured_light::GrayCodePattern::Params* instance) {
			int ret = instance->width;
			return ret;
	}
	
	void cv_structured_light_GrayCodePattern_Params_propWidth_const_int(cv::structured_light::GrayCodePattern::Params* instance, const int val) {
			instance->width = val;
	}
	
	int cv_structured_light_GrayCodePattern_Params_propHeight_const(const cv::structured_light::GrayCodePattern::Params* instance) {
			int ret = instance->height;
			return ret;
	}
	
	void cv_structured_light_GrayCodePattern_Params_propHeight_const_int(cv::structured_light::GrayCodePattern::Params* instance, const int val) {
			instance->height = val;
	}
	
	void cv_structured_light_GrayCodePattern_Params_delete(cv::structured_light::GrayCodePattern::Params* instance) {
			delete instance;
	}
	
	void cv_structured_light_SinusoidalPattern_create_PtrLParamsG(cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* parameters, Result<cv::Ptr<cv::structured_light::SinusoidalPattern>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::structured_light::SinusoidalPattern> ret = cv::structured_light::SinusoidalPattern::create(*parameters);
			Ok(new cv::Ptr<cv::structured_light::SinusoidalPattern>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_create(Result<cv::Ptr<cv::structured_light::SinusoidalPattern>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::structured_light::SinusoidalPattern> ret = cv::structured_light::SinusoidalPattern::create();
			Ok(new cv::Ptr<cv::structured_light::SinusoidalPattern>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_computePhaseMap_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__InputArrayR(cv::structured_light::SinusoidalPattern* instance, const cv::_InputArray* patternImages, const cv::_OutputArray* wrappedPhaseMap, const cv::_OutputArray* shadowMask, const cv::_InputArray* fundamental, ResultVoid* ocvrs_return) {
		try {
			instance->computePhaseMap(*patternImages, *wrappedPhaseMap, *shadowMask, *fundamental);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_computePhaseMap_const__InputArrayR_const__OutputArrayR(cv::structured_light::SinusoidalPattern* instance, const cv::_InputArray* patternImages, const cv::_OutputArray* wrappedPhaseMap, ResultVoid* ocvrs_return) {
		try {
			instance->computePhaseMap(*patternImages, *wrappedPhaseMap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_unwrapPhaseMap_const__InputArrayR_const__OutputArrayR_Size_const__InputArrayR(cv::structured_light::SinusoidalPattern* instance, const cv::_InputArray* wrappedPhaseMap, const cv::_OutputArray* unwrappedPhaseMap, cv::Size* camSize, const cv::_InputArray* shadowMask, ResultVoid* ocvrs_return) {
		try {
			instance->unwrapPhaseMap(*wrappedPhaseMap, *unwrappedPhaseMap, *camSize, *shadowMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_unwrapPhaseMap_const__InputArrayR_const__OutputArrayR_Size(cv::structured_light::SinusoidalPattern* instance, const cv::_InputArray* wrappedPhaseMap, const cv::_OutputArray* unwrappedPhaseMap, cv::Size* camSize, ResultVoid* ocvrs_return) {
		try {
			instance->unwrapPhaseMap(*wrappedPhaseMap, *unwrappedPhaseMap, *camSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_findProCamMatches_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::structured_light::SinusoidalPattern* instance, const cv::_InputArray* projUnwrappedPhaseMap, const cv::_InputArray* camUnwrappedPhaseMap, const cv::_OutputArray* matches, ResultVoid* ocvrs_return) {
		try {
			instance->findProCamMatches(*projUnwrappedPhaseMap, *camUnwrappedPhaseMap, *matches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_SinusoidalPattern_computeDataModulationTerm_const__InputArrayR_const__OutputArrayR_const__InputArrayR(cv::structured_light::SinusoidalPattern* instance, const cv::_InputArray* patternImages, const cv::_OutputArray* dataModulationTerm, const cv::_InputArray* shadowMask, ResultVoid* ocvrs_return) {
		try {
			instance->computeDataModulationTerm(*patternImages, *dataModulationTerm, *shadowMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_structured_light_SinusoidalPattern_to_Algorithm(cv::structured_light::SinusoidalPattern* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::structured_light::StructuredLightPattern* cv_structured_light_SinusoidalPattern_to_StructuredLightPattern(cv::structured_light::SinusoidalPattern* instance) {
			return dynamic_cast<cv::structured_light::StructuredLightPattern*>(instance);
	}
	
	void cv_structured_light_SinusoidalPattern_delete(cv::structured_light::SinusoidalPattern* instance) {
			delete instance;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_Params(Result<cv::structured_light::SinusoidalPattern::Params*>* ocvrs_return) {
		try {
			cv::structured_light::SinusoidalPattern::Params* ret = new cv::structured_light::SinusoidalPattern::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_structured_light_SinusoidalPattern_Params_propWidth_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			int ret = instance->width;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propWidth_const_int(cv::structured_light::SinusoidalPattern::Params* instance, const int val) {
			instance->width = val;
	}
	
	int cv_structured_light_SinusoidalPattern_Params_propHeight_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			int ret = instance->height;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propHeight_const_int(cv::structured_light::SinusoidalPattern::Params* instance, const int val) {
			instance->height = val;
	}
	
	int cv_structured_light_SinusoidalPattern_Params_propNbrOfPeriods_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			int ret = instance->nbrOfPeriods;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propNbrOfPeriods_const_int(cv::structured_light::SinusoidalPattern::Params* instance, const int val) {
			instance->nbrOfPeriods = val;
	}
	
	float cv_structured_light_SinusoidalPattern_Params_propShiftValue_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			float ret = instance->shiftValue;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propShiftValue_const_float(cv::structured_light::SinusoidalPattern::Params* instance, const float val) {
			instance->shiftValue = val;
	}
	
	int cv_structured_light_SinusoidalPattern_Params_propMethodId_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			int ret = instance->methodId;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propMethodId_const_int(cv::structured_light::SinusoidalPattern::Params* instance, const int val) {
			instance->methodId = val;
	}
	
	int cv_structured_light_SinusoidalPattern_Params_propNbrOfPixelsBetweenMarkers_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			int ret = instance->nbrOfPixelsBetweenMarkers;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propNbrOfPixelsBetweenMarkers_const_int(cv::structured_light::SinusoidalPattern::Params* instance, const int val) {
			instance->nbrOfPixelsBetweenMarkers = val;
	}
	
	bool cv_structured_light_SinusoidalPattern_Params_propHorizontal_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			bool ret = instance->horizontal;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propHorizontal_const_bool(cv::structured_light::SinusoidalPattern::Params* instance, const bool val) {
			instance->horizontal = val;
	}
	
	bool cv_structured_light_SinusoidalPattern_Params_propSetMarkers_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			bool ret = instance->setMarkers;
			return ret;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propSetMarkers_const_bool(cv::structured_light::SinusoidalPattern::Params* instance, const bool val) {
			instance->setMarkers = val;
	}
	
	std::vector<cv::Point2f>* cv_structured_light_SinusoidalPattern_Params_propMarkersLocation_const(const cv::structured_light::SinusoidalPattern::Params* instance) {
			std::vector<cv::Point2f> ret = instance->markersLocation;
			return new std::vector<cv::Point2f>(ret);
	}
	
	void cv_structured_light_SinusoidalPattern_Params_propMarkersLocation_const_vectorLPoint2fG(cv::structured_light::SinusoidalPattern::Params* instance, const std::vector<cv::Point2f>* val) {
			instance->markersLocation = *val;
	}
	
	void cv_structured_light_SinusoidalPattern_Params_delete(cv::structured_light::SinusoidalPattern::Params* instance) {
			delete instance;
	}
	
	void cv_structured_light_StructuredLightPattern_generate_const__OutputArrayR(cv::structured_light::StructuredLightPattern* instance, const cv::_OutputArray* patternImages, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->generate(*patternImages);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_StructuredLightPattern_decode_const_const_vectorLvectorLMatGGR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_int(const cv::structured_light::StructuredLightPattern* instance, const std::vector<std::vector<cv::Mat>>* patternImages, const cv::_OutputArray* disparityMap, const cv::_InputArray* blackImages, const cv::_InputArray* whiteImages, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->decode(*patternImages, *disparityMap, *blackImages, *whiteImages, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_structured_light_StructuredLightPattern_decode_const_const_vectorLvectorLMatGGR_const__OutputArrayR(const cv::structured_light::StructuredLightPattern* instance, const std::vector<std::vector<cv::Mat>>* patternImages, const cv::_OutputArray* disparityMap, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->decode(*patternImages, *disparityMap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::structured_light::GrayCodePattern* cv_structured_light_StructuredLightPattern_to_GrayCodePattern(cv::structured_light::StructuredLightPattern* instance) {
			return dynamic_cast<cv::structured_light::GrayCodePattern*>(instance);
	}
	
	cv::structured_light::SinusoidalPattern* cv_structured_light_StructuredLightPattern_to_SinusoidalPattern(cv::structured_light::StructuredLightPattern* instance) {
			return dynamic_cast<cv::structured_light::SinusoidalPattern*>(instance);
	}
	
	cv::Algorithm* cv_structured_light_StructuredLightPattern_to_Algorithm(cv::structured_light::StructuredLightPattern* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_structured_light_StructuredLightPattern_delete(cv::structured_light::StructuredLightPattern* instance) {
			delete instance;
	}
	
}
