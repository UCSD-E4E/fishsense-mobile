#include "ocvrs_common.hpp"
#include <opencv2/stitching.hpp>
#include "stitching_types.hpp"

extern "C" {
	void cv_detail_autoDetectWaveCorrectKind_const_vectorLMatGR(const std::vector<cv::Mat>* rmats, Result<cv::detail::WaveCorrectKind>* ocvrs_return) {
		try {
			cv::detail::WaveCorrectKind ret = cv::detail::autoDetectWaveCorrectKind(*rmats);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_computeImageFeatures_const_PtrLFeature2DGR_const__InputArrayR_ImageFeaturesR(const cv::Ptr<cv::Feature2D>* featuresFinder, const cv::_InputArray* image, cv::detail::ImageFeatures* features, ResultVoid* ocvrs_return) {
		try {
			cv::detail::computeImageFeatures(*featuresFinder, *image, *features);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_computeImageFeatures_const_PtrLFeature2DGR_const__InputArrayR_ImageFeaturesR_const__InputArrayR(const cv::Ptr<cv::Feature2D>* featuresFinder, const cv::_InputArray* image, cv::detail::ImageFeatures* features, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			cv::detail::computeImageFeatures(*featuresFinder, *image, *features, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_computeImageFeatures_const_PtrLFeature2DGR_const__InputArrayR_vectorLImageFeaturesGR(const cv::Ptr<cv::Feature2D>* featuresFinder, const cv::_InputArray* images, std::vector<cv::detail::ImageFeatures>* features, ResultVoid* ocvrs_return) {
		try {
			cv::detail::computeImageFeatures(*featuresFinder, *images, *features);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_computeImageFeatures_const_PtrLFeature2DGR_const__InputArrayR_vectorLImageFeaturesGR_const__InputArrayR(const cv::Ptr<cv::Feature2D>* featuresFinder, const cv::_InputArray* images, std::vector<cv::detail::ImageFeatures>* features, const cv::_InputArray* masks, ResultVoid* ocvrs_return) {
		try {
			cv::detail::computeImageFeatures(*featuresFinder, *images, *features, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_createLaplacePyrGpu_const__InputArrayR_int_vectorLUMatGR(const cv::_InputArray* img, int num_levels, std::vector<cv::UMat>* pyr, ResultVoid* ocvrs_return) {
		try {
			cv::detail::createLaplacePyrGpu(*img, num_levels, *pyr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_createLaplacePyr_const__InputArrayR_int_vectorLUMatGR(const cv::_InputArray* img, int num_levels, std::vector<cv::UMat>* pyr, ResultVoid* ocvrs_return) {
		try {
			cv::detail::createLaplacePyr(*img, num_levels, *pyr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_createWeightMap_const__InputArrayR_float_const__InputOutputArrayR(const cv::_InputArray* mask, float sharpness, const cv::_InputOutputArray* weight, ResultVoid* ocvrs_return) {
		try {
			cv::detail::createWeightMap(*mask, sharpness, *weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_findMaxSpanningTree_int_const_vectorLMatchesInfoGR_GraphR_vectorLintGR(int num_images, const std::vector<cv::detail::MatchesInfo>* pairwise_matches, cv::detail::Graph* span_tree, std::vector<int>* centers, ResultVoid* ocvrs_return) {
		try {
			cv::detail::findMaxSpanningTree(num_images, *pairwise_matches, *span_tree, *centers);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_leaveBiggestComponent_vectorLImageFeaturesGR_vectorLMatchesInfoGR_float(std::vector<cv::detail::ImageFeatures>* features, std::vector<cv::detail::MatchesInfo>* pairwise_matches, float conf_threshold, Result<std::vector<int>*>* ocvrs_return) {
		try {
			std::vector<int> ret = cv::detail::leaveBiggestComponent(*features, *pairwise_matches, conf_threshold);
			Ok(new std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_matchesGraphAsString_vectorLStringGR_vectorLMatchesInfoGR_float(std::vector<cv::String>* paths, std::vector<cv::detail::MatchesInfo>* pairwise_matches, float conf_threshold, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = cv::detail::matchesGraphAsString(*paths, *pairwise_matches, conf_threshold);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_normalizeUsingWeightMap_const__InputArrayR_const__InputOutputArrayR(const cv::_InputArray* weight, const cv::_InputOutputArray* src, ResultVoid* ocvrs_return) {
		try {
			cv::detail::normalizeUsingWeightMap(*weight, *src);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_overlapRoi_Point_Point_Size_Size_RectR(cv::Point* tl1, cv::Point* tl2, cv::Size* sz1, cv::Size* sz2, cv::Rect* roi, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::detail::overlapRoi(*tl1, *tl2, *sz1, *sz2, *roi);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_restoreImageFromLaplacePyrGpu_vectorLUMatGR(std::vector<cv::UMat>* pyr, ResultVoid* ocvrs_return) {
		try {
			cv::detail::restoreImageFromLaplacePyrGpu(*pyr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_restoreImageFromLaplacePyr_vectorLUMatGR(std::vector<cv::UMat>* pyr, ResultVoid* ocvrs_return) {
		try {
			cv::detail::restoreImageFromLaplacePyr(*pyr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_resultRoiIntersection_const_vectorLPointGR_const_vectorLSizeGR(const std::vector<cv::Point>* corners, const std::vector<cv::Size>* sizes, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::detail::resultRoiIntersection(*corners, *sizes);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_resultRoi_const_vectorLPointGR_const_vectorLSizeGR(const std::vector<cv::Point>* corners, const std::vector<cv::Size>* sizes, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::detail::resultRoi(*corners, *sizes);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_resultRoi_const_vectorLPointGR_const_vectorLUMatGR(const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = cv::detail::resultRoi(*corners, *images);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_resultTl_const_vectorLPointGR(const std::vector<cv::Point>* corners, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = cv::detail::resultTl(*corners);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_selectRandomSubset_int_int_vectorLintGR(int count, int size, std::vector<int>* subset, ResultVoid* ocvrs_return) {
		try {
			cv::detail::selectRandomSubset(count, size, *subset);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_stitchingLogLevel(Result<int>* ocvrs_return) {
		try {
			int ret = cv::detail::stitchingLogLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_waveCorrect_vectorLMatGR_WaveCorrectKind(std::vector<cv::Mat>* rmats, cv::detail::WaveCorrectKind kind, ResultVoid* ocvrs_return) {
		try {
			cv::detail::waveCorrect(*rmats, kind);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AffineWarper_create_const_float(const cv::AffineWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::AffineWarper* cv_AffineWarper_defaultNew_const() {
			cv::AffineWarper* ret = new cv::AffineWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_AffineWarper_to_WarperCreator(cv::AffineWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_AffineWarper_delete(cv::AffineWarper* instance) {
			delete instance;
	}
	
	void cv_CompressedRectilinearPortraitWarper_CompressedRectilinearPortraitWarper_float_float(float A, float B, Result<cv::CompressedRectilinearPortraitWarper*>* ocvrs_return) {
		try {
			cv::CompressedRectilinearPortraitWarper* ret = new cv::CompressedRectilinearPortraitWarper(A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CompressedRectilinearPortraitWarper_CompressedRectilinearPortraitWarper(Result<cv::CompressedRectilinearPortraitWarper*>* ocvrs_return) {
		try {
			cv::CompressedRectilinearPortraitWarper* ret = new cv::CompressedRectilinearPortraitWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CompressedRectilinearPortraitWarper_create_const_float(const cv::CompressedRectilinearPortraitWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::WarperCreator* cv_CompressedRectilinearPortraitWarper_to_WarperCreator(cv::CompressedRectilinearPortraitWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_CompressedRectilinearPortraitWarper_delete(cv::CompressedRectilinearPortraitWarper* instance) {
			delete instance;
	}
	
	void cv_CompressedRectilinearWarper_CompressedRectilinearWarper_float_float(float A, float B, Result<cv::CompressedRectilinearWarper*>* ocvrs_return) {
		try {
			cv::CompressedRectilinearWarper* ret = new cv::CompressedRectilinearWarper(A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CompressedRectilinearWarper_CompressedRectilinearWarper(Result<cv::CompressedRectilinearWarper*>* ocvrs_return) {
		try {
			cv::CompressedRectilinearWarper* ret = new cv::CompressedRectilinearWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_CompressedRectilinearWarper_create_const_float(const cv::CompressedRectilinearWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::WarperCreator* cv_CompressedRectilinearWarper_to_WarperCreator(cv::CompressedRectilinearWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_CompressedRectilinearWarper_delete(cv::CompressedRectilinearWarper* instance) {
			delete instance;
	}
	
	void cv_CylindricalWarper_create_const_float(const cv::CylindricalWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::CylindricalWarper* cv_CylindricalWarper_defaultNew_const() {
			cv::CylindricalWarper* ret = new cv::CylindricalWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_CylindricalWarper_to_WarperCreator(cv::CylindricalWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_CylindricalWarper_delete(cv::CylindricalWarper* instance) {
			delete instance;
	}
	
	void cv_FisheyeWarper_create_const_float(const cv::FisheyeWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::FisheyeWarper* cv_FisheyeWarper_defaultNew_const() {
			cv::FisheyeWarper* ret = new cv::FisheyeWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_FisheyeWarper_to_WarperCreator(cv::FisheyeWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_FisheyeWarper_delete(cv::FisheyeWarper* instance) {
			delete instance;
	}
	
	void cv_MercatorWarper_create_const_float(const cv::MercatorWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::MercatorWarper* cv_MercatorWarper_defaultNew_const() {
			cv::MercatorWarper* ret = new cv::MercatorWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_MercatorWarper_to_WarperCreator(cv::MercatorWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_MercatorWarper_delete(cv::MercatorWarper* instance) {
			delete instance;
	}
	
	void cv_PaniniPortraitWarper_PaniniPortraitWarper_float_float(float A, float B, Result<cv::PaniniPortraitWarper*>* ocvrs_return) {
		try {
			cv::PaniniPortraitWarper* ret = new cv::PaniniPortraitWarper(A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PaniniPortraitWarper_PaniniPortraitWarper(Result<cv::PaniniPortraitWarper*>* ocvrs_return) {
		try {
			cv::PaniniPortraitWarper* ret = new cv::PaniniPortraitWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PaniniPortraitWarper_create_const_float(const cv::PaniniPortraitWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::WarperCreator* cv_PaniniPortraitWarper_to_WarperCreator(cv::PaniniPortraitWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_PaniniPortraitWarper_delete(cv::PaniniPortraitWarper* instance) {
			delete instance;
	}
	
	void cv_PaniniWarper_PaniniWarper_float_float(float A, float B, Result<cv::PaniniWarper*>* ocvrs_return) {
		try {
			cv::PaniniWarper* ret = new cv::PaniniWarper(A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PaniniWarper_PaniniWarper(Result<cv::PaniniWarper*>* ocvrs_return) {
		try {
			cv::PaniniWarper* ret = new cv::PaniniWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PaniniWarper_create_const_float(const cv::PaniniWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::WarperCreator* cv_PaniniWarper_to_WarperCreator(cv::PaniniWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_PaniniWarper_delete(cv::PaniniWarper* instance) {
			delete instance;
	}
	
	void cv_PlaneWarper_create_const_float(const cv::PlaneWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::PlaneWarper* cv_PlaneWarper_defaultNew_const() {
			cv::PlaneWarper* ret = new cv::PlaneWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_PlaneWarper_to_WarperCreator(cv::PlaneWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_PlaneWarper_delete(cv::PlaneWarper* instance) {
			delete instance;
	}
	
	void cv_PyRotationWarper_PyRotationWarper_String_float(const char* type, float scale, Result<cv::PyRotationWarper*>* ocvrs_return) {
		try {
			cv::PyRotationWarper* ret = new cv::PyRotationWarper(std::string(type), scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_PyRotationWarper(Result<cv::PyRotationWarper*>* ocvrs_return) {
		try {
			cv::PyRotationWarper* ret = new cv::PyRotationWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_warpPoint_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::PyRotationWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPoint(*pt, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_warpPointBackward_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::PyRotationWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPointBackward(*pt, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::PyRotationWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::PyRotationWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_warpBackward_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_Size_const__OutputArrayR(cv::PyRotationWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, cv::Size* dst_size, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->warpBackward(*src, *K, *R, interp_mode, border_mode, *dst_size, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_warpRoi_Size_const__InputArrayR_const__InputArrayR(cv::PyRotationWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->warpRoi(*src_size, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_getScale_const(const cv::PyRotationWarper* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_setScale_float(cv::PyRotationWarper* instance, float unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->setScale(unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_PyRotationWarper_delete(cv::PyRotationWarper* instance) {
			delete instance;
	}
	
	void cv_SphericalWarper_create_const_float(const cv::SphericalWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::SphericalWarper* cv_SphericalWarper_defaultNew_const() {
			cv::SphericalWarper* ret = new cv::SphericalWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_SphericalWarper_to_WarperCreator(cv::SphericalWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_SphericalWarper_delete(cv::SphericalWarper* instance) {
			delete instance;
	}
	
	void cv_StereographicWarper_create_const_float(const cv::StereographicWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::StereographicWarper* cv_StereographicWarper_defaultNew_const() {
			cv::StereographicWarper* ret = new cv::StereographicWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_StereographicWarper_to_WarperCreator(cv::StereographicWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_StereographicWarper_delete(cv::StereographicWarper* instance) {
			delete instance;
	}
	
	void cv_Stitcher_create_Mode(cv::Stitcher::Mode mode, Result<cv::Ptr<cv::Stitcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Stitcher> ret = cv::Stitcher::create(mode);
			Ok(new cv::Ptr<cv::Stitcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_create(Result<cv::Ptr<cv::Stitcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Stitcher> ret = cv::Stitcher::create();
			Ok(new cv::Ptr<cv::Stitcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_registrationResol_const(const cv::Stitcher* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->registrationResol();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setRegistrationResol_double(cv::Stitcher* instance, double resol_mpx, ResultVoid* ocvrs_return) {
		try {
			instance->setRegistrationResol(resol_mpx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_seamEstimationResol_const(const cv::Stitcher* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->seamEstimationResol();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setSeamEstimationResol_double(cv::Stitcher* instance, double resol_mpx, ResultVoid* ocvrs_return) {
		try {
			instance->setSeamEstimationResol(resol_mpx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_compositingResol_const(const cv::Stitcher* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->compositingResol();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setCompositingResol_double(cv::Stitcher* instance, double resol_mpx, ResultVoid* ocvrs_return) {
		try {
			instance->setCompositingResol(resol_mpx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_panoConfidenceThresh_const(const cv::Stitcher* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->panoConfidenceThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setPanoConfidenceThresh_double(cv::Stitcher* instance, double conf_thresh, ResultVoid* ocvrs_return) {
		try {
			instance->setPanoConfidenceThresh(conf_thresh);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_waveCorrection_const(const cv::Stitcher* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->waveCorrection();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setWaveCorrection_bool(cv::Stitcher* instance, bool flag, ResultVoid* ocvrs_return) {
		try {
			instance->setWaveCorrection(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_interpolationFlags_const(const cv::Stitcher* instance, Result<cv::InterpolationFlags>* ocvrs_return) {
		try {
			cv::InterpolationFlags ret = instance->interpolationFlags();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setInterpolationFlags_InterpolationFlags(cv::Stitcher* instance, cv::InterpolationFlags interp_flags, ResultVoid* ocvrs_return) {
		try {
			instance->setInterpolationFlags(interp_flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_waveCorrectKind_const(const cv::Stitcher* instance, Result<cv::detail::WaveCorrectKind>* ocvrs_return) {
		try {
			cv::detail::WaveCorrectKind ret = instance->waveCorrectKind();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setWaveCorrectKind_WaveCorrectKind(cv::Stitcher* instance, cv::detail::WaveCorrectKind kind, ResultVoid* ocvrs_return) {
		try {
			instance->setWaveCorrectKind(kind);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_featuresFinder(cv::Stitcher* instance, Result<cv::Ptr<cv::Feature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Feature2D> ret = instance->featuresFinder();
			Ok(new cv::Ptr<cv::Feature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_featuresFinder_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::Feature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Feature2D> ret = instance->featuresFinder();
			Ok(new cv::Ptr<cv::Feature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setFeaturesFinder_PtrLFeature2DG(cv::Stitcher* instance, cv::Ptr<cv::Feature2D>* features_finder, ResultVoid* ocvrs_return) {
		try {
			instance->setFeaturesFinder(*features_finder);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_featuresMatcher(cv::Stitcher* instance, Result<cv::Ptr<cv::detail::FeaturesMatcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::FeaturesMatcher> ret = instance->featuresMatcher();
			Ok(new cv::Ptr<cv::detail::FeaturesMatcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_featuresMatcher_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::detail::FeaturesMatcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::FeaturesMatcher> ret = instance->featuresMatcher();
			Ok(new cv::Ptr<cv::detail::FeaturesMatcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setFeaturesMatcher_PtrLFeaturesMatcherG(cv::Stitcher* instance, cv::Ptr<cv::detail::FeaturesMatcher>* features_matcher, ResultVoid* ocvrs_return) {
		try {
			instance->setFeaturesMatcher(*features_matcher);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_matchingMask_const(const cv::Stitcher* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			const cv::UMat ret = instance->matchingMask();
			Ok(new const cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setMatchingMask_const_UMatR(cv::Stitcher* instance, const cv::UMat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setMatchingMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_bundleAdjuster(cv::Stitcher* instance, Result<cv::Ptr<cv::detail::BundleAdjusterBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::BundleAdjusterBase> ret = instance->bundleAdjuster();
			Ok(new cv::Ptr<cv::detail::BundleAdjusterBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_bundleAdjuster_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::detail::BundleAdjusterBase>*>* ocvrs_return) {
		try {
			const cv::Ptr<cv::detail::BundleAdjusterBase> ret = instance->bundleAdjuster();
			Ok(new const cv::Ptr<cv::detail::BundleAdjusterBase>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setBundleAdjuster_PtrLBundleAdjusterBaseG(cv::Stitcher* instance, cv::Ptr<cv::detail::BundleAdjusterBase>* bundle_adjuster, ResultVoid* ocvrs_return) {
		try {
			instance->setBundleAdjuster(*bundle_adjuster);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_estimator(cv::Stitcher* instance, Result<cv::Ptr<cv::detail::Estimator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::Estimator> ret = instance->estimator();
			Ok(new cv::Ptr<cv::detail::Estimator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_estimator_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::detail::Estimator>*>* ocvrs_return) {
		try {
			const cv::Ptr<cv::detail::Estimator> ret = instance->estimator();
			Ok(new const cv::Ptr<cv::detail::Estimator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setEstimator_PtrLEstimatorG(cv::Stitcher* instance, cv::Ptr<cv::detail::Estimator>* estimator, ResultVoid* ocvrs_return) {
		try {
			instance->setEstimator(*estimator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_warper(cv::Stitcher* instance, Result<cv::Ptr<cv::WarperCreator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::WarperCreator> ret = instance->warper();
			Ok(new cv::Ptr<cv::WarperCreator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_warper_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::WarperCreator>*>* ocvrs_return) {
		try {
			const cv::Ptr<cv::WarperCreator> ret = instance->warper();
			Ok(new const cv::Ptr<cv::WarperCreator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setWarper_PtrLWarperCreatorG(cv::Stitcher* instance, cv::Ptr<cv::WarperCreator>* creator, ResultVoid* ocvrs_return) {
		try {
			instance->setWarper(*creator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_exposureCompensator(cv::Stitcher* instance, Result<cv::Ptr<cv::detail::ExposureCompensator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::ExposureCompensator> ret = instance->exposureCompensator();
			Ok(new cv::Ptr<cv::detail::ExposureCompensator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_exposureCompensator_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::detail::ExposureCompensator>*>* ocvrs_return) {
		try {
			const cv::Ptr<cv::detail::ExposureCompensator> ret = instance->exposureCompensator();
			Ok(new const cv::Ptr<cv::detail::ExposureCompensator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setExposureCompensator_PtrLExposureCompensatorG(cv::Stitcher* instance, cv::Ptr<cv::detail::ExposureCompensator>* exposure_comp, ResultVoid* ocvrs_return) {
		try {
			instance->setExposureCompensator(*exposure_comp);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_seamFinder(cv::Stitcher* instance, Result<cv::Ptr<cv::detail::SeamFinder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::SeamFinder> ret = instance->seamFinder();
			Ok(new cv::Ptr<cv::detail::SeamFinder>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_seamFinder_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::detail::SeamFinder>*>* ocvrs_return) {
		try {
			const cv::Ptr<cv::detail::SeamFinder> ret = instance->seamFinder();
			Ok(new const cv::Ptr<cv::detail::SeamFinder>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setSeamFinder_PtrLSeamFinderG(cv::Stitcher* instance, cv::Ptr<cv::detail::SeamFinder>* seam_finder, ResultVoid* ocvrs_return) {
		try {
			instance->setSeamFinder(*seam_finder);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_blender(cv::Stitcher* instance, Result<cv::Ptr<cv::detail::Blender>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::Blender> ret = instance->blender();
			Ok(new cv::Ptr<cv::detail::Blender>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_blender_const(const cv::Stitcher* instance, Result<cv::Ptr<cv::detail::Blender>*>* ocvrs_return) {
		try {
			const cv::Ptr<cv::detail::Blender> ret = instance->blender();
			Ok(new const cv::Ptr<cv::detail::Blender>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setBlender_PtrLBlenderG(cv::Stitcher* instance, cv::Ptr<cv::detail::Blender>* b, ResultVoid* ocvrs_return) {
		try {
			instance->setBlender(*b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_estimateTransform_const__InputArrayR_const__InputArrayR(cv::Stitcher* instance, const cv::_InputArray* images, const cv::_InputArray* masks, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->estimateTransform(*images, *masks);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_estimateTransform_const__InputArrayR(cv::Stitcher* instance, const cv::_InputArray* images, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->estimateTransform(*images);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setTransform_const__InputArrayR_const_vectorLCameraParamsGR_const_vectorLintGR(cv::Stitcher* instance, const cv::_InputArray* images, const std::vector<cv::detail::CameraParams>* cameras, const std::vector<int>* component, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->setTransform(*images, *cameras, *component);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_setTransform_const__InputArrayR_const_vectorLCameraParamsGR(cv::Stitcher* instance, const cv::_InputArray* images, const std::vector<cv::detail::CameraParams>* cameras, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->setTransform(*images, *cameras);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_composePanorama_const__OutputArrayR(cv::Stitcher* instance, const cv::_OutputArray* pano, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->composePanorama(*pano);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_composePanorama_const__InputArrayR_const__OutputArrayR(cv::Stitcher* instance, const cv::_InputArray* images, const cv::_OutputArray* pano, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->composePanorama(*images, *pano);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_stitch_const__InputArrayR_const__OutputArrayR(cv::Stitcher* instance, const cv::_InputArray* images, const cv::_OutputArray* pano, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->stitch(*images, *pano);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_stitch_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::Stitcher* instance, const cv::_InputArray* images, const cv::_InputArray* masks, const cv::_OutputArray* pano, Result<cv::Stitcher::Status>* ocvrs_return) {
		try {
			cv::Stitcher::Status ret = instance->stitch(*images, *masks, *pano);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_component_const(const cv::Stitcher* instance, Result<std::vector<int>*>* ocvrs_return) {
		try {
			std::vector<int> ret = instance->component();
			Ok(new std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_cameras_const(const cv::Stitcher* instance, Result<std::vector<cv::detail::CameraParams>*>* ocvrs_return) {
		try {
			std::vector<cv::detail::CameraParams> ret = instance->cameras();
			Ok(new std::vector<cv::detail::CameraParams>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_workScale_const(const cv::Stitcher* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->workScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_Stitcher_resultMask_const(const cv::Stitcher* instance, Result<cv::UMat*>* ocvrs_return) {
		try {
			cv::UMat ret = instance->resultMask();
			Ok(new cv::UMat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Stitcher* cv_Stitcher_defaultNew_const() {
			cv::Stitcher* ret = new cv::Stitcher();
			return ret;
	}
	
	void cv_Stitcher_delete(cv::Stitcher* instance) {
			delete instance;
	}
	
	void cv_TransverseMercatorWarper_create_const_float(const cv::TransverseMercatorWarper* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::TransverseMercatorWarper* cv_TransverseMercatorWarper_defaultNew_const() {
			cv::TransverseMercatorWarper* ret = new cv::TransverseMercatorWarper();
			return ret;
	}
	
	cv::WarperCreator* cv_TransverseMercatorWarper_to_WarperCreator(cv::TransverseMercatorWarper* instance) {
			return dynamic_cast<cv::WarperCreator*>(instance);
	}
	
	void cv_TransverseMercatorWarper_delete(cv::TransverseMercatorWarper* instance) {
			delete instance;
	}
	
	void cv_WarperCreator_create_const_float(const cv::WarperCreator* instance, float scale, Result<cv::Ptr<cv::detail::RotationWarper>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::RotationWarper> ret = instance->create(scale);
			Ok(new cv::Ptr<cv::detail::RotationWarper>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::AffineWarper* cv_WarperCreator_to_AffineWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::AffineWarper*>(instance);
	}
	
	cv::CompressedRectilinearPortraitWarper* cv_WarperCreator_to_CompressedRectilinearPortraitWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::CompressedRectilinearPortraitWarper*>(instance);
	}
	
	cv::CompressedRectilinearWarper* cv_WarperCreator_to_CompressedRectilinearWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::CompressedRectilinearWarper*>(instance);
	}
	
	cv::CylindricalWarper* cv_WarperCreator_to_CylindricalWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::CylindricalWarper*>(instance);
	}
	
	cv::FisheyeWarper* cv_WarperCreator_to_FisheyeWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::FisheyeWarper*>(instance);
	}
	
	cv::MercatorWarper* cv_WarperCreator_to_MercatorWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::MercatorWarper*>(instance);
	}
	
	cv::PaniniPortraitWarper* cv_WarperCreator_to_PaniniPortraitWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::PaniniPortraitWarper*>(instance);
	}
	
	cv::PaniniWarper* cv_WarperCreator_to_PaniniWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::PaniniWarper*>(instance);
	}
	
	cv::PlaneWarper* cv_WarperCreator_to_PlaneWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::PlaneWarper*>(instance);
	}
	
	cv::SphericalWarper* cv_WarperCreator_to_SphericalWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::SphericalWarper*>(instance);
	}
	
	cv::StereographicWarper* cv_WarperCreator_to_StereographicWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::StereographicWarper*>(instance);
	}
	
	cv::TransverseMercatorWarper* cv_WarperCreator_to_TransverseMercatorWarper(cv::WarperCreator* instance) {
			return dynamic_cast<cv::TransverseMercatorWarper*>(instance);
	}
	
	void cv_WarperCreator_delete(cv::WarperCreator* instance) {
			delete instance;
	}
	
	void cv_detail_AffineBasedEstimator_AffineBasedEstimator(Result<cv::detail::AffineBasedEstimator*>* ocvrs_return) {
		try {
			cv::detail::AffineBasedEstimator* ret = new cv::detail::AffineBasedEstimator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::Estimator* cv_detail_AffineBasedEstimator_to_Detail_Estimator(cv::detail::AffineBasedEstimator* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_AffineBasedEstimator_delete(cv::detail::AffineBasedEstimator* instance) {
			delete instance;
	}
	
	void cv_detail_AffineBestOf2NearestMatcher_AffineBestOf2NearestMatcher_bool_bool_float_int(bool full_affine, bool try_use_gpu, float match_conf, int num_matches_thresh1, Result<cv::detail::AffineBestOf2NearestMatcher*>* ocvrs_return) {
		try {
			cv::detail::AffineBestOf2NearestMatcher* ret = new cv::detail::AffineBestOf2NearestMatcher(full_affine, try_use_gpu, match_conf, num_matches_thresh1);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineBestOf2NearestMatcher_AffineBestOf2NearestMatcher(Result<cv::detail::AffineBestOf2NearestMatcher*>* ocvrs_return) {
		try {
			cv::detail::AffineBestOf2NearestMatcher* ret = new cv::detail::AffineBestOf2NearestMatcher();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BestOf2NearestMatcher* cv_detail_AffineBestOf2NearestMatcher_to_Detail_BestOf2NearestMatcher(cv::detail::AffineBestOf2NearestMatcher* instance) {
			return dynamic_cast<cv::detail::BestOf2NearestMatcher*>(instance);
	}
	
	cv::detail::FeaturesMatcher* cv_detail_AffineBestOf2NearestMatcher_to_Detail_FeaturesMatcher(cv::detail::AffineBestOf2NearestMatcher* instance) {
			return dynamic_cast<cv::detail::FeaturesMatcher*>(instance);
	}
	
	void cv_detail_AffineBestOf2NearestMatcher_delete(cv::detail::AffineBestOf2NearestMatcher* instance) {
			delete instance;
	}
	
	void cv_detail_AffineWarper_AffineWarper_float(float scale, Result<cv::detail::AffineWarper*>* ocvrs_return) {
		try {
			cv::detail::AffineWarper* ret = new cv::detail::AffineWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineWarper_AffineWarper(Result<cv::detail::AffineWarper*>* ocvrs_return) {
		try {
			cv::detail::AffineWarper* ret = new cv::detail::AffineWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineWarper_warpPoint_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::detail::AffineWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* H, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPoint(*pt, *K, *H);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineWarper_warpPointBackward_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::detail::AffineWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* H, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPointBackward(*pt, *K, *H);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::AffineWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* H, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *H, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::AffineWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* H, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *H, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_AffineWarper_warpRoi_Size_const__InputArrayR_const__InputArrayR(cv::detail::AffineWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* H, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->warpRoi(*src_size, *K, *H);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::PlaneWarper* cv_detail_AffineWarper_to_Detail_PlaneWarper(cv::detail::AffineWarper* instance) {
			return dynamic_cast<cv::detail::PlaneWarper*>(instance);
	}
	
	cv::detail::RotationWarper* cv_detail_AffineWarper_to_Detail_RotationWarper(cv::detail::AffineWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_AffineWarper_delete(cv::detail::AffineWarper* instance) {
			delete instance;
	}
	
	void cv_detail_BestOf2NearestMatcher_BestOf2NearestMatcher_bool_float_int_int_double(bool try_use_gpu, float match_conf, int num_matches_thresh1, int num_matches_thresh2, double matches_confindece_thresh, Result<cv::detail::BestOf2NearestMatcher*>* ocvrs_return) {
		try {
			cv::detail::BestOf2NearestMatcher* ret = new cv::detail::BestOf2NearestMatcher(try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2, matches_confindece_thresh);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BestOf2NearestMatcher_BestOf2NearestMatcher(Result<cv::detail::BestOf2NearestMatcher*>* ocvrs_return) {
		try {
			cv::detail::BestOf2NearestMatcher* ret = new cv::detail::BestOf2NearestMatcher();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BestOf2NearestMatcher_collectGarbage(cv::detail::BestOf2NearestMatcher* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BestOf2NearestMatcher_create_bool_float_int_int_double(bool try_use_gpu, float match_conf, int num_matches_thresh1, int num_matches_thresh2, double matches_confindece_thresh, Result<cv::Ptr<cv::detail::BestOf2NearestMatcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::BestOf2NearestMatcher> ret = cv::detail::BestOf2NearestMatcher::create(try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2, matches_confindece_thresh);
			Ok(new cv::Ptr<cv::detail::BestOf2NearestMatcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BestOf2NearestMatcher_create(Result<cv::Ptr<cv::detail::BestOf2NearestMatcher>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::BestOf2NearestMatcher> ret = cv::detail::BestOf2NearestMatcher::create();
			Ok(new cv::Ptr<cv::detail::BestOf2NearestMatcher>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::AffineBestOf2NearestMatcher* cv_detail_BestOf2NearestMatcher_to_Detail_AffineBestOf2NearestMatcher(cv::detail::BestOf2NearestMatcher* instance) {
			return dynamic_cast<cv::detail::AffineBestOf2NearestMatcher*>(instance);
	}
	
	cv::detail::BestOf2NearestRangeMatcher* cv_detail_BestOf2NearestMatcher_to_Detail_BestOf2NearestRangeMatcher(cv::detail::BestOf2NearestMatcher* instance) {
			return dynamic_cast<cv::detail::BestOf2NearestRangeMatcher*>(instance);
	}
	
	cv::detail::FeaturesMatcher* cv_detail_BestOf2NearestMatcher_to_Detail_FeaturesMatcher(cv::detail::BestOf2NearestMatcher* instance) {
			return dynamic_cast<cv::detail::FeaturesMatcher*>(instance);
	}
	
	void cv_detail_BestOf2NearestMatcher_delete(cv::detail::BestOf2NearestMatcher* instance) {
			delete instance;
	}
	
	void cv_detail_BestOf2NearestRangeMatcher_BestOf2NearestRangeMatcher_int_bool_float_int_int(int range_width, bool try_use_gpu, float match_conf, int num_matches_thresh1, int num_matches_thresh2, Result<cv::detail::BestOf2NearestRangeMatcher*>* ocvrs_return) {
		try {
			cv::detail::BestOf2NearestRangeMatcher* ret = new cv::detail::BestOf2NearestRangeMatcher(range_width, try_use_gpu, match_conf, num_matches_thresh1, num_matches_thresh2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BestOf2NearestRangeMatcher_BestOf2NearestRangeMatcher(Result<cv::detail::BestOf2NearestRangeMatcher*>* ocvrs_return) {
		try {
			cv::detail::BestOf2NearestRangeMatcher* ret = new cv::detail::BestOf2NearestRangeMatcher();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BestOf2NearestMatcher* cv_detail_BestOf2NearestRangeMatcher_to_Detail_BestOf2NearestMatcher(cv::detail::BestOf2NearestRangeMatcher* instance) {
			return dynamic_cast<cv::detail::BestOf2NearestMatcher*>(instance);
	}
	
	cv::detail::FeaturesMatcher* cv_detail_BestOf2NearestRangeMatcher_to_Detail_FeaturesMatcher(cv::detail::BestOf2NearestRangeMatcher* instance) {
			return dynamic_cast<cv::detail::FeaturesMatcher*>(instance);
	}
	
	void cv_detail_BestOf2NearestRangeMatcher_delete(cv::detail::BestOf2NearestRangeMatcher* instance) {
			delete instance;
	}
	
	void cv_detail_Blender_createDefault_int_bool(int type, bool try_gpu, Result<cv::Ptr<cv::detail::Blender>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::Blender> ret = cv::detail::Blender::createDefault(type, try_gpu);
			Ok(new cv::Ptr<cv::detail::Blender>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Blender_createDefault_int(int type, Result<cv::Ptr<cv::detail::Blender>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::Blender> ret = cv::detail::Blender::createDefault(type);
			Ok(new cv::Ptr<cv::detail::Blender>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Blender_prepare_const_vectorLPointGR_const_vectorLSizeGR(cv::detail::Blender* instance, const std::vector<cv::Point>* corners, const std::vector<cv::Size>* sizes, ResultVoid* ocvrs_return) {
		try {
			instance->prepare(*corners, *sizes);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Blender_prepare_Rect(cv::detail::Blender* instance, cv::Rect* dst_roi, ResultVoid* ocvrs_return) {
		try {
			instance->prepare(*dst_roi);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Blender_feed_const__InputArrayR_const__InputArrayR_Point(cv::detail::Blender* instance, const cv::_InputArray* img, const cv::_InputArray* mask, cv::Point* tl, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*img, *mask, *tl);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Blender_blend_const__InputOutputArrayR_const__InputOutputArrayR(cv::detail::Blender* instance, const cv::_InputOutputArray* dst, const cv::_InputOutputArray* dst_mask, ResultVoid* ocvrs_return) {
		try {
			instance->blend(*dst, *dst_mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::Blender* cv_detail_Blender_defaultNew_const() {
			cv::detail::Blender* ret = new cv::detail::Blender();
			return ret;
	}
	
	cv::detail::FeatherBlender* cv_detail_Blender_to_Detail_FeatherBlender(cv::detail::Blender* instance) {
			return dynamic_cast<cv::detail::FeatherBlender*>(instance);
	}
	
	cv::detail::MultiBandBlender* cv_detail_Blender_to_Detail_MultiBandBlender(cv::detail::Blender* instance) {
			return dynamic_cast<cv::detail::MultiBandBlender*>(instance);
	}
	
	void cv_detail_Blender_delete(cv::detail::Blender* instance) {
			delete instance;
	}
	
	void cv_detail_BlocksChannelsCompensator_BlocksChannelsCompensator_int_int_int(int bl_width, int bl_height, int nr_feeds, Result<cv::detail::BlocksChannelsCompensator*>* ocvrs_return) {
		try {
			cv::detail::BlocksChannelsCompensator* ret = new cv::detail::BlocksChannelsCompensator(bl_width, bl_height, nr_feeds);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksChannelsCompensator_BlocksChannelsCompensator(Result<cv::detail::BlocksChannelsCompensator*>* ocvrs_return) {
		try {
			cv::detail::BlocksChannelsCompensator* ret = new cv::detail::BlocksChannelsCompensator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksChannelsCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::BlocksChannelsCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<std::pair<cv::UMat, unsigned char>>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BlocksCompensator* cv_detail_BlocksChannelsCompensator_to_Detail_BlocksCompensator(cv::detail::BlocksChannelsCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksCompensator*>(instance);
	}
	
	cv::detail::ExposureCompensator* cv_detail_BlocksChannelsCompensator_to_Detail_ExposureCompensator(cv::detail::BlocksChannelsCompensator* instance) {
			return dynamic_cast<cv::detail::ExposureCompensator*>(instance);
	}
	
	void cv_detail_BlocksChannelsCompensator_delete(cv::detail::BlocksChannelsCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_BlocksCompensator_apply_int_Point_const__InputOutputArrayR_const__InputArrayR(cv::detail::BlocksCompensator* instance, int index, cv::Point* corner, const cv::_InputOutputArray* image, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(index, *corner, *image, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_getMatGains_vectorLMatGR(cv::detail::BlocksCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->getMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_setMatGains_vectorLMatGR(cv::detail::BlocksCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->setMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_setNrFeeds_int(cv::detail::BlocksCompensator* instance, int nr_feeds, ResultVoid* ocvrs_return) {
		try {
			instance->setNrFeeds(nr_feeds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_getNrFeeds(cv::detail::BlocksCompensator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNrFeeds();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_setSimilarityThreshold_double(cv::detail::BlocksCompensator* instance, double similarity_threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setSimilarityThreshold(similarity_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_getSimilarityThreshold_const(const cv::detail::BlocksCompensator* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSimilarityThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_setBlockSize_int_int(cv::detail::BlocksCompensator* instance, int width, int height, ResultVoid* ocvrs_return) {
		try {
			instance->setBlockSize(width, height);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_setBlockSize_Size(cv::detail::BlocksCompensator* instance, cv::Size* size, ResultVoid* ocvrs_return) {
		try {
			instance->setBlockSize(*size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_getBlockSize_const(const cv::detail::BlocksCompensator* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getBlockSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_setNrGainsFilteringIterations_int(cv::detail::BlocksCompensator* instance, int nr_iterations, ResultVoid* ocvrs_return) {
		try {
			instance->setNrGainsFilteringIterations(nr_iterations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksCompensator_getNrGainsFilteringIterations_const(const cv::detail::BlocksCompensator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNrGainsFilteringIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BlocksChannelsCompensator* cv_detail_BlocksCompensator_to_Detail_BlocksChannelsCompensator(cv::detail::BlocksCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksChannelsCompensator*>(instance);
	}
	
	cv::detail::BlocksGainCompensator* cv_detail_BlocksCompensator_to_Detail_BlocksGainCompensator(cv::detail::BlocksCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksGainCompensator*>(instance);
	}
	
	cv::detail::ExposureCompensator* cv_detail_BlocksCompensator_to_Detail_ExposureCompensator(cv::detail::BlocksCompensator* instance) {
			return dynamic_cast<cv::detail::ExposureCompensator*>(instance);
	}
	
	void cv_detail_BlocksCompensator_delete(cv::detail::BlocksCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_BlocksGainCompensator_BlocksGainCompensator_int_int(int bl_width, int bl_height, Result<cv::detail::BlocksGainCompensator*>* ocvrs_return) {
		try {
			cv::detail::BlocksGainCompensator* ret = new cv::detail::BlocksGainCompensator(bl_width, bl_height);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksGainCompensator_BlocksGainCompensator(Result<cv::detail::BlocksGainCompensator*>* ocvrs_return) {
		try {
			cv::detail::BlocksGainCompensator* ret = new cv::detail::BlocksGainCompensator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksGainCompensator_BlocksGainCompensator_int_int_int(int bl_width, int bl_height, int nr_feeds, Result<cv::detail::BlocksGainCompensator*>* ocvrs_return) {
		try {
			cv::detail::BlocksGainCompensator* ret = new cv::detail::BlocksGainCompensator(bl_width, bl_height, nr_feeds);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksGainCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::BlocksGainCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<std::pair<cv::UMat, unsigned char>>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksGainCompensator_apply_int_Point_const__InputOutputArrayR_const__InputArrayR(cv::detail::BlocksGainCompensator* instance, int index, cv::Point* corner, const cv::_InputOutputArray* image, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(index, *corner, *image, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksGainCompensator_getMatGains_vectorLMatGR(cv::detail::BlocksGainCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->getMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BlocksGainCompensator_setMatGains_vectorLMatGR(cv::detail::BlocksGainCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->setMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BlocksCompensator* cv_detail_BlocksGainCompensator_to_Detail_BlocksCompensator(cv::detail::BlocksGainCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksCompensator*>(instance);
	}
	
	cv::detail::ExposureCompensator* cv_detail_BlocksGainCompensator_to_Detail_ExposureCompensator(cv::detail::BlocksGainCompensator* instance) {
			return dynamic_cast<cv::detail::ExposureCompensator*>(instance);
	}
	
	void cv_detail_BlocksGainCompensator_delete(cv::detail::BlocksGainCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_BundleAdjusterAffine_BundleAdjusterAffine(Result<cv::detail::BundleAdjusterAffine*>* ocvrs_return) {
		try {
			cv::detail::BundleAdjusterAffine* ret = new cv::detail::BundleAdjusterAffine();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BundleAdjusterBase* cv_detail_BundleAdjusterAffine_to_Detail_BundleAdjusterBase(cv::detail::BundleAdjusterAffine* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterBase*>(instance);
	}
	
	cv::detail::Estimator* cv_detail_BundleAdjusterAffine_to_Detail_Estimator(cv::detail::BundleAdjusterAffine* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_BundleAdjusterAffine_delete(cv::detail::BundleAdjusterAffine* instance) {
			delete instance;
	}
	
	void cv_detail_BundleAdjusterAffinePartial_BundleAdjusterAffinePartial(Result<cv::detail::BundleAdjusterAffinePartial*>* ocvrs_return) {
		try {
			cv::detail::BundleAdjusterAffinePartial* ret = new cv::detail::BundleAdjusterAffinePartial();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BundleAdjusterBase* cv_detail_BundleAdjusterAffinePartial_to_Detail_BundleAdjusterBase(cv::detail::BundleAdjusterAffinePartial* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterBase*>(instance);
	}
	
	cv::detail::Estimator* cv_detail_BundleAdjusterAffinePartial_to_Detail_Estimator(cv::detail::BundleAdjusterAffinePartial* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_BundleAdjusterAffinePartial_delete(cv::detail::BundleAdjusterAffinePartial* instance) {
			delete instance;
	}
	
	void cv_detail_BundleAdjusterBase_refinementMask_const(const cv::detail::BundleAdjusterBase* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->refinementMask();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BundleAdjusterBase_setRefinementMask_const_MatR(cv::detail::BundleAdjusterBase* instance, const cv::Mat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->setRefinementMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BundleAdjusterBase_confThresh_const(const cv::detail::BundleAdjusterBase* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->confThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BundleAdjusterBase_setConfThresh_double(cv::detail::BundleAdjusterBase* instance, double conf_thresh, ResultVoid* ocvrs_return) {
		try {
			instance->setConfThresh(conf_thresh);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BundleAdjusterBase_termCriteria(cv::detail::BundleAdjusterBase* instance, Result<cv::TermCriteria>* ocvrs_return) {
		try {
			cv::TermCriteria ret = instance->termCriteria();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_BundleAdjusterBase_setTermCriteria_const_TermCriteriaR(cv::detail::BundleAdjusterBase* instance, const cv::TermCriteria* term_criteria, ResultVoid* ocvrs_return) {
		try {
			instance->setTermCriteria(*term_criteria);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BundleAdjusterAffine* cv_detail_BundleAdjusterBase_to_Detail_BundleAdjusterAffine(cv::detail::BundleAdjusterBase* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterAffine*>(instance);
	}
	
	cv::detail::BundleAdjusterAffinePartial* cv_detail_BundleAdjusterBase_to_Detail_BundleAdjusterAffinePartial(cv::detail::BundleAdjusterBase* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterAffinePartial*>(instance);
	}
	
	cv::detail::BundleAdjusterRay* cv_detail_BundleAdjusterBase_to_Detail_BundleAdjusterRay(cv::detail::BundleAdjusterBase* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterRay*>(instance);
	}
	
	cv::detail::BundleAdjusterReproj* cv_detail_BundleAdjusterBase_to_Detail_BundleAdjusterReproj(cv::detail::BundleAdjusterBase* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterReproj*>(instance);
	}
	
	cv::detail::NoBundleAdjuster* cv_detail_BundleAdjusterBase_to_Detail_NoBundleAdjuster(cv::detail::BundleAdjusterBase* instance) {
			return dynamic_cast<cv::detail::NoBundleAdjuster*>(instance);
	}
	
	cv::detail::Estimator* cv_detail_BundleAdjusterBase_to_Detail_Estimator(cv::detail::BundleAdjusterBase* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_BundleAdjusterBase_delete(cv::detail::BundleAdjusterBase* instance) {
			delete instance;
	}
	
	void cv_detail_BundleAdjusterRay_BundleAdjusterRay(Result<cv::detail::BundleAdjusterRay*>* ocvrs_return) {
		try {
			cv::detail::BundleAdjusterRay* ret = new cv::detail::BundleAdjusterRay();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BundleAdjusterBase* cv_detail_BundleAdjusterRay_to_Detail_BundleAdjusterBase(cv::detail::BundleAdjusterRay* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterBase*>(instance);
	}
	
	cv::detail::Estimator* cv_detail_BundleAdjusterRay_to_Detail_Estimator(cv::detail::BundleAdjusterRay* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_BundleAdjusterRay_delete(cv::detail::BundleAdjusterRay* instance) {
			delete instance;
	}
	
	void cv_detail_BundleAdjusterReproj_BundleAdjusterReproj(Result<cv::detail::BundleAdjusterReproj*>* ocvrs_return) {
		try {
			cv::detail::BundleAdjusterReproj* ret = new cv::detail::BundleAdjusterReproj();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BundleAdjusterBase* cv_detail_BundleAdjusterReproj_to_Detail_BundleAdjusterBase(cv::detail::BundleAdjusterReproj* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterBase*>(instance);
	}
	
	cv::detail::Estimator* cv_detail_BundleAdjusterReproj_to_Detail_Estimator(cv::detail::BundleAdjusterReproj* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_BundleAdjusterReproj_delete(cv::detail::BundleAdjusterReproj* instance) {
			delete instance;
	}
	
	void cv_detail_CameraParams_CameraParams(Result<cv::detail::CameraParams*>* ocvrs_return) {
		try {
			cv::detail::CameraParams* ret = new cv::detail::CameraParams();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CameraParams_CameraParams_const_CameraParamsR(const cv::detail::CameraParams* other, Result<cv::detail::CameraParams*>* ocvrs_return) {
		try {
			cv::detail::CameraParams* ret = new cv::detail::CameraParams(*other);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CameraParams_operatorST_const_CameraParamsR(cv::detail::CameraParams* instance, const cv::detail::CameraParams* other, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*other);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CameraParams_K_const(const cv::detail::CameraParams* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->K();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CameraParams* cv_detail_CameraParams_implicitClone_const(const cv::detail::CameraParams* instance) {
			return new cv::detail::CameraParams(*instance);
	}
	
	double cv_detail_CameraParams_propFocal_const(const cv::detail::CameraParams* instance) {
			double ret = instance->focal;
			return ret;
	}
	
	void cv_detail_CameraParams_propFocal_const_double(cv::detail::CameraParams* instance, const double val) {
			instance->focal = val;
	}
	
	double cv_detail_CameraParams_propAspect_const(const cv::detail::CameraParams* instance) {
			double ret = instance->aspect;
			return ret;
	}
	
	void cv_detail_CameraParams_propAspect_const_double(cv::detail::CameraParams* instance, const double val) {
			instance->aspect = val;
	}
	
	double cv_detail_CameraParams_propPpx_const(const cv::detail::CameraParams* instance) {
			double ret = instance->ppx;
			return ret;
	}
	
	void cv_detail_CameraParams_propPpx_const_double(cv::detail::CameraParams* instance, const double val) {
			instance->ppx = val;
	}
	
	double cv_detail_CameraParams_propPpy_const(const cv::detail::CameraParams* instance) {
			double ret = instance->ppy;
			return ret;
	}
	
	void cv_detail_CameraParams_propPpy_const_double(cv::detail::CameraParams* instance, const double val) {
			instance->ppy = val;
	}
	
	cv::Mat* cv_detail_CameraParams_propR_const(const cv::detail::CameraParams* instance) {
			cv::Mat ret = instance->R;
			return new cv::Mat(ret);
	}
	
	void cv_detail_CameraParams_propR_const_Mat(cv::detail::CameraParams* instance, const cv::Mat* val) {
			instance->R = *val;
	}
	
	cv::Mat* cv_detail_CameraParams_propT_const(const cv::detail::CameraParams* instance) {
			cv::Mat ret = instance->t;
			return new cv::Mat(ret);
	}
	
	void cv_detail_CameraParams_propT_const_Mat(cv::detail::CameraParams* instance, const cv::Mat* val) {
			instance->t = *val;
	}
	
	void cv_detail_CameraParams_delete(cv::detail::CameraParams* instance) {
			delete instance;
	}
	
	void cv_detail_ChannelsCompensator_ChannelsCompensator_int(int nr_feeds, Result<cv::detail::ChannelsCompensator*>* ocvrs_return) {
		try {
			cv::detail::ChannelsCompensator* ret = new cv::detail::ChannelsCompensator(nr_feeds);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_ChannelsCompensator(Result<cv::detail::ChannelsCompensator*>* ocvrs_return) {
		try {
			cv::detail::ChannelsCompensator* ret = new cv::detail::ChannelsCompensator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::ChannelsCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<std::pair<cv::UMat, unsigned char>>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_apply_int_Point_const__InputOutputArrayR_const__InputArrayR(cv::detail::ChannelsCompensator* instance, int index, cv::Point* corner, const cv::_InputOutputArray* image, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(index, *corner, *image, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_getMatGains_vectorLMatGR(cv::detail::ChannelsCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->getMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_setMatGains_vectorLMatGR(cv::detail::ChannelsCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->setMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_setNrFeeds_int(cv::detail::ChannelsCompensator* instance, int nr_feeds, ResultVoid* ocvrs_return) {
		try {
			instance->setNrFeeds(nr_feeds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_getNrFeeds(cv::detail::ChannelsCompensator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNrFeeds();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_setSimilarityThreshold_double(cv::detail::ChannelsCompensator* instance, double similarity_threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setSimilarityThreshold(similarity_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_getSimilarityThreshold_const(const cv::detail::ChannelsCompensator* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSimilarityThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ChannelsCompensator_gains_const(const cv::detail::ChannelsCompensator* instance, Result<std::vector<cv::Scalar>*>* ocvrs_return) {
		try {
			std::vector<cv::Scalar> ret = instance->gains();
			Ok(new std::vector<cv::Scalar>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::ExposureCompensator* cv_detail_ChannelsCompensator_to_Detail_ExposureCompensator(cv::detail::ChannelsCompensator* instance) {
			return dynamic_cast<cv::detail::ExposureCompensator*>(instance);
	}
	
	void cv_detail_ChannelsCompensator_delete(cv::detail::ChannelsCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_CompressedRectilinearPortraitProjector_mapForward_float_float_floatR_floatR(cv::detail::CompressedRectilinearPortraitProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CompressedRectilinearPortraitProjector_mapBackward_float_float_floatR_floatR(cv::detail::CompressedRectilinearPortraitProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CompressedRectilinearPortraitProjector* cv_detail_CompressedRectilinearPortraitProjector_defaultNew_const() {
			cv::detail::CompressedRectilinearPortraitProjector* ret = new cv::detail::CompressedRectilinearPortraitProjector();
			return ret;
	}
	
	float cv_detail_CompressedRectilinearPortraitProjector_propA_const(const cv::detail::CompressedRectilinearPortraitProjector* instance) {
			float ret = instance->a;
			return ret;
	}
	
	void cv_detail_CompressedRectilinearPortraitProjector_propA_const_float(cv::detail::CompressedRectilinearPortraitProjector* instance, const float val) {
			instance->a = val;
	}
	
	float cv_detail_CompressedRectilinearPortraitProjector_propB_const(const cv::detail::CompressedRectilinearPortraitProjector* instance) {
			float ret = instance->b;
			return ret;
	}
	
	void cv_detail_CompressedRectilinearPortraitProjector_propB_const_float(cv::detail::CompressedRectilinearPortraitProjector* instance, const float val) {
			instance->b = val;
	}
	
	cv::detail::ProjectorBase* cv_detail_CompressedRectilinearPortraitProjector_to_Detail_ProjectorBase(cv::detail::CompressedRectilinearPortraitProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_CompressedRectilinearPortraitProjector_delete(cv::detail::CompressedRectilinearPortraitProjector* instance) {
			delete instance;
	}
	
	void cv_detail_CompressedRectilinearPortraitWarper_CompressedRectilinearPortraitWarper_float_float_float(float scale, float A, float B, Result<cv::detail::CompressedRectilinearPortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::CompressedRectilinearPortraitWarper* ret = new cv::detail::CompressedRectilinearPortraitWarper(scale, A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CompressedRectilinearPortraitWarper_CompressedRectilinearPortraitWarper_float(float scale, Result<cv::detail::CompressedRectilinearPortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::CompressedRectilinearPortraitWarper* ret = new cv::detail::CompressedRectilinearPortraitWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_CompressedRectilinearPortraitWarper_to_Detail_RotationWarper(cv::detail::CompressedRectilinearPortraitWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_CompressedRectilinearPortraitWarper_delete(cv::detail::CompressedRectilinearPortraitWarper* instance) {
			delete instance;
	}
	
	void cv_detail_CompressedRectilinearProjector_mapForward_float_float_floatR_floatR(cv::detail::CompressedRectilinearProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CompressedRectilinearProjector_mapBackward_float_float_floatR_floatR(cv::detail::CompressedRectilinearProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CompressedRectilinearProjector* cv_detail_CompressedRectilinearProjector_defaultNew_const() {
			cv::detail::CompressedRectilinearProjector* ret = new cv::detail::CompressedRectilinearProjector();
			return ret;
	}
	
	float cv_detail_CompressedRectilinearProjector_propA_const(const cv::detail::CompressedRectilinearProjector* instance) {
			float ret = instance->a;
			return ret;
	}
	
	void cv_detail_CompressedRectilinearProjector_propA_const_float(cv::detail::CompressedRectilinearProjector* instance, const float val) {
			instance->a = val;
	}
	
	float cv_detail_CompressedRectilinearProjector_propB_const(const cv::detail::CompressedRectilinearProjector* instance) {
			float ret = instance->b;
			return ret;
	}
	
	void cv_detail_CompressedRectilinearProjector_propB_const_float(cv::detail::CompressedRectilinearProjector* instance, const float val) {
			instance->b = val;
	}
	
	cv::detail::ProjectorBase* cv_detail_CompressedRectilinearProjector_to_Detail_ProjectorBase(cv::detail::CompressedRectilinearProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_CompressedRectilinearProjector_delete(cv::detail::CompressedRectilinearProjector* instance) {
			delete instance;
	}
	
	void cv_detail_CompressedRectilinearWarper_CompressedRectilinearWarper_float_float_float(float scale, float A, float B, Result<cv::detail::CompressedRectilinearWarper*>* ocvrs_return) {
		try {
			cv::detail::CompressedRectilinearWarper* ret = new cv::detail::CompressedRectilinearWarper(scale, A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CompressedRectilinearWarper_CompressedRectilinearWarper_float(float scale, Result<cv::detail::CompressedRectilinearWarper*>* ocvrs_return) {
		try {
			cv::detail::CompressedRectilinearWarper* ret = new cv::detail::CompressedRectilinearWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_CompressedRectilinearWarper_to_Detail_RotationWarper(cv::detail::CompressedRectilinearWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_CompressedRectilinearWarper_delete(cv::detail::CompressedRectilinearWarper* instance) {
			delete instance;
	}
	
	void cv_detail_CylindricalPortraitProjector_mapForward_float_float_floatR_floatR(cv::detail::CylindricalPortraitProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalPortraitProjector_mapBackward_float_float_floatR_floatR(cv::detail::CylindricalPortraitProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CylindricalPortraitProjector* cv_detail_CylindricalPortraitProjector_defaultNew_const() {
			cv::detail::CylindricalPortraitProjector* ret = new cv::detail::CylindricalPortraitProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_CylindricalPortraitProjector_to_Detail_ProjectorBase(cv::detail::CylindricalPortraitProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_CylindricalPortraitProjector_delete(cv::detail::CylindricalPortraitProjector* instance) {
			delete instance;
	}
	
	void cv_detail_CylindricalPortraitWarper_CylindricalPortraitWarper_float(float scale, Result<cv::detail::CylindricalPortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::CylindricalPortraitWarper* ret = new cv::detail::CylindricalPortraitWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_CylindricalPortraitWarper_to_Detail_RotationWarper(cv::detail::CylindricalPortraitWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_CylindricalPortraitWarper_delete(cv::detail::CylindricalPortraitWarper* instance) {
			delete instance;
	}
	
	void cv_detail_CylindricalProjector_mapForward_float_float_floatR_floatR(cv::detail::CylindricalProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalProjector_mapBackward_float_float_floatR_floatR(cv::detail::CylindricalProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CylindricalProjector* cv_detail_CylindricalProjector_defaultNew_const() {
			cv::detail::CylindricalProjector* ret = new cv::detail::CylindricalProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_CylindricalProjector_to_Detail_ProjectorBase(cv::detail::CylindricalProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_CylindricalProjector_delete(cv::detail::CylindricalProjector* instance) {
			delete instance;
	}
	
	void cv_detail_CylindricalWarper_CylindricalWarper_float(float scale, Result<cv::detail::CylindricalWarper*>* ocvrs_return) {
		try {
			cv::detail::CylindricalWarper* ret = new cv::detail::CylindricalWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::CylindricalWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::CylindricalWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CylindricalWarperGpu* cv_detail_CylindricalWarper_to_Detail_CylindricalWarperGpu(cv::detail::CylindricalWarper* instance) {
			return dynamic_cast<cv::detail::CylindricalWarperGpu*>(instance);
	}
	
	cv::detail::RotationWarper* cv_detail_CylindricalWarper_to_Detail_RotationWarper(cv::detail::CylindricalWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_CylindricalWarper_delete(cv::detail::CylindricalWarper* instance) {
			delete instance;
	}
	
	void cv_detail_CylindricalWarperGpu_CylindricalWarperGpu_float(float scale, Result<cv::detail::CylindricalWarperGpu*>* ocvrs_return) {
		try {
			cv::detail::CylindricalWarperGpu* ret = new cv::detail::CylindricalWarperGpu(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::CylindricalWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalWarperGpu_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::CylindricalWarperGpu* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_GpuMatR_GpuMatR(cv::detail::CylindricalWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, cv::cuda::GpuMat* xmap, cv::cuda::GpuMat* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_CylindricalWarperGpu_warp_const_GpuMatR_const__InputArrayR_const__InputArrayR_int_int_GpuMatR(cv::detail::CylindricalWarperGpu* instance, const cv::cuda::GpuMat* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, cv::cuda::GpuMat* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::CylindricalWarper* cv_detail_CylindricalWarperGpu_to_Detail_CylindricalWarper(cv::detail::CylindricalWarperGpu* instance) {
			return dynamic_cast<cv::detail::CylindricalWarper*>(instance);
	}
	
	cv::detail::RotationWarper* cv_detail_CylindricalWarperGpu_to_Detail_RotationWarper(cv::detail::CylindricalWarperGpu* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_CylindricalWarperGpu_delete(cv::detail::CylindricalWarperGpu* instance) {
			delete instance;
	}
	
	void cv_detail_DisjointSets_DisjointSets_int(int elem_count, Result<cv::detail::DisjointSets*>* ocvrs_return) {
		try {
			cv::detail::DisjointSets* ret = new cv::detail::DisjointSets(elem_count);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DisjointSets_DisjointSets(Result<cv::detail::DisjointSets*>* ocvrs_return) {
		try {
			cv::detail::DisjointSets* ret = new cv::detail::DisjointSets();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DisjointSets_createOneElemSets_int(cv::detail::DisjointSets* instance, int elem_count, ResultVoid* ocvrs_return) {
		try {
			instance->createOneElemSets(elem_count);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DisjointSets_findSetByElem_int(cv::detail::DisjointSets* instance, int elem, Result<int>* ocvrs_return) {
		try {
			int ret = instance->findSetByElem(elem);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DisjointSets_mergeSets_int_int(cv::detail::DisjointSets* instance, int set1, int set2, Result<int>* ocvrs_return) {
		try {
			int ret = instance->mergeSets(set1, set2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	std::vector<int>* cv_detail_DisjointSets_propParent_const(const cv::detail::DisjointSets* instance) {
			std::vector<int> ret = instance->parent;
			return new std::vector<int>(ret);
	}
	
	void cv_detail_DisjointSets_propParent_const_vectorLintG(cv::detail::DisjointSets* instance, const std::vector<int>* val) {
			instance->parent = *val;
	}
	
	std::vector<int>* cv_detail_DisjointSets_propSize_const(const cv::detail::DisjointSets* instance) {
			std::vector<int> ret = instance->size;
			return new std::vector<int>(ret);
	}
	
	void cv_detail_DisjointSets_propSize_const_vectorLintG(cv::detail::DisjointSets* instance, const std::vector<int>* val) {
			instance->size = *val;
	}
	
	void cv_detail_DisjointSets_delete(cv::detail::DisjointSets* instance) {
			delete instance;
	}
	
	void cv_detail_DpSeamFinder_DpSeamFinder_CostFunction(cv::detail::DpSeamFinder::CostFunction costFunc, Result<cv::detail::DpSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::DpSeamFinder* ret = new cv::detail::DpSeamFinder(costFunc);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DpSeamFinder_DpSeamFinder(Result<cv::detail::DpSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::DpSeamFinder* ret = new cv::detail::DpSeamFinder();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DpSeamFinder_DpSeamFinder_String(const char* costFunc, Result<cv::detail::DpSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::DpSeamFinder* ret = new cv::detail::DpSeamFinder(std::string(costFunc));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DpSeamFinder_costFunction_const(const cv::detail::DpSeamFinder* instance, Result<cv::detail::DpSeamFinder::CostFunction>* ocvrs_return) {
		try {
			cv::detail::DpSeamFinder::CostFunction ret = instance->costFunction();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DpSeamFinder_setCostFunction_CostFunction(cv::detail::DpSeamFinder* instance, cv::detail::DpSeamFinder::CostFunction val, ResultVoid* ocvrs_return) {
		try {
			instance->setCostFunction(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DpSeamFinder_setCostFunction_String(cv::detail::DpSeamFinder* instance, const char* val, ResultVoid* ocvrs_return) {
		try {
			instance->setCostFunction(std::string(val));
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_DpSeamFinder_find_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::DpSeamFinder* instance, const std::vector<cv::UMat>* src, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->find(*src, *corners, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::SeamFinder* cv_detail_DpSeamFinder_to_Detail_SeamFinder(cv::detail::DpSeamFinder* instance) {
			return dynamic_cast<cv::detail::SeamFinder*>(instance);
	}
	
	void cv_detail_DpSeamFinder_delete(cv::detail::DpSeamFinder* instance) {
			delete instance;
	}
	
	void cv_detail_Estimator_operator___const_vectorLImageFeaturesGR_const_vectorLMatchesInfoGR_vectorLCameraParamsGR(cv::detail::Estimator* instance, const std::vector<cv::detail::ImageFeatures>* features, const std::vector<cv::detail::MatchesInfo>* pairwise_matches, std::vector<cv::detail::CameraParams>* cameras, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator()(*features, *pairwise_matches, *cameras);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::AffineBasedEstimator* cv_detail_Estimator_to_Detail_AffineBasedEstimator(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::AffineBasedEstimator*>(instance);
	}
	
	cv::detail::BundleAdjusterAffine* cv_detail_Estimator_to_Detail_BundleAdjusterAffine(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterAffine*>(instance);
	}
	
	cv::detail::BundleAdjusterAffinePartial* cv_detail_Estimator_to_Detail_BundleAdjusterAffinePartial(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterAffinePartial*>(instance);
	}
	
	cv::detail::BundleAdjusterBase* cv_detail_Estimator_to_Detail_BundleAdjusterBase(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterBase*>(instance);
	}
	
	cv::detail::BundleAdjusterRay* cv_detail_Estimator_to_Detail_BundleAdjusterRay(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterRay*>(instance);
	}
	
	cv::detail::BundleAdjusterReproj* cv_detail_Estimator_to_Detail_BundleAdjusterReproj(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterReproj*>(instance);
	}
	
	cv::detail::HomographyBasedEstimator* cv_detail_Estimator_to_Detail_HomographyBasedEstimator(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::HomographyBasedEstimator*>(instance);
	}
	
	cv::detail::NoBundleAdjuster* cv_detail_Estimator_to_Detail_NoBundleAdjuster(cv::detail::Estimator* instance) {
			return dynamic_cast<cv::detail::NoBundleAdjuster*>(instance);
	}
	
	void cv_detail_Estimator_delete(cv::detail::Estimator* instance) {
			delete instance;
	}
	
	void cv_detail_ExposureCompensator_createDefault_int(int type, Result<cv::Ptr<cv::detail::ExposureCompensator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::ExposureCompensator> ret = cv::detail::ExposureCompensator::createDefault(type);
			Ok(new cv::Ptr<cv::detail::ExposureCompensator>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLUMatGR(cv::detail::ExposureCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::ExposureCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<std::pair<cv::UMat, unsigned char>>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_apply_int_Point_const__InputOutputArrayR_const__InputArrayR(cv::detail::ExposureCompensator* instance, int index, cv::Point* corner, const cv::_InputOutputArray* image, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(index, *corner, *image, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_getMatGains_vectorLMatGR(cv::detail::ExposureCompensator* instance, std::vector<cv::Mat>* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->getMatGains(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_setMatGains_vectorLMatGR(cv::detail::ExposureCompensator* instance, std::vector<cv::Mat>* unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->setMatGains(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_setUpdateGain_bool(cv::detail::ExposureCompensator* instance, bool b, ResultVoid* ocvrs_return) {
		try {
			instance->setUpdateGain(b);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ExposureCompensator_getUpdateGain(cv::detail::ExposureCompensator* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getUpdateGain();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BlocksChannelsCompensator* cv_detail_ExposureCompensator_to_Detail_BlocksChannelsCompensator(cv::detail::ExposureCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksChannelsCompensator*>(instance);
	}
	
	cv::detail::BlocksCompensator* cv_detail_ExposureCompensator_to_Detail_BlocksCompensator(cv::detail::ExposureCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksCompensator*>(instance);
	}
	
	cv::detail::BlocksGainCompensator* cv_detail_ExposureCompensator_to_Detail_BlocksGainCompensator(cv::detail::ExposureCompensator* instance) {
			return dynamic_cast<cv::detail::BlocksGainCompensator*>(instance);
	}
	
	cv::detail::ChannelsCompensator* cv_detail_ExposureCompensator_to_Detail_ChannelsCompensator(cv::detail::ExposureCompensator* instance) {
			return dynamic_cast<cv::detail::ChannelsCompensator*>(instance);
	}
	
	cv::detail::GainCompensator* cv_detail_ExposureCompensator_to_Detail_GainCompensator(cv::detail::ExposureCompensator* instance) {
			return dynamic_cast<cv::detail::GainCompensator*>(instance);
	}
	
	cv::detail::NoExposureCompensator* cv_detail_ExposureCompensator_to_Detail_NoExposureCompensator(cv::detail::ExposureCompensator* instance) {
			return dynamic_cast<cv::detail::NoExposureCompensator*>(instance);
	}
	
	void cv_detail_ExposureCompensator_delete(cv::detail::ExposureCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_FeatherBlender_FeatherBlender_float(float sharpness, Result<cv::detail::FeatherBlender*>* ocvrs_return) {
		try {
			cv::detail::FeatherBlender* ret = new cv::detail::FeatherBlender(sharpness);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_FeatherBlender(Result<cv::detail::FeatherBlender*>* ocvrs_return) {
		try {
			cv::detail::FeatherBlender* ret = new cv::detail::FeatherBlender();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_sharpness_const(const cv::detail::FeatherBlender* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->sharpness();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_setSharpness_float(cv::detail::FeatherBlender* instance, float val, ResultVoid* ocvrs_return) {
		try {
			instance->setSharpness(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_prepare_Rect(cv::detail::FeatherBlender* instance, cv::Rect* dst_roi, ResultVoid* ocvrs_return) {
		try {
			instance->prepare(*dst_roi);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_feed_const__InputArrayR_const__InputArrayR_Point(cv::detail::FeatherBlender* instance, const cv::_InputArray* img, const cv::_InputArray* mask, cv::Point* tl, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*img, *mask, *tl);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_blend_const__InputOutputArrayR_const__InputOutputArrayR(cv::detail::FeatherBlender* instance, const cv::_InputOutputArray* dst, const cv::_InputOutputArray* dst_mask, ResultVoid* ocvrs_return) {
		try {
			instance->blend(*dst, *dst_mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeatherBlender_createWeightMaps_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::FeatherBlender* instance, const std::vector<cv::UMat>* masks, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* weight_maps, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->createWeightMaps(*masks, *corners, *weight_maps);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::Blender* cv_detail_FeatherBlender_to_Detail_Blender(cv::detail::FeatherBlender* instance) {
			return dynamic_cast<cv::detail::Blender*>(instance);
	}
	
	void cv_detail_FeatherBlender_delete(cv::detail::FeatherBlender* instance) {
			delete instance;
	}
	
	void cv_detail_FeaturesMatcher_operator___const_ImageFeaturesR_const_ImageFeaturesR_MatchesInfoR(cv::detail::FeaturesMatcher* instance, const cv::detail::ImageFeatures* features1, const cv::detail::ImageFeatures* features2, cv::detail::MatchesInfo* matches_info, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*features1, *features2, *matches_info);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeaturesMatcher_operator___const_vectorLImageFeaturesGR_vectorLMatchesInfoGR_const_UMatR(cv::detail::FeaturesMatcher* instance, const std::vector<cv::detail::ImageFeatures>* features, std::vector<cv::detail::MatchesInfo>* pairwise_matches, const cv::UMat* mask, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*features, *pairwise_matches, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeaturesMatcher_operator___const_vectorLImageFeaturesGR_vectorLMatchesInfoGR(cv::detail::FeaturesMatcher* instance, const std::vector<cv::detail::ImageFeatures>* features, std::vector<cv::detail::MatchesInfo>* pairwise_matches, ResultVoid* ocvrs_return) {
		try {
			instance->operator()(*features, *pairwise_matches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeaturesMatcher_isThreadSafe_const(const cv::detail::FeaturesMatcher* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isThreadSafe();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FeaturesMatcher_collectGarbage(cv::detail::FeaturesMatcher* instance, ResultVoid* ocvrs_return) {
		try {
			instance->collectGarbage();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::AffineBestOf2NearestMatcher* cv_detail_FeaturesMatcher_to_Detail_AffineBestOf2NearestMatcher(cv::detail::FeaturesMatcher* instance) {
			return dynamic_cast<cv::detail::AffineBestOf2NearestMatcher*>(instance);
	}
	
	cv::detail::BestOf2NearestMatcher* cv_detail_FeaturesMatcher_to_Detail_BestOf2NearestMatcher(cv::detail::FeaturesMatcher* instance) {
			return dynamic_cast<cv::detail::BestOf2NearestMatcher*>(instance);
	}
	
	cv::detail::BestOf2NearestRangeMatcher* cv_detail_FeaturesMatcher_to_Detail_BestOf2NearestRangeMatcher(cv::detail::FeaturesMatcher* instance) {
			return dynamic_cast<cv::detail::BestOf2NearestRangeMatcher*>(instance);
	}
	
	void cv_detail_FeaturesMatcher_delete(cv::detail::FeaturesMatcher* instance) {
			delete instance;
	}
	
	void cv_detail_FisheyeProjector_mapForward_float_float_floatR_floatR(cv::detail::FisheyeProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_FisheyeProjector_mapBackward_float_float_floatR_floatR(cv::detail::FisheyeProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::FisheyeProjector* cv_detail_FisheyeProjector_defaultNew_const() {
			cv::detail::FisheyeProjector* ret = new cv::detail::FisheyeProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_FisheyeProjector_to_Detail_ProjectorBase(cv::detail::FisheyeProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_FisheyeProjector_delete(cv::detail::FisheyeProjector* instance) {
			delete instance;
	}
	
	void cv_detail_FisheyeWarper_FisheyeWarper_float(float scale, Result<cv::detail::FisheyeWarper*>* ocvrs_return) {
		try {
			cv::detail::FisheyeWarper* ret = new cv::detail::FisheyeWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_FisheyeWarper_to_Detail_RotationWarper(cv::detail::FisheyeWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_FisheyeWarper_delete(cv::detail::FisheyeWarper* instance) {
			delete instance;
	}
	
	void cv_detail_GainCompensator_GainCompensator(Result<cv::detail::GainCompensator*>* ocvrs_return) {
		try {
			cv::detail::GainCompensator* ret = new cv::detail::GainCompensator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_GainCompensator_int(int nr_feeds, Result<cv::detail::GainCompensator*>* ocvrs_return) {
		try {
			cv::detail::GainCompensator* ret = new cv::detail::GainCompensator(nr_feeds);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::GainCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<std::pair<cv::UMat, unsigned char>>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_singleFeed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::GainCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, const std::vector<std::pair<cv::UMat, unsigned char>>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->singleFeed(*corners, *images, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_apply_int_Point_const__InputOutputArrayR_const__InputArrayR(cv::detail::GainCompensator* instance, int index, cv::Point* corner, const cv::_InputOutputArray* image, const cv::_InputArray* mask, ResultVoid* ocvrs_return) {
		try {
			instance->apply(index, *corner, *image, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_getMatGains_vectorLMatGR(cv::detail::GainCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->getMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_setMatGains_vectorLMatGR(cv::detail::GainCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->setMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_setNrFeeds_int(cv::detail::GainCompensator* instance, int nr_feeds, ResultVoid* ocvrs_return) {
		try {
			instance->setNrFeeds(nr_feeds);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_getNrFeeds(cv::detail::GainCompensator* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNrFeeds();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_setSimilarityThreshold_double(cv::detail::GainCompensator* instance, double similarity_threshold, ResultVoid* ocvrs_return) {
		try {
			instance->setSimilarityThreshold(similarity_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_getSimilarityThreshold_const(const cv::detail::GainCompensator* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getSimilarityThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_prepareSimilarityMask_const_vectorLPointGR_const_vectorLUMatGR(cv::detail::GainCompensator* instance, const std::vector<cv::Point>* corners, const std::vector<cv::UMat>* images, ResultVoid* ocvrs_return) {
		try {
			instance->prepareSimilarityMask(*corners, *images);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GainCompensator_gains_const(const cv::detail::GainCompensator* instance, Result<std::vector<double>*>* ocvrs_return) {
		try {
			std::vector<double> ret = instance->gains();
			Ok(new std::vector<double>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::ExposureCompensator* cv_detail_GainCompensator_to_Detail_ExposureCompensator(cv::detail::GainCompensator* instance) {
			return dynamic_cast<cv::detail::ExposureCompensator*>(instance);
	}
	
	void cv_detail_GainCompensator_delete(cv::detail::GainCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_Graph_Graph_int(int num_vertices, Result<cv::detail::Graph*>* ocvrs_return) {
		try {
			cv::detail::Graph* ret = new cv::detail::Graph(num_vertices);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Graph_Graph(Result<cv::detail::Graph*>* ocvrs_return) {
		try {
			cv::detail::Graph* ret = new cv::detail::Graph();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Graph_create_int(cv::detail::Graph* instance, int num_vertices, ResultVoid* ocvrs_return) {
		try {
			instance->create(num_vertices);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Graph_numVertices_const(const cv::detail::Graph* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->numVertices();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Graph_addEdge_int_int_float(cv::detail::Graph* instance, int from, int to, float weight, ResultVoid* ocvrs_return) {
		try {
			instance->addEdge(from, to, weight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_Graph_delete(cv::detail::Graph* instance) {
			delete instance;
	}
	
	void cv_detail_GraphCutSeamFinder_GraphCutSeamFinder_int_float_float(int cost_type, float terminal_cost, float bad_region_penalty, Result<cv::detail::GraphCutSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::GraphCutSeamFinder* ret = new cv::detail::GraphCutSeamFinder(cost_type, terminal_cost, bad_region_penalty);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GraphCutSeamFinder_GraphCutSeamFinder(Result<cv::detail::GraphCutSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::GraphCutSeamFinder* ret = new cv::detail::GraphCutSeamFinder();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GraphCutSeamFinder_GraphCutSeamFinder_String_float_float(const char* cost_type, float terminal_cost, float bad_region_penalty, Result<cv::detail::GraphCutSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::GraphCutSeamFinder* ret = new cv::detail::GraphCutSeamFinder(std::string(cost_type), terminal_cost, bad_region_penalty);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GraphCutSeamFinder_GraphCutSeamFinder_String(const char* cost_type, Result<cv::detail::GraphCutSeamFinder*>* ocvrs_return) {
		try {
			cv::detail::GraphCutSeamFinder* ret = new cv::detail::GraphCutSeamFinder(std::string(cost_type));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GraphCutSeamFinder_find_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::GraphCutSeamFinder* instance, const std::vector<cv::UMat>* src, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->find(*src, *corners, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::GraphCutSeamFinderBase* cv_detail_GraphCutSeamFinder_to_Detail_GraphCutSeamFinderBase(cv::detail::GraphCutSeamFinder* instance) {
			return dynamic_cast<cv::detail::GraphCutSeamFinderBase*>(instance);
	}
	
	cv::detail::SeamFinder* cv_detail_GraphCutSeamFinder_to_Detail_SeamFinder(cv::detail::GraphCutSeamFinder* instance) {
			return dynamic_cast<cv::detail::SeamFinder*>(instance);
	}
	
	void cv_detail_GraphCutSeamFinder_delete(cv::detail::GraphCutSeamFinder* instance) {
			delete instance;
	}
	
	cv::detail::GraphCutSeamFinderBase* cv_detail_GraphCutSeamFinderBase_defaultNew_const() {
			cv::detail::GraphCutSeamFinderBase* ret = new cv::detail::GraphCutSeamFinderBase();
			return ret;
	}
	
	void cv_detail_GraphCutSeamFinderBase_delete(cv::detail::GraphCutSeamFinderBase* instance) {
			delete instance;
	}
	
	void cv_detail_GraphEdge_GraphEdge_int_int_float(int from, int to, float weight, Result<cv::detail::GraphEdge*>* ocvrs_return) {
		try {
			cv::detail::GraphEdge* ret = new cv::detail::GraphEdge(from, to, weight);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GraphEdge_operatorL_const_const_GraphEdgeR(const cv::detail::GraphEdge* instance, const cv::detail::GraphEdge* other, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator<(*other);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_GraphEdge_operatorG_const_const_GraphEdgeR(const cv::detail::GraphEdge* instance, const cv::detail::GraphEdge* other, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator>(*other);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	int cv_detail_GraphEdge_propFrom_const(const cv::detail::GraphEdge* instance) {
			int ret = instance->from;
			return ret;
	}
	
	void cv_detail_GraphEdge_propFrom_const_int(cv::detail::GraphEdge* instance, const int val) {
			instance->from = val;
	}
	
	int cv_detail_GraphEdge_propTo_const(const cv::detail::GraphEdge* instance) {
			int ret = instance->to;
			return ret;
	}
	
	void cv_detail_GraphEdge_propTo_const_int(cv::detail::GraphEdge* instance, const int val) {
			instance->to = val;
	}
	
	float cv_detail_GraphEdge_propWeight_const(const cv::detail::GraphEdge* instance) {
			float ret = instance->weight;
			return ret;
	}
	
	void cv_detail_GraphEdge_propWeight_const_float(cv::detail::GraphEdge* instance, const float val) {
			instance->weight = val;
	}
	
	void cv_detail_GraphEdge_delete(cv::detail::GraphEdge* instance) {
			delete instance;
	}
	
	void cv_detail_HomographyBasedEstimator_HomographyBasedEstimator_bool(bool is_focals_estimated, Result<cv::detail::HomographyBasedEstimator*>* ocvrs_return) {
		try {
			cv::detail::HomographyBasedEstimator* ret = new cv::detail::HomographyBasedEstimator(is_focals_estimated);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_HomographyBasedEstimator_HomographyBasedEstimator(Result<cv::detail::HomographyBasedEstimator*>* ocvrs_return) {
		try {
			cv::detail::HomographyBasedEstimator* ret = new cv::detail::HomographyBasedEstimator();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::Estimator* cv_detail_HomographyBasedEstimator_to_Detail_Estimator(cv::detail::HomographyBasedEstimator* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_HomographyBasedEstimator_delete(cv::detail::HomographyBasedEstimator* instance) {
			delete instance;
	}
	
	void cv_detail_ImageFeatures_getKeypoints(cv::detail::ImageFeatures* instance, Result<std::vector<cv::KeyPoint>*>* ocvrs_return) {
		try {
			std::vector<cv::KeyPoint> ret = instance->getKeypoints();
			Ok(new std::vector<cv::KeyPoint>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::ImageFeatures* cv_detail_ImageFeatures_implicitClone_const(const cv::detail::ImageFeatures* instance) {
			return new cv::detail::ImageFeatures(*instance);
	}
	
	cv::detail::ImageFeatures* cv_detail_ImageFeatures_defaultNew_const() {
			cv::detail::ImageFeatures* ret = new cv::detail::ImageFeatures();
			return ret;
	}
	
	int cv_detail_ImageFeatures_propImg_idx_const(const cv::detail::ImageFeatures* instance) {
			int ret = instance->img_idx;
			return ret;
	}
	
	void cv_detail_ImageFeatures_propImg_idx_const_int(cv::detail::ImageFeatures* instance, const int val) {
			instance->img_idx = val;
	}
	
	void cv_detail_ImageFeatures_propImg_size_const(const cv::detail::ImageFeatures* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->img_size;
			*ocvrs_return = ret;
	}
	
	void cv_detail_ImageFeatures_propImg_size_const_Size(cv::detail::ImageFeatures* instance, const cv::Size* val) {
			instance->img_size = *val;
	}
	
	std::vector<cv::KeyPoint>* cv_detail_ImageFeatures_propKeypoints_const(const cv::detail::ImageFeatures* instance) {
			std::vector<cv::KeyPoint> ret = instance->keypoints;
			return new std::vector<cv::KeyPoint>(ret);
	}
	
	void cv_detail_ImageFeatures_propKeypoints_const_vectorLKeyPointG(cv::detail::ImageFeatures* instance, const std::vector<cv::KeyPoint>* val) {
			instance->keypoints = *val;
	}
	
	cv::UMat* cv_detail_ImageFeatures_propDescriptors_const(const cv::detail::ImageFeatures* instance) {
			cv::UMat ret = instance->descriptors;
			return new cv::UMat(ret);
	}
	
	void cv_detail_ImageFeatures_propDescriptors_const_UMat(cv::detail::ImageFeatures* instance, const cv::UMat* val) {
			instance->descriptors = *val;
	}
	
	void cv_detail_ImageFeatures_delete(cv::detail::ImageFeatures* instance) {
			delete instance;
	}
	
	void cv_detail_MatchesInfo_MatchesInfo(Result<cv::detail::MatchesInfo*>* ocvrs_return) {
		try {
			cv::detail::MatchesInfo* ret = new cv::detail::MatchesInfo();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MatchesInfo_MatchesInfo_const_MatchesInfoR(const cv::detail::MatchesInfo* other, Result<cv::detail::MatchesInfo*>* ocvrs_return) {
		try {
			cv::detail::MatchesInfo* ret = new cv::detail::MatchesInfo(*other);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MatchesInfo_operatorST_const_MatchesInfoR(cv::detail::MatchesInfo* instance, const cv::detail::MatchesInfo* other, ResultVoid* ocvrs_return) {
		try {
			instance->operator=(*other);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MatchesInfo_getMatches(cv::detail::MatchesInfo* instance, Result<std::vector<cv::DMatch>*>* ocvrs_return) {
		try {
			std::vector<cv::DMatch> ret = instance->getMatches();
			Ok(new std::vector<cv::DMatch>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MatchesInfo_getInliers(cv::detail::MatchesInfo* instance, Result<std::vector<unsigned char>*>* ocvrs_return) {
		try {
			std::vector<unsigned char> ret = instance->getInliers();
			Ok(new std::vector<unsigned char>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::MatchesInfo* cv_detail_MatchesInfo_implicitClone_const(const cv::detail::MatchesInfo* instance) {
			return new cv::detail::MatchesInfo(*instance);
	}
	
	int cv_detail_MatchesInfo_propSrc_img_idx_const(const cv::detail::MatchesInfo* instance) {
			int ret = instance->src_img_idx;
			return ret;
	}
	
	void cv_detail_MatchesInfo_propSrc_img_idx_const_int(cv::detail::MatchesInfo* instance, const int val) {
			instance->src_img_idx = val;
	}
	
	int cv_detail_MatchesInfo_propDst_img_idx_const(const cv::detail::MatchesInfo* instance) {
			int ret = instance->dst_img_idx;
			return ret;
	}
	
	void cv_detail_MatchesInfo_propDst_img_idx_const_int(cv::detail::MatchesInfo* instance, const int val) {
			instance->dst_img_idx = val;
	}
	
	std::vector<cv::DMatch>* cv_detail_MatchesInfo_propMatches_const(const cv::detail::MatchesInfo* instance) {
			std::vector<cv::DMatch> ret = instance->matches;
			return new std::vector<cv::DMatch>(ret);
	}
	
	void cv_detail_MatchesInfo_propMatches_const_vectorLDMatchG(cv::detail::MatchesInfo* instance, const std::vector<cv::DMatch>* val) {
			instance->matches = *val;
	}
	
	std::vector<unsigned char>* cv_detail_MatchesInfo_propInliers_mask_const(const cv::detail::MatchesInfo* instance) {
			std::vector<unsigned char> ret = instance->inliers_mask;
			return new std::vector<unsigned char>(ret);
	}
	
	void cv_detail_MatchesInfo_propInliers_mask_const_vectorLunsigned_charG(cv::detail::MatchesInfo* instance, const std::vector<unsigned char>* val) {
			instance->inliers_mask = *val;
	}
	
	int cv_detail_MatchesInfo_propNum_inliers_const(const cv::detail::MatchesInfo* instance) {
			int ret = instance->num_inliers;
			return ret;
	}
	
	void cv_detail_MatchesInfo_propNum_inliers_const_int(cv::detail::MatchesInfo* instance, const int val) {
			instance->num_inliers = val;
	}
	
	cv::Mat* cv_detail_MatchesInfo_propH_const(const cv::detail::MatchesInfo* instance) {
			cv::Mat ret = instance->H;
			return new cv::Mat(ret);
	}
	
	void cv_detail_MatchesInfo_propH_const_Mat(cv::detail::MatchesInfo* instance, const cv::Mat* val) {
			instance->H = *val;
	}
	
	double cv_detail_MatchesInfo_propConfidence_const(const cv::detail::MatchesInfo* instance) {
			double ret = instance->confidence;
			return ret;
	}
	
	void cv_detail_MatchesInfo_propConfidence_const_double(cv::detail::MatchesInfo* instance, const double val) {
			instance->confidence = val;
	}
	
	void cv_detail_MatchesInfo_delete(cv::detail::MatchesInfo* instance) {
			delete instance;
	}
	
	void cv_detail_MercatorProjector_mapForward_float_float_floatR_floatR(cv::detail::MercatorProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MercatorProjector_mapBackward_float_float_floatR_floatR(cv::detail::MercatorProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::MercatorProjector* cv_detail_MercatorProjector_defaultNew_const() {
			cv::detail::MercatorProjector* ret = new cv::detail::MercatorProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_MercatorProjector_to_Detail_ProjectorBase(cv::detail::MercatorProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_MercatorProjector_delete(cv::detail::MercatorProjector* instance) {
			delete instance;
	}
	
	void cv_detail_MercatorWarper_MercatorWarper_float(float scale, Result<cv::detail::MercatorWarper*>* ocvrs_return) {
		try {
			cv::detail::MercatorWarper* ret = new cv::detail::MercatorWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_MercatorWarper_to_Detail_RotationWarper(cv::detail::MercatorWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_MercatorWarper_delete(cv::detail::MercatorWarper* instance) {
			delete instance;
	}
	
	void cv_detail_MultiBandBlender_MultiBandBlender_int_int_int(int try_gpu, int num_bands, int weight_type, Result<cv::detail::MultiBandBlender*>* ocvrs_return) {
		try {
			cv::detail::MultiBandBlender* ret = new cv::detail::MultiBandBlender(try_gpu, num_bands, weight_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MultiBandBlender_MultiBandBlender(Result<cv::detail::MultiBandBlender*>* ocvrs_return) {
		try {
			cv::detail::MultiBandBlender* ret = new cv::detail::MultiBandBlender();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MultiBandBlender_numBands_const(const cv::detail::MultiBandBlender* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->numBands();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MultiBandBlender_setNumBands_int(cv::detail::MultiBandBlender* instance, int val, ResultVoid* ocvrs_return) {
		try {
			instance->setNumBands(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MultiBandBlender_prepare_Rect(cv::detail::MultiBandBlender* instance, cv::Rect* dst_roi, ResultVoid* ocvrs_return) {
		try {
			instance->prepare(*dst_roi);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MultiBandBlender_feed_const__InputArrayR_const__InputArrayR_Point(cv::detail::MultiBandBlender* instance, const cv::_InputArray* img, const cv::_InputArray* mask, cv::Point* tl, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*img, *mask, *tl);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_MultiBandBlender_blend_const__InputOutputArrayR_const__InputOutputArrayR(cv::detail::MultiBandBlender* instance, const cv::_InputOutputArray* dst, const cv::_InputOutputArray* dst_mask, ResultVoid* ocvrs_return) {
		try {
			instance->blend(*dst, *dst_mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::Blender* cv_detail_MultiBandBlender_to_Detail_Blender(cv::detail::MultiBandBlender* instance) {
			return dynamic_cast<cv::detail::Blender*>(instance);
	}
	
	void cv_detail_MultiBandBlender_delete(cv::detail::MultiBandBlender* instance) {
			delete instance;
	}
	
	void cv_detail_NoBundleAdjuster_NoBundleAdjuster(Result<cv::detail::NoBundleAdjuster*>* ocvrs_return) {
		try {
			cv::detail::NoBundleAdjuster* ret = new cv::detail::NoBundleAdjuster();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::BundleAdjusterBase* cv_detail_NoBundleAdjuster_to_Detail_BundleAdjusterBase(cv::detail::NoBundleAdjuster* instance) {
			return dynamic_cast<cv::detail::BundleAdjusterBase*>(instance);
	}
	
	cv::detail::Estimator* cv_detail_NoBundleAdjuster_to_Detail_Estimator(cv::detail::NoBundleAdjuster* instance) {
			return dynamic_cast<cv::detail::Estimator*>(instance);
	}
	
	void cv_detail_NoBundleAdjuster_delete(cv::detail::NoBundleAdjuster* instance) {
			delete instance;
	}
	
	void cv_detail_NoExposureCompensator_feed_const_vectorLPointGR_const_vectorLUMatGR_const_vectorLpairLcv_UMat__unsigned_charGGR(cv::detail::NoExposureCompensator* instance, const std::vector<cv::Point>* unnamed, const std::vector<cv::UMat>* unnamed_1, const std::vector<std::pair<cv::UMat, unsigned char>>* unnamed_2, ResultVoid* ocvrs_return) {
		try {
			instance->feed(*unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_NoExposureCompensator_apply_int_Point_const__InputOutputArrayR_const__InputArrayR(cv::detail::NoExposureCompensator* instance, int unnamed, cv::Point* unnamed_1, const cv::_InputOutputArray* unnamed_2, const cv::_InputArray* unnamed_3, ResultVoid* ocvrs_return) {
		try {
			instance->apply(unnamed, *unnamed_1, *unnamed_2, *unnamed_3);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_NoExposureCompensator_getMatGains_vectorLMatGR(cv::detail::NoExposureCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->getMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_NoExposureCompensator_setMatGains_vectorLMatGR(cv::detail::NoExposureCompensator* instance, std::vector<cv::Mat>* umv, ResultVoid* ocvrs_return) {
		try {
			instance->setMatGains(*umv);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::NoExposureCompensator* cv_detail_NoExposureCompensator_defaultNew_const() {
			cv::detail::NoExposureCompensator* ret = new cv::detail::NoExposureCompensator();
			return ret;
	}
	
	cv::detail::ExposureCompensator* cv_detail_NoExposureCompensator_to_Detail_ExposureCompensator(cv::detail::NoExposureCompensator* instance) {
			return dynamic_cast<cv::detail::ExposureCompensator*>(instance);
	}
	
	void cv_detail_NoExposureCompensator_delete(cv::detail::NoExposureCompensator* instance) {
			delete instance;
	}
	
	void cv_detail_NoSeamFinder_find_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::NoSeamFinder* instance, const std::vector<cv::UMat>* unnamed, const std::vector<cv::Point>* unnamed_1, std::vector<cv::UMat>* unnamed_2, ResultVoid* ocvrs_return) {
		try {
			instance->find(*unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::NoSeamFinder* cv_detail_NoSeamFinder_defaultNew_const() {
			cv::detail::NoSeamFinder* ret = new cv::detail::NoSeamFinder();
			return ret;
	}
	
	cv::detail::SeamFinder* cv_detail_NoSeamFinder_to_Detail_SeamFinder(cv::detail::NoSeamFinder* instance) {
			return dynamic_cast<cv::detail::SeamFinder*>(instance);
	}
	
	void cv_detail_NoSeamFinder_delete(cv::detail::NoSeamFinder* instance) {
			delete instance;
	}
	
	void cv_detail_PairwiseSeamFinder_find_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::PairwiseSeamFinder* instance, const std::vector<cv::UMat>* src, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->find(*src, *corners, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::VoronoiSeamFinder* cv_detail_PairwiseSeamFinder_to_Detail_VoronoiSeamFinder(cv::detail::PairwiseSeamFinder* instance) {
			return dynamic_cast<cv::detail::VoronoiSeamFinder*>(instance);
	}
	
	cv::detail::SeamFinder* cv_detail_PairwiseSeamFinder_to_Detail_SeamFinder(cv::detail::PairwiseSeamFinder* instance) {
			return dynamic_cast<cv::detail::SeamFinder*>(instance);
	}
	
	void cv_detail_PairwiseSeamFinder_delete(cv::detail::PairwiseSeamFinder* instance) {
			delete instance;
	}
	
	void cv_detail_PaniniPortraitProjector_mapForward_float_float_floatR_floatR(cv::detail::PaniniPortraitProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PaniniPortraitProjector_mapBackward_float_float_floatR_floatR(cv::detail::PaniniPortraitProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::PaniniPortraitProjector* cv_detail_PaniniPortraitProjector_defaultNew_const() {
			cv::detail::PaniniPortraitProjector* ret = new cv::detail::PaniniPortraitProjector();
			return ret;
	}
	
	float cv_detail_PaniniPortraitProjector_propA_const(const cv::detail::PaniniPortraitProjector* instance) {
			float ret = instance->a;
			return ret;
	}
	
	void cv_detail_PaniniPortraitProjector_propA_const_float(cv::detail::PaniniPortraitProjector* instance, const float val) {
			instance->a = val;
	}
	
	float cv_detail_PaniniPortraitProjector_propB_const(const cv::detail::PaniniPortraitProjector* instance) {
			float ret = instance->b;
			return ret;
	}
	
	void cv_detail_PaniniPortraitProjector_propB_const_float(cv::detail::PaniniPortraitProjector* instance, const float val) {
			instance->b = val;
	}
	
	cv::detail::ProjectorBase* cv_detail_PaniniPortraitProjector_to_Detail_ProjectorBase(cv::detail::PaniniPortraitProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_PaniniPortraitProjector_delete(cv::detail::PaniniPortraitProjector* instance) {
			delete instance;
	}
	
	void cv_detail_PaniniPortraitWarper_PaniniPortraitWarper_float_float_float(float scale, float A, float B, Result<cv::detail::PaniniPortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::PaniniPortraitWarper* ret = new cv::detail::PaniniPortraitWarper(scale, A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PaniniPortraitWarper_PaniniPortraitWarper_float(float scale, Result<cv::detail::PaniniPortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::PaniniPortraitWarper* ret = new cv::detail::PaniniPortraitWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_PaniniPortraitWarper_to_Detail_RotationWarper(cv::detail::PaniniPortraitWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_PaniniPortraitWarper_delete(cv::detail::PaniniPortraitWarper* instance) {
			delete instance;
	}
	
	void cv_detail_PaniniProjector_mapForward_float_float_floatR_floatR(cv::detail::PaniniProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PaniniProjector_mapBackward_float_float_floatR_floatR(cv::detail::PaniniProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::PaniniProjector* cv_detail_PaniniProjector_defaultNew_const() {
			cv::detail::PaniniProjector* ret = new cv::detail::PaniniProjector();
			return ret;
	}
	
	float cv_detail_PaniniProjector_propA_const(const cv::detail::PaniniProjector* instance) {
			float ret = instance->a;
			return ret;
	}
	
	void cv_detail_PaniniProjector_propA_const_float(cv::detail::PaniniProjector* instance, const float val) {
			instance->a = val;
	}
	
	float cv_detail_PaniniProjector_propB_const(const cv::detail::PaniniProjector* instance) {
			float ret = instance->b;
			return ret;
	}
	
	void cv_detail_PaniniProjector_propB_const_float(cv::detail::PaniniProjector* instance, const float val) {
			instance->b = val;
	}
	
	cv::detail::ProjectorBase* cv_detail_PaniniProjector_to_Detail_ProjectorBase(cv::detail::PaniniProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_PaniniProjector_delete(cv::detail::PaniniProjector* instance) {
			delete instance;
	}
	
	void cv_detail_PaniniWarper_PaniniWarper_float_float_float(float scale, float A, float B, Result<cv::detail::PaniniWarper*>* ocvrs_return) {
		try {
			cv::detail::PaniniWarper* ret = new cv::detail::PaniniWarper(scale, A, B);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PaniniWarper_PaniniWarper_float(float scale, Result<cv::detail::PaniniWarper*>* ocvrs_return) {
		try {
			cv::detail::PaniniWarper* ret = new cv::detail::PaniniWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_PaniniWarper_to_Detail_RotationWarper(cv::detail::PaniniWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_PaniniWarper_delete(cv::detail::PaniniWarper* instance) {
			delete instance;
	}
	
	void cv_detail_PlanePortraitProjector_mapForward_float_float_floatR_floatR(cv::detail::PlanePortraitProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlanePortraitProjector_mapBackward_float_float_floatR_floatR(cv::detail::PlanePortraitProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::PlanePortraitProjector* cv_detail_PlanePortraitProjector_defaultNew_const() {
			cv::detail::PlanePortraitProjector* ret = new cv::detail::PlanePortraitProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_PlanePortraitProjector_to_Detail_ProjectorBase(cv::detail::PlanePortraitProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_PlanePortraitProjector_delete(cv::detail::PlanePortraitProjector* instance) {
			delete instance;
	}
	
	void cv_detail_PlanePortraitWarper_PlanePortraitWarper_float(float scale, Result<cv::detail::PlanePortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::PlanePortraitWarper* ret = new cv::detail::PlanePortraitWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_PlanePortraitWarper_to_Detail_RotationWarper(cv::detail::PlanePortraitWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_PlanePortraitWarper_delete(cv::detail::PlanePortraitWarper* instance) {
			delete instance;
	}
	
	void cv_detail_PlaneProjector_mapForward_float_float_floatR_floatR(cv::detail::PlaneProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneProjector_mapBackward_float_float_floatR_floatR(cv::detail::PlaneProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::PlaneProjector* cv_detail_PlaneProjector_defaultNew_const() {
			cv::detail::PlaneProjector* ret = new cv::detail::PlaneProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_PlaneProjector_to_Detail_ProjectorBase(cv::detail::PlaneProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_PlaneProjector_delete(cv::detail::PlaneProjector* instance) {
			delete instance;
	}
	
	void cv_detail_PlaneWarper_PlaneWarper_float(float scale, Result<cv::detail::PlaneWarper*>* ocvrs_return) {
		try {
			cv::detail::PlaneWarper* ret = new cv::detail::PlaneWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_PlaneWarper(Result<cv::detail::PlaneWarper*>* ocvrs_return) {
		try {
			cv::detail::PlaneWarper* ret = new cv::detail::PlaneWarper();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warpPoint_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::detail::PlaneWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPoint(*pt, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warpPoint_const_Point2fR_const__InputArrayR_const__InputArrayR_const__InputArrayR(cv::detail::PlaneWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPoint(*pt, *K, *R, *T);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warpPointBackward_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::detail::PlaneWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPointBackward(*pt, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warpPointBackward_const_Point2fR_const__InputArrayR_const__InputArrayR_const__InputArrayR(cv::detail::PlaneWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPointBackward(*pt, *K, *R, *T);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::PlaneWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *T, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::PlaneWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::PlaneWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::PlaneWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, *T, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warpRoi_Size_const__InputArrayR_const__InputArrayR(cv::detail::PlaneWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->warpRoi(*src_size, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarper_warpRoi_Size_const__InputArrayR_const__InputArrayR_const__InputArrayR(cv::detail::PlaneWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->warpRoi(*src_size, *K, *R, *T);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::AffineWarper* cv_detail_PlaneWarper_to_Detail_AffineWarper(cv::detail::PlaneWarper* instance) {
			return dynamic_cast<cv::detail::AffineWarper*>(instance);
	}
	
	cv::detail::PlaneWarperGpu* cv_detail_PlaneWarper_to_Detail_PlaneWarperGpu(cv::detail::PlaneWarper* instance) {
			return dynamic_cast<cv::detail::PlaneWarperGpu*>(instance);
	}
	
	cv::detail::RotationWarper* cv_detail_PlaneWarper_to_Detail_RotationWarper(cv::detail::PlaneWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_PlaneWarper_delete(cv::detail::PlaneWarper* instance) {
			delete instance;
	}
	
	void cv_detail_PlaneWarperGpu_PlaneWarperGpu_float(float scale, Result<cv::detail::PlaneWarperGpu*>* ocvrs_return) {
		try {
			cv::detail::PlaneWarperGpu* ret = new cv::detail::PlaneWarperGpu(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_PlaneWarperGpu(Result<cv::detail::PlaneWarperGpu*>* ocvrs_return) {
		try {
			cv::detail::PlaneWarperGpu* ret = new cv::detail::PlaneWarperGpu();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::PlaneWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::PlaneWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *T, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::PlaneWarperGpu* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::PlaneWarperGpu* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, *T, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_GpuMatR_GpuMatR(cv::detail::PlaneWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, cv::cuda::GpuMat* xmap, cv::cuda::GpuMat* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__InputArrayR_GpuMatR_GpuMatR(cv::detail::PlaneWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, cv::cuda::GpuMat* xmap, cv::cuda::GpuMat* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *T, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_warp_const_GpuMatR_const__InputArrayR_const__InputArrayR_int_int_GpuMatR(cv::detail::PlaneWarperGpu* instance, const cv::cuda::GpuMat* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, cv::cuda::GpuMat* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_PlaneWarperGpu_warp_const_GpuMatR_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_GpuMatR(cv::detail::PlaneWarperGpu* instance, const cv::cuda::GpuMat* src, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, int interp_mode, int border_mode, cv::cuda::GpuMat* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, *T, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::PlaneWarper* cv_detail_PlaneWarperGpu_to_Detail_PlaneWarper(cv::detail::PlaneWarperGpu* instance) {
			return dynamic_cast<cv::detail::PlaneWarper*>(instance);
	}
	
	cv::detail::RotationWarper* cv_detail_PlaneWarperGpu_to_Detail_RotationWarper(cv::detail::PlaneWarperGpu* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_PlaneWarperGpu_delete(cv::detail::PlaneWarperGpu* instance) {
			delete instance;
	}
	
	void cv_detail_ProjectorBase_setCameraParams_const__InputArrayR_const__InputArrayR_const__InputArrayR(cv::detail::ProjectorBase* instance, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_InputArray* T, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraParams(*K, *R, *T);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_ProjectorBase_setCameraParams(cv::detail::ProjectorBase* instance, ResultVoid* ocvrs_return) {
		try {
			instance->setCameraParams();
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::ProjectorBase* cv_detail_ProjectorBase_implicitClone_const(const cv::detail::ProjectorBase* instance) {
			return new cv::detail::ProjectorBase(*instance);
	}
	
	cv::detail::ProjectorBase* cv_detail_ProjectorBase_defaultNew_const() {
			cv::detail::ProjectorBase* ret = new cv::detail::ProjectorBase();
			return ret;
	}
	
	float cv_detail_ProjectorBase_propScale_const(const cv::detail::ProjectorBase* instance) {
			float ret = instance->scale;
			return ret;
	}
	
	void cv_detail_ProjectorBase_propScale_const_float(cv::detail::ProjectorBase* instance, const float val) {
			instance->scale = val;
	}
	
	const float** cv_detail_ProjectorBase_propK_const(const cv::detail::ProjectorBase* instance) {
			const float(*ret)[9] = &instance->k;
			return (const float**)ret;
	}
	
	float** cv_detail_ProjectorBase_propK(cv::detail::ProjectorBase* instance) {
			float(*ret)[9] = &instance->k;
			return (float**)ret;
	}
	
	const float** cv_detail_ProjectorBase_propRinv_const(const cv::detail::ProjectorBase* instance) {
			const float(*ret)[9] = &instance->rinv;
			return (const float**)ret;
	}
	
	float** cv_detail_ProjectorBase_propRinv(cv::detail::ProjectorBase* instance) {
			float(*ret)[9] = &instance->rinv;
			return (float**)ret;
	}
	
	const float** cv_detail_ProjectorBase_propR_kinv_const(const cv::detail::ProjectorBase* instance) {
			const float(*ret)[9] = &instance->r_kinv;
			return (const float**)ret;
	}
	
	float** cv_detail_ProjectorBase_propR_kinv(cv::detail::ProjectorBase* instance) {
			float(*ret)[9] = &instance->r_kinv;
			return (float**)ret;
	}
	
	const float** cv_detail_ProjectorBase_propK_rinv_const(const cv::detail::ProjectorBase* instance) {
			const float(*ret)[9] = &instance->k_rinv;
			return (const float**)ret;
	}
	
	float** cv_detail_ProjectorBase_propK_rinv(cv::detail::ProjectorBase* instance) {
			float(*ret)[9] = &instance->k_rinv;
			return (float**)ret;
	}
	
	const float** cv_detail_ProjectorBase_propT_const(const cv::detail::ProjectorBase* instance) {
			const float(*ret)[3] = &instance->t;
			return (const float**)ret;
	}
	
	float** cv_detail_ProjectorBase_propT(cv::detail::ProjectorBase* instance) {
			float(*ret)[3] = &instance->t;
			return (float**)ret;
	}
	
	void cv_detail_ProjectorBase_delete(cv::detail::ProjectorBase* instance) {
			delete instance;
	}
	
	void cv_detail_RotationWarper_warpPoint_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::detail::RotationWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPoint(*pt, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_warpPointBackward_const_Point2fR_const__InputArrayR_const__InputArrayR(cv::detail::RotationWarper* instance, const cv::Point2f* pt, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->warpPointBackward(*pt, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::RotationWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::RotationWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_warpBackward_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_Size_const__OutputArrayR(cv::detail::RotationWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, cv::Size* dst_size, const cv::_OutputArray* dst, ResultVoid* ocvrs_return) {
		try {
			instance->warpBackward(*src, *K, *R, interp_mode, border_mode, *dst_size, *dst);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_warpRoi_Size_const__InputArrayR_const__InputArrayR(cv::detail::RotationWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->warpRoi(*src_size, *K, *R);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_getScale_const(const cv::detail::RotationWarper* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScale();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_setScale_float(cv::detail::RotationWarper* instance, float unnamed, ResultVoid* ocvrs_return) {
		try {
			instance->setScale(unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_RotationWarper_delete(cv::detail::RotationWarper* instance) {
			delete instance;
	}
	
	void cv_detail_SeamFinder_find_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::SeamFinder* instance, const std::vector<cv::UMat>* src, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->find(*src, *corners, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SeamFinder_createDefault_int(int type, Result<cv::Ptr<cv::detail::SeamFinder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::detail::SeamFinder> ret = cv::detail::SeamFinder::createDefault(type);
			Ok(new cv::Ptr<cv::detail::SeamFinder>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::DpSeamFinder* cv_detail_SeamFinder_to_Detail_DpSeamFinder(cv::detail::SeamFinder* instance) {
			return dynamic_cast<cv::detail::DpSeamFinder*>(instance);
	}
	
	cv::detail::GraphCutSeamFinder* cv_detail_SeamFinder_to_Detail_GraphCutSeamFinder(cv::detail::SeamFinder* instance) {
			return dynamic_cast<cv::detail::GraphCutSeamFinder*>(instance);
	}
	
	cv::detail::NoSeamFinder* cv_detail_SeamFinder_to_Detail_NoSeamFinder(cv::detail::SeamFinder* instance) {
			return dynamic_cast<cv::detail::NoSeamFinder*>(instance);
	}
	
	cv::detail::PairwiseSeamFinder* cv_detail_SeamFinder_to_Detail_PairwiseSeamFinder(cv::detail::SeamFinder* instance) {
			return dynamic_cast<cv::detail::PairwiseSeamFinder*>(instance);
	}
	
	cv::detail::VoronoiSeamFinder* cv_detail_SeamFinder_to_Detail_VoronoiSeamFinder(cv::detail::SeamFinder* instance) {
			return dynamic_cast<cv::detail::VoronoiSeamFinder*>(instance);
	}
	
	void cv_detail_SeamFinder_delete(cv::detail::SeamFinder* instance) {
			delete instance;
	}
	
	void cv_detail_SphericalPortraitProjector_mapForward_float_float_floatR_floatR(cv::detail::SphericalPortraitProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalPortraitProjector_mapBackward_float_float_floatR_floatR(cv::detail::SphericalPortraitProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::SphericalPortraitProjector* cv_detail_SphericalPortraitProjector_defaultNew_const() {
			cv::detail::SphericalPortraitProjector* ret = new cv::detail::SphericalPortraitProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_SphericalPortraitProjector_to_Detail_ProjectorBase(cv::detail::SphericalPortraitProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_SphericalPortraitProjector_delete(cv::detail::SphericalPortraitProjector* instance) {
			delete instance;
	}
	
	void cv_detail_SphericalPortraitWarper_SphericalPortraitWarper_float(float scale, Result<cv::detail::SphericalPortraitWarper*>* ocvrs_return) {
		try {
			cv::detail::SphericalPortraitWarper* ret = new cv::detail::SphericalPortraitWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_SphericalPortraitWarper_to_Detail_RotationWarper(cv::detail::SphericalPortraitWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_SphericalPortraitWarper_delete(cv::detail::SphericalPortraitWarper* instance) {
			delete instance;
	}
	
	void cv_detail_SphericalProjector_mapForward_float_float_floatR_floatR(cv::detail::SphericalProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalProjector_mapBackward_float_float_floatR_floatR(cv::detail::SphericalProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::SphericalProjector* cv_detail_SphericalProjector_implicitClone_const(const cv::detail::SphericalProjector* instance) {
			return new cv::detail::SphericalProjector(*instance);
	}
	
	cv::detail::SphericalProjector* cv_detail_SphericalProjector_defaultNew_const() {
			cv::detail::SphericalProjector* ret = new cv::detail::SphericalProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_SphericalProjector_to_Detail_ProjectorBase(cv::detail::SphericalProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_SphericalProjector_delete(cv::detail::SphericalProjector* instance) {
			delete instance;
	}
	
	void cv_detail_SphericalWarper_SphericalWarper_float(float scale, Result<cv::detail::SphericalWarper*>* ocvrs_return) {
		try {
			cv::detail::SphericalWarper* ret = new cv::detail::SphericalWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalWarper_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::SphericalWarper* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalWarper_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::SphericalWarper* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::SphericalWarperGpu* cv_detail_SphericalWarper_to_Detail_SphericalWarperGpu(cv::detail::SphericalWarper* instance) {
			return dynamic_cast<cv::detail::SphericalWarperGpu*>(instance);
	}
	
	cv::detail::RotationWarper* cv_detail_SphericalWarper_to_Detail_RotationWarper(cv::detail::SphericalWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_SphericalWarper_delete(cv::detail::SphericalWarper* instance) {
			delete instance;
	}
	
	void cv_detail_SphericalWarperGpu_SphericalWarperGpu_float(float scale, Result<cv::detail::SphericalWarperGpu*>* ocvrs_return) {
		try {
			cv::detail::SphericalWarperGpu* ret = new cv::detail::SphericalWarperGpu(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::detail::SphericalWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, const cv::_OutputArray* xmap, const cv::_OutputArray* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalWarperGpu_warp_const__InputArrayR_const__InputArrayR_const__InputArrayR_int_int_const__OutputArrayR(cv::detail::SphericalWarperGpu* instance, const cv::_InputArray* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, const cv::_OutputArray* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalWarperGpu_buildMaps_Size_const__InputArrayR_const__InputArrayR_GpuMatR_GpuMatR(cv::detail::SphericalWarperGpu* instance, cv::Size* src_size, const cv::_InputArray* K, const cv::_InputArray* R, cv::cuda::GpuMat* xmap, cv::cuda::GpuMat* ymap, Result<cv::Rect>* ocvrs_return) {
		try {
			cv::Rect ret = instance->buildMaps(*src_size, *K, *R, *xmap, *ymap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_SphericalWarperGpu_warp_const_GpuMatR_const__InputArrayR_const__InputArrayR_int_int_GpuMatR(cv::detail::SphericalWarperGpu* instance, const cv::cuda::GpuMat* src, const cv::_InputArray* K, const cv::_InputArray* R, int interp_mode, int border_mode, cv::cuda::GpuMat* dst, Result<cv::Point>* ocvrs_return) {
		try {
			cv::Point ret = instance->warp(*src, *K, *R, interp_mode, border_mode, *dst);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_SphericalWarperGpu_to_Detail_RotationWarper(cv::detail::SphericalWarperGpu* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	cv::detail::SphericalWarper* cv_detail_SphericalWarperGpu_to_Detail_SphericalWarper(cv::detail::SphericalWarperGpu* instance) {
			return dynamic_cast<cv::detail::SphericalWarper*>(instance);
	}
	
	void cv_detail_SphericalWarperGpu_delete(cv::detail::SphericalWarperGpu* instance) {
			delete instance;
	}
	
	void cv_detail_StereographicProjector_mapForward_float_float_floatR_floatR(cv::detail::StereographicProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_StereographicProjector_mapBackward_float_float_floatR_floatR(cv::detail::StereographicProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::StereographicProjector* cv_detail_StereographicProjector_defaultNew_const() {
			cv::detail::StereographicProjector* ret = new cv::detail::StereographicProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_StereographicProjector_to_Detail_ProjectorBase(cv::detail::StereographicProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_StereographicProjector_delete(cv::detail::StereographicProjector* instance) {
			delete instance;
	}
	
	void cv_detail_StereographicWarper_StereographicWarper_float(float scale, Result<cv::detail::StereographicWarper*>* ocvrs_return) {
		try {
			cv::detail::StereographicWarper* ret = new cv::detail::StereographicWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_StereographicWarper_to_Detail_RotationWarper(cv::detail::StereographicWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_StereographicWarper_delete(cv::detail::StereographicWarper* instance) {
			delete instance;
	}
	
	void cv_detail_TransverseMercatorProjector_mapForward_float_float_floatR_floatR(cv::detail::TransverseMercatorProjector* instance, float x, float y, float* u, float* v, ResultVoid* ocvrs_return) {
		try {
			instance->mapForward(x, y, *u, *v);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_TransverseMercatorProjector_mapBackward_float_float_floatR_floatR(cv::detail::TransverseMercatorProjector* instance, float u, float v, float* x, float* y, ResultVoid* ocvrs_return) {
		try {
			instance->mapBackward(u, v, *x, *y);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::TransverseMercatorProjector* cv_detail_TransverseMercatorProjector_defaultNew_const() {
			cv::detail::TransverseMercatorProjector* ret = new cv::detail::TransverseMercatorProjector();
			return ret;
	}
	
	cv::detail::ProjectorBase* cv_detail_TransverseMercatorProjector_to_Detail_ProjectorBase(cv::detail::TransverseMercatorProjector* instance) {
			return dynamic_cast<cv::detail::ProjectorBase*>(instance);
	}
	
	void cv_detail_TransverseMercatorProjector_delete(cv::detail::TransverseMercatorProjector* instance) {
			delete instance;
	}
	
	void cv_detail_TransverseMercatorWarper_TransverseMercatorWarper_float(float scale, Result<cv::detail::TransverseMercatorWarper*>* ocvrs_return) {
		try {
			cv::detail::TransverseMercatorWarper* ret = new cv::detail::TransverseMercatorWarper(scale);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::RotationWarper* cv_detail_TransverseMercatorWarper_to_Detail_RotationWarper(cv::detail::TransverseMercatorWarper* instance) {
			return dynamic_cast<cv::detail::RotationWarper*>(instance);
	}
	
	void cv_detail_TransverseMercatorWarper_delete(cv::detail::TransverseMercatorWarper* instance) {
			delete instance;
	}
	
	void cv_detail_VoronoiSeamFinder_find_const_vectorLUMatGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::VoronoiSeamFinder* instance, const std::vector<cv::UMat>* src, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->find(*src, *corners, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_detail_VoronoiSeamFinder_find_const_vectorLSizeGR_const_vectorLPointGR_vectorLUMatGR(cv::detail::VoronoiSeamFinder* instance, const std::vector<cv::Size>* size, const std::vector<cv::Point>* corners, std::vector<cv::UMat>* masks, ResultVoid* ocvrs_return) {
		try {
			instance->find(*size, *corners, *masks);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::detail::VoronoiSeamFinder* cv_detail_VoronoiSeamFinder_defaultNew_const() {
			cv::detail::VoronoiSeamFinder* ret = new cv::detail::VoronoiSeamFinder();
			return ret;
	}
	
	cv::detail::PairwiseSeamFinder* cv_detail_VoronoiSeamFinder_to_Detail_PairwiseSeamFinder(cv::detail::VoronoiSeamFinder* instance) {
			return dynamic_cast<cv::detail::PairwiseSeamFinder*>(instance);
	}
	
	cv::detail::SeamFinder* cv_detail_VoronoiSeamFinder_to_Detail_SeamFinder(cv::detail::VoronoiSeamFinder* instance) {
			return dynamic_cast<cv::detail::SeamFinder*>(instance);
	}
	
	void cv_detail_VoronoiSeamFinder_delete(cv::detail::VoronoiSeamFinder* instance) {
			delete instance;
	}
	
}
