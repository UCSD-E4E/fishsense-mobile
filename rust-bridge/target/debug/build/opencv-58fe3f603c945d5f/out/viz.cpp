#include "ocvrs_common.hpp"
#include <opencv2/viz.hpp>
#include "viz_types.hpp"

extern "C" {
	void cv_viz_computeNormals_const_MeshR_const__OutputArrayR(const cv::viz::Mesh* mesh, const cv::_OutputArray* normals, ResultVoid* ocvrs_return) {
		try {
			cv::viz::computeNormals(*mesh, *normals);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_getWindowByName_const_StringR(const char* window_name, Result<cv::viz::Viz3d*>* ocvrs_return) {
		try {
			cv::viz::Viz3d ret = cv::viz::getWindowByName(std::string(window_name));
			Ok(new cv::viz::Viz3d(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_imshow_const_StringR_const__InputArrayR(const char* window_name, const cv::_InputArray* image, Result<cv::viz::Viz3d*>* ocvrs_return) {
		try {
			cv::viz::Viz3d ret = cv::viz::imshow(std::string(window_name), *image);
			Ok(new cv::viz::Viz3d(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_imshow_const_StringR_const__InputArrayR_const_SizeR(const char* window_name, const cv::_InputArray* image, const cv::Size* window_size, Result<cv::viz::Viz3d*>* ocvrs_return) {
		try {
			cv::viz::Viz3d ret = cv::viz::imshow(std::string(window_name), *image, *window_size);
			Ok(new cv::viz::Viz3d(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_makeCameraPose_const_Vec3dR_const_Vec3dR_const_Vec3dR(const cv::Vec3d* position, const cv::Vec3d* focal_point, const cv::Vec3d* y_dir, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = cv::viz::makeCameraPose(*position, *focal_point, *y_dir);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_makeTransformToGlobal_const_Vec3dR_const_Vec3dR_const_Vec3dR(const cv::Vec3d* axis_x, const cv::Vec3d* axis_y, const cv::Vec3d* axis_z, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = cv::viz::makeTransformToGlobal(*axis_x, *axis_y, *axis_z);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_makeTransformToGlobal_const_Vec3dR_const_Vec3dR_const_Vec3dR_const_Vec3dR(const cv::Vec3d* axis_x, const cv::Vec3d* axis_y, const cv::Vec3d* axis_z, const cv::Vec3d* origin, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = cv::viz::makeTransformToGlobal(*axis_x, *axis_y, *axis_z, *origin);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readCloud_const_StringR(const char* file, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::viz::readCloud(std::string(file));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readCloud_const_StringR_const__OutputArrayR_const__OutputArrayR(const char* file, const cv::_OutputArray* colors, const cv::_OutputArray* normals, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::viz::readCloud(std::string(file), *colors, *normals);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readMesh_const_StringR(const char* file, Result<cv::viz::Mesh*>* ocvrs_return) {
		try {
			cv::viz::Mesh ret = cv::viz::readMesh(std::string(file));
			Ok(new cv::viz::Mesh(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readPose_const_StringR_Affine3dR(const char* file, cv::Affine3d* pose, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::viz::readPose(std::string(file), *pose);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readPose_const_StringR_Affine3dR_const_StringR(const char* file, cv::Affine3d* pose, const char* tag, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::viz::readPose(std::string(file), *pose, std::string(tag));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readTrajectory_const__OutputArrayR(const cv::_OutputArray* traj, ResultVoid* ocvrs_return) {
		try {
			cv::viz::readTrajectory(*traj);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_readTrajectory_const__OutputArrayR_const_StringR_int_int_const_StringR(const cv::_OutputArray* traj, const char* files_format, int start, int end, const char* tag, ResultVoid* ocvrs_return) {
		try {
			cv::viz::readTrajectory(*traj, std::string(files_format), start, end, std::string(tag));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_unregisterAllWindows(ResultVoid* ocvrs_return) {
		try {
			cv::viz::unregisterAllWindows();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_writeCloud_const_StringR_const__InputArrayR(const char* file, const cv::_InputArray* cloud, ResultVoid* ocvrs_return) {
		try {
			cv::viz::writeCloud(std::string(file), *cloud);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_writeCloud_const_StringR_const__InputArrayR_const__InputArrayR_const__InputArrayR_bool(const char* file, const cv::_InputArray* cloud, const cv::_InputArray* colors, const cv::_InputArray* normals, bool binary, ResultVoid* ocvrs_return) {
		try {
			cv::viz::writeCloud(std::string(file), *cloud, *colors, *normals, binary);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_writePose_const_StringR_const_Affine3dR(const char* file, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			cv::viz::writePose(std::string(file), *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_writePose_const_StringR_const_Affine3dR_const_StringR(const char* file, const cv::Affine3d* pose, const char* tag, ResultVoid* ocvrs_return) {
		try {
			cv::viz::writePose(std::string(file), *pose, std::string(tag));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_writeTrajectory_const__InputArrayR(const cv::_InputArray* traj, ResultVoid* ocvrs_return) {
		try {
			cv::viz::writeTrajectory(*traj);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_writeTrajectory_const__InputArrayR_const_StringR_int_const_StringR(const cv::_InputArray* traj, const char* files_format, int start, const char* tag, ResultVoid* ocvrs_return) {
		try {
			cv::viz::writeTrajectory(*traj, std::string(files_format), start, std::string(tag));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_Camera_double_double_double_double_const_SizeR(double fx, double fy, double cx, double cy, const cv::Size* window_size, Result<cv::viz::Camera*>* ocvrs_return) {
		try {
			cv::viz::Camera* ret = new cv::viz::Camera(fx, fy, cx, cy, *window_size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_Camera_const_Vec2dR_const_SizeR(const cv::Vec2d* fov, const cv::Size* window_size, Result<cv::viz::Camera*>* ocvrs_return) {
		try {
			cv::viz::Camera* ret = new cv::viz::Camera(*fov, *window_size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_Camera_const_Matx33dR_const_SizeR(const cv::Matx33d* K, const cv::Size* window_size, Result<cv::viz::Camera*>* ocvrs_return) {
		try {
			cv::viz::Camera* ret = new cv::viz::Camera(*K, *window_size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_Camera_const_Matx44dR_const_SizeR(const cv::Matx44d* proj, const cv::Size* window_size, Result<cv::viz::Camera*>* ocvrs_return) {
		try {
			cv::viz::Camera* ret = new cv::viz::Camera(*proj, *window_size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_getClip_const(const cv::viz::Camera* instance, Result<cv::Vec2d>* ocvrs_return) {
		try {
			const cv::Vec2d ret = instance->getClip();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_setClip_const_Vec2dR(cv::viz::Camera* instance, const cv::Vec2d* clip, ResultVoid* ocvrs_return) {
		try {
			instance->setClip(*clip);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_getWindowSize_const(const cv::viz::Camera* instance, Result<cv::Size>* ocvrs_return) {
		try {
			const cv::Size ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_setWindowSize_const_SizeR(cv::viz::Camera* instance, const cv::Size* window_size, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowSize(*window_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_getFov_const(const cv::viz::Camera* instance, Result<cv::Vec2d>* ocvrs_return) {
		try {
			const cv::Vec2d ret = instance->getFov();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_setFov_const_Vec2dR(cv::viz::Camera* instance, const cv::Vec2d* fov, ResultVoid* ocvrs_return) {
		try {
			instance->setFov(*fov);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_getPrincipalPoint_const(const cv::viz::Camera* instance, Result<cv::Vec2d>* ocvrs_return) {
		try {
			const cv::Vec2d ret = instance->getPrincipalPoint();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_getFocalLength_const(const cv::viz::Camera* instance, Result<cv::Vec2d>* ocvrs_return) {
		try {
			const cv::Vec2d ret = instance->getFocalLength();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_computeProjectionMatrix_const_Matx44dR(const cv::viz::Camera* instance, cv::Matx44d* proj, ResultVoid* ocvrs_return) {
		try {
			instance->computeProjectionMatrix(*proj);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_KinectCamera_const_SizeR(const cv::Size* window_size, Result<cv::viz::Camera*>* ocvrs_return) {
		try {
			cv::viz::Camera ret = cv::viz::Camera::KinectCamera(*window_size);
			Ok(new cv::viz::Camera(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Camera_delete(cv::viz::Camera* instance) {
			delete instance;
	}
	
	void cv_viz_Color_Color(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color* ret = new cv::viz::Color();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_Color_double(double gray, Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color* ret = new cv::viz::Color(gray);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_Color_double_double_double(double blue, double green, double red, Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color* ret = new cv::viz::Color(blue, green, red);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_Color_const_ScalarR(const cv::Scalar* color, Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color* ret = new cv::viz::Color(*color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_operator_cv_Vec3b_const(const cv::viz::Color* instance, Result<cv::Vec3b>* ocvrs_return) {
		try {
			cv::Vec3b ret = instance->operator cv::Vec3b();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_black(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::black();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_blue(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::blue();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_green(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::green();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_red(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::red();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_cyan(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::cyan();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_yellow(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::yellow();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_magenta(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::magenta();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_white(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::white();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_gray(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::gray();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_silver(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::silver();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_mlab(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::mlab();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_navy(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::navy();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_maroon(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::maroon();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_teal(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::teal();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_olive(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::olive();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_purple(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::purple();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_azure(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::azure();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_chartreuse(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::chartreuse();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_rose(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::rose();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_lime(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::lime();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_gold(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::gold();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_orange(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::orange();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_orange_red(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::orange_red();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_indigo(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::indigo();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_brown(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::brown();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_apricot(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::apricot();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_pink(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::pink();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_raspberry(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::raspberry();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_cherry(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::cherry();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_violet(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::violet();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_amethyst(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::amethyst();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_bluberry(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::bluberry();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_celestial_blue(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::celestial_blue();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_turquoise(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::turquoise();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_not_set(Result<cv::viz::Color*>* ocvrs_return) {
		try {
			cv::viz::Color ret = cv::viz::Color::not_set();
			Ok(new cv::viz::Color(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Color_delete(cv::viz::Color* instance) {
			delete instance;
	}
	
	void cv_viz_KeyboardEvent_KeyboardEvent_Action_const_StringR_unsigned_char_int(cv::viz::KeyboardEvent::Action action, const char* symbol, unsigned char code, int modifiers, Result<cv::viz::KeyboardEvent*>* ocvrs_return) {
		try {
			cv::viz::KeyboardEvent* ret = new cv::viz::KeyboardEvent(action, std::string(symbol), code, modifiers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_KeyboardEvent_propAction_const(const cv::viz::KeyboardEvent* instance, cv::viz::KeyboardEvent::Action* ocvrs_return) {
			cv::viz::KeyboardEvent::Action ret = instance->action;
			*ocvrs_return = ret;
	}
	
	void cv_viz_KeyboardEvent_propAction_const_Action(cv::viz::KeyboardEvent* instance, const cv::viz::KeyboardEvent::Action val) {
			instance->action = val;
	}
	
	void* cv_viz_KeyboardEvent_propSymbol_const(const cv::viz::KeyboardEvent* instance) {
			cv::String ret = instance->symbol;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_viz_KeyboardEvent_propSymbol_const_String(cv::viz::KeyboardEvent* instance, const char* val) {
			instance->symbol = std::string(val);
	}
	
	unsigned char cv_viz_KeyboardEvent_propCode_const(const cv::viz::KeyboardEvent* instance) {
			unsigned char ret = instance->code;
			return ret;
	}
	
	void cv_viz_KeyboardEvent_propCode_const_unsigned_char(cv::viz::KeyboardEvent* instance, const unsigned char val) {
			instance->code = val;
	}
	
	int cv_viz_KeyboardEvent_propModifiers_const(const cv::viz::KeyboardEvent* instance) {
			int ret = instance->modifiers;
			return ret;
	}
	
	void cv_viz_KeyboardEvent_propModifiers_const_int(cv::viz::KeyboardEvent* instance, const int val) {
			instance->modifiers = val;
	}
	
	void cv_viz_KeyboardEvent_delete(cv::viz::KeyboardEvent* instance) {
			delete instance;
	}
	
	void cv_viz_Mesh_Mesh(Result<cv::viz::Mesh*>* ocvrs_return) {
		try {
			cv::viz::Mesh* ret = new cv::viz::Mesh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Mesh_load_const_StringR_int(const char* file, int type, Result<cv::viz::Mesh*>* ocvrs_return) {
		try {
			cv::viz::Mesh ret = cv::viz::Mesh::load(std::string(file), type);
			Ok(new cv::viz::Mesh(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Mesh_load_const_StringR(const char* file, Result<cv::viz::Mesh*>* ocvrs_return) {
		try {
			cv::viz::Mesh ret = cv::viz::Mesh::load(std::string(file));
			Ok(new cv::viz::Mesh(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Mesh* cv_viz_Mesh_implicitClone_const(const cv::viz::Mesh* instance) {
			return new cv::viz::Mesh(*instance);
	}
	
	cv::Mat* cv_viz_Mesh_propCloud_const(const cv::viz::Mesh* instance) {
			cv::Mat ret = instance->cloud;
			return new cv::Mat(ret);
	}
	
	void cv_viz_Mesh_propCloud_const_Mat(cv::viz::Mesh* instance, const cv::Mat* val) {
			instance->cloud = *val;
	}
	
	cv::Mat* cv_viz_Mesh_propColors_const(const cv::viz::Mesh* instance) {
			cv::Mat ret = instance->colors;
			return new cv::Mat(ret);
	}
	
	void cv_viz_Mesh_propColors_const_Mat(cv::viz::Mesh* instance, const cv::Mat* val) {
			instance->colors = *val;
	}
	
	cv::Mat* cv_viz_Mesh_propNormals_const(const cv::viz::Mesh* instance) {
			cv::Mat ret = instance->normals;
			return new cv::Mat(ret);
	}
	
	void cv_viz_Mesh_propNormals_const_Mat(cv::viz::Mesh* instance, const cv::Mat* val) {
			instance->normals = *val;
	}
	
	cv::Mat* cv_viz_Mesh_propPolygons_const(const cv::viz::Mesh* instance) {
			cv::Mat ret = instance->polygons;
			return new cv::Mat(ret);
	}
	
	void cv_viz_Mesh_propPolygons_const_Mat(cv::viz::Mesh* instance, const cv::Mat* val) {
			instance->polygons = *val;
	}
	
	cv::Mat* cv_viz_Mesh_propTexture_const(const cv::viz::Mesh* instance) {
			cv::Mat ret = instance->texture;
			return new cv::Mat(ret);
	}
	
	void cv_viz_Mesh_propTexture_const_Mat(cv::viz::Mesh* instance, const cv::Mat* val) {
			instance->texture = *val;
	}
	
	cv::Mat* cv_viz_Mesh_propTcoords_const(const cv::viz::Mesh* instance) {
			cv::Mat ret = instance->tcoords;
			return new cv::Mat(ret);
	}
	
	void cv_viz_Mesh_propTcoords_const_Mat(cv::viz::Mesh* instance, const cv::Mat* val) {
			instance->tcoords = *val;
	}
	
	void cv_viz_Mesh_delete(cv::viz::Mesh* instance) {
			delete instance;
	}
	
	void cv_viz_MouseEvent_MouseEvent_const_TypeR_const_MouseButtonR_const_PointR_int(const cv::viz::MouseEvent::Type type, const cv::viz::MouseEvent::MouseButton button, const cv::Point* pointer, int modifiers, Result<cv::viz::MouseEvent*>* ocvrs_return) {
		try {
			cv::viz::MouseEvent* ret = new cv::viz::MouseEvent(type, button, *pointer, modifiers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_MouseEvent_propType_const(const cv::viz::MouseEvent* instance, cv::viz::MouseEvent::Type* ocvrs_return) {
			cv::viz::MouseEvent::Type ret = instance->type;
			*ocvrs_return = ret;
	}
	
	void cv_viz_MouseEvent_propType_const_Type(cv::viz::MouseEvent* instance, const cv::viz::MouseEvent::Type val) {
			instance->type = val;
	}
	
	void cv_viz_MouseEvent_propButton_const(const cv::viz::MouseEvent* instance, cv::viz::MouseEvent::MouseButton* ocvrs_return) {
			cv::viz::MouseEvent::MouseButton ret = instance->button;
			*ocvrs_return = ret;
	}
	
	void cv_viz_MouseEvent_propButton_const_MouseButton(cv::viz::MouseEvent* instance, const cv::viz::MouseEvent::MouseButton val) {
			instance->button = val;
	}
	
	void cv_viz_MouseEvent_propPointer_const(const cv::viz::MouseEvent* instance, cv::Point* ocvrs_return) {
			cv::Point ret = instance->pointer;
			*ocvrs_return = ret;
	}
	
	void cv_viz_MouseEvent_propPointer_const_Point(cv::viz::MouseEvent* instance, const cv::Point* val) {
			instance->pointer = *val;
	}
	
	int cv_viz_MouseEvent_propModifiers_const(const cv::viz::MouseEvent* instance) {
			int ret = instance->modifiers;
			return ret;
	}
	
	void cv_viz_MouseEvent_propModifiers_const_int(cv::viz::MouseEvent* instance, const int val) {
			instance->modifiers = val;
	}
	
	void cv_viz_MouseEvent_delete(cv::viz::MouseEvent* instance) {
			delete instance;
	}
	
	void cv_viz_Viz3d_Viz3d_const_StringR(const char* window_name, Result<cv::viz::Viz3d*>* ocvrs_return) {
		try {
			cv::viz::Viz3d* ret = new cv::viz::Viz3d(std::string(window_name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_Viz3d(Result<cv::viz::Viz3d*>* ocvrs_return) {
		try {
			cv::viz::Viz3d* ret = new cv::viz::Viz3d();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_Viz3d_const_Viz3dR(const cv::viz::Viz3d* unnamed, Result<cv::viz::Viz3d*>* ocvrs_return) {
		try {
			cv::viz::Viz3d* ret = new cv::viz::Viz3d(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_operatorST_const_Viz3dR(cv::viz::Viz3d* instance, const cv::viz::Viz3d* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_showWidget_const_StringR_const_WidgetR_const_Affine3dR(cv::viz::Viz3d* instance, const char* id, const cv::viz::Widget* widget, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->showWidget(std::string(id), *widget, *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_showWidget_const_StringR_const_WidgetR(cv::viz::Viz3d* instance, const char* id, const cv::viz::Widget* widget, ResultVoid* ocvrs_return) {
		try {
			instance->showWidget(std::string(id), *widget);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_removeWidget_const_StringR(cv::viz::Viz3d* instance, const char* id, ResultVoid* ocvrs_return) {
		try {
			instance->removeWidget(std::string(id));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getWidget_const_const_StringR(const cv::viz::Viz3d* instance, const char* id, Result<cv::viz::Widget*>* ocvrs_return) {
		try {
			cv::viz::Widget ret = instance->getWidget(std::string(id));
			Ok(new cv::viz::Widget(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_removeAllWidgets(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->removeAllWidgets();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_showImage_const__InputArrayR_const_SizeR(cv::viz::Viz3d* instance, const cv::_InputArray* image, const cv::Size* window_size, ResultVoid* ocvrs_return) {
		try {
			instance->showImage(*image, *window_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_showImage_const__InputArrayR(cv::viz::Viz3d* instance, const cv::_InputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->showImage(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setWidgetPose_const_StringR_const_Affine3dR(cv::viz::Viz3d* instance, const char* id, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->setWidgetPose(std::string(id), *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_updateWidgetPose_const_StringR_const_Affine3dR(cv::viz::Viz3d* instance, const char* id, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->updateWidgetPose(std::string(id), *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getWidgetPose_const_const_StringR(const cv::viz::Viz3d* instance, const char* id, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = instance->getWidgetPose(std::string(id));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setCamera_const_CameraR(cv::viz::Viz3d* instance, const cv::viz::Camera* camera, ResultVoid* ocvrs_return) {
		try {
			instance->setCamera(*camera);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getCamera_const(const cv::viz::Viz3d* instance, Result<cv::viz::Camera*>* ocvrs_return) {
		try {
			cv::viz::Camera ret = instance->getCamera();
			Ok(new cv::viz::Camera(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getViewerPose_const(const cv::viz::Viz3d* instance, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = instance->getViewerPose();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setViewerPose_const_Affine3dR(cv::viz::Viz3d* instance, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->setViewerPose(*pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_resetCameraViewpoint_const_StringR(cv::viz::Viz3d* instance, const char* id, ResultVoid* ocvrs_return) {
		try {
			instance->resetCameraViewpoint(std::string(id));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_resetCamera(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->resetCamera();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_convertToWindowCoordinates_const_Point3dR_Point3dR(cv::viz::Viz3d* instance, const cv::Point3d* pt, cv::Point3d* window_coord, ResultVoid* ocvrs_return) {
		try {
			instance->convertToWindowCoordinates(*pt, *window_coord);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_converTo3DRay_const_Point3dR_Point3dR_Vec3dR(cv::viz::Viz3d* instance, const cv::Point3d* window_coord, cv::Point3d* origin, cv::Vec3d* direction, ResultVoid* ocvrs_return) {
		try {
			instance->converTo3DRay(*window_coord, *origin, *direction);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getWindowSize_const(const cv::viz::Viz3d* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setWindowSize_const_SizeR(cv::viz::Viz3d* instance, const cv::Size* window_size, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowSize(*window_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getWindowName_const(const cv::viz::Viz3d* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getWindowName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getScreenshot_const(const cv::viz::Viz3d* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getScreenshot();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_saveScreenshot_const_StringR(cv::viz::Viz3d* instance, const char* file, ResultVoid* ocvrs_return) {
		try {
			instance->saveScreenshot(std::string(file));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setWindowPosition_const_PointR(cv::viz::Viz3d* instance, const cv::Point* window_position, ResultVoid* ocvrs_return) {
		try {
			instance->setWindowPosition(*window_position);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setFullScreen_bool(cv::viz::Viz3d* instance, bool mode, ResultVoid* ocvrs_return) {
		try {
			instance->setFullScreen(mode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setFullScreen(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setFullScreen();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setBackgroundColor_const_ColorR_const_ColorR(cv::viz::Viz3d* instance, const cv::viz::Viz3d::Color* color, const cv::viz::Viz3d::Color* color2, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundColor(*color, *color2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setBackgroundColor(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundColor();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setBackgroundTexture_const__InputArrayR(cv::viz::Viz3d* instance, const cv::_InputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundTexture(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setBackgroundTexture(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundTexture();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setBackgroundMeshLab(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setBackgroundMeshLab();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_spin(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->spin();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_spinOnce_int_bool(cv::viz::Viz3d* instance, int time, bool force_redraw, ResultVoid* ocvrs_return) {
		try {
			instance->spinOnce(time, force_redraw);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_spinOnce(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->spinOnce();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setOffScreenRendering(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setOffScreenRendering();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_removeAllLights(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->removeAllLights();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_addLight_const_Vec3dR_const_Vec3dR_const_ColorR_const_ColorR_const_ColorR_const_ColorR(cv::viz::Viz3d* instance, const cv::Vec3d* position, const cv::Vec3d* focalPoint, const cv::viz::Viz3d::Color* color, const cv::viz::Viz3d::Color* diffuseColor, const cv::viz::Viz3d::Color* ambientColor, const cv::viz::Viz3d::Color* specularColor, ResultVoid* ocvrs_return) {
		try {
			instance->addLight(*position, *focalPoint, *color, *diffuseColor, *ambientColor, *specularColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_addLight_const_Vec3dR(cv::viz::Viz3d* instance, const cv::Vec3d* position, ResultVoid* ocvrs_return) {
		try {
			instance->addLight(*position);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_wasStopped_const(const cv::viz::Viz3d* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->wasStopped();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_close(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->close();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_registerKeyboardCallback_KeyboardCallback_voidX(cv::viz::Viz3d* instance, cv::viz::Viz3d::KeyboardCallback callback, void* cookie, ResultVoid* ocvrs_return) {
		try {
			instance->registerKeyboardCallback(callback, cookie);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_registerMouseCallback_MouseCallback_voidX(cv::viz::Viz3d* instance, cv::viz::Viz3d::MouseCallback callback, void* cookie, ResultVoid* ocvrs_return) {
		try {
			instance->registerMouseCallback(callback, cookie);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setRenderingProperty_const_StringR_int_double(cv::viz::Viz3d* instance, const char* id, int property, double value, ResultVoid* ocvrs_return) {
		try {
			instance->setRenderingProperty(std::string(id), property, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_getRenderingProperty_const_StringR_int(cv::viz::Viz3d* instance, const char* id, int property, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getRenderingProperty(std::string(id), property);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setRepresentation_int(cv::viz::Viz3d* instance, int representation, ResultVoid* ocvrs_return) {
		try {
			instance->setRepresentation(representation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setGlobalWarnings_bool(cv::viz::Viz3d* instance, bool enabled, ResultVoid* ocvrs_return) {
		try {
			instance->setGlobalWarnings(enabled);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_setGlobalWarnings(cv::viz::Viz3d* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setGlobalWarnings();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Viz3d_delete(cv::viz::Viz3d* instance) {
			delete instance;
	}
	
	void cv_viz_WArrow_WArrow_const_Point3dR_const_Point3dR_double_const_ColorR(const cv::Point3d* pt1, const cv::Point3d* pt2, double thickness, const cv::viz::Color* color, Result<cv::viz::WArrow*>* ocvrs_return) {
		try {
			cv::viz::WArrow* ret = new cv::viz::WArrow(*pt1, *pt2, thickness, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WArrow_WArrow_const_Point3dR_const_Point3dR(const cv::Point3d* pt1, const cv::Point3d* pt2, Result<cv::viz::WArrow*>* ocvrs_return) {
		try {
			cv::viz::WArrow* ret = new cv::viz::WArrow(*pt1, *pt2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WArrow_to_Widget(cv::viz::WArrow* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WArrow_to_Widget3D(cv::viz::WArrow* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WArrow_delete(cv::viz::WArrow* instance) {
			delete instance;
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_double(double scale, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition(Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Matx33dR_double_const_ColorR(const cv::Matx33d* K, double scale, const cv::viz::Color* color, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*K, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Matx33dR(const cv::Matx33d* K, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*K);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Vec2dR_double_const_ColorR(const cv::Vec2d* fov, double scale, const cv::viz::Color* color, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*fov, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Vec2dR(const cv::Vec2d* fov, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*fov);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Matx33dR_const__InputArrayR_double_const_ColorR(const cv::Matx33d* K, const cv::_InputArray* image, double scale, const cv::viz::Color* color, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*K, *image, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Matx33dR_const__InputArrayR(const cv::Matx33d* K, const cv::_InputArray* image, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*K, *image);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Vec2dR_const__InputArrayR_double_const_ColorR(const cv::Vec2d* fov, const cv::_InputArray* image, double scale, const cv::viz::Color* color, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*fov, *image, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCameraPosition_WCameraPosition_const_Vec2dR_const__InputArrayR(const cv::Vec2d* fov, const cv::_InputArray* image, Result<cv::viz::WCameraPosition*>* ocvrs_return) {
		try {
			cv::viz::WCameraPosition* ret = new cv::viz::WCameraPosition(*fov, *image);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCameraPosition_to_Widget(cv::viz::WCameraPosition* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCameraPosition_to_Widget3D(cv::viz::WCameraPosition* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCameraPosition_delete(cv::viz::WCameraPosition* instance) {
			delete instance;
	}
	
	void cv_viz_WCircle_WCircle_double_double_const_ColorR(double radius, double thickness, const cv::viz::Color* color, Result<cv::viz::WCircle*>* ocvrs_return) {
		try {
			cv::viz::WCircle* ret = new cv::viz::WCircle(radius, thickness, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCircle_WCircle_double(double radius, Result<cv::viz::WCircle*>* ocvrs_return) {
		try {
			cv::viz::WCircle* ret = new cv::viz::WCircle(radius);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCircle_WCircle_double_const_Point3dR_const_Vec3dR_double_const_ColorR(double radius, const cv::Point3d* center, const cv::Vec3d* normal, double thickness, const cv::viz::Color* color, Result<cv::viz::WCircle*>* ocvrs_return) {
		try {
			cv::viz::WCircle* ret = new cv::viz::WCircle(radius, *center, *normal, thickness, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCircle_WCircle_double_const_Point3dR_const_Vec3dR(double radius, const cv::Point3d* center, const cv::Vec3d* normal, Result<cv::viz::WCircle*>* ocvrs_return) {
		try {
			cv::viz::WCircle* ret = new cv::viz::WCircle(radius, *center, *normal);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCircle_to_Widget(cv::viz::WCircle* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCircle_to_Widget3D(cv::viz::WCircle* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCircle_delete(cv::viz::WCircle* instance) {
			delete instance;
	}
	
	void cv_viz_WCloud_WCloud_const__InputArrayR_const__InputArrayR(const cv::_InputArray* cloud, const cv::_InputArray* colors, Result<cv::viz::WCloud*>* ocvrs_return) {
		try {
			cv::viz::WCloud* ret = new cv::viz::WCloud(*cloud, *colors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloud_WCloud_const__InputArrayR_const_ColorR(const cv::_InputArray* cloud, const cv::viz::Color* color, Result<cv::viz::WCloud*>* ocvrs_return) {
		try {
			cv::viz::WCloud* ret = new cv::viz::WCloud(*cloud, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloud_WCloud_const__InputArrayR(const cv::_InputArray* cloud, Result<cv::viz::WCloud*>* ocvrs_return) {
		try {
			cv::viz::WCloud* ret = new cv::viz::WCloud(*cloud);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloud_WCloud_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* cloud, const cv::_InputArray* colors, const cv::_InputArray* normals, Result<cv::viz::WCloud*>* ocvrs_return) {
		try {
			cv::viz::WCloud* ret = new cv::viz::WCloud(*cloud, *colors, *normals);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloud_WCloud_const__InputArrayR_const_ColorR_const__InputArrayR(const cv::_InputArray* cloud, const cv::viz::Color* color, const cv::_InputArray* normals, Result<cv::viz::WCloud*>* ocvrs_return) {
		try {
			cv::viz::WCloud* ret = new cv::viz::WCloud(*cloud, *color, *normals);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCloud_to_Widget(cv::viz::WCloud* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCloud_to_Widget3D(cv::viz::WCloud* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCloud_delete(cv::viz::WCloud* instance) {
			delete instance;
	}
	
	void cv_viz_WCloudCollection_WCloudCollection(Result<cv::viz::WCloudCollection*>* ocvrs_return) {
		try {
			cv::viz::WCloudCollection* ret = new cv::viz::WCloudCollection();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloudCollection_addCloud_const__InputArrayR_const__InputArrayR_const_Affine3dR(cv::viz::WCloudCollection* instance, const cv::_InputArray* cloud, const cv::_InputArray* colors, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->addCloud(*cloud, *colors, *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloudCollection_addCloud_const__InputArrayR_const__InputArrayR(cv::viz::WCloudCollection* instance, const cv::_InputArray* cloud, const cv::_InputArray* colors, ResultVoid* ocvrs_return) {
		try {
			instance->addCloud(*cloud, *colors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloudCollection_addCloud_const__InputArrayR_const_ColorR_const_Affine3dR(cv::viz::WCloudCollection* instance, const cv::_InputArray* cloud, const cv::viz::Color* color, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->addCloud(*cloud, *color, *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloudCollection_addCloud_const__InputArrayR(cv::viz::WCloudCollection* instance, const cv::_InputArray* cloud, ResultVoid* ocvrs_return) {
		try {
			instance->addCloud(*cloud);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloudCollection_finalize(cv::viz::WCloudCollection* instance, ResultVoid* ocvrs_return) {
		try {
			instance->finalize();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCloudCollection_to_Widget(cv::viz::WCloudCollection* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCloudCollection_to_Widget3D(cv::viz::WCloudCollection* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCloudCollection_delete(cv::viz::WCloudCollection* instance) {
			delete instance;
	}
	
	void cv_viz_WCloudNormals_WCloudNormals_const__InputArrayR_const__InputArrayR_int_double_const_ColorR(const cv::_InputArray* cloud, const cv::_InputArray* normals, int level, double scale, const cv::viz::Color* color, Result<cv::viz::WCloudNormals*>* ocvrs_return) {
		try {
			cv::viz::WCloudNormals* ret = new cv::viz::WCloudNormals(*cloud, *normals, level, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCloudNormals_WCloudNormals_const__InputArrayR_const__InputArrayR(const cv::_InputArray* cloud, const cv::_InputArray* normals, Result<cv::viz::WCloudNormals*>* ocvrs_return) {
		try {
			cv::viz::WCloudNormals* ret = new cv::viz::WCloudNormals(*cloud, *normals);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCloudNormals_to_Widget(cv::viz::WCloudNormals* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCloudNormals_to_Widget3D(cv::viz::WCloudNormals* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCloudNormals_delete(cv::viz::WCloudNormals* instance) {
			delete instance;
	}
	
	void cv_viz_WCone_WCone_double_double_int_const_ColorR(double length, double radius, int resolution, const cv::viz::Color* color, Result<cv::viz::WCone*>* ocvrs_return) {
		try {
			cv::viz::WCone* ret = new cv::viz::WCone(length, radius, resolution, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCone_WCone_double_double(double length, double radius, Result<cv::viz::WCone*>* ocvrs_return) {
		try {
			cv::viz::WCone* ret = new cv::viz::WCone(length, radius);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCone_WCone_double_const_Point3dR_const_Point3dR_int_const_ColorR(double radius, const cv::Point3d* center, const cv::Point3d* tip, int resolution, const cv::viz::Color* color, Result<cv::viz::WCone*>* ocvrs_return) {
		try {
			cv::viz::WCone* ret = new cv::viz::WCone(radius, *center, *tip, resolution, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCone_WCone_double_const_Point3dR_const_Point3dR(double radius, const cv::Point3d* center, const cv::Point3d* tip, Result<cv::viz::WCone*>* ocvrs_return) {
		try {
			cv::viz::WCone* ret = new cv::viz::WCone(radius, *center, *tip);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCone_to_Widget(cv::viz::WCone* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCone_to_Widget3D(cv::viz::WCone* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCone_delete(cv::viz::WCone* instance) {
			delete instance;
	}
	
	void cv_viz_WCoordinateSystem_WCoordinateSystem_double(double scale, Result<cv::viz::WCoordinateSystem*>* ocvrs_return) {
		try {
			cv::viz::WCoordinateSystem* ret = new cv::viz::WCoordinateSystem(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCoordinateSystem_WCoordinateSystem(Result<cv::viz::WCoordinateSystem*>* ocvrs_return) {
		try {
			cv::viz::WCoordinateSystem* ret = new cv::viz::WCoordinateSystem();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCoordinateSystem_to_Widget(cv::viz::WCoordinateSystem* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCoordinateSystem_to_Widget3D(cv::viz::WCoordinateSystem* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCoordinateSystem_delete(cv::viz::WCoordinateSystem* instance) {
			delete instance;
	}
	
	void cv_viz_WCube_WCube_const_Point3dR_const_Point3dR_bool_const_ColorR(const cv::Point3d* min_point, const cv::Point3d* max_point, bool wire_frame, const cv::viz::Color* color, Result<cv::viz::WCube*>* ocvrs_return) {
		try {
			cv::viz::WCube* ret = new cv::viz::WCube(*min_point, *max_point, wire_frame, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCube_WCube(Result<cv::viz::WCube*>* ocvrs_return) {
		try {
			cv::viz::WCube* ret = new cv::viz::WCube();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCube_to_Widget(cv::viz::WCube* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCube_to_Widget3D(cv::viz::WCube* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCube_delete(cv::viz::WCube* instance) {
			delete instance;
	}
	
	void cv_viz_WCylinder_WCylinder_const_Point3dR_const_Point3dR_double_int_const_ColorR(const cv::Point3d* axis_point1, const cv::Point3d* axis_point2, double radius, int numsides, const cv::viz::Color* color, Result<cv::viz::WCylinder*>* ocvrs_return) {
		try {
			cv::viz::WCylinder* ret = new cv::viz::WCylinder(*axis_point1, *axis_point2, radius, numsides, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WCylinder_WCylinder_const_Point3dR_const_Point3dR_double(const cv::Point3d* axis_point1, const cv::Point3d* axis_point2, double radius, Result<cv::viz::WCylinder*>* ocvrs_return) {
		try {
			cv::viz::WCylinder* ret = new cv::viz::WCylinder(*axis_point1, *axis_point2, radius);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WCylinder_to_Widget(cv::viz::WCylinder* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WCylinder_to_Widget3D(cv::viz::WCylinder* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WCylinder_delete(cv::viz::WCylinder* instance) {
			delete instance;
	}
	
	void cv_viz_WGrid_WGrid_const_Vec2iR_const_Vec2dR_const_ColorR(const cv::Vec2i* cells, const cv::Vec2d* cells_spacing, const cv::viz::Color* color, Result<cv::viz::WGrid*>* ocvrs_return) {
		try {
			cv::viz::WGrid* ret = new cv::viz::WGrid(*cells, *cells_spacing, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WGrid_WGrid(Result<cv::viz::WGrid*>* ocvrs_return) {
		try {
			cv::viz::WGrid* ret = new cv::viz::WGrid();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WGrid_WGrid_const_Point3dR_const_Vec3dR_const_Vec3dR_const_Vec2iR_const_Vec2dR_const_ColorR(const cv::Point3d* center, const cv::Vec3d* normal, const cv::Vec3d* new_yaxis, const cv::Vec2i* cells, const cv::Vec2d* cells_spacing, const cv::viz::Color* color, Result<cv::viz::WGrid*>* ocvrs_return) {
		try {
			cv::viz::WGrid* ret = new cv::viz::WGrid(*center, *normal, *new_yaxis, *cells, *cells_spacing, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WGrid_WGrid_const_Point3dR_const_Vec3dR_const_Vec3dR(const cv::Point3d* center, const cv::Vec3d* normal, const cv::Vec3d* new_yaxis, Result<cv::viz::WGrid*>* ocvrs_return) {
		try {
			cv::viz::WGrid* ret = new cv::viz::WGrid(*center, *normal, *new_yaxis);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WGrid_to_Widget(cv::viz::WGrid* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WGrid_to_Widget3D(cv::viz::WGrid* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WGrid_delete(cv::viz::WGrid* instance) {
			delete instance;
	}
	
	void cv_viz_WImage3D_WImage3D_const__InputArrayR_const_Size2dR(const cv::_InputArray* image, const cv::Size2d* size, Result<cv::viz::WImage3D*>* ocvrs_return) {
		try {
			cv::viz::WImage3D* ret = new cv::viz::WImage3D(*image, *size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WImage3D_WImage3D_const__InputArrayR_const_Size2dR_const_Vec3dR_const_Vec3dR_const_Vec3dR(const cv::_InputArray* image, const cv::Size2d* size, const cv::Vec3d* center, const cv::Vec3d* normal, const cv::Vec3d* up_vector, Result<cv::viz::WImage3D*>* ocvrs_return) {
		try {
			cv::viz::WImage3D* ret = new cv::viz::WImage3D(*image, *size, *center, *normal, *up_vector);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WImage3D_setImage_const__InputArrayR(cv::viz::WImage3D* instance, const cv::_InputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->setImage(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WImage3D_setSize_const_SizeR(cv::viz::WImage3D* instance, const cv::Size* size, ResultVoid* ocvrs_return) {
		try {
			instance->setSize(*size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WImage3D_to_Widget(cv::viz::WImage3D* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WImage3D_to_Widget3D(cv::viz::WImage3D* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WImage3D_delete(cv::viz::WImage3D* instance) {
			delete instance;
	}
	
	void cv_viz_WImageOverlay_WImageOverlay_const__InputArrayR_const_RectR(const cv::_InputArray* image, const cv::Rect* rect, Result<cv::viz::WImageOverlay*>* ocvrs_return) {
		try {
			cv::viz::WImageOverlay* ret = new cv::viz::WImageOverlay(*image, *rect);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WImageOverlay_setImage_const__InputArrayR(cv::viz::WImageOverlay* instance, const cv::_InputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->setImage(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WImageOverlay_to_Widget(cv::viz::WImageOverlay* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget2D* cv_viz_WImageOverlay_to_Widget2D(cv::viz::WImageOverlay* instance) {
			return dynamic_cast<cv::viz::Widget2D*>(instance);
	}
	
	void cv_viz_WImageOverlay_delete(cv::viz::WImageOverlay* instance) {
			delete instance;
	}
	
	void cv_viz_WLine_WLine_const_Point3dR_const_Point3dR_const_ColorR(const cv::Point3d* pt1, const cv::Point3d* pt2, const cv::viz::Color* color, Result<cv::viz::WLine*>* ocvrs_return) {
		try {
			cv::viz::WLine* ret = new cv::viz::WLine(*pt1, *pt2, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WLine_WLine_const_Point3dR_const_Point3dR(const cv::Point3d* pt1, const cv::Point3d* pt2, Result<cv::viz::WLine*>* ocvrs_return) {
		try {
			cv::viz::WLine* ret = new cv::viz::WLine(*pt1, *pt2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WLine_to_Widget(cv::viz::WLine* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WLine_to_Widget3D(cv::viz::WLine* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WLine_delete(cv::viz::WLine* instance) {
			delete instance;
	}
	
	void cv_viz_WMesh_WMesh_const_MeshR(const cv::viz::Mesh* mesh, Result<cv::viz::WMesh*>* ocvrs_return) {
		try {
			cv::viz::WMesh* ret = new cv::viz::WMesh(*mesh);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WMesh_WMesh_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* cloud, const cv::_InputArray* polygons, const cv::_InputArray* colors, const cv::_InputArray* normals, Result<cv::viz::WMesh*>* ocvrs_return) {
		try {
			cv::viz::WMesh* ret = new cv::viz::WMesh(*cloud, *polygons, *colors, *normals);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WMesh_WMesh_const__InputArrayR_const__InputArrayR(const cv::_InputArray* cloud, const cv::_InputArray* polygons, Result<cv::viz::WMesh*>* ocvrs_return) {
		try {
			cv::viz::WMesh* ret = new cv::viz::WMesh(*cloud, *polygons);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WMesh_to_Widget(cv::viz::WMesh* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WMesh_to_Widget3D(cv::viz::WMesh* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WMesh_delete(cv::viz::WMesh* instance) {
			delete instance;
	}
	
	void cv_viz_WPaintedCloud_WPaintedCloud_const__InputArrayR(const cv::_InputArray* cloud, Result<cv::viz::WPaintedCloud*>* ocvrs_return) {
		try {
			cv::viz::WPaintedCloud* ret = new cv::viz::WPaintedCloud(*cloud);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPaintedCloud_WPaintedCloud_const__InputArrayR_const_Point3dR_const_Point3dR(const cv::_InputArray* cloud, const cv::Point3d* p1, const cv::Point3d* p2, Result<cv::viz::WPaintedCloud*>* ocvrs_return) {
		try {
			cv::viz::WPaintedCloud* ret = new cv::viz::WPaintedCloud(*cloud, *p1, *p2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPaintedCloud_WPaintedCloud_const__InputArrayR_const_Point3dR_const_Point3dR_const_ColorR_const_Color(const cv::_InputArray* cloud, const cv::Point3d* p1, const cv::Point3d* p2, const cv::viz::Color* c1, const cv::viz::Color* c2, Result<cv::viz::WPaintedCloud*>* ocvrs_return) {
		try {
			cv::viz::WPaintedCloud* ret = new cv::viz::WPaintedCloud(*cloud, *p1, *p2, *c1, *c2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WPaintedCloud_to_Widget(cv::viz::WPaintedCloud* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WPaintedCloud_to_Widget3D(cv::viz::WPaintedCloud* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WPaintedCloud_delete(cv::viz::WPaintedCloud* instance) {
			delete instance;
	}
	
	void cv_viz_WPlane_WPlane_const_Size2dR_const_ColorR(const cv::Size2d* size, const cv::viz::Color* color, Result<cv::viz::WPlane*>* ocvrs_return) {
		try {
			cv::viz::WPlane* ret = new cv::viz::WPlane(*size, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPlane_WPlane(Result<cv::viz::WPlane*>* ocvrs_return) {
		try {
			cv::viz::WPlane* ret = new cv::viz::WPlane();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPlane_WPlane_const_Point3dR_const_Vec3dR_const_Vec3dR_const_Size2dR_const_ColorR(const cv::Point3d* center, const cv::Vec3d* normal, const cv::Vec3d* new_yaxis, const cv::Size2d* size, const cv::viz::Color* color, Result<cv::viz::WPlane*>* ocvrs_return) {
		try {
			cv::viz::WPlane* ret = new cv::viz::WPlane(*center, *normal, *new_yaxis, *size, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPlane_WPlane_const_Point3dR_const_Vec3dR_const_Vec3dR(const cv::Point3d* center, const cv::Vec3d* normal, const cv::Vec3d* new_yaxis, Result<cv::viz::WPlane*>* ocvrs_return) {
		try {
			cv::viz::WPlane* ret = new cv::viz::WPlane(*center, *normal, *new_yaxis);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WPlane_to_Widget(cv::viz::WPlane* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WPlane_to_Widget3D(cv::viz::WPlane* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WPlane_delete(cv::viz::WPlane* instance) {
			delete instance;
	}
	
	void cv_viz_WPolyLine_WPolyLine_const__InputArrayR_const__InputArrayR(const cv::_InputArray* points, const cv::_InputArray* colors, Result<cv::viz::WPolyLine*>* ocvrs_return) {
		try {
			cv::viz::WPolyLine* ret = new cv::viz::WPolyLine(*points, *colors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPolyLine_WPolyLine_const__InputArrayR_const_ColorR(const cv::_InputArray* points, const cv::viz::Color* color, Result<cv::viz::WPolyLine*>* ocvrs_return) {
		try {
			cv::viz::WPolyLine* ret = new cv::viz::WPolyLine(*points, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WPolyLine_WPolyLine_const__InputArrayR(const cv::_InputArray* points, Result<cv::viz::WPolyLine*>* ocvrs_return) {
		try {
			cv::viz::WPolyLine* ret = new cv::viz::WPolyLine(*points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WPolyLine_to_Widget(cv::viz::WPolyLine* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WPolyLine_to_Widget3D(cv::viz::WPolyLine* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WPolyLine_delete(cv::viz::WPolyLine* instance) {
			delete instance;
	}
	
	void cv_viz_WSphere_WSphere_const_Point3dR_double_int_const_ColorR(const cv::Point3d* center, double radius, int sphere_resolution, const cv::viz::Color* color, Result<cv::viz::WSphere*>* ocvrs_return) {
		try {
			cv::viz::WSphere* ret = new cv::viz::WSphere(*center, radius, sphere_resolution, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WSphere_WSphere_const_Point3dR_double(const cv::Point3d* center, double radius, Result<cv::viz::WSphere*>* ocvrs_return) {
		try {
			cv::viz::WSphere* ret = new cv::viz::WSphere(*center, radius);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WSphere_to_Widget(cv::viz::WSphere* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WSphere_to_Widget3D(cv::viz::WSphere* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WSphere_delete(cv::viz::WSphere* instance) {
			delete instance;
	}
	
	void cv_viz_WText_WText_const_StringR_const_PointR_int_const_ColorR(const char* text, const cv::Point* pos, int font_size, const cv::viz::Color* color, Result<cv::viz::WText*>* ocvrs_return) {
		try {
			cv::viz::WText* ret = new cv::viz::WText(std::string(text), *pos, font_size, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WText_WText_const_StringR_const_PointR(const char* text, const cv::Point* pos, Result<cv::viz::WText*>* ocvrs_return) {
		try {
			cv::viz::WText* ret = new cv::viz::WText(std::string(text), *pos);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WText_setText_const_StringR(cv::viz::WText* instance, const char* text, ResultVoid* ocvrs_return) {
		try {
			instance->setText(std::string(text));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WText_getText_const(const cv::viz::WText* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getText();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WText_to_Widget(cv::viz::WText* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget2D* cv_viz_WText_to_Widget2D(cv::viz::WText* instance) {
			return dynamic_cast<cv::viz::Widget2D*>(instance);
	}
	
	void cv_viz_WText_delete(cv::viz::WText* instance) {
			delete instance;
	}
	
	void cv_viz_WText3D_WText3D_const_StringR_const_Point3dR_double_bool_const_ColorR(const char* text, const cv::Point3d* position, double text_scale, bool face_camera, const cv::viz::Color* color, Result<cv::viz::WText3D*>* ocvrs_return) {
		try {
			cv::viz::WText3D* ret = new cv::viz::WText3D(std::string(text), *position, text_scale, face_camera, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WText3D_WText3D_const_StringR_const_Point3dR(const char* text, const cv::Point3d* position, Result<cv::viz::WText3D*>* ocvrs_return) {
		try {
			cv::viz::WText3D* ret = new cv::viz::WText3D(std::string(text), *position);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WText3D_setText_const_StringR(cv::viz::WText3D* instance, const char* text, ResultVoid* ocvrs_return) {
		try {
			instance->setText(std::string(text));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WText3D_getText_const(const cv::viz::WText3D* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getText();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WText3D_to_Widget(cv::viz::WText3D* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WText3D_to_Widget3D(cv::viz::WText3D* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WText3D_delete(cv::viz::WText3D* instance) {
			delete instance;
	}
	
	void cv_viz_WTrajectory_WTrajectory_const__InputArrayR_int_double_const_ColorR(const cv::_InputArray* path, int display_mode, double scale, const cv::viz::Color* color, Result<cv::viz::WTrajectory*>* ocvrs_return) {
		try {
			cv::viz::WTrajectory* ret = new cv::viz::WTrajectory(*path, display_mode, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WTrajectory_WTrajectory_const__InputArrayR(const cv::_InputArray* path, Result<cv::viz::WTrajectory*>* ocvrs_return) {
		try {
			cv::viz::WTrajectory* ret = new cv::viz::WTrajectory(*path);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WTrajectory_to_Widget(cv::viz::WTrajectory* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WTrajectory_to_Widget3D(cv::viz::WTrajectory* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WTrajectory_delete(cv::viz::WTrajectory* instance) {
			delete instance;
	}
	
	void cv_viz_WTrajectoryFrustums_WTrajectoryFrustums_const__InputArrayR_const_Matx33dR_double_const_ColorR(const cv::_InputArray* path, const cv::Matx33d* K, double scale, const cv::viz::Color* color, Result<cv::viz::WTrajectoryFrustums*>* ocvrs_return) {
		try {
			cv::viz::WTrajectoryFrustums* ret = new cv::viz::WTrajectoryFrustums(*path, *K, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WTrajectoryFrustums_WTrajectoryFrustums_const__InputArrayR_const_Matx33dR(const cv::_InputArray* path, const cv::Matx33d* K, Result<cv::viz::WTrajectoryFrustums*>* ocvrs_return) {
		try {
			cv::viz::WTrajectoryFrustums* ret = new cv::viz::WTrajectoryFrustums(*path, *K);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WTrajectoryFrustums_WTrajectoryFrustums_const__InputArrayR_const_Vec2dR_double_const_ColorR(const cv::_InputArray* path, const cv::Vec2d* fov, double scale, const cv::viz::Color* color, Result<cv::viz::WTrajectoryFrustums*>* ocvrs_return) {
		try {
			cv::viz::WTrajectoryFrustums* ret = new cv::viz::WTrajectoryFrustums(*path, *fov, scale, *color);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WTrajectoryFrustums_WTrajectoryFrustums_const__InputArrayR_const_Vec2dR(const cv::_InputArray* path, const cv::Vec2d* fov, Result<cv::viz::WTrajectoryFrustums*>* ocvrs_return) {
		try {
			cv::viz::WTrajectoryFrustums* ret = new cv::viz::WTrajectoryFrustums(*path, *fov);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WTrajectoryFrustums_to_Widget(cv::viz::WTrajectoryFrustums* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WTrajectoryFrustums_to_Widget3D(cv::viz::WTrajectoryFrustums* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WTrajectoryFrustums_delete(cv::viz::WTrajectoryFrustums* instance) {
			delete instance;
	}
	
	void cv_viz_WTrajectorySpheres_WTrajectorySpheres_const__InputArrayR_double_double_const_ColorR_const_ColorR(const cv::_InputArray* path, double line_length, double radius, const cv::viz::Color* from, const cv::viz::Color* to, Result<cv::viz::WTrajectorySpheres*>* ocvrs_return) {
		try {
			cv::viz::WTrajectorySpheres* ret = new cv::viz::WTrajectorySpheres(*path, line_length, radius, *from, *to);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WTrajectorySpheres_WTrajectorySpheres_const__InputArrayR(const cv::_InputArray* path, Result<cv::viz::WTrajectorySpheres*>* ocvrs_return) {
		try {
			cv::viz::WTrajectorySpheres* ret = new cv::viz::WTrajectorySpheres(*path);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WTrajectorySpheres_to_Widget(cv::viz::WTrajectorySpheres* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WTrajectorySpheres_to_Widget3D(cv::viz::WTrajectorySpheres* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WTrajectorySpheres_delete(cv::viz::WTrajectorySpheres* instance) {
			delete instance;
	}
	
	void cv_viz_WWidgetMerger_WWidgetMerger(Result<cv::viz::WWidgetMerger*>* ocvrs_return) {
		try {
			cv::viz::WWidgetMerger* ret = new cv::viz::WWidgetMerger();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WWidgetMerger_addWidget_const_Widget3DR_const_Affine3dR(cv::viz::WWidgetMerger* instance, const cv::viz::Widget3D* widget, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->addWidget(*widget, *pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WWidgetMerger_addWidget_const_Widget3DR(cv::viz::WWidgetMerger* instance, const cv::viz::Widget3D* widget, ResultVoid* ocvrs_return) {
		try {
			instance->addWidget(*widget);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_WWidgetMerger_finalize(cv::viz::WWidgetMerger* instance, ResultVoid* ocvrs_return) {
		try {
			instance->finalize();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_WWidgetMerger_to_Widget(cv::viz::WWidgetMerger* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	cv::viz::Widget3D* cv_viz_WWidgetMerger_to_Widget3D(cv::viz::WWidgetMerger* instance) {
			return dynamic_cast<cv::viz::Widget3D*>(instance);
	}
	
	void cv_viz_WWidgetMerger_delete(cv::viz::WWidgetMerger* instance) {
			delete instance;
	}
	
	void cv_viz_Widget_Widget(Result<cv::viz::Widget*>* ocvrs_return) {
		try {
			cv::viz::Widget* ret = new cv::viz::Widget();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget_Widget_const_WidgetR(const cv::viz::Widget* other, Result<cv::viz::Widget*>* ocvrs_return) {
		try {
			cv::viz::Widget* ret = new cv::viz::Widget(*other);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget_operatorST_const_WidgetR(cv::viz::Widget* instance, const cv::viz::Widget* other, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*other);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget_fromPlyFile_const_StringR(const char* file_name, Result<cv::viz::Widget*>* ocvrs_return) {
		try {
			cv::viz::Widget ret = cv::viz::Widget::fromPlyFile(std::string(file_name));
			Ok(new cv::viz::Widget(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget_setRenderingProperty_int_double(cv::viz::Widget* instance, int property, double value, ResultVoid* ocvrs_return) {
		try {
			instance->setRenderingProperty(property, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget_getRenderingProperty_const_int(const cv::viz::Widget* instance, int property, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getRenderingProperty(property);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget_delete(cv::viz::Widget* instance) {
			delete instance;
	}
	
	void cv_viz_Widget2D_Widget2D(Result<cv::viz::Widget2D*>* ocvrs_return) {
		try {
			cv::viz::Widget2D* ret = new cv::viz::Widget2D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget2D_setColor_const_ColorR(cv::viz::Widget2D* instance, const cv::viz::Color* color, ResultVoid* ocvrs_return) {
		try {
			instance->setColor(*color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_Widget2D_to_Widget(cv::viz::Widget2D* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	void cv_viz_Widget2D_delete(cv::viz::Widget2D* instance) {
			delete instance;
	}
	
	void cv_viz_Widget3D_Widget3D(Result<cv::viz::Widget3D*>* ocvrs_return) {
		try {
			cv::viz::Widget3D* ret = new cv::viz::Widget3D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget3D_setPose_const_Affine3dR(cv::viz::Widget3D* instance, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->setPose(*pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget3D_updatePose_const_Affine3dR(cv::viz::Widget3D* instance, const cv::Affine3d* pose, ResultVoid* ocvrs_return) {
		try {
			instance->updatePose(*pose);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget3D_getPose_const(const cv::viz::Widget3D* instance, Result<cv::Affine3d>* ocvrs_return) {
		try {
			cv::Affine3d ret = instance->getPose();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget3D_applyTransform_const_Affine3dR(cv::viz::Widget3D* instance, const cv::Affine3d* transform, ResultVoid* ocvrs_return) {
		try {
			instance->applyTransform(*transform);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_viz_Widget3D_setColor_const_ColorR(cv::viz::Widget3D* instance, const cv::viz::Color* color, ResultVoid* ocvrs_return) {
		try {
			instance->setColor(*color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::viz::Widget* cv_viz_Widget3D_to_Widget(cv::viz::Widget3D* instance) {
			return dynamic_cast<cv::viz::Widget*>(instance);
	}
	
	void cv_viz_Widget3D_delete(cv::viz::Widget3D* instance) {
			delete instance;
	}
	
}
