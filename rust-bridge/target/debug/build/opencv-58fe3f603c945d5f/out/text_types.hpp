extern "C" {
	const cv::text::BaseOCR* cv_PtrLcv_text_BaseOCRG_getInnerPtr_const(const cv::Ptr<cv::text::BaseOCR>* instance) {
			return instance->get();
	}
	
	cv::text::BaseOCR* cv_PtrLcv_text_BaseOCRG_getInnerPtrMut(cv::Ptr<cv::text::BaseOCR>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_BaseOCRG_delete(cv::Ptr<cv::text::BaseOCR>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::text::ERFilter* cv_PtrLcv_text_ERFilterG_getInnerPtr_const(const cv::Ptr<cv::text::ERFilter>* instance) {
			return instance->get();
	}
	
	cv::text::ERFilter* cv_PtrLcv_text_ERFilterG_getInnerPtrMut(cv::Ptr<cv::text::ERFilter>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_ERFilterG_delete(cv::Ptr<cv::text::ERFilter>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::Algorithm>* cv_PtrLcv_text_ERFilterG_to_PtrOfAlgorithm(cv::Ptr<cv::text::ERFilter>* instance) {
			return new cv::Ptr<cv::Algorithm>(instance->dynamicCast<cv::Algorithm>());
	}
	
}

extern "C" {
	const cv::text::ERFilter::Callback* cv_PtrLcv_text_ERFilter_CallbackG_getInnerPtr_const(const cv::Ptr<cv::text::ERFilter::Callback>* instance) {
			return instance->get();
	}
	
	cv::text::ERFilter::Callback* cv_PtrLcv_text_ERFilter_CallbackG_getInnerPtrMut(cv::Ptr<cv::text::ERFilter::Callback>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_ERFilter_CallbackG_delete(cv::Ptr<cv::text::ERFilter::Callback>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::text::OCRBeamSearchDecoder* cv_PtrLcv_text_OCRBeamSearchDecoderG_getInnerPtr_const(const cv::Ptr<cv::text::OCRBeamSearchDecoder>* instance) {
			return instance->get();
	}
	
	cv::text::OCRBeamSearchDecoder* cv_PtrLcv_text_OCRBeamSearchDecoderG_getInnerPtrMut(cv::Ptr<cv::text::OCRBeamSearchDecoder>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_OCRBeamSearchDecoderG_delete(cv::Ptr<cv::text::OCRBeamSearchDecoder>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::BaseOCR>* cv_PtrLcv_text_OCRBeamSearchDecoderG_to_PtrOfBaseOCR(cv::Ptr<cv::text::OCRBeamSearchDecoder>* instance) {
			return new cv::Ptr<cv::text::BaseOCR>(instance->dynamicCast<cv::text::BaseOCR>());
	}
	
	cv::Ptr<cv::text::OCRBeamSearchDecoder>* cv_PtrLcv_text_OCRBeamSearchDecoderG_new_const_OCRBeamSearchDecoder(cv::text::OCRBeamSearchDecoder* val) {
			return new cv::Ptr<cv::text::OCRBeamSearchDecoder>(val);
	}
	
}

extern "C" {
	const cv::text::OCRBeamSearchDecoder::ClassifierCallback* cv_PtrLcv_text_OCRBeamSearchDecoder_ClassifierCallbackG_getInnerPtr_const(const cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* instance) {
			return instance->get();
	}
	
	cv::text::OCRBeamSearchDecoder::ClassifierCallback* cv_PtrLcv_text_OCRBeamSearchDecoder_ClassifierCallbackG_getInnerPtrMut(cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_OCRBeamSearchDecoder_ClassifierCallbackG_delete(cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* cv_PtrLcv_text_OCRBeamSearchDecoder_ClassifierCallbackG_new_const_ClassifierCallback(cv::text::OCRBeamSearchDecoder::ClassifierCallback* val) {
			return new cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>(val);
	}
	
}

extern "C" {
	const cv::text::OCRHMMDecoder* cv_PtrLcv_text_OCRHMMDecoderG_getInnerPtr_const(const cv::Ptr<cv::text::OCRHMMDecoder>* instance) {
			return instance->get();
	}
	
	cv::text::OCRHMMDecoder* cv_PtrLcv_text_OCRHMMDecoderG_getInnerPtrMut(cv::Ptr<cv::text::OCRHMMDecoder>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_OCRHMMDecoderG_delete(cv::Ptr<cv::text::OCRHMMDecoder>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::BaseOCR>* cv_PtrLcv_text_OCRHMMDecoderG_to_PtrOfBaseOCR(cv::Ptr<cv::text::OCRHMMDecoder>* instance) {
			return new cv::Ptr<cv::text::BaseOCR>(instance->dynamicCast<cv::text::BaseOCR>());
	}
	
	cv::Ptr<cv::text::OCRHMMDecoder>* cv_PtrLcv_text_OCRHMMDecoderG_new_const_OCRHMMDecoder(cv::text::OCRHMMDecoder* val) {
			return new cv::Ptr<cv::text::OCRHMMDecoder>(val);
	}
	
}

extern "C" {
	const cv::text::OCRHMMDecoder::ClassifierCallback* cv_PtrLcv_text_OCRHMMDecoder_ClassifierCallbackG_getInnerPtr_const(const cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* instance) {
			return instance->get();
	}
	
	cv::text::OCRHMMDecoder::ClassifierCallback* cv_PtrLcv_text_OCRHMMDecoder_ClassifierCallbackG_getInnerPtrMut(cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_OCRHMMDecoder_ClassifierCallbackG_delete(cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* cv_PtrLcv_text_OCRHMMDecoder_ClassifierCallbackG_new_const_ClassifierCallback(cv::text::OCRHMMDecoder::ClassifierCallback* val) {
			return new cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>(val);
	}
	
}

extern "C" {
	const cv::text::OCRHolisticWordRecognizer* cv_PtrLcv_text_OCRHolisticWordRecognizerG_getInnerPtr_const(const cv::Ptr<cv::text::OCRHolisticWordRecognizer>* instance) {
			return instance->get();
	}
	
	cv::text::OCRHolisticWordRecognizer* cv_PtrLcv_text_OCRHolisticWordRecognizerG_getInnerPtrMut(cv::Ptr<cv::text::OCRHolisticWordRecognizer>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_OCRHolisticWordRecognizerG_delete(cv::Ptr<cv::text::OCRHolisticWordRecognizer>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::BaseOCR>* cv_PtrLcv_text_OCRHolisticWordRecognizerG_to_PtrOfBaseOCR(cv::Ptr<cv::text::OCRHolisticWordRecognizer>* instance) {
			return new cv::Ptr<cv::text::BaseOCR>(instance->dynamicCast<cv::text::BaseOCR>());
	}
	
}

extern "C" {
	const cv::text::OCRTesseract* cv_PtrLcv_text_OCRTesseractG_getInnerPtr_const(const cv::Ptr<cv::text::OCRTesseract>* instance) {
			return instance->get();
	}
	
	cv::text::OCRTesseract* cv_PtrLcv_text_OCRTesseractG_getInnerPtrMut(cv::Ptr<cv::text::OCRTesseract>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_OCRTesseractG_delete(cv::Ptr<cv::text::OCRTesseract>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::BaseOCR>* cv_PtrLcv_text_OCRTesseractG_to_PtrOfBaseOCR(cv::Ptr<cv::text::OCRTesseract>* instance) {
			return new cv::Ptr<cv::text::BaseOCR>(instance->dynamicCast<cv::text::BaseOCR>());
	}
	
}

extern "C" {
	const cv::text::TextDetector* cv_PtrLcv_text_TextDetectorG_getInnerPtr_const(const cv::Ptr<cv::text::TextDetector>* instance) {
			return instance->get();
	}
	
	cv::text::TextDetector* cv_PtrLcv_text_TextDetectorG_getInnerPtrMut(cv::Ptr<cv::text::TextDetector>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_TextDetectorG_delete(cv::Ptr<cv::text::TextDetector>* instance) {
			delete instance;
	}
	
}

extern "C" {
	const cv::text::TextDetectorCNN* cv_PtrLcv_text_TextDetectorCNNG_getInnerPtr_const(const cv::Ptr<cv::text::TextDetectorCNN>* instance) {
			return instance->get();
	}
	
	cv::text::TextDetectorCNN* cv_PtrLcv_text_TextDetectorCNNG_getInnerPtrMut(cv::Ptr<cv::text::TextDetectorCNN>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_text_TextDetectorCNNG_delete(cv::Ptr<cv::text::TextDetectorCNN>* instance) {
			delete instance;
	}
	
	cv::Ptr<cv::text::TextDetector>* cv_PtrLcv_text_TextDetectorCNNG_to_PtrOfTextDetector(cv::Ptr<cv::text::TextDetectorCNN>* instance) {
			return new cv::Ptr<cv::text::TextDetector>(instance->dynamicCast<cv::text::TextDetector>());
	}
	
}

extern "C" {
	std::vector<cv::text::ERStat>* std_vectorLcv_text_ERStatG_new_const() {
			std::vector<cv::text::ERStat>* ret = new std::vector<cv::text::ERStat>();
			return ret;
	}
	
	void std_vectorLcv_text_ERStatG_delete(std::vector<cv::text::ERStat>* instance) {
			delete instance;
	}
	
	size_t std_vectorLcv_text_ERStatG_len_const(const std::vector<cv::text::ERStat>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLcv_text_ERStatG_isEmpty_const(const std::vector<cv::text::ERStat>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLcv_text_ERStatG_capacity_const(const std::vector<cv::text::ERStat>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLcv_text_ERStatG_shrinkToFit(std::vector<cv::text::ERStat>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLcv_text_ERStatG_reserve_size_t(std::vector<cv::text::ERStat>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLcv_text_ERStatG_remove_size_t(std::vector<cv::text::ERStat>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLcv_text_ERStatG_swap_size_t_size_t(std::vector<cv::text::ERStat>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLcv_text_ERStatG_clear(std::vector<cv::text::ERStat>* instance) {
			instance->clear();
	}
	
	void std_vectorLcv_text_ERStatG_push_const_ERStat(std::vector<cv::text::ERStat>* instance, const cv::text::ERStat* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLcv_text_ERStatG_insert_size_t_const_ERStat(std::vector<cv::text::ERStat>* instance, size_t index, const cv::text::ERStat* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLcv_text_ERStatG_get_const_size_t(const std::vector<cv::text::ERStat>* instance, size_t index, cv::text::ERStat** ocvrs_return) {
			cv::text::ERStat ret = (*instance)[index];
			*ocvrs_return = new cv::text::ERStat(ret);
	}
	
	void std_vectorLcv_text_ERStatG_set_size_t_const_ERStat(std::vector<cv::text::ERStat>* instance, size_t index, const cv::text::ERStat* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::vector<cv::text::ERStat>>* std_vectorLstd_vectorLcv_text_ERStatGG_new_const() {
			std::vector<std::vector<cv::text::ERStat>>* ret = new std::vector<std::vector<cv::text::ERStat>>();
			return ret;
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_delete(std::vector<std::vector<cv::text::ERStat>>* instance) {
			delete instance;
	}
	
	size_t std_vectorLstd_vectorLcv_text_ERStatGG_len_const(const std::vector<std::vector<cv::text::ERStat>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool std_vectorLstd_vectorLcv_text_ERStatGG_isEmpty_const(const std::vector<std::vector<cv::text::ERStat>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t std_vectorLstd_vectorLcv_text_ERStatGG_capacity_const(const std::vector<std::vector<cv::text::ERStat>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_shrinkToFit(std::vector<std::vector<cv::text::ERStat>>* instance) {
			instance->shrink_to_fit();
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_reserve_size_t(std::vector<std::vector<cv::text::ERStat>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_remove_size_t(std::vector<std::vector<cv::text::ERStat>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_swap_size_t_size_t(std::vector<std::vector<cv::text::ERStat>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_clear(std::vector<std::vector<cv::text::ERStat>>* instance) {
			instance->clear();
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_push_const_vectorLERStatG(std::vector<std::vector<cv::text::ERStat>>* instance, const std::vector<cv::text::ERStat>* val) {
			instance->push_back(*val);
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_insert_size_t_const_vectorLERStatG(std::vector<std::vector<cv::text::ERStat>>* instance, size_t index, const std::vector<cv::text::ERStat>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_get_const_size_t(const std::vector<std::vector<cv::text::ERStat>>* instance, size_t index, std::vector<cv::text::ERStat>** ocvrs_return) {
			std::vector<cv::text::ERStat> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::text::ERStat>(ret);
	}
	
	void std_vectorLstd_vectorLcv_text_ERStatGG_set_size_t_const_vectorLERStatG(std::vector<std::vector<cv::text::ERStat>>* instance, size_t index, const std::vector<cv::text::ERStat>* val) {
			(*instance)[index] = *val;
	}
	
}


