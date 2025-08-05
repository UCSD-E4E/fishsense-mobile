extern "C" {
	const cv::aruco::EstimateParameters* cv_PtrLcv_aruco_EstimateParametersG_getInnerPtr_const(const cv::Ptr<cv::aruco::EstimateParameters>* instance) {
			return instance->get();
	}
	
	cv::aruco::EstimateParameters* cv_PtrLcv_aruco_EstimateParametersG_getInnerPtrMut(cv::Ptr<cv::aruco::EstimateParameters>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_aruco_EstimateParametersG_delete(cv::Ptr<cv::aruco::EstimateParameters>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::aruco::EstimateParameters>* cv_PtrLcv_aruco_EstimateParametersG_new_const_EstimateParameters(cv::aruco::EstimateParameters* val) {
			return new cv::Ptr<cv::aruco::EstimateParameters>(val);
	}
	
}

