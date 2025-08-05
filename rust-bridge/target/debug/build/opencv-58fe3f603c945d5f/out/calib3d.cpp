#include "ocvrs_common.hpp"
#include <opencv2/calib3d.hpp>
#include "calib3d_types.hpp"

extern "C" {
	void cv_RQDecomp3x3_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* mtxR, const cv::_OutputArray* mtxQ, Result<cv::Vec3d>* ocvrs_return) {
		try {
			cv::Vec3d ret = cv::RQDecomp3x3(*src, *mtxR, *mtxQ);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RQDecomp3x3_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* mtxR, const cv::_OutputArray* mtxQ, const cv::_OutputArray* Qx, const cv::_OutputArray* Qy, const cv::_OutputArray* Qz, Result<cv::Vec3d>* ocvrs_return) {
		try {
			cv::Vec3d ret = cv::RQDecomp3x3(*src, *mtxR, *mtxQ, *Qx, *Qy, *Qz);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Rodrigues_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::Rodrigues(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Rodrigues_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_OutputArray* jacobian, ResultVoid* ocvrs_return) {
		try {
			cv::Rodrigues(*src, *dst, *jacobian);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCameraRO_const__InputArrayR_const__InputArrayR_Size_int_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, int iFixedPoint, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* newObjPoints, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize, iFixedPoint, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *newObjPoints);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCameraRO_const__InputArrayR_const__InputArrayR_Size_int_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, int iFixedPoint, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* newObjPoints, const cv::_OutputArray* stdDeviationsIntrinsics, const cv::_OutputArray* stdDeviationsExtrinsics, const cv::_OutputArray* stdDeviationsObjPoints, const cv::_OutputArray* perViewErrors, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize, iFixedPoint, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *newObjPoints, *stdDeviationsIntrinsics, *stdDeviationsExtrinsics, *stdDeviationsObjPoints, *perViewErrors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCameraRO_const__InputArrayR_const__InputArrayR_Size_int_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, int iFixedPoint, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* newObjPoints, const cv::_OutputArray* stdDeviationsIntrinsics, const cv::_OutputArray* stdDeviationsExtrinsics, const cv::_OutputArray* stdDeviationsObjPoints, const cv::_OutputArray* perViewErrors, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize, iFixedPoint, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *newObjPoints, *stdDeviationsIntrinsics, *stdDeviationsExtrinsics, *stdDeviationsObjPoints, *perViewErrors, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCameraRO_const__InputArrayR_const__InputArrayR_Size_int_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, int iFixedPoint, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* newObjPoints, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCameraRO(*objectPoints, *imagePoints, *imageSize, iFixedPoint, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *newObjPoints, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCamera_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCamera_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* stdDeviationsIntrinsics, const cv::_OutputArray* stdDeviationsExtrinsics, const cv::_OutputArray* perViewErrors, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *stdDeviationsIntrinsics, *stdDeviationsExtrinsics, *perViewErrors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCamera_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* stdDeviationsIntrinsics, const cv::_OutputArray* stdDeviationsExtrinsics, const cv::_OutputArray* perViewErrors, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, *stdDeviationsIntrinsics, *stdDeviationsExtrinsics, *perViewErrors, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateCamera_const__InputArrayR_const__InputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, const cv::_InputOutputArray* cameraMatrix, const cv::_InputOutputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::calibrateCamera(*objectPoints, *imagePoints, *imageSize, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateHandEye_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* R_gripper2base, const cv::_InputArray* t_gripper2base, const cv::_InputArray* R_target2cam, const cv::_InputArray* t_target2cam, const cv::_OutputArray* R_cam2gripper, const cv::_OutputArray* t_cam2gripper, ResultVoid* ocvrs_return) {
		try {
			cv::calibrateHandEye(*R_gripper2base, *t_gripper2base, *R_target2cam, *t_target2cam, *R_cam2gripper, *t_cam2gripper);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateHandEye_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_HandEyeCalibrationMethod(const cv::_InputArray* R_gripper2base, const cv::_InputArray* t_gripper2base, const cv::_InputArray* R_target2cam, const cv::_InputArray* t_target2cam, const cv::_OutputArray* R_cam2gripper, const cv::_OutputArray* t_cam2gripper, cv::HandEyeCalibrationMethod method, ResultVoid* ocvrs_return) {
		try {
			cv::calibrateHandEye(*R_gripper2base, *t_gripper2base, *R_target2cam, *t_target2cam, *R_cam2gripper, *t_cam2gripper, method);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateRobotWorldHandEye_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* R_world2cam, const cv::_InputArray* t_world2cam, const cv::_InputArray* R_base2gripper, const cv::_InputArray* t_base2gripper, const cv::_OutputArray* R_base2world, const cv::_OutputArray* t_base2world, const cv::_OutputArray* R_gripper2cam, const cv::_OutputArray* t_gripper2cam, ResultVoid* ocvrs_return) {
		try {
			cv::calibrateRobotWorldHandEye(*R_world2cam, *t_world2cam, *R_base2gripper, *t_base2gripper, *R_base2world, *t_base2world, *R_gripper2cam, *t_gripper2cam);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrateRobotWorldHandEye_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_RobotWorldHandEyeCalibrationMethod(const cv::_InputArray* R_world2cam, const cv::_InputArray* t_world2cam, const cv::_InputArray* R_base2gripper, const cv::_InputArray* t_base2gripper, const cv::_OutputArray* R_base2world, const cv::_OutputArray* t_base2world, const cv::_OutputArray* R_gripper2cam, const cv::_OutputArray* t_gripper2cam, cv::RobotWorldHandEyeCalibrationMethod method, ResultVoid* ocvrs_return) {
		try {
			cv::calibrateRobotWorldHandEye(*R_world2cam, *t_world2cam, *R_base2gripper, *t_base2gripper, *R_base2world, *t_base2world, *R_gripper2cam, *t_gripper2cam, method);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calibrationMatrixValues_const__InputArrayR_Size_double_double_doubleR_doubleR_doubleR_Point2dR_doubleR(const cv::_InputArray* cameraMatrix, cv::Size* imageSize, double apertureWidth, double apertureHeight, double* fovx, double* fovy, double* focalLength, cv::Point2d* principalPoint, double* aspectRatio, ResultVoid* ocvrs_return) {
		try {
			cv::calibrationMatrixValues(*cameraMatrix, *imageSize, apertureWidth, apertureHeight, *fovx, *fovy, *focalLength, *principalPoint, *aspectRatio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_checkChessboard_const__InputArrayR_Size(const cv::_InputArray* img, cv::Size* size, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::checkChessboard(*img, *size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_composeRT_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* rvec1, const cv::_InputArray* tvec1, const cv::_InputArray* rvec2, const cv::_InputArray* tvec2, const cv::_OutputArray* rvec3, const cv::_OutputArray* tvec3, ResultVoid* ocvrs_return) {
		try {
			cv::composeRT(*rvec1, *tvec1, *rvec2, *tvec2, *rvec3, *tvec3);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_composeRT_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* rvec1, const cv::_InputArray* tvec1, const cv::_InputArray* rvec2, const cv::_InputArray* tvec2, const cv::_OutputArray* rvec3, const cv::_OutputArray* tvec3, const cv::_OutputArray* dr3dr1, const cv::_OutputArray* dr3dt1, const cv::_OutputArray* dr3dr2, const cv::_OutputArray* dr3dt2, const cv::_OutputArray* dt3dr1, const cv::_OutputArray* dt3dt1, const cv::_OutputArray* dt3dr2, const cv::_OutputArray* dt3dt2, ResultVoid* ocvrs_return) {
		try {
			cv::composeRT(*rvec1, *tvec1, *rvec2, *tvec2, *rvec3, *tvec3, *dr3dr1, *dr3dt1, *dr3dr2, *dr3dt2, *dt3dr1, *dt3dt1, *dt3dr2, *dt3dt2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_computeCorrespondEpilines_const__InputArrayR_int_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* points, int whichImage, const cv::_InputArray* F, const cv::_OutputArray* lines, ResultVoid* ocvrs_return) {
		try {
			cv::computeCorrespondEpilines(*points, whichImage, *F, *lines);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_convertPointsFromHomogeneous_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::convertPointsFromHomogeneous(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_convertPointsHomogeneous_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::convertPointsHomogeneous(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_convertPointsToHomogeneous_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::convertPointsToHomogeneous(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_correctMatches_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* F, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_OutputArray* newPoints1, const cv::_OutputArray* newPoints2, ResultVoid* ocvrs_return) {
		try {
			cv::correctMatches(*F, *points1, *points2, *newPoints1, *newPoints2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_decomposeEssentialMat_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* E, const cv::_OutputArray* R1, const cv::_OutputArray* R2, const cv::_OutputArray* t, ResultVoid* ocvrs_return) {
		try {
			cv::decomposeEssentialMat(*E, *R1, *R2, *t);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_decomposeHomographyMat_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* H, const cv::_InputArray* K, const cv::_OutputArray* rotations, const cv::_OutputArray* translations, const cv::_OutputArray* normals, Result<int>* ocvrs_return) {
		try {
			int ret = cv::decomposeHomographyMat(*H, *K, *rotations, *translations, *normals);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_decomposeProjectionMatrix_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* projMatrix, const cv::_OutputArray* cameraMatrix, const cv::_OutputArray* rotMatrix, const cv::_OutputArray* transVect, ResultVoid* ocvrs_return) {
		try {
			cv::decomposeProjectionMatrix(*projMatrix, *cameraMatrix, *rotMatrix, *transVect);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_decomposeProjectionMatrix_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* projMatrix, const cv::_OutputArray* cameraMatrix, const cv::_OutputArray* rotMatrix, const cv::_OutputArray* transVect, const cv::_OutputArray* rotMatrixX, const cv::_OutputArray* rotMatrixY, const cv::_OutputArray* rotMatrixZ, const cv::_OutputArray* eulerAngles, ResultVoid* ocvrs_return) {
		try {
			cv::decomposeProjectionMatrix(*projMatrix, *cameraMatrix, *rotMatrix, *transVect, *rotMatrixX, *rotMatrixY, *rotMatrixZ, *eulerAngles);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_drawChessboardCorners_const__InputOutputArrayR_Size_const__InputArrayR_bool(const cv::_InputOutputArray* image, cv::Size* patternSize, const cv::_InputArray* corners, bool patternWasFound, ResultVoid* ocvrs_return) {
		try {
			cv::drawChessboardCorners(*image, *patternSize, *corners, patternWasFound);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_drawFrameAxes_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_float(const cv::_InputOutputArray* image, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* rvec, const cv::_InputArray* tvec, float length, ResultVoid* ocvrs_return) {
		try {
			cv::drawFrameAxes(*image, *cameraMatrix, *distCoeffs, *rvec, *tvec, length);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_drawFrameAxes_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_float_int(const cv::_InputOutputArray* image, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* rvec, const cv::_InputArray* tvec, float length, int thickness, ResultVoid* ocvrs_return) {
		try {
			cv::drawFrameAxes(*image, *cameraMatrix, *distCoeffs, *rvec, *tvec, length, thickness);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine2D_const__InputArrayR_const__InputArrayR(const cv::_InputArray* from, const cv::_InputArray* to, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffine2D(*from, *to);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine2D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const_UsacParamsR(const cv::_InputArray* pts1, const cv::_InputArray* pts2, const cv::_OutputArray* inliers, const cv::UsacParams* params, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffine2D(*pts1, *pts2, *inliers, *params);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine2D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_size_t_double_size_t(const cv::_InputArray* from, const cv::_InputArray* to, const cv::_OutputArray* inliers, int method, double ransacReprojThreshold, size_t maxIters, double confidence, size_t refineIters, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffine2D(*from, *to, *inliers, method, ransacReprojThreshold, maxIters, confidence, refineIters);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine3D_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_InputArray* dst, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffine3D(*src, *dst);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine3D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* out, const cv::_OutputArray* inliers, Result<int>* ocvrs_return) {
		try {
			int ret = cv::estimateAffine3D(*src, *dst, *out, *inliers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine3D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* out, const cv::_OutputArray* inliers, double ransacThreshold, double confidence, Result<int>* ocvrs_return) {
		try {
			int ret = cv::estimateAffine3D(*src, *dst, *out, *inliers, ransacThreshold, confidence);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffine3D_const__InputArrayR_const__InputArrayR_doubleX_bool(const cv::_InputArray* src, const cv::_InputArray* dst, double* scale, bool force_rotation, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffine3D(*src, *dst, scale, force_rotation);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffinePartial2D_const__InputArrayR_const__InputArrayR(const cv::_InputArray* from, const cv::_InputArray* to, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffinePartial2D(*from, *to);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateAffinePartial2D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_size_t_double_size_t(const cv::_InputArray* from, const cv::_InputArray* to, const cv::_OutputArray* inliers, int method, double ransacReprojThreshold, size_t maxIters, double confidence, size_t refineIters, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::estimateAffinePartial2D(*from, *to, *inliers, method, ransacReprojThreshold, maxIters, confidence, refineIters);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateChessboardSharpness_const__InputArrayR_Size_const__InputArrayR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_InputArray* corners, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::estimateChessboardSharpness(*image, *patternSize, *corners);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateChessboardSharpness_const__InputArrayR_Size_const__InputArrayR_float_bool_const__OutputArrayR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_InputArray* corners, float rise_distance, bool vertical, const cv::_OutputArray* sharpness, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::estimateChessboardSharpness(*image, *patternSize, *corners, rise_distance, vertical, *sharpness);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateTranslation3D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* out, const cv::_OutputArray* inliers, Result<int>* ocvrs_return) {
		try {
			int ret = cv::estimateTranslation3D(*src, *dst, *out, *inliers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_estimateTranslation3D_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* src, const cv::_InputArray* dst, const cv::_OutputArray* out, const cv::_OutputArray* inliers, double ransacThreshold, double confidence, Result<int>* ocvrs_return) {
		try {
			int ret = cv::estimateTranslation3D(*src, *dst, *out, *inliers, ransacThreshold, confidence);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_filterHomographyDecompByVisibleRefpoints_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* rotations, const cv::_InputArray* normals, const cv::_InputArray* beforePoints, const cv::_InputArray* afterPoints, const cv::_OutputArray* possibleSolutions, ResultVoid* ocvrs_return) {
		try {
			cv::filterHomographyDecompByVisibleRefpoints(*rotations, *normals, *beforePoints, *afterPoints, *possibleSolutions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_filterHomographyDecompByVisibleRefpoints_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* rotations, const cv::_InputArray* normals, const cv::_InputArray* beforePoints, const cv::_InputArray* afterPoints, const cv::_OutputArray* possibleSolutions, const cv::_InputArray* pointsMask, ResultVoid* ocvrs_return) {
		try {
			cv::filterHomographyDecompByVisibleRefpoints(*rotations, *normals, *beforePoints, *afterPoints, *possibleSolutions, *pointsMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_filterSpeckles_const__InputOutputArrayR_double_int_double(const cv::_InputOutputArray* img, double newVal, int maxSpeckleSize, double maxDiff, ResultVoid* ocvrs_return) {
		try {
			cv::filterSpeckles(*img, newVal, maxSpeckleSize, maxDiff);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_filterSpeckles_const__InputOutputArrayR_double_int_double_const__InputOutputArrayR(const cv::_InputOutputArray* img, double newVal, int maxSpeckleSize, double maxDiff, const cv::_InputOutputArray* buf, ResultVoid* ocvrs_return) {
		try {
			cv::filterSpeckles(*img, newVal, maxSpeckleSize, maxDiff, *buf);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_find4QuadCornerSubpix_const__InputArrayR_const__InputOutputArrayR_Size(const cv::_InputArray* img, const cv::_InputOutputArray* corners, cv::Size* region_size, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::find4QuadCornerSubpix(*img, *corners, *region_size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findChessboardCornersSB_const__InputArrayR_Size_const__OutputArrayR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* corners, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findChessboardCornersSB(*image, *patternSize, *corners);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findChessboardCornersSB_const__InputArrayR_Size_const__OutputArrayR_int(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* corners, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findChessboardCornersSB(*image, *patternSize, *corners, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findChessboardCornersSB_const__InputArrayR_Size_const__OutputArrayR_int_const__OutputArrayR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* corners, int flags, const cv::_OutputArray* meta, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findChessboardCornersSB(*image, *patternSize, *corners, flags, *meta);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findChessboardCorners_const__InputArrayR_Size_const__OutputArrayR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* corners, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findChessboardCorners(*image, *patternSize, *corners);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findChessboardCorners_const__InputArrayR_Size_const__OutputArrayR_int(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* corners, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findChessboardCorners(*image, *patternSize, *corners, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findCirclesGrid_const__InputArrayR_Size_const__OutputArrayR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* centers, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findCirclesGrid(*image, *patternSize, *centers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findCirclesGrid_const__InputArrayR_Size_const__OutputArrayR_int_const_PtrLFeature2DGR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* centers, int flags, const cv::Ptr<cv::Feature2D>* blobDetector, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findCirclesGrid(*image, *patternSize, *centers, flags, *blobDetector);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findCirclesGrid_const__InputArrayR_Size_const__OutputArrayR_int_const_PtrLFeature2DGR_const_CirclesGridFinderParametersR(const cv::_InputArray* image, cv::Size* patternSize, const cv::_OutputArray* centers, int flags, const cv::Ptr<cv::Feature2D>* blobDetector, const cv::CirclesGridFinderParameters* parameters, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::findCirclesGrid(*image, *patternSize, *centers, flags, *blobDetector, *parameters);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, *cameraMatrix);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const_UsacParamsR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* dist_coeff1, const cv::_InputArray* dist_coeff2, const cv::_OutputArray* mask, const cv::UsacParams* params, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, *cameraMatrix1, *cameraMatrix2, *dist_coeff1, *dist_coeff2, *mask, *params);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_double_double_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, int method, double prob, double threshold, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, method, prob, threshold, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_double_double_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, int method, double prob, double threshold, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, *cameraMatrix, method, prob, threshold, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_double_double_int_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, int method, double prob, double threshold, int maxIters, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, *cameraMatrix, method, prob, threshold, maxIters, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_double_Point2d_int_double_double_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, double focal, cv::Point2d* pp, int method, double prob, double threshold, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, focal, *pp, method, prob, threshold, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findEssentialMat_const__InputArrayR_const__InputArrayR_double_Point2d_int_double_double_int_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, double focal, cv::Point2d* pp, int method, double prob, double threshold, int maxIters, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findEssentialMat(*points1, *points2, focal, *pp, method, prob, threshold, maxIters, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const_UsacParamsR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_OutputArray* mask, const cv::UsacParams* params, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2, *mask, *params);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double_double(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_OutputArray* mask, int method, double ransacReprojThreshold, double confidence, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2, *mask, method, ransacReprojThreshold, confidence);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR_int_double_double_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, int method, double ransacReprojThreshold, double confidence, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2, method, ransacReprojThreshold, confidence, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR_int_double_double_int(const cv::_InputArray* points1, const cv::_InputArray* points2, int method, double ransacReprojThreshold, double confidence, int maxIters, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2, method, ransacReprojThreshold, confidence, maxIters);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findFundamentalMat_const__InputArrayR_const__InputArrayR_int_double_double_int_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, int method, double ransacReprojThreshold, double confidence, int maxIters, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findFundamentalMat(*points1, *points2, method, ransacReprojThreshold, confidence, maxIters, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findHomography_const__InputArrayR_const__InputArrayR(const cv::_InputArray* srcPoints, const cv::_InputArray* dstPoints, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findHomography(*srcPoints, *dstPoints);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findHomography_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* srcPoints, const cv::_InputArray* dstPoints, const cv::_OutputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findHomography(*srcPoints, *dstPoints, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findHomography_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const_UsacParamsR(const cv::_InputArray* srcPoints, const cv::_InputArray* dstPoints, const cv::_OutputArray* mask, const cv::UsacParams* params, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findHomography(*srcPoints, *dstPoints, *mask, *params);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findHomography_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_double(const cv::_InputArray* srcPoints, const cv::_InputArray* dstPoints, const cv::_OutputArray* mask, int method, double ransacReprojThreshold, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findHomography(*srcPoints, *dstPoints, *mask, method, ransacReprojThreshold);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findHomography_const__InputArrayR_const__InputArrayR_int_double_const__OutputArrayR_const_int_const_double(const cv::_InputArray* srcPoints, const cv::_InputArray* dstPoints, int method, double ransacReprojThreshold, const cv::_OutputArray* mask, const int maxIters, const double confidence, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::findHomography(*srcPoints, *dstPoints, method, ransacReprojThreshold, *mask, maxIters, confidence);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_calibrate_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::Size* image_size, const cv::_InputOutputArray* K, const cv::_InputOutputArray* D, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, Result<double>* ocvrs_return) {
		try {
			double ret = cv::fisheye::calibrate(*objectPoints, *imagePoints, *image_size, *K, *D, *rvecs, *tvecs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_calibrate_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::Size* image_size, const cv::_InputOutputArray* K, const cv::_InputOutputArray* D, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::fisheye::calibrate(*objectPoints, *imagePoints, *image_size, *K, *D, *rvecs, *tvecs, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_distortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* undistorted, const cv::_OutputArray* distorted, const cv::_InputArray* K, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::distortPoints(*undistorted, *distorted, *K, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_distortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* undistorted, const cv::_OutputArray* distorted, const cv::_InputArray* Kundistorted, const cv::_InputArray* K, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::distortPoints(*undistorted, *distorted, *Kundistorted, *K, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_distortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_double(const cv::_InputArray* undistorted, const cv::_OutputArray* distorted, const cv::_InputArray* Kundistorted, const cv::_InputArray* K, const cv::_InputArray* D, double alpha, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::distortPoints(*undistorted, *distorted, *Kundistorted, *K, *D, alpha);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_distortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_double(const cv::_InputArray* undistorted, const cv::_OutputArray* distorted, const cv::_InputArray* K, const cv::_InputArray* D, double alpha, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::distortPoints(*undistorted, *distorted, *K, *D, alpha);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_estimateNewCameraMatrixForUndistortRectify_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* K, const cv::_InputArray* D, const cv::Size* image_size, const cv::_InputArray* R, const cv::_OutputArray* P, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::estimateNewCameraMatrixForUndistortRectify(*K, *D, *image_size, *R, *P);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_estimateNewCameraMatrixForUndistortRectify_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputArrayR_const__OutputArrayR_double_const_SizeR_double(const cv::_InputArray* K, const cv::_InputArray* D, const cv::Size* image_size, const cv::_InputArray* R, const cv::_OutputArray* P, double balance, const cv::Size* new_size, double fov_scale, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::estimateNewCameraMatrixForUndistortRectify(*K, *D, *image_size, *R, *P, balance, *new_size, fov_scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_initUndistortRectifyMap_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_int_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* R, const cv::_InputArray* P, const cv::Size* size, int m1type, const cv::_OutputArray* map1, const cv::_OutputArray* map2, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::initUndistortRectifyMap(*K, *D, *R, *P, *size, m1type, *map1, *map2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_projectPoints_const__InputArrayR_const__OutputArrayR_const_Affine3dR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::Affine3d* affine, const cv::_InputArray* K, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::projectPoints(*objectPoints, *imagePoints, *affine, *K, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_projectPoints_const__InputArrayR_const__OutputArrayR_const_Affine3dR_const__InputArrayR_const__InputArrayR_double_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::Affine3d* affine, const cv::_InputArray* K, const cv::_InputArray* D, double alpha, const cv::_OutputArray* jacobian, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::projectPoints(*objectPoints, *imagePoints, *affine, *K, *D, alpha, *jacobian);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_projectPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* K, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::projectPoints(*objectPoints, *imagePoints, *rvec, *tvec, *K, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_projectPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_double_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_OutputArray* imagePoints, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* K, const cv::_InputArray* D, double alpha, const cv::_OutputArray* jacobian, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::projectPoints(*objectPoints, *imagePoints, *rvec, *tvec, *K, *D, alpha, *jacobian);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_solvePnP_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::fisheye::solvePnP(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_solvePnP_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_bool_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, bool useExtrinsicGuess, int flags, cv::TermCriteria* criteria, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::fisheye::solvePnP(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* K1, const cv::_InputOutputArray* D1, const cv::_InputOutputArray* K2, const cv::_InputOutputArray* D2, cv::Size* imageSize, const cv::_OutputArray* R, const cv::_OutputArray* T, Result<double>* ocvrs_return) {
		try {
			double ret = cv::fisheye::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *K1, *D1, *K2, *D2, *imageSize, *R, *T);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* K1, const cv::_InputOutputArray* D1, const cv::_InputOutputArray* K2, const cv::_InputOutputArray* D2, cv::Size* imageSize, const cv::_OutputArray* R, const cv::_OutputArray* T, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, Result<double>* ocvrs_return) {
		try {
			double ret = cv::fisheye::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *K1, *D1, *K2, *D2, *imageSize, *R, *T, *rvecs, *tvecs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* K1, const cv::_InputOutputArray* D1, const cv::_InputOutputArray* K2, const cv::_InputOutputArray* D2, cv::Size* imageSize, const cv::_OutputArray* R, const cv::_OutputArray* T, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::fisheye::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *K1, *D1, *K2, *D2, *imageSize, *R, *T, *rvecs, *tvecs, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* K1, const cv::_InputOutputArray* D1, const cv::_InputOutputArray* K2, const cv::_InputOutputArray* D2, cv::Size* imageSize, const cv::_OutputArray* R, const cv::_OutputArray* T, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::fisheye::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *K1, *D1, *K2, *D2, *imageSize, *R, *T, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_stereoRectify_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int(const cv::_InputArray* K1, const cv::_InputArray* D1, const cv::_InputArray* K2, const cv::_InputArray* D2, const cv::Size* imageSize, const cv::_InputArray* R, const cv::_InputArray* tvec, const cv::_OutputArray* R1, const cv::_OutputArray* R2, const cv::_OutputArray* P1, const cv::_OutputArray* P2, const cv::_OutputArray* Q, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::stereoRectify(*K1, *D1, *K2, *D2, *imageSize, *R, *tvec, *R1, *R2, *P1, *P2, *Q, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_stereoRectify_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_const_SizeR_double_double(const cv::_InputArray* K1, const cv::_InputArray* D1, const cv::_InputArray* K2, const cv::_InputArray* D2, const cv::Size* imageSize, const cv::_InputArray* R, const cv::_InputArray* tvec, const cv::_OutputArray* R1, const cv::_OutputArray* R2, const cv::_OutputArray* P1, const cv::_OutputArray* P2, const cv::_OutputArray* Q, int flags, const cv::Size* newImageSize, double balance, double fov_scale, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::stereoRectify(*K1, *D1, *K2, *D2, *imageSize, *R, *tvec, *R1, *R2, *P1, *P2, *Q, flags, *newImageSize, balance, fov_scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_undistortImage_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::undistortImage(*distorted, *undistorted, *K, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_undistortImage_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* Knew, const cv::Size* new_size, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::undistortImage(*distorted, *undistorted, *K, *D, *Knew, *new_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_undistortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::undistortPoints(*distorted, *undistorted, *K, *D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fisheye_undistortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_TermCriteria(const cv::_InputArray* distorted, const cv::_OutputArray* undistorted, const cv::_InputArray* K, const cv::_InputArray* D, const cv::_InputArray* R, const cv::_InputArray* P, cv::TermCriteria* criteria, ResultVoid* ocvrs_return) {
		try {
			cv::fisheye::undistortPoints(*distorted, *undistorted, *K, *D, *R, *P, *criteria);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getDefaultNewCameraMatrix_const__InputArrayR(const cv::_InputArray* cameraMatrix, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::getDefaultNewCameraMatrix(*cameraMatrix);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getDefaultNewCameraMatrix_const__InputArrayR_Size_bool(const cv::_InputArray* cameraMatrix, cv::Size* imgsize, bool centerPrincipalPoint, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::getDefaultNewCameraMatrix(*cameraMatrix, *imgsize, centerPrincipalPoint);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getOptimalNewCameraMatrix_const__InputArrayR_const__InputArrayR_Size_double(const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, cv::Size* imageSize, double alpha, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::getOptimalNewCameraMatrix(*cameraMatrix, *distCoeffs, *imageSize, alpha);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getOptimalNewCameraMatrix_const__InputArrayR_const__InputArrayR_Size_double_Size_RectX_bool(const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, cv::Size* imageSize, double alpha, cv::Size* newImgSize, cv::Rect* validPixROI, bool centerPrincipalPoint, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::getOptimalNewCameraMatrix(*cameraMatrix, *distCoeffs, *imageSize, alpha, *newImgSize, validPixROI, centerPrincipalPoint);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getValidDisparityROI_Rect_Rect_int_int_int(cv::Rect* roi1, cv::Rect* roi2, int minDisparity, int numberOfDisparities, int blockSize, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::getValidDisparityROI(*roi1, *roi2, minDisparity, numberOfDisparities, blockSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_initCameraMatrix2D_const__InputArrayR_const__InputArrayR_Size(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::initCameraMatrix2D(*objectPoints, *imagePoints, *imageSize);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_initCameraMatrix2D_const__InputArrayR_const__InputArrayR_Size_double(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, cv::Size* imageSize, double aspectRatio, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::initCameraMatrix2D(*objectPoints, *imagePoints, *imageSize, aspectRatio);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_initInverseRectificationMap_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const_SizeR_int_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* R, const cv::_InputArray* newCameraMatrix, const cv::Size* size, int m1type, const cv::_OutputArray* map1, const cv::_OutputArray* map2, ResultVoid* ocvrs_return) {
		try {
			cv::initInverseRectificationMap(*cameraMatrix, *distCoeffs, *R, *newCameraMatrix, *size, m1type, *map1, *map2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_initUndistortRectifyMap_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_Size_int_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* R, const cv::_InputArray* newCameraMatrix, cv::Size* size, int m1type, const cv::_OutputArray* map1, const cv::_OutputArray* map2, ResultVoid* ocvrs_return) {
		try {
			cv::initUndistortRectifyMap(*cameraMatrix, *distCoeffs, *R, *newCameraMatrix, *size, m1type, *map1, *map2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_initWideAngleProjMap_const__InputArrayR_const__InputArrayR_Size_int_int_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, cv::Size* imageSize, int destImageWidth, int m1type, const cv::_OutputArray* map1, const cv::_OutputArray* map2, Result<float>* ocvrs_return) {
		try {
			float ret = cv::initWideAngleProjMap(*cameraMatrix, *distCoeffs, *imageSize, destImageWidth, m1type, *map1, *map2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_initWideAngleProjMap_const__InputArrayR_const__InputArrayR_Size_int_int_const__OutputArrayR_const__OutputArrayR_UndistortTypes_double(const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, cv::Size* imageSize, int destImageWidth, int m1type, const cv::_OutputArray* map1, const cv::_OutputArray* map2, cv::UndistortTypes projType, double alpha, Result<float>* ocvrs_return) {
		try {
			float ret = cv::initWideAngleProjMap(*cameraMatrix, *distCoeffs, *imageSize, destImageWidth, m1type, *map1, *map2, projType, alpha);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_matMulDeriv_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* A, const cv::_InputArray* B, const cv::_OutputArray* dABdA, const cv::_OutputArray* dABdB, ResultVoid* ocvrs_return) {
		try {
			cv::matMulDeriv(*A, *B, *dABdA, *dABdB);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_projectPoints_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* imagePoints, ResultVoid* ocvrs_return) {
		try {
			cv::projectPoints(*objectPoints, *rvec, *tvec, *cameraMatrix, *distCoeffs, *imagePoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_projectPoints_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double(const cv::_InputArray* objectPoints, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* imagePoints, const cv::_OutputArray* jacobian, double aspectRatio, ResultVoid* ocvrs_return) {
		try {
			cv::projectPoints(*objectPoints, *rvec, *tvec, *cameraMatrix, *distCoeffs, *imagePoints, *jacobian, aspectRatio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, const cv::_OutputArray* E, const cv::_OutputArray* R, const cv::_OutputArray* t, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*points1, *points2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *E, *R, *t);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_double_double_const__InputOutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, const cv::_OutputArray* E, const cv::_OutputArray* R, const cv::_OutputArray* t, int method, double prob, double threshold, const cv::_InputOutputArray* mask, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*points1, *points2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *E, *R, *t, method, prob, threshold, *mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* E, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, const cv::_OutputArray* R, const cv::_OutputArray* t, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*E, *points1, *points2, *cameraMatrix, *R, *t);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__InputOutputArrayR(const cv::_InputArray* E, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, const cv::_OutputArray* R, const cv::_OutputArray* t, const cv::_InputOutputArray* mask, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*E, *points1, *points2, *cameraMatrix, *R, *t, *mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double(const cv::_InputArray* E, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, const cv::_OutputArray* R, const cv::_OutputArray* t, double distanceThresh, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*E, *points1, *points2, *cameraMatrix, *R, *t, distanceThresh);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double_const__InputOutputArrayR_const__OutputArrayR(const cv::_InputArray* E, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* cameraMatrix, const cv::_OutputArray* R, const cv::_OutputArray* t, double distanceThresh, const cv::_InputOutputArray* mask, const cv::_OutputArray* triangulatedPoints, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*E, *points1, *points2, *cameraMatrix, *R, *t, distanceThresh, *mask, *triangulatedPoints);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* E, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_OutputArray* R, const cv::_OutputArray* t, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*E, *points1, *points2, *R, *t);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_recoverPose_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_double_Point2d_const__InputOutputArrayR(const cv::_InputArray* E, const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_OutputArray* R, const cv::_OutputArray* t, double focal, cv::Point2d* pp, const cv::_InputOutputArray* mask, Result<int>* ocvrs_return) {
		try {
			int ret = cv::recoverPose(*E, *points1, *points2, *R, *t, focal, *pp, *mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rectify3Collinear_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_Size_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_double_Size_RectX_RectX_int(const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, const cv::_InputArray* cameraMatrix3, const cv::_InputArray* distCoeffs3, const cv::_InputArray* imgpt1, const cv::_InputArray* imgpt3, cv::Size* imageSize, const cv::_InputArray* R12, const cv::_InputArray* T12, const cv::_InputArray* R13, const cv::_InputArray* T13, const cv::_OutputArray* R1, const cv::_OutputArray* R2, const cv::_OutputArray* R3, const cv::_OutputArray* P1, const cv::_OutputArray* P2, const cv::_OutputArray* P3, const cv::_OutputArray* Q, double alpha, cv::Size* newImgSize, cv::Rect* roi1, cv::Rect* roi2, int flags, Result<float>* ocvrs_return) {
		try {
			float ret = cv::rectify3Collinear(*cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *cameraMatrix3, *distCoeffs3, *imgpt1, *imgpt3, *imageSize, *R12, *T12, *R13, *T13, *R1, *R2, *R3, *P1, *P2, *P3, *Q, alpha, *newImgSize, roi1, roi2, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reprojectImageTo3D_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* disparity, const cv::_OutputArray* _3dImage, const cv::_InputArray* Q, ResultVoid* ocvrs_return) {
		try {
			cv::reprojectImageTo3D(*disparity, *_3dImage, *Q);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reprojectImageTo3D_const__InputArrayR_const__OutputArrayR_const__InputArrayR_bool_int(const cv::_InputArray* disparity, const cv::_OutputArray* _3dImage, const cv::_InputArray* Q, bool handleMissingValues, int ddepth, ResultVoid* ocvrs_return) {
		try {
			cv::reprojectImageTo3D(*disparity, *_3dImage, *Q, handleMissingValues, ddepth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_sampsonDistance_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* pt1, const cv::_InputArray* pt2, const cv::_InputArray* F, Result<double>* ocvrs_return) {
		try {
			double ret = cv::sampsonDistance(*pt1, *pt2, *F);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solveP3P_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_int(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, int flags, Result<int>* ocvrs_return) {
		try {
			int ret = cv::solveP3P(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPGeneric_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, Result<int>* ocvrs_return) {
		try {
			int ret = cv::solvePnPGeneric(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvecs, *tvecs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPGeneric_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_bool_SolvePnPMethod_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, bool useExtrinsicGuess, cv::SolvePnPMethod flags, const cv::_InputArray* rvec, const cv::_InputArray* tvec, const cv::_OutputArray* reprojectionError, Result<int>* ocvrs_return) {
		try {
			int ret = cv::solvePnPGeneric(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvecs, *tvecs, useExtrinsicGuess, flags, *rvec, *tvec, *reprojectionError);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRansac_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solvePnPRansac(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRansac_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_bool_int_float_double_const__OutputArrayR_int(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, bool useExtrinsicGuess, int iterationsCount, float reprojectionError, double confidence, const cv::_OutputArray* inliers, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solvePnPRansac(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, iterationsCount, reprojectionError, confidence, *inliers, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRansac_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputOutputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, const cv::_OutputArray* inliers, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solvePnPRansac(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, *inliers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRansac_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const_UsacParamsR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputOutputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, const cv::_OutputArray* inliers, const cv::UsacParams* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solvePnPRansac(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, *inliers, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRefineLM_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, ResultVoid* ocvrs_return) {
		try {
			cv::solvePnPRefineLM(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRefineLM_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, cv::TermCriteria* criteria, ResultVoid* ocvrs_return) {
		try {
			cv::solvePnPRefineLM(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, *criteria);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRefineVVS_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, ResultVoid* ocvrs_return) {
		try {
			cv::solvePnPRefineVVS(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnPRefineVVS_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_TermCriteria_double(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputOutputArray* rvec, const cv::_InputOutputArray* tvec, cv::TermCriteria* criteria, double VVSlambda, ResultVoid* ocvrs_return) {
		try {
			cv::solvePnPRefineVVS(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, *criteria, VVSlambda);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnP_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solvePnP(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePnP_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_bool_int(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_OutputArray* rvec, const cv::_OutputArray* tvec, bool useExtrinsicGuess, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solvePnP(*objectPoints, *imagePoints, *cameraMatrix, *distCoeffs, *rvec, *tvec, useExtrinsicGuess, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* cameraMatrix1, const cv::_InputOutputArray* distCoeffs1, const cv::_InputOutputArray* cameraMatrix2, const cv::_InputOutputArray* distCoeffs2, cv::Size* imageSize, const cv::_InputOutputArray* R, const cv::_InputOutputArray* T, const cv::_OutputArray* E, const cv::_OutputArray* F, const cv::_OutputArray* perViewErrors, Result<double>* ocvrs_return) {
		try {
			double ret = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *E, *F, *perViewErrors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* cameraMatrix1, const cv::_InputOutputArray* distCoeffs1, const cv::_InputOutputArray* cameraMatrix2, const cv::_InputOutputArray* distCoeffs2, cv::Size* imageSize, const cv::_InputOutputArray* R, const cv::_InputOutputArray* T, const cv::_OutputArray* E, const cv::_OutputArray* F, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* perViewErrors, Result<double>* ocvrs_return) {
		try {
			double ret = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *E, *F, *rvecs, *tvecs, *perViewErrors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* cameraMatrix1, const cv::_InputOutputArray* distCoeffs1, const cv::_InputOutputArray* cameraMatrix2, const cv::_InputOutputArray* distCoeffs2, cv::Size* imageSize, const cv::_InputOutputArray* R, const cv::_InputOutputArray* T, const cv::_OutputArray* E, const cv::_OutputArray* F, const cv::_OutputArray* rvecs, const cv::_OutputArray* tvecs, const cv::_OutputArray* perViewErrors, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *E, *F, *rvecs, *tvecs, *perViewErrors, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* cameraMatrix1, const cv::_InputOutputArray* distCoeffs1, const cv::_InputOutputArray* cameraMatrix2, const cv::_InputOutputArray* distCoeffs2, cv::Size* imageSize, const cv::_InputOutputArray* R, const cv::_InputOutputArray* T, const cv::_OutputArray* E, const cv::_OutputArray* F, const cv::_OutputArray* perViewErrors, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *E, *F, *perViewErrors, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* cameraMatrix1, const cv::_InputOutputArray* distCoeffs1, const cv::_InputOutputArray* cameraMatrix2, const cv::_InputOutputArray* distCoeffs2, cv::Size* imageSize, const cv::_OutputArray* R, const cv::_OutputArray* T, const cv::_OutputArray* E, const cv::_OutputArray* F, Result<double>* ocvrs_return) {
		try {
			double ret = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *E, *F);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoCalibrate_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_TermCriteria(const cv::_InputArray* objectPoints, const cv::_InputArray* imagePoints1, const cv::_InputArray* imagePoints2, const cv::_InputOutputArray* cameraMatrix1, const cv::_InputOutputArray* distCoeffs1, const cv::_InputOutputArray* cameraMatrix2, const cv::_InputOutputArray* distCoeffs2, cv::Size* imageSize, const cv::_OutputArray* R, const cv::_OutputArray* T, const cv::_OutputArray* E, const cv::_OutputArray* F, int flags, cv::TermCriteria* criteria, Result<double>* ocvrs_return) {
		try {
			double ret = cv::stereoCalibrate(*objectPoints, *imagePoints1, *imagePoints2, *cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *E, *F, flags, *criteria);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoRectifyUncalibrated_const__InputArrayR_const__InputArrayR_const__InputArrayR_Size_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* F, cv::Size* imgSize, const cv::_OutputArray* H1, const cv::_OutputArray* H2, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::stereoRectifyUncalibrated(*points1, *points2, *F, *imgSize, *H1, *H2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoRectifyUncalibrated_const__InputArrayR_const__InputArrayR_const__InputArrayR_Size_const__OutputArrayR_const__OutputArrayR_double(const cv::_InputArray* points1, const cv::_InputArray* points2, const cv::_InputArray* F, cv::Size* imgSize, const cv::_OutputArray* H1, const cv::_OutputArray* H2, double threshold, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::stereoRectifyUncalibrated(*points1, *points2, *F, *imgSize, *H1, *H2, threshold);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoRectify_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, cv::Size* imageSize, const cv::_InputArray* R, const cv::_InputArray* T, const cv::_OutputArray* R1, const cv::_OutputArray* R2, const cv::_OutputArray* P1, const cv::_OutputArray* P2, const cv::_OutputArray* Q, ResultVoid* ocvrs_return) {
		try {
			cv::stereoRectify(*cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *R1, *R2, *P1, *P2, *Q);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_stereoRectify_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int_double_Size_RectX_RectX(const cv::_InputArray* cameraMatrix1, const cv::_InputArray* distCoeffs1, const cv::_InputArray* cameraMatrix2, const cv::_InputArray* distCoeffs2, cv::Size* imageSize, const cv::_InputArray* R, const cv::_InputArray* T, const cv::_OutputArray* R1, const cv::_OutputArray* R2, const cv::_OutputArray* P1, const cv::_OutputArray* P2, const cv::_OutputArray* Q, int flags, double alpha, cv::Size* newImageSize, cv::Rect* validPixROI1, cv::Rect* validPixROI2, ResultVoid* ocvrs_return) {
		try {
			cv::stereoRectify(*cameraMatrix1, *distCoeffs1, *cameraMatrix2, *distCoeffs2, *imageSize, *R, *T, *R1, *R2, *P1, *P2, *Q, flags, alpha, *newImageSize, validPixROI1, validPixROI2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_triangulatePoints_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* projMatr1, const cv::_InputArray* projMatr2, const cv::_InputArray* projPoints1, const cv::_InputArray* projPoints2, const cv::_OutputArray* points4D, ResultVoid* ocvrs_return) {
		try {
			cv::triangulatePoints(*projMatr1, *projMatr2, *projPoints1, *projPoints2, *points4D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistortImagePoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, ResultVoid* ocvrs_return) {
		try {
			cv::undistortImagePoints(*src, *dst, *cameraMatrix, *distCoeffs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistortImagePoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_TermCriteria(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, cv::TermCriteria* unnamed, ResultVoid* ocvrs_return) {
		try {
			cv::undistortImagePoints(*src, *dst, *cameraMatrix, *distCoeffs, *unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, ResultVoid* ocvrs_return) {
		try {
			cv::undistortPoints(*src, *dst, *cameraMatrix, *distCoeffs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* R, const cv::_InputArray* P, ResultVoid* ocvrs_return) {
		try {
			cv::undistortPoints(*src, *dst, *cameraMatrix, *distCoeffs, *R, *P);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistortPoints_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_TermCriteria(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* R, const cv::_InputArray* P, cv::TermCriteria* criteria, ResultVoid* ocvrs_return) {
		try {
			cv::undistortPoints(*src, *dst, *cameraMatrix, *distCoeffs, *R, *P, *criteria);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistort_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, ResultVoid* ocvrs_return) {
		try {
			cv::undistort(*src, *dst, *cameraMatrix, *distCoeffs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_undistort_const__InputArrayR_const__OutputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* cameraMatrix, const cv::_InputArray* distCoeffs, const cv::_InputArray* newCameraMatrix, ResultVoid* ocvrs_return) {
		try {
			cv::undistort(*src, *dst, *cameraMatrix, *distCoeffs, *newCameraMatrix);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_validateDisparity_const__InputOutputArrayR_const__InputArrayR_int_int(const cv::_InputOutputArray* disparity, const cv::_InputArray* cost, int minDisparity, int numberOfDisparities, ResultVoid* ocvrs_return) {
		try {
			cv::validateDisparity(*disparity, *cost, minDisparity, numberOfDisparities);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_validateDisparity_const__InputOutputArrayR_const__InputArrayR_int_int_int(const cv::_InputOutputArray* disparity, const cv::_InputArray* cost, int minDisparity, int numberOfDisparities, int disp12MaxDisp, ResultVoid* ocvrs_return) {
		try {
			cv::validateDisparity(*disparity, *cost, minDisparity, numberOfDisparities, disp12MaxDisp);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CirclesGridFinderParameters_CirclesGridFinderParameters(Result<cv::CirclesGridFinderParameters>* ocvrs_return) {
		try {
			cv::CirclesGridFinderParameters ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LMSolver_run_const_const__InputOutputArrayR(const cv::LMSolver* instance, const cv::_InputOutputArray* param, Result<int>* ocvrs_return) {
		try {
			int ret = instance->run(*param);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LMSolver_setMaxIters_int(cv::LMSolver* instance, int maxIters, ResultVoid* ocvrs_return) {
		try {
			instance->setMaxIters(maxIters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LMSolver_getMaxIters_const(const cv::LMSolver* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMaxIters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LMSolver_create_const_PtrLCallbackGR_int(const cv::Ptr<cv::LMSolver::Callback>* cb, int maxIters, Result<cv::Ptr<cv::LMSolver>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::LMSolver> ret = cv::LMSolver::create(*cb, maxIters);
			Ok(new cv::Ptr<cv::LMSolver>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LMSolver_create_const_PtrLCallbackGR_int_double(const cv::Ptr<cv::LMSolver::Callback>* cb, int maxIters, double eps, Result<cv::Ptr<cv::LMSolver>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::LMSolver> ret = cv::LMSolver::create(*cb, maxIters, eps);
			Ok(new cv::Ptr<cv::LMSolver>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_LMSolver_to_Algorithm(cv::LMSolver* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_LMSolver_delete(cv::LMSolver* instance) {
			delete instance;
	}
	
	void cv_LMSolver_Callback_compute_const_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::LMSolver::Callback* instance, const cv::_InputArray* param, const cv::_OutputArray* err, const cv::_OutputArray* J, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compute(*param, *err, *J);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LMSolver_Callback_delete(cv::LMSolver::Callback* instance) {
			delete instance;
	}
	
	void cv_StereoBM_getPreFilterType_const(const cv::StereoBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPreFilterType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setPreFilterType_int(cv::StereoBM* instance, int preFilterType, ResultVoid* ocvrs_return) {
		try {
			instance->setPreFilterType(preFilterType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getPreFilterSize_const(const cv::StereoBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPreFilterSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setPreFilterSize_int(cv::StereoBM* instance, int preFilterSize, ResultVoid* ocvrs_return) {
		try {
			instance->setPreFilterSize(preFilterSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getPreFilterCap_const(const cv::StereoBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPreFilterCap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setPreFilterCap_int(cv::StereoBM* instance, int preFilterCap, ResultVoid* ocvrs_return) {
		try {
			instance->setPreFilterCap(preFilterCap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getTextureThreshold_const(const cv::StereoBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTextureThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setTextureThreshold_int(cv::StereoBM* instance, int textureThreshold, ResultVoid* ocvrs_return) {
		try {
			instance->setTextureThreshold(textureThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getUniquenessRatio_const(const cv::StereoBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getUniquenessRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setUniquenessRatio_int(cv::StereoBM* instance, int uniquenessRatio, ResultVoid* ocvrs_return) {
		try {
			instance->setUniquenessRatio(uniquenessRatio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getSmallerBlockSize_const(const cv::StereoBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSmallerBlockSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setSmallerBlockSize_int(cv::StereoBM* instance, int blockSize, ResultVoid* ocvrs_return) {
		try {
			instance->setSmallerBlockSize(blockSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getROI1_const(const cv::StereoBM* instance, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->getROI1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setROI1_Rect(cv::StereoBM* instance, cv::Rect* roi1, ResultVoid* ocvrs_return) {
		try {
			instance->setROI1(*roi1);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_getROI2_const(const cv::StereoBM* instance, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->getROI2();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_setROI2_Rect(cv::StereoBM* instance, cv::Rect* roi2, ResultVoid* ocvrs_return) {
		try {
			instance->setROI2(*roi2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_create_int_int(int numDisparities, int blockSize, Result<cv::Ptr<cv::StereoBM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::StereoBM> ret = cv::StereoBM::create(numDisparities, blockSize);
			Ok(new cv::Ptr<cv::StereoBM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoBM_create(Result<cv::Ptr<cv::StereoBM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::StereoBM> ret = cv::StereoBM::create();
			Ok(new cv::Ptr<cv::StereoBM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_StereoBM_to_Algorithm(cv::StereoBM* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::StereoMatcher* cv_StereoBM_to_StereoMatcher(cv::StereoBM* instance) {
			return dynamic_cast<cv::StereoMatcher*>(instance);
	}
	
	void cv_StereoBM_delete(cv::StereoBM* instance) {
			delete instance;
	}
	
	void cv_StereoMatcher_compute_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::StereoMatcher* instance, const cv::_InputArray* left, const cv::_InputArray* right, const cv::_OutputArray* disparity, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*left, *right, *disparity);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_getMinDisparity_const(const cv::StereoMatcher* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinDisparity();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_setMinDisparity_int(cv::StereoMatcher* instance, int minDisparity, ResultVoid* ocvrs_return) {
		try {
			instance->setMinDisparity(minDisparity);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_getNumDisparities_const(const cv::StereoMatcher* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumDisparities();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_setNumDisparities_int(cv::StereoMatcher* instance, int numDisparities, ResultVoid* ocvrs_return) {
		try {
			instance->setNumDisparities(numDisparities);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_getBlockSize_const(const cv::StereoMatcher* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getBlockSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_setBlockSize_int(cv::StereoMatcher* instance, int blockSize, ResultVoid* ocvrs_return) {
		try {
			instance->setBlockSize(blockSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_getSpeckleWindowSize_const(const cv::StereoMatcher* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSpeckleWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_setSpeckleWindowSize_int(cv::StereoMatcher* instance, int speckleWindowSize, ResultVoid* ocvrs_return) {
		try {
			instance->setSpeckleWindowSize(speckleWindowSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_getSpeckleRange_const(const cv::StereoMatcher* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getSpeckleRange();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_setSpeckleRange_int(cv::StereoMatcher* instance, int speckleRange, ResultVoid* ocvrs_return) {
		try {
			instance->setSpeckleRange(speckleRange);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_getDisp12MaxDiff_const(const cv::StereoMatcher* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDisp12MaxDiff();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoMatcher_setDisp12MaxDiff_int(cv::StereoMatcher* instance, int disp12MaxDiff, ResultVoid* ocvrs_return) {
		try {
			instance->setDisp12MaxDiff(disp12MaxDiff);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::StereoBM* cv_StereoMatcher_to_StereoBM(cv::StereoMatcher* instance) {
			return dynamic_cast<cv::StereoBM*>(instance);
	}
	
	cv::StereoSGBM* cv_StereoMatcher_to_StereoSGBM(cv::StereoMatcher* instance) {
			return dynamic_cast<cv::StereoSGBM*>(instance);
	}
	
	cv::Algorithm* cv_StereoMatcher_to_Algorithm(cv::StereoMatcher* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_StereoMatcher_delete(cv::StereoMatcher* instance) {
			delete instance;
	}
	
	void cv_StereoSGBM_getPreFilterCap_const(const cv::StereoSGBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getPreFilterCap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_setPreFilterCap_int(cv::StereoSGBM* instance, int preFilterCap, ResultVoid* ocvrs_return) {
		try {
			instance->setPreFilterCap(preFilterCap);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_getUniquenessRatio_const(const cv::StereoSGBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getUniquenessRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_setUniquenessRatio_int(cv::StereoSGBM* instance, int uniquenessRatio, ResultVoid* ocvrs_return) {
		try {
			instance->setUniquenessRatio(uniquenessRatio);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_getP1_const(const cv::StereoSGBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getP1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_setP1_int(cv::StereoSGBM* instance, int P1, ResultVoid* ocvrs_return) {
		try {
			instance->setP1(P1);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_getP2_const(const cv::StereoSGBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getP2();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_setP2_int(cv::StereoSGBM* instance, int P2, ResultVoid* ocvrs_return) {
		try {
			instance->setP2(P2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_getMode_const(const cv::StereoSGBM* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_setMode_int(cv::StereoSGBM* instance, int mode, ResultVoid* ocvrs_return) {
		try {
			instance->setMode(mode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_create_int_int_int_int_int_int_int_int_int_int_int(int minDisparity, int numDisparities, int blockSize, int P1, int P2, int disp12MaxDiff, int preFilterCap, int uniquenessRatio, int speckleWindowSize, int speckleRange, int mode, Result<cv::Ptr<cv::StereoSGBM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::StereoSGBM> ret = cv::StereoSGBM::create(minDisparity, numDisparities, blockSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, mode);
			Ok(new cv::Ptr<cv::StereoSGBM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_StereoSGBM_create(Result<cv::Ptr<cv::StereoSGBM>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::StereoSGBM> ret = cv::StereoSGBM::create();
			Ok(new cv::Ptr<cv::StereoSGBM>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_StereoSGBM_to_Algorithm(cv::StereoSGBM* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::StereoMatcher* cv_StereoSGBM_to_StereoMatcher(cv::StereoSGBM* instance) {
			return dynamic_cast<cv::StereoMatcher*>(instance);
	}
	
	void cv_StereoSGBM_delete(cv::StereoSGBM* instance) {
			delete instance;
	}
	
	void cv_UsacParams_UsacParams(Result<cv::UsacParams>* ocvrs_return) {
		try {
			cv::UsacParams ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
