#include "ocvrs_common.hpp"
#include <opencv2/shape.hpp>
#include "shape_types.hpp"

extern "C" {
	void cv_EMDL1_const__InputArrayR_const__InputArrayR(const cv::_InputArray* signature1, const cv::_InputArray* signature2, Result<float>* ocvrs_return) {
		try {
			float ret = cv::EMDL1(*signature1, *signature2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createAffineTransformer_bool(bool fullAffine, Result<cv::Ptr<cv::AffineTransformer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::AffineTransformer> ret = cv::createAffineTransformer(fullAffine);
			Ok(new cv::Ptr<cv::AffineTransformer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createChiHistogramCostExtractor(Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createChiHistogramCostExtractor();
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createChiHistogramCostExtractor_int_float(int nDummies, float defaultCost, Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createChiHistogramCostExtractor(nDummies, defaultCost);
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createEMDHistogramCostExtractor(Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createEMDHistogramCostExtractor();
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createEMDHistogramCostExtractor_int_int_float(int flag, int nDummies, float defaultCost, Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createEMDHistogramCostExtractor(flag, nDummies, defaultCost);
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createEMDL1HistogramCostExtractor(Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createEMDL1HistogramCostExtractor();
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createEMDL1HistogramCostExtractor_int_float(int nDummies, float defaultCost, Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createEMDL1HistogramCostExtractor(nDummies, defaultCost);
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createHausdorffDistanceExtractor(Result<cv::Ptr<cv::HausdorffDistanceExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HausdorffDistanceExtractor> ret = cv::createHausdorffDistanceExtractor();
			Ok(new cv::Ptr<cv::HausdorffDistanceExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createHausdorffDistanceExtractor_int_float(int distanceFlag, float rankProp, Result<cv::Ptr<cv::HausdorffDistanceExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HausdorffDistanceExtractor> ret = cv::createHausdorffDistanceExtractor(distanceFlag, rankProp);
			Ok(new cv::Ptr<cv::HausdorffDistanceExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createNormHistogramCostExtractor(Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createNormHistogramCostExtractor();
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createNormHistogramCostExtractor_int_int_float(int flag, int nDummies, float defaultCost, Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = cv::createNormHistogramCostExtractor(flag, nDummies, defaultCost);
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createShapeContextDistanceExtractor(Result<cv::Ptr<cv::ShapeContextDistanceExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ShapeContextDistanceExtractor> ret = cv::createShapeContextDistanceExtractor();
			Ok(new cv::Ptr<cv::ShapeContextDistanceExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createShapeContextDistanceExtractor_int_int_float_float_int_const_PtrLHistogramCostExtractorGR_const_PtrLShapeTransformerGR(int nAngularBins, int nRadialBins, float innerRadius, float outerRadius, int iterations, const cv::Ptr<cv::HistogramCostExtractor>* comparer, const cv::Ptr<cv::ShapeTransformer>* transformer, Result<cv::Ptr<cv::ShapeContextDistanceExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ShapeContextDistanceExtractor> ret = cv::createShapeContextDistanceExtractor(nAngularBins, nRadialBins, innerRadius, outerRadius, iterations, *comparer, *transformer);
			Ok(new cv::Ptr<cv::ShapeContextDistanceExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createThinPlateSplineShapeTransformer(Result<cv::Ptr<cv::ThinPlateSplineShapeTransformer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ThinPlateSplineShapeTransformer> ret = cv::createThinPlateSplineShapeTransformer();
			Ok(new cv::Ptr<cv::ThinPlateSplineShapeTransformer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_createThinPlateSplineShapeTransformer_double(double regularizationParameter, Result<cv::Ptr<cv::ThinPlateSplineShapeTransformer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ThinPlateSplineShapeTransformer> ret = cv::createThinPlateSplineShapeTransformer(regularizationParameter);
			Ok(new cv::Ptr<cv::ThinPlateSplineShapeTransformer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AffineTransformer_setFullAffine_bool(cv::AffineTransformer* instance, bool fullAffine, ResultVoid* ocvrs_return) {
		try {
			instance->setFullAffine(fullAffine);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_AffineTransformer_getFullAffine_const(const cv::AffineTransformer* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getFullAffine();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_AffineTransformer_to_Algorithm(cv::AffineTransformer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ShapeTransformer* cv_AffineTransformer_to_ShapeTransformer(cv::AffineTransformer* instance) {
			return dynamic_cast<cv::ShapeTransformer*>(instance);
	}
	
	void cv_AffineTransformer_delete(cv::AffineTransformer* instance) {
			delete instance;
	}
	
	cv::Algorithm* cv_ChiHistogramCostExtractor_to_Algorithm(cv::ChiHistogramCostExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::HistogramCostExtractor* cv_ChiHistogramCostExtractor_to_HistogramCostExtractor(cv::ChiHistogramCostExtractor* instance) {
			return dynamic_cast<cv::HistogramCostExtractor*>(instance);
	}
	
	void cv_ChiHistogramCostExtractor_delete(cv::ChiHistogramCostExtractor* instance) {
			delete instance;
	}
	
	void cv_EMDHistogramCostExtractor_setNormFlag_int(cv::EMDHistogramCostExtractor* instance, int flag, ResultVoid* ocvrs_return) {
		try {
			instance->setNormFlag(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_EMDHistogramCostExtractor_getNormFlag_const(const cv::EMDHistogramCostExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNormFlag();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_EMDHistogramCostExtractor_to_Algorithm(cv::EMDHistogramCostExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::HistogramCostExtractor* cv_EMDHistogramCostExtractor_to_HistogramCostExtractor(cv::EMDHistogramCostExtractor* instance) {
			return dynamic_cast<cv::HistogramCostExtractor*>(instance);
	}
	
	void cv_EMDHistogramCostExtractor_delete(cv::EMDHistogramCostExtractor* instance) {
			delete instance;
	}
	
	cv::Algorithm* cv_EMDL1HistogramCostExtractor_to_Algorithm(cv::EMDL1HistogramCostExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::HistogramCostExtractor* cv_EMDL1HistogramCostExtractor_to_HistogramCostExtractor(cv::EMDL1HistogramCostExtractor* instance) {
			return dynamic_cast<cv::HistogramCostExtractor*>(instance);
	}
	
	void cv_EMDL1HistogramCostExtractor_delete(cv::EMDL1HistogramCostExtractor* instance) {
			delete instance;
	}
	
	void cv_HausdorffDistanceExtractor_setDistanceFlag_int(cv::HausdorffDistanceExtractor* instance, int distanceFlag, ResultVoid* ocvrs_return) {
		try {
			instance->setDistanceFlag(distanceFlag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HausdorffDistanceExtractor_getDistanceFlag_const(const cv::HausdorffDistanceExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getDistanceFlag();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HausdorffDistanceExtractor_setRankProportion_float(cv::HausdorffDistanceExtractor* instance, float rankProportion, ResultVoid* ocvrs_return) {
		try {
			instance->setRankProportion(rankProportion);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HausdorffDistanceExtractor_getRankProportion_const(const cv::HausdorffDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getRankProportion();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_HausdorffDistanceExtractor_to_Algorithm(cv::HausdorffDistanceExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ShapeDistanceExtractor* cv_HausdorffDistanceExtractor_to_ShapeDistanceExtractor(cv::HausdorffDistanceExtractor* instance) {
			return dynamic_cast<cv::ShapeDistanceExtractor*>(instance);
	}
	
	void cv_HausdorffDistanceExtractor_delete(cv::HausdorffDistanceExtractor* instance) {
			delete instance;
	}
	
	void cv_HistogramCostExtractor_buildCostMatrix_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::HistogramCostExtractor* instance, const cv::_InputArray* descriptors1, const cv::_InputArray* descriptors2, const cv::_OutputArray* costMatrix, ResultVoid* ocvrs_return) {
		try {
			instance->buildCostMatrix(*descriptors1, *descriptors2, *costMatrix);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HistogramCostExtractor_setNDummies_int(cv::HistogramCostExtractor* instance, int nDummies, ResultVoid* ocvrs_return) {
		try {
			instance->setNDummies(nDummies);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HistogramCostExtractor_getNDummies_const(const cv::HistogramCostExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNDummies();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HistogramCostExtractor_setDefaultCost_float(cv::HistogramCostExtractor* instance, float defaultCost, ResultVoid* ocvrs_return) {
		try {
			instance->setDefaultCost(defaultCost);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_HistogramCostExtractor_getDefaultCost_const(const cv::HistogramCostExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getDefaultCost();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::ChiHistogramCostExtractor* cv_HistogramCostExtractor_to_ChiHistogramCostExtractor(cv::HistogramCostExtractor* instance) {
			return dynamic_cast<cv::ChiHistogramCostExtractor*>(instance);
	}
	
	cv::EMDHistogramCostExtractor* cv_HistogramCostExtractor_to_EMDHistogramCostExtractor(cv::HistogramCostExtractor* instance) {
			return dynamic_cast<cv::EMDHistogramCostExtractor*>(instance);
	}
	
	cv::EMDL1HistogramCostExtractor* cv_HistogramCostExtractor_to_EMDL1HistogramCostExtractor(cv::HistogramCostExtractor* instance) {
			return dynamic_cast<cv::EMDL1HistogramCostExtractor*>(instance);
	}
	
	cv::NormHistogramCostExtractor* cv_HistogramCostExtractor_to_NormHistogramCostExtractor(cv::HistogramCostExtractor* instance) {
			return dynamic_cast<cv::NormHistogramCostExtractor*>(instance);
	}
	
	cv::Algorithm* cv_HistogramCostExtractor_to_Algorithm(cv::HistogramCostExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_HistogramCostExtractor_delete(cv::HistogramCostExtractor* instance) {
			delete instance;
	}
	
	void cv_NormHistogramCostExtractor_setNormFlag_int(cv::NormHistogramCostExtractor* instance, int flag, ResultVoid* ocvrs_return) {
		try {
			instance->setNormFlag(flag);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_NormHistogramCostExtractor_getNormFlag_const(const cv::NormHistogramCostExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNormFlag();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_NormHistogramCostExtractor_to_Algorithm(cv::NormHistogramCostExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::HistogramCostExtractor* cv_NormHistogramCostExtractor_to_HistogramCostExtractor(cv::NormHistogramCostExtractor* instance) {
			return dynamic_cast<cv::HistogramCostExtractor*>(instance);
	}
	
	void cv_NormHistogramCostExtractor_delete(cv::NormHistogramCostExtractor* instance) {
			delete instance;
	}
	
	void cv_ShapeContextDistanceExtractor_setAngularBins_int(cv::ShapeContextDistanceExtractor* instance, int nAngularBins, ResultVoid* ocvrs_return) {
		try {
			instance->setAngularBins(nAngularBins);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getAngularBins_const(const cv::ShapeContextDistanceExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getAngularBins();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setRadialBins_int(cv::ShapeContextDistanceExtractor* instance, int nRadialBins, ResultVoid* ocvrs_return) {
		try {
			instance->setRadialBins(nRadialBins);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getRadialBins_const(const cv::ShapeContextDistanceExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getRadialBins();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setInnerRadius_float(cv::ShapeContextDistanceExtractor* instance, float innerRadius, ResultVoid* ocvrs_return) {
		try {
			instance->setInnerRadius(innerRadius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getInnerRadius_const(const cv::ShapeContextDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getInnerRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setOuterRadius_float(cv::ShapeContextDistanceExtractor* instance, float outerRadius, ResultVoid* ocvrs_return) {
		try {
			instance->setOuterRadius(outerRadius);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getOuterRadius_const(const cv::ShapeContextDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getOuterRadius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setRotationInvariant_bool(cv::ShapeContextDistanceExtractor* instance, bool rotationInvariant, ResultVoid* ocvrs_return) {
		try {
			instance->setRotationInvariant(rotationInvariant);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getRotationInvariant_const(const cv::ShapeContextDistanceExtractor* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->getRotationInvariant();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setShapeContextWeight_float(cv::ShapeContextDistanceExtractor* instance, float shapeContextWeight, ResultVoid* ocvrs_return) {
		try {
			instance->setShapeContextWeight(shapeContextWeight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getShapeContextWeight_const(const cv::ShapeContextDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getShapeContextWeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setImageAppearanceWeight_float(cv::ShapeContextDistanceExtractor* instance, float imageAppearanceWeight, ResultVoid* ocvrs_return) {
		try {
			instance->setImageAppearanceWeight(imageAppearanceWeight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getImageAppearanceWeight_const(const cv::ShapeContextDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getImageAppearanceWeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setBendingEnergyWeight_float(cv::ShapeContextDistanceExtractor* instance, float bendingEnergyWeight, ResultVoid* ocvrs_return) {
		try {
			instance->setBendingEnergyWeight(bendingEnergyWeight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getBendingEnergyWeight_const(const cv::ShapeContextDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getBendingEnergyWeight();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setImages_const__InputArrayR_const__InputArrayR(cv::ShapeContextDistanceExtractor* instance, const cv::_InputArray* image1, const cv::_InputArray* image2, ResultVoid* ocvrs_return) {
		try {
			instance->setImages(*image1, *image2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getImages_const_const__OutputArrayR_const__OutputArrayR(const cv::ShapeContextDistanceExtractor* instance, const cv::_OutputArray* image1, const cv::_OutputArray* image2, ResultVoid* ocvrs_return) {
		try {
			instance->getImages(*image1, *image2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setIterations_int(cv::ShapeContextDistanceExtractor* instance, int iterations, ResultVoid* ocvrs_return) {
		try {
			instance->setIterations(iterations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getIterations_const(const cv::ShapeContextDistanceExtractor* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getIterations();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setCostExtractor_PtrLHistogramCostExtractorG(cv::ShapeContextDistanceExtractor* instance, cv::Ptr<cv::HistogramCostExtractor>* comparer, ResultVoid* ocvrs_return) {
		try {
			instance->setCostExtractor(*comparer);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getCostExtractor_const(const cv::ShapeContextDistanceExtractor* instance, Result<cv::Ptr<cv::HistogramCostExtractor>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::HistogramCostExtractor> ret = instance->getCostExtractor();
			Ok(new cv::Ptr<cv::HistogramCostExtractor>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setStdDev_float(cv::ShapeContextDistanceExtractor* instance, float sigma, ResultVoid* ocvrs_return) {
		try {
			instance->setStdDev(sigma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getStdDev_const(const cv::ShapeContextDistanceExtractor* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getStdDev();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_setTransformAlgorithm_PtrLShapeTransformerG(cv::ShapeContextDistanceExtractor* instance, cv::Ptr<cv::ShapeTransformer>* transformer, ResultVoid* ocvrs_return) {
		try {
			instance->setTransformAlgorithm(*transformer);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeContextDistanceExtractor_getTransformAlgorithm_const(const cv::ShapeContextDistanceExtractor* instance, Result<cv::Ptr<cv::ShapeTransformer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::ShapeTransformer> ret = instance->getTransformAlgorithm();
			Ok(new cv::Ptr<cv::ShapeTransformer>(ret), ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ShapeContextDistanceExtractor_to_Algorithm(cv::ShapeContextDistanceExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ShapeDistanceExtractor* cv_ShapeContextDistanceExtractor_to_ShapeDistanceExtractor(cv::ShapeContextDistanceExtractor* instance) {
			return dynamic_cast<cv::ShapeDistanceExtractor*>(instance);
	}
	
	void cv_ShapeContextDistanceExtractor_delete(cv::ShapeContextDistanceExtractor* instance) {
			delete instance;
	}
	
	void cv_ShapeDistanceExtractor_computeDistance_const__InputArrayR_const__InputArrayR(cv::ShapeDistanceExtractor* instance, const cv::_InputArray* contour1, const cv::_InputArray* contour2, Result<float>* ocvrs_return) {
		try {
			float ret = instance->computeDistance(*contour1, *contour2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::HausdorffDistanceExtractor* cv_ShapeDistanceExtractor_to_HausdorffDistanceExtractor(cv::ShapeDistanceExtractor* instance) {
			return dynamic_cast<cv::HausdorffDistanceExtractor*>(instance);
	}
	
	cv::ShapeContextDistanceExtractor* cv_ShapeDistanceExtractor_to_ShapeContextDistanceExtractor(cv::ShapeDistanceExtractor* instance) {
			return dynamic_cast<cv::ShapeContextDistanceExtractor*>(instance);
	}
	
	cv::Algorithm* cv_ShapeDistanceExtractor_to_Algorithm(cv::ShapeDistanceExtractor* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ShapeDistanceExtractor_delete(cv::ShapeDistanceExtractor* instance) {
			delete instance;
	}
	
	void cv_ShapeTransformer_estimateTransformation_const__InputArrayR_const__InputArrayR_vectorLDMatchGR(cv::ShapeTransformer* instance, const cv::_InputArray* transformingShape, const cv::_InputArray* targetShape, std::vector<cv::DMatch>* matches, ResultVoid* ocvrs_return) {
		try {
			instance->estimateTransformation(*transformingShape, *targetShape, *matches);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeTransformer_applyTransformation_const__InputArrayR_const__OutputArrayR(cv::ShapeTransformer* instance, const cv::_InputArray* input, const cv::_OutputArray* output, Result<float>* ocvrs_return) {
		try {
			float ret = instance->applyTransformation(*input, *output);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeTransformer_applyTransformation_const__InputArrayR(cv::ShapeTransformer* instance, const cv::_InputArray* input, Result<float>* ocvrs_return) {
		try {
			float ret = instance->applyTransformation(*input);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeTransformer_warpImage_const_const__InputArrayR_const__OutputArrayR_int_int_const_ScalarR(const cv::ShapeTransformer* instance, const cv::_InputArray* transformingImage, const cv::_OutputArray* output, int flags, int borderMode, const cv::Scalar* borderValue, ResultVoid* ocvrs_return) {
		try {
			instance->warpImage(*transformingImage, *output, flags, borderMode, *borderValue);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ShapeTransformer_warpImage_const_const__InputArrayR_const__OutputArrayR(const cv::ShapeTransformer* instance, const cv::_InputArray* transformingImage, const cv::_OutputArray* output, ResultVoid* ocvrs_return) {
		try {
			instance->warpImage(*transformingImage, *output);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::AffineTransformer* cv_ShapeTransformer_to_AffineTransformer(cv::ShapeTransformer* instance) {
			return dynamic_cast<cv::AffineTransformer*>(instance);
	}
	
	cv::ThinPlateSplineShapeTransformer* cv_ShapeTransformer_to_ThinPlateSplineShapeTransformer(cv::ShapeTransformer* instance) {
			return dynamic_cast<cv::ThinPlateSplineShapeTransformer*>(instance);
	}
	
	cv::Algorithm* cv_ShapeTransformer_to_Algorithm(cv::ShapeTransformer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_ShapeTransformer_delete(cv::ShapeTransformer* instance) {
			delete instance;
	}
	
	void cv_ThinPlateSplineShapeTransformer_setRegularizationParameter_double(cv::ThinPlateSplineShapeTransformer* instance, double beta, ResultVoid* ocvrs_return) {
		try {
			instance->setRegularizationParameter(beta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	void cv_ThinPlateSplineShapeTransformer_getRegularizationParameter_const(const cv::ThinPlateSplineShapeTransformer* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getRegularizationParameter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(ocvrs_return);
	}
	
	cv::Algorithm* cv_ThinPlateSplineShapeTransformer_to_Algorithm(cv::ThinPlateSplineShapeTransformer* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	cv::ShapeTransformer* cv_ThinPlateSplineShapeTransformer_to_ShapeTransformer(cv::ThinPlateSplineShapeTransformer* instance) {
			return dynamic_cast<cv::ShapeTransformer*>(instance);
	}
	
	void cv_ThinPlateSplineShapeTransformer_delete(cv::ThinPlateSplineShapeTransformer* instance) {
			delete instance;
	}
	
}
