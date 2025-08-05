#include "ocvrs_common.hpp"
#include <opencv2/imgcodecs.hpp>
#include "imgcodecs_types.hpp"

extern "C" {
	void cv_haveImageReader_const_StringR(const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::haveImageReader(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_haveImageWriter_const_StringR(const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::haveImageWriter(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imcount_const_StringR(const char* filename, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = cv::imcount(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imcount_const_StringR_int(const char* filename, int flags, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = cv::imcount(std::string(filename), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imdecode_const__InputArrayR_int(const cv::_InputArray* buf, int flags, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imdecode(*buf, flags);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imdecode_const__InputArrayR_int_MatX(const cv::_InputArray* buf, int flags, cv::Mat* dst, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imdecode(*buf, flags, dst);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imdecodemulti_const__InputArrayR_int_vectorLMatGR(const cv::_InputArray* buf, int flags, std::vector<cv::Mat>* mats, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imdecodemulti(*buf, flags, *mats);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imdecodemulti_const__InputArrayR_int_vectorLMatGR_const_RangeR(const cv::_InputArray* buf, int flags, std::vector<cv::Mat>* mats, const cv::Range* range, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imdecodemulti(*buf, flags, *mats, *range);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imencode_const_StringR_const__InputArrayR_vectorLunsigned_charGR(const char* ext, const cv::_InputArray* img, std::vector<unsigned char>* buf, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imencode(std::string(ext), *img, *buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imencode_const_StringR_const__InputArrayR_vectorLunsigned_charGR_const_vectorLintGR(const char* ext, const cv::_InputArray* img, std::vector<unsigned char>* buf, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imencode(std::string(ext), *img, *buf, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imencodemulti_const_StringR_const__InputArrayR_vectorLunsigned_charGR(const char* ext, const cv::_InputArray* imgs, std::vector<unsigned char>* buf, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imencodemulti(std::string(ext), *imgs, *buf);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imencodemulti_const_StringR_const__InputArrayR_vectorLunsigned_charGR_const_vectorLintGR(const char* ext, const cv::_InputArray* imgs, std::vector<unsigned char>* buf, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imencodemulti(std::string(ext), *imgs, *buf, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imread_const_StringR(const char* filename, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imread(std::string(filename));
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imread_const_StringR_const__OutputArrayR(const char* filename, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			cv::imread(std::string(filename), *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imread_const_StringR_const__OutputArrayR_int(const char* filename, const cv::_OutputArray* dst, int flags, ResultVoid* ocvrs_return) {
		try {
			cv::imread(std::string(filename), *dst, flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imread_const_StringR_int(const char* filename, int flags, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imread(std::string(filename), flags);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imreadanimation_const_StringR_AnimationR(const char* filename, cv::Animation* animation, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadanimation(std::string(filename), *animation);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imreadanimation_const_StringR_AnimationR_int_int(const char* filename, cv::Animation* animation, int start, int count, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadanimation(std::string(filename), *animation, start, count);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imreadmulti_const_StringR_vectorLMatGR(const char* filename, std::vector<cv::Mat>* mats, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imreadmulti_const_StringR_vectorLMatGR_int(const char* filename, std::vector<cv::Mat>* mats, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imreadmulti_const_StringR_vectorLMatGR_int_int(const char* filename, std::vector<cv::Mat>* mats, int start, int count, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats, start, count);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imreadmulti_const_StringR_vectorLMatGR_int_int_int(const char* filename, std::vector<cv::Mat>* mats, int start, int count, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats, start, count, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imwrite_const_StringR_const__InputArrayR(const char* filename, const cv::_InputArray* img, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwrite(std::string(filename), *img);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imwrite_const_StringR_const__InputArrayR_const_vectorLintGR(const char* filename, const cv::_InputArray* img, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwrite(std::string(filename), *img, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imwriteanimation_const_StringR_const_AnimationR(const char* filename, const cv::Animation* animation, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwriteanimation(std::string(filename), *animation);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imwriteanimation_const_StringR_const_AnimationR_const_vectorLintGR(const char* filename, const cv::Animation* animation, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwriteanimation(std::string(filename), *animation, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imwritemulti_const_StringR_const__InputArrayR(const char* filename, const cv::_InputArray* img, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwritemulti(std::string(filename), *img);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_imwritemulti_const_StringR_const__InputArrayR_const_vectorLintGR(const char* filename, const cv::_InputArray* img, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwritemulti(std::string(filename), *img, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Animation_Animation_int_Scalar(int loopCount, cv::Scalar* bgColor, Result<cv::Animation*>* ocvrs_return) {
		try {
			cv::Animation* ret = new cv::Animation(loopCount, *bgColor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Animation_Animation(Result<cv::Animation*>* ocvrs_return) {
		try {
			cv::Animation* ret = new cv::Animation();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Animation* cv_Animation_implicitClone_const(const cv::Animation* instance) {
			return new cv::Animation(*instance);
	}
	
	int cv_Animation_propLoop_count_const(const cv::Animation* instance) {
			int ret = instance->loop_count;
			return ret;
	}
	
	void cv_Animation_propLoop_count_const_int(cv::Animation* instance, const int val) {
			instance->loop_count = val;
	}
	
	void cv_Animation_propBgcolor_const(const cv::Animation* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->bgcolor;
			*ocvrs_return = ret;
	}
	
	void cv_Animation_propBgcolor_const_Scalar(cv::Animation* instance, const cv::Scalar* val) {
			instance->bgcolor = *val;
	}
	
	std::vector<int>* cv_Animation_propDurations_const(const cv::Animation* instance) {
			std::vector<int> ret = instance->durations;
			return new std::vector<int>(ret);
	}
	
	void cv_Animation_propDurations_const_vectorLintG(cv::Animation* instance, const std::vector<int>* val) {
			instance->durations = *val;
	}
	
	std::vector<cv::Mat>* cv_Animation_propFrames_const(const cv::Animation* instance) {
			std::vector<cv::Mat> ret = instance->frames;
			return new std::vector<cv::Mat>(ret);
	}
	
	void cv_Animation_propFrames_const_vectorLMatG(cv::Animation* instance, const std::vector<cv::Mat>* val) {
			instance->frames = *val;
	}
	
	void cv_Animation_delete(cv::Animation* instance) {
			delete instance;
	}
	
	void cv_ImageCollection_ImageCollection(Result<cv::ImageCollection*>* ocvrs_return) {
		try {
			cv::ImageCollection* ret = new cv::ImageCollection();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_ImageCollection_const_StringR_int(const char* filename, int flags, Result<cv::ImageCollection*>* ocvrs_return) {
		try {
			cv::ImageCollection* ret = new cv::ImageCollection(std::string(filename), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_init_const_StringR_int(cv::ImageCollection* instance, const char* img, int flags, ResultVoid* ocvrs_return) {
		try {
			instance->init(std::string(img), flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_size_const(const cv::ImageCollection* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_at_int(cv::ImageCollection* instance, int index, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->at(index);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_operator___int(cv::ImageCollection* instance, int index, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->operator[](index);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_releaseCache_int(cv::ImageCollection* instance, int index, ResultVoid* ocvrs_return) {
		try {
			instance->releaseCache(index);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_begin(cv::ImageCollection* instance, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator ret = instance->begin();
			Ok(new cv::ImageCollection::iterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_end(cv::ImageCollection* instance, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator ret = instance->end();
			Ok(new cv::ImageCollection::iterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_delete(cv::ImageCollection* instance) {
			delete instance;
	}
	
	void cv_ImageCollection_iterator_iterator_ImageCollectionX(cv::ImageCollection* col, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator* ret = new cv::ImageCollection::iterator(col);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_iterator_ImageCollectionX_int(cv::ImageCollection* col, int end, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator* ret = new cv::ImageCollection::iterator(col, end);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_operatorX(cv::ImageCollection::iterator* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->operator*();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_operatorAA(cv::ImageCollection::iterator* instance, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator ret = instance->operator++();
			Ok(new cv::ImageCollection::iterator(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_delete(cv::ImageCollection::iterator* instance) {
			delete instance;
	}
	
}
