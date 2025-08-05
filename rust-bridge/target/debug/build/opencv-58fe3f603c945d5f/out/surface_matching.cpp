#include "ocvrs_common.hpp"
#include <opencv2/surface_matching.hpp>
#include "surface_matching_types.hpp"

extern "C" {
	void cv_ppf_match_3d_ICP_ICP(Result<cv::ppf_match_3d::ICP*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::ICP* ret = new cv::ppf_match_3d::ICP();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_ICP_ICP_const_int_const_float_const_float_const_int_const_int_const_int(const int iterations, const float tolerence, const float rejectionScale, const int numLevels, const int sampleType, const int numMaxCorr, Result<cv::ppf_match_3d::ICP*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::ICP* ret = new cv::ppf_match_3d::ICP(iterations, tolerence, rejectionScale, numLevels, sampleType, numMaxCorr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_ICP_ICP_const_int(const int iterations, Result<cv::ppf_match_3d::ICP*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::ICP* ret = new cv::ppf_match_3d::ICP(iterations);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_ICP_registerModelToScene_const_MatR_const_MatR_doubleR_Matx44dR(cv::ppf_match_3d::ICP* instance, const cv::Mat* srcPC, const cv::Mat* dstPC, double* residual, cv::Matx44d* pose, Result<int>* ocvrs_return) {
		try {
			int ret = instance->registerModelToScene(*srcPC, *dstPC, *residual, *pose);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_ICP_registerModelToScene_const_MatR_const_MatR_vectorLPose3DPtrGR(cv::ppf_match_3d::ICP* instance, const cv::Mat* srcPC, const cv::Mat* dstPC, std::vector<cv::ppf_match_3d::Pose3DPtr>* poses, Result<int>* ocvrs_return) {
		try {
			int ret = instance->registerModelToScene(*srcPC, *dstPC, *poses);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_ICP_delete(cv::ppf_match_3d::ICP* instance) {
			delete instance;
	}
	
	void cv_ppf_match_3d_PPF3DDetector_PPF3DDetector(Result<cv::ppf_match_3d::PPF3DDetector*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::PPF3DDetector* ret = new cv::ppf_match_3d::PPF3DDetector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_PPF3DDetector_const_double_const_double_const_double(const double relativeSamplingStep, const double relativeDistanceStep, const double numAngles, Result<cv::ppf_match_3d::PPF3DDetector*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::PPF3DDetector* ret = new cv::ppf_match_3d::PPF3DDetector(relativeSamplingStep, relativeDistanceStep, numAngles);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_PPF3DDetector_const_double(const double relativeSamplingStep, Result<cv::ppf_match_3d::PPF3DDetector*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::PPF3DDetector* ret = new cv::ppf_match_3d::PPF3DDetector(relativeSamplingStep);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_setSearchParams_const_double_const_double_const_bool(cv::ppf_match_3d::PPF3DDetector* instance, const double positionThreshold, const double rotationThreshold, const bool useWeightedClustering, ResultVoid* ocvrs_return) {
		try {
			instance->setSearchParams(positionThreshold, rotationThreshold, useWeightedClustering);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_setSearchParams(cv::ppf_match_3d::PPF3DDetector* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setSearchParams();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_trainModel_const_MatR(cv::ppf_match_3d::PPF3DDetector* instance, const cv::Mat* Model, ResultVoid* ocvrs_return) {
		try {
			instance->trainModel(*Model);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_match_const_MatR_vectorLPose3DPtrGR_const_double_const_double(cv::ppf_match_3d::PPF3DDetector* instance, const cv::Mat* scene, std::vector<cv::ppf_match_3d::Pose3DPtr>* results, const double relativeSceneSampleStep, const double relativeSceneDistance, ResultVoid* ocvrs_return) {
		try {
			instance->match(*scene, *results, relativeSceneSampleStep, relativeSceneDistance);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_match_const_MatR_vectorLPose3DPtrGR(cv::ppf_match_3d::PPF3DDetector* instance, const cv::Mat* scene, std::vector<cv::ppf_match_3d::Pose3DPtr>* results, ResultVoid* ocvrs_return) {
		try {
			instance->match(*scene, *results);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PPF3DDetector_delete(cv::ppf_match_3d::PPF3DDetector* instance) {
			delete instance;
	}
	
	void cv_ppf_match_3d_Pose3D_Pose3D(Result<cv::ppf_match_3d::Pose3D*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::Pose3D* ret = new cv::ppf_match_3d::Pose3D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_Pose3D_double_size_t_size_t(double Alpha, size_t ModelIndex, size_t NumVotes, Result<cv::ppf_match_3d::Pose3D*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::Pose3D* ret = new cv::ppf_match_3d::Pose3D(Alpha, ModelIndex, NumVotes);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_Pose3D_double(double Alpha, Result<cv::ppf_match_3d::Pose3D*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::Pose3D* ret = new cv::ppf_match_3d::Pose3D(Alpha);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_updatePose_Matx44dR(cv::ppf_match_3d::Pose3D* instance, cv::Matx44d* NewPose, ResultVoid* ocvrs_return) {
		try {
			instance->updatePose(*NewPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_updatePose_Matx33dR_Vec3dR(cv::ppf_match_3d::Pose3D* instance, cv::Matx33d* NewR, cv::Vec3d* NewT, ResultVoid* ocvrs_return) {
		try {
			instance->updatePose(*NewR, *NewT);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_updatePoseQuat_Vec4dR_Vec3dR(cv::ppf_match_3d::Pose3D* instance, cv::Vec4d* Q, cv::Vec3d* NewT, ResultVoid* ocvrs_return) {
		try {
			instance->updatePoseQuat(*Q, *NewT);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_appendPose_Matx44dR(cv::ppf_match_3d::Pose3D* instance, cv::Matx44d* IncrementalPose, ResultVoid* ocvrs_return) {
		try {
			instance->appendPose(*IncrementalPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_printPose(cv::ppf_match_3d::Pose3D* instance, ResultVoid* ocvrs_return) {
		try {
			instance->printPose();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_clone(cv::ppf_match_3d::Pose3D* instance, Result<cv::ppf_match_3d::Pose3DPtr*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::Pose3DPtr ret = instance->clone();
			Ok(new cv::ppf_match_3d::Pose3DPtr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_writePose_const_stringR(cv::ppf_match_3d::Pose3D* instance, const char* FileName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->writePose(std::string(FileName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_Pose3D_readPose_const_stringR(cv::ppf_match_3d::Pose3D* instance, const char* FileName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->readPose(std::string(FileName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	double cv_ppf_match_3d_Pose3D_propAlpha_const(const cv::ppf_match_3d::Pose3D* instance) {
			double ret = instance->alpha;
			return ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propAlpha_const_double(cv::ppf_match_3d::Pose3D* instance, const double val) {
			instance->alpha = val;
	}
	
	double cv_ppf_match_3d_Pose3D_propResidual_const(const cv::ppf_match_3d::Pose3D* instance) {
			double ret = instance->residual;
			return ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propResidual_const_double(cv::ppf_match_3d::Pose3D* instance, const double val) {
			instance->residual = val;
	}
	
	size_t cv_ppf_match_3d_Pose3D_propModelIndex_const(const cv::ppf_match_3d::Pose3D* instance) {
			size_t ret = instance->modelIndex;
			return ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propModelIndex_const_size_t(cv::ppf_match_3d::Pose3D* instance, const size_t val) {
			instance->modelIndex = val;
	}
	
	size_t cv_ppf_match_3d_Pose3D_propNumVotes_const(const cv::ppf_match_3d::Pose3D* instance) {
			size_t ret = instance->numVotes;
			return ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propNumVotes_const_size_t(cv::ppf_match_3d::Pose3D* instance, const size_t val) {
			instance->numVotes = val;
	}
	
	void cv_ppf_match_3d_Pose3D_propPose_const(const cv::ppf_match_3d::Pose3D* instance, cv::Matx44d* ocvrs_return) {
			cv::Matx44d ret = instance->pose;
			*ocvrs_return = ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propPose_const_Matx44d(cv::ppf_match_3d::Pose3D* instance, const cv::Matx44d* val) {
			instance->pose = *val;
	}
	
	double cv_ppf_match_3d_Pose3D_propAngle_const(const cv::ppf_match_3d::Pose3D* instance) {
			double ret = instance->angle;
			return ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propAngle_const_double(cv::ppf_match_3d::Pose3D* instance, const double val) {
			instance->angle = val;
	}
	
	void cv_ppf_match_3d_Pose3D_propT_const(const cv::ppf_match_3d::Pose3D* instance, cv::Vec3d* ocvrs_return) {
			cv::Vec3d ret = instance->t;
			*ocvrs_return = ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propT_const_Vec3d(cv::ppf_match_3d::Pose3D* instance, const cv::Vec3d* val) {
			instance->t = *val;
	}
	
	void cv_ppf_match_3d_Pose3D_propQ_const(const cv::ppf_match_3d::Pose3D* instance, cv::Vec4d* ocvrs_return) {
			cv::Vec4d ret = instance->q;
			*ocvrs_return = ret;
	}
	
	void cv_ppf_match_3d_Pose3D_propQ_const_Vec4d(cv::ppf_match_3d::Pose3D* instance, const cv::Vec4d* val) {
			instance->q = *val;
	}
	
	void cv_ppf_match_3d_Pose3D_delete(cv::ppf_match_3d::Pose3D* instance) {
			delete instance;
	}
	
	void cv_ppf_match_3d_PoseCluster3D_PoseCluster3D(Result<cv::ppf_match_3d::PoseCluster3D*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::PoseCluster3D* ret = new cv::ppf_match_3d::PoseCluster3D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PoseCluster3D_PoseCluster3D_Pose3DPtr(cv::ppf_match_3d::Pose3DPtr* newPose, Result<cv::ppf_match_3d::PoseCluster3D*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::PoseCluster3D* ret = new cv::ppf_match_3d::PoseCluster3D(*newPose);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PoseCluster3D_PoseCluster3D_Pose3DPtr_int(cv::ppf_match_3d::Pose3DPtr* newPose, int newId, Result<cv::ppf_match_3d::PoseCluster3D*>* ocvrs_return) {
		try {
			cv::ppf_match_3d::PoseCluster3D* ret = new cv::ppf_match_3d::PoseCluster3D(*newPose, newId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PoseCluster3D_addPose_Pose3DPtr(cv::ppf_match_3d::PoseCluster3D* instance, cv::ppf_match_3d::Pose3DPtr* newPose, ResultVoid* ocvrs_return) {
		try {
			instance->addPose(*newPose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PoseCluster3D_writePoseCluster_const_stringR(cv::ppf_match_3d::PoseCluster3D* instance, const char* FileName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->writePoseCluster(std::string(FileName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ppf_match_3d_PoseCluster3D_readPoseCluster_const_stringR(cv::ppf_match_3d::PoseCluster3D* instance, const char* FileName, Result<int>* ocvrs_return) {
		try {
			int ret = instance->readPoseCluster(std::string(FileName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	std::vector<cv::ppf_match_3d::Pose3DPtr>* cv_ppf_match_3d_PoseCluster3D_propPoseList_const(const cv::ppf_match_3d::PoseCluster3D* instance) {
			std::vector<cv::ppf_match_3d::Pose3DPtr> ret = instance->poseList;
			return new std::vector<cv::ppf_match_3d::Pose3DPtr>(ret);
	}
	
	void cv_ppf_match_3d_PoseCluster3D_propPoseList_const_vectorLPose3DPtrG(cv::ppf_match_3d::PoseCluster3D* instance, const std::vector<cv::ppf_match_3d::Pose3DPtr>* val) {
			instance->poseList = *val;
	}
	
	size_t cv_ppf_match_3d_PoseCluster3D_propNumVotes_const(const cv::ppf_match_3d::PoseCluster3D* instance) {
			size_t ret = instance->numVotes;
			return ret;
	}
	
	void cv_ppf_match_3d_PoseCluster3D_propNumVotes_const_size_t(cv::ppf_match_3d::PoseCluster3D* instance, const size_t val) {
			instance->numVotes = val;
	}
	
	int cv_ppf_match_3d_PoseCluster3D_propId_const(const cv::ppf_match_3d::PoseCluster3D* instance) {
			int ret = instance->id;
			return ret;
	}
	
	void cv_ppf_match_3d_PoseCluster3D_propId_const_int(cv::ppf_match_3d::PoseCluster3D* instance, const int val) {
			instance->id = val;
	}
	
	void cv_ppf_match_3d_PoseCluster3D_delete(cv::ppf_match_3d::PoseCluster3D* instance) {
			delete instance;
	}
	
}
