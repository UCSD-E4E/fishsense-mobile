#include "ocvrs_common.hpp"
#include <opencv2/highgui.hpp>
#include "highgui_types.hpp"

extern "C" {
	void cv_addText_const_MatR_const_StringR_Point_const_QtFontR(const cv::Mat* img, const char* text, cv::Point* org, const cv::QtFont* font, ResultVoid* ocvrs_return) {
		try {
			cv::addText(*img, std::string(text), *org, *font);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_addText_const_MatR_const_StringR_Point_const_StringR(const cv::Mat* img, const char* text, cv::Point* org, const char* nameFont, ResultVoid* ocvrs_return) {
		try {
			cv::addText(*img, std::string(text), *org, std::string(nameFont));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_addText_const_MatR_const_StringR_Point_const_StringR_int_Scalar_int_int_int(const cv::Mat* img, const char* text, cv::Point* org, const char* nameFont, int pointSize, cv::Scalar* color, int weight, int style, int spacing, ResultVoid* ocvrs_return) {
		try {
			cv::addText(*img, std::string(text), *org, std::string(nameFont), pointSize, *color, weight, style, spacing);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createButton_const_StringR_ButtonCallback_voidX(const char* bar_name, cv::ButtonCallback on_change, void* userdata, Result<int>* ocvrs_return) {
		try {
			int ret = cv::createButton(std::string(bar_name), on_change, userdata);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createButton_const_StringR_ButtonCallback_voidX_int_bool(const char* bar_name, cv::ButtonCallback on_change, void* userdata, int type, bool initial_button_state, Result<int>* ocvrs_return) {
		try {
			int ret = cv::createButton(std::string(bar_name), on_change, userdata, type, initial_button_state);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createTrackbar_const_StringR_const_StringR_intX_int_TrackbarCallback_voidX(const char* trackbarname, const char* winname, int* value, int count, cv::TrackbarCallback onChange, void* userdata, Result<int>* ocvrs_return) {
		try {
			int ret = cv::createTrackbar(std::string(trackbarname), std::string(winname), value, count, onChange, userdata);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_currentUIFramework(Result<void*>* ocvrs_return) {
		try {
			const std::string ret = cv::currentUIFramework();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_destroyAllWindows(ResultVoid* ocvrs_return) {
		try {
			cv::destroyAllWindows();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_destroyWindow_const_StringR(const char* winname, ResultVoid* ocvrs_return) {
		try {
			cv::destroyWindow(std::string(winname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_displayOverlay_const_StringR_const_StringR(const char* winname, const char* text, ResultVoid* ocvrs_return) {
		try {
			cv::displayOverlay(std::string(winname), std::string(text));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_displayOverlay_const_StringR_const_StringR_int(const char* winname, const char* text, int delayms, ResultVoid* ocvrs_return) {
		try {
			cv::displayOverlay(std::string(winname), std::string(text), delayms);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_displayStatusBar_const_StringR_const_StringR(const char* winname, const char* text, ResultVoid* ocvrs_return) {
		try {
			cv::displayStatusBar(std::string(winname), std::string(text));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_displayStatusBar_const_StringR_const_StringR_int(const char* winname, const char* text, int delayms, ResultVoid* ocvrs_return) {
		try {
			cv::displayStatusBar(std::string(winname), std::string(text), delayms);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fontQt_const_StringR(const char* nameFont, Result<cv::QtFont*>* ocvrs_return) {
		try {
			cv::QtFont ret = cv::fontQt(std::string(nameFont));
			Ok(new cv::QtFont(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fontQt_const_StringR_int_Scalar_int_int_int(const char* nameFont, int pointSize, cv::Scalar* color, int weight, int style, int spacing, Result<cv::QtFont*>* ocvrs_return) {
		try {
			cv::QtFont ret = cv::fontQt(std::string(nameFont), pointSize, *color, weight, style, spacing);
			Ok(new cv::QtFont(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getMouseWheelDelta_int(int flags, Result<int>* ocvrs_return) {
		try {
			int ret = cv::getMouseWheelDelta(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getTrackbarPos_const_StringR_const_StringR(const char* trackbarname, const char* winname, Result<int>* ocvrs_return) {
		try {
			int ret = cv::getTrackbarPos(std::string(trackbarname), std::string(winname));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getWindowImageRect_const_StringR(const char* winname, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::getWindowImageRect(std::string(winname));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getWindowProperty_const_StringR_int(const char* winname, int prop_id, Result<double>* ocvrs_return) {
		try {
			double ret = cv::getWindowProperty(std::string(winname), prop_id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imshow_const_StringR_const__InputArrayR(const char* winname, const cv::_InputArray* mat, ResultVoid* ocvrs_return) {
		try {
			cv::imshow(std::string(winname), *mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_loadWindowParameters_const_StringR(const char* windowName, ResultVoid* ocvrs_return) {
		try {
			cv::loadWindowParameters(std::string(windowName));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_moveWindow_const_StringR_int_int(const char* winname, int x, int y, ResultVoid* ocvrs_return) {
		try {
			cv::moveWindow(std::string(winname), x, y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_namedWindow_const_StringR(const char* winname, ResultVoid* ocvrs_return) {
		try {
			cv::namedWindow(std::string(winname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_namedWindow_const_StringR_int(const char* winname, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::namedWindow(std::string(winname), flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_pollKey(Result<int>* ocvrs_return) {
		try {
			int ret = cv::pollKey();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_resizeWindow_const_StringR_const_SizeR(const char* winname, const cv::Size* size, ResultVoid* ocvrs_return) {
		try {
			cv::resizeWindow(std::string(winname), *size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_resizeWindow_const_StringR_int_int(const char* winname, int width, int height, ResultVoid* ocvrs_return) {
		try {
			cv::resizeWindow(std::string(winname), width, height);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_saveWindowParameters_const_StringR(const char* windowName, ResultVoid* ocvrs_return) {
		try {
			cv::saveWindowParameters(std::string(windowName));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_selectROI_const_StringR_const__InputArrayR(const char* windowName, const cv::_InputArray* img, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::selectROI(std::string(windowName), *img);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_selectROI_const_StringR_const__InputArrayR_bool_bool_bool(const char* windowName, const cv::_InputArray* img, bool showCrosshair, bool fromCenter, bool printNotice, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::selectROI(std::string(windowName), *img, showCrosshair, fromCenter, printNotice);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_selectROI_const__InputArrayR(const cv::_InputArray* img, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::selectROI(*img);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_selectROI_const__InputArrayR_bool_bool_bool(const cv::_InputArray* img, bool showCrosshair, bool fromCenter, bool printNotice, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::selectROI(*img, showCrosshair, fromCenter, printNotice);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_selectROIs_const_StringR_const__InputArrayR_vectorLRectGR(const char* windowName, const cv::_InputArray* img, std::vector<cv::Rect>* boundingBoxes, ResultVoid* ocvrs_return) {
		try {
			cv::selectROIs(std::string(windowName), *img, *boundingBoxes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_selectROIs_const_StringR_const__InputArrayR_vectorLRectGR_bool_bool_bool(const char* windowName, const cv::_InputArray* img, std::vector<cv::Rect>* boundingBoxes, bool showCrosshair, bool fromCenter, bool printNotice, ResultVoid* ocvrs_return) {
		try {
			cv::selectROIs(std::string(windowName), *img, *boundingBoxes, showCrosshair, fromCenter, printNotice);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setMouseCallback_const_StringR_MouseCallback_voidX(const char* winname, cv::MouseCallback onMouse, void* userdata, ResultVoid* ocvrs_return) {
		try {
			cv::setMouseCallback(std::string(winname), onMouse, userdata);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setOpenGlContext_const_StringR(const char* winname, ResultVoid* ocvrs_return) {
		try {
			cv::setOpenGlContext(std::string(winname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setOpenGlDrawCallback_const_StringR_OpenGlDrawCallback_voidX(const char* winname, cv::OpenGlDrawCallback onOpenGlDraw, void* userdata, ResultVoid* ocvrs_return) {
		try {
			cv::setOpenGlDrawCallback(std::string(winname), onOpenGlDraw, userdata);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setTrackbarMax_const_StringR_const_StringR_int(const char* trackbarname, const char* winname, int maxval, ResultVoid* ocvrs_return) {
		try {
			cv::setTrackbarMax(std::string(trackbarname), std::string(winname), maxval);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setTrackbarMin_const_StringR_const_StringR_int(const char* trackbarname, const char* winname, int minval, ResultVoid* ocvrs_return) {
		try {
			cv::setTrackbarMin(std::string(trackbarname), std::string(winname), minval);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setTrackbarPos_const_StringR_const_StringR_int(const char* trackbarname, const char* winname, int pos, ResultVoid* ocvrs_return) {
		try {
			cv::setTrackbarPos(std::string(trackbarname), std::string(winname), pos);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setWindowProperty_const_StringR_int_double(const char* winname, int prop_id, double prop_value, ResultVoid* ocvrs_return) {
		try {
			cv::setWindowProperty(std::string(winname), prop_id, prop_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setWindowTitle_const_StringR_const_StringR(const char* winname, const char* title, ResultVoid* ocvrs_return) {
		try {
			cv::setWindowTitle(std::string(winname), std::string(title));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_startLoop_int__X__int__charXX__int_charXX(int (*pt2Func)(int, char**), int argc, char** argv, Result<int>* ocvrs_return) {
		try {
			int ret = cv::startLoop(pt2Func, argc, argv);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_startWindowThread(Result<int>* ocvrs_return) {
		try {
			int ret = cv::startWindowThread();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stopLoop(ResultVoid* ocvrs_return) {
		try {
			cv::stopLoop();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_updateWindow_const_StringR(const char* winname, ResultVoid* ocvrs_return) {
		try {
			cv::updateWindow(std::string(winname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_waitKey(Result<int>* ocvrs_return) {
		try {
			int ret = cv::waitKey();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_waitKeyEx(Result<int>* ocvrs_return) {
		try {
			int ret = cv::waitKeyEx();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_waitKeyEx_int(int delay, Result<int>* ocvrs_return) {
		try {
			int ret = cv::waitKeyEx(delay);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_waitKey_int(int delay, Result<int>* ocvrs_return) {
		try {
			int ret = cv::waitKey(delay);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::QtFont* cv_QtFont_defaultNew_const() {
			cv::QtFont* ret = new cv::QtFont();
			return ret;
	}
	
	void* cv_QtFont_propNameFont_const(const cv::QtFont* instance) {
			const char* ret = instance->nameFont;
			return ocvrs_create_string(ret);
	}
	
	void cv_QtFont_propColor_const(const cv::QtFont* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->color;
			*ocvrs_return = ret;
	}
	
	void cv_QtFont_propColor_const_Scalar(cv::QtFont* instance, const cv::Scalar* val) {
			instance->color = *val;
	}
	
	int cv_QtFont_propFont_face_const(const cv::QtFont* instance) {
			int ret = instance->font_face;
			return ret;
	}
	
	void cv_QtFont_propFont_face_const_int(cv::QtFont* instance, const int val) {
			instance->font_face = val;
	}
	
	const int* cv_QtFont_propAscii_const(const cv::QtFont* instance) {
			const int* ret = instance->ascii;
			return ret;
	}
	
	const int* cv_QtFont_propGreek_const(const cv::QtFont* instance) {
			const int* ret = instance->greek;
			return ret;
	}
	
	const int* cv_QtFont_propCyrillic_const(const cv::QtFont* instance) {
			const int* ret = instance->cyrillic;
			return ret;
	}
	
	float cv_QtFont_propHscale_const(const cv::QtFont* instance) {
			float ret = instance->hscale;
			return ret;
	}
	
	void cv_QtFont_propHscale_const_float(cv::QtFont* instance, const float val) {
			instance->hscale = val;
	}
	
	float cv_QtFont_propVscale_const(const cv::QtFont* instance) {
			float ret = instance->vscale;
			return ret;
	}
	
	void cv_QtFont_propVscale_const_float(cv::QtFont* instance, const float val) {
			instance->vscale = val;
	}
	
	float cv_QtFont_propShear_const(const cv::QtFont* instance) {
			float ret = instance->shear;
			return ret;
	}
	
	void cv_QtFont_propShear_const_float(cv::QtFont* instance, const float val) {
			instance->shear = val;
	}
	
	int cv_QtFont_propThickness_const(const cv::QtFont* instance) {
			int ret = instance->thickness;
			return ret;
	}
	
	void cv_QtFont_propThickness_const_int(cv::QtFont* instance, const int val) {
			instance->thickness = val;
	}
	
	float cv_QtFont_propDx_const(const cv::QtFont* instance) {
			float ret = instance->dx;
			return ret;
	}
	
	void cv_QtFont_propDx_const_float(cv::QtFont* instance, const float val) {
			instance->dx = val;
	}
	
	int cv_QtFont_propLine_type_const(const cv::QtFont* instance) {
			int ret = instance->line_type;
			return ret;
	}
	
	void cv_QtFont_propLine_type_const_int(cv::QtFont* instance, const int val) {
			instance->line_type = val;
	}
	
	void cv_QtFont_delete(cv::QtFont* instance) {
			delete instance;
	}
	
}
