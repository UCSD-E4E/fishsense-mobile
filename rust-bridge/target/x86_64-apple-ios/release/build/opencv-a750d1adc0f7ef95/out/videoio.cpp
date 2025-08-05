#include "videoio.hpp"
#include "videoio_types.hpp"

extern "C" {
	void cv_videoio_registry_getBackendName_VideoCaptureAPIs(cv::VideoCaptureAPIs api, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::videoio_registry::getBackendName(api);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getBackends(Result<std::vector<cv::VideoCaptureAPIs>*>* ocvrs_return) {
		try {
			std::vector<cv::VideoCaptureAPIs> ret = cv::videoio_registry::getBackends();
			Ok(new std::vector<cv::VideoCaptureAPIs>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getCameraBackendPluginVersion_VideoCaptureAPIs_intR_intR(cv::VideoCaptureAPIs api, int* version_ABI, int* version_API, Result<void*>* ocvrs_return) {
		try {
			std::string ret = cv::videoio_registry::getCameraBackendPluginVersion(api, *version_ABI, *version_API);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getCameraBackends(Result<std::vector<cv::VideoCaptureAPIs>*>* ocvrs_return) {
		try {
			std::vector<cv::VideoCaptureAPIs> ret = cv::videoio_registry::getCameraBackends();
			Ok(new std::vector<cv::VideoCaptureAPIs>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getStreamBackendPluginVersion_VideoCaptureAPIs_intR_intR(cv::VideoCaptureAPIs api, int* version_ABI, int* version_API, Result<void*>* ocvrs_return) {
		try {
			std::string ret = cv::videoio_registry::getStreamBackendPluginVersion(api, *version_ABI, *version_API);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getStreamBackends(Result<std::vector<cv::VideoCaptureAPIs>*>* ocvrs_return) {
		try {
			std::vector<cv::VideoCaptureAPIs> ret = cv::videoio_registry::getStreamBackends();
			Ok(new std::vector<cv::VideoCaptureAPIs>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getStreamBufferedBackendPluginVersion_VideoCaptureAPIs_intR_intR(cv::VideoCaptureAPIs api, int* version_ABI, int* version_API, Result<void*>* ocvrs_return) {
		try {
			std::string ret = cv::videoio_registry::getStreamBufferedBackendPluginVersion(api, *version_ABI, *version_API);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getStreamBufferedBackends(Result<std::vector<cv::VideoCaptureAPIs>*>* ocvrs_return) {
		try {
			std::vector<cv::VideoCaptureAPIs> ret = cv::videoio_registry::getStreamBufferedBackends();
			Ok(new std::vector<cv::VideoCaptureAPIs>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getWriterBackendPluginVersion_VideoCaptureAPIs_intR_intR(cv::VideoCaptureAPIs api, int* version_ABI, int* version_API, Result<void*>* ocvrs_return) {
		try {
			std::string ret = cv::videoio_registry::getWriterBackendPluginVersion(api, *version_ABI, *version_API);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_getWriterBackends(Result<std::vector<cv::VideoCaptureAPIs>*>* ocvrs_return) {
		try {
			std::vector<cv::VideoCaptureAPIs> ret = cv::videoio_registry::getWriterBackends();
			Ok(new std::vector<cv::VideoCaptureAPIs>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_hasBackend_VideoCaptureAPIs(cv::VideoCaptureAPIs api, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::videoio_registry::hasBackend(api);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_videoio_registry_isBackendBuiltIn_VideoCaptureAPIs(cv::VideoCaptureAPIs api, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::videoio_registry::isBackendBuiltIn(api);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_IStreamReader_read_charX_long_long(cv::IStreamReader* instance, void** buffer, long long size, Result<long long>* ocvrs_return) {
		try {
			std::unique_ptr<char[]> buffer_out = std::make_unique<char[]>(1024);
			long long ret = instance->read(buffer_out.get(), size);
			*buffer = ocvrs_create_string(buffer_out.get());
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_IStreamReader_seek_long_long_int(cv::IStreamReader* instance, long long offset, int origin, Result<long long>* ocvrs_return) {
		try {
			long long ret = instance->seek(offset, origin);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_IStreamReader_delete(cv::IStreamReader* instance) {
			delete instance;
	}
	
	void cv_VideoCapture_VideoCapture(Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_const_StringR_int(const char* filename, int apiPreference, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(std::string(filename), apiPreference);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_const_StringR(const char* filename, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_const_StringR_int_const_vectorLintGR(const char* filename, int apiPreference, const std::vector<int>* params, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(std::string(filename), apiPreference, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_int_int(int index, int apiPreference, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(index, apiPreference);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_int(int index, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(index);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_int_int_const_vectorLintGR(int index, int apiPreference, const std::vector<int>* params, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(index, apiPreference, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_VideoCapture_const_PtrLIStreamReaderGR_int_const_vectorLintGR(const cv::Ptr<cv::IStreamReader>* source, int apiPreference, const std::vector<int>* params, Result<cv::VideoCapture*>* ocvrs_return) {
		try {
			cv::VideoCapture* ret = new cv::VideoCapture(*source, apiPreference, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_const_StringR_int(cv::VideoCapture* instance, const char* filename, int apiPreference, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), apiPreference);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_const_StringR(cv::VideoCapture* instance, const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_const_StringR_int_const_vectorLintGR(cv::VideoCapture* instance, const char* filename, int apiPreference, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), apiPreference, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_int_int(cv::VideoCapture* instance, int index, int apiPreference, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(index, apiPreference);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_int(cv::VideoCapture* instance, int index, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(index);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_int_int_const_vectorLintGR(cv::VideoCapture* instance, int index, int apiPreference, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(index, apiPreference, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_open_const_PtrLIStreamReaderGR_int_const_vectorLintGR(cv::VideoCapture* instance, const cv::Ptr<cv::IStreamReader>* source, int apiPreference, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(*source, apiPreference, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_isOpened_const(const cv::VideoCapture* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOpened();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_release(cv::VideoCapture* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_grab(cv::VideoCapture* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->grab();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_retrieve_const__OutputArrayR_int(cv::VideoCapture* instance, const cv::_OutputArray* image, int flag, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->retrieve(*image, flag);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_retrieve_const__OutputArrayR(cv::VideoCapture* instance, const cv::_OutputArray* image, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->retrieve(*image);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_read_const__OutputArrayR(cv::VideoCapture* instance, const cv::_OutputArray* image, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->read(*image);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_set_int_double(cv::VideoCapture* instance, int propId, double value, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->set(propId, value);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_get_const_int(const cv::VideoCapture* instance, int propId, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get(propId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_getBackendName_const(const cv::VideoCapture* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getBackendName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_setExceptionMode_bool(cv::VideoCapture* instance, bool enable, ResultVoid* ocvrs_return) {
		try {
			instance->setExceptionMode(enable);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_getExceptionMode_const(const cv::VideoCapture* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getExceptionMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_waitAny_const_vectorLVideoCaptureGR_vectorLintGR_int64_t(const std::vector<cv::VideoCapture>* streams, std::vector<int>* readyIndex, int64_t timeoutNs, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::VideoCapture::waitAny(*streams, *readyIndex, timeoutNs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_waitAny_const_vectorLVideoCaptureGR_vectorLintGR(const std::vector<cv::VideoCapture>* streams, std::vector<int>* readyIndex, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::VideoCapture::waitAny(*streams, *readyIndex);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoCapture_delete(cv::VideoCapture* instance) {
			delete instance;
	}
	
	void cv_VideoWriter_VideoWriter(Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_VideoWriter_const_StringR_int_double_Size_bool(const char* filename, int fourcc, double fps, cv::Size* frameSize, bool isColor, Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter(std::string(filename), fourcc, fps, *frameSize, isColor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_VideoWriter_const_StringR_int_double_Size(const char* filename, int fourcc, double fps, cv::Size* frameSize, Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter(std::string(filename), fourcc, fps, *frameSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_VideoWriter_const_StringR_int_int_double_Size_bool(const char* filename, int apiPreference, int fourcc, double fps, cv::Size* frameSize, bool isColor, Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter(std::string(filename), apiPreference, fourcc, fps, *frameSize, isColor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_VideoWriter_const_StringR_int_int_double_Size(const char* filename, int apiPreference, int fourcc, double fps, cv::Size* frameSize, Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter(std::string(filename), apiPreference, fourcc, fps, *frameSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_VideoWriter_const_StringR_int_double_const_SizeR_const_vectorLintGR(const char* filename, int fourcc, double fps, const cv::Size* frameSize, const std::vector<int>* params, Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter(std::string(filename), fourcc, fps, *frameSize, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_VideoWriter_const_StringR_int_int_double_const_SizeR_const_vectorLintGR(const char* filename, int apiPreference, int fourcc, double fps, const cv::Size* frameSize, const std::vector<int>* params, Result<cv::VideoWriter*>* ocvrs_return) {
		try {
			cv::VideoWriter* ret = new cv::VideoWriter(std::string(filename), apiPreference, fourcc, fps, *frameSize, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_open_const_StringR_int_double_Size_bool(cv::VideoWriter* instance, const char* filename, int fourcc, double fps, cv::Size* frameSize, bool isColor, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), fourcc, fps, *frameSize, isColor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_open_const_StringR_int_double_Size(cv::VideoWriter* instance, const char* filename, int fourcc, double fps, cv::Size* frameSize, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), fourcc, fps, *frameSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_open_const_StringR_int_int_double_Size_bool(cv::VideoWriter* instance, const char* filename, int apiPreference, int fourcc, double fps, cv::Size* frameSize, bool isColor, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), apiPreference, fourcc, fps, *frameSize, isColor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_open_const_StringR_int_int_double_Size(cv::VideoWriter* instance, const char* filename, int apiPreference, int fourcc, double fps, cv::Size* frameSize, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), apiPreference, fourcc, fps, *frameSize);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_open_const_StringR_int_double_const_SizeR_const_vectorLintGR(cv::VideoWriter* instance, const char* filename, int fourcc, double fps, const cv::Size* frameSize, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), fourcc, fps, *frameSize, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_open_const_StringR_int_int_double_const_SizeR_const_vectorLintGR(cv::VideoWriter* instance, const char* filename, int apiPreference, int fourcc, double fps, const cv::Size* frameSize, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->open(std::string(filename), apiPreference, fourcc, fps, *frameSize, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_isOpened_const(const cv::VideoWriter* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOpened();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_release(cv::VideoWriter* instance, ResultVoid* ocvrs_return) {
		try {
			instance->release();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_write_const__InputArrayR(cv::VideoWriter* instance, const cv::_InputArray* image, ResultVoid* ocvrs_return) {
		try {
			instance->write(*image);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_set_int_double(cv::VideoWriter* instance, int propId, double value, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->set(propId, value);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_get_const_int(const cv::VideoWriter* instance, int propId, Result<double>* ocvrs_return) {
		try {
			double ret = instance->get(propId);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_fourcc_char_char_char_char(char c1, char c2, char c3, char c4, Result<int>* ocvrs_return) {
		try {
			int ret = cv::VideoWriter::fourcc(c1, c2, c3, c4);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_getBackendName_const(const cv::VideoWriter* instance, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->getBackendName();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_VideoWriter_delete(cv::VideoWriter* instance) {
			delete instance;
	}
	
}
