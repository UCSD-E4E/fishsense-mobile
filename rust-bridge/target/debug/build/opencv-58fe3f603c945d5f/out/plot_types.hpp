extern "C" {
	const cv::plot::Plot2d* cv_PtrLcv_plot_Plot2dG_getInnerPtr_const(const cv::Ptr<cv::plot::Plot2d>* instance) {
			return instance->get();
	}
	
	cv::plot::Plot2d* cv_PtrLcv_plot_Plot2dG_getInnerPtrMut(cv::Ptr<cv::plot::Plot2d>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_plot_Plot2dG_delete(cv::Ptr<cv::plot::Plot2d>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_plot_Plot2dG_to_PtrOfAlgorithm(cv::Ptr<cv::plot::Plot2d>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
}

