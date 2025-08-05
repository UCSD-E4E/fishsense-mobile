#include "core.hpp"
#include "core_types.hpp"

extern "C" {
	void cv_Cholesky_doubleX_size_t_int_doubleX_size_t_int(double* A, size_t astep, int m, double* b, size_t bstep, int n, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::Cholesky(A, astep, m, b, bstep, n);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Cholesky_floatX_size_t_int_floatX_size_t_int(float* A, size_t astep, int m, float* b, size_t bstep, int n, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::Cholesky(A, astep, m, b, bstep, n);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LUT_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputArray* lut, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::LUT(*src, *lut, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LU_doubleX_size_t_int_doubleX_size_t_int(double* A, size_t astep, int m, double* b, size_t bstep, int n, Result<int>* ocvrs_return) {
		try {
			int ret = cv::LU(A, astep, m, b, bstep, n);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LU_floatX_size_t_int_floatX_size_t_int(float* A, size_t astep, int m, float* b, size_t bstep, int n, Result<int>* ocvrs_return) {
		try {
			int ret = cv::LU(A, astep, m, b, bstep, n);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mahalanobis_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* v1, const cv::_InputArray* v2, const cv::_InputArray* icovar, Result<double>* ocvrs_return) {
		try {
			double ret = cv::Mahalanobis(*v1, *v2, *icovar);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCABackProject_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* data, const cv::_InputArray* mean, const cv::_InputArray* eigenvectors, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			cv::PCABackProject(*data, *mean, *eigenvectors, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCACompute_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR(const cv::_InputArray* data, const cv::_InputOutputArray* mean, const cv::_OutputArray* eigenvectors, ResultVoid* ocvrs_return) {
		try {
			cv::PCACompute(*data, *mean, *eigenvectors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCACompute_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* data, const cv::_InputOutputArray* mean, const cv::_OutputArray* eigenvectors, const cv::_OutputArray* eigenvalues, ResultVoid* ocvrs_return) {
		try {
			cv::PCACompute(*data, *mean, *eigenvectors, *eigenvalues);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCACompute_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_double(const cv::_InputArray* data, const cv::_InputOutputArray* mean, const cv::_OutputArray* eigenvectors, const cv::_OutputArray* eigenvalues, double retainedVariance, ResultVoid* ocvrs_return) {
		try {
			cv::PCACompute(*data, *mean, *eigenvectors, *eigenvalues, retainedVariance);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCACompute_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR_int(const cv::_InputArray* data, const cv::_InputOutputArray* mean, const cv::_OutputArray* eigenvectors, const cv::_OutputArray* eigenvalues, int maxComponents, ResultVoid* ocvrs_return) {
		try {
			cv::PCACompute(*data, *mean, *eigenvectors, *eigenvalues, maxComponents);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCACompute_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_double(const cv::_InputArray* data, const cv::_InputOutputArray* mean, const cv::_OutputArray* eigenvectors, double retainedVariance, ResultVoid* ocvrs_return) {
		try {
			cv::PCACompute(*data, *mean, *eigenvectors, retainedVariance);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCACompute_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_int(const cv::_InputArray* data, const cv::_InputOutputArray* mean, const cv::_OutputArray* eigenvectors, int maxComponents, ResultVoid* ocvrs_return) {
		try {
			cv::PCACompute(*data, *mean, *eigenvectors, maxComponents);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCAProject_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* data, const cv::_InputArray* mean, const cv::_InputArray* eigenvectors, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			cv::PCAProject(*data, *mean, *eigenvectors, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PSNR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, Result<double>* ocvrs_return) {
		try {
			double ret = cv::PSNR(*src1, *src2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PSNR_const__InputArrayR_const__InputArrayR_double(const cv::_InputArray* src1, const cv::_InputArray* src2, double R, Result<double>* ocvrs_return) {
		try {
			double ret = cv::PSNR(*src1, *src2, R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVBackSubst_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* w, const cv::_InputArray* u, const cv::_InputArray* vt, const cv::_InputArray* rhs, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::SVBackSubst(*w, *u, *vt, *rhs, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVDecomp_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* w, const cv::_OutputArray* u, const cv::_OutputArray* vt, ResultVoid* ocvrs_return) {
		try {
			cv::SVDecomp(*src, *w, *u, *vt);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVDecomp_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* w, const cv::_OutputArray* u, const cv::_OutputArray* vt, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::SVDecomp(*src, *w, *u, *vt, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_abs_const_MatExprR(const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::abs(*e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_abs_const_MatR(const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::abs(*m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_absdiff_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::absdiff(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_addWeighted_const__InputArrayR_double_const__InputArrayR_double_double_const__OutputArrayR(const cv::_InputArray* src1, double alpha, const cv::_InputArray* src2, double beta, double gamma, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::addWeighted(*src1, alpha, *src2, beta, gamma, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_addWeighted_const__InputArrayR_double_const__InputArrayR_double_double_const__OutputArrayR_int(const cv::_InputArray* src1, double alpha, const cv::_InputArray* src2, double beta, double gamma, const cv::_OutputArray* dst, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::addWeighted(*src1, alpha, *src2, beta, gamma, *dst, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_add_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::add(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_add_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR_int(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, const cv::_InputArray* mask, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::add(*src1, *src2, *dst, *mask, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_batchDistance_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dist, int dtype, const cv::_OutputArray* nidx, ResultVoid* ocvrs_return) {
		try {
			cv::batchDistance(*src1, *src2, *dist, dtype, *nidx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_batchDistance_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_const__OutputArrayR_int_int_const__InputArrayR_int_bool(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dist, int dtype, const cv::_OutputArray* nidx, int normType, int K, const cv::_InputArray* mask, int update, bool crosscheck, ResultVoid* ocvrs_return) {
		try {
			cv::batchDistance(*src1, *src2, *dist, dtype, *nidx, normType, K, *mask, update, crosscheck);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_and_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_and(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_and_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_and(*src1, *src2, *dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_not_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_not(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_not_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_not(*src, *dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_or_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_or(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_or_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_or(*src1, *src2, *dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_xor_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_xor(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_bitwise_xor_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::bitwise_xor(*src1, *src2, *dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_borderInterpolate_int_int_int(int p, int len, int borderType, Result<int>* ocvrs_return) {
		try {
			int ret = cv::borderInterpolate(p, len, borderType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_broadcast_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputArray* shape, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::broadcast(*src, *shape, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calcCovarMatrix_const__InputArrayR_const__OutputArrayR_const__InputOutputArrayR_int(const cv::_InputArray* samples, const cv::_OutputArray* covar, const cv::_InputOutputArray* mean, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::calcCovarMatrix(*samples, *covar, *mean, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_calcCovarMatrix_const__InputArrayR_const__OutputArrayR_const__InputOutputArrayR_int_int(const cv::_InputArray* samples, const cv::_OutputArray* covar, const cv::_InputOutputArray* mean, int flags, int ctype, ResultVoid* ocvrs_return) {
		try {
			cv::calcCovarMatrix(*samples, *covar, *mean, flags, ctype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cartToPolar_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* x, const cv::_InputArray* y, const cv::_OutputArray* magnitude, const cv::_OutputArray* angle, ResultVoid* ocvrs_return) {
		try {
			cv::cartToPolar(*x, *y, *magnitude, *angle);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cartToPolar_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_bool(const cv::_InputArray* x, const cv::_InputArray* y, const cv::_OutputArray* magnitude, const cv::_OutputArray* angle, bool angleInDegrees, ResultVoid* ocvrs_return) {
		try {
			cv::cartToPolar(*x, *y, *magnitude, *angle, angleInDegrees);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_checkHardwareSupport_int(int feature, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::checkHardwareSupport(feature);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_checkRange_const__InputArrayR(const cv::_InputArray* a, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::checkRange(*a);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_checkRange_const__InputArrayR_bool_PointX_double_double(const cv::_InputArray* a, bool quiet, cv::Point* pos, double minVal, double maxVal, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::checkRange(*a, quiet, pos, minVal, maxVal);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_compare_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, int cmpop, ResultVoid* ocvrs_return) {
		try {
			cv::compare(*src1, *src2, *dst, cmpop);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_completeSymm_const__InputOutputArrayR(const cv::_InputOutputArray* m, ResultVoid* ocvrs_return) {
		try {
			cv::completeSymm(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_completeSymm_const__InputOutputArrayR_bool(const cv::_InputOutputArray* m, bool lowerToUpper, ResultVoid* ocvrs_return) {
		try {
			cv::completeSymm(*m, lowerToUpper);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_convertFp16_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::convertFp16(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_convertScaleAbs_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::convertScaleAbs(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_convertScaleAbs_const__InputArrayR_const__OutputArrayR_double_double(const cv::_InputArray* src, const cv::_OutputArray* dst, double alpha, double beta, ResultVoid* ocvrs_return) {
		try {
			cv::convertScaleAbs(*src, *dst, alpha, beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_copyMakeBorder_const__InputArrayR_const__OutputArrayR_int_int_int_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int top, int bottom, int left, int right, int borderType, ResultVoid* ocvrs_return) {
		try {
			cv::copyMakeBorder(*src, *dst, top, bottom, left, right, borderType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_copyMakeBorder_const__InputArrayR_const__OutputArrayR_int_int_int_int_int_const_ScalarR(const cv::_InputArray* src, const cv::_OutputArray* dst, int top, int bottom, int left, int right, int borderType, const cv::Scalar* value, ResultVoid* ocvrs_return) {
		try {
			cv::copyMakeBorder(*src, *dst, top, bottom, left, right, borderType, *value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_copyTo_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::copyTo(*src, *dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_countNonZero_const__InputArrayR(const cv::_InputArray* src, Result<int>* ocvrs_return) {
		try {
			int ret = cv::countNonZero(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cubeRoot_float(float val, Result<float>* ocvrs_return) {
		try {
			float ret = cv::cubeRoot(val);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_createContinuous_int_int_int_const__OutputArrayR(int rows, int cols, int type, const cv::_OutputArray* arr, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::createContinuous(rows, cols, type, *arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_createGpuMatFromCudaMemory_Size_int_size_t(cv::Size* size, int type, size_t cudaMemoryAddress, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = cv::cuda::createGpuMatFromCudaMemory(*size, type, cudaMemoryAddress);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_createGpuMatFromCudaMemory_Size_int_size_t_size_t(cv::Size* size, int type, size_t cudaMemoryAddress, size_t step, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = cv::cuda::createGpuMatFromCudaMemory(*size, type, cudaMemoryAddress, step);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_createGpuMatFromCudaMemory_int_int_int_size_t(int rows, int cols, int type, size_t cudaMemoryAddress, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = cv::cuda::createGpuMatFromCudaMemory(rows, cols, type, cudaMemoryAddress);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_createGpuMatFromCudaMemory_int_int_int_size_t_size_t(int rows, int cols, int type, size_t cudaMemoryAddress, size_t step, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = cv::cuda::createGpuMatFromCudaMemory(rows, cols, type, cudaMemoryAddress, step);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_deviceSupports_FeatureSet(cv::cuda::FeatureSet feature_set, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::deviceSupports(feature_set);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_ensureSizeIsEnough_int_int_int_const__OutputArrayR(int rows, int cols, int type, const cv::_OutputArray* arr, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::ensureSizeIsEnough(rows, cols, type, *arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_getCudaEnabledDeviceCount(Result<int>* ocvrs_return) {
		try {
			int ret = cv::cuda::getCudaEnabledDeviceCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_getDevice(Result<int>* ocvrs_return) {
		try {
			int ret = cv::cuda::getDevice();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_printCudaDeviceInfo_int(int device, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::printCudaDeviceInfo(device);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_printShortCudaDeviceInfo_int(int device, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::printShortCudaDeviceInfo(device);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_registerPageLocked_MatR(cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::registerPageLocked(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_resetDevice(ResultVoid* ocvrs_return) {
		try {
			cv::cuda::resetDevice();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_setBufferPoolConfig_int_size_t_int(int deviceId, size_t stackSize, int stackCount, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::setBufferPoolConfig(deviceId, stackSize, stackCount);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_setBufferPoolUsage_bool(bool on, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::setBufferPoolUsage(on);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_setDevice_int(int device, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::setDevice(device);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_setGlDevice(ResultVoid* ocvrs_return) {
		try {
			cv::cuda::setGlDevice();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_setGlDevice_int(int device, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::setGlDevice(device);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_unregisterPageLocked_MatR(cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::unregisterPageLocked(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_wrapStream_size_t(size_t cudaStreamMemoryAddress, Result<cv::cuda::Stream*>* ocvrs_return) {
		try {
			cv::cuda::Stream ret = cv::cuda::wrapStream(cudaStreamMemoryAddress);
			Ok(new cv::cuda::Stream(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dct_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::dct(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dct_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::dct(*src, *dst, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_depthToString_int(int depth, Result<void*>* ocvrs_return) {
		try {
			const char* ret = cv::depthToString(depth);
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_MatChannels_const_int_const_CheckContextR(const int v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_MatChannels(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_MatChannels_const_int_const_int_const_CheckContextR(const int v1, const int v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_MatChannels(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_MatDepth_const_int_const_CheckContextR(const int v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_MatDepth(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_MatDepth_const_int_const_int_const_CheckContextR(const int v1, const int v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_MatDepth(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_MatType_const_int_const_CheckContextR(const int v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_MatType(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_MatType_const_int_const_int_const_CheckContextR(const int v1, const int v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_MatType(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_Size_LintG_const_CheckContextR(const cv::Size_<int>* v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(*v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_Size_LintG_const_Size_LintG_const_CheckContextR(const cv::Size_<int>* v1, const cv::Size_<int>* v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(*v1, *v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_bool_const_bool_const_CheckContextR(const bool v1, const bool v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_double_const_CheckContextR(const double v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_double_const_double_const_CheckContextR(const double v1, const double v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_float_const_CheckContextR(const float v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_float_const_float_const_CheckContextR(const float v1, const float v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_int_const_CheckContextR(const int v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_int_const_int_const_CheckContextR(const int v1, const int v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_size_t_const_CheckContextR(const size_t v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_size_t_const_size_t_const_CheckContextR(const size_t v1, const size_t v2, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(v1, v2, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_auto_const_stringR_const_CheckContextR(const char* v1, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_auto(std::string(v1), *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_false_const_bool_const_CheckContextR(const bool v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_false(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_check_failed_true_const_bool_const_CheckContextR(const bool v, const cv::detail::CheckContext* ctx, ResultVoid* ocvrs_return) {
		try {
			cv::detail::check_failed_true(v, *ctx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_determinant_const__InputArrayR(const cv::_InputArray* mtx, Result<double>* ocvrs_return) {
		try {
			double ret = cv::determinant(*mtx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dft_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::dft(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_dft_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, int nonzeroRows, ResultVoid* ocvrs_return) {
		try {
			cv::dft(*src, *dst, flags, nonzeroRows);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertFromD3D10Texture2D_ID3D10Texture2DX_const__OutputArrayR(ID3D10Texture2D* pD3D10Texture2D, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertFromD3D10Texture2D(pD3D10Texture2D, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertFromD3D11Texture2D_ID3D11Texture2DX_const__OutputArrayR(ID3D11Texture2D* pD3D11Texture2D, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertFromD3D11Texture2D(pD3D11Texture2D, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertFromDirect3DSurface9_IDirect3DSurface9X_const__OutputArrayR(IDirect3DSurface9* pDirect3DSurface9, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertFromDirect3DSurface9(pDirect3DSurface9, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertFromDirect3DSurface9_IDirect3DSurface9X_const__OutputArrayR_voidX(IDirect3DSurface9* pDirect3DSurface9, const cv::_OutputArray* dst, void* surfaceSharedHandle, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertFromDirect3DSurface9(pDirect3DSurface9, *dst, surfaceSharedHandle);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertToD3D10Texture2D_const__InputArrayR_ID3D10Texture2DX(const cv::_InputArray* src, ID3D10Texture2D* pD3D10Texture2D, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertToD3D10Texture2D(*src, pD3D10Texture2D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertToD3D11Texture2D_const__InputArrayR_ID3D11Texture2DX(const cv::_InputArray* src, ID3D11Texture2D* pD3D11Texture2D, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertToD3D11Texture2D(*src, pD3D11Texture2D);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertToDirect3DSurface9_const__InputArrayR_IDirect3DSurface9X(const cv::_InputArray* src, IDirect3DSurface9* pDirect3DSurface9, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertToDirect3DSurface9(*src, pDirect3DSurface9);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_convertToDirect3DSurface9_const__InputArrayR_IDirect3DSurface9X_voidX(const cv::_InputArray* src, IDirect3DSurface9* pDirect3DSurface9, void* surfaceSharedHandle, ResultVoid* ocvrs_return) {
		try {
			cv::directx::convertToDirect3DSurface9(*src, pDirect3DSurface9, surfaceSharedHandle);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_getTypeFromD3DFORMAT_const_int(const int iD3DFORMAT, Result<int>* ocvrs_return) {
		try {
			int ret = cv::directx::getTypeFromD3DFORMAT(iD3DFORMAT);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_getTypeFromDXGI_FORMAT_const_int(const int iDXGI_FORMAT, Result<int>* ocvrs_return) {
		try {
			int ret = cv::directx::getTypeFromDXGI_FORMAT(iDXGI_FORMAT);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_ocl_initializeContextFromD3D10Device_ID3D10DeviceX(ID3D10Device* pD3D10Device, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::directx::ocl::initializeContextFromD3D10Device(pD3D10Device);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_ocl_initializeContextFromD3D11Device_ID3D11DeviceX(ID3D11Device* pD3D11Device, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::directx::ocl::initializeContextFromD3D11Device(pD3D11Device);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_ocl_initializeContextFromDirect3DDevice9Ex_IDirect3DDevice9ExX(IDirect3DDevice9Ex* pDirect3DDevice9Ex, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::directx::ocl::initializeContextFromDirect3DDevice9Ex(pDirect3DDevice9Ex);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_directx_ocl_initializeContextFromDirect3DDevice9_IDirect3DDevice9X(IDirect3DDevice9* pDirect3DDevice9, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::directx::ocl::initializeContextFromDirect3DDevice9(pDirect3DDevice9);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_divide_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::divide(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_divide_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_int(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, double scale, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::divide(*src1, *src2, *dst, scale, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_divide_double_const__InputArrayR_const__OutputArrayR(double scale, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::divide(scale, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_divide_double_const__InputArrayR_const__OutputArrayR_int(double scale, const cv::_InputArray* src2, const cv::_OutputArray* dst, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::divide(scale, *src2, *dst, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_eigenNonSymmetric_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* eigenvalues, const cv::_OutputArray* eigenvectors, ResultVoid* ocvrs_return) {
		try {
			cv::eigenNonSymmetric(*src, *eigenvalues, *eigenvectors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_eigen_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* eigenvalues, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::eigen(*src, *eigenvalues);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_eigen_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* eigenvalues, const cv::_OutputArray* eigenvectors, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::eigen(*src, *eigenvalues, *eigenvectors);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_error_const_ExceptionR(const cv::Exception* exc, ResultVoid* ocvrs_return) {
		try {
			cv::error(*exc);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_error_int_const_StringR_const_charX_const_charX_int(int code, const char* err, const char* func, const char* file, int line, ResultVoid* ocvrs_return) {
		try {
			cv::error(code, std::string(err), func, file, line);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_exp_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::exp(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_extractChannel_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int coi, ResultVoid* ocvrs_return) {
		try {
			cv::extractChannel(*src, *dst, coi);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_fastAtan2_float_float(float y, float x, Result<float>* ocvrs_return) {
		try {
			float ret = cv::fastAtan2(y, x);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_findNonZero_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* idx, ResultVoid* ocvrs_return) {
		try {
			cv::findNonZero(*src, *idx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_flipND_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int axis, ResultVoid* ocvrs_return) {
		try {
			cv::flipND(*src, *dst, axis);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_flip_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flipCode, ResultVoid* ocvrs_return) {
		try {
			cv::flip(*src, *dst, flipCode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_gemm_const__InputArrayR_const__InputArrayR_double_const__InputArrayR_double_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, double alpha, const cv::_InputArray* src3, double beta, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::gemm(*src1, *src2, alpha, *src3, beta, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_gemm_const__InputArrayR_const__InputArrayR_double_const__InputArrayR_double_const__OutputArrayR_int(const cv::_InputArray* src1, const cv::_InputArray* src2, double alpha, const cv::_InputArray* src3, double beta, const cv::_OutputArray* dst, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::gemm(*src1, *src2, alpha, *src3, beta, *dst, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getBuildInformation(Result<void*>* ocvrs_return) {
		try {
			const cv::String ret = cv::getBuildInformation();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getCPUFeaturesLine(Result<void*>* ocvrs_return) {
		try {
			std::string ret = cv::getCPUFeaturesLine();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getCPUTickCount(Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = cv::getCPUTickCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getDefaultAlgorithmHint(Result<cv::AlgorithmHint>* ocvrs_return) {
		try {
			cv::AlgorithmHint ret = cv::getDefaultAlgorithmHint();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getElemSize_int(int type, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = cv::getElemSize(type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getHardwareFeatureName_int(int feature, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::getHardwareFeatureName(feature);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getLogLevel(Result<int>* ocvrs_return) {
		try {
			int ret = cv::getLogLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getNumThreads(Result<int>* ocvrs_return) {
		try {
			int ret = cv::getNumThreads();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getNumberOfCPUs(Result<int>* ocvrs_return) {
		try {
			int ret = cv::getNumberOfCPUs();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getOptimalDFTSize_int(int vecsize, Result<int>* ocvrs_return) {
		try {
			int ret = cv::getOptimalDFTSize(vecsize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getThreadNum(Result<int>* ocvrs_return) {
		try {
			int ret = cv::getThreadNum();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getTickCount(Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = cv::getTickCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_getTickFrequency(Result<double>* ocvrs_return) {
		try {
			double ret = cv::getTickFrequency();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_getVersionMajor() {
			int ret = cv::getVersionMajor();
			return ret;
	}
	
	int cv_getVersionMinor() {
			int ret = cv::getVersionMinor();
			return ret;
	}
	
	int cv_getVersionRevision() {
			int ret = cv::getVersionRevision();
			return ret;
	}
	
	void cv_getVersionString(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::getVersionString();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_glob_String_vectorLStringGR(const char* pattern, std::vector<cv::String>* result, ResultVoid* ocvrs_return) {
		try {
			cv::glob(std::string(pattern), *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_glob_String_vectorLStringGR_bool(const char* pattern, std::vector<cv::String>* result, bool recursive, ResultVoid* ocvrs_return) {
		try {
			cv::glob(std::string(pattern), *result, recursive);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hasNonZero_const__InputArrayR(const cv::_InputArray* src, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::hasNonZero(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_haveOpenVX(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::haveOpenVX();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hconcat_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::hconcat(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hconcat_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::hconcat(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_idct_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::idct(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_idct_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::idct(*src, *dst, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_idft_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::idft(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_idft_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, int nonzeroRows, ResultVoid* ocvrs_return) {
		try {
			cv::idft(*src, *dst, flags, nonzeroRows);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_inRange_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_InputArray* lowerb, const cv::_InputArray* upperb, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::inRange(*src, *lowerb, *upperb, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_insertChannel_const__InputArrayR_const__InputOutputArrayR_int(const cv::_InputArray* src, const cv::_InputOutputArray* dst, int coi, ResultVoid* ocvrs_return) {
		try {
			cv::insertChannel(*src, *dst, coi);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_getFlags(Result<cv::instr::FLAGS>* ocvrs_return) {
		try {
			cv::instr::FLAGS ret = cv::instr::getFlags();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_resetTrace(ResultVoid* ocvrs_return) {
		try {
			cv::instr::resetTrace();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_setFlags_FLAGS(cv::instr::FLAGS modeFlags, ResultVoid* ocvrs_return) {
		try {
			cv::instr::setFlags(modeFlags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_setUseInstrumentation_bool(bool flag, ResultVoid* ocvrs_return) {
		try {
			cv::instr::setUseInstrumentation(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_useInstrumentation(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::instr::useInstrumentation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_invert_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, Result<double>* ocvrs_return) {
		try {
			double ret = cv::invert(*src, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_invert_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, Result<double>* ocvrs_return) {
		try {
			double ret = cv::invert(*src, *dst, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_getIppErrorLocation(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::ipp::getIppErrorLocation();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_getIppFeatures(Result<unsigned long long>* ocvrs_return) {
		try {
			unsigned long long ret = cv::ipp::getIppFeatures();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_getIppStatus(Result<int>* ocvrs_return) {
		try {
			int ret = cv::ipp::getIppStatus();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_getIppVersion(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::ipp::getIppVersion();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_setIppStatus_int(int status, ResultVoid* ocvrs_return) {
		try {
			cv::ipp::setIppStatus(status);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_setIppStatus_int_const_charX_const_charX_int(int status, const char* funcname, const char* filename, int line, ResultVoid* ocvrs_return) {
		try {
			cv::ipp::setIppStatus(status, funcname, filename, line);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_setUseIPP_NotExact_bool(bool flag, ResultVoid* ocvrs_return) {
		try {
			cv::ipp::setUseIPP_NotExact(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_setUseIPP_bool(bool flag, ResultVoid* ocvrs_return) {
		try {
			cv::ipp::setUseIPP(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_useIPP(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ipp::useIPP();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ipp_useIPP_NotExact(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ipp::useIPP_NotExact();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kmeans_const__InputArrayR_int_const__InputOutputArrayR_TermCriteria_int_int(const cv::_InputArray* data, int K, const cv::_InputOutputArray* bestLabels, cv::TermCriteria* criteria, int attempts, int flags, Result<double>* ocvrs_return) {
		try {
			double ret = cv::kmeans(*data, K, *bestLabels, *criteria, attempts, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_kmeans_const__InputArrayR_int_const__InputOutputArrayR_TermCriteria_int_int_const__OutputArrayR(const cv::_InputArray* data, int K, const cv::_InputOutputArray* bestLabels, cv::TermCriteria* criteria, int attempts, int flags, const cv::_OutputArray* centers, Result<double>* ocvrs_return) {
		try {
			double ret = cv::kmeans(*data, K, *bestLabels, *criteria, attempts, flags, *centers);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_log_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::log(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_magnitude_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* x, const cv::_InputArray* y, const cv::_OutputArray* magnitude, ResultVoid* ocvrs_return) {
		try {
			cv::magnitude(*x, *y, *magnitude);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_max_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::max(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_max_const_MatR_const_MatR_MatR(const cv::Mat* src1, const cv::Mat* src2, cv::Mat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::max(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_max_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::max(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_max_const_UMatR_const_UMatR_UMatR(const cv::UMat* src1, const cv::UMat* src2, cv::UMat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::max(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_max_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::max(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_max_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::max(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_meanStdDev_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* mean, const cv::_OutputArray* stddev, ResultVoid* ocvrs_return) {
		try {
			cv::meanStdDev(*src, *mean, *stddev);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_meanStdDev_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* mean, const cv::_OutputArray* stddev, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::meanStdDev(*src, *mean, *stddev, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mean_const__InputArrayR(const cv::_InputArray* src, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::mean(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mean_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_InputArray* mask, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::mean(*src, *mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_merge_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* mv, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::merge(*mv, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_minMaxIdx_const__InputArrayR_doubleX(const cv::_InputArray* src, double* minVal, ResultVoid* ocvrs_return) {
		try {
			cv::minMaxIdx(*src, minVal);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_minMaxIdx_const__InputArrayR_doubleX_doubleX_intX_intX_const__InputArrayR(const cv::_InputArray* src, double* minVal, double* maxVal, int* minIdx, int* maxIdx, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::minMaxIdx(*src, minVal, maxVal, minIdx, maxIdx, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_minMaxLoc_const_SparseMatR_doubleX_doubleX(const cv::SparseMat* a, double* minVal, double* maxVal, ResultVoid* ocvrs_return) {
		try {
			cv::minMaxLoc(*a, minVal, maxVal);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_minMaxLoc_const_SparseMatR_doubleX_doubleX_intX_intX(const cv::SparseMat* a, double* minVal, double* maxVal, int* minIdx, int* maxIdx, ResultVoid* ocvrs_return) {
		try {
			cv::minMaxLoc(*a, minVal, maxVal, minIdx, maxIdx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_minMaxLoc_const__InputArrayR_doubleX(const cv::_InputArray* src, double* minVal, ResultVoid* ocvrs_return) {
		try {
			cv::minMaxLoc(*src, minVal);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_minMaxLoc_const__InputArrayR_doubleX_doubleX_PointX_PointX_const__InputArrayR(const cv::_InputArray* src, double* minVal, double* maxVal, cv::Point* minLoc, cv::Point* maxLoc, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::minMaxLoc(*src, minVal, maxVal, minLoc, maxLoc, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_min_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::min(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_min_const_MatR_const_MatR_MatR(const cv::Mat* src1, const cv::Mat* src2, cv::Mat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::min(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_min_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::min(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_min_const_UMatR_const_UMatR_UMatR(const cv::UMat* src1, const cv::UMat* src2, cv::UMat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::min(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_min_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::min(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_min_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::min(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mixChannels_const__InputArrayR_const__InputOutputArrayR_const_intX_size_t(const cv::_InputArray* src, const cv::_InputOutputArray* dst, const int* fromTo, size_t npairs, ResultVoid* ocvrs_return) {
		try {
			cv::mixChannels(*src, *dst, fromTo, npairs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mixChannels_const__InputArrayR_const__InputOutputArrayR_const_vectorLintGR(const cv::_InputArray* src, const cv::_InputOutputArray* dst, const std::vector<int>* fromTo, ResultVoid* ocvrs_return) {
		try {
			cv::mixChannels(*src, *dst, *fromTo);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mulSpectrums_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* a, const cv::_InputArray* b, const cv::_OutputArray* c, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::mulSpectrums(*a, *b, *c, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mulSpectrums_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int_bool(const cv::_InputArray* a, const cv::_InputArray* b, const cv::_OutputArray* c, int flags, bool conjB, ResultVoid* ocvrs_return) {
		try {
			cv::mulSpectrums(*a, *b, *c, flags, conjB);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mulTransposed_const__InputArrayR_const__OutputArrayR_bool(const cv::_InputArray* src, const cv::_OutputArray* dst, bool aTa, ResultVoid* ocvrs_return) {
		try {
			cv::mulTransposed(*src, *dst, aTa);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_mulTransposed_const__InputArrayR_const__OutputArrayR_bool_const__InputArrayR_double_int(const cv::_InputArray* src, const cv::_OutputArray* dst, bool aTa, const cv::_InputArray* delta, double scale, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::mulTransposed(*src, *dst, aTa, *delta, scale, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multiply_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::multiply(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_multiply_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double_int(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, double scale, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::multiply(*src1, *src2, *dst, scale, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	const cv::_InputOutputArray* cv_noArray() {
			const cv::_InputOutputArray ret = cv::noArray();
			return new const cv::_InputOutputArray(ret);
	}
	
	void cv_norm_const_SparseMatR_int(const cv::SparseMat* src, int normType, Result<double>* ocvrs_return) {
		try {
			double ret = cv::norm(*src, normType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_norm_const__InputArrayR(const cv::_InputArray* src1, Result<double>* ocvrs_return) {
		try {
			double ret = cv::norm(*src1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_norm_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, Result<double>* ocvrs_return) {
		try {
			double ret = cv::norm(*src1, *src2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_norm_const__InputArrayR_const__InputArrayR_int_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, int normType, const cv::_InputArray* mask, Result<double>* ocvrs_return) {
		try {
			double ret = cv::norm(*src1, *src2, normType, *mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_norm_const__InputArrayR_int_const__InputArrayR(const cv::_InputArray* src1, int normType, const cv::_InputArray* mask, Result<double>* ocvrs_return) {
		try {
			double ret = cv::norm(*src1, normType, *mask);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_normalize_const_SparseMatR_SparseMatR_double_int(const cv::SparseMat* src, cv::SparseMat* dst, double alpha, int normType, ResultVoid* ocvrs_return) {
		try {
			cv::normalize(*src, *dst, alpha, normType);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_normalize_const__InputArrayR_const__InputOutputArrayR(const cv::_InputArray* src, const cv::_InputOutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::normalize(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_normalize_const__InputArrayR_const__InputOutputArrayR_double_double_int_int_const__InputArrayR(const cv::_InputArray* src, const cv::_InputOutputArray* dst, double alpha, double beta, int norm_type, int dtype, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::normalize(*src, *dst, alpha, beta, norm_type, dtype, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_attachContext_const_StringR_voidX_voidX_voidX(const char* platformName, void* platformID, void* context, void* deviceID, ResultVoid* ocvrs_return) {
		try {
			cv::ocl::attachContext(std::string(platformName), platformID, context, deviceID);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_buildOptionsAddMatrixDescription_StringR_const_StringR_const__InputArrayR(void** buildOptions, const char* name, const cv::_InputArray* _m, ResultVoid* ocvrs_return) {
		try {
			std::string buildOptions_out;
			cv::ocl::buildOptionsAddMatrixDescription(buildOptions_out, std::string(name), *_m);
			*buildOptions = ocvrs_create_string(buildOptions_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_checkOptimalVectorWidth_const_intX_const__InputArrayR(const int* vectorWidths, const cv::_InputArray* src1, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ocl::checkOptimalVectorWidth(vectorWidths, *src1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_checkOptimalVectorWidth_const_intX_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_OclVectorStrategy(const int* vectorWidths, const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_InputArray* src3, const cv::_InputArray* src4, const cv::_InputArray* src5, const cv::_InputArray* src6, const cv::_InputArray* src7, const cv::_InputArray* src8, const cv::_InputArray* src9, cv::ocl::OclVectorStrategy strat, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ocl::checkOptimalVectorWidth(vectorWidths, *src1, *src2, *src3, *src4, *src5, *src6, *src7, *src8, *src9, strat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_convertFromBuffer_voidX_size_t_int_int_int_UMatR(void* cl_mem_buffer, size_t step, int rows, int cols, int type, cv::UMat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ocl::convertFromBuffer(cl_mem_buffer, step, rows, cols, type, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_convertFromImage_voidX_UMatR(void* cl_mem_image, cv::UMat* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ocl::convertFromImage(cl_mem_image, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_convertTypeStr_int_int_int_charX(int sdepth, int ddepth, int cn, void** buf, Result<void*>* ocvrs_return) {
		try {
			std::unique_ptr<char[]> buf_out = std::make_unique<char[]>(1024);
			const char* ret = cv::ocl::convertTypeStr(sdepth, ddepth, cn, buf_out.get());
			*buf = ocvrs_create_string(buf_out.get());
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_finish(ResultVoid* ocvrs_return) {
		try {
			cv::ocl::finish();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_getOpenCLErrorString_int(int errorCode, Result<void*>* ocvrs_return) {
		try {
			const char* ret = cv::ocl::getOpenCLErrorString(errorCode);
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_getPlatfomsInfo_vectorLPlatformInfoGR(std::vector<cv::ocl::PlatformInfo>* platform_info, ResultVoid* ocvrs_return) {
		try {
			cv::ocl::getPlatfomsInfo(*platform_info);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_haveAmdBlas(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::haveAmdBlas();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_haveAmdFft(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::haveAmdFft();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_haveOpenCL(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::haveOpenCL();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_haveSVM(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::haveSVM();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_kernelToStr_const__InputArrayR(const cv::_InputArray* _kernel, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::ocl::kernelToStr(*_kernel);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_kernelToStr_const__InputArrayR_int_const_charX(const cv::_InputArray* _kernel, int ddepth, const char* name, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::ocl::kernelToStr(*_kernel, ddepth, name);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_memopTypeToStr_int(int t, Result<void*>* ocvrs_return) {
		try {
			const char* ret = cv::ocl::memopTypeToStr(t);
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_predictOptimalVectorWidthMax_const__InputArrayR(const cv::_InputArray* src1, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ocl::predictOptimalVectorWidthMax(*src1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_predictOptimalVectorWidthMax_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_InputArray* src3, const cv::_InputArray* src4, const cv::_InputArray* src5, const cv::_InputArray* src6, const cv::_InputArray* src7, const cv::_InputArray* src8, const cv::_InputArray* src9, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ocl::predictOptimalVectorWidthMax(*src1, *src2, *src3, *src4, *src5, *src6, *src7, *src8, *src9);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_predictOptimalVectorWidth_const__InputArrayR(const cv::_InputArray* src1, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ocl::predictOptimalVectorWidth(*src1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_predictOptimalVectorWidth_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_OclVectorStrategy(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_InputArray* src3, const cv::_InputArray* src4, const cv::_InputArray* src5, const cv::_InputArray* src6, const cv::_InputArray* src7, const cv::_InputArray* src8, const cv::_InputArray* src9, cv::ocl::OclVectorStrategy strat, Result<int>* ocvrs_return) {
		try {
			int ret = cv::ocl::predictOptimalVectorWidth(*src1, *src2, *src3, *src4, *src5, *src6, *src7, *src8, *src9, strat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_setUseOpenCL_bool(bool flag, ResultVoid* ocvrs_return) {
		try {
			cv::ocl::setUseOpenCL(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_typeToStr_int(int t, Result<void*>* ocvrs_return) {
		try {
			const char* ret = cv::ocl::typeToStr(t);
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_useOpenCL(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::useOpenCL();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_vecopTypeToStr_int(int t, Result<void*>* ocvrs_return) {
		try {
			const char* ret = cv::ocl::vecopTypeToStr(t);
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_convertFromGLTexture2D_const_Texture2DR_const__OutputArrayR(const cv::ogl::Texture2D* texture, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::convertFromGLTexture2D(*texture, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_convertToGLTexture2D_const__InputArrayR_Texture2DR(const cv::_InputArray* src, cv::ogl::Texture2D* texture, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::convertToGLTexture2D(*src, *texture);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_mapGLBuffer_const_BufferR(const cv::ogl::Buffer* buffer, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::ogl::mapGLBuffer(*buffer);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_mapGLBuffer_const_BufferR_AccessFlag(const cv::ogl::Buffer* buffer, cv::AccessFlag accessFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::ogl::mapGLBuffer(*buffer, accessFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_ocl_initializeContextFromGL(Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::ogl::ocl::initializeContextFromGL();
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_render_const_ArraysR(const cv::ogl::Arrays* arr, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::render(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_render_const_ArraysR_const__InputArrayR(const cv::ogl::Arrays* arr, const cv::_InputArray* indices, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::render(*arr, *indices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_render_const_ArraysR_const__InputArrayR_int_Scalar(const cv::ogl::Arrays* arr, const cv::_InputArray* indices, int mode, cv::Scalar* color, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::render(*arr, *indices, mode, *color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_render_const_ArraysR_int_Scalar(const cv::ogl::Arrays* arr, int mode, cv::Scalar* color, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::render(*arr, mode, *color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_render_const_Texture2DR(const cv::ogl::Texture2D* tex, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::render(*tex);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_render_const_Texture2DR_Rect_LdoubleG_Rect_LdoubleG(const cv::ogl::Texture2D* tex, cv::Rect_<double>* wndRect, cv::Rect_<double>* texRect, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::render(*tex, *wndRect, *texRect);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_unmapGLBuffer_UMatR(cv::UMat* u, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::unmapGLBuffer(*u);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_MatExprR_const_MatExprR(const cv::MatExpr* e1, const cv::MatExpr* e2, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*e1, *e2);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_MatExprR_const_MatR(const cv::MatExpr* e, const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*e, *m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_MatExprR_const_ScalarR(const cv::MatExpr* e, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*e, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_MatR_const_MatExprR(const cv::Mat* m, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*m, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_MatR_const_ScalarR(const cv::Mat* a, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*a, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_ScalarR_const_MatExprR(const cv::Scalar* s, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*s, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorA_const_ScalarR_const_MatR(const cv::Scalar* s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator+(*s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_const_MatExprR_const_MatExprR(const cv::MatExpr* e1, const cv::MatExpr* e2, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(*e1, *e2);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_const_MatExprR_const_MatR(const cv::MatExpr* e, const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(*e, *m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_const_MatExprR_double(const cv::MatExpr* e, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(*e, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_const_MatR_const_MatExprR(const cv::Mat* m, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(*m, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_double_const_MatExprR(double s, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(s, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorD_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator/(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorEQ_const_FileNodeIteratorR_const_FileNodeIteratorR(const cv::FileNodeIterator* it1, const cv::FileNodeIterator* it2, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::operator==(*it1, *it2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorEQ_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator==(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorEQ_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator==(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorEQ_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator==(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorGE_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator>=(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorGE_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator>=(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorGE_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator>=(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorG_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator>(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorG_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator>(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorG_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator>(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorLE_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator<=(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorLE_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator<=(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorLE_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator<=(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorL_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator<(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorL_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator<(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorL_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator<(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorNE_const_FileNodeIteratorR_const_FileNodeIteratorR(const cv::FileNodeIterator* it1, const cv::FileNodeIterator* it2, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::operator!=(*it1, *it2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorNE_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator!=(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorNE_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator!=(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorNE_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator!=(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorNOTB_const_MatR(const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator~(*m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorOR_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator|(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorOR_const_MatR_const_ScalarR(const cv::Mat* a, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator|(*a, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorOR_const_ScalarR_const_MatR(const cv::Scalar* s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator|(*s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorR_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator&(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorR_const_MatR_const_ScalarR(const cv::Mat* a, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator&(*a, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorR_const_ScalarR_const_MatR(const cv::Scalar* s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator&(*s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatExprR(const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatExprR_const_MatExprR(const cv::MatExpr* e1, const cv::MatExpr* e2, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*e1, *e2);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatExprR_const_MatR(const cv::MatExpr* e, const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*e, *m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatExprR_const_ScalarR(const cv::MatExpr* e, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*e, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatR(const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatR_const_MatExprR(const cv::Mat* m, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*m, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_MatR_const_ScalarR(const cv::Mat* a, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*a, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_ScalarR_const_MatExprR(const cv::Scalar* s, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*s, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorS_const_ScalarR_const_MatR(const cv::Scalar* s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator-(*s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorXOR_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator^(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorXOR_const_MatR_const_ScalarR(const cv::Mat* a, const cv::Scalar* s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator^(*a, *s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorXOR_const_ScalarR_const_MatR(const cv::Scalar* s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator^(*s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_const_MatExprR_const_MatExprR(const cv::MatExpr* e1, const cv::MatExpr* e2, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(*e1, *e2);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_const_MatExprR_const_MatR(const cv::MatExpr* e, const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(*e, *m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_const_MatExprR_double(const cv::MatExpr* e, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(*e, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_const_MatR_const_MatExprR(const cv::Mat* m, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(*m, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_const_MatR_const_MatR(const cv::Mat* a, const cv::Mat* b, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(*a, *b);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_const_MatR_double(const cv::Mat* a, double s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(*a, s);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_double_const_MatExprR(double s, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(s, *e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_operatorX_double_const_MatR(double s, const cv::Mat* a, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::operator*(s, *a);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_parallel_for__const_RangeR_const_ParallelLoopBodyR(const cv::Range* range, const cv::ParallelLoopBody* body, ResultVoid* ocvrs_return) {
		try {
			cv::parallel_for_(*range, *body);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_parallel_for__const_RangeR_const_ParallelLoopBodyR_double(const cv::Range* range, const cv::ParallelLoopBody* body, double nstripes, ResultVoid* ocvrs_return) {
		try {
			cv::parallel_for_(*range, *body, nstripes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_patchNaNs_const__InputOutputArrayR(const cv::_InputOutputArray* a, ResultVoid* ocvrs_return) {
		try {
			cv::patchNaNs(*a);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_patchNaNs_const__InputOutputArrayR_double(const cv::_InputOutputArray* a, double val, ResultVoid* ocvrs_return) {
		try {
			cv::patchNaNs(*a, val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_perspectiveTransform_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* m, ResultVoid* ocvrs_return) {
		try {
			cv::perspectiveTransform(*src, *dst, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_phase_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* x, const cv::_InputArray* y, const cv::_OutputArray* angle, ResultVoid* ocvrs_return) {
		try {
			cv::phase(*x, *y, *angle);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_phase_const__InputArrayR_const__InputArrayR_const__OutputArrayR_bool(const cv::_InputArray* x, const cv::_InputArray* y, const cv::_OutputArray* angle, bool angleInDegrees, ResultVoid* ocvrs_return) {
		try {
			cv::phase(*x, *y, *angle, angleInDegrees);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_polarToCart_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* magnitude, const cv::_InputArray* angle, const cv::_OutputArray* x, const cv::_OutputArray* y, ResultVoid* ocvrs_return) {
		try {
			cv::polarToCart(*magnitude, *angle, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_polarToCart_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_bool(const cv::_InputArray* magnitude, const cv::_InputArray* angle, const cv::_OutputArray* x, const cv::_OutputArray* y, bool angleInDegrees, ResultVoid* ocvrs_return) {
		try {
			cv::polarToCart(*magnitude, *angle, *x, *y, angleInDegrees);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_pow_const__InputArrayR_double_const__OutputArrayR(const cv::_InputArray* src, double power, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::pow(*src, power, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randShuffle_const__InputOutputArrayR(const cv::_InputOutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::randShuffle(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randShuffle_const__InputOutputArrayR_double_RNGX(const cv::_InputOutputArray* dst, double iterFactor, cv::RNG* rng, ResultVoid* ocvrs_return) {
		try {
			cv::randShuffle(*dst, iterFactor, rng);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randn_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputOutputArray* dst, const cv::_InputArray* mean, const cv::_InputArray* stddev, ResultVoid* ocvrs_return) {
		try {
			cv::randn(*dst, *mean, *stddev);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_randu_const__InputOutputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputOutputArray* dst, const cv::_InputArray* low, const cv::_InputArray* high, ResultVoid* ocvrs_return) {
		try {
			cv::randu(*dst, *low, *high);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_DMatchR_const_DMatchR(const cv::FileNode* node, cv::DMatch* value, const cv::DMatch* default_value, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *value, *default_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_KeyPointR_const_KeyPointR(const cv::FileNode* node, cv::KeyPoint* value, const cv::KeyPoint* default_value, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *value, *default_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_MatR(const cv::FileNode* node, cv::Mat* mat, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_MatR_const_MatR(const cv::FileNode* node, cv::Mat* mat, const cv::Mat* default_mat, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *mat, *default_mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_SparseMatR(const cv::FileNode* node, cv::SparseMat* mat, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_SparseMatR_const_SparseMatR(const cv::FileNode* node, cv::SparseMat* mat, const cv::SparseMat* default_mat, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *mat, *default_mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_doubleR_double(const cv::FileNode* node, double* value, double default_value, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *value, default_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_floatR_float(const cv::FileNode* node, float* value, float default_value, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *value, default_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_int64_tR_int64_t(const cv::FileNode* node, int64_t* value, int64_t default_value, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *value, default_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_intR_int(const cv::FileNode* node, int* value, int default_value, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *value, default_value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_stringR_const_stringR(const cv::FileNode* node, void** value, const char* default_value, ResultVoid* ocvrs_return) {
		try {
			std::string value_out;
			cv::read(*node, value_out, std::string(default_value));
			*value = ocvrs_create_string(value_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_vectorLDMatchGR(const cv::FileNode* node, std::vector<cv::DMatch>* matches, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *matches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_read_const_FileNodeR_vectorLKeyPointGR(const cv::FileNode* node, std::vector<cv::KeyPoint>* keypoints, ResultVoid* ocvrs_return) {
		try {
			cv::read(*node, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rectangleIntersectionArea_const_Rect2dR_const_Rect2dR(const cv::Rect2d* a, const cv::Rect2d* b, Result<double>* ocvrs_return) {
		try {
			double ret = cv::rectangleIntersectionArea(*a, *b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reduceArgMax_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int axis, ResultVoid* ocvrs_return) {
		try {
			cv::reduceArgMax(*src, *dst, axis);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reduceArgMax_const__InputArrayR_const__OutputArrayR_int_bool(const cv::_InputArray* src, const cv::_OutputArray* dst, int axis, bool lastIndex, ResultVoid* ocvrs_return) {
		try {
			cv::reduceArgMax(*src, *dst, axis, lastIndex);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reduceArgMin_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int axis, ResultVoid* ocvrs_return) {
		try {
			cv::reduceArgMin(*src, *dst, axis);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reduceArgMin_const__InputArrayR_const__OutputArrayR_int_bool(const cv::_InputArray* src, const cv::_OutputArray* dst, int axis, bool lastIndex, ResultVoid* ocvrs_return) {
		try {
			cv::reduceArgMin(*src, *dst, axis, lastIndex);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reduce_const__InputArrayR_const__OutputArrayR_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int dim, int rtype, ResultVoid* ocvrs_return) {
		try {
			cv::reduce(*src, *dst, dim, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_reduce_const__InputArrayR_const__OutputArrayR_int_int_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int dim, int rtype, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::reduce(*src, *dst, dim, rtype, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_repeat_const_MatR_int_int(const cv::Mat* src, int ny, int nx, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::repeat(*src, ny, nx);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_repeat_const__InputArrayR_int_int_const__OutputArrayR(const cv::_InputArray* src, int ny, int nx, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::repeat(*src, ny, nx, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_rotate_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int rotateCode, ResultVoid* ocvrs_return) {
		try {
			cv::rotate(*src, *dst, rotateCode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_samples_addSamplesDataSearchPath_const_StringR(const char* path, ResultVoid* ocvrs_return) {
		try {
			cv::samples::addSamplesDataSearchPath(std::string(path));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_samples_addSamplesDataSearchSubDirectory_const_StringR(const char* subdir, ResultVoid* ocvrs_return) {
		try {
			cv::samples::addSamplesDataSearchSubDirectory(std::string(subdir));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_samples_findFileOrKeep_const_StringR(const char* relative_path, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::samples::findFileOrKeep(std::string(relative_path));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_samples_findFileOrKeep_const_StringR_bool(const char* relative_path, bool silentMode, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::samples::findFileOrKeep(std::string(relative_path), silentMode);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_samples_findFile_const_StringR(const char* relative_path, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::samples::findFile(std::string(relative_path));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_samples_findFile_const_StringR_bool_bool(const char* relative_path, bool required, bool silentMode, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::samples::findFile(std::string(relative_path), required, silentMode);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_scaleAdd_const__InputArrayR_double_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, double alpha, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::scaleAdd(*src1, alpha, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setBreakOnError_bool(bool flag, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::setBreakOnError(flag);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setIdentity_const__InputOutputArrayR(const cv::_InputOutputArray* mtx, ResultVoid* ocvrs_return) {
		try {
			cv::setIdentity(*mtx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setIdentity_const__InputOutputArrayR_const_ScalarR(const cv::_InputOutputArray* mtx, const cv::Scalar* s, ResultVoid* ocvrs_return) {
		try {
			cv::setIdentity(*mtx, *s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setLogLevel_int(int level, Result<int>* ocvrs_return) {
		try {
			int ret = cv::setLogLevel(level);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setNumThreads_int(int nthreads, ResultVoid* ocvrs_return) {
		try {
			cv::setNumThreads(nthreads);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setRNGSeed_int(int seed, ResultVoid* ocvrs_return) {
		try {
			cv::setRNGSeed(seed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setUseOpenVX_bool(bool flag, ResultVoid* ocvrs_return) {
		try {
			cv::setUseOpenVX(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_setUseOptimized_bool(bool onoff, ResultVoid* ocvrs_return) {
		try {
			cv::setUseOptimized(onoff);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solveCubic_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* coeffs, const cv::_OutputArray* roots, Result<int>* ocvrs_return) {
		try {
			int ret = cv::solveCubic(*coeffs, *roots);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solveLP_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* Func, const cv::_InputArray* Constr, const cv::_OutputArray* z, Result<int>* ocvrs_return) {
		try {
			int ret = cv::solveLP(*Func, *Constr, *z);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solveLP_const__InputArrayR_const__InputArrayR_const__OutputArrayR_double(const cv::_InputArray* Func, const cv::_InputArray* Constr, const cv::_OutputArray* z, double constr_eps, Result<int>* ocvrs_return) {
		try {
			int ret = cv::solveLP(*Func, *Constr, *z, constr_eps);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePoly_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* coeffs, const cv::_OutputArray* roots, Result<double>* ocvrs_return) {
		try {
			double ret = cv::solvePoly(*coeffs, *roots);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solvePoly_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* coeffs, const cv::_OutputArray* roots, int maxIters, Result<double>* ocvrs_return) {
		try {
			double ret = cv::solvePoly(*coeffs, *roots, maxIters);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solve_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solve(*src1, *src2, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_solve_const__InputArrayR_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::solve(*src1, *src2, *dst, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_sortIdx_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::sortIdx(*src, *dst, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_sort_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* dst, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::sort(*src, *dst, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_split_const_MatR_MatX(const cv::Mat* src, cv::Mat* mvbegin, ResultVoid* ocvrs_return) {
		try {
			cv::split(*src, mvbegin);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_split_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* m, const cv::_OutputArray* mv, ResultVoid* ocvrs_return) {
		try {
			cv::split(*m, *mv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_sqrt_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::sqrt(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_subtract_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::subtract(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_subtract_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__InputArrayR_int(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, const cv::_InputArray* mask, int dtype, ResultVoid* ocvrs_return) {
		try {
			cv::subtract(*src1, *src2, *dst, *mask, dtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_sum_const__InputArrayR(const cv::_InputArray* src, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::sum(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_swap_MatR_MatR(cv::Mat* a, cv::Mat* b, ResultVoid* ocvrs_return) {
		try {
			cv::swap(*a, *b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_swap_UMatR_UMatR(cv::UMat* a, cv::UMat* b, ResultVoid* ocvrs_return) {
		try {
			cv::swap(*a, *b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tempfile(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::tempfile();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_tempfile_const_charX(const char* suffix, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::tempfile(suffix);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_terminate_int_const_StringR_const_charX_const_charX_int(int code, const char* err, const char* func, const char* file, int line) {
			cv::terminate(code, std::string(err), func, file, line);
	}
	
	void cv_theRNG(Result<cv::RNG*>* ocvrs_return) {
		try {
			cv::RNG ret = cv::theRNG();
			Ok(new cv::RNG(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_trace_const__InputArrayR(const cv::_InputArray* mtx, Result<cv::Scalar>* ocvrs_return) {
		try {
			cv::Scalar ret = cv::trace(*mtx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_transform_const__InputArrayR_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::_InputArray* m, ResultVoid* ocvrs_return) {
		try {
			cv::transform(*src, *dst, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_transposeND_const__InputArrayR_const_vectorLintGR_const__OutputArrayR(const cv::_InputArray* src, const std::vector<int>* order, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::transposeND(*src, *order, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_transpose_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::transpose(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_typeToString_int(int type, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::typeToString(type);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_useOpenVX(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::useOpenVX();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_useOptimized(Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::useOptimized();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_copyMatAndDumpNamedArguments_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::copyMatAndDumpNamedArguments(*src, *dst);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_copyMatAndDumpNamedArguments_const__InputArrayR_const__OutputArrayR_const_FunctionParamsR(const cv::_InputArray* src, const cv::_OutputArray* dst, const cv::utils::FunctionParams* params, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::copyMatAndDumpNamedArguments(*src, *dst, *params);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpBool_bool(bool argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpBool(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpCString_const_charX(const char* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpCString(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpDouble_double(double argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpDouble(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpFloat_float(float argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpFloat(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpInputArrayOfArrays_const__InputArrayR(const cv::_InputArray* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpInputArrayOfArrays(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpInputArray_const__InputArrayR(const cv::_InputArray* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpInputArray(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpInputOutputArrayOfArrays_const__InputOutputArrayR(const cv::_InputOutputArray* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpInputOutputArrayOfArrays(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpInputOutputArray_const__InputOutputArrayR(const cv::_InputOutputArray* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpInputOutputArray(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpInt64_int64_t(int64_t argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpInt64(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpInt_int(int argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpInt(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpRange_const_RangeR(const cv::Range* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpRange(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpRect_const_RectR(const cv::Rect* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpRect(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpRotatedRect_const_RotatedRectR(const cv::RotatedRect* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpRotatedRect(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpSizeT_size_t(size_t argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpSizeT(argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpString_const_StringR(const char* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpString(std::string(argument));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpTermCriteria_const_TermCriteriaR(const cv::TermCriteria* argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpTermCriteria(*argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpVec2i(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpVec2i();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpVec2i_const_Vec2i(const cv::Vec2i* value, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpVec2i(*value);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpVectorOfDouble_const_vectorLdoubleGR(const std::vector<double>* vec, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpVectorOfDouble(*vec);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpVectorOfInt_const_vectorLintGR(const std::vector<int>* vec, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpVectorOfInt(*vec);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_dumpVectorOfRect_const_vectorLRectGR(const std::vector<cv::Rect>* vec, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::dumpVectorOfRect(*vec);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_fs_getCacheDirectoryForDownloads(Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::fs::getCacheDirectoryForDownloads();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_generateVectorOfInt_size_t_vectorLintGR(size_t len, std::vector<int>* vec, ResultVoid* ocvrs_return) {
		try {
			cv::utils::generateVectorOfInt(len, *vec);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_generateVectorOfMat_size_t_int_int_int_vectorLMatGR(size_t len, int rows, int cols, int dtype, std::vector<cv::Mat>* vec, ResultVoid* ocvrs_return) {
		try {
			cv::utils::generateVectorOfMat(len, rows, cols, dtype, *vec);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_generateVectorOfRect_size_t_vectorLRectGR(size_t len, std::vector<cv::Rect>* vec, ResultVoid* ocvrs_return) {
		try {
			cv::utils::generateVectorOfRect(len, *vec);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_getThreadID(Result<int>* ocvrs_return) {
		try {
			int ret = cv::utils::getThreadID();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_getLogLevel(Result<cv::utils::logging::LogLevel>* ocvrs_return) {
		try {
			cv::utils::logging::LogLevel ret = cv::utils::logging::getLogLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_getLogTagLevel_const_charX(const char* tag, Result<cv::utils::logging::LogLevel>* ocvrs_return) {
		try {
			cv::utils::logging::LogLevel ret = cv::utils::logging::getLogTagLevel(tag);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_internal_getGlobalLogTag(Result<cv::utils::logging::LogTag**>* ocvrs_return) {
		try {
			cv::utils::logging::LogTag* ret = cv::utils::logging::internal::getGlobalLogTag();
			Ok(new cv::utils::logging::LogTag*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_internal_replaceWriteLogMessageEx_WriteLogMessageExFuncType(cv::utils::logging::internal::WriteLogMessageExFuncType f, ResultVoid* ocvrs_return) {
		try {
			cv::utils::logging::internal::replaceWriteLogMessageEx(f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_internal_replaceWriteLogMessage_WriteLogMessageFuncType(cv::utils::logging::internal::WriteLogMessageFuncType f, ResultVoid* ocvrs_return) {
		try {
			cv::utils::logging::internal::replaceWriteLogMessage(f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_internal_writeLogMessageEx_LogLevel_const_charX_const_charX_int_const_charX_const_charX(cv::utils::logging::LogLevel logLevel, const char* tag, const char* file, int line, const char* func, const char* message, ResultVoid* ocvrs_return) {
		try {
			cv::utils::logging::internal::writeLogMessageEx(logLevel, tag, file, line, func, message);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_internal_writeLogMessage_LogLevel_const_charX(cv::utils::logging::LogLevel logLevel, const char* message, ResultVoid* ocvrs_return) {
		try {
			cv::utils::logging::internal::writeLogMessage(logLevel, message);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_registerLogTag_LogTagX(cv::utils::logging::LogTag* plogtag, ResultVoid* ocvrs_return) {
		try {
			cv::utils::logging::registerLogTag(plogtag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_setLogLevel_LogLevel(cv::utils::logging::LogLevel logLevel, Result<cv::utils::logging::LogLevel>* ocvrs_return) {
		try {
			cv::utils::logging::LogLevel ret = cv::utils::logging::setLogLevel(logLevel);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_logging_setLogTagLevel_const_charX_LogLevel(const char* tag, cv::utils::logging::LogLevel level, ResultVoid* ocvrs_return) {
		try {
			cv::utils::logging::setLogTagLevel(tag, level);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_testEchoBooleanFunction_bool(bool flag, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::utils::nested::testEchoBooleanFunction(flag);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testAsyncArray_const__InputArrayR(const cv::_InputArray* argument, Result<cv::AsyncArray*>* ocvrs_return) {
		try {
			cv::AsyncArray ret = cv::utils::testAsyncArray(*argument);
			Ok(new cv::AsyncArray(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testAsyncException(Result<cv::AsyncArray*>* ocvrs_return) {
		try {
			cv::AsyncArray ret = cv::utils::testAsyncException();
			Ok(new cv::AsyncArray(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testOverloadResolution_const_RectR(const cv::Rect* rect, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::testOverloadResolution(*rect);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testOverloadResolution_int(int value, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::testOverloadResolution(value);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testOverloadResolution_int_const_PointR(int value, const cv::Point* point, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::testOverloadResolution(value, *point);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testOverwriteNativeMethod_int(int argument, Result<int>* ocvrs_return) {
		try {
			int ret = cv::utils::testOverwriteNativeMethod(argument);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testRaiseGeneralException(ResultVoid* ocvrs_return) {
		try {
			cv::utils::testRaiseGeneralException();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testReservedKeywordConversion_int(int positional_argument, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::testReservedKeywordConversion(positional_argument);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testReservedKeywordConversion_int_int_int(int positional_argument, int lambda, int from, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::utils::testReservedKeywordConversion(positional_argument, lambda, from);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testRotatedRectVector_float_float_float_float_float(float x, float y, float w, float h, float angle, Result<std::vector<cv::RotatedRect>*>* ocvrs_return) {
		try {
			std::vector<cv::RotatedRect> ret = cv::utils::testRotatedRectVector(x, y, w, h, angle);
			Ok(new std::vector<cv::RotatedRect>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_testRotatedRect_float_float_float_float_float(float x, float y, float w, float h, float angle, Result<cv::RotatedRect>* ocvrs_return) {
		try {
			cv::RotatedRect ret = cv::utils::testRotatedRect(x, y, w, h, angle);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_va_intel_convertFromVASurface_VADisplay_VASurfaceID_Size_const__OutputArrayR(VADisplay display, VASurfaceID surface, cv::Size* size, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::va_intel::convertFromVASurface(display, surface, *size, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_va_intel_convertToVASurface_VADisplay_const__InputArrayR_VASurfaceID_Size(VADisplay display, const cv::_InputArray* src, VASurfaceID surface, cv::Size* size, ResultVoid* ocvrs_return) {
		try {
			cv::va_intel::convertToVASurface(display, *src, surface, *size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_va_intel_ocl_initializeContextFromVA_VADisplay(VADisplay display, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::va_intel::ocl::initializeContextFromVA(display);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_va_intel_ocl_initializeContextFromVA_VADisplay_bool(VADisplay display, bool tryInterop, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::va_intel::ocl::initializeContextFromVA(display, tryInterop);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_vconcat_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src1, const cv::_InputArray* src2, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::vconcat(*src1, *src2, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_vconcat_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::vconcat(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_writeScalar_FileStorageR_const_StringR(cv::FileStorage* fs, const char* value, ResultVoid* ocvrs_return) {
		try {
			cv::writeScalar(*fs, std::string(value));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_writeScalar_FileStorageR_double(cv::FileStorage* fs, double value, ResultVoid* ocvrs_return) {
		try {
			cv::writeScalar(*fs, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_writeScalar_FileStorageR_float(cv::FileStorage* fs, float value, ResultVoid* ocvrs_return) {
		try {
			cv::writeScalar(*fs, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_writeScalar_FileStorageR_int(cv::FileStorage* fs, int value, ResultVoid* ocvrs_return) {
		try {
			cv::writeScalar(*fs, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_writeScalar_FileStorageR_int64_t(cv::FileStorage* fs, int64_t value, ResultVoid* ocvrs_return) {
		try {
			cv::writeScalar(*fs, value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_const_MatR(cv::FileStorage* fs, const char* name, const cv::Mat* value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), *value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_const_SparseMatR(cv::FileStorage* fs, const char* name, const cv::SparseMat* value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), *value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_const_StringR(cv::FileStorage* fs, const char* name, const char* value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), std::string(value));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_const_vectorLDMatchGR(cv::FileStorage* fs, const char* name, const std::vector<cv::DMatch>* value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), *value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_const_vectorLKeyPointGR(cv::FileStorage* fs, const char* name, const std::vector<cv::KeyPoint>* value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), *value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_double(cv::FileStorage* fs, const char* name, double value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_float(cv::FileStorage* fs, const char* name, float value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_int(cv::FileStorage* fs, const char* name, int value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_write_FileStorageR_const_StringR_int64_t(cv::FileStorage* fs, const char* name, int64_t value, ResultVoid* ocvrs_return) {
		try {
			cv::write(*fs, std::string(name), value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_Algorithm(Result<cv::Algorithm*>* ocvrs_return) {
		try {
			cv::Algorithm* ret = new cv::Algorithm();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_clear(cv::Algorithm* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_write_const_FileStorageR(const cv::Algorithm* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_write_const_FileStorageR_const_StringR(const cv::Algorithm* instance, cv::FileStorage* fs, const char* name, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs, std::string(name));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_write_const_const_PtrLFileStorageGR_const_StringR(const cv::Algorithm* instance, const cv::Ptr<cv::FileStorage>* fs, const char* name, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs, std::string(name));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_write_const_const_PtrLFileStorageGR(const cv::Algorithm* instance, const cv::Ptr<cv::FileStorage>* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_read_const_FileNodeR(cv::Algorithm* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_empty_const(const cv::Algorithm* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_save_const_const_StringR(const cv::Algorithm* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->save(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Algorithm_getDefaultName_const(const cv::Algorithm* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getDefaultName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ConjGradSolver* cv_Algorithm_to_ConjGradSolver(cv::Algorithm* instance) {
			return dynamic_cast<cv::ConjGradSolver*>(instance);
	}
	
	cv::DownhillSolver* cv_Algorithm_to_DownhillSolver(cv::Algorithm* instance) {
			return dynamic_cast<cv::DownhillSolver*>(instance);
	}
	
	cv::MinProblemSolver* cv_Algorithm_to_MinProblemSolver(cv::Algorithm* instance) {
			return dynamic_cast<cv::MinProblemSolver*>(instance);
	}
	
	void cv_Algorithm_delete(cv::Algorithm* instance) {
			delete instance;
	}
	
	cv::AsyncArray* cv_AsyncArray_AsyncArray() {
			cv::AsyncArray* ret = new cv::AsyncArray();
			return ret;
	}
	
	cv::AsyncArray* cv_AsyncArray_AsyncArray_const_AsyncArrayR(const cv::AsyncArray* o) {
			cv::AsyncArray* ret = new cv::AsyncArray(*o);
			return ret;
	}
	
	void cv_AsyncArray_operatorST_const_AsyncArrayR(cv::AsyncArray* instance, const cv::AsyncArray* o) {
			instance->operator=(*o);
	}
	
	void cv_AsyncArray_release(cv::AsyncArray* instance) {
			instance->release();
	}
	
	void cv_AsyncArray_get_const_const__OutputArrayR(const cv::AsyncArray* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->get(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncArray_get_const_const__OutputArrayR_int64_t(const cv::AsyncArray* instance, const cv::_OutputArray* dst, int64_t timeoutNs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->get(*dst, timeoutNs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncArray_get_const_const__OutputArrayR_double(const cv::AsyncArray* instance, const cv::_OutputArray* dst, double timeoutNs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->get(*dst, timeoutNs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncArray_wait_for_const_int64_t(const cv::AsyncArray* instance, int64_t timeoutNs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->wait_for(timeoutNs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncArray_wait_for_const_double(const cv::AsyncArray* instance, double timeoutNs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->wait_for(timeoutNs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	bool cv_AsyncArray_valid_const(const cv::AsyncArray* instance) {
			bool ret = instance->valid();
			return ret;
	}
	
	void cv_AsyncArray_AsyncArray_AsyncArrayRR(cv::AsyncArray* o, Result<cv::AsyncArray*>* ocvrs_return) {
		try {
			cv::AsyncArray* ret = new cv::AsyncArray(std::move(*o));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncArray_operatorST_AsyncArrayRR(cv::AsyncArray* instance, cv::AsyncArray* o) {
			instance->operator=(std::move(*o));
	}
	
	void cv_AsyncArray_delete(cv::AsyncArray* instance) {
			delete instance;
	}
	
	cv::AsyncPromise* cv_AsyncPromise_AsyncPromise() {
			cv::AsyncPromise* ret = new cv::AsyncPromise();
			return ret;
	}
	
	cv::AsyncPromise* cv_AsyncPromise_AsyncPromise_const_AsyncPromiseR(const cv::AsyncPromise* o) {
			cv::AsyncPromise* ret = new cv::AsyncPromise(*o);
			return ret;
	}
	
	void cv_AsyncPromise_operatorST_const_AsyncPromiseR(cv::AsyncPromise* instance, const cv::AsyncPromise* o) {
			instance->operator=(*o);
	}
	
	void cv_AsyncPromise_release(cv::AsyncPromise* instance) {
			instance->release();
	}
	
	void cv_AsyncPromise_getArrayResult(cv::AsyncPromise* instance, Result<cv::AsyncArray*>* ocvrs_return) {
		try {
			cv::AsyncArray ret = instance->getArrayResult();
			Ok(new cv::AsyncArray(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncPromise_setValue_const__InputArrayR(cv::AsyncPromise* instance, const cv::_InputArray* value, ResultVoid* ocvrs_return) {
		try {
			instance->setValue(*value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncPromise_setException_const_ExceptionR(cv::AsyncPromise* instance, const cv::Exception* exception, ResultVoid* ocvrs_return) {
		try {
			instance->setException(*exception);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncPromise_AsyncPromise_AsyncPromiseRR(cv::AsyncPromise* o, Result<cv::AsyncPromise*>* ocvrs_return) {
		try {
			cv::AsyncPromise* ret = new cv::AsyncPromise(std::move(*o));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AsyncPromise_operatorST_AsyncPromiseRR(cv::AsyncPromise* instance, cv::AsyncPromise* o) {
			instance->operator=(std::move(*o));
	}
	
	void* cv_AsyncPromise__getImpl_const(const cv::AsyncPromise* instance) {
			void* ret = instance->_getImpl();
			return ret;
	}
	
	void cv_AsyncPromise_delete(cv::AsyncPromise* instance) {
			delete instance;
	}
	
	void cv_CommandLineParser_CommandLineParser_int_const_charXX_const_StringR(int argc, const char** argv, const char* keys, Result<cv::CommandLineParser*>* ocvrs_return) {
		try {
			cv::CommandLineParser* ret = new cv::CommandLineParser(argc, argv, std::string(keys));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_CommandLineParser_const_CommandLineParserR(const cv::CommandLineParser* parser, Result<cv::CommandLineParser*>* ocvrs_return) {
		try {
			cv::CommandLineParser* ret = new cv::CommandLineParser(*parser);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_operatorST_const_CommandLineParserR(cv::CommandLineParser* instance, const cv::CommandLineParser* parser, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*parser);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_getPathToApplication_const(const cv::CommandLineParser* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getPathToApplication();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_bool_const_const_StringR_bool(const cv::CommandLineParser* instance, const char* name, bool space_delete, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->get<bool>(std::string(name), space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_bool_const_const_StringR(const cv::CommandLineParser* instance, const char* name, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->get<bool>(std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_int_const_const_StringR_bool(const cv::CommandLineParser* instance, const char* name, bool space_delete, Result<int>* ocvrs_return) {
		try {
			int ret = instance->get<int>(std::string(name), space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_int_const_const_StringR(const cv::CommandLineParser* instance, const char* name, Result<int>* ocvrs_return) {
		try {
			int ret = instance->get<int>(std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_double_const_const_StringR_bool(const cv::CommandLineParser* instance, const char* name, bool space_delete, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get<double>(std::string(name), space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_double_const_const_StringR(const cv::CommandLineParser* instance, const char* name, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get<double>(std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_cv_String_const_const_StringR_bool(const cv::CommandLineParser* instance, const char* name, bool space_delete, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->get<cv::String>(std::string(name), space_delete);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_cv_String_const_const_StringR(const cv::CommandLineParser* instance, const char* name, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->get<cv::String>(std::string(name));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_uint64_t_const_const_StringR_bool(const cv::CommandLineParser* instance, const char* name, bool space_delete, Result<uint64_t>* ocvrs_return) {
		try {
			uint64_t ret = instance->get<uint64_t>(std::string(name), space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_uint64_t_const_const_StringR(const cv::CommandLineParser* instance, const char* name, Result<uint64_t>* ocvrs_return) {
		try {
			uint64_t ret = instance->get<uint64_t>(std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_bool_const_int_bool(const cv::CommandLineParser* instance, int index, bool space_delete, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->get<bool>(index, space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_bool_const_int(const cv::CommandLineParser* instance, int index, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->get<bool>(index);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_int_const_int_bool(const cv::CommandLineParser* instance, int index, bool space_delete, Result<int>* ocvrs_return) {
		try {
			int ret = instance->get<int>(index, space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_int_const_int(const cv::CommandLineParser* instance, int index, Result<int>* ocvrs_return) {
		try {
			int ret = instance->get<int>(index);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_double_const_int_bool(const cv::CommandLineParser* instance, int index, bool space_delete, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get<double>(index, space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_double_const_int(const cv::CommandLineParser* instance, int index, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get<double>(index);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_cv_String_const_int_bool(const cv::CommandLineParser* instance, int index, bool space_delete, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->get<cv::String>(index, space_delete);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_cv_String_const_int(const cv::CommandLineParser* instance, int index, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->get<cv::String>(index);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_uint64_t_const_int_bool(const cv::CommandLineParser* instance, int index, bool space_delete, Result<uint64_t>* ocvrs_return) {
		try {
			uint64_t ret = instance->get<uint64_t>(index, space_delete);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_get_uint64_t_const_int(const cv::CommandLineParser* instance, int index, Result<uint64_t>* ocvrs_return) {
		try {
			uint64_t ret = instance->get<uint64_t>(index);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_has_const_const_StringR(const cv::CommandLineParser* instance, const char* name, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->has(std::string(name));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_check_const(const cv::CommandLineParser* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->check();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_about_const_StringR(cv::CommandLineParser* instance, const char* message, ResultVoid* ocvrs_return) {
		try {
			instance->about(std::string(message));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_printMessage_const(const cv::CommandLineParser* instance, ResultVoid* ocvrs_return) {
		try {
			instance->printMessage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_printErrors_const(const cv::CommandLineParser* instance, ResultVoid* ocvrs_return) {
		try {
			instance->printErrors();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CommandLineParser_delete(cv::CommandLineParser* instance) {
			delete instance;
	}
	
	void cv_ConjGradSolver_create_const_PtrLFunctionGR_TermCriteria(const cv::Ptr<cv::MinProblemSolver::Function>* f, cv::TermCriteria* termcrit, Result<cv::Ptr<cv::ConjGradSolver>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ConjGradSolver> ret = cv::ConjGradSolver::create(*f, *termcrit);
			Ok(new cv::Ptr<cv::ConjGradSolver>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ConjGradSolver_create(Result<cv::Ptr<cv::ConjGradSolver>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ConjGradSolver> ret = cv::ConjGradSolver::create();
			Ok(new cv::Ptr<cv::ConjGradSolver>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ConjGradSolver_to_Algorithm(cv::ConjGradSolver* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::MinProblemSolver* cv_ConjGradSolver_to_MinProblemSolver(cv::ConjGradSolver* instance) {
			return dynamic_cast<cv::MinProblemSolver*>(instance);
	}
	
	void cv_ConjGradSolver_delete(cv::ConjGradSolver* instance) {
			delete instance;
	}
	
	void cv_DMatch_DMatch(Result<cv::DMatch>* ocvrs_return) {
		try {
			cv::DMatch ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DMatch_DMatch_int_int_float(int _queryIdx, int _trainIdx, float _distance, Result<cv::DMatch>* ocvrs_return) {
		try {
			cv::DMatch ret(_queryIdx, _trainIdx, _distance);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DMatch_DMatch_int_int_int_float(int _queryIdx, int _trainIdx, int _imgIdx, float _distance, Result<cv::DMatch>* ocvrs_return) {
		try {
			cv::DMatch ret(_queryIdx, _trainIdx, _imgIdx, _distance);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DMatch_operatorL_const_const_DMatchR(const cv::DMatch* instance, const cv::DMatch* m, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator<(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DownhillSolver_getInitStep_const_const__OutputArrayR(const cv::DownhillSolver* instance, const cv::_OutputArray* step, ResultVoid* ocvrs_return) {
		try {
			instance->getInitStep(*step);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DownhillSolver_setInitStep_const__InputArrayR(cv::DownhillSolver* instance, const cv::_InputArray* step, ResultVoid* ocvrs_return) {
		try {
			instance->setInitStep(*step);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DownhillSolver_create_const_PtrLFunctionGR_const__InputArrayR_TermCriteria(const cv::Ptr<cv::MinProblemSolver::Function>* f, const cv::_InputArray* initStep, cv::TermCriteria* termcrit, Result<cv::Ptr<cv::DownhillSolver>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DownhillSolver> ret = cv::DownhillSolver::create(*f, *initStep, *termcrit);
			Ok(new cv::Ptr<cv::DownhillSolver>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_DownhillSolver_create(Result<cv::Ptr<cv::DownhillSolver>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::DownhillSolver> ret = cv::DownhillSolver::create();
			Ok(new cv::Ptr<cv::DownhillSolver>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_DownhillSolver_to_Algorithm(cv::DownhillSolver* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::MinProblemSolver* cv_DownhillSolver_to_MinProblemSolver(cv::DownhillSolver* instance) {
			return dynamic_cast<cv::MinProblemSolver*>(instance);
	}
	
	void cv_DownhillSolver_delete(cv::DownhillSolver* instance) {
			delete instance;
	}
	
	void cv_Exception_Exception(Result<cv::Exception*>* ocvrs_return) {
		try {
			cv::Exception* ret = new cv::Exception();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Exception_Exception_int_const_StringR_const_StringR_const_StringR_int(int _code, const char* _err, const char* _func, const char* _file, int _line, Result<cv::Exception*>* ocvrs_return) {
		try {
			cv::Exception* ret = new cv::Exception(_code, std::string(_err), std::string(_func), std::string(_file), _line);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void* cv_Exception_what_const(const cv::Exception* instance) {
			const char* ret = instance->what();
			return ocvrs_create_string(ret);
	}
	
	void cv_Exception_formatMessage(cv::Exception* instance, ResultVoid* ocvrs_return) {
		try {
			instance->formatMessage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void* cv_Exception_propMsg_const(const cv::Exception* instance) {
			cv::String ret = instance->msg;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_Exception_propMsg_const_String(cv::Exception* instance, const char* val) {
			instance->msg = std::string(val);
	}
	
	int cv_Exception_propCode_const(const cv::Exception* instance) {
			int ret = instance->code;
			return ret;
	}
	
	void cv_Exception_propCode_const_int(cv::Exception* instance, const int val) {
			instance->code = val;
	}
	
	void* cv_Exception_propErr_const(const cv::Exception* instance) {
			cv::String ret = instance->err;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_Exception_propErr_const_String(cv::Exception* instance, const char* val) {
			instance->err = std::string(val);
	}
	
	void* cv_Exception_propFunc_const(const cv::Exception* instance) {
			cv::String ret = instance->func;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_Exception_propFunc_const_String(cv::Exception* instance, const char* val) {
			instance->func = std::string(val);
	}
	
	void* cv_Exception_propFile_const(const cv::Exception* instance) {
			cv::String ret = instance->file;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_Exception_propFile_const_String(cv::Exception* instance, const char* val) {
			instance->file = std::string(val);
	}
	
	int cv_Exception_propLine_const(const cv::Exception* instance) {
			int ret = instance->line;
			return ret;
	}
	
	void cv_Exception_propLine_const_int(cv::Exception* instance, const int val) {
			instance->line = val;
	}
	
	void cv_Exception_delete(cv::Exception* instance) {
			delete instance;
	}
	
	void cv_FileNode_FileNode(Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode* ret = new cv::FileNode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_FileNode_const_FileStorageX_size_t_size_t(const cv::FileStorage* fs, size_t blockIdx, size_t ofs, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode* ret = new cv::FileNode(fs, blockIdx, ofs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_FileNode_const_FileNodeR(const cv::FileNode* node, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode* ret = new cv::FileNode(*node);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operatorST_const_FileNodeR(cv::FileNode* instance, const cv::FileNode* node, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*node);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator___const_const_StringR(const cv::FileNode* instance, const char* nodename, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->operator[](std::string(nodename));
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator___const_const_charX(const cv::FileNode* instance, const char* nodename, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->operator[](nodename);
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator___const_int(const cv::FileNode* instance, int i, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->operator[](i);
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_keys_const(const cv::FileNode* instance, Result<std::vector<cv::String>*>* ocvrs_return) {
		try {
			std::vector<cv::String> ret = instance->keys();
			Ok(new std::vector<cv::String>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_type_const(const cv::FileNode* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_empty_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isNone_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isNone();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isSeq_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isSeq();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isMap_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isMap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isInt_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isInt();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isReal_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isReal();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isString_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isString();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isNamed_const(const cv::FileNode* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isNamed();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_name_const(const cv::FileNode* instance, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->name();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_size_const(const cv::FileNode* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_rawSize_const(const cv::FileNode* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->rawSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator_int_const(const cv::FileNode* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->operator int();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator_int64_t_const(const cv::FileNode* instance, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->operator int64_t();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator_float_const(const cv::FileNode* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->operator float();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator_double_const(const cv::FileNode* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->operator double();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_operator_std_string_const(const cv::FileNode* instance, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->operator std::string();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isMap_int(int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::FileNode::isMap(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isSeq_int(int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::FileNode::isSeq(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isCollection_int(int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::FileNode::isCollection(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isEmptyCollection_int(int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::FileNode::isEmptyCollection(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_isFlow_int(int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::FileNode::isFlow(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_ptr(cv::FileNode* instance, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_ptr_const(const cv::FileNode* instance, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_begin_const(const cv::FileNode* instance, Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator ret = instance->begin();
			Ok(new cv::FileNodeIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_end_const(const cv::FileNode* instance, Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator ret = instance->end();
			Ok(new cv::FileNodeIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_readRaw_const_const_StringR_voidX_size_t(const cv::FileNode* instance, const char* fmt, void* vec, size_t len, ResultVoid* ocvrs_return) {
		try {
			instance->readRaw(std::string(fmt), vec, len);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_setValue_int_const_voidX_int(cv::FileNode* instance, int type, const void* value, int len, ResultVoid* ocvrs_return) {
		try {
			instance->setValue(type, value, len);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_real_const(const cv::FileNode* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->real();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_string_const(const cv::FileNode* instance, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->string();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNode_mat_const(const cv::FileNode* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->mat();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::FileNode* cv_FileNode_implicitClone_const(const cv::FileNode* instance) {
			return new cv::FileNode(*instance);
	}
	
	size_t cv_FileNode_propBlockIdx_const(const cv::FileNode* instance) {
			size_t ret = instance->blockIdx;
			return ret;
	}
	
	void cv_FileNode_propBlockIdx_const_size_t(cv::FileNode* instance, const size_t val) {
			instance->blockIdx = val;
	}
	
	size_t cv_FileNode_propOfs_const(const cv::FileNode* instance) {
			size_t ret = instance->ofs;
			return ret;
	}
	
	void cv_FileNode_propOfs_const_size_t(cv::FileNode* instance, const size_t val) {
			instance->ofs = val;
	}
	
	void cv_FileNode_delete(cv::FileNode* instance) {
			delete instance;
	}
	
	void cv_FileNodeIterator_FileNodeIterator(Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator* ret = new cv::FileNodeIterator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_FileNodeIterator_const_FileNodeR_bool(const cv::FileNode* node, bool seekEnd, Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator* ret = new cv::FileNodeIterator(*node, seekEnd);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_FileNodeIterator_const_FileNodeIteratorR(const cv::FileNodeIterator* it, Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator* ret = new cv::FileNodeIterator(*it);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_operatorST_const_FileNodeIteratorR(cv::FileNodeIterator* instance, const cv::FileNodeIterator* it, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*it);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_operatorX_const(const cv::FileNodeIterator* instance, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->operator*();
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_operatorAA(cv::FileNodeIterator* instance, Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator ret = instance->operator++();
			Ok(new cv::FileNodeIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_readRaw_const_StringR_voidX_size_t(cv::FileNodeIterator* instance, const char* fmt, void* vec, size_t len, Result<cv::FileNodeIterator*>* ocvrs_return) {
		try {
			cv::FileNodeIterator ret = instance->readRaw(std::string(fmt), vec, len);
			Ok(new cv::FileNodeIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_remaining_const(const cv::FileNodeIterator* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->remaining();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_equalTo_const_const_FileNodeIteratorR(const cv::FileNodeIterator* instance, const cv::FileNodeIterator* it, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->equalTo(*it);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileNodeIterator_delete(cv::FileNodeIterator* instance) {
			delete instance;
	}
	
	void cv_FileStorage_FileStorage(Result<cv::FileStorage*>* ocvrs_return) {
		try {
			cv::FileStorage* ret = new cv::FileStorage();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_FileStorage_const_StringR_int_const_StringR(const char* filename, int flags, const char* encoding, Result<cv::FileStorage*>* ocvrs_return) {
		try {
			cv::FileStorage* ret = new cv::FileStorage(std::string(filename), flags, std::string(encoding));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_FileStorage_const_StringR_int(const char* filename, int flags, Result<cv::FileStorage*>* ocvrs_return) {
		try {
			cv::FileStorage* ret = new cv::FileStorage(std::string(filename), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_open_const_StringR_int_const_StringR(cv::FileStorage* instance, const char* filename, int flags, const char* encoding, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), flags, std::string(encoding));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_open_const_StringR_int(cv::FileStorage* instance, const char* filename, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_isOpened_const(const cv::FileStorage* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOpened();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_release(cv::FileStorage* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_releaseAndGetString(cv::FileStorage* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->releaseAndGetString();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_getFirstTopLevelNode_const(const cv::FileStorage* instance, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->getFirstTopLevelNode();
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_root_const_int(const cv::FileStorage* instance, int streamidx, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->root(streamidx);
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_root_const(const cv::FileStorage* instance, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->root();
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_operator___const_const_StringR(const cv::FileStorage* instance, const char* nodename, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->operator[](std::string(nodename));
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_operator___const_const_charX(const cv::FileStorage* instance, const char* nodename, Result<cv::FileNode*>* ocvrs_return) {
		try {
			cv::FileNode ret = instance->operator[](nodename);
			Ok(new cv::FileNode(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_write_const_StringR_int(cv::FileStorage* instance, const char* name, int val, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(name), val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_write_const_StringR_int64_t(cv::FileStorage* instance, const char* name, int64_t val, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(name), val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_write_const_StringR_double(cv::FileStorage* instance, const char* name, double val, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(name), val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_write_const_StringR_const_StringR(cv::FileStorage* instance, const char* name, const char* val, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(name), std::string(val));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_write_const_StringR_const_MatR(cv::FileStorage* instance, const char* name, const cv::Mat* val, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(name), *val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_write_const_StringR_const_vectorLStringGR(cv::FileStorage* instance, const char* name, const std::vector<cv::String>* val, ResultVoid* ocvrs_return) {
		try {
			instance->write(std::string(name), *val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_writeRaw_const_StringR_const_voidX_size_t(cv::FileStorage* instance, const char* fmt, const void* vec, size_t len, ResultVoid* ocvrs_return) {
		try {
			instance->writeRaw(std::string(fmt), vec, len);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_writeComment_const_StringR_bool(cv::FileStorage* instance, const char* comment, bool append, ResultVoid* ocvrs_return) {
		try {
			instance->writeComment(std::string(comment), append);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_writeComment_const_StringR(cv::FileStorage* instance, const char* comment, ResultVoid* ocvrs_return) {
		try {
			instance->writeComment(std::string(comment));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_startWriteStruct_const_StringR_int_const_StringR(cv::FileStorage* instance, const char* name, int flags, const char* typeName, ResultVoid* ocvrs_return) {
		try {
			instance->startWriteStruct(std::string(name), flags, std::string(typeName));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_startWriteStruct_const_StringR_int(cv::FileStorage* instance, const char* name, int flags, ResultVoid* ocvrs_return) {
		try {
			instance->startWriteStruct(std::string(name), flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_endWriteStruct(cv::FileStorage* instance, ResultVoid* ocvrs_return) {
		try {
			instance->endWriteStruct();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_getDefaultObjectName_const_StringR(const char* filename, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::FileStorage::getDefaultObjectName(std::string(filename));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_FileStorage_getFormat_const(const cv::FileStorage* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFormat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_FileStorage_propState_const(const cv::FileStorage* instance) {
			int ret = instance->state;
			return ret;
	}
	
	void cv_FileStorage_propState_const_int(cv::FileStorage* instance, const int val) {
			instance->state = val;
	}
	
	void* cv_FileStorage_propElname_const(const cv::FileStorage* instance) {
			std::string ret = instance->elname;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_FileStorage_propElname_const_string(cv::FileStorage* instance, const char* val) {
			instance->elname = std::string(val);
	}
	
	void cv_FileStorage_delete(cv::FileStorage* instance) {
			delete instance;
	}
	
	void cv_Formatted_next(cv::Formatted* instance, Result<void*>* ocvrs_return) {
		try {
			const char* ret = instance->next();
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatted_reset(cv::Formatted* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatted_delete(cv::Formatted* instance) {
			delete instance;
	}
	
	void cv_Formatter_format_const_const_MatR(const cv::Formatter* instance, const cv::Mat* mtx, Result<cv::Ptr<cv::Formatted>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Formatted> ret = instance->format(*mtx);
			Ok(new cv::Ptr<cv::Formatted>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_set16fPrecision_int(cv::Formatter* instance, int p, ResultVoid* ocvrs_return) {
		try {
			instance->set16fPrecision(p);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_set16fPrecision(cv::Formatter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->set16fPrecision();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_set32fPrecision_int(cv::Formatter* instance, int p, ResultVoid* ocvrs_return) {
		try {
			instance->set32fPrecision(p);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_set32fPrecision(cv::Formatter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->set32fPrecision();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_set64fPrecision_int(cv::Formatter* instance, int p, ResultVoid* ocvrs_return) {
		try {
			instance->set64fPrecision(p);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_set64fPrecision(cv::Formatter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->set64fPrecision();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_setMultiline_bool(cv::Formatter* instance, bool ml, ResultVoid* ocvrs_return) {
		try {
			instance->setMultiline(ml);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_setMultiline(cv::Formatter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setMultiline();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_get_FormatType(cv::Formatter::FormatType fmt, Result<cv::Ptr<cv::Formatter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Formatter> ret = cv::Formatter::get(fmt);
			Ok(new cv::Ptr<cv::Formatter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_get(Result<cv::Ptr<cv::Formatter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Formatter> ret = cv::Formatter::get();
			Ok(new cv::Ptr<cv::Formatter>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Formatter_delete(cv::Formatter* instance) {
			delete instance;
	}
	
	void cv_Hamming_operator___const_const_unsigned_charX_const_unsigned_charX_int(const cv::Hamming* instance, const unsigned char* a, const unsigned char* b, int size, Result<cv::Hamming::ResultType>* ocvrs_return) {
		try {
			cv::Hamming::ResultType ret = instance->operator()(a, b, size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Hamming* cv_Hamming_defaultNew_const() {
			cv::Hamming* ret = new cv::Hamming();
			return ret;
	}
	
	void cv_Hamming_delete(cv::Hamming* instance) {
			delete instance;
	}
	
	void cv_KeyPoint_KeyPoint(Result<cv::KeyPoint*>* ocvrs_return) {
		try {
			cv::KeyPoint* ret = new cv::KeyPoint();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_KeyPoint_Point2f_float_float_float_int_int(cv::Point2f* pt, float size, float angle, float response, int octave, int class_id, Result<cv::KeyPoint*>* ocvrs_return) {
		try {
			cv::KeyPoint* ret = new cv::KeyPoint(*pt, size, angle, response, octave, class_id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_KeyPoint_Point2f_float(cv::Point2f* pt, float size, Result<cv::KeyPoint*>* ocvrs_return) {
		try {
			cv::KeyPoint* ret = new cv::KeyPoint(*pt, size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_KeyPoint_float_float_float_float_float_int_int(float x, float y, float size, float angle, float response, int octave, int class_id, Result<cv::KeyPoint*>* ocvrs_return) {
		try {
			cv::KeyPoint* ret = new cv::KeyPoint(x, y, size, angle, response, octave, class_id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_KeyPoint_float_float_float(float x, float y, float size, Result<cv::KeyPoint*>* ocvrs_return) {
		try {
			cv::KeyPoint* ret = new cv::KeyPoint(x, y, size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_hash_const(const cv::KeyPoint* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->hash();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_convert_const_vectorLKeyPointGR_vectorLPoint2fGR_const_vectorLintGR(const std::vector<cv::KeyPoint>* keypoints, std::vector<cv::Point2f>* points2f, const std::vector<int>* keypointIndexes, ResultVoid* ocvrs_return) {
		try {
			cv::KeyPoint::convert(*keypoints, *points2f, *keypointIndexes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_convert_const_vectorLKeyPointGR_vectorLPoint2fGR(const std::vector<cv::KeyPoint>* keypoints, std::vector<cv::Point2f>* points2f, ResultVoid* ocvrs_return) {
		try {
			cv::KeyPoint::convert(*keypoints, *points2f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_convert_const_vectorLPoint2fGR_vectorLKeyPointGR_float_float_int_int(const std::vector<cv::Point2f>* points2f, std::vector<cv::KeyPoint>* keypoints, float size, float response, int octave, int class_id, ResultVoid* ocvrs_return) {
		try {
			cv::KeyPoint::convert(*points2f, *keypoints, size, response, octave, class_id);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_convert_const_vectorLPoint2fGR_vectorLKeyPointGR(const std::vector<cv::Point2f>* points2f, std::vector<cv::KeyPoint>* keypoints, ResultVoid* ocvrs_return) {
		try {
			cv::KeyPoint::convert(*points2f, *keypoints);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_KeyPoint_overlap_const_KeyPointR_const_KeyPointR(const cv::KeyPoint* kp1, const cv::KeyPoint* kp2, Result<float>* ocvrs_return) {
		try {
			float ret = cv::KeyPoint::overlap(*kp1, *kp2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::KeyPoint* cv_KeyPoint_implicitClone_const(const cv::KeyPoint* instance) {
			return new cv::KeyPoint(*instance);
	}
	
	void cv_KeyPoint_propPt_const(const cv::KeyPoint* instance, cv::Point2f* ocvrs_return) {
			cv::Point2f ret = instance->pt;
			*ocvrs_return = ret;
	}
	
	void cv_KeyPoint_propPt_const_Point2f(cv::KeyPoint* instance, const cv::Point2f* val) {
			instance->pt = *val;
	}
	
	float cv_KeyPoint_propSize_const(const cv::KeyPoint* instance) {
			float ret = instance->size;
			return ret;
	}
	
	void cv_KeyPoint_propSize_const_float(cv::KeyPoint* instance, const float val) {
			instance->size = val;
	}
	
	float cv_KeyPoint_propAngle_const(const cv::KeyPoint* instance) {
			float ret = instance->angle;
			return ret;
	}
	
	void cv_KeyPoint_propAngle_const_float(cv::KeyPoint* instance, const float val) {
			instance->angle = val;
	}
	
	float cv_KeyPoint_propResponse_const(const cv::KeyPoint* instance) {
			float ret = instance->response;
			return ret;
	}
	
	void cv_KeyPoint_propResponse_const_float(cv::KeyPoint* instance, const float val) {
			instance->response = val;
	}
	
	int cv_KeyPoint_propOctave_const(const cv::KeyPoint* instance) {
			int ret = instance->octave;
			return ret;
	}
	
	void cv_KeyPoint_propOctave_const_int(cv::KeyPoint* instance, const int val) {
			instance->octave = val;
	}
	
	int cv_KeyPoint_propClass_id_const(const cv::KeyPoint* instance) {
			int ret = instance->class_id;
			return ret;
	}
	
	void cv_KeyPoint_propClass_id_const_int(cv::KeyPoint* instance, const int val) {
			instance->class_id = val;
	}
	
	void cv_KeyPoint_delete(cv::KeyPoint* instance) {
			delete instance;
	}
	
	void cv_LDA_LDA_int(int num_components, Result<cv::LDA*>* ocvrs_return) {
		try {
			cv::LDA* ret = new cv::LDA(num_components);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_LDA(Result<cv::LDA*>* ocvrs_return) {
		try {
			cv::LDA* ret = new cv::LDA();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_LDA_const__InputArrayR_const__InputArrayR_int(const cv::_InputArray* src, const cv::_InputArray* labels, int num_components, Result<cv::LDA*>* ocvrs_return) {
		try {
			cv::LDA* ret = new cv::LDA(*src, *labels, num_components);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_LDA_const__InputArrayR_const__InputArrayR(const cv::_InputArray* src, const cv::_InputArray* labels, Result<cv::LDA*>* ocvrs_return) {
		try {
			cv::LDA* ret = new cv::LDA(*src, *labels);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_save_const_const_StringR(const cv::LDA* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->save(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_load_const_StringR(cv::LDA* instance, const char* filename, ResultVoid* ocvrs_return) {
		try {
			instance->load(std::string(filename));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_save_const_FileStorageR(const cv::LDA* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->save(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_load_const_FileStorageR(cv::LDA* instance, const cv::FileStorage* node, ResultVoid* ocvrs_return) {
		try {
			instance->load(*node);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_compute_const__InputArrayR_const__InputArrayR(cv::LDA* instance, const cv::_InputArray* src, const cv::_InputArray* labels, ResultVoid* ocvrs_return) {
		try {
			instance->compute(*src, *labels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_project_const__InputArrayR(cv::LDA* instance, const cv::_InputArray* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->project(*src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_reconstruct_const__InputArrayR(cv::LDA* instance, const cv::_InputArray* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reconstruct(*src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_eigenvectors_const(const cv::LDA* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->eigenvectors();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_eigenvalues_const(const cv::LDA* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->eigenvalues();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_subspaceProject_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* W, const cv::_InputArray* mean, const cv::_InputArray* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::LDA::subspaceProject(*W, *mean, *src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_subspaceReconstruct_const__InputArrayR_const__InputArrayR_const__InputArrayR(const cv::_InputArray* W, const cv::_InputArray* mean, const cv::_InputArray* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::LDA::subspaceReconstruct(*W, *mean, *src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_LDA_delete(cv::LDA* instance) {
			delete instance;
	}
	
	cv::Mat* cv_Mat_Mat() {
			cv::Mat* ret = new cv::Mat();
			return ret;
	}
	
	void cv_Mat_Mat_int_int_int(int rows, int cols, int type, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(rows, cols, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_Size_int(cv::Size* size, int type, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*size, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_int_int_const_ScalarR(int rows, int cols, int type, const cv::Scalar* s, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(rows, cols, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_Size_int_const_ScalarR(cv::Size* size, int type, const cv::Scalar* s, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*size, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_const_intX_int(int ndims, const int* sizes, int type, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(ndims, sizes, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_vectorLintGR_int(const std::vector<int>* sizes, int type, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*sizes, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_const_intX_int_const_ScalarR(int ndims, const int* sizes, int type, const cv::Scalar* s, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(ndims, sizes, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_vectorLintGR_int_const_ScalarR(const std::vector<int>* sizes, int type, const cv::Scalar* s, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*sizes, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_MatR(const cv::Mat* m, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat* ret = new const cv::Mat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_MatR(cv::Mat* m, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_int_int_voidX_size_t(int rows, int cols, int type, void* data, size_t step, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(rows, cols, type, data, step);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_int_int_voidX(int rows, int cols, int type, void* data, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(rows, cols, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_Size_int_voidX_size_t(cv::Size* size, int type, void* data, size_t step, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*size, type, data, step);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_Size_int_voidX(cv::Size* size, int type, void* data, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*size, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_const_intX_int_voidX_const_size_tX(int ndims, const int* sizes, int type, void* data, const size_t* steps, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(ndims, sizes, type, data, steps);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_int_const_intX_int_voidX(int ndims, const int* sizes, int type, void* data, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(ndims, sizes, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_vectorLintGR_int_voidX_const_size_tX(const std::vector<int>* sizes, int type, void* data, const size_t* steps, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*sizes, type, data, steps);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_vectorLintGR_int_voidX(const std::vector<int>* sizes, int type, void* data, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*sizes, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_MatR_const_RangeR_const_RangeR(const cv::Mat* m, const cv::Range* rowRange, const cv::Range* colRange, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat* ret = new const cv::Mat(*m, *rowRange, *colRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_MatR_const_RangeR(cv::Mat* m, const cv::Range* rowRange, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*m, *rowRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_MatR_const_RangeR(const cv::Mat* m, const cv::Range* rowRange, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat* ret = new const cv::Mat(*m, *rowRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_MatR_const_RangeR_const_RangeR(cv::Mat* m, const cv::Range* rowRange, const cv::Range* colRange, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*m, *rowRange, *colRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_MatR_const_RectR(const cv::Mat* m, const cv::Rect* roi, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat* ret = new const cv::Mat(*m, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_MatR_const_RectR(cv::Mat* m, const cv::Rect* roi, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*m, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_MatR_const_vectorLRangeGR(const cv::Mat* m, const std::vector<cv::Range>* ranges, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat* ret = new const cv::Mat(*m, *ranges);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_MatR_const_vectorLRangeGR(cv::Mat* m, const std::vector<cv::Range>* ranges, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*m, *ranges);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_const_GpuMatR(const cv::cuda::GpuMat* m, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat* ret = new const cv::Mat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_Mat_GpuMatR(cv::cuda::GpuMat* m, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat* ret = new cv::Mat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operatorST_const_MatExprR(cv::Mat* instance, const cv::MatExpr* expr, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*expr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_getUMat_const_AccessFlag_UMatUsageFlags(const cv::Mat* instance, cv::AccessFlag accessFlags, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->getUMat(accessFlags, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_getUMat_const_AccessFlag(const cv::Mat* instance, cv::AccessFlag accessFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->getUMat(accessFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_row_const_int(const cv::Mat* instance, int y, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->row(y);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_row_int(cv::Mat* instance, int y, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->row(y);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_col_const_int(const cv::Mat* instance, int x, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->col(x);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_col_int(cv::Mat* instance, int x, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->col(x);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_rowRange_const_int_int(const cv::Mat* instance, int startrow, int endrow, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->rowRange(startrow, endrow);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_rowRange_int_int(cv::Mat* instance, int startrow, int endrow, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->rowRange(startrow, endrow);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_rowRange_const_const_RangeR(const cv::Mat* instance, const cv::Range* r, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->rowRange(*r);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_rowRange_const_RangeR(cv::Mat* instance, const cv::Range* r, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->rowRange(*r);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_colRange_const_int_int(const cv::Mat* instance, int startcol, int endcol, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->colRange(startcol, endcol);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_colRange_int_int(cv::Mat* instance, int startcol, int endcol, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->colRange(startcol, endcol);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_colRange_const_const_RangeR(const cv::Mat* instance, const cv::Range* r, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->colRange(*r);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_colRange_const_RangeR(cv::Mat* instance, const cv::Range* r, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->colRange(*r);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_diag_const_int(const cv::Mat* instance, int d, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->diag(d);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_diag(cv::Mat* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->diag();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_diag_const(const cv::Mat* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->diag();
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_diag_int(cv::Mat* instance, int d, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->diag(d);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_diag_const_MatR(const cv::Mat* d, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::Mat::diag(*d);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_clone_const(const cv::Mat* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->clone();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_copyTo_const_const__OutputArrayR(const cv::Mat* instance, const cv::_OutputArray* m, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_copyTo_const_const__OutputArrayR_const__InputArrayR(const cv::Mat* instance, const cv::_OutputArray* m, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*m, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_convertTo_const_const__OutputArrayR_int_double_double(const cv::Mat* instance, const cv::_OutputArray* m, int rtype, double alpha, double beta, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype, alpha, beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_convertTo_const_const__OutputArrayR_int(const cv::Mat* instance, const cv::_OutputArray* m, int rtype, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_assignTo_const_MatR_int(const cv::Mat* instance, cv::Mat* m, int type, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_assignTo_const_MatR(const cv::Mat* instance, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operatorST_const_ScalarR(cv::Mat* instance, const cv::Scalar* s, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_setTo_const__InputArrayR_const__InputArrayR(cv::Mat* instance, const cv::_InputArray* value, const cv::_InputArray* mask, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->setTo(*value, *mask);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_setTo_const__InputArrayR(cv::Mat* instance, const cv::_InputArray* value, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->setTo(*value);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_const_int_int(const cv::Mat* instance, int cn, int rows, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->reshape(cn, rows);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_int(cv::Mat* instance, int cn, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reshape(cn);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_const_int(const cv::Mat* instance, int cn, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->reshape(cn);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_int_int(cv::Mat* instance, int cn, int rows, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reshape(cn, rows);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_const_int_int_const_intX(const cv::Mat* instance, int cn, int newndims, const int* newsz, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->reshape(cn, newndims, newsz);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_int_int_const_intX(cv::Mat* instance, int cn, int newndims, const int* newsz, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reshape(cn, newndims, newsz);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_const_int_const_vectorLintGR(const cv::Mat* instance, int cn, const std::vector<int>* newshape, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->reshape(cn, *newshape);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reshape_int_const_vectorLintGR(cv::Mat* instance, int cn, const std::vector<int>* newshape, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reshape(cn, *newshape);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reinterpret_const_int(const cv::Mat* instance, int type, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reinterpret(type);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_t_const(const cv::Mat* instance, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->t();
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_inv_const_int(const cv::Mat* instance, int method, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->inv(method);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_inv_const(const cv::Mat* instance, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->inv();
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_mul_const_const__InputArrayR_double(const cv::Mat* instance, const cv::_InputArray* m, double scale, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->mul(*m, scale);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_mul_const_const__InputArrayR(const cv::Mat* instance, const cv::_InputArray* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->mul(*m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_cross_const_const__InputArrayR(const cv::Mat* instance, const cv::_InputArray* m, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->cross(*m);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_dot_const_const__InputArrayR(const cv::Mat* instance, const cv::_InputArray* m, Result<double>* ocvrs_return) {
		try {
			double ret = instance->dot(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_zeros_int_int_int(int rows, int cols, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::zeros(rows, cols, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_zeros_Size_int(cv::Size* size, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::zeros(*size, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_zeros_int_const_intX_int(int ndims, const int* sz, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::zeros(ndims, sz, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ones_int_int_int(int rows, int cols, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::ones(rows, cols, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ones_Size_int(cv::Size* size, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::ones(*size, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ones_int_const_intX_int(int ndims, const int* sz, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::ones(ndims, sz, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_eye_int_int_int(int rows, int cols, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::eye(rows, cols, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_eye_Size_int(cv::Size* size, int type, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = cv::Mat::eye(*size, type);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_create_int_int_int(cv::Mat* instance, int rows, int cols, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_create_Size_int(cv::Mat* instance, cv::Size* size, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*size, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_create_int_const_intX_int(cv::Mat* instance, int ndims, const int* sizes, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(ndims, sizes, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_create_const_vectorLintGR_int(cv::Mat* instance, const std::vector<int>* sizes, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*sizes, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_addref(cv::Mat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->addref();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_release(cv::Mat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_deallocate(cv::Mat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->deallocate();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reserve_size_t(cv::Mat* instance, size_t sz, ResultVoid* ocvrs_return) {
		try {
			instance->reserve(sz);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_reserveBuffer_size_t(cv::Mat* instance, size_t sz, ResultVoid* ocvrs_return) {
		try {
			instance->reserveBuffer(sz);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_resize_size_t(cv::Mat* instance, size_t sz, ResultVoid* ocvrs_return) {
		try {
			instance->resize(sz);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_resize_size_t_const_ScalarR(cv::Mat* instance, size_t sz, const cv::Scalar* s, ResultVoid* ocvrs_return) {
		try {
			instance->resize(sz, *s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_push_back_const_MatR(cv::Mat* instance, const cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->push_back(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_pop_back_size_t(cv::Mat* instance, size_t nelems, ResultVoid* ocvrs_return) {
		try {
			instance->pop_back(nelems);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_pop_back(cv::Mat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->pop_back();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_locateROI_const_SizeR_PointR(const cv::Mat* instance, cv::Size* wholeSize, cv::Point* ofs, ResultVoid* ocvrs_return) {
		try {
			instance->locateROI(*wholeSize, *ofs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_adjustROI_int_int_int_int(cv::Mat* instance, int dtop, int dbottom, int dleft, int dright, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->adjustROI(dtop, dbottom, dleft, dright);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operator___const_Range_Range(const cv::Mat* instance, cv::Range* rowRange, cv::Range* colRange, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->operator()(*rowRange, *colRange);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operator___Range_Range(cv::Mat* instance, cv::Range* rowRange, cv::Range* colRange, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->operator()(*rowRange, *colRange);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operator___const_const_RectR(const cv::Mat* instance, const cv::Rect* roi, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->operator()(*roi);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operator___const_RectR(cv::Mat* instance, const cv::Rect* roi, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->operator()(*roi);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operator___const_const_vectorLRangeGR(const cv::Mat* instance, const std::vector<cv::Range>* ranges, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->operator()(*ranges);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operator___const_vectorLRangeGR(cv::Mat* instance, const std::vector<cv::Range>* ranges, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->operator()(*ranges);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	bool cv_Mat_isContinuous_const(const cv::Mat* instance) {
			bool ret = instance->isContinuous();
			return ret;
	}
	
	bool cv_Mat_isSubmatrix_const(const cv::Mat* instance) {
			bool ret = instance->isSubmatrix();
			return ret;
	}
	
	void cv_Mat_elemSize_const(const cv::Mat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	size_t cv_Mat_elemSize1_const(const cv::Mat* instance) {
			size_t ret = instance->elemSize1();
			return ret;
	}
	
	int cv_Mat_type_const(const cv::Mat* instance) {
			int ret = instance->type();
			return ret;
	}
	
	int cv_Mat_depth_const(const cv::Mat* instance) {
			int ret = instance->depth();
			return ret;
	}
	
	int cv_Mat_channels_const(const cv::Mat* instance) {
			int ret = instance->channels();
			return ret;
	}
	
	void cv_Mat_step1_const_int(const cv::Mat* instance, int i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step1(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_step1_const(const cv::Mat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	bool cv_Mat_empty_const(const cv::Mat* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_Mat_total_const(const cv::Mat* instance) {
			size_t ret = instance->total();
			return ret;
	}
	
	void cv_Mat_total_const_int_int(const cv::Mat* instance, int startDim, int endDim, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->total(startDim, endDim);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_total_const_int(const cv::Mat* instance, int startDim, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->total(startDim);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_checkVector_const_int_int_bool(const cv::Mat* instance, int elemChannels, int depth, bool requireContinuous, Result<int>* ocvrs_return) {
		try {
			int ret = instance->checkVector(elemChannels, depth, requireContinuous);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_checkVector_const_int(const cv::Mat* instance, int elemChannels, Result<int>* ocvrs_return) {
		try {
			int ret = instance->checkVector(elemChannels);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_int(cv::Mat* instance, int i0, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr(cv::Mat* instance, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_const_int(const cv::Mat* instance, int i0, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr(i0);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_const(const cv::Mat* instance, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_int_int(cv::Mat* instance, int row, int col, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(row, col);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_const_int_int(const cv::Mat* instance, int row, int col, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr(row, col);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_int_int_int(cv::Mat* instance, int i0, int i1, int i2, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, i1, i2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_const_int_int_int(const cv::Mat* instance, int i0, int i1, int i2, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr(i0, i1, i2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_const_intX(cv::Mat* instance, const int* idx, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_ptr_const_const_intX(const cv::Mat* instance, const int* idx, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_operatorST_MatRR(cv::Mat* instance, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(std::move(*m));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_updateContinuityFlag(cv::Mat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->updateContinuityFlag();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Mat_size_const(const cv::Mat* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_Mat_propFlags_const(const cv::Mat* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_Mat_propFlags_const_int(cv::Mat* instance, const int val) {
			instance->flags = val;
	}
	
	int cv_Mat_propDims_const(const cv::Mat* instance) {
			int ret = instance->dims;
			return ret;
	}
	
	void cv_Mat_propDims_const_int(cv::Mat* instance, const int val) {
			instance->dims = val;
	}
	
	int cv_Mat_propRows_const(const cv::Mat* instance) {
			int ret = instance->rows;
			return ret;
	}
	
	void cv_Mat_propRows_const_int(cv::Mat* instance, const int val) {
			instance->rows = val;
	}
	
	int cv_Mat_propCols_const(const cv::Mat* instance) {
			int ret = instance->cols;
			return ret;
	}
	
	void cv_Mat_propCols_const_int(cv::Mat* instance, const int val) {
			instance->cols = val;
	}
	
	unsigned char* cv_Mat_propData_const(const cv::Mat* instance) {
			unsigned char* const ret = instance->data;
			return ret;
	}
	
	unsigned char* cv_Mat_propData(cv::Mat* instance) {
			unsigned char* ret = instance->data;
			return ret;
	}
	
	void cv_Mat_propData_unsigned_charX(cv::Mat* instance, unsigned char* const val) {
			instance->data = val;
	}
	
	const unsigned char* cv_Mat_propDatastart_const(const cv::Mat* instance) {
			const unsigned char* ret = instance->datastart;
			return ret;
	}
	
	const unsigned char* cv_Mat_propDataend_const(const cv::Mat* instance) {
			const unsigned char* ret = instance->dataend;
			return ret;
	}
	
	const unsigned char* cv_Mat_propDatalimit_const(const cv::Mat* instance) {
			const unsigned char* ret = instance->datalimit;
			return ret;
	}
	
	cv::UMatData** cv_Mat_propU(cv::Mat* instance) {
			cv::UMatData* ret = instance->u;
			return new cv::UMatData*(ret);
	}
	
	void cv_Mat_propU_UMatDataX(cv::Mat* instance, cv::UMatData* const val) {
			instance->u = val;
	}
	
	cv::MatSize* cv_Mat_propSize_const(const cv::Mat* instance) {
			cv::MatSize ret = instance->size;
			return new cv::MatSize(ret);
	}
	
	void cv_Mat_propSize_const_MatSize(cv::Mat* instance, const cv::MatSize* val) {
			instance->size = *val;
	}
	
	cv::MatStep* cv_Mat_propStep_const(const cv::Mat* instance) {
			cv::MatStep ret = instance->step;
			return new cv::MatStep(ret);
	}
	
	void cv_Mat_delete(cv::Mat* instance) {
			delete instance;
	}
	
	void cv_MatConstIterator_MatConstIterator(Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator* ret = new cv::MatConstIterator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_MatConstIterator_const_MatX(const cv::Mat* _m, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator* ret = new cv::MatConstIterator(_m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_MatConstIterator_const_MatX_int_int(const cv::Mat* _m, int _row, int _col, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator* ret = new cv::MatConstIterator(_m, _row, _col);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_MatConstIterator_const_MatX_int(const cv::Mat* _m, int _row, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator* ret = new cv::MatConstIterator(_m, _row);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_MatConstIterator_const_MatX_Point(const cv::Mat* _m, cv::Point* _pt, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator* ret = new cv::MatConstIterator(_m, *_pt);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_MatConstIterator_const_MatConstIteratorR(const cv::MatConstIterator* it, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator* ret = new cv::MatConstIterator(*it);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_operatorST_const_MatConstIteratorR(cv::MatConstIterator* instance, const cv::MatConstIterator* it, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*it);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_operatorX_const(const cv::MatConstIterator* instance, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->operator*();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_operator___const_ptrdiff_t(const cv::MatConstIterator* instance, ptrdiff_t i, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->operator[](i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_operatorSS(cv::MatConstIterator* instance, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator ret = instance->operator--();
			Ok(new cv::MatConstIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_operatorAA(cv::MatConstIterator* instance, Result<cv::MatConstIterator*>* ocvrs_return) {
		try {
			cv::MatConstIterator ret = instance->operator++();
			Ok(new cv::MatConstIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_pos_const(const cv::MatConstIterator* instance, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->pos();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_pos_const_intX(const cv::MatConstIterator* instance, int* _idx, ResultVoid* ocvrs_return) {
		try {
			instance->pos(_idx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_lpos_const(const cv::MatConstIterator* instance, Result<ptrdiff_t>* ocvrs_return) {
		try {
			ptrdiff_t ret = instance->lpos();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_seek_ptrdiff_t_bool(cv::MatConstIterator* instance, ptrdiff_t ofs, bool relative, ResultVoid* ocvrs_return) {
		try {
			instance->seek(ofs, relative);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_seek_ptrdiff_t(cv::MatConstIterator* instance, ptrdiff_t ofs, ResultVoid* ocvrs_return) {
		try {
			instance->seek(ofs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_seek_const_intX_bool(cv::MatConstIterator* instance, const int* _idx, bool relative, ResultVoid* ocvrs_return) {
		try {
			instance->seek(_idx, relative);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatConstIterator_seek_const_intX(cv::MatConstIterator* instance, const int* _idx, ResultVoid* ocvrs_return) {
		try {
			instance->seek(_idx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_MatConstIterator_type_const(const cv::MatConstIterator* instance) {
			int ret = instance->m->type();
			return ret;
	}
	
	const cv::Mat** cv_MatConstIterator_propM_const(const cv::MatConstIterator* instance) {
			const cv::Mat* ret = instance->m;
			return new const cv::Mat*(ret);
	}
	
	size_t cv_MatConstIterator_propElemSize_const(const cv::MatConstIterator* instance) {
			size_t ret = instance->elemSize;
			return ret;
	}
	
	void cv_MatConstIterator_propElemSize_const_size_t(cv::MatConstIterator* instance, const size_t val) {
			instance->elemSize = val;
	}
	
	const unsigned char* cv_MatConstIterator_propPtr_const(const cv::MatConstIterator* instance) {
			const unsigned char* ret = instance->ptr;
			return ret;
	}
	
	const unsigned char* cv_MatConstIterator_propSliceStart_const(const cv::MatConstIterator* instance) {
			const unsigned char* ret = instance->sliceStart;
			return ret;
	}
	
	const unsigned char* cv_MatConstIterator_propSliceEnd_const(const cv::MatConstIterator* instance) {
			const unsigned char* ret = instance->sliceEnd;
			return ret;
	}
	
	void cv_MatConstIterator_delete(cv::MatConstIterator* instance) {
			delete instance;
	}
	
	void cv_MatExpr_MatExpr(Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr* ret = new cv::MatExpr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_MatExpr_const_MatR(const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr* ret = new cv::MatExpr(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_MatExpr_const_MatOpX_int_const_MatR_const_MatR_const_MatR_double_double_const_ScalarR(const cv::MatOp* _op, int _flags, const cv::Mat* _a, const cv::Mat* _b, const cv::Mat* _c, double _alpha, double _beta, const cv::Scalar* _s, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr* ret = new cv::MatExpr(_op, _flags, *_a, *_b, *_c, _alpha, _beta, *_s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_MatExpr_const_MatOpX_int(const cv::MatOp* _op, int _flags, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr* ret = new cv::MatExpr(_op, _flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_operator_cv_Mat_const(const cv::MatExpr* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->operator cv::Mat();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_size_const(const cv::MatExpr* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_type_const(const cv::MatExpr* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_row_const_int(const cv::MatExpr* instance, int y, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->row(y);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_col_const_int(const cv::MatExpr* instance, int x, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->col(x);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_diag_const_int(const cv::MatExpr* instance, int d, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->diag(d);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_diag_const(const cv::MatExpr* instance, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->diag();
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_operator___const_const_RangeR_const_RangeR(const cv::MatExpr* instance, const cv::Range* rowRange, const cv::Range* colRange, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->operator()(*rowRange, *colRange);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_operator___const_const_RectR(const cv::MatExpr* instance, const cv::Rect* roi, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->operator()(*roi);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_t_const(const cv::MatExpr* instance, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->t();
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_inv_const_int(const cv::MatExpr* instance, int method, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->inv(method);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_inv_const(const cv::MatExpr* instance, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->inv();
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_mul_const_const_MatExprR_double(const cv::MatExpr* instance, const cv::MatExpr* e, double scale, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->mul(*e, scale);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_mul_const_const_MatExprR(const cv::MatExpr* instance, const cv::MatExpr* e, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->mul(*e);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_mul_const_const_MatR_double(const cv::MatExpr* instance, const cv::Mat* m, double scale, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->mul(*m, scale);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_mul_const_const_MatR(const cv::MatExpr* instance, const cv::Mat* m, Result<cv::MatExpr*>* ocvrs_return) {
		try {
			cv::MatExpr ret = instance->mul(*m);
			Ok(new cv::MatExpr(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_cross_const_const_MatR(const cv::MatExpr* instance, const cv::Mat* m, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->cross(*m);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_dot_const_const_MatR(const cv::MatExpr* instance, const cv::Mat* m, Result<double>* ocvrs_return) {
		try {
			double ret = instance->dot(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatExpr_swap_MatExprR(cv::MatExpr* instance, cv::MatExpr* b, ResultVoid* ocvrs_return) {
		try {
			instance->swap(*b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_MatExpr_propFlags_const(const cv::MatExpr* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_MatExpr_propFlags_const_int(cv::MatExpr* instance, const int val) {
			instance->flags = val;
	}
	
	cv::Mat* cv_MatExpr_propA_const(const cv::MatExpr* instance) {
			cv::Mat ret = instance->a;
			return new cv::Mat(ret);
	}
	
	void cv_MatExpr_propA_const_Mat(cv::MatExpr* instance, const cv::Mat* val) {
			instance->a = *val;
	}
	
	cv::Mat* cv_MatExpr_propB_const(const cv::MatExpr* instance) {
			cv::Mat ret = instance->b;
			return new cv::Mat(ret);
	}
	
	void cv_MatExpr_propB_const_Mat(cv::MatExpr* instance, const cv::Mat* val) {
			instance->b = *val;
	}
	
	cv::Mat* cv_MatExpr_propC_const(const cv::MatExpr* instance) {
			cv::Mat ret = instance->c;
			return new cv::Mat(ret);
	}
	
	void cv_MatExpr_propC_const_Mat(cv::MatExpr* instance, const cv::Mat* val) {
			instance->c = *val;
	}
	
	double cv_MatExpr_propAlpha_const(const cv::MatExpr* instance) {
			double ret = instance->alpha;
			return ret;
	}
	
	void cv_MatExpr_propAlpha_const_double(cv::MatExpr* instance, const double val) {
			instance->alpha = val;
	}
	
	double cv_MatExpr_propBeta_const(const cv::MatExpr* instance) {
			double ret = instance->beta;
			return ret;
	}
	
	void cv_MatExpr_propBeta_const_double(cv::MatExpr* instance, const double val) {
			instance->beta = val;
	}
	
	void cv_MatExpr_propS_const(const cv::MatExpr* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->s;
			*ocvrs_return = ret;
	}
	
	void cv_MatExpr_propS_const_Scalar(cv::MatExpr* instance, const cv::Scalar* val) {
			instance->s = *val;
	}
	
	void cv_MatExpr_delete(cv::MatExpr* instance) {
			delete instance;
	}
	
	void cv_MatOp_elementWise_const_const_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->elementWise(*expr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_assign_const_const_MatExprR_MatR_int(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, int type, ResultVoid* ocvrs_return) {
		try {
			instance->assign(*expr, *m, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_assign_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->assign(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_roi_const_const_MatExprR_const_RangeR_const_RangeR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, const cv::Range* rowRange, const cv::Range* colRange, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->roi(*expr, *rowRange, *colRange, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_diag_const_const_MatExprR_int_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, int d, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->diag(*expr, d, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignAdd_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignAdd(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignSubtract_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignSubtract(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignMultiply_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignMultiply(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignDivide_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignDivide(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignAnd_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignAnd(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignOr_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignOr(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_augAssignXor_const_const_MatExprR_MatR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->augAssignXor(*expr, *m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_add_const_const_MatExprR_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->add(*expr1, *expr2, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_add_const_const_MatExprR_const_ScalarR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::Scalar* s, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->add(*expr1, *s, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_subtract_const_const_MatExprR_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->subtract(*expr1, *expr2, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_subtract_const_const_ScalarR_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::Scalar* s, const cv::MatExpr* expr, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->subtract(*s, *expr, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_multiply_const_const_MatExprR_const_MatExprR_MatExprR_double(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, double scale, ResultVoid* ocvrs_return) {
		try {
			instance->multiply(*expr1, *expr2, *res, scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_multiply_const_const_MatExprR_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->multiply(*expr1, *expr2, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_multiply_const_const_MatExprR_double_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, double s, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->multiply(*expr1, s, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_divide_const_const_MatExprR_const_MatExprR_MatExprR_double(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, double scale, ResultVoid* ocvrs_return) {
		try {
			instance->divide(*expr1, *expr2, *res, scale);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_divide_const_const_MatExprR_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->divide(*expr1, *expr2, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_divide_const_double_const_MatExprR_MatExprR(const cv::MatOp* instance, double s, const cv::MatExpr* expr, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->divide(s, *expr, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_abs_const_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->abs(*expr, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_transpose_const_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->transpose(*expr, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_matmul_const_const_MatExprR_const_MatExprR_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr1, const cv::MatExpr* expr2, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->matmul(*expr1, *expr2, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_invert_const_const_MatExprR_int_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, int method, cv::MatExpr* res, ResultVoid* ocvrs_return) {
		try {
			instance->invert(*expr, method, *res);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_size_const_const_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size(*expr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_type_const_const_MatExprR(const cv::MatOp* instance, const cv::MatExpr* expr, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type(*expr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatOp_delete(cv::MatOp* instance) {
			delete instance;
	}
	
	cv::MatSize* cv_MatSize_MatSize_intX(int* _p) {
			cv::MatSize* ret = new cv::MatSize(_p);
			return ret;
	}
	
	int cv_MatSize_dims_const(const cv::MatSize* instance) {
			int ret = instance->dims();
			return ret;
	}
	
	void cv_MatSize_operator___const(const cv::MatSize* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->operator()();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatSize_operator___const_int(const cv::MatSize* instance, int i, Result<int>* ocvrs_return) {
		try {
			const int ret = instance->operator[](i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatSize_operator___int(cv::MatSize* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->operator[](i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	const int* cv_MatSize_operator_const_intX_const(const cv::MatSize* instance) {
			const int* ret = instance->operator const int*();
			return ret;
	}
	
	bool cv_MatSize_operatorEQ_const_const_MatSizeR(const cv::MatSize* instance, const cv::MatSize* sz) {
			bool ret = instance->operator==(*sz);
			return ret;
	}
	
	bool cv_MatSize_operatorNE_const_const_MatSizeR(const cv::MatSize* instance, const cv::MatSize* sz) {
			bool ret = instance->operator!=(*sz);
			return ret;
	}
	
	int* cv_MatSize_propP_const(const cv::MatSize* instance) {
			int* const ret = instance->p;
			return ret;
	}
	
	int* cv_MatSize_propP(cv::MatSize* instance) {
			int* ret = instance->p;
			return ret;
	}
	
	void cv_MatSize_propP_intX(cv::MatSize* instance, int* const val) {
			instance->p = val;
	}
	
	void cv_MatSize_delete(cv::MatSize* instance) {
			delete instance;
	}
	
	cv::MatStep* cv_MatStep_MatStep() {
			cv::MatStep* ret = new cv::MatStep();
			return ret;
	}
	
	cv::MatStep* cv_MatStep_MatStep_size_t(size_t s) {
			cv::MatStep* ret = new cv::MatStep(s);
			return ret;
	}
	
	const size_t cv_MatStep_operator___const_int(const cv::MatStep* instance, int i) {
			const size_t ret = instance->operator[](i);
			return ret;
	}
	
	size_t cv_MatStep_operator___int(cv::MatStep* instance, int i) {
			size_t ret = instance->operator[](i);
			return ret;
	}
	
	void cv_MatStep_operator_size_t_const(const cv::MatStep* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->operator size_t();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MatStep_operatorST_size_t(cv::MatStep* instance, size_t s, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	size_t* cv_MatStep_propP_const(const cv::MatStep* instance) {
			size_t* const ret = instance->p;
			return ret;
	}
	
	size_t* cv_MatStep_propP(cv::MatStep* instance) {
			size_t* ret = instance->p;
			return ret;
	}
	
	void cv_MatStep_propP_size_tX(cv::MatStep* instance, size_t* const val) {
			instance->p = val;
	}
	
	const size_t** cv_MatStep_propBuf_const(const cv::MatStep* instance) {
			const size_t(*ret)[2] = &instance->buf;
			return (const size_t**)ret;
	}
	
	size_t** cv_MatStep_propBuf(cv::MatStep* instance) {
			size_t(*ret)[2] = &instance->buf;
			return (size_t**)ret;
	}
	
	void cv_MatStep_delete(cv::MatStep* instance) {
			delete instance;
	}
	
	void cv_Matx_AddOp_Matx_AddOp(Result<cv::Matx_AddOp*>* ocvrs_return) {
		try {
			cv::Matx_AddOp* ret = new cv::Matx_AddOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_AddOp_Matx_AddOp_const_Matx_AddOpR(const cv::Matx_AddOp* unnamed, Result<cv::Matx_AddOp*>* ocvrs_return) {
		try {
			cv::Matx_AddOp* ret = new cv::Matx_AddOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_AddOp_delete(cv::Matx_AddOp* instance) {
			delete instance;
	}
	
	void cv_Matx_DivOp_Matx_DivOp(Result<cv::Matx_DivOp*>* ocvrs_return) {
		try {
			cv::Matx_DivOp* ret = new cv::Matx_DivOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_DivOp_Matx_DivOp_const_Matx_DivOpR(const cv::Matx_DivOp* unnamed, Result<cv::Matx_DivOp*>* ocvrs_return) {
		try {
			cv::Matx_DivOp* ret = new cv::Matx_DivOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_DivOp_delete(cv::Matx_DivOp* instance) {
			delete instance;
	}
	
	void cv_Matx_MatMulOp_Matx_MatMulOp(Result<cv::Matx_MatMulOp*>* ocvrs_return) {
		try {
			cv::Matx_MatMulOp* ret = new cv::Matx_MatMulOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_MatMulOp_Matx_MatMulOp_const_Matx_MatMulOpR(const cv::Matx_MatMulOp* unnamed, Result<cv::Matx_MatMulOp*>* ocvrs_return) {
		try {
			cv::Matx_MatMulOp* ret = new cv::Matx_MatMulOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_MatMulOp_delete(cv::Matx_MatMulOp* instance) {
			delete instance;
	}
	
	void cv_Matx_MulOp_Matx_MulOp(Result<cv::Matx_MulOp*>* ocvrs_return) {
		try {
			cv::Matx_MulOp* ret = new cv::Matx_MulOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_MulOp_Matx_MulOp_const_Matx_MulOpR(const cv::Matx_MulOp* unnamed, Result<cv::Matx_MulOp*>* ocvrs_return) {
		try {
			cv::Matx_MulOp* ret = new cv::Matx_MulOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_MulOp_delete(cv::Matx_MulOp* instance) {
			delete instance;
	}
	
	void cv_Matx_ScaleOp_Matx_ScaleOp(Result<cv::Matx_ScaleOp*>* ocvrs_return) {
		try {
			cv::Matx_ScaleOp* ret = new cv::Matx_ScaleOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_ScaleOp_Matx_ScaleOp_const_Matx_ScaleOpR(const cv::Matx_ScaleOp* unnamed, Result<cv::Matx_ScaleOp*>* ocvrs_return) {
		try {
			cv::Matx_ScaleOp* ret = new cv::Matx_ScaleOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_ScaleOp_delete(cv::Matx_ScaleOp* instance) {
			delete instance;
	}
	
	void cv_Matx_SubOp_Matx_SubOp(Result<cv::Matx_SubOp*>* ocvrs_return) {
		try {
			cv::Matx_SubOp* ret = new cv::Matx_SubOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_SubOp_Matx_SubOp_const_Matx_SubOpR(const cv::Matx_SubOp* unnamed, Result<cv::Matx_SubOp*>* ocvrs_return) {
		try {
			cv::Matx_SubOp* ret = new cv::Matx_SubOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_SubOp_delete(cv::Matx_SubOp* instance) {
			delete instance;
	}
	
	void cv_Matx_TOp_Matx_TOp(Result<cv::Matx_TOp*>* ocvrs_return) {
		try {
			cv::Matx_TOp* ret = new cv::Matx_TOp();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_TOp_Matx_TOp_const_Matx_TOpR(const cv::Matx_TOp* unnamed, Result<cv::Matx_TOp*>* ocvrs_return) {
		try {
			cv::Matx_TOp* ret = new cv::Matx_TOp(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Matx_TOp_delete(cv::Matx_TOp* instance) {
			delete instance;
	}
	
	void cv_MinProblemSolver_getFunction_const(const cv::MinProblemSolver* instance, Result<cv::Ptr<cv::MinProblemSolver::Function>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::MinProblemSolver::Function> ret = instance->getFunction();
			Ok(new cv::Ptr<cv::MinProblemSolver::Function>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_setFunction_const_PtrLFunctionGR(cv::MinProblemSolver* instance, const cv::Ptr<cv::MinProblemSolver::Function>* f, ResultVoid* ocvrs_return) {
		try {
			instance->setFunction(*f);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_getTermCriteria_const(const cv::MinProblemSolver* instance, Result<cv::TermCriteria>* ocvrs_return) {
		try {
			cv::TermCriteria ret = instance->getTermCriteria();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_setTermCriteria_const_TermCriteriaR(cv::MinProblemSolver* instance, const cv::TermCriteria* termcrit, ResultVoid* ocvrs_return) {
		try {
			instance->setTermCriteria(*termcrit);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_minimize_const__InputOutputArrayR(cv::MinProblemSolver* instance, const cv::_InputOutputArray* x, Result<double>* ocvrs_return) {
		try {
			double ret = instance->minimize(*x);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ConjGradSolver* cv_MinProblemSolver_to_ConjGradSolver(cv::MinProblemSolver* instance) {
			return dynamic_cast<cv::ConjGradSolver*>(instance);
	}
	
	cv::DownhillSolver* cv_MinProblemSolver_to_DownhillSolver(cv::MinProblemSolver* instance) {
			return dynamic_cast<cv::DownhillSolver*>(instance);
	}
	
	cv::Algorithm* cv_MinProblemSolver_to_Algorithm(cv::MinProblemSolver* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_MinProblemSolver_delete(cv::MinProblemSolver* instance) {
			delete instance;
	}
	
	void cv_MinProblemSolver_Function_getDims_const(const cv::MinProblemSolver::Function* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDims();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_Function_getGradientEps_const(const cv::MinProblemSolver::Function* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getGradientEps();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_Function_calc_const_const_doubleX(const cv::MinProblemSolver::Function* instance, const double* x, Result<double>* ocvrs_return) {
		try {
			double ret = instance->calc(x);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_Function_getGradient_const_doubleX_doubleX(cv::MinProblemSolver::Function* instance, const double* x, double* grad, ResultVoid* ocvrs_return) {
		try {
			instance->getGradient(x, grad);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_MinProblemSolver_Function_delete(cv::MinProblemSolver::Function* instance) {
			delete instance;
	}
	
	void cv_Moments_Moments(Result<cv::Moments>* ocvrs_return) {
		try {
			cv::Moments ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Moments_Moments_double_double_double_double_double_double_double_double_double_double(double m00, double m10, double m01, double m20, double m11, double m02, double m30, double m21, double m12, double m03, Result<cv::Moments>* ocvrs_return) {
		try {
			cv::Moments ret(m00, m10, m01, m20, m11, m02, m30, m21, m12, m03);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_PCA(Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA* ret = new cv::PCA();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_PCA_const__InputArrayR_const__InputArrayR_int_int(const cv::_InputArray* data, const cv::_InputArray* mean, int flags, int maxComponents, Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA* ret = new cv::PCA(*data, *mean, flags, maxComponents);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_PCA_const__InputArrayR_const__InputArrayR_int(const cv::_InputArray* data, const cv::_InputArray* mean, int flags, Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA* ret = new cv::PCA(*data, *mean, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_PCA_const__InputArrayR_const__InputArrayR_int_double(const cv::_InputArray* data, const cv::_InputArray* mean, int flags, double retainedVariance, Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA* ret = new cv::PCA(*data, *mean, flags, retainedVariance);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_operator___const__InputArrayR_const__InputArrayR_int_int(cv::PCA* instance, const cv::_InputArray* data, const cv::_InputArray* mean, int flags, int maxComponents, Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA ret = instance->operator()(*data, *mean, flags, maxComponents);
			Ok(new cv::PCA(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_operator___const__InputArrayR_const__InputArrayR_int(cv::PCA* instance, const cv::_InputArray* data, const cv::_InputArray* mean, int flags, Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA ret = instance->operator()(*data, *mean, flags);
			Ok(new cv::PCA(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_operator___const__InputArrayR_const__InputArrayR_int_double(cv::PCA* instance, const cv::_InputArray* data, const cv::_InputArray* mean, int flags, double retainedVariance, Result<cv::PCA*>* ocvrs_return) {
		try {
			cv::PCA ret = instance->operator()(*data, *mean, flags, retainedVariance);
			Ok(new cv::PCA(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_project_const_const__InputArrayR(const cv::PCA* instance, const cv::_InputArray* vec, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->project(*vec);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_project_const_const__InputArrayR_const__OutputArrayR(const cv::PCA* instance, const cv::_InputArray* vec, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			instance->project(*vec, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_backProject_const_const__InputArrayR(const cv::PCA* instance, const cv::_InputArray* vec, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->backProject(*vec);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_backProject_const_const__InputArrayR_const__OutputArrayR(const cv::PCA* instance, const cv::_InputArray* vec, const cv::_OutputArray* result, ResultVoid* ocvrs_return) {
		try {
			instance->backProject(*vec, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_write_const_FileStorageR(const cv::PCA* instance, cv::FileStorage* fs, ResultVoid* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PCA_read_const_FileNodeR(cv::PCA* instance, const cv::FileNode* fn, ResultVoid* ocvrs_return) {
		try {
			instance->read(*fn);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Mat* cv_PCA_propEigenvectors_const(const cv::PCA* instance) {
			cv::Mat ret = instance->eigenvectors;
			return new cv::Mat(ret);
	}
	
	void cv_PCA_propEigenvectors_const_Mat(cv::PCA* instance, const cv::Mat* val) {
			instance->eigenvectors = *val;
	}
	
	cv::Mat* cv_PCA_propEigenvalues_const(const cv::PCA* instance) {
			cv::Mat ret = instance->eigenvalues;
			return new cv::Mat(ret);
	}
	
	void cv_PCA_propEigenvalues_const_Mat(cv::PCA* instance, const cv::Mat* val) {
			instance->eigenvalues = *val;
	}
	
	cv::Mat* cv_PCA_propMean_const(const cv::PCA* instance) {
			cv::Mat ret = instance->mean;
			return new cv::Mat(ret);
	}
	
	void cv_PCA_propMean_const_Mat(cv::PCA* instance, const cv::Mat* val) {
			instance->mean = *val;
	}
	
	void cv_PCA_delete(cv::PCA* instance) {
			delete instance;
	}
	
	void cv_ParallelLoopBody_operator___const_const_RangeR(const cv::ParallelLoopBody* instance, const cv::Range* range, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*range);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ParallelLoopBody_delete(cv::ParallelLoopBody* instance) {
			delete instance;
	}
	
	void cv_RNG_RNG(Result<cv::RNG*>* ocvrs_return) {
		try {
			cv::RNG* ret = new cv::RNG();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_RNG_uint64_t(uint64_t state, Result<cv::RNG*>* ocvrs_return) {
		try {
			cv::RNG* ret = new cv::RNG(state);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_next(cv::RNG* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->next();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_unsigned_char(cv::RNG* instance, Result<unsigned char>* ocvrs_return) {
		try {
			unsigned char ret = instance->operator unsigned char();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_signed_char(cv::RNG* instance, Result<signed char>* ocvrs_return) {
		try {
			signed char ret = instance->operator signed char();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_unsigned_short(cv::RNG* instance, Result<unsigned short>* ocvrs_return) {
		try {
			unsigned short ret = instance->operator unsigned short();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_short(cv::RNG* instance, Result<short>* ocvrs_return) {
		try {
			short ret = instance->operator short();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_unsigned_int(cv::RNG* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->operator unsigned int();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_int(cv::RNG* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->operator int();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_float(cv::RNG* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->operator float();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator_double(cv::RNG* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->operator double();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator__(cv::RNG* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->operator()();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operator___unsigned_int(cv::RNG* instance, unsigned int N, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->operator()(N);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_uniform_int_int(cv::RNG* instance, int a, int b, Result<int>* ocvrs_return) {
		try {
			int ret = instance->uniform(a, b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_uniform_float_float(cv::RNG* instance, float a, float b, Result<float>* ocvrs_return) {
		try {
			float ret = instance->uniform(a, b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_uniform_double_double(cv::RNG* instance, double a, double b, Result<double>* ocvrs_return) {
		try {
			double ret = instance->uniform(a, b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_fill_const__InputOutputArrayR_int_const__InputArrayR_const__InputArrayR_bool(cv::RNG* instance, const cv::_InputOutputArray* mat, int distType, const cv::_InputArray* a, const cv::_InputArray* b, bool saturateRange, ResultVoid* ocvrs_return) {
		try {
			instance->fill(*mat, distType, *a, *b, saturateRange);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_fill_const__InputOutputArrayR_int_const__InputArrayR_const__InputArrayR(cv::RNG* instance, const cv::_InputOutputArray* mat, int distType, const cv::_InputArray* a, const cv::_InputArray* b, ResultVoid* ocvrs_return) {
		try {
			instance->fill(*mat, distType, *a, *b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_gaussian_double(cv::RNG* instance, double sigma, Result<double>* ocvrs_return) {
		try {
			double ret = instance->gaussian(sigma);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_operatorEQ_const_const_RNGR(const cv::RNG* instance, const cv::RNG* other, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*other);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	uint64_t cv_RNG_propState_const(const cv::RNG* instance) {
			uint64_t ret = instance->state;
			return ret;
	}
	
	void cv_RNG_propState_const_uint64_t(cv::RNG* instance, const uint64_t val) {
			instance->state = val;
	}
	
	void cv_RNG_delete(cv::RNG* instance) {
			delete instance;
	}
	
	void cv_RNG_MT19937_RNG_MT19937(Result<cv::RNG_MT19937*>* ocvrs_return) {
		try {
			cv::RNG_MT19937* ret = new cv::RNG_MT19937();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_RNG_MT19937_unsigned_int(unsigned int s, Result<cv::RNG_MT19937*>* ocvrs_return) {
		try {
			cv::RNG_MT19937* ret = new cv::RNG_MT19937(s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_seed_unsigned_int(cv::RNG_MT19937* instance, unsigned int s, ResultVoid* ocvrs_return) {
		try {
			instance->seed(s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_next(cv::RNG_MT19937* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->next();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_operator_int(cv::RNG_MT19937* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->operator int();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_operator_unsigned_int(cv::RNG_MT19937* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->operator unsigned int();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_operator_float(cv::RNG_MT19937* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->operator float();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_operator_double(cv::RNG_MT19937* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->operator double();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_operator___unsigned_int(cv::RNG_MT19937* instance, unsigned int N, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->operator()(N);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_uniform_int_int(cv::RNG_MT19937* instance, int a, int b, Result<int>* ocvrs_return) {
		try {
			int ret = instance->uniform(a, b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_uniform_float_float(cv::RNG_MT19937* instance, float a, float b, Result<float>* ocvrs_return) {
		try {
			float ret = instance->uniform(a, b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_uniform_double_double(cv::RNG_MT19937* instance, double a, double b, Result<double>* ocvrs_return) {
		try {
			double ret = instance->uniform(a, b);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RNG_MT19937_delete(cv::RNG_MT19937* instance) {
			delete instance;
	}
	
	void cv_Range_Range(Result<cv::Range*>* ocvrs_return) {
		try {
			cv::Range* ret = new cv::Range();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Range_Range_int_int(int _start, int _end, Result<cv::Range*>* ocvrs_return) {
		try {
			cv::Range* ret = new cv::Range(_start, _end);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Range_size_const(const cv::Range* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Range_empty_const(const cv::Range* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Range_all(Result<cv::Range*>* ocvrs_return) {
		try {
			cv::Range ret = cv::Range::all();
			Ok(new cv::Range(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_Range_propStart_const(const cv::Range* instance) {
			int ret = instance->start;
			return ret;
	}
	
	void cv_Range_propStart_const_int(cv::Range* instance, const int val) {
			instance->start = val;
	}
	
	int cv_Range_propEnd_const(const cv::Range* instance) {
			int ret = instance->end;
			return ret;
	}
	
	void cv_Range_propEnd_const_int(cv::Range* instance, const int val) {
			instance->end = val;
	}
	
	void cv_Range_delete(cv::Range* instance) {
			delete instance;
	}
	
	void cv_RotatedRect_RotatedRect(Result<cv::RotatedRect>* ocvrs_return) {
		try {
			cv::RotatedRect ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RotatedRect_RotatedRect_const_Point2fR_const_Size2fR_float(const cv::Point2f* center, const cv::Size2f* size, float angle, Result<cv::RotatedRect>* ocvrs_return) {
		try {
			cv::RotatedRect ret(*center, *size, angle);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RotatedRect_RotatedRect_const_Point2fR_const_Point2fR_const_Point2fR(const cv::Point2f* point1, const cv::Point2f* point2, const cv::Point2f* point3, Result<cv::RotatedRect>* ocvrs_return) {
		try {
			cv::RotatedRect ret(*point1, *point2, *point3);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RotatedRect_points_const_Point2fXX(const cv::RotatedRect* instance, cv::Point2f(*pts)[4], ResultVoid* ocvrs_return) {
		try {
			instance->points(*pts);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RotatedRect_points_const_vectorLPoint2fGR(const cv::RotatedRect* instance, std::vector<cv::Point2f>* pts, ResultVoid* ocvrs_return) {
		try {
			instance->points(*pts);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RotatedRect_boundingRect_const(const cv::RotatedRect* instance, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->boundingRect();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_RotatedRect_boundingRect2f_const(const cv::RotatedRect* instance, Result<cv::Rect2f>* ocvrs_return) {
		try {
			cv::Rect2f ret = instance->boundingRect2f();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_SVD(Result<cv::SVD*>* ocvrs_return) {
		try {
			cv::SVD* ret = new cv::SVD();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_SVD_const__InputArrayR_int(const cv::_InputArray* src, int flags, Result<cv::SVD*>* ocvrs_return) {
		try {
			cv::SVD* ret = new cv::SVD(*src, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_SVD_const__InputArrayR(const cv::_InputArray* src, Result<cv::SVD*>* ocvrs_return) {
		try {
			cv::SVD* ret = new cv::SVD(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_operator___const__InputArrayR_int(cv::SVD* instance, const cv::_InputArray* src, int flags, Result<cv::SVD*>* ocvrs_return) {
		try {
			cv::SVD ret = instance->operator()(*src, flags);
			Ok(new cv::SVD(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_operator___const__InputArrayR(cv::SVD* instance, const cv::_InputArray* src, Result<cv::SVD*>* ocvrs_return) {
		try {
			cv::SVD ret = instance->operator()(*src);
			Ok(new cv::SVD(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_compute_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* w, const cv::_OutputArray* u, const cv::_OutputArray* vt, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::SVD::compute(*src, *w, *u, *vt, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_compute_const__InputArrayR_const__OutputArrayR_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* w, const cv::_OutputArray* u, const cv::_OutputArray* vt, ResultVoid* ocvrs_return) {
		try {
			cv::SVD::compute(*src, *w, *u, *vt);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_compute_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* src, const cv::_OutputArray* w, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::SVD::compute(*src, *w, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_compute_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* w, ResultVoid* ocvrs_return) {
		try {
			cv::SVD::compute(*src, *w);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_backSubst_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* w, const cv::_InputArray* u, const cv::_InputArray* vt, const cv::_InputArray* rhs, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::SVD::backSubst(*w, *u, *vt, *rhs, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_solveZ_const__InputArrayR_const__OutputArrayR(const cv::_InputArray* src, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::SVD::solveZ(*src, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SVD_backSubst_const_const__InputArrayR_const__OutputArrayR(const cv::SVD* instance, const cv::_InputArray* rhs, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->backSubst(*rhs, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Mat* cv_SVD_propU_const(const cv::SVD* instance) {
			cv::Mat ret = instance->u;
			return new cv::Mat(ret);
	}
	
	void cv_SVD_propU_const_Mat(cv::SVD* instance, const cv::Mat* val) {
			instance->u = *val;
	}
	
	cv::Mat* cv_SVD_propW_const(const cv::SVD* instance) {
			cv::Mat ret = instance->w;
			return new cv::Mat(ret);
	}
	
	void cv_SVD_propW_const_Mat(cv::SVD* instance, const cv::Mat* val) {
			instance->w = *val;
	}
	
	cv::Mat* cv_SVD_propVt_const(const cv::SVD* instance) {
			cv::Mat ret = instance->vt;
			return new cv::Mat(ret);
	}
	
	void cv_SVD_propVt_const_Mat(cv::SVD* instance, const cv::Mat* val) {
			instance->vt = *val;
	}
	
	void cv_SVD_delete(cv::SVD* instance) {
			delete instance;
	}
	
	void cv_SparseMat_SparseMat(Result<cv::SparseMat*>* ocvrs_return) {
		try {
			cv::SparseMat* ret = new cv::SparseMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_SparseMat_int_const_intX_int(int dims, const int* _sizes, int _type, Result<cv::SparseMat*>* ocvrs_return) {
		try {
			cv::SparseMat* ret = new cv::SparseMat(dims, _sizes, _type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_SparseMat_const_SparseMatR(const cv::SparseMat* m, Result<cv::SparseMat*>* ocvrs_return) {
		try {
			cv::SparseMat* ret = new cv::SparseMat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_SparseMat_const_MatR(const cv::Mat* m, Result<cv::SparseMat*>* ocvrs_return) {
		try {
			cv::SparseMat* ret = new cv::SparseMat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_operatorST_const_SparseMatR(cv::SparseMat* instance, const cv::SparseMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_operatorST_const_MatR(cv::SparseMat* instance, const cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_clone_const(const cv::SparseMat* instance, Result<cv::SparseMat*>* ocvrs_return) {
		try {
			cv::SparseMat ret = instance->clone();
			Ok(new cv::SparseMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_copyTo_const_SparseMatR(const cv::SparseMat* instance, cv::SparseMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_copyTo_const_MatR(const cv::SparseMat* instance, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_convertTo_const_SparseMatR_int_double(const cv::SparseMat* instance, cv::SparseMat* m, int rtype, double alpha, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype, alpha);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_convertTo_const_SparseMatR_int(const cv::SparseMat* instance, cv::SparseMat* m, int rtype, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_convertTo_const_MatR_int_double_double(const cv::SparseMat* instance, cv::Mat* m, int rtype, double alpha, double beta, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype, alpha, beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_convertTo_const_MatR_int(const cv::SparseMat* instance, cv::Mat* m, int rtype, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_assignTo_const_SparseMatR_int(const cv::SparseMat* instance, cv::SparseMat* m, int type, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_assignTo_const_SparseMatR(const cv::SparseMat* instance, cv::SparseMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_create_int_const_intX_int(cv::SparseMat* instance, int dims, const int* _sizes, int _type, ResultVoid* ocvrs_return) {
		try {
			instance->create(dims, _sizes, _type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_clear(cv::SparseMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_addref(cv::SparseMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->addref();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_release(cv::SparseMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	size_t cv_SparseMat_elemSize_const(const cv::SparseMat* instance) {
			size_t ret = instance->elemSize();
			return ret;
	}
	
	size_t cv_SparseMat_elemSize1_const(const cv::SparseMat* instance) {
			size_t ret = instance->elemSize1();
			return ret;
	}
	
	int cv_SparseMat_type_const(const cv::SparseMat* instance) {
			int ret = instance->type();
			return ret;
	}
	
	int cv_SparseMat_depth_const(const cv::SparseMat* instance) {
			int ret = instance->depth();
			return ret;
	}
	
	int cv_SparseMat_channels_const(const cv::SparseMat* instance) {
			int ret = instance->channels();
			return ret;
	}
	
	void cv_SparseMat_size_const(const cv::SparseMat* instance, Result<const int*>* ocvrs_return) {
		try {
			const int* ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_size_const_int(const cv::SparseMat* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->size(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_dims_const(const cv::SparseMat* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->dims();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_nzcount_const(const cv::SparseMat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->nzcount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_hash_const_int(const cv::SparseMat* instance, int i0, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->hash(i0);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_hash_const_int_int(const cv::SparseMat* instance, int i0, int i1, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->hash(i0, i1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_hash_const_int_int_int(const cv::SparseMat* instance, int i0, int i1, int i2, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->hash(i0, i1, i2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_hash_const_const_intX(const cv::SparseMat* instance, const int* idx, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->hash(idx);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_int_bool_size_tX(cv::SparseMat* instance, int i0, bool createMissing, size_t* hashval, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, createMissing, hashval);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_int_bool(cv::SparseMat* instance, int i0, bool createMissing, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, createMissing);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_int_int_bool_size_tX(cv::SparseMat* instance, int i0, int i1, bool createMissing, size_t* hashval, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, i1, createMissing, hashval);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_int_int_bool(cv::SparseMat* instance, int i0, int i1, bool createMissing, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, i1, createMissing);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_int_int_int_bool_size_tX(cv::SparseMat* instance, int i0, int i1, int i2, bool createMissing, size_t* hashval, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, i1, i2, createMissing, hashval);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_int_int_int_bool(cv::SparseMat* instance, int i0, int i1, int i2, bool createMissing, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(i0, i1, i2, createMissing);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_const_intX_bool_size_tX(cv::SparseMat* instance, const int* idx, bool createMissing, size_t* hashval, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(idx, createMissing, hashval);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_ptr_const_intX_bool(cv::SparseMat* instance, const int* idx, bool createMissing, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(idx, createMissing);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_erase_int_int_size_tX(cv::SparseMat* instance, int i0, int i1, size_t* hashval, ResultVoid* ocvrs_return) {
		try {
			instance->erase(i0, i1, hashval);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_erase_int_int(cv::SparseMat* instance, int i0, int i1, ResultVoid* ocvrs_return) {
		try {
			instance->erase(i0, i1);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_erase_int_int_int_size_tX(cv::SparseMat* instance, int i0, int i1, int i2, size_t* hashval, ResultVoid* ocvrs_return) {
		try {
			instance->erase(i0, i1, i2, hashval);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_erase_int_int_int(cv::SparseMat* instance, int i0, int i1, int i2, ResultVoid* ocvrs_return) {
		try {
			instance->erase(i0, i1, i2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_erase_const_intX_size_tX(cv::SparseMat* instance, const int* idx, size_t* hashval, ResultVoid* ocvrs_return) {
		try {
			instance->erase(idx, hashval);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_erase_const_intX(cv::SparseMat* instance, const int* idx, ResultVoid* ocvrs_return) {
		try {
			instance->erase(idx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_begin(cv::SparseMat* instance, Result<cv::SparseMatIterator*>* ocvrs_return) {
		try {
			cv::SparseMatIterator ret = instance->begin();
			Ok(new cv::SparseMatIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_begin_const(const cv::SparseMat* instance, Result<cv::SparseMatConstIterator*>* ocvrs_return) {
		try {
			cv::SparseMatConstIterator ret = instance->begin();
			Ok(new cv::SparseMatConstIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_end(cv::SparseMat* instance, Result<cv::SparseMatIterator*>* ocvrs_return) {
		try {
			cv::SparseMatIterator ret = instance->end();
			Ok(new cv::SparseMatIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_end_const(const cv::SparseMat* instance, Result<cv::SparseMatConstIterator*>* ocvrs_return) {
		try {
			cv::SparseMatConstIterator ret = instance->end();
			Ok(new cv::SparseMatConstIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_node_size_t(cv::SparseMat* instance, size_t nidx, Result<cv::SparseMat::Node**>* ocvrs_return) {
		try {
			cv::SparseMat::Node* ret = instance->node(nidx);
			Ok(new cv::SparseMat::Node*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_node_const_size_t(const cv::SparseMat* instance, size_t nidx, Result<const cv::SparseMat::Node**>* ocvrs_return) {
		try {
			const cv::SparseMat::Node* ret = instance->node(nidx);
			Ok(new const cv::SparseMat::Node*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_newNode_const_intX_size_t(cv::SparseMat* instance, const int* idx, size_t hashval, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->newNode(idx, hashval);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_removeNode_size_t_size_t_size_t(cv::SparseMat* instance, size_t hidx, size_t nidx, size_t previdx, ResultVoid* ocvrs_return) {
		try {
			instance->removeNode(hidx, nidx, previdx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_resizeHashTab_size_t(cv::SparseMat* instance, size_t newsize, ResultVoid* ocvrs_return) {
		try {
			instance->resizeHashTab(newsize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_SparseMat_propFlags_const(const cv::SparseMat* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_SparseMat_propFlags_const_int(cv::SparseMat* instance, const int val) {
			instance->flags = val;
	}
	
	cv::SparseMat::Hdr** cv_SparseMat_propHdr(cv::SparseMat* instance) {
			cv::SparseMat::Hdr* ret = instance->hdr;
			return new cv::SparseMat::Hdr*(ret);
	}
	
	void cv_SparseMat_propHdr_HdrX(cv::SparseMat* instance, cv::SparseMat::Hdr* const val) {
			instance->hdr = val;
	}
	
	void cv_SparseMat_delete(cv::SparseMat* instance) {
			delete instance;
	}
	
	void cv_SparseMat_Hdr_Hdr_int_const_intX_int(int _dims, const int* _sizes, int _type, Result<cv::SparseMat::Hdr*>* ocvrs_return) {
		try {
			cv::SparseMat::Hdr* ret = new cv::SparseMat::Hdr(_dims, _sizes, _type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMat_Hdr_clear(cv::SparseMat::Hdr* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_SparseMat_Hdr_propRefcount_const(const cv::SparseMat::Hdr* instance) {
			int ret = instance->refcount;
			return ret;
	}
	
	void cv_SparseMat_Hdr_propRefcount_const_int(cv::SparseMat::Hdr* instance, const int val) {
			instance->refcount = val;
	}
	
	int cv_SparseMat_Hdr_propDims_const(const cv::SparseMat::Hdr* instance) {
			int ret = instance->dims;
			return ret;
	}
	
	void cv_SparseMat_Hdr_propDims_const_int(cv::SparseMat::Hdr* instance, const int val) {
			instance->dims = val;
	}
	
	int cv_SparseMat_Hdr_propValueOffset_const(const cv::SparseMat::Hdr* instance) {
			int ret = instance->valueOffset;
			return ret;
	}
	
	void cv_SparseMat_Hdr_propValueOffset_const_int(cv::SparseMat::Hdr* instance, const int val) {
			instance->valueOffset = val;
	}
	
	size_t cv_SparseMat_Hdr_propNodeSize_const(const cv::SparseMat::Hdr* instance) {
			size_t ret = instance->nodeSize;
			return ret;
	}
	
	void cv_SparseMat_Hdr_propNodeSize_const_size_t(cv::SparseMat::Hdr* instance, const size_t val) {
			instance->nodeSize = val;
	}
	
	size_t cv_SparseMat_Hdr_propNodeCount_const(const cv::SparseMat::Hdr* instance) {
			size_t ret = instance->nodeCount;
			return ret;
	}
	
	void cv_SparseMat_Hdr_propNodeCount_const_size_t(cv::SparseMat::Hdr* instance, const size_t val) {
			instance->nodeCount = val;
	}
	
	size_t cv_SparseMat_Hdr_propFreeList_const(const cv::SparseMat::Hdr* instance) {
			size_t ret = instance->freeList;
			return ret;
	}
	
	void cv_SparseMat_Hdr_propFreeList_const_size_t(cv::SparseMat::Hdr* instance, const size_t val) {
			instance->freeList = val;
	}
	
	std::vector<unsigned char>* cv_SparseMat_Hdr_propPool_const(const cv::SparseMat::Hdr* instance) {
			std::vector<unsigned char> ret = instance->pool;
			return new std::vector<unsigned char>(ret);
	}
	
	void cv_SparseMat_Hdr_propPool_const_vectorLunsigned_charG(cv::SparseMat::Hdr* instance, const std::vector<unsigned char>* val) {
			instance->pool = *val;
	}
	
	std::vector<size_t>* cv_SparseMat_Hdr_propHashtab_const(const cv::SparseMat::Hdr* instance) {
			std::vector<size_t> ret = instance->hashtab;
			return new std::vector<size_t>(ret);
	}
	
	void cv_SparseMat_Hdr_propHashtab_const_vectorLsize_tG(cv::SparseMat::Hdr* instance, const std::vector<size_t>* val) {
			instance->hashtab = *val;
	}
	
	const int** cv_SparseMat_Hdr_propSize_const(const cv::SparseMat::Hdr* instance) {
			const int(*ret)[32] = &instance->size;
			return (const int**)ret;
	}
	
	int** cv_SparseMat_Hdr_propSize(cv::SparseMat::Hdr* instance) {
			int(*ret)[32] = &instance->size;
			return (int**)ret;
	}
	
	void cv_SparseMat_Hdr_delete(cv::SparseMat::Hdr* instance) {
			delete instance;
	}
	
	cv::SparseMat::Node* cv_SparseMat_Node_defaultNew_const() {
			cv::SparseMat::Node* ret = new cv::SparseMat::Node();
			return ret;
	}
	
	size_t cv_SparseMat_Node_propHashval_const(const cv::SparseMat::Node* instance) {
			size_t ret = instance->hashval;
			return ret;
	}
	
	void cv_SparseMat_Node_propHashval_const_size_t(cv::SparseMat::Node* instance, const size_t val) {
			instance->hashval = val;
	}
	
	size_t cv_SparseMat_Node_propNext_const(const cv::SparseMat::Node* instance) {
			size_t ret = instance->next;
			return ret;
	}
	
	void cv_SparseMat_Node_propNext_const_size_t(cv::SparseMat::Node* instance, const size_t val) {
			instance->next = val;
	}
	
	const int** cv_SparseMat_Node_propIdx_const(const cv::SparseMat::Node* instance) {
			const int(*ret)[32] = &instance->idx;
			return (const int**)ret;
	}
	
	int** cv_SparseMat_Node_propIdx(cv::SparseMat::Node* instance) {
			int(*ret)[32] = &instance->idx;
			return (int**)ret;
	}
	
	void cv_SparseMat_Node_delete(cv::SparseMat::Node* instance) {
			delete instance;
	}
	
	void cv_SparseMatConstIterator_SparseMatConstIterator(Result<cv::SparseMatConstIterator*>* ocvrs_return) {
		try {
			cv::SparseMatConstIterator* ret = new cv::SparseMatConstIterator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatConstIterator_SparseMatConstIterator_const_SparseMatX(const cv::SparseMat* _m, Result<cv::SparseMatConstIterator*>* ocvrs_return) {
		try {
			cv::SparseMatConstIterator* ret = new cv::SparseMatConstIterator(_m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatConstIterator_SparseMatConstIterator_const_SparseMatConstIteratorR(const cv::SparseMatConstIterator* it, Result<cv::SparseMatConstIterator*>* ocvrs_return) {
		try {
			cv::SparseMatConstIterator* ret = new cv::SparseMatConstIterator(*it);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatConstIterator_operatorST_const_SparseMatConstIteratorR(cv::SparseMatConstIterator* instance, const cv::SparseMatConstIterator* it, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*it);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatConstIterator_node_const(const cv::SparseMatConstIterator* instance, Result<const cv::SparseMat::Node**>* ocvrs_return) {
		try {
			const cv::SparseMat::Node* ret = instance->node();
			Ok(new const cv::SparseMat::Node*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatConstIterator_operatorAA(cv::SparseMatConstIterator* instance, Result<cv::SparseMatConstIterator*>* ocvrs_return) {
		try {
			cv::SparseMatConstIterator ret = instance->operator++();
			Ok(new cv::SparseMatConstIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatConstIterator_seekEnd(cv::SparseMatConstIterator* instance, ResultVoid* ocvrs_return) {
		try {
			instance->seekEnd();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	const cv::SparseMat** cv_SparseMatConstIterator_propM_const(const cv::SparseMatConstIterator* instance) {
			const cv::SparseMat* ret = instance->m;
			return new const cv::SparseMat*(ret);
	}
	
	size_t cv_SparseMatConstIterator_propHashidx_const(const cv::SparseMatConstIterator* instance) {
			size_t ret = instance->hashidx;
			return ret;
	}
	
	void cv_SparseMatConstIterator_propHashidx_const_size_t(cv::SparseMatConstIterator* instance, const size_t val) {
			instance->hashidx = val;
	}
	
	unsigned char* cv_SparseMatConstIterator_propPtr_const(const cv::SparseMatConstIterator* instance) {
			unsigned char* const ret = instance->ptr;
			return ret;
	}
	
	unsigned char* cv_SparseMatConstIterator_propPtr(cv::SparseMatConstIterator* instance) {
			unsigned char* ret = instance->ptr;
			return ret;
	}
	
	void cv_SparseMatConstIterator_propPtr_unsigned_charX(cv::SparseMatConstIterator* instance, unsigned char* const val) {
			instance->ptr = val;
	}
	
	void cv_SparseMatConstIterator_delete(cv::SparseMatConstIterator* instance) {
			delete instance;
	}
	
	void cv_SparseMatIterator_SparseMatIterator(Result<cv::SparseMatIterator*>* ocvrs_return) {
		try {
			cv::SparseMatIterator* ret = new cv::SparseMatIterator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatIterator_SparseMatIterator_SparseMatX(cv::SparseMat* _m, Result<cv::SparseMatIterator*>* ocvrs_return) {
		try {
			cv::SparseMatIterator* ret = new cv::SparseMatIterator(_m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatIterator_SparseMatIterator_const_SparseMatIteratorR(const cv::SparseMatIterator* it, Result<cv::SparseMatIterator*>* ocvrs_return) {
		try {
			cv::SparseMatIterator* ret = new cv::SparseMatIterator(*it);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatIterator_operatorST_const_SparseMatIteratorR(cv::SparseMatIterator* instance, const cv::SparseMatIterator* it, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*it);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatIterator_node_const(const cv::SparseMatIterator* instance, Result<cv::SparseMat::Node**>* ocvrs_return) {
		try {
			cv::SparseMat::Node* ret = instance->node();
			Ok(new cv::SparseMat::Node*(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_SparseMatIterator_operatorAA(cv::SparseMatIterator* instance, Result<cv::SparseMatIterator*>* ocvrs_return) {
		try {
			cv::SparseMatIterator ret = instance->operator++();
			Ok(new cv::SparseMatIterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::SparseMatConstIterator* cv_SparseMatIterator_to_SparseMatConstIterator(cv::SparseMatIterator* instance) {
			return dynamic_cast<cv::SparseMatConstIterator*>(instance);
	}
	
	void cv_SparseMatIterator_delete(cv::SparseMatIterator* instance) {
			delete instance;
	}
	
	void cv_TermCriteria_TermCriteria(Result<cv::TermCriteria>* ocvrs_return) {
		try {
			cv::TermCriteria ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TermCriteria_TermCriteria_int_int_double(int type, int maxCount, double epsilon, Result<cv::TermCriteria>* ocvrs_return) {
		try {
			cv::TermCriteria ret(type, maxCount, epsilon);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TermCriteria_isValid_const(const cv::TermCriteria* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isValid();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_TickMeter(Result<cv::TickMeter*>* ocvrs_return) {
		try {
			cv::TickMeter* ret = new cv::TickMeter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_start(cv::TickMeter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->start();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_stop(cv::TickMeter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->stop();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getTimeTicks_const(const cv::TickMeter* instance, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getTimeTicks();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getTimeMicro_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTimeMicro();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getTimeMilli_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTimeMilli();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getTimeSec_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTimeSec();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getLastTimeTicks_const(const cv::TickMeter* instance, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getLastTimeTicks();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getLastTimeMicro_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLastTimeMicro();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getLastTimeMilli_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLastTimeMilli();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getLastTimeSec_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLastTimeSec();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getCounter_const(const cv::TickMeter* instance, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->getCounter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getFPS_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getFPS();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getAvgTimeSec_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getAvgTimeSec();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_getAvgTimeMilli_const(const cv::TickMeter* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getAvgTimeMilli();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_reset(cv::TickMeter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_TickMeter_delete(cv::TickMeter* instance) {
			delete instance;
	}
	
	cv::UMat* cv_UMat_UMat_UMatUsageFlags(cv::UMatUsageFlags usageFlags) {
			cv::UMat* ret = new cv::UMat(usageFlags);
			return ret;
	}
	
	cv::UMat* cv_UMat_UMat() {
			cv::UMat* ret = new cv::UMat();
			return ret;
	}
	
	void cv_UMat_UMat_int_int_int_UMatUsageFlags(int rows, int cols, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(rows, cols, type, usageFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_int_int(int rows, int cols, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(rows, cols, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_Size_int_UMatUsageFlags(cv::Size* size, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*size, type, usageFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_Size_int(cv::Size* size, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*size, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_int_int_const_ScalarR_UMatUsageFlags(int rows, int cols, int type, const cv::Scalar* s, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(rows, cols, type, *s, usageFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_int_int_const_ScalarR(int rows, int cols, int type, const cv::Scalar* s, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(rows, cols, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_Size_int_const_ScalarR_UMatUsageFlags(cv::Size* size, int type, const cv::Scalar* s, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*size, type, *s, usageFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_Size_int_const_ScalarR(cv::Size* size, int type, const cv::Scalar* s, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*size, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_const_intX_int_UMatUsageFlags(int ndims, const int* sizes, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(ndims, sizes, type, usageFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_const_intX_int(int ndims, const int* sizes, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(ndims, sizes, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_const_intX_int_const_ScalarR_UMatUsageFlags(int ndims, const int* sizes, int type, const cv::Scalar* s, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(ndims, sizes, type, *s, usageFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_int_const_intX_int_const_ScalarR(int ndims, const int* sizes, int type, const cv::Scalar* s, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(ndims, sizes, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_const_UMatR(const cv::UMat* m, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_const_UMatR_const_RangeR_const_RangeR(const cv::UMat* m, const cv::Range* rowRange, const cv::Range* colRange, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat* ret = new const cv::UMat(*m, *rowRange, *colRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_UMatR_const_RangeR(cv::UMat* m, const cv::Range* rowRange, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*m, *rowRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_const_UMatR_const_RangeR(const cv::UMat* m, const cv::Range* rowRange, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat* ret = new const cv::UMat(*m, *rowRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_UMatR_const_RangeR_const_RangeR(cv::UMat* m, const cv::Range* rowRange, const cv::Range* colRange, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*m, *rowRange, *colRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_const_UMatR_const_RectR(const cv::UMat* m, const cv::Rect* roi, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat* ret = new const cv::UMat(*m, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_UMatR_const_RectR(cv::UMat* m, const cv::Rect* roi, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*m, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_const_UMatR_const_vectorLRangeGR(const cv::UMat* m, const std::vector<cv::Range>* ranges, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat* ret = new const cv::UMat(*m, *ranges);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_UMatR_const_vectorLRangeGR(cv::UMat* m, const std::vector<cv::Range>* ranges, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(*m, *ranges);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operatorST_const_UMatR(cv::UMat* instance, const cv::UMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_getMat_const_AccessFlag(const cv::UMat* instance, cv::AccessFlag flags, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMat(flags);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_row_const_int(const cv::UMat* instance, int y, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->row(y);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_row_int(cv::UMat* instance, int y, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->row(y);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_col_const_int(const cv::UMat* instance, int x, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->col(x);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_col_int(cv::UMat* instance, int x, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->col(x);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_rowRange_const_int_int(const cv::UMat* instance, int startrow, int endrow, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->rowRange(startrow, endrow);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_rowRange_int_int(cv::UMat* instance, int startrow, int endrow, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->rowRange(startrow, endrow);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_rowRange_const_const_RangeR(const cv::UMat* instance, const cv::Range* r, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->rowRange(*r);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_rowRange_const_RangeR(cv::UMat* instance, const cv::Range* r, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->rowRange(*r);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_colRange_const_int_int(const cv::UMat* instance, int startcol, int endcol, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->colRange(startcol, endcol);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_colRange_int_int(cv::UMat* instance, int startcol, int endcol, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->colRange(startcol, endcol);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_colRange_const_const_RangeR(const cv::UMat* instance, const cv::Range* r, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->colRange(*r);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_colRange_const_RangeR(cv::UMat* instance, const cv::Range* r, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->colRange(*r);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_diag_const_int(const cv::UMat* instance, int d, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->diag(d);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_diag(cv::UMat* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->diag();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_diag_const(const cv::UMat* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->diag();
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_diag_int(cv::UMat* instance, int d, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->diag(d);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_diag_const_UMatR_UMatUsageFlags(const cv::UMat* d, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::diag(*d, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_diag_const_UMatR(const cv::UMat* d, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::diag(*d);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_clone_const(const cv::UMat* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->clone();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_copyTo_const_const__OutputArrayR(const cv::UMat* instance, const cv::_OutputArray* m, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_copyTo_const_const__OutputArrayR_const__InputArrayR(const cv::UMat* instance, const cv::_OutputArray* m, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*m, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_convertTo_const_const__OutputArrayR_int_double_double(const cv::UMat* instance, const cv::_OutputArray* m, int rtype, double alpha, double beta, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype, alpha, beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_convertTo_const_const__OutputArrayR_int(const cv::UMat* instance, const cv::_OutputArray* m, int rtype, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*m, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_assignTo_const_UMatR_int(const cv::UMat* instance, cv::UMat* m, int type, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_assignTo_const_UMatR(const cv::UMat* instance, cv::UMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operatorST_const_ScalarR(cv::UMat* instance, const cv::Scalar* s, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*s);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_setTo_const__InputArrayR_const__InputArrayR(cv::UMat* instance, const cv::_InputArray* value, const cv::_InputArray* mask, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->setTo(*value, *mask);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_setTo_const__InputArrayR(cv::UMat* instance, const cv::_InputArray* value, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->setTo(*value);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_reshape_const_int_int(const cv::UMat* instance, int cn, int rows, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->reshape(cn, rows);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_reshape_int(cv::UMat* instance, int cn, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->reshape(cn);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_reshape_const_int(const cv::UMat* instance, int cn, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->reshape(cn);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_reshape_int_int(cv::UMat* instance, int cn, int rows, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->reshape(cn, rows);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_reshape_const_int_int_const_intX(const cv::UMat* instance, int cn, int newndims, const int* newsz, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->reshape(cn, newndims, newsz);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_reshape_int_int_const_intX(cv::UMat* instance, int cn, int newndims, const int* newsz, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->reshape(cn, newndims, newsz);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_t_const(const cv::UMat* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->t();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_inv_const_int(const cv::UMat* instance, int method, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->inv(method);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_inv_const(const cv::UMat* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->inv();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_mul_const_const__InputArrayR_double(const cv::UMat* instance, const cv::_InputArray* m, double scale, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->mul(*m, scale);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_mul_const_const__InputArrayR(const cv::UMat* instance, const cv::_InputArray* m, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->mul(*m);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_dot_const_const__InputArrayR(const cv::UMat* instance, const cv::_InputArray* m, Result<double>* ocvrs_return) {
		try {
			double ret = instance->dot(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_zeros_int_int_int_UMatUsageFlags(int rows, int cols, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::zeros(rows, cols, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_zeros_Size_int_UMatUsageFlags(cv::Size* size, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::zeros(*size, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_zeros_int_const_intX_int_UMatUsageFlags(int ndims, const int* sz, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::zeros(ndims, sz, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_zeros_int_int_int(int rows, int cols, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::zeros(rows, cols, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_zeros_Size_int(cv::Size* size, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::zeros(*size, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_zeros_int_const_intX_int(int ndims, const int* sz, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::zeros(ndims, sz, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ones_int_int_int_UMatUsageFlags(int rows, int cols, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::ones(rows, cols, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ones_Size_int_UMatUsageFlags(cv::Size* size, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::ones(*size, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ones_int_const_intX_int_UMatUsageFlags(int ndims, const int* sz, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::ones(ndims, sz, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ones_int_int_int(int rows, int cols, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::ones(rows, cols, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ones_Size_int(cv::Size* size, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::ones(*size, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ones_int_const_intX_int(int ndims, const int* sz, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::ones(ndims, sz, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_eye_int_int_int_UMatUsageFlags(int rows, int cols, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::eye(rows, cols, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_eye_Size_int_UMatUsageFlags(cv::Size* size, int type, cv::UMatUsageFlags usageFlags, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::eye(*size, type, usageFlags);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_eye_int_int_int(int rows, int cols, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::eye(rows, cols, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_eye_Size_int(cv::Size* size, int type, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = cv::UMat::eye(*size, type);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_int_int_int_UMatUsageFlags(cv::UMat* instance, int rows, int cols, int type, cv::UMatUsageFlags usageFlags, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type, usageFlags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_int_int_int(cv::UMat* instance, int rows, int cols, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_Size_int_UMatUsageFlags(cv::UMat* instance, cv::Size* size, int type, cv::UMatUsageFlags usageFlags, ResultVoid* ocvrs_return) {
		try {
			instance->create(*size, type, usageFlags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_Size_int(cv::UMat* instance, cv::Size* size, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*size, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_int_const_intX_int_UMatUsageFlags(cv::UMat* instance, int ndims, const int* sizes, int type, cv::UMatUsageFlags usageFlags, ResultVoid* ocvrs_return) {
		try {
			instance->create(ndims, sizes, type, usageFlags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_int_const_intX_int(cv::UMat* instance, int ndims, const int* sizes, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(ndims, sizes, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_const_vectorLintGR_int_UMatUsageFlags(cv::UMat* instance, const std::vector<int>* sizes, int type, cv::UMatUsageFlags usageFlags, ResultVoid* ocvrs_return) {
		try {
			instance->create(*sizes, type, usageFlags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_create_const_vectorLintGR_int(cv::UMat* instance, const std::vector<int>* sizes, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*sizes, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_addref(cv::UMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->addref();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_release(cv::UMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_deallocate(cv::UMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->deallocate();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_locateROI_const_SizeR_PointR(const cv::UMat* instance, cv::Size* wholeSize, cv::Point* ofs, ResultVoid* ocvrs_return) {
		try {
			instance->locateROI(*wholeSize, *ofs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_adjustROI_int_int_int_int(cv::UMat* instance, int dtop, int dbottom, int dleft, int dright, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->adjustROI(dtop, dbottom, dleft, dright);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operator___const_Range_Range(const cv::UMat* instance, cv::Range* rowRange, cv::Range* colRange, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->operator()(*rowRange, *colRange);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operator___Range_Range(cv::UMat* instance, cv::Range* rowRange, cv::Range* colRange, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->operator()(*rowRange, *colRange);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operator___const_const_RectR(const cv::UMat* instance, const cv::Rect* roi, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->operator()(*roi);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operator___const_RectR(cv::UMat* instance, const cv::Rect* roi, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->operator()(*roi);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operator___const_const_vectorLRangeGR(const cv::UMat* instance, const std::vector<cv::Range>* ranges, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->operator()(*ranges);
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operator___const_vectorLRangeGR(cv::UMat* instance, const std::vector<cv::Range>* ranges, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->operator()(*ranges);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	bool cv_UMat_isContinuous_const(const cv::UMat* instance) {
			bool ret = instance->isContinuous();
			return ret;
	}
	
	bool cv_UMat_isSubmatrix_const(const cv::UMat* instance) {
			bool ret = instance->isSubmatrix();
			return ret;
	}
	
	void cv_UMat_elemSize_const(const cv::UMat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	size_t cv_UMat_elemSize1_const(const cv::UMat* instance) {
			size_t ret = instance->elemSize1();
			return ret;
	}
	
	int cv_UMat_type_const(const cv::UMat* instance) {
			int ret = instance->type();
			return ret;
	}
	
	int cv_UMat_depth_const(const cv::UMat* instance) {
			int ret = instance->depth();
			return ret;
	}
	
	int cv_UMat_channels_const(const cv::UMat* instance) {
			int ret = instance->channels();
			return ret;
	}
	
	void cv_UMat_step1_const_int(const cv::UMat* instance, int i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step1(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_step1_const(const cv::UMat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	bool cv_UMat_empty_const(const cv::UMat* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_UMat_total_const(const cv::UMat* instance) {
			size_t ret = instance->total();
			return ret;
	}
	
	void cv_UMat_checkVector_const_int_int_bool(const cv::UMat* instance, int elemChannels, int depth, bool requireContinuous, Result<int>* ocvrs_return) {
		try {
			int ret = instance->checkVector(elemChannels, depth, requireContinuous);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_checkVector_const_int(const cv::UMat* instance, int elemChannels, Result<int>* ocvrs_return) {
		try {
			int ret = instance->checkVector(elemChannels);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_UMat_UMatRR(cv::UMat* m, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat* ret = new cv::UMat(std::move(*m));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_operatorST_UMatRR(cv::UMat* instance, cv::UMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(std::move(*m));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_handle_const_AccessFlag(const cv::UMat* instance, cv::AccessFlag accessFlags, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->handle(accessFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_ndoffset_const_size_tX(const cv::UMat* instance, size_t* ofs, ResultVoid* ocvrs_return) {
		try {
			instance->ndoffset(ofs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_updateContinuityFlag(cv::UMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->updateContinuityFlag();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMat_size_const(const cv::UMat* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_UMat_propFlags_const(const cv::UMat* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_UMat_propFlags_const_int(cv::UMat* instance, const int val) {
			instance->flags = val;
	}
	
	int cv_UMat_propDims_const(const cv::UMat* instance) {
			int ret = instance->dims;
			return ret;
	}
	
	void cv_UMat_propDims_const_int(cv::UMat* instance, const int val) {
			instance->dims = val;
	}
	
	int cv_UMat_propRows_const(const cv::UMat* instance) {
			int ret = instance->rows;
			return ret;
	}
	
	void cv_UMat_propRows_const_int(cv::UMat* instance, const int val) {
			instance->rows = val;
	}
	
	int cv_UMat_propCols_const(const cv::UMat* instance) {
			int ret = instance->cols;
			return ret;
	}
	
	void cv_UMat_propCols_const_int(cv::UMat* instance, const int val) {
			instance->cols = val;
	}
	
	void cv_UMat_propUsageFlags_const(const cv::UMat* instance, cv::UMatUsageFlags* ocvrs_return) {
			cv::UMatUsageFlags ret = instance->usageFlags;
			*ocvrs_return = ret;
	}
	
	void cv_UMat_propUsageFlags_const_UMatUsageFlags(cv::UMat* instance, const cv::UMatUsageFlags val) {
			instance->usageFlags = val;
	}
	
	cv::UMatData** cv_UMat_propU(cv::UMat* instance) {
			cv::UMatData* ret = instance->u;
			return new cv::UMatData*(ret);
	}
	
	void cv_UMat_propU_UMatDataX(cv::UMat* instance, cv::UMatData* const val) {
			instance->u = val;
	}
	
	size_t cv_UMat_propOffset_const(const cv::UMat* instance) {
			size_t ret = instance->offset;
			return ret;
	}
	
	void cv_UMat_propOffset_const_size_t(cv::UMat* instance, const size_t val) {
			instance->offset = val;
	}
	
	cv::MatSize* cv_UMat_propSize_const(const cv::UMat* instance) {
			cv::MatSize ret = instance->size;
			return new cv::MatSize(ret);
	}
	
	void cv_UMat_propSize_const_MatSize(cv::UMat* instance, const cv::MatSize* val) {
			instance->size = *val;
	}
	
	cv::MatStep* cv_UMat_propStep_const(const cv::UMat* instance) {
			cv::MatStep ret = instance->step;
			return new cv::MatStep(ret);
	}
	
	void cv_UMat_delete(cv::UMat* instance) {
			delete instance;
	}
	
	void cv_UMatData_lock(cv::UMatData* instance, ResultVoid* ocvrs_return) {
		try {
			instance->lock();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_unlock(cv::UMatData* instance, ResultVoid* ocvrs_return) {
		try {
			instance->unlock();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_hostCopyObsolete_const(const cv::UMatData* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->hostCopyObsolete();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_deviceCopyObsolete_const(const cv::UMatData* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->deviceCopyObsolete();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_deviceMemMapped_const(const cv::UMatData* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->deviceMemMapped();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_copyOnMap_const(const cv::UMatData* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->copyOnMap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_tempUMat_const(const cv::UMatData* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->tempUMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_tempCopiedUMat_const(const cv::UMatData* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->tempCopiedUMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_markHostCopyObsolete_bool(cv::UMatData* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->markHostCopyObsolete(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_markDeviceCopyObsolete_bool(cv::UMatData* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->markDeviceCopyObsolete(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_UMatData_markDeviceMemMapped_bool(cv::UMatData* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->markDeviceMemMapped(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_UMatData_propUrefcount_const(const cv::UMatData* instance) {
			int ret = instance->urefcount;
			return ret;
	}
	
	void cv_UMatData_propUrefcount_const_int(cv::UMatData* instance, const int val) {
			instance->urefcount = val;
	}
	
	int cv_UMatData_propRefcount_const(const cv::UMatData* instance) {
			int ret = instance->refcount;
			return ret;
	}
	
	void cv_UMatData_propRefcount_const_int(cv::UMatData* instance, const int val) {
			instance->refcount = val;
	}
	
	unsigned char* cv_UMatData_propData_const(const cv::UMatData* instance) {
			unsigned char* const ret = instance->data;
			return ret;
	}
	
	unsigned char* cv_UMatData_propData(cv::UMatData* instance) {
			unsigned char* ret = instance->data;
			return ret;
	}
	
	void cv_UMatData_propData_unsigned_charX(cv::UMatData* instance, unsigned char* const val) {
			instance->data = val;
	}
	
	unsigned char* cv_UMatData_propOrigdata_const(const cv::UMatData* instance) {
			unsigned char* const ret = instance->origdata;
			return ret;
	}
	
	unsigned char* cv_UMatData_propOrigdata(cv::UMatData* instance) {
			unsigned char* ret = instance->origdata;
			return ret;
	}
	
	void cv_UMatData_propOrigdata_unsigned_charX(cv::UMatData* instance, unsigned char* const val) {
			instance->origdata = val;
	}
	
	size_t cv_UMatData_propSize_const(const cv::UMatData* instance) {
			size_t ret = instance->size;
			return ret;
	}
	
	void cv_UMatData_propSize_const_size_t(cv::UMatData* instance, const size_t val) {
			instance->size = val;
	}
	
	void cv_UMatData_propFlags_const(const cv::UMatData* instance, cv::UMatData::MemoryFlag* ocvrs_return) {
			cv::UMatData::MemoryFlag ret = instance->flags;
			*ocvrs_return = ret;
	}
	
	void cv_UMatData_propFlags_const_MemoryFlag(cv::UMatData* instance, const cv::UMatData::MemoryFlag val) {
			instance->flags = val;
	}
	
	void* cv_UMatData_propHandle(cv::UMatData* instance) {
			void* ret = instance->handle;
			return ret;
	}
	
	void cv_UMatData_propHandle_voidX(cv::UMatData* instance, void* const val) {
			instance->handle = val;
	}
	
	void* cv_UMatData_propUserdata(cv::UMatData* instance) {
			void* ret = instance->userdata;
			return ret;
	}
	
	void cv_UMatData_propUserdata_voidX(cv::UMatData* instance, void* const val) {
			instance->userdata = val;
	}
	
	int cv_UMatData_propAllocatorFlags__const(const cv::UMatData* instance) {
			int ret = instance->allocatorFlags_;
			return ret;
	}
	
	void cv_UMatData_propAllocatorFlags__const_int(cv::UMatData* instance, const int val) {
			instance->allocatorFlags_ = val;
	}
	
	int cv_UMatData_propMapcount_const(const cv::UMatData* instance) {
			int ret = instance->mapcount;
			return ret;
	}
	
	void cv_UMatData_propMapcount_const_int(cv::UMatData* instance, const int val) {
			instance->mapcount = val;
	}
	
	cv::UMatData** cv_UMatData_propOriginalUMatData(cv::UMatData* instance) {
			cv::UMatData* ret = instance->originalUMatData;
			return new cv::UMatData*(ret);
	}
	
	void cv_UMatData_propOriginalUMatData_UMatDataX(cv::UMatData* instance, cv::UMatData* const val) {
			instance->originalUMatData = val;
	}
	
	void cv_UMatData_delete(cv::UMatData* instance) {
			delete instance;
	}
	
	void cv__InputArray__InputArray(Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray* ret = new cv::_InputArray();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_int_voidX(int _flags, void* _obj, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray* ret = new cv::_InputArray(_flags, _obj);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_MatR(const cv::Mat* m, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_MatExprR(const cv::MatExpr* expr, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*expr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_vectorLMatGR(const std::vector<cv::Mat>* vec, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_vectorLboolGR(const std::vector<bool>* vec, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_doubleR(const double* val, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*val);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_GpuMatR(const cv::cuda::GpuMat* d_mat, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_vectorLGpuMatGR(const std::vector<cv::cuda::GpuMat>* d_mat_array, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*d_mat_array);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_BufferR(const cv::ogl::Buffer* buf, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_HostMemR(const cv::cuda::HostMem* cuda_mem, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*cuda_mem);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_UMatR(const cv::UMat* um, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*um);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_vectorLUMatGR(const std::vector<cv::UMat>* umv, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(*umv);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getMat_const_int(const cv::_InputArray* instance, int idx, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMat(idx);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getMat_const(const cv::_InputArray* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMat();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getMat__const_int(const cv::_InputArray* instance, int idx, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMat_(idx);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getMat__const(const cv::_InputArray* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMat_();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getUMat_const_int(const cv::_InputArray* instance, int idx, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->getUMat(idx);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getUMat_const(const cv::_InputArray* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->getUMat();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getMatVector_const_vectorLMatGR(const cv::_InputArray* instance, std::vector<cv::Mat>* mv, ResultVoid* ocvrs_return) {
		try {
			instance->getMatVector(*mv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getUMatVector_const_vectorLUMatGR(const cv::_InputArray* instance, std::vector<cv::UMat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->getUMatVector(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getGpuMatVector_const_vectorLGpuMatGR(const cv::_InputArray* instance, std::vector<cv::cuda::GpuMat>* gpumv, ResultVoid* ocvrs_return) {
		try {
			instance->getGpuMatVector(*gpumv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getGpuMat_const(const cv::_InputArray* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->getGpuMat();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getOGlBuffer_const(const cv::_InputArray* instance, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer ret = instance->getOGlBuffer();
			Ok(new cv::ogl::Buffer(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getFlags_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFlags();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getObj_const(const cv::_InputArray* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->getObj();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_getSz_const(const cv::_InputArray* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getSz();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_kind_const(const cv::_InputArray* instance, Result<cv::_InputArray::KindFlag>* ocvrs_return) {
		try {
			cv::_InputArray::KindFlag ret = instance->kind();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_dims_const_int(const cv::_InputArray* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->dims(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_dims_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->dims();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_cols_const_int(const cv::_InputArray* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->cols(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_cols_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->cols();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_rows_const_int(const cv::_InputArray* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->rows(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_rows_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->rows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_size_const_int(const cv::_InputArray* instance, int i, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_size_const(const cv::_InputArray* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_sizend_const_intX_int(const cv::_InputArray* instance, int* sz, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->sizend(sz, i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_sizend_const_intX(const cv::_InputArray* instance, int* sz, Result<int>* ocvrs_return) {
		try {
			int ret = instance->sizend(sz);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_sameSize_const_const__InputArrayR(const cv::_InputArray* instance, const cv::_InputArray* arr, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->sameSize(*arr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_total_const_int(const cv::_InputArray* instance, int i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->total(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_total_const(const cv::_InputArray* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->total();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_type_const_int(const cv::_InputArray* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_type_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_depth_const_int(const cv::_InputArray* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->depth(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_depth_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->depth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_channels_const_int(const cv::_InputArray* instance, int i, Result<int>* ocvrs_return) {
		try {
			int ret = instance->channels(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_channels_const(const cv::_InputArray* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->channels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isContinuous_const_int(const cv::_InputArray* instance, int i, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isContinuous(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isContinuous_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isContinuous();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isSubmatrix_const_int(const cv::_InputArray* instance, int i, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isSubmatrix(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isSubmatrix_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isSubmatrix();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_empty_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_copyTo_const_const__OutputArrayR(const cv::_InputArray* instance, const cv::_OutputArray* arr, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_copyTo_const_const__OutputArrayR_const__InputArrayR(const cv::_InputArray* instance, const cv::_OutputArray* arr, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*arr, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_offset_const_int(const cv::_InputArray* instance, int i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->offset(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_offset_const(const cv::_InputArray* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->offset();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_step_const_int(const cv::_InputArray* instance, int i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_step_const(const cv::_InputArray* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isMat_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isUMat_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isUMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isMatVector_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isMatVector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isUMatVector_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isUMatVector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isMatx_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isMatx();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isVector_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isVector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isGpuMat_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isGpuMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_isGpuMatVector_const(const cv::_InputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isGpuMatVector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray__InputArray_const_unsigned_charX_int(const unsigned char* vec, int n, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			const cv::_InputArray* ret = new const cv::_InputArray(vec, n);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputArray_delete(cv::_InputArray* instance) {
			delete instance;
	}
	
	void cv__InputOutputArray__InputOutputArray(Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_int_voidX(int _flags, void* _obj, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(_flags, _obj);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_MatR(cv::Mat* m, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_vectorLMatGR(std::vector<cv::Mat>* vec, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_GpuMatR(cv::cuda::GpuMat* d_mat, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_BufferR(cv::ogl::Buffer* buf, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_HostMemR(cv::cuda::HostMem* cuda_mem, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*cuda_mem);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_UMatR(cv::UMat* m, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_vectorLUMatGR(std::vector<cv::UMat>* vec, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray* ret = new cv::_InputOutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_MatR(const cv::Mat* m, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_vectorLMatGR(const std::vector<cv::Mat>* vec, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_GpuMatR(const cv::cuda::GpuMat* d_mat, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_vectorLGpuMatGR(const std::vector<cv::cuda::GpuMat>* d_mat, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_BufferR(const cv::ogl::Buffer* buf, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_HostMemR(const cv::cuda::HostMem* cuda_mem, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*cuda_mem);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_UMatR(const cv::UMat* m, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__InputOutputArray__InputOutputArray_const_vectorLUMatGR(const std::vector<cv::UMat>* vec, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			const cv::_InputOutputArray* ret = new const cv::_InputOutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::_InputArray* cv__InputOutputArray_to__InputArray(cv::_InputOutputArray* instance) {
			return dynamic_cast<cv::_InputArray*>(instance);
	}
	
	cv::_OutputArray* cv__InputOutputArray_to__OutputArray(cv::_InputOutputArray* instance) {
			return dynamic_cast<cv::_OutputArray*>(instance);
	}
	
	void cv__InputOutputArray_delete(cv::_InputOutputArray* instance) {
			delete instance;
	}
	
	void cv__OutputArray__OutputArray(Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_int_voidX(int _flags, void* _obj, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(_flags, _obj);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_MatR(cv::Mat* m, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_vectorLMatGR(std::vector<cv::Mat>* vec, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_GpuMatR(cv::cuda::GpuMat* d_mat, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_vectorLGpuMatGR(std::vector<cv::cuda::GpuMat>* d_mat, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_BufferR(cv::ogl::Buffer* buf, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_HostMemR(cv::cuda::HostMem* cuda_mem, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*cuda_mem);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_UMatR(cv::UMat* m, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_vectorLUMatGR(std::vector<cv::UMat>* vec, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray* ret = new cv::_OutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_MatR(const cv::Mat* m, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_vectorLMatGR(const std::vector<cv::Mat>* vec, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_GpuMatR(const cv::cuda::GpuMat* d_mat, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*d_mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_BufferR(const cv::ogl::Buffer* buf, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_HostMemR(const cv::cuda::HostMem* cuda_mem, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*cuda_mem);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_UMatR(const cv::UMat* m, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray__OutputArray_const_vectorLUMatGR(const std::vector<cv::UMat>* vec, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			const cv::_OutputArray* ret = new const cv::_OutputArray(*vec);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_fixedSize_const(const cv::_OutputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->fixedSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_fixedType_const(const cv::_OutputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->fixedType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_needed_const(const cv::_OutputArray* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->needed();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getMatRef_const_int(const cv::_OutputArray* instance, int i, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMatRef(i);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getMatRef_const(const cv::_OutputArray* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMatRef();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getUMatRef_const_int(const cv::_OutputArray* instance, int i, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->getUMatRef(i);
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getUMatRef_const(const cv::_OutputArray* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->getUMatRef();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getGpuMatRef_const(const cv::_OutputArray* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->getGpuMatRef();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getGpuMatVecRef_const(const cv::_OutputArray* instance, Result<std::vector<cv::cuda::GpuMat>*>* ocvrs_return) {
		try {
			std::vector<cv::cuda::GpuMat> ret = instance->getGpuMatVecRef();
			Ok(new std::vector<cv::cuda::GpuMat>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getOGlBufferRef_const(const cv::_OutputArray* instance, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer ret = instance->getOGlBufferRef();
			Ok(new cv::ogl::Buffer(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_getHostMemRef_const(const cv::_OutputArray* instance, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem ret = instance->getHostMemRef();
			Ok(new cv::cuda::HostMem(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_create_const_Size_int_int_bool_DepthMask(const cv::_OutputArray* instance, cv::Size* sz, int type, int i, bool allowTransposed, cv::_OutputArray::DepthMask fixedDepthMask, ResultVoid* ocvrs_return) {
		try {
			instance->create(*sz, type, i, allowTransposed, fixedDepthMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_create_const_Size_int(const cv::_OutputArray* instance, cv::Size* sz, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*sz, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_create_const_int_int_int_int_bool_DepthMask(const cv::_OutputArray* instance, int rows, int cols, int type, int i, bool allowTransposed, cv::_OutputArray::DepthMask fixedDepthMask, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type, i, allowTransposed, fixedDepthMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_create_const_int_int_int(const cv::_OutputArray* instance, int rows, int cols, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_create_const_int_const_intX_int_int_bool_DepthMask(const cv::_OutputArray* instance, int dims, const int* size, int type, int i, bool allowTransposed, cv::_OutputArray::DepthMask fixedDepthMask, ResultVoid* ocvrs_return) {
		try {
			instance->create(dims, size, type, i, allowTransposed, fixedDepthMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_create_const_int_const_intX_int(const cv::_OutputArray* instance, int dims, const int* size, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(dims, size, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_createSameSize_const_const__InputArrayR_int(const cv::_OutputArray* instance, const cv::_InputArray* arr, int mtype, ResultVoid* ocvrs_return) {
		try {
			instance->createSameSize(*arr, mtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_release_const(const cv::_OutputArray* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_clear_const(const cv::_OutputArray* instance, ResultVoid* ocvrs_return) {
		try {
			instance->clear();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_setTo_const_const__InputArrayR_const__InputArrayR(const cv::_OutputArray* instance, const cv::_InputArray* value, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setTo(*value, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_setTo_const_const__InputArrayR(const cv::_OutputArray* instance, const cv::_InputArray* value, ResultVoid* ocvrs_return) {
		try {
			instance->setTo(*value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_reinterpret_const_int(const cv::_OutputArray* instance, int type, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->reinterpret(type);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_assign_const_const_UMatR(const cv::_OutputArray* instance, const cv::UMat* u, ResultVoid* ocvrs_return) {
		try {
			instance->assign(*u);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_assign_const_const_MatR(const cv::_OutputArray* instance, const cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->assign(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_assign_const_const_vectorLUMatGR(const cv::_OutputArray* instance, const std::vector<cv::UMat>* v, ResultVoid* ocvrs_return) {
		try {
			instance->assign(*v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_assign_const_const_vectorLMatGR(const cv::_OutputArray* instance, const std::vector<cv::Mat>* v, ResultVoid* ocvrs_return) {
		try {
			instance->assign(*v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_move_const_UMatR(const cv::_OutputArray* instance, cv::UMat* u, ResultVoid* ocvrs_return) {
		try {
			instance->move(*u);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv__OutputArray_move_const_MatR(const cv::_OutputArray* instance, cv::Mat* m, ResultVoid* ocvrs_return) {
		try {
			instance->move(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::_InputArray* cv__OutputArray_to__InputArray(cv::_OutputArray* instance) {
			return dynamic_cast<cv::_InputArray*>(instance);
	}
	
	void cv__OutputArray_delete(cv::_OutputArray* instance) {
			delete instance;
	}
	
	void cv_cuda_BufferPool_BufferPool_StreamR(cv::cuda::Stream* stream, Result<cv::cuda::BufferPool*>* ocvrs_return) {
		try {
			cv::cuda::BufferPool* ret = new cv::cuda::BufferPool(*stream);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_BufferPool_getBuffer_int_int_int(cv::cuda::BufferPool* instance, int rows, int cols, int type, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->getBuffer(rows, cols, type);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_BufferPool_getBuffer_Size_int(cv::cuda::BufferPool* instance, cv::Size* size, int type, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->getBuffer(*size, type);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_BufferPool_getAllocator_const(const cv::cuda::BufferPool* instance, Result<cv::Ptr<cv::cuda::GpuMat::Allocator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::cuda::GpuMat::Allocator> ret = instance->getAllocator();
			Ok(new cv::Ptr<cv::cuda::GpuMat::Allocator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_BufferPool_delete(cv::cuda::BufferPool* instance) {
			delete instance;
	}
	
	void cv_cuda_DeviceInfo_DeviceInfo(Result<cv::cuda::DeviceInfo*>* ocvrs_return) {
		try {
			cv::cuda::DeviceInfo* ret = new cv::cuda::DeviceInfo();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_DeviceInfo_int(int device_id, Result<cv::cuda::DeviceInfo*>* ocvrs_return) {
		try {
			cv::cuda::DeviceInfo* ret = new cv::cuda::DeviceInfo(device_id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_deviceID_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->deviceID();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_name_const(const cv::cuda::DeviceInfo* instance, Result<void*>* ocvrs_return) {
		try {
			const char* ret = instance->name();
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_totalGlobalMem_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->totalGlobalMem();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_sharedMemPerBlock_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->sharedMemPerBlock();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_regsPerBlock_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->regsPerBlock();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_warpSize_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->warpSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_memPitch_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->memPitch();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxThreadsPerBlock_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxThreadsPerBlock();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxThreadsDim_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxThreadsDim();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxGridSize_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxGridSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_clockRate_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->clockRate();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_totalConstMem_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->totalConstMem();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_majorVersion_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->majorVersion();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_minorVersion_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->minorVersion();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_textureAlignment_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->textureAlignment();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_texturePitchAlignment_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->texturePitchAlignment();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_multiProcessorCount_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->multiProcessorCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_kernelExecTimeoutEnabled_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->kernelExecTimeoutEnabled();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_integrated_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->integrated();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_canMapHostMemory_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->canMapHostMemory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_computeMode_const(const cv::cuda::DeviceInfo* instance, Result<cv::cuda::DeviceInfo::ComputeMode>* ocvrs_return) {
		try {
			cv::cuda::DeviceInfo::ComputeMode ret = instance->computeMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture1D_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxTexture1D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture1DMipmap_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxTexture1DMipmap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture1DLinear_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxTexture1DLinear();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture2D_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxTexture2D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture2DMipmap_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxTexture2DMipmap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture2DLinear_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxTexture2DLinear();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture2DGather_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxTexture2DGather();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture3D_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxTexture3D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTextureCubemap_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxTextureCubemap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture1DLayered_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxTexture1DLayered();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTexture2DLayered_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxTexture2DLayered();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxTextureCubemapLayered_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxTextureCubemapLayered();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurface1D_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxSurface1D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurface2D_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxSurface2D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurface3D_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxSurface3D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurface1DLayered_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxSurface1DLayered();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurface2DLayered_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec3i>* ocvrs_return) {
		try {
			cv::Vec3i ret = instance->maxSurface2DLayered();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurfaceCubemap_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxSurfaceCubemap();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxSurfaceCubemapLayered_const(const cv::cuda::DeviceInfo* instance, Result<cv::Vec2i>* ocvrs_return) {
		try {
			cv::Vec2i ret = instance->maxSurfaceCubemapLayered();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_surfaceAlignment_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->surfaceAlignment();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_concurrentKernels_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->concurrentKernels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_ECCEnabled_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->ECCEnabled();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_pciBusID_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->pciBusID();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_pciDeviceID_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->pciDeviceID();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_pciDomainID_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->pciDomainID();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_tccDriver_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->tccDriver();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_asyncEngineCount_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->asyncEngineCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_unifiedAddressing_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->unifiedAddressing();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_memoryClockRate_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->memoryClockRate();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_memoryBusWidth_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->memoryBusWidth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_l2CacheSize_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->l2CacheSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_maxThreadsPerMultiProcessor_const(const cv::cuda::DeviceInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxThreadsPerMultiProcessor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_queryMemory_const_size_tR_size_tR(const cv::cuda::DeviceInfo* instance, size_t* totalMemory, size_t* freeMemory, ResultVoid* ocvrs_return) {
		try {
			instance->queryMemory(*totalMemory, *freeMemory);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_freeMemory_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->freeMemory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_totalMemory_const(const cv::cuda::DeviceInfo* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->totalMemory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_supports_const_FeatureSet(const cv::cuda::DeviceInfo* instance, cv::cuda::FeatureSet feature_set, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->supports(feature_set);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_isCompatible_const(const cv::cuda::DeviceInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isCompatible();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_DeviceInfo_delete(cv::cuda::DeviceInfo* instance) {
			delete instance;
	}
	
	void cv_cuda_Event_Event_const_CreateFlags(const cv::cuda::Event::CreateFlags flags, Result<cv::cuda::Event*>* ocvrs_return) {
		try {
			cv::cuda::Event* ret = new cv::cuda::Event(flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_Event(Result<cv::cuda::Event*>* ocvrs_return) {
		try {
			cv::cuda::Event* ret = new cv::cuda::Event();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_record_StreamR(cv::cuda::Event* instance, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->record(*stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_record(cv::cuda::Event* instance, ResultVoid* ocvrs_return) {
		try {
			instance->record();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_queryIfComplete_const(const cv::cuda::Event* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->queryIfComplete();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_waitForCompletion(cv::cuda::Event* instance, ResultVoid* ocvrs_return) {
		try {
			instance->waitForCompletion();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_elapsedTime_const_EventR_const_EventR(const cv::cuda::Event* start, const cv::cuda::Event* end, Result<float>* ocvrs_return) {
		try {
			float ret = cv::cuda::Event::elapsedTime(*start, *end);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Event_delete(cv::cuda::Event* instance) {
			delete instance;
	}
	
	void cv_cuda_GpuData_GpuData_size_t(size_t _size, Result<cv::cuda::GpuData*>* ocvrs_return) {
		try {
			cv::cuda::GpuData* ret = new cv::cuda::GpuData(_size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	unsigned char* cv_cuda_GpuData_propData_const(const cv::cuda::GpuData* instance) {
			unsigned char* const ret = instance->data;
			return ret;
	}
	
	unsigned char* cv_cuda_GpuData_propData(cv::cuda::GpuData* instance) {
			unsigned char* ret = instance->data;
			return ret;
	}
	
	void cv_cuda_GpuData_propData_unsigned_charX(cv::cuda::GpuData* instance, unsigned char* const val) {
			instance->data = val;
	}
	
	size_t cv_cuda_GpuData_propSize_const(const cv::cuda::GpuData* instance) {
			size_t ret = instance->size;
			return ret;
	}
	
	void cv_cuda_GpuData_propSize_const_size_t(cv::cuda::GpuData* instance, const size_t val) {
			instance->size = val;
	}
	
	void cv_cuda_GpuData_delete(cv::cuda::GpuData* instance) {
			delete instance;
	}
	
	void cv_cuda_GpuMat_defaultAllocator(Result<cv::cuda::GpuMat::Allocator*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat::Allocator* ret = cv::cuda::GpuMat::defaultAllocator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_setDefaultAllocator_AllocatorX(cv::cuda::GpuMat::Allocator* allocator, ResultVoid* ocvrs_return) {
		try {
			cv::cuda::GpuMat::setDefaultAllocator(allocator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_getStdAllocator(Result<cv::cuda::GpuMat::Allocator*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat::Allocator* ret = cv::cuda::GpuMat::getStdAllocator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_AllocatorX(cv::cuda::GpuMat::Allocator* allocator, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat(Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_int_int_int_AllocatorX(int rows, int cols, int type, cv::cuda::GpuMat::Allocator* allocator, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(rows, cols, type, allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_int_int_int(int rows, int cols, int type, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(rows, cols, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_Size_int_AllocatorX(cv::Size* size, int type, cv::cuda::GpuMat::Allocator* allocator, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*size, type, allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_Size_int(cv::Size* size, int type, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*size, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_int_int_int_Scalar_AllocatorX(int rows, int cols, int type, cv::Scalar* s, cv::cuda::GpuMat::Allocator* allocator, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(rows, cols, type, *s, allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_int_int_int_Scalar(int rows, int cols, int type, cv::Scalar* s, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(rows, cols, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_Size_int_Scalar_AllocatorX(cv::Size* size, int type, cv::Scalar* s, cv::cuda::GpuMat::Allocator* allocator, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*size, type, *s, allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_Size_int_Scalar(cv::Size* size, int type, cv::Scalar* s, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*size, type, *s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_const_GpuMatR(const cv::cuda::GpuMat* m, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_int_int_int_voidX_size_t(int rows, int cols, int type, void* data, size_t step, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(rows, cols, type, data, step);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_int_int_int_voidX(int rows, int cols, int type, void* data, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(rows, cols, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_Size_int_voidX_size_t(cv::Size* size, int type, void* data, size_t step, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*size, type, data, step);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_Size_int_voidX(cv::Size* size, int type, void* data, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*size, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_const_GpuMatR_Range_Range(const cv::cuda::GpuMat* m, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat* ret = new const cv::cuda::GpuMat(*m, *rowRange, *colRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_GpuMatR_Range_Range(cv::cuda::GpuMat* m, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*m, *rowRange, *colRange);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_const_GpuMatR_Rect(const cv::cuda::GpuMat* m, cv::Rect* roi, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat* ret = new const cv::cuda::GpuMat(*m, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_GpuMatR_Rect(cv::cuda::GpuMat* m, cv::Rect* roi, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*m, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_const__InputArrayR_AllocatorX(const cv::_InputArray* arr, cv::cuda::GpuMat::Allocator* allocator, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*arr, allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_GpuMat_const__InputArrayR(const cv::_InputArray* arr, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat* ret = new cv::cuda::GpuMat(*arr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_operatorST_const_GpuMatR(cv::cuda::GpuMat* instance, const cv::cuda::GpuMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_create_int_int_int(cv::cuda::GpuMat* instance, int rows, int cols, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_create_Size_int(cv::cuda::GpuMat* instance, cv::Size* size, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*size, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_release(cv::cuda::GpuMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_swap_GpuMatR(cv::cuda::GpuMat* instance, cv::cuda::GpuMat* mat, ResultVoid* ocvrs_return) {
		try {
			instance->swap(*mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_upload_const__InputArrayR(cv::cuda::GpuMat* instance, const cv::_InputArray* arr, ResultVoid* ocvrs_return) {
		try {
			instance->upload(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_upload_const__InputArrayR_StreamR(cv::cuda::GpuMat* instance, const cv::_InputArray* arr, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->upload(*arr, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_download_const_const__OutputArrayR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->download(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_download_const_const__OutputArrayR_StreamR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->download(*dst, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_clone_const(const cv::cuda::GpuMat* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->clone();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_const__OutputArrayR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_GpuMatR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_const__OutputArrayR_StreamR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_GpuMatR_StreamR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_const__OutputArrayR_const__InputArrayR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_GpuMatR_GpuMatR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, cv::cuda::GpuMat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_const__OutputArrayR_const__InputArrayR_StreamR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, const cv::_InputArray* mask, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst, *mask, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_copyTo_const_GpuMatR_GpuMatR_StreamR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, cv::cuda::GpuMat* mask, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*dst, *mask, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_setTo_Scalar(cv::cuda::GpuMat* instance, cv::Scalar* s, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->setTo(*s);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_setTo_Scalar_StreamR(cv::cuda::GpuMat* instance, cv::Scalar* s, cv::cuda::Stream* stream, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->setTo(*s, *stream);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_setTo_Scalar_const__InputArrayR(cv::cuda::GpuMat* instance, cv::Scalar* s, const cv::_InputArray* mask, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->setTo(*s, *mask);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_setTo_Scalar_const__InputArrayR_StreamR(cv::cuda::GpuMat* instance, cv::Scalar* s, const cv::_InputArray* mask, cv::cuda::Stream* stream, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->setTo(*s, *mask, *stream);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_const__OutputArrayR_int(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, int rtype, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_const__OutputArrayR_int_StreamR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, int rtype, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_GpuMatR_int_StreamR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, int rtype, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_const__OutputArrayR_int_double_double(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, int rtype, double alpha, double beta, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, alpha, beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_const__OutputArrayR_int_double(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, int rtype, double alpha, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, alpha);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_GpuMatR_int_double_double(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, int rtype, double alpha, double beta, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, alpha, beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_GpuMatR_int(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, int rtype, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_const__OutputArrayR_int_double_StreamR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, int rtype, double alpha, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, alpha, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_const__OutputArrayR_int_double_double_StreamR(const cv::cuda::GpuMat* instance, const cv::_OutputArray* dst, int rtype, double alpha, double beta, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, alpha, beta, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_convertTo_const_GpuMatR_int_double_double_StreamR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* dst, int rtype, double alpha, double beta, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->convertTo(*dst, rtype, alpha, beta, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_assignTo_const_GpuMatR_int(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* m, int type, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_assignTo_const_GpuMatR(const cv::cuda::GpuMat* instance, cv::cuda::GpuMat* m, ResultVoid* ocvrs_return) {
		try {
			instance->assignTo(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_ptr_int(cv::cuda::GpuMat* instance, int y, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr(y);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_ptr(cv::cuda::GpuMat* instance, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_ptr_const_int(const cv::cuda::GpuMat* instance, int y, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr(y);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_ptr_const(const cv::cuda::GpuMat* instance, Result<const unsigned char*>* ocvrs_return) {
		try {
			const unsigned char* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_row_const_int(const cv::cuda::GpuMat* instance, int y, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->row(y);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_row_int(cv::cuda::GpuMat* instance, int y, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->row(y);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_col_const_int(const cv::cuda::GpuMat* instance, int x, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->col(x);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_col_int(cv::cuda::GpuMat* instance, int x, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->col(x);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_rowRange_const_int_int(const cv::cuda::GpuMat* instance, int startrow, int endrow, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->rowRange(startrow, endrow);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_rowRange_int_int(cv::cuda::GpuMat* instance, int startrow, int endrow, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->rowRange(startrow, endrow);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_rowRange_const_Range(const cv::cuda::GpuMat* instance, cv::Range* r, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->rowRange(*r);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_rowRange_Range(cv::cuda::GpuMat* instance, cv::Range* r, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->rowRange(*r);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_colRange_const_int_int(const cv::cuda::GpuMat* instance, int startcol, int endcol, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->colRange(startcol, endcol);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_colRange_int_int(cv::cuda::GpuMat* instance, int startcol, int endcol, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->colRange(startcol, endcol);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_colRange_const_Range(const cv::cuda::GpuMat* instance, cv::Range* r, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->colRange(*r);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_colRange_Range(cv::cuda::GpuMat* instance, cv::Range* r, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->colRange(*r);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_operator___const_Range_Range(const cv::cuda::GpuMat* instance, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->operator()(*rowRange, *colRange);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_operator___Range_Range(cv::cuda::GpuMat* instance, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->operator()(*rowRange, *colRange);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_operator___const_Rect(const cv::cuda::GpuMat* instance, cv::Rect* roi, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->operator()(*roi);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_operator___Rect(cv::cuda::GpuMat* instance, cv::Rect* roi, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->operator()(*roi);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_reshape_const_int_int(const cv::cuda::GpuMat* instance, int cn, int rows, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->reshape(cn, rows);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_reshape_int(cv::cuda::GpuMat* instance, int cn, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->reshape(cn);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_reshape_const_int(const cv::cuda::GpuMat* instance, int cn, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->reshape(cn);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_reshape_int_int(cv::cuda::GpuMat* instance, int cn, int rows, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->reshape(cn, rows);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_locateROI_const_SizeR_PointR(const cv::cuda::GpuMat* instance, cv::Size* wholeSize, cv::Point* ofs, ResultVoid* ocvrs_return) {
		try {
			instance->locateROI(*wholeSize, *ofs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_adjustROI_int_int_int_int(cv::cuda::GpuMat* instance, int dtop, int dbottom, int dleft, int dright, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->adjustROI(dtop, dbottom, dleft, dright);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_isContinuous_const(const cv::cuda::GpuMat* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isContinuous();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_elemSize_const(const cv::cuda::GpuMat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_elemSize1_const(const cv::cuda::GpuMat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_type_const(const cv::cuda::GpuMat* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_depth_const(const cv::cuda::GpuMat* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->depth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_channels_const(const cv::cuda::GpuMat* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->channels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_step1_const(const cv::cuda::GpuMat* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_size_const(const cv::cuda::GpuMat* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_empty_const(const cv::cuda::GpuMat* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_cudaPtr_const(const cv::cuda::GpuMat* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->cudaPtr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_updateContinuityFlag(cv::cuda::GpuMat* instance, ResultVoid* ocvrs_return) {
		try {
			instance->updateContinuityFlag();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_cuda_GpuMat_propFlags_const(const cv::cuda::GpuMat* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_cuda_GpuMat_propFlags_const_int(cv::cuda::GpuMat* instance, const int val) {
			instance->flags = val;
	}
	
	int cv_cuda_GpuMat_propRows_const(const cv::cuda::GpuMat* instance) {
			int ret = instance->rows;
			return ret;
	}
	
	void cv_cuda_GpuMat_propRows_const_int(cv::cuda::GpuMat* instance, const int val) {
			instance->rows = val;
	}
	
	int cv_cuda_GpuMat_propCols_const(const cv::cuda::GpuMat* instance) {
			int ret = instance->cols;
			return ret;
	}
	
	void cv_cuda_GpuMat_propCols_const_int(cv::cuda::GpuMat* instance, const int val) {
			instance->cols = val;
	}
	
	size_t cv_cuda_GpuMat_propStep_const(const cv::cuda::GpuMat* instance) {
			size_t ret = instance->step;
			return ret;
	}
	
	void cv_cuda_GpuMat_propStep_const_size_t(cv::cuda::GpuMat* instance, const size_t val) {
			instance->step = val;
	}
	
	unsigned char* cv_cuda_GpuMat_propData_const(const cv::cuda::GpuMat* instance) {
			unsigned char* const ret = instance->data;
			return ret;
	}
	
	unsigned char* cv_cuda_GpuMat_propData(cv::cuda::GpuMat* instance) {
			unsigned char* ret = instance->data;
			return ret;
	}
	
	void cv_cuda_GpuMat_propData_unsigned_charX(cv::cuda::GpuMat* instance, unsigned char* const val) {
			instance->data = val;
	}
	
	int* cv_cuda_GpuMat_propRefcount_const(const cv::cuda::GpuMat* instance) {
			int* const ret = instance->refcount;
			return ret;
	}
	
	int* cv_cuda_GpuMat_propRefcount(cv::cuda::GpuMat* instance) {
			int* ret = instance->refcount;
			return ret;
	}
	
	void cv_cuda_GpuMat_propRefcount_intX(cv::cuda::GpuMat* instance, int* const val) {
			instance->refcount = val;
	}
	
	unsigned char* cv_cuda_GpuMat_propDatastart_const(const cv::cuda::GpuMat* instance) {
			unsigned char* const ret = instance->datastart;
			return ret;
	}
	
	unsigned char* cv_cuda_GpuMat_propDatastart(cv::cuda::GpuMat* instance) {
			unsigned char* ret = instance->datastart;
			return ret;
	}
	
	void cv_cuda_GpuMat_propDatastart_unsigned_charX(cv::cuda::GpuMat* instance, unsigned char* const val) {
			instance->datastart = val;
	}
	
	const unsigned char* cv_cuda_GpuMat_propDataend_const(const cv::cuda::GpuMat* instance) {
			const unsigned char* ret = instance->dataend;
			return ret;
	}
	
	cv::cuda::GpuMat::Allocator* cv_cuda_GpuMat_propAllocator(cv::cuda::GpuMat* instance) {
			cv::cuda::GpuMat::Allocator* ret = instance->allocator;
			return ret;
	}
	
	void cv_cuda_GpuMat_propAllocator_AllocatorX(cv::cuda::GpuMat* instance, cv::cuda::GpuMat::Allocator* const val) {
			instance->allocator = val;
	}
	
	void cv_cuda_GpuMat_delete(cv::cuda::GpuMat* instance) {
			delete instance;
	}
	
	void cv_cuda_GpuMat_Allocator_allocate_GpuMatX_int_int_size_t(cv::cuda::GpuMat::Allocator* instance, cv::cuda::GpuMat* mat, int rows, int cols, size_t elemSize, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->allocate(mat, rows, cols, elemSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_Allocator_free_GpuMatX(cv::cuda::GpuMat::Allocator* instance, cv::cuda::GpuMat* mat, ResultVoid* ocvrs_return) {
		try {
			instance->free(mat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMat_Allocator_delete(cv::cuda::GpuMat::Allocator* instance) {
			delete instance;
	}
	
	void cv_cuda_GpuMatND_GpuMatND(Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND* ret = new cv::cuda::GpuMatND();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_GpuMatND_SizeArray_int(cv::cuda::GpuMatND::SizeArray* size, int type, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND* ret = new cv::cuda::GpuMatND(*size, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_GpuMatND_SizeArray_int_voidX_StepArray(cv::cuda::GpuMatND::SizeArray* size, int type, void* data, cv::cuda::GpuMatND::StepArray* step, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND* ret = new cv::cuda::GpuMatND(*size, type, data, *step);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_GpuMatND_SizeArray_int_voidX(cv::cuda::GpuMatND::SizeArray* size, int type, void* data, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND* ret = new cv::cuda::GpuMatND(*size, type, data);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_create_SizeArray_int(cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND::SizeArray* size, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*size, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_release(cv::cuda::GpuMatND* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_swap_GpuMatNDR(cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND* m) {
			instance->swap(*m);
	}
	
	void cv_cuda_GpuMatND_clone_const(const cv::cuda::GpuMatND* instance, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND ret = instance->clone();
			Ok(new cv::cuda::GpuMatND(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_clone_const_StreamR(const cv::cuda::GpuMatND* instance, cv::cuda::Stream* stream, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND ret = instance->clone(*stream);
			Ok(new cv::cuda::GpuMatND(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_operator___const_const_vectorLRangeGR(const cv::cuda::GpuMatND* instance, const std::vector<cv::Range>* ranges, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMatND ret = instance->operator()(*ranges);
			Ok(new const cv::cuda::GpuMatND(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_operator___const_vectorLRangeGR(cv::cuda::GpuMatND* instance, const std::vector<cv::Range>* ranges, Result<cv::cuda::GpuMatND*>* ocvrs_return) {
		try {
			cv::cuda::GpuMatND ret = instance->operator()(*ranges);
			Ok(new cv::cuda::GpuMatND(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_createGpuMatHeader_const_IndexArray_Range_Range(const cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND::IndexArray* idx, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->createGpuMatHeader(*idx, *rowRange, *colRange);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_createGpuMatHeader_IndexArray_Range_Range(cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND::IndexArray* idx, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->createGpuMatHeader(*idx, *rowRange, *colRange);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_createGpuMatHeader_const(const cv::cuda::GpuMatND* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->createGpuMatHeader();
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_createGpuMatHeader(cv::cuda::GpuMatND* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->createGpuMatHeader();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_operator___const_IndexArray_Range_Range(const cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND::IndexArray* idx, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			const cv::cuda::GpuMat ret = instance->operator()(*idx, *rowRange, *colRange);
			Ok(new const cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_operator___IndexArray_Range_Range(cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND::IndexArray* idx, cv::Range* rowRange, cv::Range* colRange, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->operator()(*idx, *rowRange, *colRange);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_operator_cv_cuda_GpuMat_const(const cv::cuda::GpuMatND* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->operator cv::cuda::GpuMat();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::cuda::GpuMatND* cv_cuda_GpuMatND_GpuMatND_const_GpuMatNDR(const cv::cuda::GpuMatND* unnamed) {
			cv::cuda::GpuMatND* ret = new cv::cuda::GpuMatND(*unnamed);
			return ret;
	}
	
	void cv_cuda_GpuMatND_operatorST_const_GpuMatNDR(cv::cuda::GpuMatND* instance, const cv::cuda::GpuMatND* unnamed) {
			instance->operator=(*unnamed);
	}
	
	cv::cuda::GpuMatND* cv_cuda_GpuMatND_GpuMatND_GpuMatNDRR(cv::cuda::GpuMatND* unnamed) {
			cv::cuda::GpuMatND* ret = new cv::cuda::GpuMatND(std::move(*unnamed));
			return ret;
	}
	
	void cv_cuda_GpuMatND_operatorST_GpuMatNDRR(cv::cuda::GpuMatND* instance, cv::cuda::GpuMatND* unnamed) {
			instance->operator=(std::move(*unnamed));
	}
	
	void cv_cuda_GpuMatND_upload_const__InputArrayR(cv::cuda::GpuMatND* instance, const cv::_InputArray* src, ResultVoid* ocvrs_return) {
		try {
			instance->upload(*src);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_upload_const__InputArrayR_StreamR(cv::cuda::GpuMatND* instance, const cv::_InputArray* src, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->upload(*src, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_download_const_const__OutputArrayR(const cv::cuda::GpuMatND* instance, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->download(*dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_download_const_const__OutputArrayR_StreamR(const cv::cuda::GpuMatND* instance, const cv::_OutputArray* dst, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->download(*dst, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_isContinuous_const(const cv::cuda::GpuMatND* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isContinuous();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_isSubmatrix_const(const cv::cuda::GpuMatND* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isSubmatrix();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_elemSize_const(const cv::cuda::GpuMatND* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_elemSize1_const(const cv::cuda::GpuMatND* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_empty_const(const cv::cuda::GpuMatND* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_external_const(const cv::cuda::GpuMatND* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->external();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_getDevicePtr_const(const cv::cuda::GpuMatND* instance, Result<unsigned char*>* ocvrs_return) {
		try {
			unsigned char* ret = instance->getDevicePtr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_total_const(const cv::cuda::GpuMatND* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->total();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_totalMemSize_const(const cv::cuda::GpuMatND* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->totalMemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_GpuMatND_type_const(const cv::cuda::GpuMatND* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_cuda_GpuMatND_propFlags_const(const cv::cuda::GpuMatND* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_cuda_GpuMatND_propFlags_const_int(cv::cuda::GpuMatND* instance, const int val) {
			instance->flags = val;
	}
	
	int cv_cuda_GpuMatND_propDims_const(const cv::cuda::GpuMatND* instance) {
			int ret = instance->dims;
			return ret;
	}
	
	void cv_cuda_GpuMatND_propDims_const_int(cv::cuda::GpuMatND* instance, const int val) {
			instance->dims = val;
	}
	
	cv::cuda::GpuMatND::SizeArray* cv_cuda_GpuMatND_propSize_const(const cv::cuda::GpuMatND* instance) {
			cv::cuda::GpuMatND::SizeArray ret = instance->size;
			return new cv::cuda::GpuMatND::SizeArray(ret);
	}
	
	void cv_cuda_GpuMatND_propSize_const_SizeArray(cv::cuda::GpuMatND* instance, const cv::cuda::GpuMatND::SizeArray* val) {
			instance->size = *val;
	}
	
	cv::cuda::GpuMatND::StepArray* cv_cuda_GpuMatND_propStep_const(const cv::cuda::GpuMatND* instance) {
			cv::cuda::GpuMatND::StepArray ret = instance->step;
			return new cv::cuda::GpuMatND::StepArray(ret);
	}
	
	void cv_cuda_GpuMatND_propStep_const_StepArray(cv::cuda::GpuMatND* instance, const cv::cuda::GpuMatND::StepArray* val) {
			instance->step = *val;
	}
	
	void cv_cuda_GpuMatND_delete(cv::cuda::GpuMatND* instance) {
			delete instance;
	}
	
	void cv_cuda_HostMem_HostMem_AllocType(cv::cuda::HostMem::AllocType alloc_type, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(alloc_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem(Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_const_HostMemR(const cv::cuda::HostMem* m, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(*m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_int_int_int_AllocType(int rows, int cols, int type, cv::cuda::HostMem::AllocType alloc_type, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(rows, cols, type, alloc_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_int_int_int(int rows, int cols, int type, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(rows, cols, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_Size_int_AllocType(cv::Size* size, int type, cv::cuda::HostMem::AllocType alloc_type, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(*size, type, alloc_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_Size_int(cv::Size* size, int type, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(*size, type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_const__InputArrayR_AllocType(const cv::_InputArray* arr, cv::cuda::HostMem::AllocType alloc_type, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(*arr, alloc_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_HostMem_const__InputArrayR(const cv::_InputArray* arr, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem* ret = new cv::cuda::HostMem(*arr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_operatorST_const_HostMemR(cv::cuda::HostMem* instance, const cv::cuda::HostMem* m, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*m);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_swap_HostMemR(cv::cuda::HostMem* instance, cv::cuda::HostMem* b, ResultVoid* ocvrs_return) {
		try {
			instance->swap(*b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_clone_const(const cv::cuda::HostMem* instance, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem ret = instance->clone();
			Ok(new cv::cuda::HostMem(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_create_int_int_int(cv::cuda::HostMem* instance, int rows, int cols, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(rows, cols, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_create_Size_int(cv::cuda::HostMem* instance, cv::Size* size, int type, ResultVoid* ocvrs_return) {
		try {
			instance->create(*size, type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_reshape_const_int_int(const cv::cuda::HostMem* instance, int cn, int rows, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem ret = instance->reshape(cn, rows);
			Ok(new cv::cuda::HostMem(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_reshape_const_int(const cv::cuda::HostMem* instance, int cn, Result<cv::cuda::HostMem*>* ocvrs_return) {
		try {
			cv::cuda::HostMem ret = instance->reshape(cn);
			Ok(new cv::cuda::HostMem(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_release(cv::cuda::HostMem* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_createMatHeader_const(const cv::cuda::HostMem* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->createMatHeader();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_createGpuMatHeader_const(const cv::cuda::HostMem* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->createGpuMatHeader();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_isContinuous_const(const cv::cuda::HostMem* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isContinuous();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_elemSize_const(const cv::cuda::HostMem* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_elemSize1_const(const cv::cuda::HostMem* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_type_const(const cv::cuda::HostMem* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_depth_const(const cv::cuda::HostMem* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->depth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_channels_const(const cv::cuda::HostMem* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->channels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_step1_const(const cv::cuda::HostMem* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_size_const(const cv::cuda::HostMem* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_HostMem_empty_const(const cv::cuda::HostMem* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_cuda_HostMem_propFlags_const(const cv::cuda::HostMem* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_cuda_HostMem_propFlags_const_int(cv::cuda::HostMem* instance, const int val) {
			instance->flags = val;
	}
	
	int cv_cuda_HostMem_propRows_const(const cv::cuda::HostMem* instance) {
			int ret = instance->rows;
			return ret;
	}
	
	void cv_cuda_HostMem_propRows_const_int(cv::cuda::HostMem* instance, const int val) {
			instance->rows = val;
	}
	
	int cv_cuda_HostMem_propCols_const(const cv::cuda::HostMem* instance) {
			int ret = instance->cols;
			return ret;
	}
	
	void cv_cuda_HostMem_propCols_const_int(cv::cuda::HostMem* instance, const int val) {
			instance->cols = val;
	}
	
	size_t cv_cuda_HostMem_propStep_const(const cv::cuda::HostMem* instance) {
			size_t ret = instance->step;
			return ret;
	}
	
	void cv_cuda_HostMem_propStep_const_size_t(cv::cuda::HostMem* instance, const size_t val) {
			instance->step = val;
	}
	
	unsigned char* cv_cuda_HostMem_propData_const(const cv::cuda::HostMem* instance) {
			unsigned char* const ret = instance->data;
			return ret;
	}
	
	unsigned char* cv_cuda_HostMem_propData(cv::cuda::HostMem* instance) {
			unsigned char* ret = instance->data;
			return ret;
	}
	
	void cv_cuda_HostMem_propData_unsigned_charX(cv::cuda::HostMem* instance, unsigned char* const val) {
			instance->data = val;
	}
	
	int* cv_cuda_HostMem_propRefcount_const(const cv::cuda::HostMem* instance) {
			int* const ret = instance->refcount;
			return ret;
	}
	
	int* cv_cuda_HostMem_propRefcount(cv::cuda::HostMem* instance) {
			int* ret = instance->refcount;
			return ret;
	}
	
	void cv_cuda_HostMem_propRefcount_intX(cv::cuda::HostMem* instance, int* const val) {
			instance->refcount = val;
	}
	
	unsigned char* cv_cuda_HostMem_propDatastart_const(const cv::cuda::HostMem* instance) {
			unsigned char* const ret = instance->datastart;
			return ret;
	}
	
	unsigned char* cv_cuda_HostMem_propDatastart(cv::cuda::HostMem* instance) {
			unsigned char* ret = instance->datastart;
			return ret;
	}
	
	void cv_cuda_HostMem_propDatastart_unsigned_charX(cv::cuda::HostMem* instance, unsigned char* const val) {
			instance->datastart = val;
	}
	
	const unsigned char* cv_cuda_HostMem_propDataend_const(const cv::cuda::HostMem* instance) {
			const unsigned char* ret = instance->dataend;
			return ret;
	}
	
	void cv_cuda_HostMem_propAlloc_type_const(const cv::cuda::HostMem* instance, cv::cuda::HostMem::AllocType* ocvrs_return) {
			cv::cuda::HostMem::AllocType ret = instance->alloc_type;
			*ocvrs_return = ret;
	}
	
	void cv_cuda_HostMem_propAlloc_type_const_AllocType(cv::cuda::HostMem* instance, const cv::cuda::HostMem::AllocType val) {
			instance->alloc_type = val;
	}
	
	void cv_cuda_HostMem_delete(cv::cuda::HostMem* instance) {
			delete instance;
	}
	
	void cv_cuda_Stream_Stream(Result<cv::cuda::Stream*>* ocvrs_return) {
		try {
			cv::cuda::Stream* ret = new cv::cuda::Stream();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_Stream_const_PtrLAllocatorGR(const cv::Ptr<cv::cuda::GpuMat::Allocator>* allocator, Result<cv::cuda::Stream*>* ocvrs_return) {
		try {
			cv::cuda::Stream* ret = new cv::cuda::Stream(*allocator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_Stream_const_size_t(const size_t cudaFlags, Result<cv::cuda::Stream*>* ocvrs_return) {
		try {
			cv::cuda::Stream* ret = new cv::cuda::Stream(cudaFlags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_queryIfComplete_const(const cv::cuda::Stream* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->queryIfComplete();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_waitForCompletion(cv::cuda::Stream* instance, ResultVoid* ocvrs_return) {
		try {
			instance->waitForCompletion();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_waitEvent_const_EventR(cv::cuda::Stream* instance, const cv::cuda::Event* event, ResultVoid* ocvrs_return) {
		try {
			instance->waitEvent(*event);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_enqueueHostCallback_StreamCallback_voidX(cv::cuda::Stream* instance, cv::cuda::Stream::StreamCallback callback, void* userData, ResultVoid* ocvrs_return) {
		try {
			instance->enqueueHostCallback(callback, userData);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_Null(Result<cv::cuda::Stream*>* ocvrs_return) {
		try {
			cv::cuda::Stream ret = cv::cuda::Stream::Null();
			Ok(new cv::cuda::Stream(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_cudaPtr_const(const cv::cuda::Stream* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->cudaPtr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_Stream_delete(cv::cuda::Stream* instance) {
			delete instance;
	}
	
	void cv_cuda_TargetArchs_builtWith_FeatureSet(cv::cuda::FeatureSet feature_set, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::builtWith(feature_set);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_has_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::has(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_hasPtx_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::hasPtx(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_hasBin_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::hasBin(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_hasEqualOrLessPtx_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::hasEqualOrLessPtx(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_hasEqualOrGreater_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::hasEqualOrGreater(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_hasEqualOrGreaterPtx_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::hasEqualOrGreaterPtx(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_cuda_TargetArchs_hasEqualOrGreaterBin_int_int(int major, int minor, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::cuda::TargetArchs::hasEqualOrGreaterBin(major, minor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::cuda::TargetArchs* cv_cuda_TargetArchs_defaultNew_const() {
			cv::cuda::TargetArchs* ret = new cv::cuda::TargetArchs();
			return ret;
	}
	
	void cv_cuda_TargetArchs_delete(cv::cuda::TargetArchs* instance) {
			delete instance;
	}
	
	cv::detail::CheckContext* cv_detail_CheckContext_implicitClone_const(const cv::detail::CheckContext* instance) {
			return new cv::detail::CheckContext(*instance);
	}
	
	cv::detail::CheckContext* cv_detail_CheckContext_defaultNew_const() {
			cv::detail::CheckContext* ret = new cv::detail::CheckContext();
			return ret;
	}
	
	void* cv_detail_CheckContext_propFunc_const(const cv::detail::CheckContext* instance) {
			const char* ret = instance->func;
			return ocvrs_create_string(ret);
	}
	
	void* cv_detail_CheckContext_propFile_const(const cv::detail::CheckContext* instance) {
			const char* ret = instance->file;
			return ocvrs_create_string(ret);
	}
	
	int cv_detail_CheckContext_propLine_const(const cv::detail::CheckContext* instance) {
			int ret = instance->line;
			return ret;
	}
	
	void cv_detail_CheckContext_propLine_const_int(cv::detail::CheckContext* instance, const int val) {
			instance->line = val;
	}
	
	void cv_detail_CheckContext_propTestOp_const(const cv::detail::CheckContext* instance, cv::detail::TestOp* ocvrs_return) {
			cv::detail::TestOp ret = instance->testOp;
			*ocvrs_return = ret;
	}
	
	void cv_detail_CheckContext_propTestOp_const_TestOp(cv::detail::CheckContext* instance, const cv::detail::TestOp val) {
			instance->testOp = val;
	}
	
	void* cv_detail_CheckContext_propMessage_const(const cv::detail::CheckContext* instance) {
			const char* ret = instance->message;
			return ocvrs_create_string(ret);
	}
	
	void* cv_detail_CheckContext_propP1_str_const(const cv::detail::CheckContext* instance) {
			const char* ret = instance->p1_str;
			return ocvrs_create_string(ret);
	}
	
	void* cv_detail_CheckContext_propP2_str_const(const cv::detail::CheckContext* instance) {
			const char* ret = instance->p2_str;
			return ocvrs_create_string(ret);
	}
	
	void cv_detail_CheckContext_delete(cv::detail::CheckContext* instance) {
			delete instance;
	}
	
	void cv_hfloat_hfloat(Result<cv::hfloat*>* ocvrs_return) {
		try {
			cv::hfloat* ret = new cv::hfloat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfloat_hfloat_float(float x, Result<cv::hfloat*>* ocvrs_return) {
		try {
			cv::hfloat* ret = new cv::hfloat(x);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_hfloat_operator_float_const(const cv::hfloat* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->operator float();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::hfloat* cv_hfloat_implicitClone_const(const cv::hfloat* instance) {
			return new cv::hfloat(*instance);
	}
	
	void cv_hfloat_delete(cv::hfloat* instance) {
			delete instance;
	}
	
	void cv_instr_NodeData_NodeData_const_charX_const_charX_int_voidX_bool_TYPE_IMPL(const char* funName, const char* fileName, int lineNum, void* retAddress, bool alwaysExpand, cv::instr::TYPE instrType, cv::instr::IMPL implType, Result<cv::instr::NodeData*>* ocvrs_return) {
		try {
			cv::instr::NodeData* ret = new cv::instr::NodeData(funName, fileName, lineNum, retAddress, alwaysExpand, instrType, implType);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_NodeData_NodeData(Result<cv::instr::NodeData*>* ocvrs_return) {
		try {
			cv::instr::NodeData* ret = new cv::instr::NodeData();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_NodeData_NodeData_NodeDataR(cv::instr::NodeData* ref, Result<cv::instr::NodeData*>* ocvrs_return) {
		try {
			cv::instr::NodeData* ret = new cv::instr::NodeData(*ref);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_NodeData_operatorST_const_NodeDataR(cv::instr::NodeData* instance, const cv::instr::NodeData* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_NodeData_getTotalMs_const(const cv::instr::NodeData* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getTotalMs();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_instr_NodeData_getMeanMs_const(const cv::instr::NodeData* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getMeanMs();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void* cv_instr_NodeData_propM_funName_const(const cv::instr::NodeData* instance) {
			cv::String ret = instance->m_funName;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_instr_NodeData_propM_funName_const_String(cv::instr::NodeData* instance, const char* val) {
			instance->m_funName = std::string(val);
	}
	
	void cv_instr_NodeData_propM_instrType_const(const cv::instr::NodeData* instance, cv::instr::TYPE* ocvrs_return) {
			cv::instr::TYPE ret = instance->m_instrType;
			*ocvrs_return = ret;
	}
	
	void cv_instr_NodeData_propM_instrType_const_TYPE(cv::instr::NodeData* instance, const cv::instr::TYPE val) {
			instance->m_instrType = val;
	}
	
	void cv_instr_NodeData_propM_implType_const(const cv::instr::NodeData* instance, cv::instr::IMPL* ocvrs_return) {
			cv::instr::IMPL ret = instance->m_implType;
			*ocvrs_return = ret;
	}
	
	void cv_instr_NodeData_propM_implType_const_IMPL(cv::instr::NodeData* instance, const cv::instr::IMPL val) {
			instance->m_implType = val;
	}
	
	void* cv_instr_NodeData_propM_fileName_const(const cv::instr::NodeData* instance) {
			const char* ret = instance->m_fileName;
			return ocvrs_create_string(ret);
	}
	
	int cv_instr_NodeData_propM_lineNum_const(const cv::instr::NodeData* instance) {
			int ret = instance->m_lineNum;
			return ret;
	}
	
	void cv_instr_NodeData_propM_lineNum_const_int(cv::instr::NodeData* instance, const int val) {
			instance->m_lineNum = val;
	}
	
	void* cv_instr_NodeData_propM_retAddress(cv::instr::NodeData* instance) {
			void* ret = instance->m_retAddress;
			return ret;
	}
	
	void cv_instr_NodeData_propM_retAddress_voidX(cv::instr::NodeData* instance, void* const val) {
			instance->m_retAddress = val;
	}
	
	bool cv_instr_NodeData_propM_alwaysExpand_const(const cv::instr::NodeData* instance) {
			bool ret = instance->m_alwaysExpand;
			return ret;
	}
	
	void cv_instr_NodeData_propM_alwaysExpand_const_bool(cv::instr::NodeData* instance, const bool val) {
			instance->m_alwaysExpand = val;
	}
	
	bool cv_instr_NodeData_propM_funError_const(const cv::instr::NodeData* instance) {
			bool ret = instance->m_funError;
			return ret;
	}
	
	void cv_instr_NodeData_propM_funError_const_bool(cv::instr::NodeData* instance, const bool val) {
			instance->m_funError = val;
	}
	
	int cv_instr_NodeData_propM_counter_const(const cv::instr::NodeData* instance) {
			int ret = instance->m_counter;
			return ret;
	}
	
	void cv_instr_NodeData_propM_counter_const_int(cv::instr::NodeData* instance, const int val) {
			instance->m_counter = val;
	}
	
	uint64_t cv_instr_NodeData_propM_ticksTotal_const(const cv::instr::NodeData* instance) {
			uint64_t ret = instance->m_ticksTotal;
			return ret;
	}
	
	void cv_instr_NodeData_propM_ticksTotal_const_uint64_t(cv::instr::NodeData* instance, const uint64_t val) {
			instance->m_ticksTotal = val;
	}
	
	int cv_instr_NodeData_propM_threads_const(const cv::instr::NodeData* instance) {
			int ret = instance->m_threads;
			return ret;
	}
	
	void cv_instr_NodeData_propM_threads_const_int(cv::instr::NodeData* instance, const int val) {
			instance->m_threads = val;
	}
	
	void cv_instr_NodeData_delete(cv::instr::NodeData* instance) {
			delete instance;
	}
	
	void cv_internal_WriteStructContext_WriteStructContext_FileStorageR_const_StringR_int_const_StringR(cv::FileStorage* _fs, const char* name, int flags, const char* typeName, Result<cv::internal::WriteStructContext*>* ocvrs_return) {
		try {
			cv::internal::WriteStructContext* ret = new cv::internal::WriteStructContext(*_fs, std::string(name), flags, std::string(typeName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_internal_WriteStructContext_WriteStructContext_FileStorageR_const_StringR_int(cv::FileStorage* _fs, const char* name, int flags, Result<cv::internal::WriteStructContext*>* ocvrs_return) {
		try {
			cv::internal::WriteStructContext* ret = new cv::internal::WriteStructContext(*_fs, std::string(name), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_internal_WriteStructContext_delete(cv::internal::WriteStructContext* instance) {
			delete instance;
	}
	
	cv::ocl::Context* cv_ocl_Context_Context() {
			cv::ocl::Context* ret = new cv::ocl::Context();
			return ret;
	}
	
	void cv_ocl_Context_Context_int(int dtype, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context* ret = new cv::ocl::Context(dtype);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_Context_const_ContextR(const cv::ocl::Context* c, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context* ret = new cv::ocl::Context(*c);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_operatorST_const_ContextR(cv::ocl::Context* instance, const cv::ocl::Context* c, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*c);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Context* cv_ocl_Context_Context_ContextRR(cv::ocl::Context* c) {
			cv::ocl::Context* ret = new cv::ocl::Context(std::move(*c));
			return ret;
	}
	
	void cv_ocl_Context_operatorST_ContextRR(cv::ocl::Context* instance, cv::ocl::Context* c) {
			instance->operator=(std::move(*c));
	}
	
	void cv_ocl_Context_create(cv::ocl::Context* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_create_int(cv::ocl::Context* instance, int dtype, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create(dtype);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_ndevices_const(const cv::ocl::Context* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->ndevices();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_device_const_size_t(const cv::ocl::Context* instance, size_t idx, Result<cv::ocl::Device*>* ocvrs_return) {
		try {
			cv::ocl::Device ret = instance->device(idx);
			Ok(new cv::ocl::Device(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_getProg_const_ProgramSourceR_const_StringR_StringR(cv::ocl::Context* instance, const cv::ocl::ProgramSource* prog, const char* buildopt, void** errmsg, Result<cv::ocl::Program*>* ocvrs_return) {
		try {
			std::string errmsg_out;
			cv::ocl::Program ret = instance->getProg(*prog, std::string(buildopt), errmsg_out);
			*errmsg = ocvrs_create_string(errmsg_out.c_str());
			Ok(new cv::ocl::Program(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_unloadProg_ProgramR(cv::ocl::Context* instance, cv::ocl::Program* prog, ResultVoid* ocvrs_return) {
		try {
			instance->unloadProg(*prog);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_getDefault_bool(bool initialize, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::ocl::Context::getDefault(initialize);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_getDefault(Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::ocl::Context::getDefault();
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_ptr_const(const cv::ocl::Context* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_getOpenCLContextProperty_const_int(const cv::ocl::Context* instance, int propertyId, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->getOpenCLContextProperty(propertyId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_useSVM_const(const cv::ocl::Context* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->useSVM();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_setUseSVM_bool(cv::ocl::Context* instance, bool enabled, ResultVoid* ocvrs_return) {
		try {
			instance->setUseSVM(enabled);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_fromHandle_voidX(void* context, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::ocl::Context::fromHandle(context);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_fromDevice_const_DeviceR(const cv::ocl::Device* device, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::ocl::Context::fromDevice(*device);
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_create_const_stringR(const char* configuration, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = cv::ocl::Context::create(std::string(configuration));
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_release(cv::ocl::Context* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_empty_const(const cv::ocl::Context* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Context_delete(cv::ocl::Context* instance) {
			delete instance;
	}
	
	cv::ocl::Context::UserContext* cv_ocl_Context_UserContext_defaultNew_const() {
			cv::ocl::Context::UserContext* ret = new cv::ocl::Context::UserContext();
			return ret;
	}
	
	void cv_ocl_Context_UserContext_delete(cv::ocl::Context::UserContext* instance) {
			delete instance;
	}
	
	cv::ocl::Device* cv_ocl_Device_Device() {
			cv::ocl::Device* ret = new cv::ocl::Device();
			return ret;
	}
	
	void cv_ocl_Device_Device_voidX(void* d, Result<cv::ocl::Device*>* ocvrs_return) {
		try {
			cv::ocl::Device* ret = new cv::ocl::Device(d);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_Device_const_DeviceR(const cv::ocl::Device* d, Result<cv::ocl::Device*>* ocvrs_return) {
		try {
			cv::ocl::Device* ret = new cv::ocl::Device(*d);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_operatorST_const_DeviceR(cv::ocl::Device* instance, const cv::ocl::Device* d, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Device* cv_ocl_Device_Device_DeviceRR(cv::ocl::Device* d) {
			cv::ocl::Device* ret = new cv::ocl::Device(std::move(*d));
			return ret;
	}
	
	void cv_ocl_Device_operatorST_DeviceRR(cv::ocl::Device* instance, cv::ocl::Device* d) {
			instance->operator=(std::move(*d));
	}
	
	void cv_ocl_Device_set_voidX(cv::ocl::Device* instance, void* d, ResultVoid* ocvrs_return) {
		try {
			instance->set(d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_name_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->name();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_extensions_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->extensions();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_isExtensionSupported_const_const_StringR(const cv::ocl::Device* instance, const char* extensionName, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isExtensionSupported(std::string(extensionName));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_version_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->version();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_vendorName_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->vendorName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_OpenCL_C_Version_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->OpenCL_C_Version();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_OpenCLVersion_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->OpenCLVersion();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_driverVersion_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->driverVersion();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_ptr_const(const cv::ocl::Device* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_type_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_addressBits_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addressBits();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_available_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->available();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_compilerAvailable_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compilerAvailable();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_linkerAvailable_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->linkerAvailable();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_doubleFPConfig_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->doubleFPConfig();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_singleFPConfig_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->singleFPConfig();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_halfFPConfig_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->halfFPConfig();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_endianLittle_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->endianLittle();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_errorCorrectionSupport_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->errorCorrectionSupport();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_executionCapabilities_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->executionCapabilities();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_globalMemCacheSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->globalMemCacheSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_globalMemCacheType_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->globalMemCacheType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_globalMemCacheLineSize_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->globalMemCacheLineSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_globalMemSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->globalMemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_localMemSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->localMemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_localMemType_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->localMemType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_hostUnifiedMemory_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->hostUnifiedMemory();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_imageSupport_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->imageSupport();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_imageFromBufferSupport_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->imageFromBufferSupport();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_imagePitchAlignment_const(const cv::ocl::Device* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->imagePitchAlignment();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_imageBaseAddressAlignment_const(const cv::ocl::Device* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->imageBaseAddressAlignment();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_intelSubgroupsSupport_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->intelSubgroupsSupport();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_image2DMaxWidth_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->image2DMaxWidth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_image2DMaxHeight_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->image2DMaxHeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_image3DMaxWidth_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->image3DMaxWidth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_image3DMaxHeight_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->image3DMaxHeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_image3DMaxDepth_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->image3DMaxDepth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_imageMaxBufferSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->imageMaxBufferSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_imageMaxArraySize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->imageMaxArraySize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_vendorID_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->vendorID();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_isAMD_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isAMD();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_isIntel_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isIntel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_isNVidia_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isNVidia();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxClockFrequency_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxClockFrequency();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxComputeUnits_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxComputeUnits();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxConstantArgs_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxConstantArgs();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxConstantBufferSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->maxConstantBufferSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxMemAllocSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->maxMemAllocSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxParameterSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->maxParameterSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxReadImageArgs_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxReadImageArgs();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxWriteImageArgs_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxWriteImageArgs();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxSamplers_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxSamplers();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxWorkGroupSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->maxWorkGroupSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxWorkItemDims_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxWorkItemDims();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_maxWorkItemSizes_const_size_tX(const cv::ocl::Device* instance, size_t* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->maxWorkItemSizes(unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_memBaseAddrAlign_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->memBaseAddrAlign();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthChar_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthChar();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthShort_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthShort();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthInt_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthInt();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthLong_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthLong();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthFloat_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthFloat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthDouble_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthDouble();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_nativeVectorWidthHalf_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->nativeVectorWidthHalf();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthChar_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthChar();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthShort_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthShort();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthInt_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthInt();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthLong_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthLong();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthFloat_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthFloat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthDouble_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthDouble();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_preferredVectorWidthHalf_const(const cv::ocl::Device* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->preferredVectorWidthHalf();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_printfBufferSize_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->printfBufferSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_profilingTimerResolution_const(const cv::ocl::Device* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->profilingTimerResolution();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_getDefault(Result<cv::ocl::Device*>* ocvrs_return) {
		try {
			const cv::ocl::Device ret = cv::ocl::Device::getDefault();
			Ok(new const cv::ocl::Device(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_fromHandle_voidX(void* d, Result<cv::ocl::Device*>* ocvrs_return) {
		try {
			cv::ocl::Device ret = cv::ocl::Device::fromHandle(d);
			Ok(new cv::ocl::Device(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Device_empty_const(const cv::ocl::Device* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Device* cv_ocl_Device_implicitClone_const(const cv::ocl::Device* instance) {
			return new cv::ocl::Device(*instance);
	}
	
	void cv_ocl_Device_delete(cv::ocl::Device* instance) {
			delete instance;
	}
	
	cv::ocl::Image2D* cv_ocl_Image2D_Image2D() {
			cv::ocl::Image2D* ret = new cv::ocl::Image2D();
			return ret;
	}
	
	void cv_ocl_Image2D_Image2D_const_UMatR_bool_bool(const cv::UMat* src, bool norm, bool alias, Result<cv::ocl::Image2D*>* ocvrs_return) {
		try {
			cv::ocl::Image2D* ret = new cv::ocl::Image2D(*src, norm, alias);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Image2D_Image2D_const_UMatR(const cv::UMat* src, Result<cv::ocl::Image2D*>* ocvrs_return) {
		try {
			cv::ocl::Image2D* ret = new cv::ocl::Image2D(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Image2D_Image2D_const_Image2DR(const cv::ocl::Image2D* i, Result<cv::ocl::Image2D*>* ocvrs_return) {
		try {
			cv::ocl::Image2D* ret = new cv::ocl::Image2D(*i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Image2D_operatorST_const_Image2DR(cv::ocl::Image2D* instance, const cv::ocl::Image2D* i, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*i);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Image2D* cv_ocl_Image2D_Image2D_Image2DRR(cv::ocl::Image2D* unnamed) {
			cv::ocl::Image2D* ret = new cv::ocl::Image2D(std::move(*unnamed));
			return ret;
	}
	
	void cv_ocl_Image2D_operatorST_Image2DRR(cv::ocl::Image2D* instance, cv::ocl::Image2D* unnamed) {
			instance->operator=(std::move(*unnamed));
	}
	
	void cv_ocl_Image2D_canCreateAlias_const_UMatR(const cv::UMat* u, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::Image2D::canCreateAlias(*u);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Image2D_isFormatSupported_int_int_bool(int depth, int cn, bool norm, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::ocl::Image2D::isFormatSupported(depth, cn, norm);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Image2D_ptr_const(const cv::ocl::Image2D* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Image2D_delete(cv::ocl::Image2D* instance) {
			delete instance;
	}
	
	cv::ocl::Kernel* cv_ocl_Kernel_Kernel() {
			cv::ocl::Kernel* ret = new cv::ocl::Kernel();
			return ret;
	}
	
	void cv_ocl_Kernel_Kernel_const_charX_const_ProgramR(const char* kname, const cv::ocl::Program* prog, Result<cv::ocl::Kernel*>* ocvrs_return) {
		try {
			cv::ocl::Kernel* ret = new cv::ocl::Kernel(kname, *prog);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_Kernel_const_charX_const_ProgramSourceR_const_StringR_StringX(const char* kname, const cv::ocl::ProgramSource* prog, const char* buildopts, void** errmsg, Result<cv::ocl::Kernel*>* ocvrs_return) {
		try {
			std::string errmsg_out;
			cv::ocl::Kernel* ret = new cv::ocl::Kernel(kname, *prog, std::string(buildopts), &errmsg_out);
			*errmsg = ocvrs_create_string(errmsg_out.c_str());
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_Kernel_const_charX_const_ProgramSourceR(const char* kname, const cv::ocl::ProgramSource* prog, Result<cv::ocl::Kernel*>* ocvrs_return) {
		try {
			cv::ocl::Kernel* ret = new cv::ocl::Kernel(kname, *prog);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_Kernel_const_KernelR(const cv::ocl::Kernel* k, Result<cv::ocl::Kernel*>* ocvrs_return) {
		try {
			cv::ocl::Kernel* ret = new cv::ocl::Kernel(*k);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_operatorST_const_KernelR(cv::ocl::Kernel* instance, const cv::ocl::Kernel* k, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Kernel* cv_ocl_Kernel_Kernel_KernelRR(cv::ocl::Kernel* k) {
			cv::ocl::Kernel* ret = new cv::ocl::Kernel(std::move(*k));
			return ret;
	}
	
	void cv_ocl_Kernel_operatorST_KernelRR(cv::ocl::Kernel* instance, cv::ocl::Kernel* k) {
			instance->operator=(std::move(*k));
	}
	
	void cv_ocl_Kernel_empty_const(const cv::ocl::Kernel* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_create_const_charX_const_ProgramR(cv::ocl::Kernel* instance, const char* kname, const cv::ocl::Program* prog, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create(kname, *prog);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_create_const_charX_const_ProgramSourceR_const_StringR_StringX(cv::ocl::Kernel* instance, const char* kname, const cv::ocl::ProgramSource* prog, const char* buildopts, void** errmsg, Result<bool>* ocvrs_return) {
		try {
			std::string errmsg_out;
			bool ret = instance->create(kname, *prog, std::string(buildopts), &errmsg_out);
			*errmsg = ocvrs_create_string(errmsg_out.c_str());
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_create_const_charX_const_ProgramSourceR_const_StringR(cv::ocl::Kernel* instance, const char* kname, const cv::ocl::ProgramSource* prog, const char* buildopts, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create(kname, *prog, std::string(buildopts));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_set_int_const_voidX_size_t(cv::ocl::Kernel* instance, int i, const void* value, size_t sz, Result<int>* ocvrs_return) {
		try {
			int ret = instance->set(i, value, sz);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_set_int_const_Image2DR(cv::ocl::Kernel* instance, int i, const cv::ocl::Image2D* image2D, Result<int>* ocvrs_return) {
		try {
			int ret = instance->set(i, *image2D);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_set_int_const_UMatR(cv::ocl::Kernel* instance, int i, const cv::UMat* m, Result<int>* ocvrs_return) {
		try {
			int ret = instance->set(i, *m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_set_int_const_KernelArgR(cv::ocl::Kernel* instance, int i, const cv::ocl::KernelArg* arg, Result<int>* ocvrs_return) {
		try {
			int ret = instance->set(i, *arg);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_run_int_size_tX_size_tX_bool_const_QueueR(cv::ocl::Kernel* instance, int dims, size_t* globalsize, size_t* localsize, bool sync, const cv::ocl::Queue* q, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->run(dims, globalsize, localsize, sync, *q);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_run_int_size_tX_size_tX_bool(cv::ocl::Kernel* instance, int dims, size_t* globalsize, size_t* localsize, bool sync, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->run(dims, globalsize, localsize, sync);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_runTask_bool_const_QueueR(cv::ocl::Kernel* instance, bool sync, const cv::ocl::Queue* q, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->runTask(sync, *q);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_runTask_bool(cv::ocl::Kernel* instance, bool sync, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->runTask(sync);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_runProfiling_int_size_tX_size_tX_const_QueueR(cv::ocl::Kernel* instance, int dims, size_t* globalsize, size_t* localsize, const cv::ocl::Queue* q, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->runProfiling(dims, globalsize, localsize, *q);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_runProfiling_int_size_tX_size_tX(cv::ocl::Kernel* instance, int dims, size_t* globalsize, size_t* localsize, Result<int64_t>* ocvrs_return) {
		try {
			int64_t ret = instance->runProfiling(dims, globalsize, localsize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_workGroupSize_const(const cv::ocl::Kernel* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->workGroupSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_preferedWorkGroupSizeMultiple_const(const cv::ocl::Kernel* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->preferedWorkGroupSizeMultiple();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_compileWorkGroupSize_const_size_tX(const cv::ocl::Kernel* instance, size_t* wsz, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->compileWorkGroupSize(wsz);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_localMemSize_const(const cv::ocl::Kernel* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->localMemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_ptr_const(const cv::ocl::Kernel* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Kernel_delete(cv::ocl::Kernel* instance) {
			delete instance;
	}
	
	void cv_ocl_KernelArg_KernelArg_int_UMatX_int_int_const_voidX_size_t(int _flags, cv::UMat* _m, int wscale, int iwscale, const void* _obj, size_t _sz, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg* ret = new cv::ocl::KernelArg(_flags, _m, wscale, iwscale, _obj, _sz);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_KernelArg_int_UMatX(int _flags, cv::UMat* _m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg* ret = new cv::ocl::KernelArg(_flags, _m);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::KernelArg* cv_ocl_KernelArg_KernelArg() {
			cv::ocl::KernelArg* ret = new cv::ocl::KernelArg();
			return ret;
	}
	
	void cv_ocl_KernelArg_Local_size_t(size_t localMemSize, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::Local(localMemSize);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_PtrWriteOnly_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::PtrWriteOnly(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_PtrReadOnly_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::PtrReadOnly(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_PtrReadWrite_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::PtrReadWrite(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadWrite_const_UMatR_int_int(const cv::UMat* m, int wscale, int iwscale, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadWrite(*m, wscale, iwscale);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadWrite_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadWrite(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadWriteNoSize_const_UMatR_int_int(const cv::UMat* m, int wscale, int iwscale, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadWriteNoSize(*m, wscale, iwscale);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadWriteNoSize_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadWriteNoSize(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadOnly_const_UMatR_int_int(const cv::UMat* m, int wscale, int iwscale, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadOnly(*m, wscale, iwscale);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadOnly_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadOnly(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_WriteOnly_const_UMatR_int_int(const cv::UMat* m, int wscale, int iwscale, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::WriteOnly(*m, wscale, iwscale);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_WriteOnly_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::WriteOnly(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadOnlyNoSize_const_UMatR_int_int(const cv::UMat* m, int wscale, int iwscale, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadOnlyNoSize(*m, wscale, iwscale);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_ReadOnlyNoSize_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadOnlyNoSize(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_WriteOnlyNoSize_const_UMatR_int_int(const cv::UMat* m, int wscale, int iwscale, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::WriteOnlyNoSize(*m, wscale, iwscale);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_WriteOnlyNoSize_const_UMatR(const cv::UMat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::WriteOnlyNoSize(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_KernelArg_Constant_const_MatR(const cv::Mat* m, Result<cv::ocl::KernelArg*>* ocvrs_return) {
		try {
			cv::ocl::KernelArg ret = cv::ocl::KernelArg::Constant(*m);
			Ok(new cv::ocl::KernelArg(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_ocl_KernelArg_propFlags_const(const cv::ocl::KernelArg* instance) {
			int ret = instance->flags;
			return ret;
	}
	
	void cv_ocl_KernelArg_propFlags_const_int(cv::ocl::KernelArg* instance, const int val) {
			instance->flags = val;
	}
	
	cv::UMat** cv_ocl_KernelArg_propM(cv::ocl::KernelArg* instance) {
			cv::UMat* ret = instance->m;
			return new cv::UMat*(ret);
	}
	
	void cv_ocl_KernelArg_propM_UMatX(cv::ocl::KernelArg* instance, cv::UMat* const val) {
			instance->m = val;
	}
	
	const void* cv_ocl_KernelArg_propObj_const(const cv::ocl::KernelArg* instance) {
			const void* ret = instance->obj;
			return ret;
	}
	
	size_t cv_ocl_KernelArg_propSz_const(const cv::ocl::KernelArg* instance) {
			size_t ret = instance->sz;
			return ret;
	}
	
	void cv_ocl_KernelArg_propSz_const_size_t(cv::ocl::KernelArg* instance, const size_t val) {
			instance->sz = val;
	}
	
	int cv_ocl_KernelArg_propWscale_const(const cv::ocl::KernelArg* instance) {
			int ret = instance->wscale;
			return ret;
	}
	
	void cv_ocl_KernelArg_propWscale_const_int(cv::ocl::KernelArg* instance, const int val) {
			instance->wscale = val;
	}
	
	int cv_ocl_KernelArg_propIwscale_const(const cv::ocl::KernelArg* instance) {
			int ret = instance->iwscale;
			return ret;
	}
	
	void cv_ocl_KernelArg_propIwscale_const_int(cv::ocl::KernelArg* instance, const int val) {
			instance->iwscale = val;
	}
	
	void cv_ocl_KernelArg_delete(cv::ocl::KernelArg* instance) {
			delete instance;
	}
	
	cv::ocl::OpenCLExecutionContext* cv_ocl_OpenCLExecutionContext_OpenCLExecutionContext() {
			cv::ocl::OpenCLExecutionContext* ret = new cv::ocl::OpenCLExecutionContext();
			return ret;
	}
	
	cv::ocl::OpenCLExecutionContext* cv_ocl_OpenCLExecutionContext_OpenCLExecutionContext_const_OpenCLExecutionContextR(const cv::ocl::OpenCLExecutionContext* unnamed) {
			cv::ocl::OpenCLExecutionContext* ret = new cv::ocl::OpenCLExecutionContext(*unnamed);
			return ret;
	}
	
	cv::ocl::OpenCLExecutionContext* cv_ocl_OpenCLExecutionContext_OpenCLExecutionContext_OpenCLExecutionContextRR(cv::ocl::OpenCLExecutionContext* unnamed) {
			cv::ocl::OpenCLExecutionContext* ret = new cv::ocl::OpenCLExecutionContext(std::move(*unnamed));
			return ret;
	}
	
	void cv_ocl_OpenCLExecutionContext_operatorST_const_OpenCLExecutionContextR(cv::ocl::OpenCLExecutionContext* instance, const cv::ocl::OpenCLExecutionContext* unnamed) {
			instance->operator=(*unnamed);
	}
	
	void cv_ocl_OpenCLExecutionContext_operatorST_OpenCLExecutionContextRR(cv::ocl::OpenCLExecutionContext* instance, cv::ocl::OpenCLExecutionContext* unnamed) {
			instance->operator=(std::move(*unnamed));
	}
	
	void cv_ocl_OpenCLExecutionContext_getContext_const(const cv::ocl::OpenCLExecutionContext* instance, Result<cv::ocl::Context*>* ocvrs_return) {
		try {
			cv::ocl::Context ret = instance->getContext();
			Ok(new cv::ocl::Context(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_getDevice_const(const cv::ocl::OpenCLExecutionContext* instance, Result<cv::ocl::Device*>* ocvrs_return) {
		try {
			cv::ocl::Device ret = instance->getDevice();
			Ok(new cv::ocl::Device(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_getQueue_const(const cv::ocl::OpenCLExecutionContext* instance, Result<cv::ocl::Queue*>* ocvrs_return) {
		try {
			cv::ocl::Queue ret = instance->getQueue();
			Ok(new cv::ocl::Queue(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_useOpenCL_const(const cv::ocl::OpenCLExecutionContext* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->useOpenCL();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_setUseOpenCL_bool(cv::ocl::OpenCLExecutionContext* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->setUseOpenCL(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_getCurrent(Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = cv::ocl::OpenCLExecutionContext::getCurrent();
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_getCurrentRef(Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = cv::ocl::OpenCLExecutionContext::getCurrentRef();
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_bind_const(const cv::ocl::OpenCLExecutionContext* instance, ResultVoid* ocvrs_return) {
		try {
			instance->bind();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_cloneWithNewQueue_const_const_QueueR(const cv::ocl::OpenCLExecutionContext* instance, const cv::ocl::Queue* q, Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = instance->cloneWithNewQueue(*q);
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_cloneWithNewQueue_const(const cv::ocl::OpenCLExecutionContext* instance, Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = instance->cloneWithNewQueue();
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_create_const_stringR_voidX_voidX_voidX(const char* platformName, void* platformID, void* context, void* deviceID, Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = cv::ocl::OpenCLExecutionContext::create(std::string(platformName), platformID, context, deviceID);
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_create_const_ContextR_const_DeviceR_const_QueueR(const cv::ocl::Context* context, const cv::ocl::Device* device, const cv::ocl::Queue* queue, Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = cv::ocl::OpenCLExecutionContext::create(*context, *device, *queue);
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_create_const_ContextR_const_DeviceR(const cv::ocl::Context* context, const cv::ocl::Device* device, Result<cv::ocl::OpenCLExecutionContext*>* ocvrs_return) {
		try {
			cv::ocl::OpenCLExecutionContext ret = cv::ocl::OpenCLExecutionContext::create(*context, *device);
			Ok(new cv::ocl::OpenCLExecutionContext(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_empty_const(const cv::ocl::OpenCLExecutionContext* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_release(cv::ocl::OpenCLExecutionContext* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_OpenCLExecutionContext_delete(cv::ocl::OpenCLExecutionContext* instance) {
			delete instance;
	}
	
	cv::ocl::Platform* cv_ocl_Platform_Platform() {
			cv::ocl::Platform* ret = new cv::ocl::Platform();
			return ret;
	}
	
	void cv_ocl_Platform_Platform_const_PlatformR(const cv::ocl::Platform* p, Result<cv::ocl::Platform*>* ocvrs_return) {
		try {
			cv::ocl::Platform* ret = new cv::ocl::Platform(*p);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Platform_operatorST_const_PlatformR(cv::ocl::Platform* instance, const cv::ocl::Platform* p, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*p);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Platform* cv_ocl_Platform_Platform_PlatformRR(cv::ocl::Platform* p) {
			cv::ocl::Platform* ret = new cv::ocl::Platform(std::move(*p));
			return ret;
	}
	
	void cv_ocl_Platform_operatorST_PlatformRR(cv::ocl::Platform* instance, cv::ocl::Platform* p) {
			instance->operator=(std::move(*p));
	}
	
	void cv_ocl_Platform_ptr_const(const cv::ocl::Platform* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Platform_getDefault(Result<cv::ocl::Platform*>* ocvrs_return) {
		try {
			cv::ocl::Platform ret = cv::ocl::Platform::getDefault();
			Ok(new cv::ocl::Platform(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Platform_empty_const(const cv::ocl::Platform* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Platform_delete(cv::ocl::Platform* instance) {
			delete instance;
	}
	
	cv::ocl::PlatformInfo* cv_ocl_PlatformInfo_PlatformInfo() {
			cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo();
			return ret;
	}
	
	void cv_ocl_PlatformInfo_PlatformInfo_voidX(void* id, Result<cv::ocl::PlatformInfo*>* ocvrs_return) {
		try {
			cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo(id);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_PlatformInfo_const_PlatformInfoR(const cv::ocl::PlatformInfo* i, Result<cv::ocl::PlatformInfo*>* ocvrs_return) {
		try {
			cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo(*i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_operatorST_const_PlatformInfoR(cv::ocl::PlatformInfo* instance, const cv::ocl::PlatformInfo* i, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*i);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::PlatformInfo* cv_ocl_PlatformInfo_PlatformInfo_PlatformInfoRR(cv::ocl::PlatformInfo* i) {
			cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo(std::move(*i));
			return ret;
	}
	
	void cv_ocl_PlatformInfo_operatorST_PlatformInfoRR(cv::ocl::PlatformInfo* instance, cv::ocl::PlatformInfo* i) {
			instance->operator=(std::move(*i));
	}
	
	void cv_ocl_PlatformInfo_name_const(const cv::ocl::PlatformInfo* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->name();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_vendor_const(const cv::ocl::PlatformInfo* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->vendor();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_version_const(const cv::ocl::PlatformInfo* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->version();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_deviceNumber_const(const cv::ocl::PlatformInfo* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->deviceNumber();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_getDevice_const_DeviceR_int(const cv::ocl::PlatformInfo* instance, cv::ocl::Device* device, int d, ResultVoid* ocvrs_return) {
		try {
			instance->getDevice(*device, d);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_empty_const(const cv::ocl::PlatformInfo* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_PlatformInfo_delete(cv::ocl::PlatformInfo* instance) {
			delete instance;
	}
	
	cv::ocl::Program* cv_ocl_Program_Program() {
			cv::ocl::Program* ret = new cv::ocl::Program();
			return ret;
	}
	
	void cv_ocl_Program_Program_const_ProgramSourceR_const_StringR_StringR(const cv::ocl::ProgramSource* src, const char* buildflags, void** errmsg, Result<cv::ocl::Program*>* ocvrs_return) {
		try {
			std::string errmsg_out;
			cv::ocl::Program* ret = new cv::ocl::Program(*src, std::string(buildflags), errmsg_out);
			*errmsg = ocvrs_create_string(errmsg_out.c_str());
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_Program_const_ProgramR(const cv::ocl::Program* prog, Result<cv::ocl::Program*>* ocvrs_return) {
		try {
			cv::ocl::Program* ret = new cv::ocl::Program(*prog);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_operatorST_const_ProgramR(cv::ocl::Program* instance, const cv::ocl::Program* prog, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*prog);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Program* cv_ocl_Program_Program_ProgramRR(cv::ocl::Program* prog) {
			cv::ocl::Program* ret = new cv::ocl::Program(std::move(*prog));
			return ret;
	}
	
	void cv_ocl_Program_operatorST_ProgramRR(cv::ocl::Program* instance, cv::ocl::Program* prog) {
			instance->operator=(std::move(*prog));
	}
	
	void cv_ocl_Program_create_const_ProgramSourceR_const_StringR_StringR(cv::ocl::Program* instance, const cv::ocl::ProgramSource* src, const char* buildflags, void** errmsg, Result<bool>* ocvrs_return) {
		try {
			std::string errmsg_out;
			bool ret = instance->create(*src, std::string(buildflags), errmsg_out);
			*errmsg = ocvrs_create_string(errmsg_out.c_str());
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_ptr_const(const cv::ocl::Program* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_getBinary_const_vectorLcharGR(const cv::ocl::Program* instance, std::vector<char>* binary, ResultVoid* ocvrs_return) {
		try {
			instance->getBinary(*binary);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_empty_const(const cv::ocl::Program* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_read_const_StringR_const_StringR(cv::ocl::Program* instance, const char* buf, const char* buildflags, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->read(std::string(buf), std::string(buildflags));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_write_const_StringR(const cv::ocl::Program* instance, void** buf, Result<bool>* ocvrs_return) {
		try {
			std::string buf_out;
			bool ret = instance->write(buf_out);
			*buf = ocvrs_create_string(buf_out.c_str());
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_source_const(const cv::ocl::Program* instance, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			const cv::ocl::ProgramSource ret = instance->source();
			Ok(new const cv::ocl::ProgramSource(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_getPrefix_const(const cv::ocl::Program* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getPrefix();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_getPrefix_const_StringR(const char* buildflags, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::ocl::Program::getPrefix(std::string(buildflags));
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Program_delete(cv::ocl::Program* instance) {
			delete instance;
	}
	
	cv::ocl::ProgramSource* cv_ocl_ProgramSource_ProgramSource() {
			cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource();
			return ret;
	}
	
	void cv_ocl_ProgramSource_ProgramSource_const_StringR_const_StringR_const_StringR_const_StringR(const char* module, const char* name, const char* codeStr, const char* codeHash, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource(std::string(module), std::string(name), std::string(codeStr), std::string(codeHash));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_ProgramSource_const_StringR(const char* prog, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource(std::string(prog));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_ProgramSource_const_ProgramSourceR(const cv::ocl::ProgramSource* prog, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource(*prog);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_operatorST_const_ProgramSourceR(cv::ocl::ProgramSource* instance, const cv::ocl::ProgramSource* prog, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*prog);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::ProgramSource* cv_ocl_ProgramSource_ProgramSource_ProgramSourceRR(cv::ocl::ProgramSource* prog) {
			cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource(std::move(*prog));
			return ret;
	}
	
	void cv_ocl_ProgramSource_operatorST_ProgramSourceRR(cv::ocl::ProgramSource* instance, cv::ocl::ProgramSource* prog) {
			instance->operator=(std::move(*prog));
	}
	
	void cv_ocl_ProgramSource_source_const(const cv::ocl::ProgramSource* instance, Result<void*>* ocvrs_return) {
		try {
			const cv::String ret = instance->source();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_hash_const(const cv::ocl::ProgramSource* instance, Result<cv::ocl::ProgramSource::hash_t>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource::hash_t ret = instance->hash();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_fromBinary_const_StringR_const_StringR_const_unsigned_charX_const_size_t_const_StringR(const char* module, const char* name, const unsigned char* binary, const size_t size, const char* buildOptions, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource ret = cv::ocl::ProgramSource::fromBinary(std::string(module), std::string(name), binary, size, std::string(buildOptions));
			Ok(new cv::ocl::ProgramSource(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_fromBinary_const_StringR_const_StringR_const_unsigned_charX_const_size_t(const char* module, const char* name, const unsigned char* binary, const size_t size, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource ret = cv::ocl::ProgramSource::fromBinary(std::string(module), std::string(name), binary, size);
			Ok(new cv::ocl::ProgramSource(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_fromSPIR_const_StringR_const_StringR_const_unsigned_charX_const_size_t_const_StringR(const char* module, const char* name, const unsigned char* binary, const size_t size, const char* buildOptions, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource ret = cv::ocl::ProgramSource::fromSPIR(std::string(module), std::string(name), binary, size, std::string(buildOptions));
			Ok(new cv::ocl::ProgramSource(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_fromSPIR_const_StringR_const_StringR_const_unsigned_charX_const_size_t(const char* module, const char* name, const unsigned char* binary, const size_t size, Result<cv::ocl::ProgramSource*>* ocvrs_return) {
		try {
			cv::ocl::ProgramSource ret = cv::ocl::ProgramSource::fromSPIR(std::string(module), std::string(name), binary, size);
			Ok(new cv::ocl::ProgramSource(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_empty_const(const cv::ocl::ProgramSource* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_ProgramSource_delete(cv::ocl::ProgramSource* instance) {
			delete instance;
	}
	
	cv::ocl::Queue* cv_ocl_Queue_Queue() {
			cv::ocl::Queue* ret = new cv::ocl::Queue();
			return ret;
	}
	
	void cv_ocl_Queue_Queue_const_ContextR_const_DeviceR(const cv::ocl::Context* c, const cv::ocl::Device* d, Result<cv::ocl::Queue*>* ocvrs_return) {
		try {
			cv::ocl::Queue* ret = new cv::ocl::Queue(*c, *d);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_Queue_const_ContextR(const cv::ocl::Context* c, Result<cv::ocl::Queue*>* ocvrs_return) {
		try {
			cv::ocl::Queue* ret = new cv::ocl::Queue(*c);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_Queue_const_QueueR(const cv::ocl::Queue* q, Result<cv::ocl::Queue*>* ocvrs_return) {
		try {
			cv::ocl::Queue* ret = new cv::ocl::Queue(*q);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_operatorST_const_QueueR(cv::ocl::Queue* instance, const cv::ocl::Queue* q, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*q);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ocl::Queue* cv_ocl_Queue_Queue_QueueRR(cv::ocl::Queue* q) {
			cv::ocl::Queue* ret = new cv::ocl::Queue(std::move(*q));
			return ret;
	}
	
	void cv_ocl_Queue_operatorST_QueueRR(cv::ocl::Queue* instance, cv::ocl::Queue* q) {
			instance->operator=(std::move(*q));
	}
	
	void cv_ocl_Queue_create_const_ContextR_const_DeviceR(cv::ocl::Queue* instance, const cv::ocl::Context* c, const cv::ocl::Device* d, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create(*c, *d);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_create(cv::ocl::Queue* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->create();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_finish(cv::ocl::Queue* instance, ResultVoid* ocvrs_return) {
		try {
			instance->finish();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_ptr_const(const cv::ocl::Queue* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->ptr();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_getDefault(Result<cv::ocl::Queue*>* ocvrs_return) {
		try {
			cv::ocl::Queue ret = cv::ocl::Queue::getDefault();
			Ok(new cv::ocl::Queue(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_getProfilingQueue_const(const cv::ocl::Queue* instance, Result<cv::ocl::Queue*>* ocvrs_return) {
		try {
			const cv::ocl::Queue ret = instance->getProfilingQueue();
			Ok(new const cv::ocl::Queue(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_empty_const(const cv::ocl::Queue* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Queue_delete(cv::ocl::Queue* instance) {
			delete instance;
	}
	
	void cv_ocl_Timer_Timer_const_QueueR(const cv::ocl::Queue* q, Result<cv::ocl::Timer*>* ocvrs_return) {
		try {
			cv::ocl::Timer* ret = new cv::ocl::Timer(*q);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Timer_start(cv::ocl::Timer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->start();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Timer_stop(cv::ocl::Timer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->stop();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Timer_durationNS_const(const cv::ocl::Timer* instance, Result<uint64_t>* ocvrs_return) {
		try {
			uint64_t ret = instance->durationNS();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ocl_Timer_delete(cv::ocl::Timer* instance) {
			delete instance;
	}
	
	void cv_ogl_Arrays_Arrays(Result<cv::ogl::Arrays*>* ocvrs_return) {
		try {
			cv::ogl::Arrays* ret = new cv::ogl::Arrays();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_setVertexArray_const__InputArrayR(cv::ogl::Arrays* instance, const cv::_InputArray* vertex, ResultVoid* ocvrs_return) {
		try {
			instance->setVertexArray(*vertex);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_resetVertexArray(cv::ogl::Arrays* instance, ResultVoid* ocvrs_return) {
		try {
			instance->resetVertexArray();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_setColorArray_const__InputArrayR(cv::ogl::Arrays* instance, const cv::_InputArray* color, ResultVoid* ocvrs_return) {
		try {
			instance->setColorArray(*color);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_resetColorArray(cv::ogl::Arrays* instance, ResultVoid* ocvrs_return) {
		try {
			instance->resetColorArray();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_setNormalArray_const__InputArrayR(cv::ogl::Arrays* instance, const cv::_InputArray* normal, ResultVoid* ocvrs_return) {
		try {
			instance->setNormalArray(*normal);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_resetNormalArray(cv::ogl::Arrays* instance, ResultVoid* ocvrs_return) {
		try {
			instance->resetNormalArray();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_setTexCoordArray_const__InputArrayR(cv::ogl::Arrays* instance, const cv::_InputArray* texCoord, ResultVoid* ocvrs_return) {
		try {
			instance->setTexCoordArray(*texCoord);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_resetTexCoordArray(cv::ogl::Arrays* instance, ResultVoid* ocvrs_return) {
		try {
			instance->resetTexCoordArray();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_release(cv::ogl::Arrays* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_setAutoRelease_bool(cv::ogl::Arrays* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->setAutoRelease(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_bind_const(const cv::ogl::Arrays* instance, ResultVoid* ocvrs_return) {
		try {
			instance->bind();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_size_const(const cv::ogl::Arrays* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_empty_const(const cv::ogl::Arrays* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Arrays_delete(cv::ogl::Arrays* instance) {
			delete instance;
	}
	
	void cv_ogl_Buffer_Buffer(Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_int_int_int_unsigned_int_bool(int arows, int acols, int atype, unsigned int abufId, bool autoRelease, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(arows, acols, atype, abufId, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_int_int_int_unsigned_int(int arows, int acols, int atype, unsigned int abufId, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(arows, acols, atype, abufId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_Size_int_unsigned_int_bool(cv::Size* asize, int atype, unsigned int abufId, bool autoRelease, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(*asize, atype, abufId, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_Size_int_unsigned_int(cv::Size* asize, int atype, unsigned int abufId, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(*asize, atype, abufId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_int_int_int_Target_bool(int arows, int acols, int atype, cv::ogl::Buffer::Target target, bool autoRelease, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(arows, acols, atype, target, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_int_int_int(int arows, int acols, int atype, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(arows, acols, atype);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_Size_int_Target_bool(cv::Size* asize, int atype, cv::ogl::Buffer::Target target, bool autoRelease, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(*asize, atype, target, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_Size_int(cv::Size* asize, int atype, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(*asize, atype);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_const__InputArrayR_Target_bool(const cv::_InputArray* arr, cv::ogl::Buffer::Target target, bool autoRelease, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(*arr, target, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_Buffer_const__InputArrayR(const cv::_InputArray* arr, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer* ret = new cv::ogl::Buffer(*arr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_create_int_int_int_Target_bool(cv::ogl::Buffer* instance, int arows, int acols, int atype, cv::ogl::Buffer::Target target, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->create(arows, acols, atype, target, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_create_int_int_int(cv::ogl::Buffer* instance, int arows, int acols, int atype, ResultVoid* ocvrs_return) {
		try {
			instance->create(arows, acols, atype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_create_Size_int_Target_bool(cv::ogl::Buffer* instance, cv::Size* asize, int atype, cv::ogl::Buffer::Target target, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->create(*asize, atype, target, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_create_Size_int(cv::ogl::Buffer* instance, cv::Size* asize, int atype, ResultVoid* ocvrs_return) {
		try {
			instance->create(*asize, atype);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_release(cv::ogl::Buffer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_setAutoRelease_bool(cv::ogl::Buffer* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->setAutoRelease(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_copyFrom_const__InputArrayR_Target_bool(cv::ogl::Buffer* instance, const cv::_InputArray* arr, cv::ogl::Buffer::Target target, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->copyFrom(*arr, target, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_copyFrom_const__InputArrayR(cv::ogl::Buffer* instance, const cv::_InputArray* arr, ResultVoid* ocvrs_return) {
		try {
			instance->copyFrom(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_copyFrom_const__InputArrayR_StreamR_Target_bool(cv::ogl::Buffer* instance, const cv::_InputArray* arr, cv::cuda::Stream* stream, cv::ogl::Buffer::Target target, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->copyFrom(*arr, *stream, target, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_copyFrom_const__InputArrayR_StreamR(cv::ogl::Buffer* instance, const cv::_InputArray* arr, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->copyFrom(*arr, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_copyTo_const_const__OutputArrayR(const cv::ogl::Buffer* instance, const cv::_OutputArray* arr, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_copyTo_const_const__OutputArrayR_StreamR(const cv::ogl::Buffer* instance, const cv::_OutputArray* arr, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*arr, *stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_clone_const_Target_bool(const cv::ogl::Buffer* instance, cv::ogl::Buffer::Target target, bool autoRelease, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer ret = instance->clone(target, autoRelease);
			Ok(new cv::ogl::Buffer(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_clone_const(const cv::ogl::Buffer* instance, Result<cv::ogl::Buffer*>* ocvrs_return) {
		try {
			cv::ogl::Buffer ret = instance->clone();
			Ok(new cv::ogl::Buffer(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_bind_const_Target(const cv::ogl::Buffer* instance, cv::ogl::Buffer::Target target, ResultVoid* ocvrs_return) {
		try {
			instance->bind(target);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_unbind_Target(cv::ogl::Buffer::Target target, ResultVoid* ocvrs_return) {
		try {
			cv::ogl::Buffer::unbind(target);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_mapHost_Access(cv::ogl::Buffer* instance, cv::ogl::Buffer::Access access, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->mapHost(access);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_unmapHost(cv::ogl::Buffer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->unmapHost();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_mapDevice(cv::ogl::Buffer* instance, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->mapDevice();
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_unmapDevice(cv::ogl::Buffer* instance, ResultVoid* ocvrs_return) {
		try {
			instance->unmapDevice();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_mapDevice_StreamR(cv::ogl::Buffer* instance, cv::cuda::Stream* stream, Result<cv::cuda::GpuMat*>* ocvrs_return) {
		try {
			cv::cuda::GpuMat ret = instance->mapDevice(*stream);
			Ok(new cv::cuda::GpuMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_unmapDevice_StreamR(cv::ogl::Buffer* instance, cv::cuda::Stream* stream, ResultVoid* ocvrs_return) {
		try {
			instance->unmapDevice(*stream);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_rows_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->rows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_cols_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->cols();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_size_const(const cv::ogl::Buffer* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_empty_const(const cv::ogl::Buffer* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_type_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_depth_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->depth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_channels_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->channels();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_elemSize_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_elemSize1_const(const cv::ogl::Buffer* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->elemSize1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_bufId_const(const cv::ogl::Buffer* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->bufId();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Buffer_delete(cv::ogl::Buffer* instance) {
			delete instance;
	}
	
	void cv_ogl_Texture2D_Texture2D(Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_int_int_Format_unsigned_int_bool(int arows, int acols, cv::ogl::Texture2D::Format aformat, unsigned int atexId, bool autoRelease, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(arows, acols, aformat, atexId, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_int_int_Format_unsigned_int(int arows, int acols, cv::ogl::Texture2D::Format aformat, unsigned int atexId, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(arows, acols, aformat, atexId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_Size_Format_unsigned_int_bool(cv::Size* asize, cv::ogl::Texture2D::Format aformat, unsigned int atexId, bool autoRelease, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(*asize, aformat, atexId, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_Size_Format_unsigned_int(cv::Size* asize, cv::ogl::Texture2D::Format aformat, unsigned int atexId, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(*asize, aformat, atexId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_int_int_Format_bool(int arows, int acols, cv::ogl::Texture2D::Format aformat, bool autoRelease, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(arows, acols, aformat, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_int_int_Format(int arows, int acols, cv::ogl::Texture2D::Format aformat, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(arows, acols, aformat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_Size_Format_bool(cv::Size* asize, cv::ogl::Texture2D::Format aformat, bool autoRelease, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(*asize, aformat, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_Size_Format(cv::Size* asize, cv::ogl::Texture2D::Format aformat, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(*asize, aformat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_const__InputArrayR_bool(const cv::_InputArray* arr, bool autoRelease, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(*arr, autoRelease);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_Texture2D_const__InputArrayR(const cv::_InputArray* arr, Result<cv::ogl::Texture2D*>* ocvrs_return) {
		try {
			cv::ogl::Texture2D* ret = new cv::ogl::Texture2D(*arr);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_create_int_int_Format_bool(cv::ogl::Texture2D* instance, int arows, int acols, cv::ogl::Texture2D::Format aformat, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->create(arows, acols, aformat, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_create_int_int_Format(cv::ogl::Texture2D* instance, int arows, int acols, cv::ogl::Texture2D::Format aformat, ResultVoid* ocvrs_return) {
		try {
			instance->create(arows, acols, aformat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_create_Size_Format_bool(cv::ogl::Texture2D* instance, cv::Size* asize, cv::ogl::Texture2D::Format aformat, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->create(*asize, aformat, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_create_Size_Format(cv::ogl::Texture2D* instance, cv::Size* asize, cv::ogl::Texture2D::Format aformat, ResultVoid* ocvrs_return) {
		try {
			instance->create(*asize, aformat);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_release(cv::ogl::Texture2D* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_setAutoRelease_bool(cv::ogl::Texture2D* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->setAutoRelease(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_copyFrom_const__InputArrayR_bool(cv::ogl::Texture2D* instance, const cv::_InputArray* arr, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->copyFrom(*arr, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_copyFrom_const__InputArrayR(cv::ogl::Texture2D* instance, const cv::_InputArray* arr, ResultVoid* ocvrs_return) {
		try {
			instance->copyFrom(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_copyTo_const_const__OutputArrayR_int_bool(const cv::ogl::Texture2D* instance, const cv::_OutputArray* arr, int ddepth, bool autoRelease, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*arr, ddepth, autoRelease);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_copyTo_const_const__OutputArrayR(const cv::ogl::Texture2D* instance, const cv::_OutputArray* arr, ResultVoid* ocvrs_return) {
		try {
			instance->copyTo(*arr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_bind_const(const cv::ogl::Texture2D* instance, ResultVoid* ocvrs_return) {
		try {
			instance->bind();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_rows_const(const cv::ogl::Texture2D* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->rows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_cols_const(const cv::ogl::Texture2D* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->cols();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_size_const(const cv::ogl::Texture2D* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_empty_const(const cv::ogl::Texture2D* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_format_const(const cv::ogl::Texture2D* instance, Result<cv::ogl::Texture2D::Format>* ocvrs_return) {
		try {
			cv::ogl::Texture2D::Format ret = instance->format();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_texId_const(const cv::ogl::Texture2D* instance, Result<unsigned int>* ocvrs_return) {
		try {
			unsigned int ret = instance->texId();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ogl_Texture2D_delete(cv::ogl::Texture2D* instance) {
			delete instance;
	}
	
	void cv_utils_ClassWithKeywordProperties_ClassWithKeywordProperties_int_int(int lambda_arg, int except_arg, Result<cv::utils::ClassWithKeywordProperties>* ocvrs_return) {
		try {
			cv::utils::ClassWithKeywordProperties ret(lambda_arg, except_arg);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_ClassWithKeywordProperties_ClassWithKeywordProperties(Result<cv::utils::ClassWithKeywordProperties>* ocvrs_return) {
		try {
			cv::utils::ClassWithKeywordProperties ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::utils::FunctionParams* cv_utils_FunctionParams_setLambda_int(cv::utils::FunctionParams* instance, int value) {
			cv::utils::FunctionParams ret = instance->setLambda(value);
			return new cv::utils::FunctionParams(ret);
	}
	
	cv::utils::FunctionParams* cv_utils_FunctionParams_setSigma_float(cv::utils::FunctionParams* instance, float value) {
			cv::utils::FunctionParams ret = instance->setSigma(value);
			return new cv::utils::FunctionParams(ret);
	}
	
	cv::utils::FunctionParams* cv_utils_FunctionParams_defaultNew_const() {
			cv::utils::FunctionParams* ret = new cv::utils::FunctionParams();
			return ret;
	}
	
	int cv_utils_FunctionParams_propLambda_const(const cv::utils::FunctionParams* instance) {
			int ret = instance->lambda;
			return ret;
	}
	
	void cv_utils_FunctionParams_propLambda_const_int(cv::utils::FunctionParams* instance, const int val) {
			instance->lambda = val;
	}
	
	float cv_utils_FunctionParams_propSigma_const(const cv::utils::FunctionParams* instance) {
			float ret = instance->sigma;
			return ret;
	}
	
	void cv_utils_FunctionParams_propSigma_const_float(cv::utils::FunctionParams* instance, const float val) {
			instance->sigma = val;
	}
	
	void cv_utils_FunctionParams_delete(cv::utils::FunctionParams* instance) {
			delete instance;
	}
	
	void cv_utils_logging_LogTag_LogTag_const_charX_LogLevel(const char* _name, cv::utils::logging::LogLevel _level, Result<cv::utils::logging::LogTag*>* ocvrs_return) {
		try {
			cv::utils::logging::LogTag* ret = new cv::utils::logging::LogTag(_name, _level);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void* cv_utils_logging_LogTag_propName_const(const cv::utils::logging::LogTag* instance) {
			const char* ret = instance->name;
			return ocvrs_create_string(ret);
	}
	
	void cv_utils_logging_LogTag_propLevel_const(const cv::utils::logging::LogTag* instance, cv::utils::logging::LogLevel* ocvrs_return) {
			cv::utils::logging::LogLevel ret = instance->level;
			*ocvrs_return = ret;
	}
	
	void cv_utils_logging_LogTag_propLevel_const_LogLevel(cv::utils::logging::LogTag* instance, const cv::utils::logging::LogLevel val) {
			instance->level = val;
	}
	
	void cv_utils_logging_LogTag_delete(cv::utils::logging::LogTag* instance) {
			delete instance;
	}
	
	void cv_utils_nested_OriginalClassName_OriginalClassName_const_ParamsR(const cv::utils::nested::OriginalClassName::Params* params, Result<cv::utils::nested::OriginalClassName*>* ocvrs_return) {
		try {
			cv::utils::nested::OriginalClassName* ret = new cv::utils::nested::OriginalClassName(*params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_OriginalClassName(Result<cv::utils::nested::OriginalClassName*>* ocvrs_return) {
		try {
			cv::utils::nested::OriginalClassName* ret = new cv::utils::nested::OriginalClassName();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_getIntParam_const(const cv::utils::nested::OriginalClassName* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIntParam();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_getFloatParam_const(const cv::utils::nested::OriginalClassName* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getFloatParam();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_originalName(Result<void*>* ocvrs_return) {
		try {
			std::string ret = cv::utils::nested::OriginalClassName::originalName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_create_const_ParamsR(const cv::utils::nested::OriginalClassName::Params* params, Result<cv::Ptr<cv::utils::nested::OriginalClassName>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::utils::nested::OriginalClassName> ret = cv::utils::nested::OriginalClassName::create(*params);
			Ok(new cv::Ptr<cv::utils::nested::OriginalClassName>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_create(Result<cv::Ptr<cv::utils::nested::OriginalClassName>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::utils::nested::OriginalClassName> ret = cv::utils::nested::OriginalClassName::create();
			Ok(new cv::Ptr<cv::utils::nested::OriginalClassName>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_delete(cv::utils::nested::OriginalClassName* instance) {
			delete instance;
	}
	
	void cv_utils_nested_OriginalClassName_Params_Params_int_float(int int_param, float float_param, Result<cv::utils::nested::OriginalClassName::Params>* ocvrs_return) {
		try {
			cv::utils::nested::OriginalClassName::Params ret(int_param, float_param);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_utils_nested_OriginalClassName_Params_Params(Result<cv::utils::nested::OriginalClassName::Params>* ocvrs_return) {
		try {
			cv::utils::nested::OriginalClassName::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
}
