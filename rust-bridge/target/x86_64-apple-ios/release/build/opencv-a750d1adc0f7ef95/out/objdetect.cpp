#include "ocvrs_common.hpp"
#include <opencv2/objdetect.hpp>
#include "objdetect_types.hpp"

extern "C" {
	void cv_aruco_drawDetectedCornersCharuco_const__InputOutputArrayR_const__InputArrayR(const cv::_InputOutputArray* image, const cv::_InputArray* charucoCorners, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::drawDetectedCornersCharuco(*image, *charucoCorners);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_drawDetectedCornersCharuco_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* charucoCorners, const cv::_InputArray* charucoIds, cv::Scalar* cornerColor, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::drawDetectedCornersCharuco(*image, *charucoCorners, *charucoIds, *cornerColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_drawDetectedDiamonds_const__InputOutputArrayR_const__InputArrayR(const cv::_InputOutputArray* image, const cv::_InputArray* diamondCorners, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::drawDetectedDiamonds(*image, *diamondCorners);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_drawDetectedDiamonds_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* diamondCorners, const cv::_InputArray* diamondIds, cv::Scalar* borderColor, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::drawDetectedDiamonds(*image, *diamondCorners, *diamondIds, *borderColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_drawDetectedMarkers_const__InputOutputArrayR_const__InputArrayR(const cv::_InputOutputArray* image, const cv::_InputArray* corners, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::drawDetectedMarkers(*image, *corners);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_drawDetectedMarkers_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* corners, const cv::_InputArray* ids, cv::Scalar* borderColor, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::drawDetectedMarkers(*image, *corners, *ids, *borderColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_extendDictionary_int_int(int nMarkers, int markerSize, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary ret = cv::aruco::extendDictionary(nMarkers, markerSize);
			Ok(new cv::aruco::Dictionary(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_extendDictionary_int_int_const_DictionaryR_int(int nMarkers, int markerSize, const cv::aruco::Dictionary* baseDictionary, int randomSeed, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary ret = cv::aruco::extendDictionary(nMarkers, markerSize, *baseDictionary, randomSeed);
			Ok(new cv::aruco::Dictionary(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_generateImageMarker_const_DictionaryR_int_int_const__OutputArrayR(const cv::aruco::Dictionary* dictionary, int id, int sidePixels, const cv::_OutputArray* img, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::generateImageMarker(*dictionary, id, sidePixels, *img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_generateImageMarker_const_DictionaryR_int_int_const__OutputArrayR_int(const cv::aruco::Dictionary* dictionary, int id, int sidePixels, const cv::_OutputArray* img, int borderBits, ResultVoid* ocvrs_return) {
		try {
			cv::aruco::generateImageMarker(*dictionary, id, sidePixels, *img, borderBits);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_getPredefinedDictionary_PredefinedDictionaryType(cv::aruco::PredefinedDictionaryType name, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary ret = cv::aruco::getPredefinedDictionary(name);
			Ok(new cv::aruco::Dictionary(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_getPredefinedDictionary_int(int dict, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary ret = cv::aruco::getPredefinedDictionary(dict);
			Ok(new cv::aruco::Dictionary(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createFaceDetectionMaskGenerator(Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = cv::createFaceDetectionMaskGenerator();
			Ok(new cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_meanshift_vectorLRectGR_vectorLdoubleGR_vectorLdoubleGR(std::vector<cv::Rect>* rectList, std::vector<double>* foundWeights, std::vector<double>* foundScales, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles_meanshift(*rectList, *foundWeights, *foundScales);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_meanshift_vectorLRectGR_vectorLdoubleGR_vectorLdoubleGR_double_Size(std::vector<cv::Rect>* rectList, std::vector<double>* foundWeights, std::vector<double>* foundScales, double detectThreshold, cv::Size* winDetSize, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles_meanshift(*rectList, *foundWeights, *foundScales, detectThreshold, *winDetSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_int(std::vector<cv::Rect>* rectList, int groupThreshold, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, groupThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_int_double(std::vector<cv::Rect>* rectList, int groupThreshold, double eps, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_int_double_vectorLintGX_vectorLdoubleGX(std::vector<cv::Rect>* rectList, int groupThreshold, double eps, std::vector<int>* weights, std::vector<double>* levelWeights, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, groupThreshold, eps, weights, levelWeights);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_vectorLintGR_int(std::vector<cv::Rect>* rectList, std::vector<int>* weights, int groupThreshold, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, *weights, groupThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_vectorLintGR_int_double(std::vector<cv::Rect>* rectList, std::vector<int>* weights, int groupThreshold, double eps, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, *weights, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_vectorLintGR_vectorLdoubleGR_int(std::vector<cv::Rect>* rectList, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, int groupThreshold, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, *rejectLevels, *levelWeights, groupThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_vectorLintGR_vectorLdoubleGR_int_double(std::vector<cv::Rect>* rectList, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, int groupThreshold, double eps, ResultVoid* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, *rejectLevels, *levelWeights, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_empty_const(const cv::BaseCascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_load_const_StringR(cv::BaseCascadeClassifier* instance, const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_double_int_int_Size_Size(cv::BaseCascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_double_int_int_Size_Size(cv::BaseCascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* numDetections, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *numDetections, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_vectorLdoubleGR_double_int_int_Size_Size_bool(cv::BaseCascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, bool outputRejectLevels, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *rejectLevels, *levelWeights, scaleFactor, minNeighbors, flags, *minSize, *maxSize, outputRejectLevels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_isOldFormatCascade_const(const cv::BaseCascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOldFormatCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getOriginalWindowSize_const(const cv::BaseCascadeClassifier* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getOriginalWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getFeatureType_const(const cv::BaseCascadeClassifier* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFeatureType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getOldCascade(cv::BaseCascadeClassifier* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->getOldCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_setMaskGenerator_const_PtrLMaskGeneratorGR(cv::BaseCascadeClassifier* instance, const cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* maskGenerator, ResultVoid* ocvrs_return) {
		try {
			instance->setMaskGenerator(*maskGenerator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getMaskGenerator(cv::BaseCascadeClassifier* instance, Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = instance->getMaskGenerator();
			Ok(new cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_BaseCascadeClassifier_to_Algorithm(cv::BaseCascadeClassifier* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_BaseCascadeClassifier_delete(cv::BaseCascadeClassifier* instance) {
			delete instance;
	}
	
	void cv_BaseCascadeClassifier_MaskGenerator_generateMask_const_MatR(cv::BaseCascadeClassifier::MaskGenerator* instance, const cv::Mat* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->generateMask(*src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_MaskGenerator_initializeMask_const_MatR(cv::BaseCascadeClassifier::MaskGenerator* instance, const cv::Mat* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->initializeMask(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_MaskGenerator_delete(cv::BaseCascadeClassifier::MaskGenerator* instance) {
			delete instance;
	}
	
	void cv_CascadeClassifier_CascadeClassifier(Result<cv::CascadeClassifier*>* ocvrs_return) {
		try {
			cv::CascadeClassifier* ret = new cv::CascadeClassifier();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_CascadeClassifier_const_StringR(const char* filename, Result<cv::CascadeClassifier*>* ocvrs_return) {
		try {
			cv::CascadeClassifier* ret = new cv::CascadeClassifier(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_empty_const(const cv::CascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_load_const_StringR(cv::CascadeClassifier* instance, const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_read_const_FileNodeR(cv::CascadeClassifier* instance, const cv::FileNode* node, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->read(*node);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_double_int_int_Size_Size(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_double_int_int_Size_Size(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* numDetections, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *numDetections, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* numDetections, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *numDetections);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_vectorLdoubleGR_double_int_int_Size_Size_bool(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, bool outputRejectLevels, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *rejectLevels, *levelWeights, scaleFactor, minNeighbors, flags, *minSize, *maxSize, outputRejectLevels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_vectorLdoubleGR(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *rejectLevels, *levelWeights);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_isOldFormatCascade_const(const cv::CascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOldFormatCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_getOriginalWindowSize_const(const cv::CascadeClassifier* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getOriginalWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_getFeatureType_const(const cv::CascadeClassifier* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFeatureType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_getOldCascade(cv::CascadeClassifier* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->getOldCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_convert_const_StringR_const_StringR(const char* oldcascade, const char* newcascade, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::CascadeClassifier::convert(std::string(oldcascade), std::string(newcascade));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_setMaskGenerator_const_PtrLMaskGeneratorGR(cv::CascadeClassifier* instance, const cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* maskGenerator, ResultVoid* ocvrs_return) {
		try {
			instance->setMaskGenerator(*maskGenerator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CascadeClassifier_getMaskGenerator(cv::CascadeClassifier* instance, Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = instance->getMaskGenerator();
			Ok(new cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Ptr<cv::BaseCascadeClassifier>* cv_CascadeClassifier_propCc(cv::CascadeClassifier* instance) {
			cv::Ptr<cv::BaseCascadeClassifier> ret = instance->cc;
			return new cv::Ptr<cv::BaseCascadeClassifier>(ret);
	}
	
	void cv_CascadeClassifier_propCc_const_PtrLBaseCascadeClassifierG(cv::CascadeClassifier* instance, const cv::Ptr<cv::BaseCascadeClassifier>* val) {
			instance->cc = *val;
	}
	
	void cv_CascadeClassifier_delete(cv::CascadeClassifier* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_DetectionBasedTracker_PtrLIDetectorG_PtrLIDetectorG_const_ParametersR(cv::Ptr<cv::DetectionBasedTracker::IDetector>* mainDetector, cv::Ptr<cv::DetectionBasedTracker::IDetector>* trackingDetector, const cv::DetectionBasedTracker::Parameters* params, Result<cv::DetectionBasedTracker*>* ocvrs_return) {
		try {
			cv::DetectionBasedTracker* ret = new cv::DetectionBasedTracker(*mainDetector, *trackingDetector, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_run(cv::DetectionBasedTracker* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->run();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_stop(cv::DetectionBasedTracker* instance, ResultVoid* ocvrs_return) {
		try {
			instance->stop();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_resetTracking(cv::DetectionBasedTracker* instance, ResultVoid* ocvrs_return) {
		try {
			instance->resetTracking();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_process_const_MatR(cv::DetectionBasedTracker* instance, const cv::Mat* imageGray, ResultVoid* ocvrs_return) {
		try {
			instance->process(*imageGray);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_setParameters_const_ParametersR(cv::DetectionBasedTracker* instance, const cv::DetectionBasedTracker::Parameters* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setParameters(*params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getParameters_const(const cv::DetectionBasedTracker* instance, Result<cv::DetectionBasedTracker::Parameters*>* ocvrs_return) {
		try {
			const cv::DetectionBasedTracker::Parameters ret = instance->getParameters();
			Ok(new const cv::DetectionBasedTracker::Parameters(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getObjects_const_vectorLRectGR(const cv::DetectionBasedTracker* instance, std::vector<cv::Rect>* result, ResultVoid* ocvrs_return) {
		try {
			instance->getObjects(*result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getObjects_const_vectorLObjectGR(const cv::DetectionBasedTracker* instance, std::vector<cv::DetectionBasedTracker::Object>* result, ResultVoid* ocvrs_return) {
		try {
			instance->getObjects(*result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getObjects_const_vectorLExtObjectGR(const cv::DetectionBasedTracker* instance, std::vector<cv::DetectionBasedTracker::ExtObject>* result, ResultVoid* ocvrs_return) {
		try {
			instance->getObjects(*result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_addObject_const_RectR(cv::DetectionBasedTracker* instance, const cv::Rect* location, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addObject(*location);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_delete(cv::DetectionBasedTracker* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_ExtObject_ExtObject_int_Rect_ObjectStatus(int _id, cv::Rect* _location, cv::DetectionBasedTracker::ObjectStatus _status, Result<cv::DetectionBasedTracker::ExtObject*>* ocvrs_return) {
		try {
			cv::DetectionBasedTracker::ExtObject* ret = new cv::DetectionBasedTracker::ExtObject(_id, *_location, _status);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::DetectionBasedTracker::ExtObject* cv_DetectionBasedTracker_ExtObject_implicitClone_const(const cv::DetectionBasedTracker::ExtObject* instance) {
			return new cv::DetectionBasedTracker::ExtObject(*instance);
	}
	
	int cv_DetectionBasedTracker_ExtObject_propId_const(const cv::DetectionBasedTracker::ExtObject* instance) {
			int ret = instance->id;
			return ret;
	}
	
	void cv_DetectionBasedTracker_ExtObject_propId_const_int(cv::DetectionBasedTracker::ExtObject* instance, const int val) {
			instance->id = val;
	}
	
	void cv_DetectionBasedTracker_ExtObject_propLocation_const(const cv::DetectionBasedTracker::ExtObject* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = instance->location;
			*ocvrs_return = ret;
	}
	
	void cv_DetectionBasedTracker_ExtObject_propLocation_const_Rect(cv::DetectionBasedTracker::ExtObject* instance, const cv::Rect* val) {
			instance->location = *val;
	}
	
	void cv_DetectionBasedTracker_ExtObject_propStatus_const(const cv::DetectionBasedTracker::ExtObject* instance, cv::DetectionBasedTracker::ObjectStatus* ocvrs_return) {
			cv::DetectionBasedTracker::ObjectStatus ret = instance->status;
			*ocvrs_return = ret;
	}
	
	void cv_DetectionBasedTracker_ExtObject_propStatus_const_ObjectStatus(cv::DetectionBasedTracker::ExtObject* instance, const cv::DetectionBasedTracker::ObjectStatus val) {
			instance->status = val;
	}
	
	void cv_DetectionBasedTracker_ExtObject_delete(cv::DetectionBasedTracker::ExtObject* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_IDetector_detect_const_MatR_vectorLRectGR(cv::DetectionBasedTracker::IDetector* instance, const cv::Mat* image, std::vector<cv::Rect>* objects, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*image, *objects);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setMinObjectSize_const_SizeR(cv::DetectionBasedTracker::IDetector* instance, const cv::Size* min, ResultVoid* ocvrs_return) {
		try {
			instance->setMinObjectSize(*min);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setMaxObjectSize_const_SizeR(cv::DetectionBasedTracker::IDetector* instance, const cv::Size* max, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxObjectSize(*max);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getMinObjectSize_const(const cv::DetectionBasedTracker::IDetector* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getMinObjectSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getMaxObjectSize_const(const cv::DetectionBasedTracker::IDetector* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getMaxObjectSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getScaleFactor(cv::DetectionBasedTracker::IDetector* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setScaleFactor_float(cv::DetectionBasedTracker::IDetector* instance, float value, ResultVoid* ocvrs_return) {
		try {
			instance->setScaleFactor(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getMinNeighbours(cv::DetectionBasedTracker::IDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinNeighbours();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setMinNeighbours_int(cv::DetectionBasedTracker::IDetector* instance, int value, ResultVoid* ocvrs_return) {
		try {
			instance->setMinNeighbours(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_delete(cv::DetectionBasedTracker::IDetector* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_Parameters_Parameters(Result<cv::DetectionBasedTracker::Parameters*>* ocvrs_return) {
		try {
			cv::DetectionBasedTracker::Parameters* ret = new cv::DetectionBasedTracker::Parameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_DetectionBasedTracker_Parameters_propMaxTrackLifetime_const(const cv::DetectionBasedTracker::Parameters* instance) {
			int ret = instance->maxTrackLifetime;
			return ret;
	}
	
	void cv_DetectionBasedTracker_Parameters_propMaxTrackLifetime_const_int(cv::DetectionBasedTracker::Parameters* instance, const int val) {
			instance->maxTrackLifetime = val;
	}
	
	int cv_DetectionBasedTracker_Parameters_propMinDetectionPeriod_const(const cv::DetectionBasedTracker::Parameters* instance) {
			int ret = instance->minDetectionPeriod;
			return ret;
	}
	
	void cv_DetectionBasedTracker_Parameters_propMinDetectionPeriod_const_int(cv::DetectionBasedTracker::Parameters* instance, const int val) {
			instance->minDetectionPeriod = val;
	}
	
	void cv_DetectionBasedTracker_Parameters_delete(cv::DetectionBasedTracker::Parameters* instance) {
			delete instance;
	}
	
	cv::DetectionROI* cv_DetectionROI_defaultNew_const() {
			cv::DetectionROI* ret = new cv::DetectionROI();
			return ret;
	}
	
	double cv_DetectionROI_propScale_const(const cv::DetectionROI* instance) {
			double ret = instance->scale;
			return ret;
	}
	
	void cv_DetectionROI_propScale_const_double(cv::DetectionROI* instance, const double val) {
			instance->scale = val;
	}
	
	std::vector<cv::Point>* cv_DetectionROI_propLocations_const(const cv::DetectionROI* instance) {
			std::vector<cv::Point> ret = instance->locations;
			return new std::vector<cv::Point>(ret);
	}
	
	void cv_DetectionROI_propLocations_const_vectorLPointG(cv::DetectionROI* instance, const std::vector<cv::Point>* val) {
			instance->locations = *val;
	}
	
	std::vector<double>* cv_DetectionROI_propConfidences_const(const cv::DetectionROI* instance) {
			std::vector<double> ret = instance->confidences;
			return new std::vector<double>(ret);
	}
	
	void cv_DetectionROI_propConfidences_const_vectorLdoubleG(cv::DetectionROI* instance, const std::vector<double>* val) {
			instance->confidences = *val;
	}
	
	void cv_DetectionROI_delete(cv::DetectionROI* instance) {
			delete instance;
	}
	
	void cv_FaceDetectorYN_setInputSize_const_SizeR(cv::FaceDetectorYN* instance, const cv::Size* input_size, ResultVoid* ocvrs_return) {
		try {
			instance->setInputSize(*input_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getInputSize(cv::FaceDetectorYN* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getInputSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_setScoreThreshold_float(cv::FaceDetectorYN* instance, float score_threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setScoreThreshold(score_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getScoreThreshold(cv::FaceDetectorYN* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScoreThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_setNMSThreshold_float(cv::FaceDetectorYN* instance, float nms_threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setNMSThreshold(nms_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getNMSThreshold(cv::FaceDetectorYN* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getNMSThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_setTopK_int(cv::FaceDetectorYN* instance, int top_k, ResultVoid* ocvrs_return) {
		try {
			instance->setTopK(top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getTopK(cv::FaceDetectorYN* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTopK();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_detect_const__InputArrayR_const__OutputArrayR(cv::FaceDetectorYN* instance, const cv::_InputArray* image, const cv::_OutputArray* faces, Result<int>* ocvrs_return) {
		try {
			int ret = instance->detect(*image, *faces);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_create_const_StringR_const_StringR_const_SizeR_float_float_int_int_int(const char* model, const char* config, const cv::Size* input_size, float score_threshold, float nms_threshold, int top_k, int backend_id, int target_id, Result<cv::Ptr<cv::FaceDetectorYN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceDetectorYN> ret = cv::FaceDetectorYN::create(std::string(model), std::string(config), *input_size, score_threshold, nms_threshold, top_k, backend_id, target_id);
			Ok(new cv::Ptr<cv::FaceDetectorYN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_create_const_StringR_const_StringR_const_SizeR(const char* model, const char* config, const cv::Size* input_size, Result<cv::Ptr<cv::FaceDetectorYN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceDetectorYN> ret = cv::FaceDetectorYN::create(std::string(model), std::string(config), *input_size);
			Ok(new cv::Ptr<cv::FaceDetectorYN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_create_const_StringR_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR_const_SizeR_float_float_int_int_int(const char* framework, const std::vector<unsigned char>* bufferModel, const std::vector<unsigned char>* bufferConfig, const cv::Size* input_size, float score_threshold, float nms_threshold, int top_k, int backend_id, int target_id, Result<cv::Ptr<cv::FaceDetectorYN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceDetectorYN> ret = cv::FaceDetectorYN::create(std::string(framework), *bufferModel, *bufferConfig, *input_size, score_threshold, nms_threshold, top_k, backend_id, target_id);
			Ok(new cv::Ptr<cv::FaceDetectorYN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_create_const_StringR_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR_const_SizeR(const char* framework, const std::vector<unsigned char>* bufferModel, const std::vector<unsigned char>* bufferConfig, const cv::Size* input_size, Result<cv::Ptr<cv::FaceDetectorYN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceDetectorYN> ret = cv::FaceDetectorYN::create(std::string(framework), *bufferModel, *bufferConfig, *input_size);
			Ok(new cv::Ptr<cv::FaceDetectorYN>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceDetectorYN_delete(cv::FaceDetectorYN* instance) {
			delete instance;
	}
	
	void cv_FaceRecognizerSF_alignCrop_const_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::FaceRecognizerSF* instance, const cv::_InputArray* src_img, const cv::_InputArray* face_box, const cv::_OutputArray* aligned_img, ResultVoid* ocvrs_return) {
		try {
			instance->alignCrop(*src_img, *face_box, *aligned_img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_feature_const__InputArrayR_const__OutputArrayR(cv::FaceRecognizerSF* instance, const cv::_InputArray* aligned_img, const cv::_OutputArray* face_feature, ResultVoid* ocvrs_return) {
		try {
			instance->feature(*aligned_img, *face_feature);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_match_const_const__InputArrayR_const__InputArrayR_int(const cv::FaceRecognizerSF* instance, const cv::_InputArray* face_feature1, const cv::_InputArray* face_feature2, int dis_type, Result<double>* ocvrs_return) {
		try {
			double ret = instance->match(*face_feature1, *face_feature2, dis_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_match_const_const__InputArrayR_const__InputArrayR(const cv::FaceRecognizerSF* instance, const cv::_InputArray* face_feature1, const cv::_InputArray* face_feature2, Result<double>* ocvrs_return) {
		try {
			double ret = instance->match(*face_feature1, *face_feature2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_create_const_StringR_const_StringR_int_int(const char* model, const char* config, int backend_id, int target_id, Result<cv::Ptr<cv::FaceRecognizerSF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceRecognizerSF> ret = cv::FaceRecognizerSF::create(std::string(model), std::string(config), backend_id, target_id);
			Ok(new cv::Ptr<cv::FaceRecognizerSF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_create_const_StringR_const_StringR(const char* model, const char* config, Result<cv::Ptr<cv::FaceRecognizerSF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceRecognizerSF> ret = cv::FaceRecognizerSF::create(std::string(model), std::string(config));
			Ok(new cv::Ptr<cv::FaceRecognizerSF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_create_const_StringR_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR_int_int(const char* framework, const std::vector<unsigned char>* bufferModel, const std::vector<unsigned char>* bufferConfig, int backend_id, int target_id, Result<cv::Ptr<cv::FaceRecognizerSF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceRecognizerSF> ret = cv::FaceRecognizerSF::create(std::string(framework), *bufferModel, *bufferConfig, backend_id, target_id);
			Ok(new cv::Ptr<cv::FaceRecognizerSF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_create_const_StringR_const_vectorLunsigned_charGR_const_vectorLunsigned_charGR(const char* framework, const std::vector<unsigned char>* bufferModel, const std::vector<unsigned char>* bufferConfig, Result<cv::Ptr<cv::FaceRecognizerSF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceRecognizerSF> ret = cv::FaceRecognizerSF::create(std::string(framework), *bufferModel, *bufferConfig);
			Ok(new cv::Ptr<cv::FaceRecognizerSF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_delete(cv::FaceRecognizerSF* instance) {
			delete instance;
	}
	
	void cv_GraphicalCodeDetector_GraphicalCodeDetector(Result<cv::GraphicalCodeDetector*>* ocvrs_return) {
		try {
			cv::GraphicalCodeDetector* ret = new cv::GraphicalCodeDetector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::GraphicalCodeDetector* cv_GraphicalCodeDetector_GraphicalCodeDetector_const_GraphicalCodeDetectorR(const cv::GraphicalCodeDetector* unnamed) {
			cv::GraphicalCodeDetector* ret = new cv::GraphicalCodeDetector(*unnamed);
			return ret;
	}
	
	cv::GraphicalCodeDetector* cv_GraphicalCodeDetector_GraphicalCodeDetector_GraphicalCodeDetectorRR(cv::GraphicalCodeDetector* unnamed) {
			cv::GraphicalCodeDetector* ret = new cv::GraphicalCodeDetector(std::move(*unnamed));
			return ret;
	}
	
	void cv_GraphicalCodeDetector_operatorST_const_GraphicalCodeDetectorR(cv::GraphicalCodeDetector* instance, const cv::GraphicalCodeDetector* unnamed) {
			instance->operator=(*unnamed);
	}
	
	void cv_GraphicalCodeDetector_operatorST_GraphicalCodeDetectorRR(cv::GraphicalCodeDetector* instance, cv::GraphicalCodeDetector* unnamed) {
			instance->operator=(std::move(*unnamed));
	}
	
	void cv_GraphicalCodeDetector_detect_const_const__InputArrayR_const__OutputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detect(*img, *points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_decode_const_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, const cv::_OutputArray* straight_code, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->decode(*img, *points, *straight_code);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_decode_const_const__InputArrayR_const__InputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->decode(*img, *points);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_detectAndDecode_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, const cv::_OutputArray* straight_code, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->detectAndDecode(*img, *points, *straight_code);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_detectAndDecode_const_const__InputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->detectAndDecode(*img);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_detectMulti_const_const__InputArrayR_const__OutputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detectMulti(*img, *points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_decodeMulti_const_const__InputArrayR_const__InputArrayR_vectorLstringGR_const__OutputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, std::vector<std::string>* decoded_info, const cv::_OutputArray* straight_code, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->decodeMulti(*img, *points, *decoded_info, *straight_code);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_decodeMulti_const_const__InputArrayR_const__InputArrayR_vectorLstringGR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, std::vector<std::string>* decoded_info, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->decodeMulti(*img, *points, *decoded_info);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_detectAndDecodeMulti_const_const__InputArrayR_vectorLstringGR_const__OutputArrayR_const__OutputArrayR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, std::vector<std::string>* decoded_info, const cv::_OutputArray* points, const cv::_OutputArray* straight_code, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detectAndDecodeMulti(*img, *decoded_info, *points, *straight_code);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_GraphicalCodeDetector_detectAndDecodeMulti_const_const__InputArrayR_vectorLstringGR(const cv::GraphicalCodeDetector* instance, const cv::_InputArray* img, std::vector<std::string>* decoded_info, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detectAndDecodeMulti(*img, *decoded_info);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::GraphicalCodeDetector* cv_GraphicalCodeDetector_implicitClone_const(const cv::GraphicalCodeDetector* instance) {
			return new cv::GraphicalCodeDetector(*instance);
	}
	
	void cv_GraphicalCodeDetector_delete(cv::GraphicalCodeDetector* instance) {
			delete instance;
	}
	
	void cv_HOGDescriptor_HOGDescriptor(Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_Size_Size_Size_Size_int_int_double_HistogramNormType_double_bool_int_bool(cv::Size* _winSize, cv::Size* _blockSize, cv::Size* _blockStride, cv::Size* _cellSize, int _nbins, int _derivAperture, double _winSigma, cv::HOGDescriptor::HistogramNormType _histogramNormType, double _L2HysThreshold, bool _gammaCorrection, int _nlevels, bool _signedGradient, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(*_winSize, *_blockSize, *_blockStride, *_cellSize, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection, _nlevels, _signedGradient);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_Size_Size_Size_Size_int(cv::Size* _winSize, cv::Size* _blockSize, cv::Size* _blockStride, cv::Size* _cellSize, int _nbins, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(*_winSize, *_blockSize, *_blockStride, *_cellSize, _nbins);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_const_StringR(const char* filename, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_const_HOGDescriptorR(const cv::HOGDescriptor* d, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(*d);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_getDescriptorSize_const(const cv::HOGDescriptor* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getDescriptorSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_checkDetectorSize_const(const cv::HOGDescriptor* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->checkDetectorSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_getWinSigma_const(const cv::HOGDescriptor* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getWinSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_setSVMDetector_const__InputArrayR(cv::HOGDescriptor* instance, const cv::_InputArray* svmdetector, ResultVoid* ocvrs_return) {
		try {
			instance->setSVMDetector(*svmdetector);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_read_FileNodeR(cv::HOGDescriptor* instance, cv::FileNode* fn, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->read(*fn);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_write_const_FileStorageR_const_StringR(const cv::HOGDescriptor* instance, cv::FileStorage* fs, const char* objname, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs, std::string(objname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_load_const_StringR_const_StringR(cv::HOGDescriptor* instance, const char* filename, const char* objname, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename), std::string(objname));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_load_const_StringR(cv::HOGDescriptor* instance, const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_save_const_const_StringR_const_StringR(const cv::HOGDescriptor* instance, const char* filename, const char* objname, ResultVoid* ocvrs_return) {
		try {
			instance->save(std::string(filename), std::string(objname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_save_const_const_StringR(const cv::HOGDescriptor* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->save(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_copyTo_const_HOGDescriptorR(const cv::HOGDescriptor* instance, cv::HOGDescriptor* c, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*c);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_compute_const_const__InputArrayR_vectorLfloatGR_Size_Size_const_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<float>* descriptors, cv::Size* winStride, cv::Size* padding, const std::vector<cv::Point>* locations, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*img, *descriptors, *winStride, *padding, *locations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_compute_const_const__InputArrayR_vectorLfloatGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<float>* descriptors, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*img, *descriptors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detect_const_const__InputArrayR_vectorLPointGR_vectorLdoubleGR_double_Size_Size_const_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Point>* foundLocations, std::vector<double>* weights, double hitThreshold, cv::Size* winStride, cv::Size* padding, const std::vector<cv::Point>* searchLocations, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*img, *foundLocations, *weights, hitThreshold, *winStride, *padding, *searchLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detect_const_const__InputArrayR_vectorLPointGR_vectorLdoubleGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Point>* foundLocations, std::vector<double>* weights, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*img, *foundLocations, *weights);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detect_const_const__InputArrayR_vectorLPointGR_double_Size_Size_const_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Point>* foundLocations, double hitThreshold, cv::Size* winStride, cv::Size* padding, const std::vector<cv::Point>* searchLocations, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*img, *foundLocations, hitThreshold, *winStride, *padding, *searchLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detect_const_const__InputArrayR_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Point>* foundLocations, ResultVoid* ocvrs_return) {
		try {
			instance->detect(*img, *foundLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScale_const_const__InputArrayR_vectorLRectGR_vectorLdoubleGR_double_Size_Size_double_double_bool(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, std::vector<double>* foundWeights, double hitThreshold, cv::Size* winStride, cv::Size* padding, double scale, double groupThreshold, bool useMeanshiftGrouping, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*img, *foundLocations, *foundWeights, hitThreshold, *winStride, *padding, scale, groupThreshold, useMeanshiftGrouping);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScale_const_const__InputArrayR_vectorLRectGR_vectorLdoubleGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, std::vector<double>* foundWeights, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*img, *foundLocations, *foundWeights);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScale_const_const__InputArrayR_vectorLRectGR_double_Size_Size_double_double_bool(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, double hitThreshold, cv::Size* winStride, cv::Size* padding, double scale, double groupThreshold, bool useMeanshiftGrouping, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*img, *foundLocations, hitThreshold, *winStride, *padding, scale, groupThreshold, useMeanshiftGrouping);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScale_const_const__InputArrayR_vectorLRectGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScale(*img, *foundLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_computeGradient_const_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_Size(const cv::HOGDescriptor* instance, const cv::_InputArray* img, const cv::_InputOutputArray* grad, const cv::_InputOutputArray* angleOfs, cv::Size* paddingTL, cv::Size* paddingBR, ResultVoid* ocvrs_return) {
		try {
			instance->computeGradient(*img, *grad, *angleOfs, *paddingTL, *paddingBR);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_computeGradient_const_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, const cv::_InputOutputArray* grad, const cv::_InputOutputArray* angleOfs, ResultVoid* ocvrs_return) {
		try {
			instance->computeGradient(*img, *grad, *angleOfs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_getDefaultPeopleDetector(Result<std::vector<float>*>* ocvrs_return) {
		try {
			std::vector<float> ret = cv::HOGDescriptor::getDefaultPeopleDetector();
			Ok(new std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_getDaimlerPeopleDetector(Result<std::vector<float>*>* ocvrs_return) {
		try {
			std::vector<float> ret = cv::HOGDescriptor::getDaimlerPeopleDetector();
			Ok(new std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectROI_const_const__InputArrayR_const_vectorLPointGR_vectorLPointGR_vectorLdoubleGR_double_Size_Size(const cv::HOGDescriptor* instance, const cv::_InputArray* img, const std::vector<cv::Point>* locations, std::vector<cv::Point>* foundLocations, std::vector<double>* confidences, double hitThreshold, cv::Size* winStride, cv::Size* padding, ResultVoid* ocvrs_return) {
		try {
			instance->detectROI(*img, *locations, *foundLocations, *confidences, hitThreshold, *winStride, *padding);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectROI_const_const__InputArrayR_const_vectorLPointGR_vectorLPointGR_vectorLdoubleGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, const std::vector<cv::Point>* locations, std::vector<cv::Point>* foundLocations, std::vector<double>* confidences, ResultVoid* ocvrs_return) {
		try {
			instance->detectROI(*img, *locations, *foundLocations, *confidences);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScaleROI_const_const__InputArrayR_vectorLRectGR_vectorLDetectionROIGR_double_int(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, std::vector<cv::DetectionROI>* locations, double hitThreshold, int groupThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScaleROI(*img, *foundLocations, *locations, hitThreshold, groupThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScaleROI_const_const__InputArrayR_vectorLRectGR_vectorLDetectionROIGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, std::vector<cv::DetectionROI>* locations, ResultVoid* ocvrs_return) {
		try {
			instance->detectMultiScaleROI(*img, *foundLocations, *locations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_groupRectangles_const_vectorLRectGR_vectorLdoubleGR_int_double(const cv::HOGDescriptor* instance, std::vector<cv::Rect>* rectList, std::vector<double>* weights, int groupThreshold, double eps, ResultVoid* ocvrs_return) {
		try {
			instance->groupRectangles(*rectList, *weights, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HOGDescriptor_propWinSize_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->winSize;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_propWinSize_const_Size(cv::HOGDescriptor* instance, const cv::Size* val) {
			instance->winSize = *val;
	}
	
	void cv_HOGDescriptor_propBlockSize_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->blockSize;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_propBlockSize_const_Size(cv::HOGDescriptor* instance, const cv::Size* val) {
			instance->blockSize = *val;
	}
	
	void cv_HOGDescriptor_propBlockStride_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->blockStride;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_propBlockStride_const_Size(cv::HOGDescriptor* instance, const cv::Size* val) {
			instance->blockStride = *val;
	}
	
	void cv_HOGDescriptor_propCellSize_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->cellSize;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_propCellSize_const_Size(cv::HOGDescriptor* instance, const cv::Size* val) {
			instance->cellSize = *val;
	}
	
	int cv_HOGDescriptor_propNbins_const(const cv::HOGDescriptor* instance) {
			int ret = instance->nbins;
			return ret;
	}
	
	void cv_HOGDescriptor_propNbins_const_int(cv::HOGDescriptor* instance, const int val) {
			instance->nbins = val;
	}
	
	int cv_HOGDescriptor_propDerivAperture_const(const cv::HOGDescriptor* instance) {
			int ret = instance->derivAperture;
			return ret;
	}
	
	void cv_HOGDescriptor_propDerivAperture_const_int(cv::HOGDescriptor* instance, const int val) {
			instance->derivAperture = val;
	}
	
	double cv_HOGDescriptor_propWinSigma_const(const cv::HOGDescriptor* instance) {
			double ret = instance->winSigma;
			return ret;
	}
	
	void cv_HOGDescriptor_propWinSigma_const_double(cv::HOGDescriptor* instance, const double val) {
			instance->winSigma = val;
	}
	
	void cv_HOGDescriptor_propHistogramNormType_const(const cv::HOGDescriptor* instance, cv::HOGDescriptor::HistogramNormType* ocvrs_return) {
			cv::HOGDescriptor::HistogramNormType ret = instance->histogramNormType;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_propHistogramNormType_const_HistogramNormType(cv::HOGDescriptor* instance, const cv::HOGDescriptor::HistogramNormType val) {
			instance->histogramNormType = val;
	}
	
	double cv_HOGDescriptor_propL2HysThreshold_const(const cv::HOGDescriptor* instance) {
			double ret = instance->L2HysThreshold;
			return ret;
	}
	
	void cv_HOGDescriptor_propL2HysThreshold_const_double(cv::HOGDescriptor* instance, const double val) {
			instance->L2HysThreshold = val;
	}
	
	bool cv_HOGDescriptor_propGammaCorrection_const(const cv::HOGDescriptor* instance) {
			bool ret = instance->gammaCorrection;
			return ret;
	}
	
	void cv_HOGDescriptor_propGammaCorrection_const_bool(cv::HOGDescriptor* instance, const bool val) {
			instance->gammaCorrection = val;
	}
	
	std::vector<float>* cv_HOGDescriptor_propSvmDetector_const(const cv::HOGDescriptor* instance) {
			std::vector<float> ret = instance->svmDetector;
			return new std::vector<float>(ret);
	}
	
	void cv_HOGDescriptor_propSvmDetector_const_vectorLfloatG(cv::HOGDescriptor* instance, const std::vector<float>* val) {
			instance->svmDetector = *val;
	}
	
	cv::UMat* cv_HOGDescriptor_propOclSvmDetector_const(const cv::HOGDescriptor* instance) {
			cv::UMat ret = instance->oclSvmDetector;
			return new cv::UMat(ret);
	}
	
	void cv_HOGDescriptor_propOclSvmDetector_const_UMat(cv::HOGDescriptor* instance, const cv::UMat* val) {
			instance->oclSvmDetector = *val;
	}
	
	float cv_HOGDescriptor_propFree_coef_const(const cv::HOGDescriptor* instance) {
			float ret = instance->free_coef;
			return ret;
	}
	
	void cv_HOGDescriptor_propFree_coef_const_float(cv::HOGDescriptor* instance, const float val) {
			instance->free_coef = val;
	}
	
	int cv_HOGDescriptor_propNlevels_const(const cv::HOGDescriptor* instance) {
			int ret = instance->nlevels;
			return ret;
	}
	
	void cv_HOGDescriptor_propNlevels_const_int(cv::HOGDescriptor* instance, const int val) {
			instance->nlevels = val;
	}
	
	bool cv_HOGDescriptor_propSignedGradient_const(const cv::HOGDescriptor* instance) {
			bool ret = instance->signedGradient;
			return ret;
	}
	
	void cv_HOGDescriptor_propSignedGradient_const_bool(cv::HOGDescriptor* instance, const bool val) {
			instance->signedGradient = val;
	}
	
	void cv_HOGDescriptor_delete(cv::HOGDescriptor* instance) {
			delete instance;
	}
	
	void cv_QRCodeDetector_QRCodeDetector(Result<cv::QRCodeDetector*>* ocvrs_return) {
		try {
			cv::QRCodeDetector* ret = new cv::QRCodeDetector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_setEpsX_double(cv::QRCodeDetector* instance, double epsX, Result<cv::QRCodeDetector*>* ocvrs_return) {
		try {
			cv::QRCodeDetector ret = instance->setEpsX(epsX);
			Ok(new cv::QRCodeDetector(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_setEpsY_double(cv::QRCodeDetector* instance, double epsY, Result<cv::QRCodeDetector*>* ocvrs_return) {
		try {
			cv::QRCodeDetector ret = instance->setEpsY(epsY);
			Ok(new cv::QRCodeDetector(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_setUseAlignmentMarkers_bool(cv::QRCodeDetector* instance, bool useAlignmentMarkers, Result<cv::QRCodeDetector*>* ocvrs_return) {
		try {
			cv::QRCodeDetector ret = instance->setUseAlignmentMarkers(useAlignmentMarkers);
			Ok(new cv::QRCodeDetector(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_decodeCurved_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, const cv::_OutputArray* straight_qrcode, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->decodeCurved(*img, *points, *straight_qrcode);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_decodeCurved_const__InputArrayR_const__InputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->decodeCurved(*img, *points);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_detectAndDecodeCurved_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, const cv::_OutputArray* straight_qrcode, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->detectAndDecodeCurved(*img, *points, *straight_qrcode);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetector_detectAndDecodeCurved_const__InputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->detectAndDecodeCurved(*img);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::QRCodeDetector* cv_QRCodeDetector_implicitClone_const(const cv::QRCodeDetector* instance) {
			return new cv::QRCodeDetector(*instance);
	}
	
	cv::GraphicalCodeDetector* cv_QRCodeDetector_to_GraphicalCodeDetector(cv::QRCodeDetector* instance) {
			return dynamic_cast<cv::GraphicalCodeDetector*>(instance);
	}
	
	void cv_QRCodeDetector_delete(cv::QRCodeDetector* instance) {
			delete instance;
	}
	
	void cv_QRCodeDetectorAruco_QRCodeDetectorAruco(Result<cv::QRCodeDetectorAruco*>* ocvrs_return) {
		try {
			cv::QRCodeDetectorAruco* ret = new cv::QRCodeDetectorAruco();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetectorAruco_QRCodeDetectorAruco_const_ParamsR(const cv::QRCodeDetectorAruco::Params* params, Result<cv::QRCodeDetectorAruco*>* ocvrs_return) {
		try {
			cv::QRCodeDetectorAruco* ret = new cv::QRCodeDetectorAruco(*params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetectorAruco_getDetectorParameters_const(const cv::QRCodeDetectorAruco* instance, Result<cv::QRCodeDetectorAruco::Params>* ocvrs_return) {
		try {
			const cv::QRCodeDetectorAruco::Params ret = instance->getDetectorParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetectorAruco_setDetectorParameters_const_ParamsR(cv::QRCodeDetectorAruco* instance, const cv::QRCodeDetectorAruco::Params* params, Result<cv::QRCodeDetectorAruco*>* ocvrs_return) {
		try {
			cv::QRCodeDetectorAruco ret = instance->setDetectorParameters(*params);
			Ok(new cv::QRCodeDetectorAruco(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetectorAruco_getArucoParameters_const(const cv::QRCodeDetectorAruco* instance, Result<cv::aruco::DetectorParameters*>* ocvrs_return) {
		try {
			const cv::aruco::DetectorParameters ret = instance->getArucoParameters();
			Ok(new const cv::aruco::DetectorParameters(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeDetectorAruco_setArucoParameters_const_DetectorParametersR(cv::QRCodeDetectorAruco* instance, const cv::aruco::DetectorParameters* params, ResultVoid* ocvrs_return) {
		try {
			instance->setArucoParameters(*params);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::QRCodeDetectorAruco* cv_QRCodeDetectorAruco_implicitClone_const(const cv::QRCodeDetectorAruco* instance) {
			return new cv::QRCodeDetectorAruco(*instance);
	}
	
	cv::GraphicalCodeDetector* cv_QRCodeDetectorAruco_to_GraphicalCodeDetector(cv::QRCodeDetectorAruco* instance) {
			return dynamic_cast<cv::GraphicalCodeDetector*>(instance);
	}
	
	void cv_QRCodeDetectorAruco_delete(cv::QRCodeDetectorAruco* instance) {
			delete instance;
	}
	
	void cv_QRCodeDetectorAruco_Params_Params(Result<cv::QRCodeDetectorAruco::Params>* ocvrs_return) {
		try {
			cv::QRCodeDetectorAruco::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeEncoder_create_const_ParamsR(const cv::QRCodeEncoder::Params* parameters, Result<cv::Ptr<cv::QRCodeEncoder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::QRCodeEncoder> ret = cv::QRCodeEncoder::create(*parameters);
			Ok(new cv::Ptr<cv::QRCodeEncoder>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeEncoder_create(Result<cv::Ptr<cv::QRCodeEncoder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::QRCodeEncoder> ret = cv::QRCodeEncoder::create();
			Ok(new cv::Ptr<cv::QRCodeEncoder>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeEncoder_encode_const_StringR_const__OutputArrayR(cv::QRCodeEncoder* instance, const char* encoded_info, const cv::_OutputArray* qrcode, ResultVoid* ocvrs_return) {
		try {
			instance->encode(std::string(encoded_info), *qrcode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeEncoder_encodeStructuredAppend_const_StringR_const__OutputArrayR(cv::QRCodeEncoder* instance, const char* encoded_info, const cv::_OutputArray* qrcodes, ResultVoid* ocvrs_return) {
		try {
			instance->encodeStructuredAppend(std::string(encoded_info), *qrcodes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_QRCodeEncoder_delete(cv::QRCodeEncoder* instance) {
			delete instance;
	}
	
	void cv_QRCodeEncoder_Params_Params(Result<cv::QRCodeEncoder::Params>* ocvrs_return) {
		try {
			cv::QRCodeEncoder::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SimilarRects_SimilarRects_double(double _eps, Result<cv::SimilarRects*>* ocvrs_return) {
		try {
			cv::SimilarRects* ret = new cv::SimilarRects(_eps);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SimilarRects_operator___const_const_RectR_const_RectR(const cv::SimilarRects* instance, const cv::Rect* r1, const cv::Rect* r2, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator()(*r1, *r2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	double cv_SimilarRects_propEps_const(const cv::SimilarRects* instance) {
			double ret = instance->eps;
			return ret;
	}
	
	void cv_SimilarRects_propEps_const_double(cv::SimilarRects* instance, const double val) {
			instance->eps = val;
	}
	
	void cv_SimilarRects_delete(cv::SimilarRects* instance) {
			delete instance;
	}
	
	void cv_aruco_ArucoDetector_ArucoDetector_const_DictionaryR_const_DetectorParametersR_const_RefineParametersR(const cv::aruco::Dictionary* dictionary, const cv::aruco::DetectorParameters* detectorParams, const cv::aruco::RefineParameters* refineParams, Result<cv::aruco::ArucoDetector*>* ocvrs_return) {
		try {
			cv::aruco::ArucoDetector* ret = new cv::aruco::ArucoDetector(*dictionary, *detectorParams, *refineParams);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_ArucoDetector(Result<cv::aruco::ArucoDetector*>* ocvrs_return) {
		try {
			cv::aruco::ArucoDetector* ret = new cv::aruco::ArucoDetector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_ArucoDetector_const_vectorLDictionaryGR_const_DetectorParametersR_const_RefineParametersR(const std::vector<cv::aruco::Dictionary>* dictionaries, const cv::aruco::DetectorParameters* detectorParams, const cv::aruco::RefineParameters* refineParams, Result<cv::aruco::ArucoDetector*>* ocvrs_return) {
		try {
			cv::aruco::ArucoDetector* ret = new cv::aruco::ArucoDetector(*dictionaries, *detectorParams, *refineParams);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_ArucoDetector_const_vectorLDictionaryGR(const std::vector<cv::aruco::Dictionary>* dictionaries, Result<cv::aruco::ArucoDetector*>* ocvrs_return) {
		try {
			cv::aruco::ArucoDetector* ret = new cv::aruco::ArucoDetector(*dictionaries);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_detectMarkers_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::ArucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* corners, const cv::_OutputArray* ids, const cv::_OutputArray* rejectedImgPoints, ResultVoid* ocvrs_return) {
		try {
			instance->detectMarkers(*image, *corners, *ids, *rejectedImgPoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_detectMarkers_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::ArucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* corners, const cv::_OutputArray* ids, ResultVoid* ocvrs_return) {
		try {
			instance->detectMarkers(*image, *corners, *ids);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_refineDetectedMarkers_const_const__InputArrayR_const_BoardR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::aruco::ArucoDetector* instance, const cv::_InputArray* image, const cv::aruco::Board* board, const cv::_InputOutputArray* detectedCorners, const cv::_InputOutputArray* detectedIds, const cv::_InputOutputArray* rejectedCorners, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* recoveredIdxs, ResultVoid* ocvrs_return) {
		try {
			instance->refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners, *cameraMatrix, *distCoeffs, *recoveredIdxs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_refineDetectedMarkers_const_const__InputArrayR_const_BoardR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::aruco::ArucoDetector* instance, const cv::_InputArray* image, const cv::aruco::Board* board, const cv::_InputOutputArray* detectedCorners, const cv::_InputOutputArray* detectedIds, const cv::_InputOutputArray* rejectedCorners, ResultVoid* ocvrs_return) {
		try {
			instance->refineDetectedMarkers(*image, *board, *detectedCorners, *detectedIds, *rejectedCorners);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_detectMarkersMultiDict_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::ArucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* corners, const cv::_OutputArray* ids, const cv::_OutputArray* rejectedImgPoints, const cv::_OutputArray* dictIndices, ResultVoid* ocvrs_return) {
		try {
			instance->detectMarkersMultiDict(*image, *corners, *ids, *rejectedImgPoints, *dictIndices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_detectMarkersMultiDict_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::ArucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* corners, const cv::_OutputArray* ids, ResultVoid* ocvrs_return) {
		try {
			instance->detectMarkersMultiDict(*image, *corners, *ids);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_getDictionary_const(const cv::aruco::ArucoDetector* instance, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			const cv::aruco::Dictionary ret = instance->getDictionary();
			Ok(new const cv::aruco::Dictionary(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_setDictionary_const_DictionaryR(cv::aruco::ArucoDetector* instance, const cv::aruco::Dictionary* dictionary, ResultVoid* ocvrs_return) {
		try {
			instance->setDictionary(*dictionary);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_getDictionaries_const(const cv::aruco::ArucoDetector* instance, Result<std::vector<cv::aruco::Dictionary>*>* ocvrs_return) {
		try {
			std::vector<cv::aruco::Dictionary> ret = instance->getDictionaries();
			Ok(new std::vector<cv::aruco::Dictionary>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_setDictionaries_const_vectorLDictionaryGR(cv::aruco::ArucoDetector* instance, const std::vector<cv::aruco::Dictionary>* dictionaries, ResultVoid* ocvrs_return) {
		try {
			instance->setDictionaries(*dictionaries);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_getDetectorParameters_const(const cv::aruco::ArucoDetector* instance, Result<cv::aruco::DetectorParameters*>* ocvrs_return) {
		try {
			const cv::aruco::DetectorParameters ret = instance->getDetectorParameters();
			Ok(new const cv::aruco::DetectorParameters(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_setDetectorParameters_const_DetectorParametersR(cv::aruco::ArucoDetector* instance, const cv::aruco::DetectorParameters* detectorParameters, ResultVoid* ocvrs_return) {
		try {
			instance->setDetectorParameters(*detectorParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_getRefineParameters_const(const cv::aruco::ArucoDetector* instance, Result<cv::aruco::RefineParameters>* ocvrs_return) {
		try {
			const cv::aruco::RefineParameters ret = instance->getRefineParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_setRefineParameters_const_RefineParametersR(cv::aruco::ArucoDetector* instance, const cv::aruco::RefineParameters* refineParameters, ResultVoid* ocvrs_return) {
		try {
			instance->setRefineParameters(*refineParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_write_const_FileStorageR(const cv::aruco::ArucoDetector* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_write_FileStorageR_const_StringR(cv::aruco::ArucoDetector* instance, cv::FileStorage* fs, const char* name, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs, std::string(name));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_ArucoDetector_read_const_FileNodeR(cv::aruco::ArucoDetector* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_aruco_ArucoDetector_to_Algorithm(cv::aruco::ArucoDetector* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_aruco_ArucoDetector_delete(cv::aruco::ArucoDetector* instance) {
			delete instance;
	}
	
	void cv_aruco_Board_Board_const__InputArrayR_const_DictionaryR_const__InputArrayR(const cv::_InputArray* objPoints, const cv::aruco::Dictionary* dictionary, const cv::_InputArray* ids, Result<cv::aruco::Board*>* ocvrs_return) {
		try {
			cv::aruco::Board* ret = new cv::aruco::Board(*objPoints, *dictionary, *ids);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_getDictionary_const(const cv::aruco::Board* instance, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			const cv::aruco::Dictionary ret = instance->getDictionary();
			Ok(new const cv::aruco::Dictionary(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_getObjPoints_const(const cv::aruco::Board* instance, Result<std::vector<std::vector<cv::Point3f>>*>* ocvrs_return) {
		try {
			const std::vector<std::vector<cv::Point3f>> ret = instance->getObjPoints();
			Ok(new const std::vector<std::vector<cv::Point3f>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_getIds_const(const cv::aruco::Board* instance, Result<std::vector<int>*>* ocvrs_return) {
		try {
			const std::vector<int> ret = instance->getIds();
			Ok(new const std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_getRightBottomCorner_const(const cv::aruco::Board* instance, Result<cv::Point3f>* ocvrs_return) {
		try {
			const cv::Point3f ret = instance->getRightBottomCorner();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_matchImagePoints_const_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::Board* instance, const cv::_InputArray* detectedCorners, const cv::_InputArray* detectedIds, const cv::_OutputArray* objPoints, const cv::_OutputArray* imgPoints, ResultVoid* ocvrs_return) {
		try {
			instance->matchImagePoints(*detectedCorners, *detectedIds, *objPoints, *imgPoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_generateImage_const_Size_const__OutputArrayR_int_int(const cv::aruco::Board* instance, cv::Size* outSize, const cv::_OutputArray* img, int marginSize, int borderBits, ResultVoid* ocvrs_return) {
		try {
			instance->generateImage(*outSize, *img, marginSize, borderBits);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_generateImage_const_Size_const__OutputArrayR(const cv::aruco::Board* instance, cv::Size* outSize, const cv::_OutputArray* img, ResultVoid* ocvrs_return) {
		try {
			instance->generateImage(*outSize, *img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Board_Board(Result<cv::aruco::Board*>* ocvrs_return) {
		try {
			cv::aruco::Board* ret = new cv::aruco::Board();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::aruco::Board* cv_aruco_Board_implicitClone_const(const cv::aruco::Board* instance) {
			return new cv::aruco::Board(*instance);
	}
	
	void cv_aruco_Board_delete(cv::aruco::Board* instance) {
			delete instance;
	}
	
	void cv_aruco_CharucoBoard_CharucoBoard_const_SizeR_float_float_const_DictionaryR_const__InputArrayR(const cv::Size* size, float squareLength, float markerLength, const cv::aruco::Dictionary* dictionary, const cv::_InputArray* ids, Result<cv::aruco::CharucoBoard*>* ocvrs_return) {
		try {
			cv::aruco::CharucoBoard* ret = new cv::aruco::CharucoBoard(*size, squareLength, markerLength, *dictionary, *ids);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_CharucoBoard_const_SizeR_float_float_const_DictionaryR(const cv::Size* size, float squareLength, float markerLength, const cv::aruco::Dictionary* dictionary, Result<cv::aruco::CharucoBoard*>* ocvrs_return) {
		try {
			cv::aruco::CharucoBoard* ret = new cv::aruco::CharucoBoard(*size, squareLength, markerLength, *dictionary);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_setLegacyPattern_bool(cv::aruco::CharucoBoard* instance, bool legacyPattern, ResultVoid* ocvrs_return) {
		try {
			instance->setLegacyPattern(legacyPattern);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getLegacyPattern_const(const cv::aruco::CharucoBoard* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getLegacyPattern();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getChessboardSize_const(const cv::aruco::CharucoBoard* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getChessboardSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getSquareLength_const(const cv::aruco::CharucoBoard* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getSquareLength();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getMarkerLength_const(const cv::aruco::CharucoBoard* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMarkerLength();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getChessboardCorners_const(const cv::aruco::CharucoBoard* instance, Result<std::vector<cv::Point3f>*>* ocvrs_return) {
		try {
			std::vector<cv::Point3f> ret = instance->getChessboardCorners();
			Ok(new std::vector<cv::Point3f>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getNearestMarkerIdx_const(const cv::aruco::CharucoBoard* instance, Result<std::vector<std::vector<int>>*>* ocvrs_return) {
		try {
			std::vector<std::vector<int>> ret = instance->getNearestMarkerIdx();
			Ok(new std::vector<std::vector<int>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_getNearestMarkerCorners_const(const cv::aruco::CharucoBoard* instance, Result<std::vector<std::vector<int>>*>* ocvrs_return) {
		try {
			std::vector<std::vector<int>> ret = instance->getNearestMarkerCorners();
			Ok(new std::vector<std::vector<int>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_checkCharucoCornersCollinear_const_const__InputArrayR(const cv::aruco::CharucoBoard* instance, const cv::_InputArray* charucoIds, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->checkCharucoCornersCollinear(*charucoIds);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoBoard_CharucoBoard(Result<cv::aruco::CharucoBoard*>* ocvrs_return) {
		try {
			cv::aruco::CharucoBoard* ret = new cv::aruco::CharucoBoard();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::aruco::CharucoBoard* cv_aruco_CharucoBoard_implicitClone_const(const cv::aruco::CharucoBoard* instance) {
			return new cv::aruco::CharucoBoard(*instance);
	}
	
	cv::aruco::Board* cv_aruco_CharucoBoard_to_Board(cv::aruco::CharucoBoard* instance) {
			return dynamic_cast<cv::aruco::Board*>(instance);
	}
	
	void cv_aruco_CharucoBoard_delete(cv::aruco::CharucoBoard* instance) {
			delete instance;
	}
	
	void cv_aruco_CharucoDetector_CharucoDetector_const_CharucoBoardR_const_CharucoParametersR_const_DetectorParametersR_const_RefineParametersR(const cv::aruco::CharucoBoard* board, const cv::aruco::CharucoParameters* charucoParams, const cv::aruco::DetectorParameters* detectorParams, const cv::aruco::RefineParameters* refineParams, Result<cv::aruco::CharucoDetector*>* ocvrs_return) {
		try {
			cv::aruco::CharucoDetector* ret = new cv::aruco::CharucoDetector(*board, *charucoParams, *detectorParams, *refineParams);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_CharucoDetector_const_CharucoBoardR(const cv::aruco::CharucoBoard* board, Result<cv::aruco::CharucoDetector*>* ocvrs_return) {
		try {
			cv::aruco::CharucoDetector* ret = new cv::aruco::CharucoDetector(*board);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_getBoard_const(const cv::aruco::CharucoDetector* instance, Result<cv::aruco::CharucoBoard*>* ocvrs_return) {
		try {
			const cv::aruco::CharucoBoard ret = instance->getBoard();
			Ok(new const cv::aruco::CharucoBoard(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_setBoard_const_CharucoBoardR(cv::aruco::CharucoDetector* instance, const cv::aruco::CharucoBoard* board, ResultVoid* ocvrs_return) {
		try {
			instance->setBoard(*board);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_getCharucoParameters_const(const cv::aruco::CharucoDetector* instance, Result<cv::aruco::CharucoParameters*>* ocvrs_return) {
		try {
			const cv::aruco::CharucoParameters ret = instance->getCharucoParameters();
			Ok(new const cv::aruco::CharucoParameters(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_setCharucoParameters_CharucoParametersR(cv::aruco::CharucoDetector* instance, cv::aruco::CharucoParameters* charucoParameters, ResultVoid* ocvrs_return) {
		try {
			instance->setCharucoParameters(*charucoParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_getDetectorParameters_const(const cv::aruco::CharucoDetector* instance, Result<cv::aruco::DetectorParameters*>* ocvrs_return) {
		try {
			const cv::aruco::DetectorParameters ret = instance->getDetectorParameters();
			Ok(new const cv::aruco::DetectorParameters(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_setDetectorParameters_const_DetectorParametersR(cv::aruco::CharucoDetector* instance, const cv::aruco::DetectorParameters* detectorParameters, ResultVoid* ocvrs_return) {
		try {
			instance->setDetectorParameters(*detectorParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_getRefineParameters_const(const cv::aruco::CharucoDetector* instance, Result<cv::aruco::RefineParameters>* ocvrs_return) {
		try {
			const cv::aruco::RefineParameters ret = instance->getRefineParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_setRefineParameters_const_RefineParametersR(cv::aruco::CharucoDetector* instance, const cv::aruco::RefineParameters* refineParameters, ResultVoid* ocvrs_return) {
		try {
			instance->setRefineParameters(*refineParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_detectBoard_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::aruco::CharucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* charucoCorners, const cv::_OutputArray* charucoIds, const cv::_InputOutputArray* markerCorners, const cv::_InputOutputArray* markerIds, ResultVoid* ocvrs_return) {
		try {
			instance->detectBoard(*image, *charucoCorners, *charucoIds, *markerCorners, *markerIds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_detectBoard_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::CharucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* charucoCorners, const cv::_OutputArray* charucoIds, ResultVoid* ocvrs_return) {
		try {
			instance->detectBoard(*image, *charucoCorners, *charucoIds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_detectDiamonds_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::aruco::CharucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* diamondCorners, const cv::_OutputArray* diamondIds, const cv::_InputOutputArray* markerCorners, const cv::_InputOutputArray* markerIds, ResultVoid* ocvrs_return) {
		try {
			instance->detectDiamonds(*image, *diamondCorners, *diamondIds, *markerCorners, *markerIds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_CharucoDetector_detectDiamonds_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::aruco::CharucoDetector* instance, const cv::_InputArray* image, const cv::_OutputArray* diamondCorners, const cv::_OutputArray* diamondIds, ResultVoid* ocvrs_return) {
		try {
			instance->detectDiamonds(*image, *diamondCorners, *diamondIds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_aruco_CharucoDetector_to_Algorithm(cv::aruco::CharucoDetector* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_aruco_CharucoDetector_delete(cv::aruco::CharucoDetector* instance) {
			delete instance;
	}
	
	void cv_aruco_CharucoParameters_CharucoParameters(Result<cv::aruco::CharucoParameters*>* ocvrs_return) {
		try {
			cv::aruco::CharucoParameters* ret = new cv::aruco::CharucoParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::aruco::CharucoParameters* cv_aruco_CharucoParameters_implicitClone_const(const cv::aruco::CharucoParameters* instance) {
			return new cv::aruco::CharucoParameters(*instance);
	}
	
	cv::Mat* cv_aruco_CharucoParameters_propCameraMatrix_const(const cv::aruco::CharucoParameters* instance) {
			cv::Mat ret = instance->cameraMatrix;
			return new cv::Mat(ret);
	}
	
	void cv_aruco_CharucoParameters_propCameraMatrix_const_Mat(cv::aruco::CharucoParameters* instance, const cv::Mat* val) {
			instance->cameraMatrix = *val;
	}
	
	cv::Mat* cv_aruco_CharucoParameters_propDistCoeffs_const(const cv::aruco::CharucoParameters* instance) {
			cv::Mat ret = instance->distCoeffs;
			return new cv::Mat(ret);
	}
	
	void cv_aruco_CharucoParameters_propDistCoeffs_const_Mat(cv::aruco::CharucoParameters* instance, const cv::Mat* val) {
			instance->distCoeffs = *val;
	}
	
	int cv_aruco_CharucoParameters_propMinMarkers_const(const cv::aruco::CharucoParameters* instance) {
			int ret = instance->minMarkers;
			return ret;
	}
	
	void cv_aruco_CharucoParameters_propMinMarkers_const_int(cv::aruco::CharucoParameters* instance, const int val) {
			instance->minMarkers = val;
	}
	
	bool cv_aruco_CharucoParameters_propTryRefineMarkers_const(const cv::aruco::CharucoParameters* instance) {
			bool ret = instance->tryRefineMarkers;
			return ret;
	}
	
	void cv_aruco_CharucoParameters_propTryRefineMarkers_const_bool(cv::aruco::CharucoParameters* instance, const bool val) {
			instance->tryRefineMarkers = val;
	}
	
	void cv_aruco_CharucoParameters_delete(cv::aruco::CharucoParameters* instance) {
			delete instance;
	}
	
	void cv_aruco_DetectorParameters_DetectorParameters(Result<cv::aruco::DetectorParameters*>* ocvrs_return) {
		try {
			cv::aruco::DetectorParameters* ret = new cv::aruco::DetectorParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_DetectorParameters_readDetectorParameters_const_FileNodeR(cv::aruco::DetectorParameters* instance, const cv::FileNode* fn, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->readDetectorParameters(*fn);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_DetectorParameters_writeDetectorParameters_FileStorageR_const_StringR(cv::aruco::DetectorParameters* instance, cv::FileStorage* fs, const char* name, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->writeDetectorParameters(*fs, std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_DetectorParameters_writeDetectorParameters_FileStorageR(cv::aruco::DetectorParameters* instance, cv::FileStorage* fs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->writeDetectorParameters(*fs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::aruco::DetectorParameters* cv_aruco_DetectorParameters_implicitClone_const(const cv::aruco::DetectorParameters* instance) {
			return new cv::aruco::DetectorParameters(*instance);
	}
	
	int cv_aruco_DetectorParameters_propAdaptiveThreshWinSizeMin_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->adaptiveThreshWinSizeMin;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAdaptiveThreshWinSizeMin_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->adaptiveThreshWinSizeMin = val;
	}
	
	int cv_aruco_DetectorParameters_propAdaptiveThreshWinSizeMax_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->adaptiveThreshWinSizeMax;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAdaptiveThreshWinSizeMax_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->adaptiveThreshWinSizeMax = val;
	}
	
	int cv_aruco_DetectorParameters_propAdaptiveThreshWinSizeStep_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->adaptiveThreshWinSizeStep;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAdaptiveThreshWinSizeStep_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->adaptiveThreshWinSizeStep = val;
	}
	
	double cv_aruco_DetectorParameters_propAdaptiveThreshConstant_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->adaptiveThreshConstant;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAdaptiveThreshConstant_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->adaptiveThreshConstant = val;
	}
	
	double cv_aruco_DetectorParameters_propMinMarkerPerimeterRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->minMarkerPerimeterRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinMarkerPerimeterRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->minMarkerPerimeterRate = val;
	}
	
	double cv_aruco_DetectorParameters_propMaxMarkerPerimeterRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->maxMarkerPerimeterRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMaxMarkerPerimeterRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->maxMarkerPerimeterRate = val;
	}
	
	double cv_aruco_DetectorParameters_propPolygonalApproxAccuracyRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->polygonalApproxAccuracyRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propPolygonalApproxAccuracyRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->polygonalApproxAccuracyRate = val;
	}
	
	double cv_aruco_DetectorParameters_propMinCornerDistanceRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->minCornerDistanceRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinCornerDistanceRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->minCornerDistanceRate = val;
	}
	
	int cv_aruco_DetectorParameters_propMinDistanceToBorder_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->minDistanceToBorder;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinDistanceToBorder_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->minDistanceToBorder = val;
	}
	
	double cv_aruco_DetectorParameters_propMinMarkerDistanceRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->minMarkerDistanceRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinMarkerDistanceRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->minMarkerDistanceRate = val;
	}
	
	float cv_aruco_DetectorParameters_propMinGroupDistance_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->minGroupDistance;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinGroupDistance_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->minGroupDistance = val;
	}
	
	int cv_aruco_DetectorParameters_propCornerRefinementMethod_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->cornerRefinementMethod;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propCornerRefinementMethod_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->cornerRefinementMethod = val;
	}
	
	int cv_aruco_DetectorParameters_propCornerRefinementWinSize_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->cornerRefinementWinSize;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propCornerRefinementWinSize_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->cornerRefinementWinSize = val;
	}
	
	float cv_aruco_DetectorParameters_propRelativeCornerRefinmentWinSize_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->relativeCornerRefinmentWinSize;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propRelativeCornerRefinmentWinSize_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->relativeCornerRefinmentWinSize = val;
	}
	
	int cv_aruco_DetectorParameters_propCornerRefinementMaxIterations_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->cornerRefinementMaxIterations;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propCornerRefinementMaxIterations_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->cornerRefinementMaxIterations = val;
	}
	
	double cv_aruco_DetectorParameters_propCornerRefinementMinAccuracy_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->cornerRefinementMinAccuracy;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propCornerRefinementMinAccuracy_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->cornerRefinementMinAccuracy = val;
	}
	
	int cv_aruco_DetectorParameters_propMarkerBorderBits_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->markerBorderBits;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMarkerBorderBits_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->markerBorderBits = val;
	}
	
	int cv_aruco_DetectorParameters_propPerspectiveRemovePixelPerCell_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->perspectiveRemovePixelPerCell;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propPerspectiveRemovePixelPerCell_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->perspectiveRemovePixelPerCell = val;
	}
	
	double cv_aruco_DetectorParameters_propPerspectiveRemoveIgnoredMarginPerCell_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->perspectiveRemoveIgnoredMarginPerCell;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propPerspectiveRemoveIgnoredMarginPerCell_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->perspectiveRemoveIgnoredMarginPerCell = val;
	}
	
	double cv_aruco_DetectorParameters_propMaxErroneousBitsInBorderRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->maxErroneousBitsInBorderRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMaxErroneousBitsInBorderRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->maxErroneousBitsInBorderRate = val;
	}
	
	double cv_aruco_DetectorParameters_propMinOtsuStdDev_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->minOtsuStdDev;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinOtsuStdDev_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->minOtsuStdDev = val;
	}
	
	double cv_aruco_DetectorParameters_propErrorCorrectionRate_const(const cv::aruco::DetectorParameters* instance) {
			double ret = instance->errorCorrectionRate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propErrorCorrectionRate_const_double(cv::aruco::DetectorParameters* instance, const double val) {
			instance->errorCorrectionRate = val;
	}
	
	float cv_aruco_DetectorParameters_propAprilTagQuadDecimate_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->aprilTagQuadDecimate;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagQuadDecimate_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->aprilTagQuadDecimate = val;
	}
	
	float cv_aruco_DetectorParameters_propAprilTagQuadSigma_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->aprilTagQuadSigma;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagQuadSigma_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->aprilTagQuadSigma = val;
	}
	
	int cv_aruco_DetectorParameters_propAprilTagMinClusterPixels_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->aprilTagMinClusterPixels;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagMinClusterPixels_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->aprilTagMinClusterPixels = val;
	}
	
	int cv_aruco_DetectorParameters_propAprilTagMaxNmaxima_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->aprilTagMaxNmaxima;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagMaxNmaxima_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->aprilTagMaxNmaxima = val;
	}
	
	float cv_aruco_DetectorParameters_propAprilTagCriticalRad_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->aprilTagCriticalRad;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagCriticalRad_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->aprilTagCriticalRad = val;
	}
	
	float cv_aruco_DetectorParameters_propAprilTagMaxLineFitMse_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->aprilTagMaxLineFitMse;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagMaxLineFitMse_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->aprilTagMaxLineFitMse = val;
	}
	
	int cv_aruco_DetectorParameters_propAprilTagMinWhiteBlackDiff_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->aprilTagMinWhiteBlackDiff;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagMinWhiteBlackDiff_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->aprilTagMinWhiteBlackDiff = val;
	}
	
	int cv_aruco_DetectorParameters_propAprilTagDeglitch_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->aprilTagDeglitch;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propAprilTagDeglitch_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->aprilTagDeglitch = val;
	}
	
	bool cv_aruco_DetectorParameters_propDetectInvertedMarker_const(const cv::aruco::DetectorParameters* instance) {
			bool ret = instance->detectInvertedMarker;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propDetectInvertedMarker_const_bool(cv::aruco::DetectorParameters* instance, const bool val) {
			instance->detectInvertedMarker = val;
	}
	
	bool cv_aruco_DetectorParameters_propUseAruco3Detection_const(const cv::aruco::DetectorParameters* instance) {
			bool ret = instance->useAruco3Detection;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propUseAruco3Detection_const_bool(cv::aruco::DetectorParameters* instance, const bool val) {
			instance->useAruco3Detection = val;
	}
	
	int cv_aruco_DetectorParameters_propMinSideLengthCanonicalImg_const(const cv::aruco::DetectorParameters* instance) {
			int ret = instance->minSideLengthCanonicalImg;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinSideLengthCanonicalImg_const_int(cv::aruco::DetectorParameters* instance, const int val) {
			instance->minSideLengthCanonicalImg = val;
	}
	
	float cv_aruco_DetectorParameters_propMinMarkerLengthRatioOriginalImg_const(const cv::aruco::DetectorParameters* instance) {
			float ret = instance->minMarkerLengthRatioOriginalImg;
			return ret;
	}
	
	void cv_aruco_DetectorParameters_propMinMarkerLengthRatioOriginalImg_const_float(cv::aruco::DetectorParameters* instance, const float val) {
			instance->minMarkerLengthRatioOriginalImg = val;
	}
	
	void cv_aruco_DetectorParameters_delete(cv::aruco::DetectorParameters* instance) {
			delete instance;
	}
	
	void cv_aruco_Dictionary_Dictionary(Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary* ret = new cv::aruco::Dictionary();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_Dictionary_const_MatR_int_int(const cv::Mat* bytesList, int _markerSize, int maxcorr, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary* ret = new cv::aruco::Dictionary(*bytesList, _markerSize, maxcorr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_Dictionary_const_MatR_int(const cv::Mat* bytesList, int _markerSize, Result<cv::aruco::Dictionary*>* ocvrs_return) {
		try {
			cv::aruco::Dictionary* ret = new cv::aruco::Dictionary(*bytesList, _markerSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_readDictionary_const_FileNodeR(cv::aruco::Dictionary* instance, const cv::FileNode* fn, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->readDictionary(*fn);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_writeDictionary_FileStorageR_const_StringR(cv::aruco::Dictionary* instance, cv::FileStorage* fs, const char* name, ResultVoid* ocvrs_return) {
		try {
			instance->writeDictionary(*fs, std::string(name));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_writeDictionary_FileStorageR(cv::aruco::Dictionary* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->writeDictionary(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_identify_const_const_MatR_intR_intR_double(const cv::aruco::Dictionary* instance, const cv::Mat* onlyBits, int* idx, int* rotation, double maxCorrectionRate, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->identify(*onlyBits, *idx, *rotation, maxCorrectionRate);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_getDistanceToId_const_const__InputArrayR_int_bool(const cv::aruco::Dictionary* instance, const cv::_InputArray* bits, int id, bool allRotations, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDistanceToId(*bits, id, allRotations);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_getDistanceToId_const_const__InputArrayR_int(const cv::aruco::Dictionary* instance, const cv::_InputArray* bits, int id, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDistanceToId(*bits, id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_generateImageMarker_const_int_int_const__OutputArrayR_int(const cv::aruco::Dictionary* instance, int id, int sidePixels, const cv::_OutputArray* _img, int borderBits, ResultVoid* ocvrs_return) {
		try {
			instance->generateImageMarker(id, sidePixels, *_img, borderBits);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_generateImageMarker_const_int_int_const__OutputArrayR(const cv::aruco::Dictionary* instance, int id, int sidePixels, const cv::_OutputArray* _img, ResultVoid* ocvrs_return) {
		try {
			instance->generateImageMarker(id, sidePixels, *_img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_getByteListFromBits_const_MatR(const cv::Mat* bits, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::aruco::Dictionary::getByteListFromBits(*bits);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_Dictionary_getBitsFromByteList_const_MatR_int(const cv::Mat* byteList, int markerSize, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::aruco::Dictionary::getBitsFromByteList(*byteList, markerSize);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::aruco::Dictionary* cv_aruco_Dictionary_implicitClone_const(const cv::aruco::Dictionary* instance) {
			return new cv::aruco::Dictionary(*instance);
	}
	
	cv::Mat* cv_aruco_Dictionary_propBytesList_const(const cv::aruco::Dictionary* instance) {
			cv::Mat ret = instance->bytesList;
			return new cv::Mat(ret);
	}
	
	void cv_aruco_Dictionary_propBytesList_const_Mat(cv::aruco::Dictionary* instance, const cv::Mat* val) {
			instance->bytesList = *val;
	}
	
	int cv_aruco_Dictionary_propMarkerSize_const(const cv::aruco::Dictionary* instance) {
			int ret = instance->markerSize;
			return ret;
	}
	
	void cv_aruco_Dictionary_propMarkerSize_const_int(cv::aruco::Dictionary* instance, const int val) {
			instance->markerSize = val;
	}
	
	int cv_aruco_Dictionary_propMaxCorrectionBits_const(const cv::aruco::Dictionary* instance) {
			int ret = instance->maxCorrectionBits;
			return ret;
	}
	
	void cv_aruco_Dictionary_propMaxCorrectionBits_const_int(cv::aruco::Dictionary* instance, const int val) {
			instance->maxCorrectionBits = val;
	}
	
	void cv_aruco_Dictionary_delete(cv::aruco::Dictionary* instance) {
			delete instance;
	}
	
	void cv_aruco_GridBoard_GridBoard_const_SizeR_float_float_const_DictionaryR_const__InputArrayR(const cv::Size* size, float markerLength, float markerSeparation, const cv::aruco::Dictionary* dictionary, const cv::_InputArray* ids, Result<cv::aruco::GridBoard*>* ocvrs_return) {
		try {
			cv::aruco::GridBoard* ret = new cv::aruco::GridBoard(*size, markerLength, markerSeparation, *dictionary, *ids);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_GridBoard_GridBoard_const_SizeR_float_float_const_DictionaryR(const cv::Size* size, float markerLength, float markerSeparation, const cv::aruco::Dictionary* dictionary, Result<cv::aruco::GridBoard*>* ocvrs_return) {
		try {
			cv::aruco::GridBoard* ret = new cv::aruco::GridBoard(*size, markerLength, markerSeparation, *dictionary);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_GridBoard_getGridSize_const(const cv::aruco::GridBoard* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getGridSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_GridBoard_getMarkerLength_const(const cv::aruco::GridBoard* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMarkerLength();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_GridBoard_getMarkerSeparation_const(const cv::aruco::GridBoard* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getMarkerSeparation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_GridBoard_GridBoard(Result<cv::aruco::GridBoard*>* ocvrs_return) {
		try {
			cv::aruco::GridBoard* ret = new cv::aruco::GridBoard();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::aruco::GridBoard* cv_aruco_GridBoard_implicitClone_const(const cv::aruco::GridBoard* instance) {
			return new cv::aruco::GridBoard(*instance);
	}
	
	cv::aruco::Board* cv_aruco_GridBoard_to_Board(cv::aruco::GridBoard* instance) {
			return dynamic_cast<cv::aruco::Board*>(instance);
	}
	
	void cv_aruco_GridBoard_delete(cv::aruco::GridBoard* instance) {
			delete instance;
	}
	
	void cv_aruco_RefineParameters_RefineParameters_float_float_bool(float minRepDistance, float errorCorrectionRate, bool checkAllOrders, Result<cv::aruco::RefineParameters>* ocvrs_return) {
		try {
			cv::aruco::RefineParameters ret(minRepDistance, errorCorrectionRate, checkAllOrders);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_RefineParameters_RefineParameters(Result<cv::aruco::RefineParameters>* ocvrs_return) {
		try {
			cv::aruco::RefineParameters ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_RefineParameters_readRefineParameters_const_FileNodeR(cv::aruco::RefineParameters* instance, const cv::FileNode* fn, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->readRefineParameters(*fn);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_RefineParameters_writeRefineParameters_FileStorageR_const_StringR(cv::aruco::RefineParameters* instance, cv::FileStorage* fs, const char* name, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->writeRefineParameters(*fs, std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_aruco_RefineParameters_writeRefineParameters_FileStorageR(cv::aruco::RefineParameters* instance, cv::FileStorage* fs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->writeRefineParameters(*fs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_BarcodeDetector(Result<cv::barcode::BarcodeDetector*>* ocvrs_return) {
		try {
			cv::barcode::BarcodeDetector* ret = new cv::barcode::BarcodeDetector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_BarcodeDetector_const_stringR_const_stringR(const char* prototxt_path, const char* model_path, Result<cv::barcode::BarcodeDetector*>* ocvrs_return) {
		try {
			cv::barcode::BarcodeDetector* ret = new cv::barcode::BarcodeDetector(std::string(prototxt_path), std::string(model_path));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_decodeWithType_const_const__InputArrayR_const__InputArrayR_vectorLstringGR_vectorLstringGR(const cv::barcode::BarcodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, std::vector<std::string>* decoded_info, std::vector<std::string>* decoded_type, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->decodeWithType(*img, *points, *decoded_info, *decoded_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_detectAndDecodeWithType_const_const__InputArrayR_vectorLstringGR_vectorLstringGR_const__OutputArrayR(const cv::barcode::BarcodeDetector* instance, const cv::_InputArray* img, std::vector<std::string>* decoded_info, std::vector<std::string>* decoded_type, const cv::_OutputArray* points, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detectAndDecodeWithType(*img, *decoded_info, *decoded_type, *points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_detectAndDecodeWithType_const_const__InputArrayR_vectorLstringGR_vectorLstringGR(const cv::barcode::BarcodeDetector* instance, const cv::_InputArray* img, std::vector<std::string>* decoded_info, std::vector<std::string>* decoded_type, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detectAndDecodeWithType(*img, *decoded_info, *decoded_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_getDownsamplingThreshold_const(const cv::barcode::BarcodeDetector* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getDownsamplingThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_setDownsamplingThreshold_double(cv::barcode::BarcodeDetector* instance, double thresh, Result<cv::barcode::BarcodeDetector*>* ocvrs_return) {
		try {
			cv::barcode::BarcodeDetector ret = instance->setDownsamplingThreshold(thresh);
			Ok(new cv::barcode::BarcodeDetector(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_getDetectorScales_const_vectorLfloatGR(const cv::barcode::BarcodeDetector* instance, std::vector<float>* sizes, ResultVoid* ocvrs_return) {
		try {
			instance->getDetectorScales(*sizes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_setDetectorScales_const_vectorLfloatGR(cv::barcode::BarcodeDetector* instance, const std::vector<float>* sizes, Result<cv::barcode::BarcodeDetector*>* ocvrs_return) {
		try {
			cv::barcode::BarcodeDetector ret = instance->setDetectorScales(*sizes);
			Ok(new cv::barcode::BarcodeDetector(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_getGradientThreshold_const(const cv::barcode::BarcodeDetector* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getGradientThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_barcode_BarcodeDetector_setGradientThreshold_double(cv::barcode::BarcodeDetector* instance, double thresh, Result<cv::barcode::BarcodeDetector*>* ocvrs_return) {
		try {
			cv::barcode::BarcodeDetector ret = instance->setGradientThreshold(thresh);
			Ok(new cv::barcode::BarcodeDetector(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::barcode::BarcodeDetector* cv_barcode_BarcodeDetector_implicitClone_const(const cv::barcode::BarcodeDetector* instance) {
			return new cv::barcode::BarcodeDetector(*instance);
	}
	
	cv::GraphicalCodeDetector* cv_barcode_BarcodeDetector_to_GraphicalCodeDetector(cv::barcode::BarcodeDetector* instance) {
			return dynamic_cast<cv::GraphicalCodeDetector*>(instance);
	}
	
	void cv_barcode_BarcodeDetector_delete(cv::barcode::BarcodeDetector* instance) {
			delete instance;
	}
	
}
