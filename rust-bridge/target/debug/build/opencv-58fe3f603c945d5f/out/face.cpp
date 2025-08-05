#include "face.hpp"
#include "face_types.hpp"

extern "C" {
	void cv_face_createFacemarkAAM(Result<cv::Ptr<cv::face::Facemark>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::Facemark> ret = cv::face::createFacemarkAAM();
			Ok(new cv::Ptr<cv::face::Facemark>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_createFacemarkKazemi(Result<cv::Ptr<cv::face::Facemark>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::Facemark> ret = cv::face::createFacemarkKazemi();
			Ok(new cv::Ptr<cv::face::Facemark>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_createFacemarkLBF(Result<cv::Ptr<cv::face::Facemark>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::Facemark> ret = cv::face::createFacemarkLBF();
			Ok(new cv::Ptr<cv::face::Facemark>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_drawFacemarks_const__InputOutputArrayR_const__InputArrayR(const cv::_InputOutputArray* image, const cv::_InputArray* points, ResultVoid* ocvrs_return) {
		try {
			cv::face::drawFacemarks(*image, *points);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_drawFacemarks_const__InputOutputArrayR_const__InputArrayR_Scalar(const cv::_InputOutputArray* image, const cv::_InputArray* points, cv::Scalar* color, ResultVoid* ocvrs_return) {
		try {
			cv::face::drawFacemarks(*image, *points, *color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_getFacesHAAR_const__InputArrayR_const__OutputArrayR_const_StringR(const cv::_InputArray* image, const cv::_OutputArray* faces, const char* face_cascade_name, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::getFacesHAAR(*image, *faces, std::string(face_cascade_name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_getFaces_const__InputArrayR_const__OutputArrayR_CParamsX(const cv::_InputArray* image, const cv::_OutputArray* faces, cv::face::CParams* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::getFaces(*image, *faces, params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadDatasetList_String_String_vectorLStringGR_vectorLStringGR(const char* imageList, const char* annotationList, std::vector<cv::String>* images, std::vector<cv::String>* annotations, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadDatasetList(std::string(imageList), std::string(annotationList), *images, *annotations);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadFacePoints_String_const__OutputArrayR(const char* filename, const cv::_OutputArray* points, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadFacePoints(std::string(filename), *points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadFacePoints_String_const__OutputArrayR_float(const char* filename, const cv::_OutputArray* points, float offset, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadFacePoints(std::string(filename), *points, offset);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadTrainingData_String_String_vectorLStringGR_const__OutputArrayR(const char* imageList, const char* groundTruth, std::vector<cv::String>* images, const cv::_OutputArray* facePoints, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadTrainingData(std::string(imageList), std::string(groundTruth), *images, *facePoints);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadTrainingData_String_String_vectorLStringGR_const__OutputArrayR_float(const char* imageList, const char* groundTruth, std::vector<cv::String>* images, const cv::_OutputArray* facePoints, float offset, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadTrainingData(std::string(imageList), std::string(groundTruth), *images, *facePoints, offset);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadTrainingData_String_vectorLStringGR_const__OutputArrayR(const char* filename, std::vector<cv::String>* images, const cv::_OutputArray* facePoints, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadTrainingData(std::string(filename), *images, *facePoints);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadTrainingData_String_vectorLStringGR_const__OutputArrayR_char_float(const char* filename, std::vector<cv::String>* images, const cv::_OutputArray* facePoints, char delim, float offset, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadTrainingData(std::string(filename), *images, *facePoints, delim, offset);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_loadTrainingData_vectorLStringG_vectorLvectorLPoint2fGGR_vectorLStringGR(std::vector<cv::String>* filename, std::vector<std::vector<cv::Point2f>>* trainlandmarks, std::vector<cv::String>* trainimages, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::face::loadTrainingData(*filename, *trainlandmarks, *trainimages);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BIF_getNumBands_const(const cv::face::BIF* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumBands();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BIF_getNumRotations_const(const cv::face::BIF* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumRotations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BIF_compute_const_const__InputArrayR_const__OutputArrayR(const cv::face::BIF* instance, const cv::_InputArray* image, const cv::_OutputArray* features, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*image, *features);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BIF_create_int_int(int num_bands, int num_rotations, Result<cv::Ptr<cv::face::BIF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::BIF> ret = cv::face::BIF::create(num_bands, num_rotations);
			Ok(new cv::Ptr<cv::face::BIF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BIF_create(Result<cv::Ptr<cv::face::BIF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::BIF> ret = cv::face::BIF::create();
			Ok(new cv::Ptr<cv::face::BIF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_BIF_to_Algorithm(cv::face::BIF* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_face_BIF_delete(cv::face::BIF* instance) {
			delete instance;
	}
	
	void cv_face_BasicFaceRecognizer_getNumComponents_const(const cv::face::BasicFaceRecognizer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumComponents();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_setNumComponents_int(cv::face::BasicFaceRecognizer* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setNumComponents(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_getThreshold_const(const cv::face::BasicFaceRecognizer* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_setThreshold_double(cv::face::BasicFaceRecognizer* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_getProjections_const(const cv::face::BasicFaceRecognizer* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			std::vector<cv::Mat> ret = instance->getProjections();
			Ok(new std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_getLabels_const(const cv::face::BasicFaceRecognizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getLabels();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_getEigenValues_const(const cv::face::BasicFaceRecognizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getEigenValues();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_getEigenVectors_const(const cv::face::BasicFaceRecognizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getEigenVectors();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_getMean_const(const cv::face::BasicFaceRecognizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMean();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_read_const_FileNodeR(cv::face::BasicFaceRecognizer* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_write_const_FileStorageR(const cv::face::BasicFaceRecognizer* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_BasicFaceRecognizer_empty_const(const cv::face::BasicFaceRecognizer* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::face::EigenFaceRecognizer* cv_face_BasicFaceRecognizer_to_EigenFaceRecognizer(cv::face::BasicFaceRecognizer* instance) {
			return dynamic_cast<cv::face::EigenFaceRecognizer*>(instance);
	}
	
	cv::face::FisherFaceRecognizer* cv_face_BasicFaceRecognizer_to_FisherFaceRecognizer(cv::face::BasicFaceRecognizer* instance) {
			return dynamic_cast<cv::face::FisherFaceRecognizer*>(instance);
	}
	
	cv::Algorithm* cv_face_BasicFaceRecognizer_to_Algorithm(cv::face::BasicFaceRecognizer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::FaceRecognizer* cv_face_BasicFaceRecognizer_to_FaceRecognizer(cv::face::BasicFaceRecognizer* instance) {
			return dynamic_cast<cv::face::FaceRecognizer*>(instance);
	}
	
	void cv_face_BasicFaceRecognizer_delete(cv::face::BasicFaceRecognizer* instance) {
			delete instance;
	}
	
	void cv_face_CParams_CParams_String_double_int_Size_Size(const char* cascade_model, double sf, int minN, cv::Size* minSz, cv::Size* maxSz, Result<cv::face::CParams*>* ocvrs_return) {
		try {
			cv::face::CParams* ret = new cv::face::CParams(std::string(cascade_model), sf, minN, *minSz, *maxSz);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_CParams_CParams_String(const char* cascade_model, Result<cv::face::CParams*>* ocvrs_return) {
		try {
			cv::face::CParams* ret = new cv::face::CParams(std::string(cascade_model));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void* cv_face_CParams_propCascade_const(const cv::face::CParams* instance) {
			cv::String ret = instance->cascade;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_face_CParams_propCascade_const_String(cv::face::CParams* instance, const char* val) {
			instance->cascade = std::string(val);
	}
	
	double cv_face_CParams_propScaleFactor_const(const cv::face::CParams* instance) {
			double ret = instance->scaleFactor;
			return ret;
	}
	
	void cv_face_CParams_propScaleFactor_const_double(cv::face::CParams* instance, const double val) {
			instance->scaleFactor = val;
	}
	
	int cv_face_CParams_propMinNeighbors_const(const cv::face::CParams* instance) {
			int ret = instance->minNeighbors;
			return ret;
	}
	
	void cv_face_CParams_propMinNeighbors_const_int(cv::face::CParams* instance, const int val) {
			instance->minNeighbors = val;
	}
	
	void cv_face_CParams_propMinSize_const(const cv::face::CParams* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->minSize;
			*ocvrs_return = ret;
	}
	
	void cv_face_CParams_propMinSize_const_Size(cv::face::CParams* instance, const cv::Size* val) {
			instance->minSize = *val;
	}
	
	void cv_face_CParams_propMaxSize_const(const cv::face::CParams* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->maxSize;
			*ocvrs_return = ret;
	}
	
	void cv_face_CParams_propMaxSize_const_Size(cv::face::CParams* instance, const cv::Size* val) {
			instance->maxSize = *val;
	}
	
	cv::CascadeClassifier* cv_face_CParams_propFace_cascade_const(const cv::face::CParams* instance) {
			cv::CascadeClassifier ret = instance->face_cascade;
			return new cv::CascadeClassifier(ret);
	}
	
	void cv_face_CParams_propFace_cascade_const_CascadeClassifier(cv::face::CParams* instance, const cv::CascadeClassifier* val) {
			instance->face_cascade = *val;
	}
	
	void cv_face_CParams_delete(cv::face::CParams* instance) {
			delete instance;
	}
	
	void cv_face_EigenFaceRecognizer_create_int_double(int num_components, double threshold, Result<cv::Ptr<cv::face::EigenFaceRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::EigenFaceRecognizer> ret = cv::face::EigenFaceRecognizer::create(num_components, threshold);
			Ok(new cv::Ptr<cv::face::EigenFaceRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_EigenFaceRecognizer_create(Result<cv::Ptr<cv::face::EigenFaceRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::EigenFaceRecognizer> ret = cv::face::EigenFaceRecognizer::create();
			Ok(new cv::Ptr<cv::face::EigenFaceRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_EigenFaceRecognizer_to_Algorithm(cv::face::EigenFaceRecognizer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::BasicFaceRecognizer* cv_face_EigenFaceRecognizer_to_BasicFaceRecognizer(cv::face::EigenFaceRecognizer* instance) {
			return dynamic_cast<cv::face::BasicFaceRecognizer*>(instance);
	}
	
	cv::face::FaceRecognizer* cv_face_EigenFaceRecognizer_to_FaceRecognizer(cv::face::EigenFaceRecognizer* instance) {
			return dynamic_cast<cv::face::FaceRecognizer*>(instance);
	}
	
	void cv_face_EigenFaceRecognizer_delete(cv::face::EigenFaceRecognizer* instance) {
			delete instance;
	}
	
	void cv_face_FaceRecognizer_train_const__InputArrayR_const__InputArrayR(cv::face::FaceRecognizer* instance, const cv::_InputArray* src, const cv::_InputArray* labels, ResultVoid* ocvrs_return) {
		try {
			instance->train(*src, *labels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_update_const__InputArrayR_const__InputArrayR(cv::face::FaceRecognizer* instance, const cv::_InputArray* src, const cv::_InputArray* labels, ResultVoid* ocvrs_return) {
		try {
			instance->update(*src, *labels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_predict_const_const__InputArrayR(const cv::face::FaceRecognizer* instance, const cv::_InputArray* src, Result<int>* ocvrs_return) {
		try {
			int ret = instance->predict(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_predict_const_const__InputArrayR_intR_doubleR(const cv::face::FaceRecognizer* instance, const cv::_InputArray* src, int* label, double* confidence, ResultVoid* ocvrs_return) {
		try {
			instance->predict(*src, *label, *confidence);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_predict_const_const__InputArrayR_PtrLPredictCollectorG(const cv::face::FaceRecognizer* instance, const cv::_InputArray* src, cv::Ptr<cv::face::PredictCollector>* collector, ResultVoid* ocvrs_return) {
		try {
			instance->predict(*src, *collector);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_write_const_const_StringR(const cv::face::FaceRecognizer* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_read_const_StringR(cv::face::FaceRecognizer* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->read(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_write_const_FileStorageR(const cv::face::FaceRecognizer* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_read_const_FileNodeR(cv::face::FaceRecognizer* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_empty_const(const cv::face::FaceRecognizer* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_setLabelInfo_int_const_StringR(cv::face::FaceRecognizer* instance, int label, const char* strInfo, ResultVoid* ocvrs_return) {
		try {
			instance->setLabelInfo(label, std::string(strInfo));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_getLabelInfo_const_int(const cv::face::FaceRecognizer* instance, int label, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getLabelInfo(label);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_getLabelsByString_const_const_StringR(const cv::face::FaceRecognizer* instance, const char* str, Result<std::vector<int>*>* ocvrs_return) {
		try {
			std::vector<int> ret = instance->getLabelsByString(std::string(str));
			Ok(new std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_getThreshold_const(const cv::face::FaceRecognizer* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FaceRecognizer_setThreshold_double(cv::face::FaceRecognizer* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::face::BasicFaceRecognizer* cv_face_FaceRecognizer_to_BasicFaceRecognizer(cv::face::FaceRecognizer* instance) {
			return dynamic_cast<cv::face::BasicFaceRecognizer*>(instance);
	}
	
	cv::face::EigenFaceRecognizer* cv_face_FaceRecognizer_to_EigenFaceRecognizer(cv::face::FaceRecognizer* instance) {
			return dynamic_cast<cv::face::EigenFaceRecognizer*>(instance);
	}
	
	cv::face::FisherFaceRecognizer* cv_face_FaceRecognizer_to_FisherFaceRecognizer(cv::face::FaceRecognizer* instance) {
			return dynamic_cast<cv::face::FisherFaceRecognizer*>(instance);
	}
	
	cv::face::LBPHFaceRecognizer* cv_face_FaceRecognizer_to_LBPHFaceRecognizer(cv::face::FaceRecognizer* instance) {
			return dynamic_cast<cv::face::LBPHFaceRecognizer*>(instance);
	}
	
	cv::Algorithm* cv_face_FaceRecognizer_to_Algorithm(cv::face::FaceRecognizer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_face_FaceRecognizer_delete(cv::face::FaceRecognizer* instance) {
			delete instance;
	}
	
	void cv_face_Facemark_loadModel_String(cv::face::Facemark* instance, const char* model, ResultVoid* ocvrs_return) {
		try {
			instance->loadModel(std::string(model));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_Facemark_fit_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::face::Facemark* instance, const cv::_InputArray* image, const cv::_InputArray* faces, const cv::_OutputArray* landmarks, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->fit(*image, *faces, *landmarks);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::face::FacemarkAAM* cv_face_Facemark_to_FacemarkAAM(cv::face::Facemark* instance) {
			return dynamic_cast<cv::face::FacemarkAAM*>(instance);
	}
	
	cv::face::FacemarkKazemi* cv_face_Facemark_to_FacemarkKazemi(cv::face::Facemark* instance) {
			return dynamic_cast<cv::face::FacemarkKazemi*>(instance);
	}
	
	cv::face::FacemarkLBF* cv_face_Facemark_to_FacemarkLBF(cv::face::Facemark* instance) {
			return dynamic_cast<cv::face::FacemarkLBF*>(instance);
	}
	
	cv::face::FacemarkTrain* cv_face_Facemark_to_FacemarkTrain(cv::face::Facemark* instance) {
			return dynamic_cast<cv::face::FacemarkTrain*>(instance);
	}
	
	cv::Algorithm* cv_face_Facemark_to_Algorithm(cv::face::Facemark* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_face_Facemark_delete(cv::face::Facemark* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkAAM_fitConfig_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const_vectorLConfigGR(cv::face::FacemarkAAM* instance, const cv::_InputArray* image, const cv::_InputArray* roi, const cv::_OutputArray* _landmarks, const std::vector<cv::face::FacemarkAAM::Config>* runtime_params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->fitConfig(*image, *roi, *_landmarks, *runtime_params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkAAM_create_const_ParamsR(const cv::face::FacemarkAAM::Params* parameters, Result<cv::Ptr<cv::face::FacemarkAAM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FacemarkAAM> ret = cv::face::FacemarkAAM::create(*parameters);
			Ok(new cv::Ptr<cv::face::FacemarkAAM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkAAM_create(Result<cv::Ptr<cv::face::FacemarkAAM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FacemarkAAM> ret = cv::face::FacemarkAAM::create();
			Ok(new cv::Ptr<cv::face::FacemarkAAM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_FacemarkAAM_to_Algorithm(cv::face::FacemarkAAM* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::Facemark* cv_face_FacemarkAAM_to_Facemark(cv::face::FacemarkAAM* instance) {
			return dynamic_cast<cv::face::Facemark*>(instance);
	}
	
	cv::face::FacemarkTrain* cv_face_FacemarkAAM_to_FacemarkTrain(cv::face::FacemarkAAM* instance) {
			return dynamic_cast<cv::face::FacemarkTrain*>(instance);
	}
	
	void cv_face_FacemarkAAM_delete(cv::face::FacemarkAAM* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkAAM_Config_Config_Mat_Point2f_float_int(cv::Mat* rot, cv::Point2f* trans, float scaling, int scale_id, Result<cv::face::FacemarkAAM::Config*>* ocvrs_return) {
		try {
			cv::face::FacemarkAAM::Config* ret = new cv::face::FacemarkAAM::Config(*rot, *trans, scaling, scale_id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkAAM_Config_Config(Result<cv::face::FacemarkAAM::Config*>* ocvrs_return) {
		try {
			cv::face::FacemarkAAM::Config* ret = new cv::face::FacemarkAAM::Config();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Mat* cv_face_FacemarkAAM_Config_propR_const(const cv::face::FacemarkAAM::Config* instance) {
			cv::Mat ret = instance->R;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Config_propR_const_Mat(cv::face::FacemarkAAM::Config* instance, const cv::Mat* val) {
			instance->R = *val;
	}
	
	void cv_face_FacemarkAAM_Config_propT_const(const cv::face::FacemarkAAM::Config* instance, cv::Point2f* ocvrs_return) {
			cv::Point2f ret = instance->t;
			*ocvrs_return = ret;
	}
	
	void cv_face_FacemarkAAM_Config_propT_const_Point2f(cv::face::FacemarkAAM::Config* instance, const cv::Point2f* val) {
			instance->t = *val;
	}
	
	float cv_face_FacemarkAAM_Config_propScale_const(const cv::face::FacemarkAAM::Config* instance) {
			float ret = instance->scale;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Config_propScale_const_float(cv::face::FacemarkAAM::Config* instance, const float val) {
			instance->scale = val;
	}
	
	int cv_face_FacemarkAAM_Config_propModel_scale_idx_const(const cv::face::FacemarkAAM::Config* instance) {
			int ret = instance->model_scale_idx;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Config_propModel_scale_idx_const_int(cv::face::FacemarkAAM::Config* instance, const int val) {
			instance->model_scale_idx = val;
	}
	
	void cv_face_FacemarkAAM_Config_delete(cv::face::FacemarkAAM::Config* instance) {
			delete instance;
	}
	
	cv::face::FacemarkAAM::Data* cv_face_FacemarkAAM_Data_defaultNew_const() {
			cv::face::FacemarkAAM::Data* ret = new cv::face::FacemarkAAM::Data();
			return ret;
	}
	
	std::vector<cv::Point2f>* cv_face_FacemarkAAM_Data_propS0_const(const cv::face::FacemarkAAM::Data* instance) {
			std::vector<cv::Point2f> ret = instance->s0;
			return new std::vector<cv::Point2f>(ret);
	}
	
	void cv_face_FacemarkAAM_Data_propS0_const_vectorLPoint2fG(cv::face::FacemarkAAM::Data* instance, const std::vector<cv::Point2f>* val) {
			instance->s0 = *val;
	}
	
	void cv_face_FacemarkAAM_Data_delete(cv::face::FacemarkAAM::Data* instance) {
			delete instance;
	}
	
	cv::face::FacemarkAAM::Model* cv_face_FacemarkAAM_Model_defaultNew_const() {
			cv::face::FacemarkAAM::Model* ret = new cv::face::FacemarkAAM::Model();
			return ret;
	}
	
	std::vector<float>* cv_face_FacemarkAAM_Model_propScales_const(const cv::face::FacemarkAAM::Model* instance) {
			std::vector<float> ret = instance->scales;
			return new std::vector<float>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_propScales_const_vectorLfloatG(cv::face::FacemarkAAM::Model* instance, const std::vector<float>* val) {
			instance->scales = *val;
	}
	
	std::vector<cv::Vec3i>* cv_face_FacemarkAAM_Model_propTriangles_const(const cv::face::FacemarkAAM::Model* instance) {
			std::vector<cv::Vec3i> ret = instance->triangles;
			return new std::vector<cv::Vec3i>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_propTriangles_const_vectorLVec3iG(cv::face::FacemarkAAM::Model* instance, const std::vector<cv::Vec3i>* val) {
			instance->triangles = *val;
	}
	
	std::vector<cv::face::FacemarkAAM::Model::Texture>* cv_face_FacemarkAAM_Model_propTextures_const(const cv::face::FacemarkAAM::Model* instance) {
			std::vector<cv::face::FacemarkAAM::Model::Texture> ret = instance->textures;
			return new std::vector<cv::face::FacemarkAAM::Model::Texture>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_propTextures_const_vectorLTextureG(cv::face::FacemarkAAM::Model* instance, const std::vector<cv::face::FacemarkAAM::Model::Texture>* val) {
			instance->textures = *val;
	}
	
	std::vector<cv::Point2f>* cv_face_FacemarkAAM_Model_propS0_const(const cv::face::FacemarkAAM::Model* instance) {
			std::vector<cv::Point2f> ret = instance->s0;
			return new std::vector<cv::Point2f>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_propS0_const_vectorLPoint2fG(cv::face::FacemarkAAM::Model* instance, const std::vector<cv::Point2f>* val) {
			instance->s0 = *val;
	}
	
	cv::Mat* cv_face_FacemarkAAM_Model_propS_const(const cv::face::FacemarkAAM::Model* instance) {
			cv::Mat ret = instance->S;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Model_propS_const_Mat(cv::face::FacemarkAAM::Model* instance, const cv::Mat* val) {
			instance->S = *val;
	}
	
	cv::Mat* cv_face_FacemarkAAM_Model_propQ_const(const cv::face::FacemarkAAM::Model* instance) {
			cv::Mat ret = instance->Q;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Model_propQ_const_Mat(cv::face::FacemarkAAM::Model* instance, const cv::Mat* val) {
			instance->Q = *val;
	}
	
	void cv_face_FacemarkAAM_Model_delete(cv::face::FacemarkAAM::Model* instance) {
			delete instance;
	}
	
	cv::face::FacemarkAAM::Model::Texture* cv_face_FacemarkAAM_Model_Texture_defaultNew_const() {
			cv::face::FacemarkAAM::Model::Texture* ret = new cv::face::FacemarkAAM::Model::Texture();
			return ret;
	}
	
	int cv_face_FacemarkAAM_Model_Texture_propMax_m_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			int ret = instance->max_m;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propMax_m_const_int(cv::face::FacemarkAAM::Model::Texture* instance, const int val) {
			instance->max_m = val;
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propResolution_const(const cv::face::FacemarkAAM::Model::Texture* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = instance->resolution;
			*ocvrs_return = ret;
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propResolution_const_Rect(cv::face::FacemarkAAM::Model::Texture* instance, const cv::Rect* val) {
			instance->resolution = *val;
	}
	
	cv::Mat* cv_face_FacemarkAAM_Model_Texture_propA_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			cv::Mat ret = instance->A;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propA_const_Mat(cv::face::FacemarkAAM::Model::Texture* instance, const cv::Mat* val) {
			instance->A = *val;
	}
	
	cv::Mat* cv_face_FacemarkAAM_Model_Texture_propA0_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			cv::Mat ret = instance->A0;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propA0_const_Mat(cv::face::FacemarkAAM::Model::Texture* instance, const cv::Mat* val) {
			instance->A0 = *val;
	}
	
	cv::Mat* cv_face_FacemarkAAM_Model_Texture_propAA_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			cv::Mat ret = instance->AA;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propAA_const_Mat(cv::face::FacemarkAAM::Model::Texture* instance, const cv::Mat* val) {
			instance->AA = *val;
	}
	
	cv::Mat* cv_face_FacemarkAAM_Model_Texture_propAA0_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			cv::Mat ret = instance->AA0;
			return new cv::Mat(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propAA0_const_Mat(cv::face::FacemarkAAM::Model::Texture* instance, const cv::Mat* val) {
			instance->AA0 = *val;
	}
	
	std::vector<std::vector<cv::Point>>* cv_face_FacemarkAAM_Model_Texture_propTextureIdx_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			std::vector<std::vector<cv::Point>> ret = instance->textureIdx;
			return new std::vector<std::vector<cv::Point>>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propTextureIdx_const_vectorLvectorLPointGG(cv::face::FacemarkAAM::Model::Texture* instance, const std::vector<std::vector<cv::Point>>* val) {
			instance->textureIdx = *val;
	}
	
	std::vector<cv::Point2f>* cv_face_FacemarkAAM_Model_Texture_propBase_shape_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			std::vector<cv::Point2f> ret = instance->base_shape;
			return new std::vector<cv::Point2f>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propBase_shape_const_vectorLPoint2fG(cv::face::FacemarkAAM::Model::Texture* instance, const std::vector<cv::Point2f>* val) {
			instance->base_shape = *val;
	}
	
	std::vector<int>* cv_face_FacemarkAAM_Model_Texture_propInd1_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			std::vector<int> ret = instance->ind1;
			return new std::vector<int>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propInd1_const_vectorLintG(cv::face::FacemarkAAM::Model::Texture* instance, const std::vector<int>* val) {
			instance->ind1 = *val;
	}
	
	std::vector<int>* cv_face_FacemarkAAM_Model_Texture_propInd2_const(const cv::face::FacemarkAAM::Model::Texture* instance) {
			std::vector<int> ret = instance->ind2;
			return new std::vector<int>(ret);
	}
	
	void cv_face_FacemarkAAM_Model_Texture_propInd2_const_vectorLintG(cv::face::FacemarkAAM::Model::Texture* instance, const std::vector<int>* val) {
			instance->ind2 = *val;
	}
	
	void cv_face_FacemarkAAM_Model_Texture_delete(cv::face::FacemarkAAM::Model::Texture* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkAAM_Params_Params(Result<cv::face::FacemarkAAM::Params*>* ocvrs_return) {
		try {
			cv::face::FacemarkAAM::Params* ret = new cv::face::FacemarkAAM::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkAAM_Params_read_const_FileNodeR(cv::face::FacemarkAAM::Params* instance, const cv::FileNode* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->read(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkAAM_Params_write_const_FileStorageR(const cv::face::FacemarkAAM::Params* instance, cv::FileStorage* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->write(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void* cv_face_FacemarkAAM_Params_propModel_filename_const(const cv::face::FacemarkAAM::Params* instance) {
			std::string ret = instance->model_filename;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_face_FacemarkAAM_Params_propModel_filename_const_string(cv::face::FacemarkAAM::Params* instance, const char* val) {
			instance->model_filename = std::string(val);
	}
	
	int cv_face_FacemarkAAM_Params_propM_const(const cv::face::FacemarkAAM::Params* instance) {
			int ret = instance->m;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propM_const_int(cv::face::FacemarkAAM::Params* instance, const int val) {
			instance->m = val;
	}
	
	int cv_face_FacemarkAAM_Params_propN_const(const cv::face::FacemarkAAM::Params* instance) {
			int ret = instance->n;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propN_const_int(cv::face::FacemarkAAM::Params* instance, const int val) {
			instance->n = val;
	}
	
	int cv_face_FacemarkAAM_Params_propN_iter_const(const cv::face::FacemarkAAM::Params* instance) {
			int ret = instance->n_iter;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propN_iter_const_int(cv::face::FacemarkAAM::Params* instance, const int val) {
			instance->n_iter = val;
	}
	
	bool cv_face_FacemarkAAM_Params_propVerbose_const(const cv::face::FacemarkAAM::Params* instance) {
			bool ret = instance->verbose;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propVerbose_const_bool(cv::face::FacemarkAAM::Params* instance, const bool val) {
			instance->verbose = val;
	}
	
	bool cv_face_FacemarkAAM_Params_propSave_model_const(const cv::face::FacemarkAAM::Params* instance) {
			bool ret = instance->save_model;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propSave_model_const_bool(cv::face::FacemarkAAM::Params* instance, const bool val) {
			instance->save_model = val;
	}
	
	int cv_face_FacemarkAAM_Params_propMax_m_const(const cv::face::FacemarkAAM::Params* instance) {
			int ret = instance->max_m;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propMax_m_const_int(cv::face::FacemarkAAM::Params* instance, const int val) {
			instance->max_m = val;
	}
	
	int cv_face_FacemarkAAM_Params_propMax_n_const(const cv::face::FacemarkAAM::Params* instance) {
			int ret = instance->max_n;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propMax_n_const_int(cv::face::FacemarkAAM::Params* instance, const int val) {
			instance->max_n = val;
	}
	
	int cv_face_FacemarkAAM_Params_propTexture_max_m_const(const cv::face::FacemarkAAM::Params* instance) {
			int ret = instance->texture_max_m;
			return ret;
	}
	
	void cv_face_FacemarkAAM_Params_propTexture_max_m_const_int(cv::face::FacemarkAAM::Params* instance, const int val) {
			instance->texture_max_m = val;
	}
	
	std::vector<float>* cv_face_FacemarkAAM_Params_propScales_const(const cv::face::FacemarkAAM::Params* instance) {
			std::vector<float> ret = instance->scales;
			return new std::vector<float>(ret);
	}
	
	void cv_face_FacemarkAAM_Params_propScales_const_vectorLfloatG(cv::face::FacemarkAAM::Params* instance, const std::vector<float>* val) {
			instance->scales = *val;
	}
	
	void cv_face_FacemarkAAM_Params_delete(cv::face::FacemarkAAM::Params* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkKazemi_create_const_ParamsR(const cv::face::FacemarkKazemi::Params* parameters, Result<cv::Ptr<cv::face::FacemarkKazemi>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FacemarkKazemi> ret = cv::face::FacemarkKazemi::create(*parameters);
			Ok(new cv::Ptr<cv::face::FacemarkKazemi>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkKazemi_create(Result<cv::Ptr<cv::face::FacemarkKazemi>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FacemarkKazemi> ret = cv::face::FacemarkKazemi::create();
			Ok(new cv::Ptr<cv::face::FacemarkKazemi>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkKazemi_training_vectorLMatGR_vectorLvectorLPoint2fGGR_string_Size_string(cv::face::FacemarkKazemi* instance, std::vector<cv::Mat>* images, std::vector<std::vector<cv::Point2f>>* landmarks, const char* configfile, cv::Size* scale, const char* modelFilename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->training(*images, *landmarks, std::string(configfile), *scale, std::string(modelFilename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkKazemi_training_vectorLMatGR_vectorLvectorLPoint2fGGR_string_Size(cv::face::FacemarkKazemi* instance, std::vector<cv::Mat>* images, std::vector<std::vector<cv::Point2f>>* landmarks, const char* configfile, cv::Size* scale, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->training(*images, *landmarks, std::string(configfile), *scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkKazemi_setFaceDetector_bool__X__const_cv__InputArrayR__const_cv__OutputArrayR__voidX__voidX(cv::face::FacemarkKazemi* instance, bool (*f)(const cv::_InputArray&, const cv::_OutputArray&, void*), void* userData, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setFaceDetector(f, userData);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkKazemi_getFaces_const__InputArrayR_const__OutputArrayR(cv::face::FacemarkKazemi* instance, const cv::_InputArray* image, const cv::_OutputArray* faces, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getFaces(*image, *faces);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_FacemarkKazemi_to_Algorithm(cv::face::FacemarkKazemi* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::Facemark* cv_face_FacemarkKazemi_to_Facemark(cv::face::FacemarkKazemi* instance) {
			return dynamic_cast<cv::face::Facemark*>(instance);
	}
	
	void cv_face_FacemarkKazemi_delete(cv::face::FacemarkKazemi* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkKazemi_Params_Params(Result<cv::face::FacemarkKazemi::Params*>* ocvrs_return) {
		try {
			cv::face::FacemarkKazemi::Params* ret = new cv::face::FacemarkKazemi::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	unsigned long cv_face_FacemarkKazemi_Params_propCascade_depth_const(const cv::face::FacemarkKazemi::Params* instance) {
			unsigned long ret = instance->cascade_depth;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propCascade_depth_const_unsigned_long(cv::face::FacemarkKazemi::Params* instance, const unsigned long val) {
			instance->cascade_depth = val;
	}
	
	unsigned long cv_face_FacemarkKazemi_Params_propTree_depth_const(const cv::face::FacemarkKazemi::Params* instance) {
			unsigned long ret = instance->tree_depth;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propTree_depth_const_unsigned_long(cv::face::FacemarkKazemi::Params* instance, const unsigned long val) {
			instance->tree_depth = val;
	}
	
	unsigned long cv_face_FacemarkKazemi_Params_propNum_trees_per_cascade_level_const(const cv::face::FacemarkKazemi::Params* instance) {
			unsigned long ret = instance->num_trees_per_cascade_level;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propNum_trees_per_cascade_level_const_unsigned_long(cv::face::FacemarkKazemi::Params* instance, const unsigned long val) {
			instance->num_trees_per_cascade_level = val;
	}
	
	float cv_face_FacemarkKazemi_Params_propLearning_rate_const(const cv::face::FacemarkKazemi::Params* instance) {
			float ret = instance->learning_rate;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propLearning_rate_const_float(cv::face::FacemarkKazemi::Params* instance, const float val) {
			instance->learning_rate = val;
	}
	
	unsigned long cv_face_FacemarkKazemi_Params_propOversampling_amount_const(const cv::face::FacemarkKazemi::Params* instance) {
			unsigned long ret = instance->oversampling_amount;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propOversampling_amount_const_unsigned_long(cv::face::FacemarkKazemi::Params* instance, const unsigned long val) {
			instance->oversampling_amount = val;
	}
	
	unsigned long cv_face_FacemarkKazemi_Params_propNum_test_coordinates_const(const cv::face::FacemarkKazemi::Params* instance) {
			unsigned long ret = instance->num_test_coordinates;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propNum_test_coordinates_const_unsigned_long(cv::face::FacemarkKazemi::Params* instance, const unsigned long val) {
			instance->num_test_coordinates = val;
	}
	
	float cv_face_FacemarkKazemi_Params_propLambda_const(const cv::face::FacemarkKazemi::Params* instance) {
			float ret = instance->lambda;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propLambda_const_float(cv::face::FacemarkKazemi::Params* instance, const float val) {
			instance->lambda = val;
	}
	
	unsigned long cv_face_FacemarkKazemi_Params_propNum_test_splits_const(const cv::face::FacemarkKazemi::Params* instance) {
			unsigned long ret = instance->num_test_splits;
			return ret;
	}
	
	void cv_face_FacemarkKazemi_Params_propNum_test_splits_const_unsigned_long(cv::face::FacemarkKazemi::Params* instance, const unsigned long val) {
			instance->num_test_splits = val;
	}
	
	void* cv_face_FacemarkKazemi_Params_propConfigfile_const(const cv::face::FacemarkKazemi::Params* instance) {
			cv::String ret = instance->configfile;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_face_FacemarkKazemi_Params_propConfigfile_const_String(cv::face::FacemarkKazemi::Params* instance, const char* val) {
			instance->configfile = std::string(val);
	}
	
	void cv_face_FacemarkKazemi_Params_delete(cv::face::FacemarkKazemi::Params* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkLBF_create_const_ParamsR(const cv::face::FacemarkLBF::Params* parameters, Result<cv::Ptr<cv::face::FacemarkLBF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FacemarkLBF> ret = cv::face::FacemarkLBF::create(*parameters);
			Ok(new cv::Ptr<cv::face::FacemarkLBF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkLBF_create(Result<cv::Ptr<cv::face::FacemarkLBF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FacemarkLBF> ret = cv::face::FacemarkLBF::create();
			Ok(new cv::Ptr<cv::face::FacemarkLBF>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_FacemarkLBF_to_Algorithm(cv::face::FacemarkLBF* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::Facemark* cv_face_FacemarkLBF_to_Facemark(cv::face::FacemarkLBF* instance) {
			return dynamic_cast<cv::face::Facemark*>(instance);
	}
	
	cv::face::FacemarkTrain* cv_face_FacemarkLBF_to_FacemarkTrain(cv::face::FacemarkLBF* instance) {
			return dynamic_cast<cv::face::FacemarkTrain*>(instance);
	}
	
	void cv_face_FacemarkLBF_delete(cv::face::FacemarkLBF* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkLBF_Params_Params(Result<cv::face::FacemarkLBF::Params*>* ocvrs_return) {
		try {
			cv::face::FacemarkLBF::Params* ret = new cv::face::FacemarkLBF::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkLBF_Params_read_const_FileNodeR(cv::face::FacemarkLBF::Params* instance, const cv::FileNode* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->read(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkLBF_Params_write_const_FileStorageR(const cv::face::FacemarkLBF::Params* instance, cv::FileStorage* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->write(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	double cv_face_FacemarkLBF_Params_propShape_offset_const(const cv::face::FacemarkLBF::Params* instance) {
			double ret = instance->shape_offset;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propShape_offset_const_double(cv::face::FacemarkLBF::Params* instance, const double val) {
			instance->shape_offset = val;
	}
	
	void* cv_face_FacemarkLBF_Params_propCascade_face_const(const cv::face::FacemarkLBF::Params* instance) {
			cv::String ret = instance->cascade_face;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_face_FacemarkLBF_Params_propCascade_face_const_String(cv::face::FacemarkLBF::Params* instance, const char* val) {
			instance->cascade_face = std::string(val);
	}
	
	bool cv_face_FacemarkLBF_Params_propVerbose_const(const cv::face::FacemarkLBF::Params* instance) {
			bool ret = instance->verbose;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propVerbose_const_bool(cv::face::FacemarkLBF::Params* instance, const bool val) {
			instance->verbose = val;
	}
	
	int cv_face_FacemarkLBF_Params_propN_landmarks_const(const cv::face::FacemarkLBF::Params* instance) {
			int ret = instance->n_landmarks;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propN_landmarks_const_int(cv::face::FacemarkLBF::Params* instance, const int val) {
			instance->n_landmarks = val;
	}
	
	int cv_face_FacemarkLBF_Params_propInitShape_n_const(const cv::face::FacemarkLBF::Params* instance) {
			int ret = instance->initShape_n;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propInitShape_n_const_int(cv::face::FacemarkLBF::Params* instance, const int val) {
			instance->initShape_n = val;
	}
	
	int cv_face_FacemarkLBF_Params_propStages_n_const(const cv::face::FacemarkLBF::Params* instance) {
			int ret = instance->stages_n;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propStages_n_const_int(cv::face::FacemarkLBF::Params* instance, const int val) {
			instance->stages_n = val;
	}
	
	int cv_face_FacemarkLBF_Params_propTree_n_const(const cv::face::FacemarkLBF::Params* instance) {
			int ret = instance->tree_n;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propTree_n_const_int(cv::face::FacemarkLBF::Params* instance, const int val) {
			instance->tree_n = val;
	}
	
	int cv_face_FacemarkLBF_Params_propTree_depth_const(const cv::face::FacemarkLBF::Params* instance) {
			int ret = instance->tree_depth;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propTree_depth_const_int(cv::face::FacemarkLBF::Params* instance, const int val) {
			instance->tree_depth = val;
	}
	
	double cv_face_FacemarkLBF_Params_propBagging_overlap_const(const cv::face::FacemarkLBF::Params* instance) {
			double ret = instance->bagging_overlap;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propBagging_overlap_const_double(cv::face::FacemarkLBF::Params* instance, const double val) {
			instance->bagging_overlap = val;
	}
	
	void* cv_face_FacemarkLBF_Params_propModel_filename_const(const cv::face::FacemarkLBF::Params* instance) {
			std::string ret = instance->model_filename;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_face_FacemarkLBF_Params_propModel_filename_const_string(cv::face::FacemarkLBF::Params* instance, const char* val) {
			instance->model_filename = std::string(val);
	}
	
	bool cv_face_FacemarkLBF_Params_propSave_model_const(const cv::face::FacemarkLBF::Params* instance) {
			bool ret = instance->save_model;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propSave_model_const_bool(cv::face::FacemarkLBF::Params* instance, const bool val) {
			instance->save_model = val;
	}
	
	unsigned int cv_face_FacemarkLBF_Params_propSeed_const(const cv::face::FacemarkLBF::Params* instance) {
			unsigned int ret = instance->seed;
			return ret;
	}
	
	void cv_face_FacemarkLBF_Params_propSeed_const_unsigned_int(cv::face::FacemarkLBF::Params* instance, const unsigned int val) {
			instance->seed = val;
	}
	
	std::vector<int>* cv_face_FacemarkLBF_Params_propFeats_m_const(const cv::face::FacemarkLBF::Params* instance) {
			std::vector<int> ret = instance->feats_m;
			return new std::vector<int>(ret);
	}
	
	void cv_face_FacemarkLBF_Params_propFeats_m_const_vectorLintG(cv::face::FacemarkLBF::Params* instance, const std::vector<int>* val) {
			instance->feats_m = *val;
	}
	
	std::vector<double>* cv_face_FacemarkLBF_Params_propRadius_m_const(const cv::face::FacemarkLBF::Params* instance) {
			std::vector<double> ret = instance->radius_m;
			return new std::vector<double>(ret);
	}
	
	void cv_face_FacemarkLBF_Params_propRadius_m_const_vectorLdoubleG(cv::face::FacemarkLBF::Params* instance, const std::vector<double>* val) {
			instance->radius_m = *val;
	}
	
	void cv_face_FacemarkLBF_Params_propDetectROI_const(const cv::face::FacemarkLBF::Params* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = instance->detectROI;
			*ocvrs_return = ret;
	}
	
	void cv_face_FacemarkLBF_Params_propDetectROI_const_Rect(cv::face::FacemarkLBF::Params* instance, const cv::Rect* val) {
			instance->detectROI = *val;
	}
	
	void cv_face_FacemarkLBF_Params_delete(cv::face::FacemarkLBF::Params* instance) {
			delete instance;
	}
	
	void cv_face_FacemarkTrain_addTrainingSample_const__InputArrayR_const__InputArrayR(cv::face::FacemarkTrain* instance, const cv::_InputArray* image, const cv::_InputArray* landmarks, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->addTrainingSample(*image, *landmarks);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkTrain_training_voidX(cv::face::FacemarkTrain* instance, void* parameters, ResultVoid* ocvrs_return) {
		try {
			instance->training(parameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkTrain_training(cv::face::FacemarkTrain* instance, ResultVoid* ocvrs_return) {
		try {
			instance->training();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkTrain_setFaceDetector_FN_FaceDetector_voidX(cv::face::FacemarkTrain* instance, cv::face::FN_FaceDetector detector, void* userData, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setFaceDetector(detector, userData);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkTrain_getFaces_const__InputArrayR_const__OutputArrayR(cv::face::FacemarkTrain* instance, const cv::_InputArray* image, const cv::_OutputArray* faces, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getFaces(*image, *faces);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkTrain_getData_voidX(cv::face::FacemarkTrain* instance, void* items, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getData(items);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FacemarkTrain_getData(cv::face::FacemarkTrain* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getData();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::face::FacemarkAAM* cv_face_FacemarkTrain_to_FacemarkAAM(cv::face::FacemarkTrain* instance) {
			return dynamic_cast<cv::face::FacemarkAAM*>(instance);
	}
	
	cv::face::FacemarkLBF* cv_face_FacemarkTrain_to_FacemarkLBF(cv::face::FacemarkTrain* instance) {
			return dynamic_cast<cv::face::FacemarkLBF*>(instance);
	}
	
	cv::Algorithm* cv_face_FacemarkTrain_to_Algorithm(cv::face::FacemarkTrain* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::Facemark* cv_face_FacemarkTrain_to_Facemark(cv::face::FacemarkTrain* instance) {
			return dynamic_cast<cv::face::Facemark*>(instance);
	}
	
	void cv_face_FacemarkTrain_delete(cv::face::FacemarkTrain* instance) {
			delete instance;
	}
	
	void cv_face_FisherFaceRecognizer_create_int_double(int num_components, double threshold, Result<cv::Ptr<cv::face::FisherFaceRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FisherFaceRecognizer> ret = cv::face::FisherFaceRecognizer::create(num_components, threshold);
			Ok(new cv::Ptr<cv::face::FisherFaceRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_FisherFaceRecognizer_create(Result<cv::Ptr<cv::face::FisherFaceRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::FisherFaceRecognizer> ret = cv::face::FisherFaceRecognizer::create();
			Ok(new cv::Ptr<cv::face::FisherFaceRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_FisherFaceRecognizer_to_Algorithm(cv::face::FisherFaceRecognizer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::BasicFaceRecognizer* cv_face_FisherFaceRecognizer_to_BasicFaceRecognizer(cv::face::FisherFaceRecognizer* instance) {
			return dynamic_cast<cv::face::BasicFaceRecognizer*>(instance);
	}
	
	cv::face::FaceRecognizer* cv_face_FisherFaceRecognizer_to_FaceRecognizer(cv::face::FisherFaceRecognizer* instance) {
			return dynamic_cast<cv::face::FaceRecognizer*>(instance);
	}
	
	void cv_face_FisherFaceRecognizer_delete(cv::face::FisherFaceRecognizer* instance) {
			delete instance;
	}
	
	void cv_face_LBPHFaceRecognizer_getGridX_const(const cv::face::LBPHFaceRecognizer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getGridX();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_setGridX_int(cv::face::LBPHFaceRecognizer* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setGridX(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_getGridY_const(const cv::face::LBPHFaceRecognizer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getGridY();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_setGridY_int(cv::face::LBPHFaceRecognizer* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setGridY(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_getRadius_const(const cv::face::LBPHFaceRecognizer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_setRadius_int(cv::face::LBPHFaceRecognizer* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_getNeighbors_const(const cv::face::LBPHFaceRecognizer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNeighbors();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_setNeighbors_int(cv::face::LBPHFaceRecognizer* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setNeighbors(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_getThreshold_const(const cv::face::LBPHFaceRecognizer* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_setThreshold_double(cv::face::LBPHFaceRecognizer* instance, double val, ResultVoid* ocvrs_return) {
		try {
			instance->setThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_getHistograms_const(const cv::face::LBPHFaceRecognizer* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			std::vector<cv::Mat> ret = instance->getHistograms();
			Ok(new std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_getLabels_const(const cv::face::LBPHFaceRecognizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getLabels();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_create_int_int_int_int_double(int radius, int neighbors, int grid_x, int grid_y, double threshold, Result<cv::Ptr<cv::face::LBPHFaceRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::LBPHFaceRecognizer> ret = cv::face::LBPHFaceRecognizer::create(radius, neighbors, grid_x, grid_y, threshold);
			Ok(new cv::Ptr<cv::face::LBPHFaceRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_LBPHFaceRecognizer_create(Result<cv::Ptr<cv::face::LBPHFaceRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::LBPHFaceRecognizer> ret = cv::face::LBPHFaceRecognizer::create();
			Ok(new cv::Ptr<cv::face::LBPHFaceRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_LBPHFaceRecognizer_to_Algorithm(cv::face::LBPHFaceRecognizer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::face::FaceRecognizer* cv_face_LBPHFaceRecognizer_to_FaceRecognizer(cv::face::LBPHFaceRecognizer* instance) {
			return dynamic_cast<cv::face::FaceRecognizer*>(instance);
	}
	
	void cv_face_LBPHFaceRecognizer_delete(cv::face::LBPHFaceRecognizer* instance) {
			delete instance;
	}
	
	void cv_face_MACE_salt_const_StringR(cv::face::MACE* instance, const char* passphrase, ResultVoid* ocvrs_return) {
		try {
			instance->salt(std::string(passphrase));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_MACE_train_const__InputArrayR(cv::face::MACE* instance, const cv::_InputArray* images, ResultVoid* ocvrs_return) {
		try {
			instance->train(*images);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_MACE_same_const_const__InputArrayR(const cv::face::MACE* instance, const cv::_InputArray* query, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->same(*query);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_MACE_load_const_StringR_const_StringR(const char* filename, const char* objname, Result<cv::Ptr<cv::face::MACE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::MACE> ret = cv::face::MACE::load(std::string(filename), std::string(objname));
			Ok(new cv::Ptr<cv::face::MACE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_MACE_load_const_StringR(const char* filename, Result<cv::Ptr<cv::face::MACE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::MACE> ret = cv::face::MACE::load(std::string(filename));
			Ok(new cv::Ptr<cv::face::MACE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_MACE_create_int(int IMGSIZE, Result<cv::Ptr<cv::face::MACE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::MACE> ret = cv::face::MACE::create(IMGSIZE);
			Ok(new cv::Ptr<cv::face::MACE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_MACE_create(Result<cv::Ptr<cv::face::MACE>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::MACE> ret = cv::face::MACE::create();
			Ok(new cv::Ptr<cv::face::MACE>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_face_MACE_to_Algorithm(cv::face::MACE* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_face_MACE_delete(cv::face::MACE* instance) {
			delete instance;
	}
	
	void cv_face_PredictCollector_init_size_t(cv::face::PredictCollector* instance, size_t size, ResultVoid* ocvrs_return) {
		try {
			instance->init(size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_PredictCollector_collect_int_double(cv::face::PredictCollector* instance, int label, double dist, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->collect(label, dist);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::face::StandardCollector* cv_face_PredictCollector_to_StandardCollector(cv::face::PredictCollector* instance) {
			return dynamic_cast<cv::face::StandardCollector*>(instance);
	}
	
	void cv_face_PredictCollector_delete(cv::face::PredictCollector* instance) {
			delete instance;
	}
	
	void cv_face_StandardCollector_StandardCollector_double(double threshold_, Result<cv::face::StandardCollector*>* ocvrs_return) {
		try {
			cv::face::StandardCollector* ret = new cv::face::StandardCollector(threshold_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_StandardCollector(Result<cv::face::StandardCollector*>* ocvrs_return) {
		try {
			cv::face::StandardCollector* ret = new cv::face::StandardCollector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_init_size_t(cv::face::StandardCollector* instance, size_t size, ResultVoid* ocvrs_return) {
		try {
			instance->init(size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_collect_int_double(cv::face::StandardCollector* instance, int label, double dist, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->collect(label, dist);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_getMinLabel_const(const cv::face::StandardCollector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinLabel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_getMinDist_const(const cv::face::StandardCollector* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMinDist();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_getResults_const_bool(const cv::face::StandardCollector* instance, bool sorted, Result<std::vector<std::pair<int, double>>*>* ocvrs_return) {
		try {
			std::vector<std::pair<int, double>> ret = instance->getResults(sorted);
			Ok(new std::vector<std::pair<int, double>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_getResults_const(const cv::face::StandardCollector* instance, Result<std::vector<std::pair<int, double>>*>* ocvrs_return) {
		try {
			std::vector<std::pair<int, double>> ret = instance->getResults();
			Ok(new std::vector<std::pair<int, double>>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_create_double(double threshold, Result<cv::Ptr<cv::face::StandardCollector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::StandardCollector> ret = cv::face::StandardCollector::create(threshold);
			Ok(new cv::Ptr<cv::face::StandardCollector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_create(Result<cv::Ptr<cv::face::StandardCollector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::face::StandardCollector> ret = cv::face::StandardCollector::create();
			Ok(new cv::Ptr<cv::face::StandardCollector>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::face::PredictCollector* cv_face_StandardCollector_to_PredictCollector(cv::face::StandardCollector* instance) {
			return dynamic_cast<cv::face::PredictCollector*>(instance);
	}
	
	void cv_face_StandardCollector_delete(cv::face::StandardCollector* instance) {
			delete instance;
	}
	
	void cv_face_StandardCollector_PredictResult_PredictResult_int_double(int label_, double distance_, Result<cv::face::StandardCollector::PredictResult>* ocvrs_return) {
		try {
			cv::face::StandardCollector::PredictResult ret(label_, distance_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_face_StandardCollector_PredictResult_PredictResult(Result<cv::face::StandardCollector::PredictResult>* ocvrs_return) {
		try {
			cv::face::StandardCollector::PredictResult ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
