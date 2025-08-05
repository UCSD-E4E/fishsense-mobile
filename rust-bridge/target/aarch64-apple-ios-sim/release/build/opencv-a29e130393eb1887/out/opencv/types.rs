
#[cfg(ocvrs_has_module_calib3d)]
mod calib3d_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfLMSolver = core::Ptr<crate::calib3d::LMSolver>;
	
	ptr_extern! { crate::calib3d::LMSolver,
		cv_PtrLcv_LMSolverG_delete, cv_PtrLcv_LMSolverG_getInnerPtr_const, cv_PtrLcv_LMSolverG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::calib3d::LMSolver> {
		#[inline] pub fn as_raw_PtrOfLMSolver(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLMSolver(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::calib3d::LMSolverTraitConst for core::Ptr<crate::calib3d::LMSolver> {
		#[inline] fn as_raw_LMSolver(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::LMSolverTrait for core::Ptr<crate::calib3d::LMSolver> {
		#[inline] fn as_raw_mut_LMSolver(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::calib3d::LMSolver> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::calib3d::LMSolver> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLMSolver, core::Ptr<core::Algorithm>, cv_PtrLcv_LMSolverG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::calib3d::LMSolver> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLMSolver")
				.finish()
		}
	}
	
	pub type PtrOfLMSolver_Callback = core::Ptr<crate::calib3d::LMSolver_Callback>;
	
	ptr_extern! { crate::calib3d::LMSolver_Callback,
		cv_PtrLcv_LMSolver_CallbackG_delete, cv_PtrLcv_LMSolver_CallbackG_getInnerPtr_const, cv_PtrLcv_LMSolver_CallbackG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::calib3d::LMSolver_Callback> {
		#[inline] pub fn as_raw_PtrOfLMSolver_Callback(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLMSolver_Callback(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::calib3d::LMSolver_CallbackTraitConst for core::Ptr<crate::calib3d::LMSolver_Callback> {
		#[inline] fn as_raw_LMSolver_Callback(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::LMSolver_CallbackTrait for core::Ptr<crate::calib3d::LMSolver_Callback> {
		#[inline] fn as_raw_mut_LMSolver_Callback(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::calib3d::LMSolver_Callback> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLMSolver_Callback")
				.finish()
		}
	}
	
	pub type PtrOfStereoBM = core::Ptr<crate::calib3d::StereoBM>;
	
	ptr_extern! { crate::calib3d::StereoBM,
		cv_PtrLcv_StereoBMG_delete, cv_PtrLcv_StereoBMG_getInnerPtr_const, cv_PtrLcv_StereoBMG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::calib3d::StereoBM> {
		#[inline] pub fn as_raw_PtrOfStereoBM(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfStereoBM(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::calib3d::StereoBMTraitConst for core::Ptr<crate::calib3d::StereoBM> {
		#[inline] fn as_raw_StereoBM(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::StereoBMTrait for core::Ptr<crate::calib3d::StereoBM> {
		#[inline] fn as_raw_mut_StereoBM(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::calib3d::StereoBM> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::calib3d::StereoBM> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStereoBM, core::Ptr<core::Algorithm>, cv_PtrLcv_StereoBMG_to_PtrOfAlgorithm }
	
	impl crate::calib3d::StereoMatcherTraitConst for core::Ptr<crate::calib3d::StereoBM> {
		#[inline] fn as_raw_StereoMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::StereoMatcherTrait for core::Ptr<crate::calib3d::StereoBM> {
		#[inline] fn as_raw_mut_StereoMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStereoBM, core::Ptr<crate::calib3d::StereoMatcher>, cv_PtrLcv_StereoBMG_to_PtrOfStereoMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::calib3d::StereoBM> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfStereoBM")
				.finish()
		}
	}
	
	pub type PtrOfStereoMatcher = core::Ptr<crate::calib3d::StereoMatcher>;
	
	ptr_extern! { crate::calib3d::StereoMatcher,
		cv_PtrLcv_StereoMatcherG_delete, cv_PtrLcv_StereoMatcherG_getInnerPtr_const, cv_PtrLcv_StereoMatcherG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::calib3d::StereoMatcher> {
		#[inline] pub fn as_raw_PtrOfStereoMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfStereoMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::calib3d::StereoMatcherTraitConst for core::Ptr<crate::calib3d::StereoMatcher> {
		#[inline] fn as_raw_StereoMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::StereoMatcherTrait for core::Ptr<crate::calib3d::StereoMatcher> {
		#[inline] fn as_raw_mut_StereoMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::calib3d::StereoMatcher> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::calib3d::StereoMatcher> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStereoMatcher, core::Ptr<core::Algorithm>, cv_PtrLcv_StereoMatcherG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::calib3d::StereoMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfStereoMatcher")
				.finish()
		}
	}
	
	pub type PtrOfStereoSGBM = core::Ptr<crate::calib3d::StereoSGBM>;
	
	ptr_extern! { crate::calib3d::StereoSGBM,
		cv_PtrLcv_StereoSGBMG_delete, cv_PtrLcv_StereoSGBMG_getInnerPtr_const, cv_PtrLcv_StereoSGBMG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] pub fn as_raw_PtrOfStereoSGBM(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfStereoSGBM(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::calib3d::StereoSGBMTraitConst for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] fn as_raw_StereoSGBM(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::StereoSGBMTrait for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] fn as_raw_mut_StereoSGBM(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStereoSGBM, core::Ptr<core::Algorithm>, cv_PtrLcv_StereoSGBMG_to_PtrOfAlgorithm }
	
	impl crate::calib3d::StereoMatcherTraitConst for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] fn as_raw_StereoMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::calib3d::StereoMatcherTrait for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline] fn as_raw_mut_StereoMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStereoSGBM, core::Ptr<crate::calib3d::StereoMatcher>, cv_PtrLcv_StereoSGBMG_to_PtrOfStereoMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::calib3d::StereoSGBM> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfStereoSGBM")
				.finish()
		}
	}
	
}
#[cfg(ocvrs_has_module_calib3d)]
pub use calib3d_types::*;

#[cfg(ocvrs_has_module_core)]
mod core_types {
	use crate::{mod_prelude::*, core, types, sys};

	impl core::GpuMat_AllocatorTraitConst for types::AbstractRefMut<'static, core::GpuMat_Allocator> {
		#[inline] fn as_raw_GpuMat_Allocator(&self) -> extern_send!(Self) { self.as_raw() }
	}
	
	impl core::GpuMat_AllocatorTrait for types::AbstractRefMut<'static, core::GpuMat_Allocator> {
		#[inline] fn as_raw_mut_GpuMat_Allocator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::MatOpTraitConst for types::AbstractRefMut<'static, core::MatOp> {
		#[inline] fn as_raw_MatOp(&self) -> extern_send!(Self) { self.as_raw() }
	}
	
	impl core::MatOpTrait for types::AbstractRefMut<'static, core::MatOp> {
		#[inline] fn as_raw_mut_MatOp(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	pub type PtrOfAlgorithm = core::Ptr<core::Algorithm>;
	
	ptr_extern! { core::Algorithm,
		cv_PtrLcv_AlgorithmG_delete, cv_PtrLcv_AlgorithmG_getInnerPtr_const, cv_PtrLcv_AlgorithmG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { core::Algorithm, cv_PtrLcv_AlgorithmG_new_const_Algorithm }
	impl core::Ptr<core::Algorithm> {
		#[inline] pub fn as_raw_PtrOfAlgorithm(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAlgorithm(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<core::Algorithm> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<core::Algorithm> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::Algorithm> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAlgorithm")
				.finish()
		}
	}
	
	pub type PtrOfConjGradSolver = core::Ptr<core::ConjGradSolver>;
	
	ptr_extern! { core::ConjGradSolver,
		cv_PtrLcv_ConjGradSolverG_delete, cv_PtrLcv_ConjGradSolverG_getInnerPtr_const, cv_PtrLcv_ConjGradSolverG_getInnerPtrMut
	}
	
	impl core::Ptr<core::ConjGradSolver> {
		#[inline] pub fn as_raw_PtrOfConjGradSolver(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfConjGradSolver(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::ConjGradSolverTraitConst for core::Ptr<core::ConjGradSolver> {
		#[inline] fn as_raw_ConjGradSolver(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::ConjGradSolverTrait for core::Ptr<core::ConjGradSolver> {
		#[inline] fn as_raw_mut_ConjGradSolver(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<core::ConjGradSolver> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<core::ConjGradSolver> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConjGradSolver, core::Ptr<core::Algorithm>, cv_PtrLcv_ConjGradSolverG_to_PtrOfAlgorithm }
	
	impl core::MinProblemSolverTraitConst for core::Ptr<core::ConjGradSolver> {
		#[inline] fn as_raw_MinProblemSolver(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::MinProblemSolverTrait for core::Ptr<core::ConjGradSolver> {
		#[inline] fn as_raw_mut_MinProblemSolver(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConjGradSolver, core::Ptr<core::MinProblemSolver>, cv_PtrLcv_ConjGradSolverG_to_PtrOfMinProblemSolver }
	
	impl std::fmt::Debug for core::Ptr<core::ConjGradSolver> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfConjGradSolver")
				.finish()
		}
	}
	
	pub type PtrOfDownhillSolver = core::Ptr<core::DownhillSolver>;
	
	ptr_extern! { core::DownhillSolver,
		cv_PtrLcv_DownhillSolverG_delete, cv_PtrLcv_DownhillSolverG_getInnerPtr_const, cv_PtrLcv_DownhillSolverG_getInnerPtrMut
	}
	
	impl core::Ptr<core::DownhillSolver> {
		#[inline] pub fn as_raw_PtrOfDownhillSolver(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDownhillSolver(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::DownhillSolverTraitConst for core::Ptr<core::DownhillSolver> {
		#[inline] fn as_raw_DownhillSolver(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::DownhillSolverTrait for core::Ptr<core::DownhillSolver> {
		#[inline] fn as_raw_mut_DownhillSolver(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<core::DownhillSolver> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<core::DownhillSolver> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDownhillSolver, core::Ptr<core::Algorithm>, cv_PtrLcv_DownhillSolverG_to_PtrOfAlgorithm }
	
	impl core::MinProblemSolverTraitConst for core::Ptr<core::DownhillSolver> {
		#[inline] fn as_raw_MinProblemSolver(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::MinProblemSolverTrait for core::Ptr<core::DownhillSolver> {
		#[inline] fn as_raw_mut_MinProblemSolver(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDownhillSolver, core::Ptr<core::MinProblemSolver>, cv_PtrLcv_DownhillSolverG_to_PtrOfMinProblemSolver }
	
	impl std::fmt::Debug for core::Ptr<core::DownhillSolver> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDownhillSolver")
				.finish()
		}
	}
	
	pub type PtrOfFileStorage = core::Ptr<core::FileStorage>;
	
	ptr_extern! { core::FileStorage,
		cv_PtrLcv_FileStorageG_delete, cv_PtrLcv_FileStorageG_getInnerPtr_const, cv_PtrLcv_FileStorageG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { core::FileStorage, cv_PtrLcv_FileStorageG_new_const_FileStorage }
	impl core::Ptr<core::FileStorage> {
		#[inline] pub fn as_raw_PtrOfFileStorage(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFileStorage(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::FileStorageTraitConst for core::Ptr<core::FileStorage> {
		#[inline] fn as_raw_FileStorage(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::FileStorageTrait for core::Ptr<core::FileStorage> {
		#[inline] fn as_raw_mut_FileStorage(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::FileStorage> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFileStorage")
				.field("state", &core::FileStorageTraitConst::state(self))
				.field("elname", &core::FileStorageTraitConst::elname(self))
				.finish()
		}
	}
	
	pub type PtrOfFormatted = core::Ptr<core::Formatted>;
	
	ptr_extern! { core::Formatted,
		cv_PtrLcv_FormattedG_delete, cv_PtrLcv_FormattedG_getInnerPtr_const, cv_PtrLcv_FormattedG_getInnerPtrMut
	}
	
	impl core::Ptr<core::Formatted> {
		#[inline] pub fn as_raw_PtrOfFormatted(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFormatted(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::FormattedTraitConst for core::Ptr<core::Formatted> {
		#[inline] fn as_raw_Formatted(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::FormattedTrait for core::Ptr<core::Formatted> {
		#[inline] fn as_raw_mut_Formatted(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::Formatted> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFormatted")
				.finish()
		}
	}
	
	pub type PtrOfFormatter = core::Ptr<core::Formatter>;
	
	ptr_extern! { core::Formatter,
		cv_PtrLcv_FormatterG_delete, cv_PtrLcv_FormatterG_getInnerPtr_const, cv_PtrLcv_FormatterG_getInnerPtrMut
	}
	
	impl core::Ptr<core::Formatter> {
		#[inline] pub fn as_raw_PtrOfFormatter(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFormatter(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::FormatterTraitConst for core::Ptr<core::Formatter> {
		#[inline] fn as_raw_Formatter(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::FormatterTrait for core::Ptr<core::Formatter> {
		#[inline] fn as_raw_mut_Formatter(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::Formatter> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFormatter")
				.finish()
		}
	}
	
	pub type PtrOfGpuMat_Allocator = core::Ptr<core::GpuMat_Allocator>;
	
	ptr_extern! { core::GpuMat_Allocator,
		cv_PtrLcv_cuda_GpuMat_AllocatorG_delete, cv_PtrLcv_cuda_GpuMat_AllocatorG_getInnerPtr_const, cv_PtrLcv_cuda_GpuMat_AllocatorG_getInnerPtrMut
	}
	
	impl core::Ptr<core::GpuMat_Allocator> {
		#[inline] pub fn as_raw_PtrOfGpuMat_Allocator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGpuMat_Allocator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::GpuMat_AllocatorTraitConst for core::Ptr<core::GpuMat_Allocator> {
		#[inline] fn as_raw_GpuMat_Allocator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::GpuMat_AllocatorTrait for core::Ptr<core::GpuMat_Allocator> {
		#[inline] fn as_raw_mut_GpuMat_Allocator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::GpuMat_Allocator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGpuMat_Allocator")
				.finish()
		}
	}
	
	pub type PtrOfMinProblemSolver = core::Ptr<core::MinProblemSolver>;
	
	ptr_extern! { core::MinProblemSolver,
		cv_PtrLcv_MinProblemSolverG_delete, cv_PtrLcv_MinProblemSolverG_getInnerPtr_const, cv_PtrLcv_MinProblemSolverG_getInnerPtrMut
	}
	
	impl core::Ptr<core::MinProblemSolver> {
		#[inline] pub fn as_raw_PtrOfMinProblemSolver(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMinProblemSolver(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::MinProblemSolverTraitConst for core::Ptr<core::MinProblemSolver> {
		#[inline] fn as_raw_MinProblemSolver(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::MinProblemSolverTrait for core::Ptr<core::MinProblemSolver> {
		#[inline] fn as_raw_mut_MinProblemSolver(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<core::MinProblemSolver> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<core::MinProblemSolver> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMinProblemSolver, core::Ptr<core::Algorithm>, cv_PtrLcv_MinProblemSolverG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<core::MinProblemSolver> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMinProblemSolver")
				.finish()
		}
	}
	
	pub type PtrOfMinProblemSolver_Function = core::Ptr<core::MinProblemSolver_Function>;
	
	ptr_extern! { core::MinProblemSolver_Function,
		cv_PtrLcv_MinProblemSolver_FunctionG_delete, cv_PtrLcv_MinProblemSolver_FunctionG_getInnerPtr_const, cv_PtrLcv_MinProblemSolver_FunctionG_getInnerPtrMut
	}
	
	impl core::Ptr<core::MinProblemSolver_Function> {
		#[inline] pub fn as_raw_PtrOfMinProblemSolver_Function(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMinProblemSolver_Function(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::MinProblemSolver_FunctionTraitConst for core::Ptr<core::MinProblemSolver_Function> {
		#[inline] fn as_raw_MinProblemSolver_Function(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::MinProblemSolver_FunctionTrait for core::Ptr<core::MinProblemSolver_Function> {
		#[inline] fn as_raw_mut_MinProblemSolver_Function(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::MinProblemSolver_Function> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMinProblemSolver_Function")
				.finish()
		}
	}
	
	pub type PtrOfOriginalClassName = core::Ptr<core::OriginalClassName>;
	
	ptr_extern! { core::OriginalClassName,
		cv_PtrLcv_utils_nested_OriginalClassNameG_delete, cv_PtrLcv_utils_nested_OriginalClassNameG_getInnerPtr_const, cv_PtrLcv_utils_nested_OriginalClassNameG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { core::OriginalClassName, cv_PtrLcv_utils_nested_OriginalClassNameG_new_const_OriginalClassName }
	impl core::Ptr<core::OriginalClassName> {
		#[inline] pub fn as_raw_PtrOfOriginalClassName(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfOriginalClassName(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl core::OriginalClassNameTraitConst for core::Ptr<core::OriginalClassName> {
		#[inline] fn as_raw_OriginalClassName(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::OriginalClassNameTrait for core::Ptr<core::OriginalClassName> {
		#[inline] fn as_raw_mut_OriginalClassName(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<core::OriginalClassName> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfOriginalClassName")
				.finish()
		}
	}
	
	pub type PtrOff32 = core::Ptr<f32>;
	
	ptr_extern! { f32,
		cv_PtrLfloatG_delete, cv_PtrLfloatG_getInnerPtr_const, cv_PtrLfloatG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { f32, cv_PtrLfloatG_new_const_float }
	impl core::Ptr<f32> {
		#[inline] pub fn as_raw_PtrOff32(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOff32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	pub type TupleOfRect_i32 = core::Tuple<(core::Rect, i32)>;
	
	impl core::Tuple<(core::Rect, i32)> {
		pub fn as_raw_TupleOfRect_i32(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfRect_i32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (core::Rect, i32),
		std_pairLcv_Rect__intG_new_const_Rect_int, std_pairLcv_Rect__intG_delete,
		0 = arg: core::Rect, get_0 via std_pairLcv_Rect__intG_get_0_const,
		1 = arg_1: i32, get_1 via std_pairLcv_Rect__intG_get_1_const
	}
	
	pub type TupleOfUMat_u8 = core::Tuple<(core::UMat, u8)>;
	
	impl core::Tuple<(core::UMat, u8)> {
		pub fn as_raw_TupleOfUMat_u8(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfUMat_u8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (core::UMat, u8),
		std_pairLcv_UMat__unsigned_charG_new_const_UMat_unsigned_char, std_pairLcv_UMat__unsigned_charG_delete,
		0 = arg: core::UMat, get_0 via std_pairLcv_UMat__unsigned_charG_get_0_const,
		1 = arg_1: u8, get_1 via std_pairLcv_UMat__unsigned_charG_get_1_const
	}
	
	pub type TupleOfi32_f32 = core::Tuple<(i32, f32)>;
	
	impl core::Tuple<(i32, f32)> {
		pub fn as_raw_TupleOfi32_f32(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfi32_f32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (i32, f32),
		std_pairLint__floatG_new_const_int_float, std_pairLint__floatG_delete,
		0 = arg: i32, get_0 via std_pairLint__floatG_get_0_const,
		1 = arg_1: f32, get_1 via std_pairLint__floatG_get_1_const
	}
	
	pub type VectorOfDMatch = core::Vector<core::DMatch>;
	
	impl core::Vector<core::DMatch> {
		pub fn as_raw_VectorOfDMatch(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDMatch(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::DMatch,
		std_vectorLcv_DMatchG_new_const, std_vectorLcv_DMatchG_delete,
		std_vectorLcv_DMatchG_len_const, std_vectorLcv_DMatchG_isEmpty_const,
		std_vectorLcv_DMatchG_capacity_const, std_vectorLcv_DMatchG_shrinkToFit,
		std_vectorLcv_DMatchG_reserve_size_t, std_vectorLcv_DMatchG_remove_size_t,
		std_vectorLcv_DMatchG_swap_size_t_size_t, std_vectorLcv_DMatchG_clear,
		std_vectorLcv_DMatchG_get_const_size_t, std_vectorLcv_DMatchG_set_size_t_const_DMatch,
		std_vectorLcv_DMatchG_push_const_DMatch, std_vectorLcv_DMatchG_insert_size_t_const_DMatch,
	}
	
	vector_copy_non_bool! { core::DMatch,
		std_vectorLcv_DMatchG_data_const, std_vectorLcv_DMatchG_dataMut, cv_fromSlice_const_const_DMatchX_size_t,
		std_vectorLcv_DMatchG_clone_const,
	}
	
	
	pub type VectorOfGpuMat = core::Vector<core::GpuMat>;
	
	impl core::Vector<core::GpuMat> {
		pub fn as_raw_VectorOfGpuMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGpuMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::GpuMat,
		std_vectorLcv_cuda_GpuMatG_new_const, std_vectorLcv_cuda_GpuMatG_delete,
		std_vectorLcv_cuda_GpuMatG_len_const, std_vectorLcv_cuda_GpuMatG_isEmpty_const,
		std_vectorLcv_cuda_GpuMatG_capacity_const, std_vectorLcv_cuda_GpuMatG_shrinkToFit,
		std_vectorLcv_cuda_GpuMatG_reserve_size_t, std_vectorLcv_cuda_GpuMatG_remove_size_t,
		std_vectorLcv_cuda_GpuMatG_swap_size_t_size_t, std_vectorLcv_cuda_GpuMatG_clear,
		std_vectorLcv_cuda_GpuMatG_get_const_size_t, std_vectorLcv_cuda_GpuMatG_set_size_t_const_GpuMat,
		std_vectorLcv_cuda_GpuMatG_push_const_GpuMat, std_vectorLcv_cuda_GpuMatG_insert_size_t_const_GpuMat,
	}
	
	vector_non_copy_or_bool! { clone core::GpuMat }
	
	vector_boxed_ref! { core::GpuMat }
	
	vector_extern! { BoxedRef<'_, core::GpuMat>,
		std_vectorLcv_cuda_GpuMatG_new_const, std_vectorLcv_cuda_GpuMatG_delete,
		std_vectorLcv_cuda_GpuMatG_len_const, std_vectorLcv_cuda_GpuMatG_isEmpty_const,
		std_vectorLcv_cuda_GpuMatG_capacity_const, std_vectorLcv_cuda_GpuMatG_shrinkToFit,
		std_vectorLcv_cuda_GpuMatG_reserve_size_t, std_vectorLcv_cuda_GpuMatG_remove_size_t,
		std_vectorLcv_cuda_GpuMatG_swap_size_t_size_t, std_vectorLcv_cuda_GpuMatG_clear,
		std_vectorLcv_cuda_GpuMatG_get_const_size_t, std_vectorLcv_cuda_GpuMatG_set_size_t_const_GpuMat,
		std_vectorLcv_cuda_GpuMatG_push_const_GpuMat, std_vectorLcv_cuda_GpuMatG_insert_size_t_const_GpuMat,
	}
	
	
	pub type VectorOfKeyPoint = core::Vector<core::KeyPoint>;
	
	impl core::Vector<core::KeyPoint> {
		pub fn as_raw_VectorOfKeyPoint(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfKeyPoint(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::KeyPoint,
		std_vectorLcv_KeyPointG_new_const, std_vectorLcv_KeyPointG_delete,
		std_vectorLcv_KeyPointG_len_const, std_vectorLcv_KeyPointG_isEmpty_const,
		std_vectorLcv_KeyPointG_capacity_const, std_vectorLcv_KeyPointG_shrinkToFit,
		std_vectorLcv_KeyPointG_reserve_size_t, std_vectorLcv_KeyPointG_remove_size_t,
		std_vectorLcv_KeyPointG_swap_size_t_size_t, std_vectorLcv_KeyPointG_clear,
		std_vectorLcv_KeyPointG_get_const_size_t, std_vectorLcv_KeyPointG_set_size_t_const_KeyPoint,
		std_vectorLcv_KeyPointG_push_const_KeyPoint, std_vectorLcv_KeyPointG_insert_size_t_const_KeyPoint,
	}
	
	vector_non_copy_or_bool! { clone core::KeyPoint }
	
	vector_boxed_ref! { core::KeyPoint }
	
	vector_extern! { BoxedRef<'_, core::KeyPoint>,
		std_vectorLcv_KeyPointG_new_const, std_vectorLcv_KeyPointG_delete,
		std_vectorLcv_KeyPointG_len_const, std_vectorLcv_KeyPointG_isEmpty_const,
		std_vectorLcv_KeyPointG_capacity_const, std_vectorLcv_KeyPointG_shrinkToFit,
		std_vectorLcv_KeyPointG_reserve_size_t, std_vectorLcv_KeyPointG_remove_size_t,
		std_vectorLcv_KeyPointG_swap_size_t_size_t, std_vectorLcv_KeyPointG_clear,
		std_vectorLcv_KeyPointG_get_const_size_t, std_vectorLcv_KeyPointG_set_size_t_const_KeyPoint,
		std_vectorLcv_KeyPointG_push_const_KeyPoint, std_vectorLcv_KeyPointG_insert_size_t_const_KeyPoint,
	}
	
	
	pub type VectorOfMat = core::Vector<core::Mat>;
	
	impl core::Vector<core::Mat> {
		pub fn as_raw_VectorOfMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Mat,
		std_vectorLcv_MatG_new_const, std_vectorLcv_MatG_delete,
		std_vectorLcv_MatG_len_const, std_vectorLcv_MatG_isEmpty_const,
		std_vectorLcv_MatG_capacity_const, std_vectorLcv_MatG_shrinkToFit,
		std_vectorLcv_MatG_reserve_size_t, std_vectorLcv_MatG_remove_size_t,
		std_vectorLcv_MatG_swap_size_t_size_t, std_vectorLcv_MatG_clear,
		std_vectorLcv_MatG_get_const_size_t, std_vectorLcv_MatG_set_size_t_const_Mat,
		std_vectorLcv_MatG_push_const_Mat, std_vectorLcv_MatG_insert_size_t_const_Mat,
	}
	
	vector_non_copy_or_bool! { clone core::Mat }
	
	vector_boxed_ref! { core::Mat }
	
	vector_extern! { BoxedRef<'_, core::Mat>,
		std_vectorLcv_MatG_new_const, std_vectorLcv_MatG_delete,
		std_vectorLcv_MatG_len_const, std_vectorLcv_MatG_isEmpty_const,
		std_vectorLcv_MatG_capacity_const, std_vectorLcv_MatG_shrinkToFit,
		std_vectorLcv_MatG_reserve_size_t, std_vectorLcv_MatG_remove_size_t,
		std_vectorLcv_MatG_swap_size_t_size_t, std_vectorLcv_MatG_clear,
		std_vectorLcv_MatG_get_const_size_t, std_vectorLcv_MatG_set_size_t_const_Mat,
		std_vectorLcv_MatG_push_const_Mat, std_vectorLcv_MatG_insert_size_t_const_Mat,
	}
	
	
	pub type VectorOfPlatformInfo = core::Vector<core::PlatformInfo>;
	
	impl core::Vector<core::PlatformInfo> {
		pub fn as_raw_VectorOfPlatformInfo(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPlatformInfo(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::PlatformInfo,
		std_vectorLcv_ocl_PlatformInfoG_new_const, std_vectorLcv_ocl_PlatformInfoG_delete,
		std_vectorLcv_ocl_PlatformInfoG_len_const, std_vectorLcv_ocl_PlatformInfoG_isEmpty_const,
		std_vectorLcv_ocl_PlatformInfoG_capacity_const, std_vectorLcv_ocl_PlatformInfoG_shrinkToFit,
		std_vectorLcv_ocl_PlatformInfoG_reserve_size_t, std_vectorLcv_ocl_PlatformInfoG_remove_size_t,
		std_vectorLcv_ocl_PlatformInfoG_swap_size_t_size_t, std_vectorLcv_ocl_PlatformInfoG_clear,
		std_vectorLcv_ocl_PlatformInfoG_get_const_size_t, std_vectorLcv_ocl_PlatformInfoG_set_size_t_const_PlatformInfo,
		std_vectorLcv_ocl_PlatformInfoG_push_const_PlatformInfo, std_vectorLcv_ocl_PlatformInfoG_insert_size_t_const_PlatformInfo,
	}
	
	vector_non_copy_or_bool! { core::PlatformInfo }
	
	vector_boxed_ref! { core::PlatformInfo }
	
	vector_extern! { BoxedRef<'_, core::PlatformInfo>,
		std_vectorLcv_ocl_PlatformInfoG_new_const, std_vectorLcv_ocl_PlatformInfoG_delete,
		std_vectorLcv_ocl_PlatformInfoG_len_const, std_vectorLcv_ocl_PlatformInfoG_isEmpty_const,
		std_vectorLcv_ocl_PlatformInfoG_capacity_const, std_vectorLcv_ocl_PlatformInfoG_shrinkToFit,
		std_vectorLcv_ocl_PlatformInfoG_reserve_size_t, std_vectorLcv_ocl_PlatformInfoG_remove_size_t,
		std_vectorLcv_ocl_PlatformInfoG_swap_size_t_size_t, std_vectorLcv_ocl_PlatformInfoG_clear,
		std_vectorLcv_ocl_PlatformInfoG_get_const_size_t, std_vectorLcv_ocl_PlatformInfoG_set_size_t_const_PlatformInfo,
		std_vectorLcv_ocl_PlatformInfoG_push_const_PlatformInfo, std_vectorLcv_ocl_PlatformInfoG_insert_size_t_const_PlatformInfo,
	}
	
	
	pub type VectorOfPoint = core::Vector<core::Point>;
	
	impl core::Vector<core::Point> {
		pub fn as_raw_VectorOfPoint(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPoint(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Point,
		std_vectorLcv_PointG_new_const, std_vectorLcv_PointG_delete,
		std_vectorLcv_PointG_len_const, std_vectorLcv_PointG_isEmpty_const,
		std_vectorLcv_PointG_capacity_const, std_vectorLcv_PointG_shrinkToFit,
		std_vectorLcv_PointG_reserve_size_t, std_vectorLcv_PointG_remove_size_t,
		std_vectorLcv_PointG_swap_size_t_size_t, std_vectorLcv_PointG_clear,
		std_vectorLcv_PointG_get_const_size_t, std_vectorLcv_PointG_set_size_t_const_Point,
		std_vectorLcv_PointG_push_const_Point, std_vectorLcv_PointG_insert_size_t_const_Point,
	}
	
	vector_copy_non_bool! { core::Point,
		std_vectorLcv_PointG_data_const, std_vectorLcv_PointG_dataMut, cv_fromSlice_const_const_PointX_size_t,
		std_vectorLcv_PointG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Point> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_PointG_inputArray_const(self.as_raw_VectorOfPoint(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Point> }
	
	impl ToOutputArray for core::Vector<core::Point> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_PointG_outputArray(self.as_raw_mut_VectorOfPoint(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Point> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_PointG_inputOutputArray(self.as_raw_mut_VectorOfPoint(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Point> }
	
	pub type VectorOfPoint2d = core::Vector<core::Point2d>;
	
	impl core::Vector<core::Point2d> {
		pub fn as_raw_VectorOfPoint2d(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPoint2d(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Point2d,
		std_vectorLcv_Point2dG_new_const, std_vectorLcv_Point2dG_delete,
		std_vectorLcv_Point2dG_len_const, std_vectorLcv_Point2dG_isEmpty_const,
		std_vectorLcv_Point2dG_capacity_const, std_vectorLcv_Point2dG_shrinkToFit,
		std_vectorLcv_Point2dG_reserve_size_t, std_vectorLcv_Point2dG_remove_size_t,
		std_vectorLcv_Point2dG_swap_size_t_size_t, std_vectorLcv_Point2dG_clear,
		std_vectorLcv_Point2dG_get_const_size_t, std_vectorLcv_Point2dG_set_size_t_const_Point2d,
		std_vectorLcv_Point2dG_push_const_Point2d, std_vectorLcv_Point2dG_insert_size_t_const_Point2d,
	}
	
	vector_copy_non_bool! { core::Point2d,
		std_vectorLcv_Point2dG_data_const, std_vectorLcv_Point2dG_dataMut, cv_fromSlice_const_const_Point2dX_size_t,
		std_vectorLcv_Point2dG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Point2d> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point2dG_inputArray_const(self.as_raw_VectorOfPoint2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Point2d> }
	
	impl ToOutputArray for core::Vector<core::Point2d> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point2dG_outputArray(self.as_raw_mut_VectorOfPoint2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Point2d> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point2dG_inputOutputArray(self.as_raw_mut_VectorOfPoint2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Point2d> }
	
	pub type VectorOfPoint2f = core::Vector<core::Point2f>;
	
	impl core::Vector<core::Point2f> {
		pub fn as_raw_VectorOfPoint2f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPoint2f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Point2f,
		std_vectorLcv_Point2fG_new_const, std_vectorLcv_Point2fG_delete,
		std_vectorLcv_Point2fG_len_const, std_vectorLcv_Point2fG_isEmpty_const,
		std_vectorLcv_Point2fG_capacity_const, std_vectorLcv_Point2fG_shrinkToFit,
		std_vectorLcv_Point2fG_reserve_size_t, std_vectorLcv_Point2fG_remove_size_t,
		std_vectorLcv_Point2fG_swap_size_t_size_t, std_vectorLcv_Point2fG_clear,
		std_vectorLcv_Point2fG_get_const_size_t, std_vectorLcv_Point2fG_set_size_t_const_Point2f,
		std_vectorLcv_Point2fG_push_const_Point2f, std_vectorLcv_Point2fG_insert_size_t_const_Point2f,
	}
	
	vector_copy_non_bool! { core::Point2f,
		std_vectorLcv_Point2fG_data_const, std_vectorLcv_Point2fG_dataMut, cv_fromSlice_const_const_Point2fX_size_t,
		std_vectorLcv_Point2fG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Point2f> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point2fG_inputArray_const(self.as_raw_VectorOfPoint2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Point2f> }
	
	impl ToOutputArray for core::Vector<core::Point2f> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point2fG_outputArray(self.as_raw_mut_VectorOfPoint2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Point2f> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point2fG_inputOutputArray(self.as_raw_mut_VectorOfPoint2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Point2f> }
	
	pub type VectorOfPoint3d = core::Vector<core::Point3d>;
	
	impl core::Vector<core::Point3d> {
		pub fn as_raw_VectorOfPoint3d(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPoint3d(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Point3d,
		std_vectorLcv_Point3dG_new_const, std_vectorLcv_Point3dG_delete,
		std_vectorLcv_Point3dG_len_const, std_vectorLcv_Point3dG_isEmpty_const,
		std_vectorLcv_Point3dG_capacity_const, std_vectorLcv_Point3dG_shrinkToFit,
		std_vectorLcv_Point3dG_reserve_size_t, std_vectorLcv_Point3dG_remove_size_t,
		std_vectorLcv_Point3dG_swap_size_t_size_t, std_vectorLcv_Point3dG_clear,
		std_vectorLcv_Point3dG_get_const_size_t, std_vectorLcv_Point3dG_set_size_t_const_Point3d,
		std_vectorLcv_Point3dG_push_const_Point3d, std_vectorLcv_Point3dG_insert_size_t_const_Point3d,
	}
	
	vector_copy_non_bool! { core::Point3d,
		std_vectorLcv_Point3dG_data_const, std_vectorLcv_Point3dG_dataMut, cv_fromSlice_const_const_Point3dX_size_t,
		std_vectorLcv_Point3dG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Point3d> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3dG_inputArray_const(self.as_raw_VectorOfPoint3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Point3d> }
	
	impl ToOutputArray for core::Vector<core::Point3d> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3dG_outputArray(self.as_raw_mut_VectorOfPoint3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Point3d> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3dG_inputOutputArray(self.as_raw_mut_VectorOfPoint3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Point3d> }
	
	pub type VectorOfPoint3f = core::Vector<core::Point3f>;
	
	impl core::Vector<core::Point3f> {
		pub fn as_raw_VectorOfPoint3f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPoint3f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Point3f,
		std_vectorLcv_Point3fG_new_const, std_vectorLcv_Point3fG_delete,
		std_vectorLcv_Point3fG_len_const, std_vectorLcv_Point3fG_isEmpty_const,
		std_vectorLcv_Point3fG_capacity_const, std_vectorLcv_Point3fG_shrinkToFit,
		std_vectorLcv_Point3fG_reserve_size_t, std_vectorLcv_Point3fG_remove_size_t,
		std_vectorLcv_Point3fG_swap_size_t_size_t, std_vectorLcv_Point3fG_clear,
		std_vectorLcv_Point3fG_get_const_size_t, std_vectorLcv_Point3fG_set_size_t_const_Point3f,
		std_vectorLcv_Point3fG_push_const_Point3f, std_vectorLcv_Point3fG_insert_size_t_const_Point3f,
	}
	
	vector_copy_non_bool! { core::Point3f,
		std_vectorLcv_Point3fG_data_const, std_vectorLcv_Point3fG_dataMut, cv_fromSlice_const_const_Point3fX_size_t,
		std_vectorLcv_Point3fG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Point3f> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3fG_inputArray_const(self.as_raw_VectorOfPoint3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Point3f> }
	
	impl ToOutputArray for core::Vector<core::Point3f> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3fG_outputArray(self.as_raw_mut_VectorOfPoint3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Point3f> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3fG_inputOutputArray(self.as_raw_mut_VectorOfPoint3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Point3f> }
	
	pub type VectorOfPoint3i = core::Vector<core::Point3i>;
	
	impl core::Vector<core::Point3i> {
		pub fn as_raw_VectorOfPoint3i(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPoint3i(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Point3i,
		std_vectorLcv_Point3iG_new_const, std_vectorLcv_Point3iG_delete,
		std_vectorLcv_Point3iG_len_const, std_vectorLcv_Point3iG_isEmpty_const,
		std_vectorLcv_Point3iG_capacity_const, std_vectorLcv_Point3iG_shrinkToFit,
		std_vectorLcv_Point3iG_reserve_size_t, std_vectorLcv_Point3iG_remove_size_t,
		std_vectorLcv_Point3iG_swap_size_t_size_t, std_vectorLcv_Point3iG_clear,
		std_vectorLcv_Point3iG_get_const_size_t, std_vectorLcv_Point3iG_set_size_t_const_Point3i,
		std_vectorLcv_Point3iG_push_const_Point3i, std_vectorLcv_Point3iG_insert_size_t_const_Point3i,
	}
	
	vector_copy_non_bool! { core::Point3i,
		std_vectorLcv_Point3iG_data_const, std_vectorLcv_Point3iG_dataMut, cv_fromSlice_const_const_Point3iX_size_t,
		std_vectorLcv_Point3iG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Point3i> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3iG_inputArray_const(self.as_raw_VectorOfPoint3i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Point3i> }
	
	impl ToOutputArray for core::Vector<core::Point3i> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3iG_outputArray(self.as_raw_mut_VectorOfPoint3i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Point3i> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Point3iG_inputOutputArray(self.as_raw_mut_VectorOfPoint3i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Point3i> }
	
	pub type VectorOfRange = core::Vector<core::Range>;
	
	impl core::Vector<core::Range> {
		pub fn as_raw_VectorOfRange(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfRange(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Range,
		std_vectorLcv_RangeG_new_const, std_vectorLcv_RangeG_delete,
		std_vectorLcv_RangeG_len_const, std_vectorLcv_RangeG_isEmpty_const,
		std_vectorLcv_RangeG_capacity_const, std_vectorLcv_RangeG_shrinkToFit,
		std_vectorLcv_RangeG_reserve_size_t, std_vectorLcv_RangeG_remove_size_t,
		std_vectorLcv_RangeG_swap_size_t_size_t, std_vectorLcv_RangeG_clear,
		std_vectorLcv_RangeG_get_const_size_t, std_vectorLcv_RangeG_set_size_t_const_Range,
		std_vectorLcv_RangeG_push_const_Range, std_vectorLcv_RangeG_insert_size_t_const_Range,
	}
	
	vector_non_copy_or_bool! { core::Range }
	
	vector_boxed_ref! { core::Range }
	
	vector_extern! { BoxedRef<'_, core::Range>,
		std_vectorLcv_RangeG_new_const, std_vectorLcv_RangeG_delete,
		std_vectorLcv_RangeG_len_const, std_vectorLcv_RangeG_isEmpty_const,
		std_vectorLcv_RangeG_capacity_const, std_vectorLcv_RangeG_shrinkToFit,
		std_vectorLcv_RangeG_reserve_size_t, std_vectorLcv_RangeG_remove_size_t,
		std_vectorLcv_RangeG_swap_size_t_size_t, std_vectorLcv_RangeG_clear,
		std_vectorLcv_RangeG_get_const_size_t, std_vectorLcv_RangeG_set_size_t_const_Range,
		std_vectorLcv_RangeG_push_const_Range, std_vectorLcv_RangeG_insert_size_t_const_Range,
	}
	
	
	pub type VectorOfRect = core::Vector<core::Rect>;
	
	impl core::Vector<core::Rect> {
		pub fn as_raw_VectorOfRect(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfRect(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Rect,
		std_vectorLcv_RectG_new_const, std_vectorLcv_RectG_delete,
		std_vectorLcv_RectG_len_const, std_vectorLcv_RectG_isEmpty_const,
		std_vectorLcv_RectG_capacity_const, std_vectorLcv_RectG_shrinkToFit,
		std_vectorLcv_RectG_reserve_size_t, std_vectorLcv_RectG_remove_size_t,
		std_vectorLcv_RectG_swap_size_t_size_t, std_vectorLcv_RectG_clear,
		std_vectorLcv_RectG_get_const_size_t, std_vectorLcv_RectG_set_size_t_const_Rect,
		std_vectorLcv_RectG_push_const_Rect, std_vectorLcv_RectG_insert_size_t_const_Rect,
	}
	
	vector_copy_non_bool! { core::Rect,
		std_vectorLcv_RectG_data_const, std_vectorLcv_RectG_dataMut, cv_fromSlice_const_const_RectX_size_t,
		std_vectorLcv_RectG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Rect> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_RectG_inputArray_const(self.as_raw_VectorOfRect(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Rect> }
	
	impl ToOutputArray for core::Vector<core::Rect> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_RectG_outputArray(self.as_raw_mut_VectorOfRect(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Rect> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_RectG_inputOutputArray(self.as_raw_mut_VectorOfRect(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Rect> }
	
	pub type VectorOfRect2d = core::Vector<core::Rect2d>;
	
	impl core::Vector<core::Rect2d> {
		pub fn as_raw_VectorOfRect2d(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfRect2d(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Rect2d,
		std_vectorLcv_Rect2dG_new_const, std_vectorLcv_Rect2dG_delete,
		std_vectorLcv_Rect2dG_len_const, std_vectorLcv_Rect2dG_isEmpty_const,
		std_vectorLcv_Rect2dG_capacity_const, std_vectorLcv_Rect2dG_shrinkToFit,
		std_vectorLcv_Rect2dG_reserve_size_t, std_vectorLcv_Rect2dG_remove_size_t,
		std_vectorLcv_Rect2dG_swap_size_t_size_t, std_vectorLcv_Rect2dG_clear,
		std_vectorLcv_Rect2dG_get_const_size_t, std_vectorLcv_Rect2dG_set_size_t_const_Rect2d,
		std_vectorLcv_Rect2dG_push_const_Rect2d, std_vectorLcv_Rect2dG_insert_size_t_const_Rect2d,
	}
	
	vector_copy_non_bool! { core::Rect2d,
		std_vectorLcv_Rect2dG_data_const, std_vectorLcv_Rect2dG_dataMut, cv_fromSlice_const_const_Rect2dX_size_t,
		std_vectorLcv_Rect2dG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Rect2d> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Rect2dG_inputArray_const(self.as_raw_VectorOfRect2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Rect2d> }
	
	impl ToOutputArray for core::Vector<core::Rect2d> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Rect2dG_outputArray(self.as_raw_mut_VectorOfRect2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Rect2d> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Rect2dG_inputOutputArray(self.as_raw_mut_VectorOfRect2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Rect2d> }
	
	pub type VectorOfRotatedRect = core::Vector<core::RotatedRect>;
	
	impl core::Vector<core::RotatedRect> {
		pub fn as_raw_VectorOfRotatedRect(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfRotatedRect(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::RotatedRect,
		std_vectorLcv_RotatedRectG_new_const, std_vectorLcv_RotatedRectG_delete,
		std_vectorLcv_RotatedRectG_len_const, std_vectorLcv_RotatedRectG_isEmpty_const,
		std_vectorLcv_RotatedRectG_capacity_const, std_vectorLcv_RotatedRectG_shrinkToFit,
		std_vectorLcv_RotatedRectG_reserve_size_t, std_vectorLcv_RotatedRectG_remove_size_t,
		std_vectorLcv_RotatedRectG_swap_size_t_size_t, std_vectorLcv_RotatedRectG_clear,
		std_vectorLcv_RotatedRectG_get_const_size_t, std_vectorLcv_RotatedRectG_set_size_t_const_RotatedRect,
		std_vectorLcv_RotatedRectG_push_const_RotatedRect, std_vectorLcv_RotatedRectG_insert_size_t_const_RotatedRect,
	}
	
	vector_copy_non_bool! { core::RotatedRect,
		std_vectorLcv_RotatedRectG_data_const, std_vectorLcv_RotatedRectG_dataMut, cv_fromSlice_const_const_RotatedRectX_size_t,
		std_vectorLcv_RotatedRectG_clone_const,
	}
	
	
	pub type VectorOfScalar = core::Vector<core::Scalar>;
	
	impl core::Vector<core::Scalar> {
		pub fn as_raw_VectorOfScalar(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfScalar(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Scalar,
		std_vectorLcv_ScalarG_new_const, std_vectorLcv_ScalarG_delete,
		std_vectorLcv_ScalarG_len_const, std_vectorLcv_ScalarG_isEmpty_const,
		std_vectorLcv_ScalarG_capacity_const, std_vectorLcv_ScalarG_shrinkToFit,
		std_vectorLcv_ScalarG_reserve_size_t, std_vectorLcv_ScalarG_remove_size_t,
		std_vectorLcv_ScalarG_swap_size_t_size_t, std_vectorLcv_ScalarG_clear,
		std_vectorLcv_ScalarG_get_const_size_t, std_vectorLcv_ScalarG_set_size_t_const_Scalar,
		std_vectorLcv_ScalarG_push_const_Scalar, std_vectorLcv_ScalarG_insert_size_t_const_Scalar,
	}
	
	vector_copy_non_bool! { core::Scalar,
		std_vectorLcv_ScalarG_data_const, std_vectorLcv_ScalarG_dataMut, cv_fromSlice_const_const_ScalarX_size_t,
		std_vectorLcv_ScalarG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Scalar> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_ScalarG_inputArray_const(self.as_raw_VectorOfScalar(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Scalar> }
	
	impl ToOutputArray for core::Vector<core::Scalar> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_ScalarG_outputArray(self.as_raw_mut_VectorOfScalar(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Scalar> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_ScalarG_inputOutputArray(self.as_raw_mut_VectorOfScalar(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Scalar> }
	
	pub type VectorOfSize = core::Vector<core::Size>;
	
	impl core::Vector<core::Size> {
		pub fn as_raw_VectorOfSize(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfSize(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Size,
		std_vectorLcv_SizeG_new_const, std_vectorLcv_SizeG_delete,
		std_vectorLcv_SizeG_len_const, std_vectorLcv_SizeG_isEmpty_const,
		std_vectorLcv_SizeG_capacity_const, std_vectorLcv_SizeG_shrinkToFit,
		std_vectorLcv_SizeG_reserve_size_t, std_vectorLcv_SizeG_remove_size_t,
		std_vectorLcv_SizeG_swap_size_t_size_t, std_vectorLcv_SizeG_clear,
		std_vectorLcv_SizeG_get_const_size_t, std_vectorLcv_SizeG_set_size_t_const_Size,
		std_vectorLcv_SizeG_push_const_Size, std_vectorLcv_SizeG_insert_size_t_const_Size,
	}
	
	vector_copy_non_bool! { core::Size,
		std_vectorLcv_SizeG_data_const, std_vectorLcv_SizeG_dataMut, cv_fromSlice_const_const_SizeX_size_t,
		std_vectorLcv_SizeG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Size> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_SizeG_inputArray_const(self.as_raw_VectorOfSize(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Size> }
	
	impl ToOutputArray for core::Vector<core::Size> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_SizeG_outputArray(self.as_raw_mut_VectorOfSize(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Size> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_SizeG_inputOutputArray(self.as_raw_mut_VectorOfSize(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Size> }
	
	pub type VectorOfString = core::Vector<String>;
	
	impl core::Vector<String> {
		pub fn as_raw_VectorOfString(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfString(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { String,
		std_vectorLcv_StringG_new_const, std_vectorLcv_StringG_delete,
		std_vectorLcv_StringG_len_const, std_vectorLcv_StringG_isEmpty_const,
		std_vectorLcv_StringG_capacity_const, std_vectorLcv_StringG_shrinkToFit,
		std_vectorLcv_StringG_reserve_size_t, std_vectorLcv_StringG_remove_size_t,
		std_vectorLcv_StringG_swap_size_t_size_t, std_vectorLcv_StringG_clear,
		std_vectorLcv_StringG_get_const_size_t, std_vectorLcv_StringG_set_size_t_const_String,
		std_vectorLcv_StringG_push_const_String, std_vectorLcv_StringG_insert_size_t_const_String,
	}
	
	vector_non_copy_or_bool! { String }
	
	
	pub type VectorOfTupleOfUMat_u8 = core::Vector<core::Tuple<(core::UMat, u8)>>;
	
	impl core::Vector<core::Tuple<(core::UMat, u8)>> {
		pub fn as_raw_VectorOfTupleOfUMat_u8(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfTupleOfUMat_u8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Tuple<(core::UMat, u8)>,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_new_const, std_vectorLstd_pairLcv_UMat__unsigned_charGG_delete,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_len_const, std_vectorLstd_pairLcv_UMat__unsigned_charGG_isEmpty_const,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_capacity_const, std_vectorLstd_pairLcv_UMat__unsigned_charGG_shrinkToFit,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_reserve_size_t, std_vectorLstd_pairLcv_UMat__unsigned_charGG_remove_size_t,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_swap_size_t_size_t, std_vectorLstd_pairLcv_UMat__unsigned_charGG_clear,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_get_const_size_t, std_vectorLstd_pairLcv_UMat__unsigned_charGG_set_size_t_const_pairLcv_UMat__unsigned_charG,
		std_vectorLstd_pairLcv_UMat__unsigned_charGG_push_const_pairLcv_UMat__unsigned_charG, std_vectorLstd_pairLcv_UMat__unsigned_charGG_insert_size_t_const_pairLcv_UMat__unsigned_charG,
	}
	
	vector_non_copy_or_bool! { core::Tuple<(core::UMat, u8)> }
	
	
	pub type VectorOfUMat = core::Vector<core::UMat>;
	
	impl core::Vector<core::UMat> {
		pub fn as_raw_VectorOfUMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfUMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::UMat,
		std_vectorLcv_UMatG_new_const, std_vectorLcv_UMatG_delete,
		std_vectorLcv_UMatG_len_const, std_vectorLcv_UMatG_isEmpty_const,
		std_vectorLcv_UMatG_capacity_const, std_vectorLcv_UMatG_shrinkToFit,
		std_vectorLcv_UMatG_reserve_size_t, std_vectorLcv_UMatG_remove_size_t,
		std_vectorLcv_UMatG_swap_size_t_size_t, std_vectorLcv_UMatG_clear,
		std_vectorLcv_UMatG_get_const_size_t, std_vectorLcv_UMatG_set_size_t_const_UMat,
		std_vectorLcv_UMatG_push_const_UMat, std_vectorLcv_UMatG_insert_size_t_const_UMat,
	}
	
	vector_non_copy_or_bool! { clone core::UMat }
	
	vector_boxed_ref! { core::UMat }
	
	vector_extern! { BoxedRef<'_, core::UMat>,
		std_vectorLcv_UMatG_new_const, std_vectorLcv_UMatG_delete,
		std_vectorLcv_UMatG_len_const, std_vectorLcv_UMatG_isEmpty_const,
		std_vectorLcv_UMatG_capacity_const, std_vectorLcv_UMatG_shrinkToFit,
		std_vectorLcv_UMatG_reserve_size_t, std_vectorLcv_UMatG_remove_size_t,
		std_vectorLcv_UMatG_swap_size_t_size_t, std_vectorLcv_UMatG_clear,
		std_vectorLcv_UMatG_get_const_size_t, std_vectorLcv_UMatG_set_size_t_const_UMat,
		std_vectorLcv_UMatG_push_const_UMat, std_vectorLcv_UMatG_insert_size_t_const_UMat,
	}
	
	
	pub type VectorOfVec2d = core::Vector<core::Vec2d>;
	
	impl core::Vector<core::Vec2d> {
		pub fn as_raw_VectorOfVec2d(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec2d(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec2d,
		std_vectorLcv_Vec2dG_new_const, std_vectorLcv_Vec2dG_delete,
		std_vectorLcv_Vec2dG_len_const, std_vectorLcv_Vec2dG_isEmpty_const,
		std_vectorLcv_Vec2dG_capacity_const, std_vectorLcv_Vec2dG_shrinkToFit,
		std_vectorLcv_Vec2dG_reserve_size_t, std_vectorLcv_Vec2dG_remove_size_t,
		std_vectorLcv_Vec2dG_swap_size_t_size_t, std_vectorLcv_Vec2dG_clear,
		std_vectorLcv_Vec2dG_get_const_size_t, std_vectorLcv_Vec2dG_set_size_t_const_Vec2d,
		std_vectorLcv_Vec2dG_push_const_Vec2d, std_vectorLcv_Vec2dG_insert_size_t_const_Vec2d,
	}
	
	vector_copy_non_bool! { core::Vec2d,
		std_vectorLcv_Vec2dG_data_const, std_vectorLcv_Vec2dG_dataMut, cv_fromSlice_const_const_Vec2dX_size_t,
		std_vectorLcv_Vec2dG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec2d> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec2dG_inputArray_const(self.as_raw_VectorOfVec2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec2d> }
	
	impl ToOutputArray for core::Vector<core::Vec2d> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec2dG_outputArray(self.as_raw_mut_VectorOfVec2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec2d> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec2dG_inputOutputArray(self.as_raw_mut_VectorOfVec2d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec2d> }
	
	pub type VectorOfVec2f = core::Vector<core::Vec2f>;
	
	impl core::Vector<core::Vec2f> {
		pub fn as_raw_VectorOfVec2f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec2f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec2f,
		std_vectorLcv_Vec2fG_new_const, std_vectorLcv_Vec2fG_delete,
		std_vectorLcv_Vec2fG_len_const, std_vectorLcv_Vec2fG_isEmpty_const,
		std_vectorLcv_Vec2fG_capacity_const, std_vectorLcv_Vec2fG_shrinkToFit,
		std_vectorLcv_Vec2fG_reserve_size_t, std_vectorLcv_Vec2fG_remove_size_t,
		std_vectorLcv_Vec2fG_swap_size_t_size_t, std_vectorLcv_Vec2fG_clear,
		std_vectorLcv_Vec2fG_get_const_size_t, std_vectorLcv_Vec2fG_set_size_t_const_Vec2f,
		std_vectorLcv_Vec2fG_push_const_Vec2f, std_vectorLcv_Vec2fG_insert_size_t_const_Vec2f,
	}
	
	vector_copy_non_bool! { core::Vec2f,
		std_vectorLcv_Vec2fG_data_const, std_vectorLcv_Vec2fG_dataMut, cv_fromSlice_const_const_Vec2fX_size_t,
		std_vectorLcv_Vec2fG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec2f> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec2fG_inputArray_const(self.as_raw_VectorOfVec2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec2f> }
	
	impl ToOutputArray for core::Vector<core::Vec2f> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec2fG_outputArray(self.as_raw_mut_VectorOfVec2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec2f> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec2fG_inputOutputArray(self.as_raw_mut_VectorOfVec2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec2f> }
	
	pub type VectorOfVec3d = core::Vector<core::Vec3d>;
	
	impl core::Vector<core::Vec3d> {
		pub fn as_raw_VectorOfVec3d(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec3d(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec3d,
		std_vectorLcv_Vec3dG_new_const, std_vectorLcv_Vec3dG_delete,
		std_vectorLcv_Vec3dG_len_const, std_vectorLcv_Vec3dG_isEmpty_const,
		std_vectorLcv_Vec3dG_capacity_const, std_vectorLcv_Vec3dG_shrinkToFit,
		std_vectorLcv_Vec3dG_reserve_size_t, std_vectorLcv_Vec3dG_remove_size_t,
		std_vectorLcv_Vec3dG_swap_size_t_size_t, std_vectorLcv_Vec3dG_clear,
		std_vectorLcv_Vec3dG_get_const_size_t, std_vectorLcv_Vec3dG_set_size_t_const_Vec3d,
		std_vectorLcv_Vec3dG_push_const_Vec3d, std_vectorLcv_Vec3dG_insert_size_t_const_Vec3d,
	}
	
	vector_copy_non_bool! { core::Vec3d,
		std_vectorLcv_Vec3dG_data_const, std_vectorLcv_Vec3dG_dataMut, cv_fromSlice_const_const_Vec3dX_size_t,
		std_vectorLcv_Vec3dG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec3d> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec3dG_inputArray_const(self.as_raw_VectorOfVec3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec3d> }
	
	impl ToOutputArray for core::Vector<core::Vec3d> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec3dG_outputArray(self.as_raw_mut_VectorOfVec3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec3d> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec3dG_inputOutputArray(self.as_raw_mut_VectorOfVec3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec3d> }
	
	pub type VectorOfVec3f = core::Vector<core::Vec3f>;
	
	impl core::Vector<core::Vec3f> {
		pub fn as_raw_VectorOfVec3f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec3f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec3f,
		std_vectorLcv_Vec3fG_new_const, std_vectorLcv_Vec3fG_delete,
		std_vectorLcv_Vec3fG_len_const, std_vectorLcv_Vec3fG_isEmpty_const,
		std_vectorLcv_Vec3fG_capacity_const, std_vectorLcv_Vec3fG_shrinkToFit,
		std_vectorLcv_Vec3fG_reserve_size_t, std_vectorLcv_Vec3fG_remove_size_t,
		std_vectorLcv_Vec3fG_swap_size_t_size_t, std_vectorLcv_Vec3fG_clear,
		std_vectorLcv_Vec3fG_get_const_size_t, std_vectorLcv_Vec3fG_set_size_t_const_Vec3f,
		std_vectorLcv_Vec3fG_push_const_Vec3f, std_vectorLcv_Vec3fG_insert_size_t_const_Vec3f,
	}
	
	vector_copy_non_bool! { core::Vec3f,
		std_vectorLcv_Vec3fG_data_const, std_vectorLcv_Vec3fG_dataMut, cv_fromSlice_const_const_Vec3fX_size_t,
		std_vectorLcv_Vec3fG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec3f> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec3fG_inputArray_const(self.as_raw_VectorOfVec3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec3f> }
	
	impl ToOutputArray for core::Vector<core::Vec3f> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec3fG_outputArray(self.as_raw_mut_VectorOfVec3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec3f> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec3fG_inputOutputArray(self.as_raw_mut_VectorOfVec3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec3f> }
	
	pub type VectorOfVec4f = core::Vector<core::Vec4f>;
	
	impl core::Vector<core::Vec4f> {
		pub fn as_raw_VectorOfVec4f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec4f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec4f,
		std_vectorLcv_Vec4fG_new_const, std_vectorLcv_Vec4fG_delete,
		std_vectorLcv_Vec4fG_len_const, std_vectorLcv_Vec4fG_isEmpty_const,
		std_vectorLcv_Vec4fG_capacity_const, std_vectorLcv_Vec4fG_shrinkToFit,
		std_vectorLcv_Vec4fG_reserve_size_t, std_vectorLcv_Vec4fG_remove_size_t,
		std_vectorLcv_Vec4fG_swap_size_t_size_t, std_vectorLcv_Vec4fG_clear,
		std_vectorLcv_Vec4fG_get_const_size_t, std_vectorLcv_Vec4fG_set_size_t_const_Vec4f,
		std_vectorLcv_Vec4fG_push_const_Vec4f, std_vectorLcv_Vec4fG_insert_size_t_const_Vec4f,
	}
	
	vector_copy_non_bool! { core::Vec4f,
		std_vectorLcv_Vec4fG_data_const, std_vectorLcv_Vec4fG_dataMut, cv_fromSlice_const_const_Vec4fX_size_t,
		std_vectorLcv_Vec4fG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec4f> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec4fG_inputArray_const(self.as_raw_VectorOfVec4f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec4f> }
	
	impl ToOutputArray for core::Vector<core::Vec4f> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec4fG_outputArray(self.as_raw_mut_VectorOfVec4f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec4f> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec4fG_inputOutputArray(self.as_raw_mut_VectorOfVec4f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec4f> }
	
	pub type VectorOfVec4i = core::Vector<core::Vec4i>;
	
	impl core::Vector<core::Vec4i> {
		pub fn as_raw_VectorOfVec4i(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec4i(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec4i,
		std_vectorLcv_Vec4iG_new_const, std_vectorLcv_Vec4iG_delete,
		std_vectorLcv_Vec4iG_len_const, std_vectorLcv_Vec4iG_isEmpty_const,
		std_vectorLcv_Vec4iG_capacity_const, std_vectorLcv_Vec4iG_shrinkToFit,
		std_vectorLcv_Vec4iG_reserve_size_t, std_vectorLcv_Vec4iG_remove_size_t,
		std_vectorLcv_Vec4iG_swap_size_t_size_t, std_vectorLcv_Vec4iG_clear,
		std_vectorLcv_Vec4iG_get_const_size_t, std_vectorLcv_Vec4iG_set_size_t_const_Vec4i,
		std_vectorLcv_Vec4iG_push_const_Vec4i, std_vectorLcv_Vec4iG_insert_size_t_const_Vec4i,
	}
	
	vector_copy_non_bool! { core::Vec4i,
		std_vectorLcv_Vec4iG_data_const, std_vectorLcv_Vec4iG_dataMut, cv_fromSlice_const_const_Vec4iX_size_t,
		std_vectorLcv_Vec4iG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec4i> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec4iG_inputArray_const(self.as_raw_VectorOfVec4i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec4i> }
	
	impl ToOutputArray for core::Vector<core::Vec4i> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec4iG_outputArray(self.as_raw_mut_VectorOfVec4i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec4i> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec4iG_inputOutputArray(self.as_raw_mut_VectorOfVec4i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec4i> }
	
	pub type VectorOfVec6f = core::Vector<core::Vec6f>;
	
	impl core::Vector<core::Vec6f> {
		pub fn as_raw_VectorOfVec6f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVec6f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vec6f,
		std_vectorLcv_Vec6fG_new_const, std_vectorLcv_Vec6fG_delete,
		std_vectorLcv_Vec6fG_len_const, std_vectorLcv_Vec6fG_isEmpty_const,
		std_vectorLcv_Vec6fG_capacity_const, std_vectorLcv_Vec6fG_shrinkToFit,
		std_vectorLcv_Vec6fG_reserve_size_t, std_vectorLcv_Vec6fG_remove_size_t,
		std_vectorLcv_Vec6fG_swap_size_t_size_t, std_vectorLcv_Vec6fG_clear,
		std_vectorLcv_Vec6fG_get_const_size_t, std_vectorLcv_Vec6fG_set_size_t_const_Vec6f,
		std_vectorLcv_Vec6fG_push_const_Vec6f, std_vectorLcv_Vec6fG_insert_size_t_const_Vec6f,
	}
	
	vector_copy_non_bool! { core::Vec6f,
		std_vectorLcv_Vec6fG_data_const, std_vectorLcv_Vec6fG_dataMut, cv_fromSlice_const_const_Vec6fX_size_t,
		std_vectorLcv_Vec6fG_clone_const,
	}
	
	impl ToInputArray for core::Vector<core::Vec6f> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec6fG_inputArray_const(self.as_raw_VectorOfVec6f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vec6f> }
	
	impl ToOutputArray for core::Vector<core::Vec6f> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec6fG_outputArray(self.as_raw_mut_VectorOfVec6f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vec6f> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLcv_Vec6fG_inputOutputArray(self.as_raw_mut_VectorOfVec6f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vec6f> }
	
	pub type VectorOfVectorOfDMatch = core::Vector<core::Vector<core::DMatch>>;
	
	impl core::Vector<core::Vector<core::DMatch>> {
		pub fn as_raw_VectorOfVectorOfDMatch(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfDMatch(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::DMatch>,
		std_vectorLstd_vectorLcv_DMatchGG_new_const, std_vectorLstd_vectorLcv_DMatchGG_delete,
		std_vectorLstd_vectorLcv_DMatchGG_len_const, std_vectorLstd_vectorLcv_DMatchGG_isEmpty_const,
		std_vectorLstd_vectorLcv_DMatchGG_capacity_const, std_vectorLstd_vectorLcv_DMatchGG_shrinkToFit,
		std_vectorLstd_vectorLcv_DMatchGG_reserve_size_t, std_vectorLstd_vectorLcv_DMatchGG_remove_size_t,
		std_vectorLstd_vectorLcv_DMatchGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_DMatchGG_clear,
		std_vectorLstd_vectorLcv_DMatchGG_get_const_size_t, std_vectorLstd_vectorLcv_DMatchGG_set_size_t_const_vectorLDMatchG,
		std_vectorLstd_vectorLcv_DMatchGG_push_const_vectorLDMatchG, std_vectorLstd_vectorLcv_DMatchGG_insert_size_t_const_vectorLDMatchG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::DMatch> }
	
	
	pub type VectorOfVectorOfKeyPoint = core::Vector<core::Vector<core::KeyPoint>>;
	
	impl core::Vector<core::Vector<core::KeyPoint>> {
		pub fn as_raw_VectorOfVectorOfKeyPoint(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfKeyPoint(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::KeyPoint>,
		std_vectorLstd_vectorLcv_KeyPointGG_new_const, std_vectorLstd_vectorLcv_KeyPointGG_delete,
		std_vectorLstd_vectorLcv_KeyPointGG_len_const, std_vectorLstd_vectorLcv_KeyPointGG_isEmpty_const,
		std_vectorLstd_vectorLcv_KeyPointGG_capacity_const, std_vectorLstd_vectorLcv_KeyPointGG_shrinkToFit,
		std_vectorLstd_vectorLcv_KeyPointGG_reserve_size_t, std_vectorLstd_vectorLcv_KeyPointGG_remove_size_t,
		std_vectorLstd_vectorLcv_KeyPointGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_KeyPointGG_clear,
		std_vectorLstd_vectorLcv_KeyPointGG_get_const_size_t, std_vectorLstd_vectorLcv_KeyPointGG_set_size_t_const_vectorLKeyPointG,
		std_vectorLstd_vectorLcv_KeyPointGG_push_const_vectorLKeyPointG, std_vectorLstd_vectorLcv_KeyPointGG_insert_size_t_const_vectorLKeyPointG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::KeyPoint> }
	
	
	pub type VectorOfVectorOfMat = core::Vector<core::Vector<core::Mat>>;
	
	impl core::Vector<core::Vector<core::Mat>> {
		pub fn as_raw_VectorOfVectorOfMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Mat>,
		std_vectorLstd_vectorLcv_MatGG_new_const, std_vectorLstd_vectorLcv_MatGG_delete,
		std_vectorLstd_vectorLcv_MatGG_len_const, std_vectorLstd_vectorLcv_MatGG_isEmpty_const,
		std_vectorLstd_vectorLcv_MatGG_capacity_const, std_vectorLstd_vectorLcv_MatGG_shrinkToFit,
		std_vectorLstd_vectorLcv_MatGG_reserve_size_t, std_vectorLstd_vectorLcv_MatGG_remove_size_t,
		std_vectorLstd_vectorLcv_MatGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_MatGG_clear,
		std_vectorLstd_vectorLcv_MatGG_get_const_size_t, std_vectorLstd_vectorLcv_MatGG_set_size_t_const_vectorLMatG,
		std_vectorLstd_vectorLcv_MatGG_push_const_vectorLMatG, std_vectorLstd_vectorLcv_MatGG_insert_size_t_const_vectorLMatG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Mat> }
	
	
	pub type VectorOfVectorOfPoint = core::Vector<core::Vector<core::Point>>;
	
	impl core::Vector<core::Vector<core::Point>> {
		pub fn as_raw_VectorOfVectorOfPoint(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfPoint(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Point>,
		std_vectorLstd_vectorLcv_PointGG_new_const, std_vectorLstd_vectorLcv_PointGG_delete,
		std_vectorLstd_vectorLcv_PointGG_len_const, std_vectorLstd_vectorLcv_PointGG_isEmpty_const,
		std_vectorLstd_vectorLcv_PointGG_capacity_const, std_vectorLstd_vectorLcv_PointGG_shrinkToFit,
		std_vectorLstd_vectorLcv_PointGG_reserve_size_t, std_vectorLstd_vectorLcv_PointGG_remove_size_t,
		std_vectorLstd_vectorLcv_PointGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_PointGG_clear,
		std_vectorLstd_vectorLcv_PointGG_get_const_size_t, std_vectorLstd_vectorLcv_PointGG_set_size_t_const_vectorLPointG,
		std_vectorLstd_vectorLcv_PointGG_push_const_vectorLPointG, std_vectorLstd_vectorLcv_PointGG_insert_size_t_const_vectorLPointG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Point> }
	
	impl ToInputArray for core::Vector<core::Vector<core::Point>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_PointGG_inputArray_const(self.as_raw_VectorOfVectorOfPoint(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<core::Point>> }
	
	impl ToOutputArray for core::Vector<core::Vector<core::Point>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_PointGG_outputArray(self.as_raw_mut_VectorOfVectorOfPoint(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<core::Point>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_PointGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfPoint(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<core::Point>> }
	
	pub type VectorOfVectorOfPoint2f = core::Vector<core::Vector<core::Point2f>>;
	
	impl core::Vector<core::Vector<core::Point2f>> {
		pub fn as_raw_VectorOfVectorOfPoint2f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfPoint2f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Point2f>,
		std_vectorLstd_vectorLcv_Point2fGG_new_const, std_vectorLstd_vectorLcv_Point2fGG_delete,
		std_vectorLstd_vectorLcv_Point2fGG_len_const, std_vectorLstd_vectorLcv_Point2fGG_isEmpty_const,
		std_vectorLstd_vectorLcv_Point2fGG_capacity_const, std_vectorLstd_vectorLcv_Point2fGG_shrinkToFit,
		std_vectorLstd_vectorLcv_Point2fGG_reserve_size_t, std_vectorLstd_vectorLcv_Point2fGG_remove_size_t,
		std_vectorLstd_vectorLcv_Point2fGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_Point2fGG_clear,
		std_vectorLstd_vectorLcv_Point2fGG_get_const_size_t, std_vectorLstd_vectorLcv_Point2fGG_set_size_t_const_vectorLPoint2fG,
		std_vectorLstd_vectorLcv_Point2fGG_push_const_vectorLPoint2fG, std_vectorLstd_vectorLcv_Point2fGG_insert_size_t_const_vectorLPoint2fG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Point2f> }
	
	impl ToInputArray for core::Vector<core::Vector<core::Point2f>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point2fGG_inputArray_const(self.as_raw_VectorOfVectorOfPoint2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<core::Point2f>> }
	
	impl ToOutputArray for core::Vector<core::Vector<core::Point2f>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point2fGG_outputArray(self.as_raw_mut_VectorOfVectorOfPoint2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<core::Point2f>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point2fGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfPoint2f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<core::Point2f>> }
	
	pub type VectorOfVectorOfPoint3d = core::Vector<core::Vector<core::Point3d>>;
	
	impl core::Vector<core::Vector<core::Point3d>> {
		pub fn as_raw_VectorOfVectorOfPoint3d(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfPoint3d(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Point3d>,
		std_vectorLstd_vectorLcv_Point3dGG_new_const, std_vectorLstd_vectorLcv_Point3dGG_delete,
		std_vectorLstd_vectorLcv_Point3dGG_len_const, std_vectorLstd_vectorLcv_Point3dGG_isEmpty_const,
		std_vectorLstd_vectorLcv_Point3dGG_capacity_const, std_vectorLstd_vectorLcv_Point3dGG_shrinkToFit,
		std_vectorLstd_vectorLcv_Point3dGG_reserve_size_t, std_vectorLstd_vectorLcv_Point3dGG_remove_size_t,
		std_vectorLstd_vectorLcv_Point3dGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_Point3dGG_clear,
		std_vectorLstd_vectorLcv_Point3dGG_get_const_size_t, std_vectorLstd_vectorLcv_Point3dGG_set_size_t_const_vectorLPoint3dG,
		std_vectorLstd_vectorLcv_Point3dGG_push_const_vectorLPoint3dG, std_vectorLstd_vectorLcv_Point3dGG_insert_size_t_const_vectorLPoint3dG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Point3d> }
	
	impl ToInputArray for core::Vector<core::Vector<core::Point3d>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3dGG_inputArray_const(self.as_raw_VectorOfVectorOfPoint3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<core::Point3d>> }
	
	impl ToOutputArray for core::Vector<core::Vector<core::Point3d>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3dGG_outputArray(self.as_raw_mut_VectorOfVectorOfPoint3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<core::Point3d>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3dGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfPoint3d(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<core::Point3d>> }
	
	pub type VectorOfVectorOfPoint3f = core::Vector<core::Vector<core::Point3f>>;
	
	impl core::Vector<core::Vector<core::Point3f>> {
		pub fn as_raw_VectorOfVectorOfPoint3f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfPoint3f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Point3f>,
		std_vectorLstd_vectorLcv_Point3fGG_new_const, std_vectorLstd_vectorLcv_Point3fGG_delete,
		std_vectorLstd_vectorLcv_Point3fGG_len_const, std_vectorLstd_vectorLcv_Point3fGG_isEmpty_const,
		std_vectorLstd_vectorLcv_Point3fGG_capacity_const, std_vectorLstd_vectorLcv_Point3fGG_shrinkToFit,
		std_vectorLstd_vectorLcv_Point3fGG_reserve_size_t, std_vectorLstd_vectorLcv_Point3fGG_remove_size_t,
		std_vectorLstd_vectorLcv_Point3fGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_Point3fGG_clear,
		std_vectorLstd_vectorLcv_Point3fGG_get_const_size_t, std_vectorLstd_vectorLcv_Point3fGG_set_size_t_const_vectorLPoint3fG,
		std_vectorLstd_vectorLcv_Point3fGG_push_const_vectorLPoint3fG, std_vectorLstd_vectorLcv_Point3fGG_insert_size_t_const_vectorLPoint3fG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Point3f> }
	
	impl ToInputArray for core::Vector<core::Vector<core::Point3f>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3fGG_inputArray_const(self.as_raw_VectorOfVectorOfPoint3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<core::Point3f>> }
	
	impl ToOutputArray for core::Vector<core::Vector<core::Point3f>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3fGG_outputArray(self.as_raw_mut_VectorOfVectorOfPoint3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<core::Point3f>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3fGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfPoint3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<core::Point3f>> }
	
	pub type VectorOfVectorOfPoint3i = core::Vector<core::Vector<core::Point3i>>;
	
	impl core::Vector<core::Vector<core::Point3i>> {
		pub fn as_raw_VectorOfVectorOfPoint3i(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfPoint3i(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Point3i>,
		std_vectorLstd_vectorLcv_Point3iGG_new_const, std_vectorLstd_vectorLcv_Point3iGG_delete,
		std_vectorLstd_vectorLcv_Point3iGG_len_const, std_vectorLstd_vectorLcv_Point3iGG_isEmpty_const,
		std_vectorLstd_vectorLcv_Point3iGG_capacity_const, std_vectorLstd_vectorLcv_Point3iGG_shrinkToFit,
		std_vectorLstd_vectorLcv_Point3iGG_reserve_size_t, std_vectorLstd_vectorLcv_Point3iGG_remove_size_t,
		std_vectorLstd_vectorLcv_Point3iGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_Point3iGG_clear,
		std_vectorLstd_vectorLcv_Point3iGG_get_const_size_t, std_vectorLstd_vectorLcv_Point3iGG_set_size_t_const_vectorLPoint3iG,
		std_vectorLstd_vectorLcv_Point3iGG_push_const_vectorLPoint3iG, std_vectorLstd_vectorLcv_Point3iGG_insert_size_t_const_vectorLPoint3iG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Point3i> }
	
	impl ToInputArray for core::Vector<core::Vector<core::Point3i>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3iGG_inputArray_const(self.as_raw_VectorOfVectorOfPoint3i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<core::Point3i>> }
	
	impl ToOutputArray for core::Vector<core::Vector<core::Point3i>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3iGG_outputArray(self.as_raw_mut_VectorOfVectorOfPoint3i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<core::Point3i>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Point3iGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfPoint3i(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<core::Point3i>> }
	
	pub type VectorOfVectorOfRange = core::Vector<core::Vector<core::Range>>;
	
	impl core::Vector<core::Vector<core::Range>> {
		pub fn as_raw_VectorOfVectorOfRange(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfRange(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Range>,
		std_vectorLstd_vectorLcv_RangeGG_new_const, std_vectorLstd_vectorLcv_RangeGG_delete,
		std_vectorLstd_vectorLcv_RangeGG_len_const, std_vectorLstd_vectorLcv_RangeGG_isEmpty_const,
		std_vectorLstd_vectorLcv_RangeGG_capacity_const, std_vectorLstd_vectorLcv_RangeGG_shrinkToFit,
		std_vectorLstd_vectorLcv_RangeGG_reserve_size_t, std_vectorLstd_vectorLcv_RangeGG_remove_size_t,
		std_vectorLstd_vectorLcv_RangeGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_RangeGG_clear,
		std_vectorLstd_vectorLcv_RangeGG_get_const_size_t, std_vectorLstd_vectorLcv_RangeGG_set_size_t_const_vectorLRangeG,
		std_vectorLstd_vectorLcv_RangeGG_push_const_vectorLRangeG, std_vectorLstd_vectorLcv_RangeGG_insert_size_t_const_vectorLRangeG,
	}
	
	vector_non_copy_or_bool! { core::Vector<core::Range> }
	
	
	pub type VectorOfVectorOfVec3f = core::Vector<core::Vector<core::Vec3f>>;
	
	impl core::Vector<core::Vector<core::Vec3f>> {
		pub fn as_raw_VectorOfVectorOfVec3f(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfVec3f(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<core::Vec3f>,
		std_vectorLstd_vectorLcv_Vec3fGG_new_const, std_vectorLstd_vectorLcv_Vec3fGG_delete,
		std_vectorLstd_vectorLcv_Vec3fGG_len_const, std_vectorLstd_vectorLcv_Vec3fGG_isEmpty_const,
		std_vectorLstd_vectorLcv_Vec3fGG_capacity_const, std_vectorLstd_vectorLcv_Vec3fGG_shrinkToFit,
		std_vectorLstd_vectorLcv_Vec3fGG_reserve_size_t, std_vectorLstd_vectorLcv_Vec3fGG_remove_size_t,
		std_vectorLstd_vectorLcv_Vec3fGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_Vec3fGG_clear,
		std_vectorLstd_vectorLcv_Vec3fGG_get_const_size_t, std_vectorLstd_vectorLcv_Vec3fGG_set_size_t_const_vectorLVec3fG,
		std_vectorLstd_vectorLcv_Vec3fGG_push_const_vectorLVec3fG, std_vectorLstd_vectorLcv_Vec3fGG_insert_size_t_const_vectorLVec3fG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<core::Vec3f> }
	
	impl ToInputArray for core::Vector<core::Vector<core::Vec3f>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Vec3fGG_inputArray_const(self.as_raw_VectorOfVectorOfVec3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<core::Vec3f>> }
	
	impl ToOutputArray for core::Vector<core::Vector<core::Vec3f>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Vec3fGG_outputArray(self.as_raw_mut_VectorOfVectorOfVec3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<core::Vec3f>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLcv_Vec3fGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfVec3f(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<core::Vec3f>> }
	
	pub type VectorOfVectorOfc_char = core::Vector<core::Vector<c_char>>;
	
	impl core::Vector<core::Vector<c_char>> {
		pub fn as_raw_VectorOfVectorOfc_char(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfc_char(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	pub type VectorOfVectorOff32 = core::Vector<core::Vector<f32>>;
	
	impl core::Vector<core::Vector<f32>> {
		pub fn as_raw_VectorOfVectorOff32(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOff32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<f32>,
		std_vectorLstd_vectorLfloatGG_new_const, std_vectorLstd_vectorLfloatGG_delete,
		std_vectorLstd_vectorLfloatGG_len_const, std_vectorLstd_vectorLfloatGG_isEmpty_const,
		std_vectorLstd_vectorLfloatGG_capacity_const, std_vectorLstd_vectorLfloatGG_shrinkToFit,
		std_vectorLstd_vectorLfloatGG_reserve_size_t, std_vectorLstd_vectorLfloatGG_remove_size_t,
		std_vectorLstd_vectorLfloatGG_swap_size_t_size_t, std_vectorLstd_vectorLfloatGG_clear,
		std_vectorLstd_vectorLfloatGG_get_const_size_t, std_vectorLstd_vectorLfloatGG_set_size_t_const_vectorLfloatG,
		std_vectorLstd_vectorLfloatGG_push_const_vectorLfloatG, std_vectorLstd_vectorLfloatGG_insert_size_t_const_vectorLfloatG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<f32> }
	
	impl ToInputArray for core::Vector<core::Vector<f32>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLfloatGG_inputArray_const(self.as_raw_VectorOfVectorOff32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<f32>> }
	
	impl ToOutputArray for core::Vector<core::Vector<f32>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLfloatGG_outputArray(self.as_raw_mut_VectorOfVectorOff32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<f32>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLfloatGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOff32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<f32>> }
	
	pub type VectorOfVectorOff64 = core::Vector<core::Vector<f64>>;
	
	impl core::Vector<core::Vector<f64>> {
		pub fn as_raw_VectorOfVectorOff64(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOff64(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<f64>,
		std_vectorLstd_vectorLdoubleGG_new_const, std_vectorLstd_vectorLdoubleGG_delete,
		std_vectorLstd_vectorLdoubleGG_len_const, std_vectorLstd_vectorLdoubleGG_isEmpty_const,
		std_vectorLstd_vectorLdoubleGG_capacity_const, std_vectorLstd_vectorLdoubleGG_shrinkToFit,
		std_vectorLstd_vectorLdoubleGG_reserve_size_t, std_vectorLstd_vectorLdoubleGG_remove_size_t,
		std_vectorLstd_vectorLdoubleGG_swap_size_t_size_t, std_vectorLstd_vectorLdoubleGG_clear,
		std_vectorLstd_vectorLdoubleGG_get_const_size_t, std_vectorLstd_vectorLdoubleGG_set_size_t_const_vectorLdoubleG,
		std_vectorLstd_vectorLdoubleGG_push_const_vectorLdoubleG, std_vectorLstd_vectorLdoubleGG_insert_size_t_const_vectorLdoubleG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<f64> }
	
	impl ToInputArray for core::Vector<core::Vector<f64>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLdoubleGG_inputArray_const(self.as_raw_VectorOfVectorOff64(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<f64>> }
	
	impl ToOutputArray for core::Vector<core::Vector<f64>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLdoubleGG_outputArray(self.as_raw_mut_VectorOfVectorOff64(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<f64>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLdoubleGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOff64(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<f64>> }
	
	pub type VectorOfVectorOfi32 = core::Vector<core::Vector<i32>>;
	
	impl core::Vector<core::Vector<i32>> {
		pub fn as_raw_VectorOfVectorOfi32(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfi32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<i32>,
		std_vectorLstd_vectorLintGG_new_const, std_vectorLstd_vectorLintGG_delete,
		std_vectorLstd_vectorLintGG_len_const, std_vectorLstd_vectorLintGG_isEmpty_const,
		std_vectorLstd_vectorLintGG_capacity_const, std_vectorLstd_vectorLintGG_shrinkToFit,
		std_vectorLstd_vectorLintGG_reserve_size_t, std_vectorLstd_vectorLintGG_remove_size_t,
		std_vectorLstd_vectorLintGG_swap_size_t_size_t, std_vectorLstd_vectorLintGG_clear,
		std_vectorLstd_vectorLintGG_get_const_size_t, std_vectorLstd_vectorLintGG_set_size_t_const_vectorLintG,
		std_vectorLstd_vectorLintGG_push_const_vectorLintG, std_vectorLstd_vectorLintGG_insert_size_t_const_vectorLintG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<i32> }
	
	impl ToInputArray for core::Vector<core::Vector<i32>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLintGG_inputArray_const(self.as_raw_VectorOfVectorOfi32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<i32>> }
	
	impl ToOutputArray for core::Vector<core::Vector<i32>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLintGG_outputArray(self.as_raw_mut_VectorOfVectorOfi32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<i32>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLintGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfi32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<i32>> }
	
	pub type VectorOfVectorOfi8 = core::Vector<core::Vector<i8>>;
	
	impl core::Vector<core::Vector<i8>> {
		pub fn as_raw_VectorOfVectorOfi8(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfi8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<i8>,
		std_vectorLstd_vectorLsigned_charGG_new_const, std_vectorLstd_vectorLsigned_charGG_delete,
		std_vectorLstd_vectorLsigned_charGG_len_const, std_vectorLstd_vectorLsigned_charGG_isEmpty_const,
		std_vectorLstd_vectorLsigned_charGG_capacity_const, std_vectorLstd_vectorLsigned_charGG_shrinkToFit,
		std_vectorLstd_vectorLsigned_charGG_reserve_size_t, std_vectorLstd_vectorLsigned_charGG_remove_size_t,
		std_vectorLstd_vectorLsigned_charGG_swap_size_t_size_t, std_vectorLstd_vectorLsigned_charGG_clear,
		std_vectorLstd_vectorLsigned_charGG_get_const_size_t, std_vectorLstd_vectorLsigned_charGG_set_size_t_const_vectorLsigned_charG,
		std_vectorLstd_vectorLsigned_charGG_push_const_vectorLsigned_charG, std_vectorLstd_vectorLsigned_charGG_insert_size_t_const_vectorLsigned_charG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<i8> }
	
	
	pub type VectorOfVectorOfu8 = core::Vector<core::Vector<u8>>;
	
	impl core::Vector<core::Vector<u8>> {
		pub fn as_raw_VectorOfVectorOfu8(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfu8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<u8>,
		std_vectorLstd_vectorLunsigned_charGG_new_const, std_vectorLstd_vectorLunsigned_charGG_delete,
		std_vectorLstd_vectorLunsigned_charGG_len_const, std_vectorLstd_vectorLunsigned_charGG_isEmpty_const,
		std_vectorLstd_vectorLunsigned_charGG_capacity_const, std_vectorLstd_vectorLunsigned_charGG_shrinkToFit,
		std_vectorLstd_vectorLunsigned_charGG_reserve_size_t, std_vectorLstd_vectorLunsigned_charGG_remove_size_t,
		std_vectorLstd_vectorLunsigned_charGG_swap_size_t_size_t, std_vectorLstd_vectorLunsigned_charGG_clear,
		std_vectorLstd_vectorLunsigned_charGG_get_const_size_t, std_vectorLstd_vectorLunsigned_charGG_set_size_t_const_vectorLunsigned_charG,
		std_vectorLstd_vectorLunsigned_charGG_push_const_vectorLunsigned_charG, std_vectorLstd_vectorLunsigned_charGG_insert_size_t_const_vectorLunsigned_charG,
	}
	
	vector_non_copy_or_bool! { clone core::Vector<u8> }
	
	impl ToInputArray for core::Vector<core::Vector<u8>> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLunsigned_charGG_inputArray_const(self.as_raw_VectorOfVectorOfu8(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<core::Vector<u8>> }
	
	impl ToOutputArray for core::Vector<core::Vector<u8>> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLunsigned_charGG_outputArray(self.as_raw_mut_VectorOfVectorOfu8(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<core::Vector<u8>> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLstd_vectorLunsigned_charGG_inputOutputArray(self.as_raw_mut_VectorOfVectorOfu8(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<core::Vector<u8>> }
	
	pub type VectorOfbool = core::Vector<bool>;
	
	impl core::Vector<bool> {
		pub fn as_raw_VectorOfbool(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfbool(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { bool,
		std_vectorLboolG_new_const, std_vectorLboolG_delete,
		std_vectorLboolG_len_const, std_vectorLboolG_isEmpty_const,
		std_vectorLboolG_capacity_const, std_vectorLboolG_shrinkToFit,
		std_vectorLboolG_reserve_size_t, std_vectorLboolG_remove_size_t,
		std_vectorLboolG_swap_size_t_size_t, std_vectorLboolG_clear,
		std_vectorLboolG_get_const_size_t, std_vectorLboolG_set_size_t_const_bool,
		std_vectorLboolG_push_const_bool, std_vectorLboolG_insert_size_t_const_bool,
	}
	
	vector_non_copy_or_bool! { clone bool }
	
	impl ToInputArray for core::Vector<bool> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLboolG_inputArray_const(self.as_raw_VectorOfbool(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<bool> }
	
	pub type VectorOfc_char = core::Vector<c_char>;
	
	impl core::Vector<c_char> {
		pub fn as_raw_VectorOfc_char(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfc_char(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	pub type VectorOff32 = core::Vector<f32>;
	
	impl core::Vector<f32> {
		pub fn as_raw_VectorOff32(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOff32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { f32,
		std_vectorLfloatG_new_const, std_vectorLfloatG_delete,
		std_vectorLfloatG_len_const, std_vectorLfloatG_isEmpty_const,
		std_vectorLfloatG_capacity_const, std_vectorLfloatG_shrinkToFit,
		std_vectorLfloatG_reserve_size_t, std_vectorLfloatG_remove_size_t,
		std_vectorLfloatG_swap_size_t_size_t, std_vectorLfloatG_clear,
		std_vectorLfloatG_get_const_size_t, std_vectorLfloatG_set_size_t_const_float,
		std_vectorLfloatG_push_const_float, std_vectorLfloatG_insert_size_t_const_float,
	}
	
	vector_copy_non_bool! { f32,
		std_vectorLfloatG_data_const, std_vectorLfloatG_dataMut, cv_fromSlice_const_const_floatX_size_t,
		std_vectorLfloatG_clone_const,
	}
	
	impl ToInputArray for core::Vector<f32> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLfloatG_inputArray_const(self.as_raw_VectorOff32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<f32> }
	
	impl ToOutputArray for core::Vector<f32> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLfloatG_outputArray(self.as_raw_mut_VectorOff32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<f32> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLfloatG_inputOutputArray(self.as_raw_mut_VectorOff32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<f32> }
	
	pub type VectorOff64 = core::Vector<f64>;
	
	impl core::Vector<f64> {
		pub fn as_raw_VectorOff64(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOff64(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { f64,
		std_vectorLdoubleG_new_const, std_vectorLdoubleG_delete,
		std_vectorLdoubleG_len_const, std_vectorLdoubleG_isEmpty_const,
		std_vectorLdoubleG_capacity_const, std_vectorLdoubleG_shrinkToFit,
		std_vectorLdoubleG_reserve_size_t, std_vectorLdoubleG_remove_size_t,
		std_vectorLdoubleG_swap_size_t_size_t, std_vectorLdoubleG_clear,
		std_vectorLdoubleG_get_const_size_t, std_vectorLdoubleG_set_size_t_const_double,
		std_vectorLdoubleG_push_const_double, std_vectorLdoubleG_insert_size_t_const_double,
	}
	
	vector_copy_non_bool! { f64,
		std_vectorLdoubleG_data_const, std_vectorLdoubleG_dataMut, cv_fromSlice_const_const_doubleX_size_t,
		std_vectorLdoubleG_clone_const,
	}
	
	impl ToInputArray for core::Vector<f64> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLdoubleG_inputArray_const(self.as_raw_VectorOff64(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<f64> }
	
	impl ToOutputArray for core::Vector<f64> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLdoubleG_outputArray(self.as_raw_mut_VectorOff64(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<f64> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLdoubleG_inputOutputArray(self.as_raw_mut_VectorOff64(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<f64> }
	
	pub type VectorOfi32 = core::Vector<i32>;
	
	impl core::Vector<i32> {
		pub fn as_raw_VectorOfi32(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfi32(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { i32,
		std_vectorLintG_new_const, std_vectorLintG_delete,
		std_vectorLintG_len_const, std_vectorLintG_isEmpty_const,
		std_vectorLintG_capacity_const, std_vectorLintG_shrinkToFit,
		std_vectorLintG_reserve_size_t, std_vectorLintG_remove_size_t,
		std_vectorLintG_swap_size_t_size_t, std_vectorLintG_clear,
		std_vectorLintG_get_const_size_t, std_vectorLintG_set_size_t_const_int,
		std_vectorLintG_push_const_int, std_vectorLintG_insert_size_t_const_int,
	}
	
	vector_copy_non_bool! { i32,
		std_vectorLintG_data_const, std_vectorLintG_dataMut, cv_fromSlice_const_const_intX_size_t,
		std_vectorLintG_clone_const,
	}
	
	impl ToInputArray for core::Vector<i32> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLintG_inputArray_const(self.as_raw_VectorOfi32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<i32> }
	
	impl ToOutputArray for core::Vector<i32> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLintG_outputArray(self.as_raw_mut_VectorOfi32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<i32> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLintG_inputOutputArray(self.as_raw_mut_VectorOfi32(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<i32> }
	
	pub type VectorOfi8 = core::Vector<i8>;
	
	impl core::Vector<i8> {
		pub fn as_raw_VectorOfi8(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfi8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { i8,
		std_vectorLsigned_charG_new_const, std_vectorLsigned_charG_delete,
		std_vectorLsigned_charG_len_const, std_vectorLsigned_charG_isEmpty_const,
		std_vectorLsigned_charG_capacity_const, std_vectorLsigned_charG_shrinkToFit,
		std_vectorLsigned_charG_reserve_size_t, std_vectorLsigned_charG_remove_size_t,
		std_vectorLsigned_charG_swap_size_t_size_t, std_vectorLsigned_charG_clear,
		std_vectorLsigned_charG_get_const_size_t, std_vectorLsigned_charG_set_size_t_const_signed_char,
		std_vectorLsigned_charG_push_const_signed_char, std_vectorLsigned_charG_insert_size_t_const_signed_char,
	}
	
	vector_copy_non_bool! { i8,
		std_vectorLsigned_charG_data_const, std_vectorLsigned_charG_dataMut, cv_fromSlice_const_const_signed_charX_size_t,
		std_vectorLsigned_charG_clone_const,
	}
	
	
	pub type VectorOfsize_t = core::Vector<size_t>;
	
	impl core::Vector<size_t> {
		pub fn as_raw_VectorOfsize_t(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfsize_t(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { size_t,
		std_vectorLsize_tG_new_const, std_vectorLsize_tG_delete,
		std_vectorLsize_tG_len_const, std_vectorLsize_tG_isEmpty_const,
		std_vectorLsize_tG_capacity_const, std_vectorLsize_tG_shrinkToFit,
		std_vectorLsize_tG_reserve_size_t, std_vectorLsize_tG_remove_size_t,
		std_vectorLsize_tG_swap_size_t_size_t, std_vectorLsize_tG_clear,
		std_vectorLsize_tG_get_const_size_t, std_vectorLsize_tG_set_size_t_const_size_t,
		std_vectorLsize_tG_push_const_size_t, std_vectorLsize_tG_insert_size_t_const_size_t,
	}
	
	vector_copy_non_bool! { size_t,
		std_vectorLsize_tG_data_const, std_vectorLsize_tG_dataMut, cv_fromSlice_const_const_size_tX_size_t,
		std_vectorLsize_tG_clone_const,
	}
	
	
	pub type VectorOfu8 = core::Vector<u8>;
	
	impl core::Vector<u8> {
		pub fn as_raw_VectorOfu8(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfu8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { u8,
		std_vectorLunsigned_charG_new_const, std_vectorLunsigned_charG_delete,
		std_vectorLunsigned_charG_len_const, std_vectorLunsigned_charG_isEmpty_const,
		std_vectorLunsigned_charG_capacity_const, std_vectorLunsigned_charG_shrinkToFit,
		std_vectorLunsigned_charG_reserve_size_t, std_vectorLunsigned_charG_remove_size_t,
		std_vectorLunsigned_charG_swap_size_t_size_t, std_vectorLunsigned_charG_clear,
		std_vectorLunsigned_charG_get_const_size_t, std_vectorLunsigned_charG_set_size_t_const_unsigned_char,
		std_vectorLunsigned_charG_push_const_unsigned_char, std_vectorLunsigned_charG_insert_size_t_const_unsigned_char,
	}
	
	vector_copy_non_bool! { u8,
		std_vectorLunsigned_charG_data_const, std_vectorLunsigned_charG_dataMut, cv_fromSlice_const_const_unsigned_charX_size_t,
		std_vectorLunsigned_charG_clone_const,
	}
	
	impl ToInputArray for core::Vector<u8> {
		#[inline]
		fn input_array(&self) -> Result<BoxedRef<core::_InputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLunsigned_charG_inputArray_const(self.as_raw_VectorOfu8(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRef::<core::_InputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	input_array_ref_forward! { core::Vector<u8> }
	
	impl ToOutputArray for core::Vector<u8> {
		#[inline]
		fn output_array(&mut self) -> Result<BoxedRefMut<core::_OutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLunsigned_charG_outputArray(self.as_raw_mut_VectorOfu8(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_OutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	impl ToInputOutputArray for core::Vector<u8> {
		#[inline]
		fn input_output_array(&mut self) -> Result<BoxedRefMut<core::_InputOutputArray>> {
			return_send!(via ocvrs_return);
			unsafe { sys::std_vectorLunsigned_charG_inputOutputArray(self.as_raw_mut_VectorOfu8(), ocvrs_return.as_mut_ptr()) };
			return_receive!(unsafe ocvrs_return => ret);
			let ret = ret.into_result()?;
			let ret = unsafe { BoxedRefMut::<core::_InputOutputArray>::opencv_from_extern(ret) };
			Ok(ret)
		}
		
	}
	
	output_array_ref_forward! { core::Vector<u8> }
	
}
#[cfg(ocvrs_has_module_core)]
pub use core_types::*;

#[cfg(ocvrs_has_module_dnn)]
mod dnn_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfAbsLayer = core::Ptr<crate::dnn::AbsLayer>;
	
	ptr_extern! { crate::dnn::AbsLayer,
		cv_PtrLcv_dnn_AbsLayerG_delete, cv_PtrLcv_dnn_AbsLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AbsLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AbsLayer, cv_PtrLcv_dnn_AbsLayerG_new_const_AbsLayer }
	impl core::Ptr<crate::dnn::AbsLayer> {
		#[inline] pub fn as_raw_PtrOfAbsLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAbsLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AbsLayerTraitConst for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_AbsLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AbsLayerTrait for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_mut_AbsLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAbsLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AbsLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAbsLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AbsLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AbsLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAbsLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AbsLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AbsLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAbsLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAccumLayer = core::Ptr<crate::dnn::AccumLayer>;
	
	ptr_extern! { crate::dnn::AccumLayer,
		cv_PtrLcv_dnn_AccumLayerG_delete, cv_PtrLcv_dnn_AccumLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AccumLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AccumLayer, cv_PtrLcv_dnn_AccumLayerG_new_const_AccumLayer }
	impl core::Ptr<crate::dnn::AccumLayer> {
		#[inline] pub fn as_raw_PtrOfAccumLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAccumLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AccumLayerTraitConst for core::Ptr<crate::dnn::AccumLayer> {
		#[inline] fn as_raw_AccumLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AccumLayerTrait for core::Ptr<crate::dnn::AccumLayer> {
		#[inline] fn as_raw_mut_AccumLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AccumLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AccumLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAccumLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AccumLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AccumLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AccumLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAccumLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AccumLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AccumLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAccumLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAcosLayer = core::Ptr<crate::dnn::AcosLayer>;
	
	ptr_extern! { crate::dnn::AcosLayer,
		cv_PtrLcv_dnn_AcosLayerG_delete, cv_PtrLcv_dnn_AcosLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AcosLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AcosLayer, cv_PtrLcv_dnn_AcosLayerG_new_const_AcosLayer }
	impl core::Ptr<crate::dnn::AcosLayer> {
		#[inline] pub fn as_raw_PtrOfAcosLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAcosLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AcosLayerTraitConst for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_AcosLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AcosLayerTrait for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_mut_AcosLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAcosLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AcosLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAcosLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AcosLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AcosLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAcosLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AcosLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AcosLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAcosLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAcoshLayer = core::Ptr<crate::dnn::AcoshLayer>;
	
	ptr_extern! { crate::dnn::AcoshLayer,
		cv_PtrLcv_dnn_AcoshLayerG_delete, cv_PtrLcv_dnn_AcoshLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AcoshLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AcoshLayer, cv_PtrLcv_dnn_AcoshLayerG_new_const_AcoshLayer }
	impl core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] pub fn as_raw_PtrOfAcoshLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAcoshLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AcoshLayerTraitConst for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_AcoshLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AcoshLayerTrait for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_mut_AcoshLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAcoshLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AcoshLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAcoshLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AcoshLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAcoshLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AcoshLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AcoshLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAcoshLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfActivationLayer = core::Ptr<crate::dnn::ActivationLayer>;
	
	ptr_extern! { crate::dnn::ActivationLayer,
		cv_PtrLcv_dnn_ActivationLayerG_delete, cv_PtrLcv_dnn_ActivationLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ActivationLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ActivationLayer, cv_PtrLcv_dnn_ActivationLayerG_new_const_ActivationLayer }
	impl core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] pub fn as_raw_PtrOfActivationLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfActivationLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfActivationLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ActivationLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfActivationLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ActivationLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ActivationLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfActivationLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfActivationLayerInt8 = core::Ptr<crate::dnn::ActivationLayerInt8>;
	
	ptr_extern! { crate::dnn::ActivationLayerInt8,
		cv_PtrLcv_dnn_ActivationLayerInt8G_delete, cv_PtrLcv_dnn_ActivationLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_ActivationLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ActivationLayerInt8, cv_PtrLcv_dnn_ActivationLayerInt8G_new_const_ActivationLayerInt8 }
	impl core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] pub fn as_raw_PtrOfActivationLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfActivationLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ActivationLayerInt8TraitConst for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_ActivationLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerInt8Trait for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_mut_ActivationLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfActivationLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ActivationLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfActivationLayerInt8, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ActivationLayerInt8G_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfActivationLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ActivationLayerInt8G_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ActivationLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfActivationLayerInt8")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfArgLayer = core::Ptr<crate::dnn::ArgLayer>;
	
	ptr_extern! { crate::dnn::ArgLayer,
		cv_PtrLcv_dnn_ArgLayerG_delete, cv_PtrLcv_dnn_ArgLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ArgLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ArgLayer, cv_PtrLcv_dnn_ArgLayerG_new_const_ArgLayer }
	impl core::Ptr<crate::dnn::ArgLayer> {
		#[inline] pub fn as_raw_PtrOfArgLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfArgLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ArgLayerTraitConst for core::Ptr<crate::dnn::ArgLayer> {
		#[inline] fn as_raw_ArgLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ArgLayerTrait for core::Ptr<crate::dnn::ArgLayer> {
		#[inline] fn as_raw_mut_ArgLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ArgLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ArgLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfArgLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ArgLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ArgLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ArgLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfArgLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ArgLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ArgLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfArgLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAsinLayer = core::Ptr<crate::dnn::AsinLayer>;
	
	ptr_extern! { crate::dnn::AsinLayer,
		cv_PtrLcv_dnn_AsinLayerG_delete, cv_PtrLcv_dnn_AsinLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AsinLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AsinLayer, cv_PtrLcv_dnn_AsinLayerG_new_const_AsinLayer }
	impl core::Ptr<crate::dnn::AsinLayer> {
		#[inline] pub fn as_raw_PtrOfAsinLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAsinLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AsinLayerTraitConst for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_AsinLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AsinLayerTrait for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_mut_AsinLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAsinLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AsinLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAsinLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AsinLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AsinLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAsinLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AsinLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AsinLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAsinLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAsinhLayer = core::Ptr<crate::dnn::AsinhLayer>;
	
	ptr_extern! { crate::dnn::AsinhLayer,
		cv_PtrLcv_dnn_AsinhLayerG_delete, cv_PtrLcv_dnn_AsinhLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AsinhLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AsinhLayer, cv_PtrLcv_dnn_AsinhLayerG_new_const_AsinhLayer }
	impl core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] pub fn as_raw_PtrOfAsinhLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAsinhLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AsinhLayerTraitConst for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_AsinhLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AsinhLayerTrait for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_mut_AsinhLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAsinhLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AsinhLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAsinhLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AsinhLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAsinhLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AsinhLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AsinhLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAsinhLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAtanLayer = core::Ptr<crate::dnn::AtanLayer>;
	
	ptr_extern! { crate::dnn::AtanLayer,
		cv_PtrLcv_dnn_AtanLayerG_delete, cv_PtrLcv_dnn_AtanLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AtanLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AtanLayer, cv_PtrLcv_dnn_AtanLayerG_new_const_AtanLayer }
	impl core::Ptr<crate::dnn::AtanLayer> {
		#[inline] pub fn as_raw_PtrOfAtanLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAtanLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AtanLayerTraitConst for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_AtanLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AtanLayerTrait for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_mut_AtanLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAtanLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AtanLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAtanLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AtanLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AtanLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAtanLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AtanLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AtanLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAtanLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAtanhLayer = core::Ptr<crate::dnn::AtanhLayer>;
	
	ptr_extern! { crate::dnn::AtanhLayer,
		cv_PtrLcv_dnn_AtanhLayerG_delete, cv_PtrLcv_dnn_AtanhLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AtanhLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AtanhLayer, cv_PtrLcv_dnn_AtanhLayerG_new_const_AtanhLayer }
	impl core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] pub fn as_raw_PtrOfAtanhLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAtanhLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AtanhLayerTraitConst for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_AtanhLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AtanhLayerTrait for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_mut_AtanhLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAtanhLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AtanhLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAtanhLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_AtanhLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAtanhLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AtanhLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AtanhLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAtanhLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfAttentionLayer = core::Ptr<crate::dnn::AttentionLayer>;
	
	ptr_extern! { crate::dnn::AttentionLayer,
		cv_PtrLcv_dnn_AttentionLayerG_delete, cv_PtrLcv_dnn_AttentionLayerG_getInnerPtr_const, cv_PtrLcv_dnn_AttentionLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::AttentionLayer, cv_PtrLcv_dnn_AttentionLayerG_new_const_AttentionLayer }
	impl core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] pub fn as_raw_PtrOfAttentionLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAttentionLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::AttentionLayerTraitConst for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] fn as_raw_AttentionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::AttentionLayerTrait for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] fn as_raw_mut_AttentionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAttentionLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_AttentionLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAttentionLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_AttentionLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::AttentionLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAttentionLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfBNLLLayer = core::Ptr<crate::dnn::BNLLLayer>;
	
	ptr_extern! { crate::dnn::BNLLLayer,
		cv_PtrLcv_dnn_BNLLLayerG_delete, cv_PtrLcv_dnn_BNLLLayerG_getInnerPtr_const, cv_PtrLcv_dnn_BNLLLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::BNLLLayer, cv_PtrLcv_dnn_BNLLLayerG_new_const_BNLLLayer }
	impl core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] pub fn as_raw_PtrOfBNLLLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBNLLLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BNLLLayerTraitConst for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_BNLLLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BNLLLayerTrait for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_mut_BNLLLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBNLLLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_BNLLLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBNLLLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_BNLLLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBNLLLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_BNLLLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BNLLLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBNLLLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfBackendNode = core::Ptr<crate::dnn::BackendNode>;
	
	ptr_extern! { crate::dnn::BackendNode,
		cv_PtrLcv_dnn_BackendNodeG_delete, cv_PtrLcv_dnn_BackendNodeG_getInnerPtr_const, cv_PtrLcv_dnn_BackendNodeG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::BackendNode, cv_PtrLcv_dnn_BackendNodeG_new_const_BackendNode }
	impl core::Ptr<crate::dnn::BackendNode> {
		#[inline] pub fn as_raw_PtrOfBackendNode(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBackendNode(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BackendNodeTraitConst for core::Ptr<crate::dnn::BackendNode> {
		#[inline] fn as_raw_BackendNode(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BackendNodeTrait for core::Ptr<crate::dnn::BackendNode> {
		#[inline] fn as_raw_mut_BackendNode(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BackendNode> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBackendNode")
				.field("backend_id", &crate::dnn::BackendNodeTraitConst::backend_id(self))
				.finish()
		}
	}
	
	pub type PtrOfBackendWrapper = core::Ptr<crate::dnn::BackendWrapper>;
	
	ptr_extern! { crate::dnn::BackendWrapper,
		cv_PtrLcv_dnn_BackendWrapperG_delete, cv_PtrLcv_dnn_BackendWrapperG_getInnerPtr_const, cv_PtrLcv_dnn_BackendWrapperG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::dnn::BackendWrapper> {
		#[inline] pub fn as_raw_PtrOfBackendWrapper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBackendWrapper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BackendWrapperTraitConst for core::Ptr<crate::dnn::BackendWrapper> {
		#[inline] fn as_raw_BackendWrapper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BackendWrapperTrait for core::Ptr<crate::dnn::BackendWrapper> {
		#[inline] fn as_raw_mut_BackendWrapper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BackendWrapper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBackendWrapper")
				.field("backend_id", &crate::dnn::BackendWrapperTraitConst::backend_id(self))
				.field("target_id", &crate::dnn::BackendWrapperTraitConst::target_id(self))
				.finish()
		}
	}
	
	pub type PtrOfBaseConvolutionLayer = core::Ptr<crate::dnn::BaseConvolutionLayer>;
	
	ptr_extern! { crate::dnn::BaseConvolutionLayer,
		cv_PtrLcv_dnn_BaseConvolutionLayerG_delete, cv_PtrLcv_dnn_BaseConvolutionLayerG_getInnerPtr_const, cv_PtrLcv_dnn_BaseConvolutionLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::BaseConvolutionLayer, cv_PtrLcv_dnn_BaseConvolutionLayerG_new_const_BaseConvolutionLayer }
	impl core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] pub fn as_raw_PtrOfBaseConvolutionLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBaseConvolutionLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BaseConvolutionLayerTraitConst for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] fn as_raw_BaseConvolutionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BaseConvolutionLayerTrait for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] fn as_raw_mut_BaseConvolutionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBaseConvolutionLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_BaseConvolutionLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBaseConvolutionLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_BaseConvolutionLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BaseConvolutionLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBaseConvolutionLayer")
				.field("kernel", &crate::dnn::BaseConvolutionLayerTraitConst::kernel(self))
				.field("stride", &crate::dnn::BaseConvolutionLayerTraitConst::stride(self))
				.field("pad", &crate::dnn::BaseConvolutionLayerTraitConst::pad(self))
				.field("dilation", &crate::dnn::BaseConvolutionLayerTraitConst::dilation(self))
				.field("adjust_pad", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pad(self))
				.field("adjust_pads", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pads(self))
				.field("kernel_size", &crate::dnn::BaseConvolutionLayerTraitConst::kernel_size(self))
				.field("strides", &crate::dnn::BaseConvolutionLayerTraitConst::strides(self))
				.field("dilations", &crate::dnn::BaseConvolutionLayerTraitConst::dilations(self))
				.field("pads_begin", &crate::dnn::BaseConvolutionLayerTraitConst::pads_begin(self))
				.field("pads_end", &crate::dnn::BaseConvolutionLayerTraitConst::pads_end(self))
				.field("pad_mode", &crate::dnn::BaseConvolutionLayerTraitConst::pad_mode(self))
				.field("num_output", &crate::dnn::BaseConvolutionLayerTraitConst::num_output(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfBatchNormLayer = core::Ptr<crate::dnn::BatchNormLayer>;
	
	ptr_extern! { crate::dnn::BatchNormLayer,
		cv_PtrLcv_dnn_BatchNormLayerG_delete, cv_PtrLcv_dnn_BatchNormLayerG_getInnerPtr_const, cv_PtrLcv_dnn_BatchNormLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::BatchNormLayer, cv_PtrLcv_dnn_BatchNormLayerG_new_const_BatchNormLayer }
	impl core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] pub fn as_raw_PtrOfBatchNormLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBatchNormLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BatchNormLayerTraitConst for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_BatchNormLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BatchNormLayerTrait for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_mut_BatchNormLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_BatchNormLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_BatchNormLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_BatchNormLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BatchNormLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBatchNormLayer")
				.field("has_weights", &crate::dnn::BatchNormLayerTraitConst::has_weights(self))
				.field("has_bias", &crate::dnn::BatchNormLayerTraitConst::has_bias(self))
				.field("epsilon", &crate::dnn::BatchNormLayerTraitConst::epsilon(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfBatchNormLayerInt8 = core::Ptr<crate::dnn::BatchNormLayerInt8>;
	
	ptr_extern! { crate::dnn::BatchNormLayerInt8,
		cv_PtrLcv_dnn_BatchNormLayerInt8G_delete, cv_PtrLcv_dnn_BatchNormLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_BatchNormLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::BatchNormLayerInt8, cv_PtrLcv_dnn_BatchNormLayerInt8G_new_const_BatchNormLayerInt8 }
	impl core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] pub fn as_raw_PtrOfBatchNormLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBatchNormLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BatchNormLayerInt8TraitConst for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_BatchNormLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BatchNormLayerInt8Trait for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_mut_BatchNormLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_BatchNormLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayerInt8, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_BatchNormLayerInt8G_to_PtrOfActivationLayer }
	
	impl crate::dnn::BatchNormLayerTraitConst for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_BatchNormLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BatchNormLayerTrait for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_mut_BatchNormLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayerInt8, core::Ptr<crate::dnn::BatchNormLayer>, cv_PtrLcv_dnn_BatchNormLayerInt8G_to_PtrOfBatchNormLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBatchNormLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_BatchNormLayerInt8G_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BatchNormLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBatchNormLayerInt8")
				.field("input_sc", &crate::dnn::BatchNormLayerInt8TraitConst::input_sc(self))
				.field("output_sc", &crate::dnn::BatchNormLayerInt8TraitConst::output_sc(self))
				.field("input_zp", &crate::dnn::BatchNormLayerInt8TraitConst::input_zp(self))
				.field("output_zp", &crate::dnn::BatchNormLayerInt8TraitConst::output_zp(self))
				.field("has_weights", &crate::dnn::BatchNormLayerTraitConst::has_weights(self))
				.field("has_bias", &crate::dnn::BatchNormLayerTraitConst::has_bias(self))
				.field("epsilon", &crate::dnn::BatchNormLayerTraitConst::epsilon(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfBlankLayer = core::Ptr<crate::dnn::BlankLayer>;
	
	ptr_extern! { crate::dnn::BlankLayer,
		cv_PtrLcv_dnn_BlankLayerG_delete, cv_PtrLcv_dnn_BlankLayerG_getInnerPtr_const, cv_PtrLcv_dnn_BlankLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::BlankLayer, cv_PtrLcv_dnn_BlankLayerG_new_const_BlankLayer }
	impl core::Ptr<crate::dnn::BlankLayer> {
		#[inline] pub fn as_raw_PtrOfBlankLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBlankLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::BlankLayerTraitConst for core::Ptr<crate::dnn::BlankLayer> {
		#[inline] fn as_raw_BlankLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BlankLayerTrait for core::Ptr<crate::dnn::BlankLayer> {
		#[inline] fn as_raw_mut_BlankLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::BlankLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::BlankLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBlankLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_BlankLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::BlankLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::BlankLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBlankLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_BlankLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::BlankLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBlankLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCeilLayer = core::Ptr<crate::dnn::CeilLayer>;
	
	ptr_extern! { crate::dnn::CeilLayer,
		cv_PtrLcv_dnn_CeilLayerG_delete, cv_PtrLcv_dnn_CeilLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CeilLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CeilLayer, cv_PtrLcv_dnn_CeilLayerG_new_const_CeilLayer }
	impl core::Ptr<crate::dnn::CeilLayer> {
		#[inline] pub fn as_raw_PtrOfCeilLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCeilLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CeilLayerTraitConst for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_CeilLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CeilLayerTrait for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_mut_CeilLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCeilLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CeilLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCeilLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_CeilLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CeilLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCeilLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CeilLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CeilLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCeilLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCeluLayer = core::Ptr<crate::dnn::CeluLayer>;
	
	ptr_extern! { crate::dnn::CeluLayer,
		cv_PtrLcv_dnn_CeluLayerG_delete, cv_PtrLcv_dnn_CeluLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CeluLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CeluLayer, cv_PtrLcv_dnn_CeluLayerG_new_const_CeluLayer }
	impl core::Ptr<crate::dnn::CeluLayer> {
		#[inline] pub fn as_raw_PtrOfCeluLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCeluLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CeluLayerTraitConst for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_CeluLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CeluLayerTrait for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_mut_CeluLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCeluLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CeluLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCeluLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_CeluLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CeluLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCeluLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CeluLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CeluLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCeluLayer")
				.field("alpha", &crate::dnn::CeluLayerTraitConst::alpha(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfChannelsPReLULayer = core::Ptr<crate::dnn::ChannelsPReLULayer>;
	
	ptr_extern! { crate::dnn::ChannelsPReLULayer,
		cv_PtrLcv_dnn_ChannelsPReLULayerG_delete, cv_PtrLcv_dnn_ChannelsPReLULayerG_getInnerPtr_const, cv_PtrLcv_dnn_ChannelsPReLULayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ChannelsPReLULayer, cv_PtrLcv_dnn_ChannelsPReLULayerG_new_const_ChannelsPReLULayer }
	impl core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] pub fn as_raw_PtrOfChannelsPReLULayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfChannelsPReLULayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ChannelsPReLULayerTraitConst for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_ChannelsPReLULayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ChannelsPReLULayerTrait for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_mut_ChannelsPReLULayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfChannelsPReLULayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ChannelsPReLULayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfChannelsPReLULayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ChannelsPReLULayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfChannelsPReLULayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ChannelsPReLULayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ChannelsPReLULayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfChannelsPReLULayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCompareLayer = core::Ptr<crate::dnn::CompareLayer>;
	
	ptr_extern! { crate::dnn::CompareLayer,
		cv_PtrLcv_dnn_CompareLayerG_delete, cv_PtrLcv_dnn_CompareLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CompareLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CompareLayer, cv_PtrLcv_dnn_CompareLayerG_new_const_CompareLayer }
	impl core::Ptr<crate::dnn::CompareLayer> {
		#[inline] pub fn as_raw_PtrOfCompareLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCompareLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CompareLayerTraitConst for core::Ptr<crate::dnn::CompareLayer> {
		#[inline] fn as_raw_CompareLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CompareLayerTrait for core::Ptr<crate::dnn::CompareLayer> {
		#[inline] fn as_raw_mut_CompareLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CompareLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CompareLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCompareLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CompareLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CompareLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CompareLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCompareLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CompareLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CompareLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCompareLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfConcatLayer = core::Ptr<crate::dnn::ConcatLayer>;
	
	ptr_extern! { crate::dnn::ConcatLayer,
		cv_PtrLcv_dnn_ConcatLayerG_delete, cv_PtrLcv_dnn_ConcatLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ConcatLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ConcatLayer, cv_PtrLcv_dnn_ConcatLayerG_new_const_ConcatLayer }
	impl core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] pub fn as_raw_PtrOfConcatLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfConcatLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ConcatLayerTraitConst for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] fn as_raw_ConcatLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ConcatLayerTrait for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] fn as_raw_mut_ConcatLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConcatLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ConcatLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConcatLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ConcatLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ConcatLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfConcatLayer")
				.field("axis", &crate::dnn::ConcatLayerTraitConst::axis(self))
				.field("padding", &crate::dnn::ConcatLayerTraitConst::padding(self))
				.field("padding_value", &crate::dnn::ConcatLayerTraitConst::padding_value(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfConstLayer = core::Ptr<crate::dnn::ConstLayer>;
	
	ptr_extern! { crate::dnn::ConstLayer,
		cv_PtrLcv_dnn_ConstLayerG_delete, cv_PtrLcv_dnn_ConstLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ConstLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ConstLayer, cv_PtrLcv_dnn_ConstLayerG_new_const_ConstLayer }
	impl core::Ptr<crate::dnn::ConstLayer> {
		#[inline] pub fn as_raw_PtrOfConstLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfConstLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ConstLayerTraitConst for core::Ptr<crate::dnn::ConstLayer> {
		#[inline] fn as_raw_ConstLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ConstLayerTrait for core::Ptr<crate::dnn::ConstLayer> {
		#[inline] fn as_raw_mut_ConstLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ConstLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ConstLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConstLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ConstLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ConstLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ConstLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConstLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ConstLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ConstLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfConstLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfConvolutionLayer = core::Ptr<crate::dnn::ConvolutionLayer>;
	
	ptr_extern! { crate::dnn::ConvolutionLayer,
		cv_PtrLcv_dnn_ConvolutionLayerG_delete, cv_PtrLcv_dnn_ConvolutionLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ConvolutionLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ConvolutionLayer, cv_PtrLcv_dnn_ConvolutionLayerG_new_const_ConvolutionLayer }
	impl core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] pub fn as_raw_PtrOfConvolutionLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfConvolutionLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ConvolutionLayerTraitConst for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_ConvolutionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ConvolutionLayerTrait for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_mut_ConvolutionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConvolutionLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ConvolutionLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::BaseConvolutionLayerTraitConst for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_BaseConvolutionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BaseConvolutionLayerTrait for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_mut_BaseConvolutionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConvolutionLayer, core::Ptr<crate::dnn::BaseConvolutionLayer>, cv_PtrLcv_dnn_ConvolutionLayerG_to_PtrOfBaseConvolutionLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConvolutionLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ConvolutionLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ConvolutionLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfConvolutionLayer")
				.field("fused_activation", &crate::dnn::ConvolutionLayerTraitConst::fused_activation(self))
				.field("fused_add", &crate::dnn::ConvolutionLayerTraitConst::fused_add(self))
				.field("use_winograd", &crate::dnn::ConvolutionLayerTraitConst::use_winograd(self))
				.field("kernel", &crate::dnn::BaseConvolutionLayerTraitConst::kernel(self))
				.field("stride", &crate::dnn::BaseConvolutionLayerTraitConst::stride(self))
				.field("pad", &crate::dnn::BaseConvolutionLayerTraitConst::pad(self))
				.field("dilation", &crate::dnn::BaseConvolutionLayerTraitConst::dilation(self))
				.field("adjust_pad", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pad(self))
				.field("adjust_pads", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pads(self))
				.field("kernel_size", &crate::dnn::BaseConvolutionLayerTraitConst::kernel_size(self))
				.field("strides", &crate::dnn::BaseConvolutionLayerTraitConst::strides(self))
				.field("dilations", &crate::dnn::BaseConvolutionLayerTraitConst::dilations(self))
				.field("pads_begin", &crate::dnn::BaseConvolutionLayerTraitConst::pads_begin(self))
				.field("pads_end", &crate::dnn::BaseConvolutionLayerTraitConst::pads_end(self))
				.field("pad_mode", &crate::dnn::BaseConvolutionLayerTraitConst::pad_mode(self))
				.field("num_output", &crate::dnn::BaseConvolutionLayerTraitConst::num_output(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfConvolutionLayerInt8 = core::Ptr<crate::dnn::ConvolutionLayerInt8>;
	
	ptr_extern! { crate::dnn::ConvolutionLayerInt8,
		cv_PtrLcv_dnn_ConvolutionLayerInt8G_delete, cv_PtrLcv_dnn_ConvolutionLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_ConvolutionLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ConvolutionLayerInt8, cv_PtrLcv_dnn_ConvolutionLayerInt8G_new_const_ConvolutionLayerInt8 }
	impl core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] pub fn as_raw_PtrOfConvolutionLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfConvolutionLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ConvolutionLayerInt8TraitConst for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_ConvolutionLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ConvolutionLayerInt8Trait for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_mut_ConvolutionLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConvolutionLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ConvolutionLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::BaseConvolutionLayerTraitConst for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_BaseConvolutionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BaseConvolutionLayerTrait for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_mut_BaseConvolutionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConvolutionLayerInt8, core::Ptr<crate::dnn::BaseConvolutionLayer>, cv_PtrLcv_dnn_ConvolutionLayerInt8G_to_PtrOfBaseConvolutionLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfConvolutionLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ConvolutionLayerInt8G_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ConvolutionLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfConvolutionLayerInt8")
				.field("input_zp", &crate::dnn::ConvolutionLayerInt8TraitConst::input_zp(self))
				.field("output_zp", &crate::dnn::ConvolutionLayerInt8TraitConst::output_zp(self))
				.field("input_sc", &crate::dnn::ConvolutionLayerInt8TraitConst::input_sc(self))
				.field("output_sc", &crate::dnn::ConvolutionLayerInt8TraitConst::output_sc(self))
				.field("per_channel", &crate::dnn::ConvolutionLayerInt8TraitConst::per_channel(self))
				.field("use_winograd", &crate::dnn::ConvolutionLayerInt8TraitConst::use_winograd(self))
				.field("kernel", &crate::dnn::BaseConvolutionLayerTraitConst::kernel(self))
				.field("stride", &crate::dnn::BaseConvolutionLayerTraitConst::stride(self))
				.field("pad", &crate::dnn::BaseConvolutionLayerTraitConst::pad(self))
				.field("dilation", &crate::dnn::BaseConvolutionLayerTraitConst::dilation(self))
				.field("adjust_pad", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pad(self))
				.field("adjust_pads", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pads(self))
				.field("kernel_size", &crate::dnn::BaseConvolutionLayerTraitConst::kernel_size(self))
				.field("strides", &crate::dnn::BaseConvolutionLayerTraitConst::strides(self))
				.field("dilations", &crate::dnn::BaseConvolutionLayerTraitConst::dilations(self))
				.field("pads_begin", &crate::dnn::BaseConvolutionLayerTraitConst::pads_begin(self))
				.field("pads_end", &crate::dnn::BaseConvolutionLayerTraitConst::pads_end(self))
				.field("pad_mode", &crate::dnn::BaseConvolutionLayerTraitConst::pad_mode(self))
				.field("num_output", &crate::dnn::BaseConvolutionLayerTraitConst::num_output(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCorrelationLayer = core::Ptr<crate::dnn::CorrelationLayer>;
	
	ptr_extern! { crate::dnn::CorrelationLayer,
		cv_PtrLcv_dnn_CorrelationLayerG_delete, cv_PtrLcv_dnn_CorrelationLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CorrelationLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CorrelationLayer, cv_PtrLcv_dnn_CorrelationLayerG_new_const_CorrelationLayer }
	impl core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] pub fn as_raw_PtrOfCorrelationLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCorrelationLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CorrelationLayerTraitConst for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] fn as_raw_CorrelationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CorrelationLayerTrait for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] fn as_raw_mut_CorrelationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCorrelationLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CorrelationLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCorrelationLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CorrelationLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CorrelationLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCorrelationLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCosLayer = core::Ptr<crate::dnn::CosLayer>;
	
	ptr_extern! { crate::dnn::CosLayer,
		cv_PtrLcv_dnn_CosLayerG_delete, cv_PtrLcv_dnn_CosLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CosLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CosLayer, cv_PtrLcv_dnn_CosLayerG_new_const_CosLayer }
	impl core::Ptr<crate::dnn::CosLayer> {
		#[inline] pub fn as_raw_PtrOfCosLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCosLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CosLayerTraitConst for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_CosLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CosLayerTrait for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_mut_CosLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCosLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CosLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCosLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_CosLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CosLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCosLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CosLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CosLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCosLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCoshLayer = core::Ptr<crate::dnn::CoshLayer>;
	
	ptr_extern! { crate::dnn::CoshLayer,
		cv_PtrLcv_dnn_CoshLayerG_delete, cv_PtrLcv_dnn_CoshLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CoshLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CoshLayer, cv_PtrLcv_dnn_CoshLayerG_new_const_CoshLayer }
	impl core::Ptr<crate::dnn::CoshLayer> {
		#[inline] pub fn as_raw_PtrOfCoshLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCoshLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CoshLayerTraitConst for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_CoshLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CoshLayerTrait for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_mut_CoshLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCoshLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CoshLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCoshLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_CoshLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CoshLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCoshLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CoshLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CoshLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCoshLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCropAndResizeLayer = core::Ptr<crate::dnn::CropAndResizeLayer>;
	
	ptr_extern! { crate::dnn::CropAndResizeLayer,
		cv_PtrLcv_dnn_CropAndResizeLayerG_delete, cv_PtrLcv_dnn_CropAndResizeLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CropAndResizeLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CropAndResizeLayer, cv_PtrLcv_dnn_CropAndResizeLayerG_new_const_CropAndResizeLayer }
	impl core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] pub fn as_raw_PtrOfCropAndResizeLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCropAndResizeLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CropAndResizeLayerTraitConst for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] fn as_raw_CropAndResizeLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CropAndResizeLayerTrait for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] fn as_raw_mut_CropAndResizeLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCropAndResizeLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CropAndResizeLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCropAndResizeLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CropAndResizeLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CropAndResizeLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCropAndResizeLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCropLayer = core::Ptr<crate::dnn::CropLayer>;
	
	ptr_extern! { crate::dnn::CropLayer,
		cv_PtrLcv_dnn_CropLayerG_delete, cv_PtrLcv_dnn_CropLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CropLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CropLayer, cv_PtrLcv_dnn_CropLayerG_new_const_CropLayer }
	impl core::Ptr<crate::dnn::CropLayer> {
		#[inline] pub fn as_raw_PtrOfCropLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCropLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CropLayerTraitConst for core::Ptr<crate::dnn::CropLayer> {
		#[inline] fn as_raw_CropLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CropLayerTrait for core::Ptr<crate::dnn::CropLayer> {
		#[inline] fn as_raw_mut_CropLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CropLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CropLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCropLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CropLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CropLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CropLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCropLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CropLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CropLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCropLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfCumSumLayer = core::Ptr<crate::dnn::CumSumLayer>;
	
	ptr_extern! { crate::dnn::CumSumLayer,
		cv_PtrLcv_dnn_CumSumLayerG_delete, cv_PtrLcv_dnn_CumSumLayerG_getInnerPtr_const, cv_PtrLcv_dnn_CumSumLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::CumSumLayer, cv_PtrLcv_dnn_CumSumLayerG_new_const_CumSumLayer }
	impl core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] pub fn as_raw_PtrOfCumSumLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCumSumLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::CumSumLayerTraitConst for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] fn as_raw_CumSumLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::CumSumLayerTrait for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] fn as_raw_mut_CumSumLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCumSumLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_CumSumLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCumSumLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_CumSumLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::CumSumLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCumSumLayer")
				.field("exclusive", &crate::dnn::CumSumLayerTraitConst::exclusive(self))
				.field("reverse", &crate::dnn::CumSumLayerTraitConst::reverse(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfDataAugmentationLayer = core::Ptr<crate::dnn::DataAugmentationLayer>;
	
	ptr_extern! { crate::dnn::DataAugmentationLayer,
		cv_PtrLcv_dnn_DataAugmentationLayerG_delete, cv_PtrLcv_dnn_DataAugmentationLayerG_getInnerPtr_const, cv_PtrLcv_dnn_DataAugmentationLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::DataAugmentationLayer, cv_PtrLcv_dnn_DataAugmentationLayerG_new_const_DataAugmentationLayer }
	impl core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] pub fn as_raw_PtrOfDataAugmentationLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDataAugmentationLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::DataAugmentationLayerTraitConst for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] fn as_raw_DataAugmentationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::DataAugmentationLayerTrait for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] fn as_raw_mut_DataAugmentationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDataAugmentationLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_DataAugmentationLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDataAugmentationLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_DataAugmentationLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::DataAugmentationLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDataAugmentationLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfDeconvolutionLayer = core::Ptr<crate::dnn::DeconvolutionLayer>;
	
	ptr_extern! { crate::dnn::DeconvolutionLayer,
		cv_PtrLcv_dnn_DeconvolutionLayerG_delete, cv_PtrLcv_dnn_DeconvolutionLayerG_getInnerPtr_const, cv_PtrLcv_dnn_DeconvolutionLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::DeconvolutionLayer, cv_PtrLcv_dnn_DeconvolutionLayerG_new_const_DeconvolutionLayer }
	impl core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] pub fn as_raw_PtrOfDeconvolutionLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDeconvolutionLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::DeconvolutionLayerTraitConst for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_DeconvolutionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::DeconvolutionLayerTrait for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_mut_DeconvolutionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDeconvolutionLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_DeconvolutionLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::BaseConvolutionLayerTraitConst for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_BaseConvolutionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::BaseConvolutionLayerTrait for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_mut_BaseConvolutionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDeconvolutionLayer, core::Ptr<crate::dnn::BaseConvolutionLayer>, cv_PtrLcv_dnn_DeconvolutionLayerG_to_PtrOfBaseConvolutionLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDeconvolutionLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_DeconvolutionLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::DeconvolutionLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDeconvolutionLayer")
				.field("kernel", &crate::dnn::BaseConvolutionLayerTraitConst::kernel(self))
				.field("stride", &crate::dnn::BaseConvolutionLayerTraitConst::stride(self))
				.field("pad", &crate::dnn::BaseConvolutionLayerTraitConst::pad(self))
				.field("dilation", &crate::dnn::BaseConvolutionLayerTraitConst::dilation(self))
				.field("adjust_pad", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pad(self))
				.field("adjust_pads", &crate::dnn::BaseConvolutionLayerTraitConst::adjust_pads(self))
				.field("kernel_size", &crate::dnn::BaseConvolutionLayerTraitConst::kernel_size(self))
				.field("strides", &crate::dnn::BaseConvolutionLayerTraitConst::strides(self))
				.field("dilations", &crate::dnn::BaseConvolutionLayerTraitConst::dilations(self))
				.field("pads_begin", &crate::dnn::BaseConvolutionLayerTraitConst::pads_begin(self))
				.field("pads_end", &crate::dnn::BaseConvolutionLayerTraitConst::pads_end(self))
				.field("pad_mode", &crate::dnn::BaseConvolutionLayerTraitConst::pad_mode(self))
				.field("num_output", &crate::dnn::BaseConvolutionLayerTraitConst::num_output(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfDepthToSpaceLayer = core::Ptr<crate::dnn::DepthToSpaceLayer>;
	
	ptr_extern! { crate::dnn::DepthToSpaceLayer,
		cv_PtrLcv_dnn_DepthToSpaceLayerG_delete, cv_PtrLcv_dnn_DepthToSpaceLayerG_getInnerPtr_const, cv_PtrLcv_dnn_DepthToSpaceLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::DepthToSpaceLayer, cv_PtrLcv_dnn_DepthToSpaceLayerG_new_const_DepthToSpaceLayer }
	impl core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] pub fn as_raw_PtrOfDepthToSpaceLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDepthToSpaceLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::DepthToSpaceLayerTraitConst for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] fn as_raw_DepthToSpaceLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::DepthToSpaceLayerTrait for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] fn as_raw_mut_DepthToSpaceLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDepthToSpaceLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_DepthToSpaceLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDepthToSpaceLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_DepthToSpaceLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::DepthToSpaceLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDepthToSpaceLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfDequantizeLayer = core::Ptr<crate::dnn::DequantizeLayer>;
	
	ptr_extern! { crate::dnn::DequantizeLayer,
		cv_PtrLcv_dnn_DequantizeLayerG_delete, cv_PtrLcv_dnn_DequantizeLayerG_getInnerPtr_const, cv_PtrLcv_dnn_DequantizeLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::DequantizeLayer, cv_PtrLcv_dnn_DequantizeLayerG_new_const_DequantizeLayer }
	impl core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] pub fn as_raw_PtrOfDequantizeLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDequantizeLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::DequantizeLayerTraitConst for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] fn as_raw_DequantizeLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::DequantizeLayerTrait for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] fn as_raw_mut_DequantizeLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDequantizeLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_DequantizeLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDequantizeLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_DequantizeLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::DequantizeLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDequantizeLayer")
				.field("scales", &crate::dnn::DequantizeLayerTraitConst::scales(self))
				.field("zeropoints", &crate::dnn::DequantizeLayerTraitConst::zeropoints(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfDetectionOutputLayer = core::Ptr<crate::dnn::DetectionOutputLayer>;
	
	ptr_extern! { crate::dnn::DetectionOutputLayer,
		cv_PtrLcv_dnn_DetectionOutputLayerG_delete, cv_PtrLcv_dnn_DetectionOutputLayerG_getInnerPtr_const, cv_PtrLcv_dnn_DetectionOutputLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::DetectionOutputLayer, cv_PtrLcv_dnn_DetectionOutputLayerG_new_const_DetectionOutputLayer }
	impl core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] pub fn as_raw_PtrOfDetectionOutputLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetectionOutputLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::DetectionOutputLayerTraitConst for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] fn as_raw_DetectionOutputLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::DetectionOutputLayerTrait for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] fn as_raw_mut_DetectionOutputLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetectionOutputLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_DetectionOutputLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetectionOutputLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_DetectionOutputLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::DetectionOutputLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetectionOutputLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfELULayer = core::Ptr<crate::dnn::ELULayer>;
	
	ptr_extern! { crate::dnn::ELULayer,
		cv_PtrLcv_dnn_ELULayerG_delete, cv_PtrLcv_dnn_ELULayerG_getInnerPtr_const, cv_PtrLcv_dnn_ELULayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ELULayer, cv_PtrLcv_dnn_ELULayerG_new_const_ELULayer }
	impl core::Ptr<crate::dnn::ELULayer> {
		#[inline] pub fn as_raw_PtrOfELULayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfELULayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ELULayerTraitConst for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_ELULayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ELULayerTrait for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_mut_ELULayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfELULayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ELULayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfELULayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ELULayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ELULayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfELULayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ELULayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ELULayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfELULayer")
				.field("alpha", &crate::dnn::ELULayerTraitConst::alpha(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfEinsumLayer = core::Ptr<crate::dnn::EinsumLayer>;
	
	ptr_extern! { crate::dnn::EinsumLayer,
		cv_PtrLcv_dnn_EinsumLayerG_delete, cv_PtrLcv_dnn_EinsumLayerG_getInnerPtr_const, cv_PtrLcv_dnn_EinsumLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::EinsumLayer, cv_PtrLcv_dnn_EinsumLayerG_new_const_EinsumLayer }
	impl core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] pub fn as_raw_PtrOfEinsumLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfEinsumLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::EinsumLayerTraitConst for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] fn as_raw_EinsumLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::EinsumLayerTrait for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] fn as_raw_mut_EinsumLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEinsumLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_EinsumLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEinsumLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_EinsumLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::EinsumLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfEinsumLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfEltwiseLayer = core::Ptr<crate::dnn::EltwiseLayer>;
	
	ptr_extern! { crate::dnn::EltwiseLayer,
		cv_PtrLcv_dnn_EltwiseLayerG_delete, cv_PtrLcv_dnn_EltwiseLayerG_getInnerPtr_const, cv_PtrLcv_dnn_EltwiseLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::EltwiseLayer, cv_PtrLcv_dnn_EltwiseLayerG_new_const_EltwiseLayer }
	impl core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] pub fn as_raw_PtrOfEltwiseLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfEltwiseLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::EltwiseLayerTraitConst for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] fn as_raw_EltwiseLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::EltwiseLayerTrait for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] fn as_raw_mut_EltwiseLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEltwiseLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_EltwiseLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEltwiseLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_EltwiseLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::EltwiseLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfEltwiseLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfEltwiseLayerInt8 = core::Ptr<crate::dnn::EltwiseLayerInt8>;
	
	ptr_extern! { crate::dnn::EltwiseLayerInt8,
		cv_PtrLcv_dnn_EltwiseLayerInt8G_delete, cv_PtrLcv_dnn_EltwiseLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_EltwiseLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::EltwiseLayerInt8, cv_PtrLcv_dnn_EltwiseLayerInt8G_new_const_EltwiseLayerInt8 }
	impl core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] pub fn as_raw_PtrOfEltwiseLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfEltwiseLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::EltwiseLayerInt8TraitConst for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] fn as_raw_EltwiseLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::EltwiseLayerInt8Trait for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] fn as_raw_mut_EltwiseLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEltwiseLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_EltwiseLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEltwiseLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_EltwiseLayerInt8G_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::EltwiseLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfEltwiseLayerInt8")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfErfLayer = core::Ptr<crate::dnn::ErfLayer>;
	
	ptr_extern! { crate::dnn::ErfLayer,
		cv_PtrLcv_dnn_ErfLayerG_delete, cv_PtrLcv_dnn_ErfLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ErfLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ErfLayer, cv_PtrLcv_dnn_ErfLayerG_new_const_ErfLayer }
	impl core::Ptr<crate::dnn::ErfLayer> {
		#[inline] pub fn as_raw_PtrOfErfLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfErfLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ErfLayerTraitConst for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_ErfLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ErfLayerTrait for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_mut_ErfLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfErfLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ErfLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfErfLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ErfLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ErfLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfErfLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ErfLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ErfLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfErfLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfExpLayer = core::Ptr<crate::dnn::ExpLayer>;
	
	ptr_extern! { crate::dnn::ExpLayer,
		cv_PtrLcv_dnn_ExpLayerG_delete, cv_PtrLcv_dnn_ExpLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ExpLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ExpLayer, cv_PtrLcv_dnn_ExpLayerG_new_const_ExpLayer }
	impl core::Ptr<crate::dnn::ExpLayer> {
		#[inline] pub fn as_raw_PtrOfExpLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfExpLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ExpLayerTraitConst for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_ExpLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ExpLayerTrait for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_mut_ExpLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfExpLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ExpLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfExpLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ExpLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ExpLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfExpLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ExpLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ExpLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfExpLayer")
				.field("base", &crate::dnn::ExpLayerTraitConst::base(self))
				.field("scale", &crate::dnn::ExpLayerTraitConst::scale(self))
				.field("shift", &crate::dnn::ExpLayerTraitConst::shift(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfExpandLayer = core::Ptr<crate::dnn::ExpandLayer>;
	
	ptr_extern! { crate::dnn::ExpandLayer,
		cv_PtrLcv_dnn_ExpandLayerG_delete, cv_PtrLcv_dnn_ExpandLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ExpandLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ExpandLayer, cv_PtrLcv_dnn_ExpandLayerG_new_const_ExpandLayer }
	impl core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] pub fn as_raw_PtrOfExpandLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfExpandLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ExpandLayerTraitConst for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] fn as_raw_ExpandLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ExpandLayerTrait for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] fn as_raw_mut_ExpandLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfExpandLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ExpandLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfExpandLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ExpandLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ExpandLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfExpandLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfFlattenLayer = core::Ptr<crate::dnn::FlattenLayer>;
	
	ptr_extern! { crate::dnn::FlattenLayer,
		cv_PtrLcv_dnn_FlattenLayerG_delete, cv_PtrLcv_dnn_FlattenLayerG_getInnerPtr_const, cv_PtrLcv_dnn_FlattenLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::FlattenLayer, cv_PtrLcv_dnn_FlattenLayerG_new_const_FlattenLayer }
	impl core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] pub fn as_raw_PtrOfFlattenLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFlattenLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::FlattenLayerTraitConst for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] fn as_raw_FlattenLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::FlattenLayerTrait for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] fn as_raw_mut_FlattenLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFlattenLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_FlattenLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFlattenLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_FlattenLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::FlattenLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFlattenLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfFloorLayer = core::Ptr<crate::dnn::FloorLayer>;
	
	ptr_extern! { crate::dnn::FloorLayer,
		cv_PtrLcv_dnn_FloorLayerG_delete, cv_PtrLcv_dnn_FloorLayerG_getInnerPtr_const, cv_PtrLcv_dnn_FloorLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::FloorLayer, cv_PtrLcv_dnn_FloorLayerG_new_const_FloorLayer }
	impl core::Ptr<crate::dnn::FloorLayer> {
		#[inline] pub fn as_raw_PtrOfFloorLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFloorLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::FloorLayerTraitConst for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_FloorLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::FloorLayerTrait for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_mut_FloorLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFloorLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_FloorLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFloorLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_FloorLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::FloorLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFloorLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_FloorLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::FloorLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFloorLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfFlowWarpLayer = core::Ptr<crate::dnn::FlowWarpLayer>;
	
	ptr_extern! { crate::dnn::FlowWarpLayer,
		cv_PtrLcv_dnn_FlowWarpLayerG_delete, cv_PtrLcv_dnn_FlowWarpLayerG_getInnerPtr_const, cv_PtrLcv_dnn_FlowWarpLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::FlowWarpLayer, cv_PtrLcv_dnn_FlowWarpLayerG_new_const_FlowWarpLayer }
	impl core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] pub fn as_raw_PtrOfFlowWarpLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFlowWarpLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::FlowWarpLayerTraitConst for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] fn as_raw_FlowWarpLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::FlowWarpLayerTrait for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] fn as_raw_mut_FlowWarpLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFlowWarpLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_FlowWarpLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFlowWarpLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_FlowWarpLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::FlowWarpLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFlowWarpLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGRULayer = core::Ptr<crate::dnn::GRULayer>;
	
	ptr_extern! { crate::dnn::GRULayer,
		cv_PtrLcv_dnn_GRULayerG_delete, cv_PtrLcv_dnn_GRULayerG_getInnerPtr_const, cv_PtrLcv_dnn_GRULayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GRULayer, cv_PtrLcv_dnn_GRULayerG_new_const_GRULayer }
	impl core::Ptr<crate::dnn::GRULayer> {
		#[inline] pub fn as_raw_PtrOfGRULayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGRULayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GRULayerTraitConst for core::Ptr<crate::dnn::GRULayer> {
		#[inline] fn as_raw_GRULayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GRULayerTrait for core::Ptr<crate::dnn::GRULayer> {
		#[inline] fn as_raw_mut_GRULayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GRULayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GRULayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGRULayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GRULayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GRULayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GRULayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGRULayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GRULayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GRULayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGRULayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGatherElementsLayer = core::Ptr<crate::dnn::GatherElementsLayer>;
	
	ptr_extern! { crate::dnn::GatherElementsLayer,
		cv_PtrLcv_dnn_GatherElementsLayerG_delete, cv_PtrLcv_dnn_GatherElementsLayerG_getInnerPtr_const, cv_PtrLcv_dnn_GatherElementsLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GatherElementsLayer, cv_PtrLcv_dnn_GatherElementsLayerG_new_const_GatherElementsLayer }
	impl core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] pub fn as_raw_PtrOfGatherElementsLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGatherElementsLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GatherElementsLayerTraitConst for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] fn as_raw_GatherElementsLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GatherElementsLayerTrait for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] fn as_raw_mut_GatherElementsLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGatherElementsLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GatherElementsLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGatherElementsLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GatherElementsLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GatherElementsLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGatherElementsLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGatherLayer = core::Ptr<crate::dnn::GatherLayer>;
	
	ptr_extern! { crate::dnn::GatherLayer,
		cv_PtrLcv_dnn_GatherLayerG_delete, cv_PtrLcv_dnn_GatherLayerG_getInnerPtr_const, cv_PtrLcv_dnn_GatherLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GatherLayer, cv_PtrLcv_dnn_GatherLayerG_new_const_GatherLayer }
	impl core::Ptr<crate::dnn::GatherLayer> {
		#[inline] pub fn as_raw_PtrOfGatherLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGatherLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GatherLayerTraitConst for core::Ptr<crate::dnn::GatherLayer> {
		#[inline] fn as_raw_GatherLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GatherLayerTrait for core::Ptr<crate::dnn::GatherLayer> {
		#[inline] fn as_raw_mut_GatherLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GatherLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GatherLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGatherLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GatherLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GatherLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GatherLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGatherLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GatherLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GatherLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGatherLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGeluApproximationLayer = core::Ptr<crate::dnn::GeluApproximationLayer>;
	
	ptr_extern! { crate::dnn::GeluApproximationLayer,
		cv_PtrLcv_dnn_GeluApproximationLayerG_delete, cv_PtrLcv_dnn_GeluApproximationLayerG_getInnerPtr_const, cv_PtrLcv_dnn_GeluApproximationLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GeluApproximationLayer, cv_PtrLcv_dnn_GeluApproximationLayerG_new_const_GeluApproximationLayer }
	impl core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] pub fn as_raw_PtrOfGeluApproximationLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGeluApproximationLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GeluApproximationLayerTraitConst for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_GeluApproximationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GeluApproximationLayerTrait for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_mut_GeluApproximationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeluApproximationLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GeluApproximationLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeluApproximationLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_GeluApproximationLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeluApproximationLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GeluApproximationLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GeluApproximationLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGeluApproximationLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGeluLayer = core::Ptr<crate::dnn::GeluLayer>;
	
	ptr_extern! { crate::dnn::GeluLayer,
		cv_PtrLcv_dnn_GeluLayerG_delete, cv_PtrLcv_dnn_GeluLayerG_getInnerPtr_const, cv_PtrLcv_dnn_GeluLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GeluLayer, cv_PtrLcv_dnn_GeluLayerG_new_const_GeluLayer }
	impl core::Ptr<crate::dnn::GeluLayer> {
		#[inline] pub fn as_raw_PtrOfGeluLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGeluLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GeluLayerTraitConst for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_GeluLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GeluLayerTrait for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_mut_GeluLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeluLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GeluLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeluLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_GeluLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GeluLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeluLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GeluLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GeluLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGeluLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGemmLayer = core::Ptr<crate::dnn::GemmLayer>;
	
	ptr_extern! { crate::dnn::GemmLayer,
		cv_PtrLcv_dnn_GemmLayerG_delete, cv_PtrLcv_dnn_GemmLayerG_getInnerPtr_const, cv_PtrLcv_dnn_GemmLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GemmLayer, cv_PtrLcv_dnn_GemmLayerG_new_const_GemmLayer }
	impl core::Ptr<crate::dnn::GemmLayer> {
		#[inline] pub fn as_raw_PtrOfGemmLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGemmLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GemmLayerTraitConst for core::Ptr<crate::dnn::GemmLayer> {
		#[inline] fn as_raw_GemmLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GemmLayerTrait for core::Ptr<crate::dnn::GemmLayer> {
		#[inline] fn as_raw_mut_GemmLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GemmLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GemmLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGemmLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GemmLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GemmLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GemmLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGemmLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GemmLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GemmLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGemmLayer")
				.field("trans_a", &crate::dnn::GemmLayerTraitConst::trans_a(self))
				.field("trans_b", &crate::dnn::GemmLayerTraitConst::trans_b(self))
				.field("alpha", &crate::dnn::GemmLayerTraitConst::alpha(self))
				.field("beta", &crate::dnn::GemmLayerTraitConst::beta(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfGroupNormLayer = core::Ptr<crate::dnn::GroupNormLayer>;
	
	ptr_extern! { crate::dnn::GroupNormLayer,
		cv_PtrLcv_dnn_GroupNormLayerG_delete, cv_PtrLcv_dnn_GroupNormLayerG_getInnerPtr_const, cv_PtrLcv_dnn_GroupNormLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::GroupNormLayer, cv_PtrLcv_dnn_GroupNormLayerG_new_const_GroupNormLayer }
	impl core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] pub fn as_raw_PtrOfGroupNormLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGroupNormLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::GroupNormLayerTraitConst for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] fn as_raw_GroupNormLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::GroupNormLayerTrait for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] fn as_raw_mut_GroupNormLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGroupNormLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_GroupNormLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGroupNormLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_GroupNormLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::GroupNormLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGroupNormLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfHardSigmoidLayer = core::Ptr<crate::dnn::HardSigmoidLayer>;
	
	ptr_extern! { crate::dnn::HardSigmoidLayer,
		cv_PtrLcv_dnn_HardSigmoidLayerG_delete, cv_PtrLcv_dnn_HardSigmoidLayerG_getInnerPtr_const, cv_PtrLcv_dnn_HardSigmoidLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::HardSigmoidLayer, cv_PtrLcv_dnn_HardSigmoidLayerG_new_const_HardSigmoidLayer }
	impl core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] pub fn as_raw_PtrOfHardSigmoidLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfHardSigmoidLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::HardSigmoidLayerTraitConst for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_HardSigmoidLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::HardSigmoidLayerTrait for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_mut_HardSigmoidLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHardSigmoidLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_HardSigmoidLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHardSigmoidLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_HardSigmoidLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHardSigmoidLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_HardSigmoidLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::HardSigmoidLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfHardSigmoidLayer")
				.field("alpha", &crate::dnn::HardSigmoidLayerTraitConst::alpha(self))
				.field("beta", &crate::dnn::HardSigmoidLayerTraitConst::beta(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfHardSwishLayer = core::Ptr<crate::dnn::HardSwishLayer>;
	
	ptr_extern! { crate::dnn::HardSwishLayer,
		cv_PtrLcv_dnn_HardSwishLayerG_delete, cv_PtrLcv_dnn_HardSwishLayerG_getInnerPtr_const, cv_PtrLcv_dnn_HardSwishLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::HardSwishLayer, cv_PtrLcv_dnn_HardSwishLayerG_new_const_HardSwishLayer }
	impl core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] pub fn as_raw_PtrOfHardSwishLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfHardSwishLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::HardSwishLayerTraitConst for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_HardSwishLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::HardSwishLayerTrait for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_mut_HardSwishLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHardSwishLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_HardSwishLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHardSwishLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_HardSwishLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHardSwishLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_HardSwishLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::HardSwishLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfHardSwishLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfInnerProductLayer = core::Ptr<crate::dnn::InnerProductLayer>;
	
	ptr_extern! { crate::dnn::InnerProductLayer,
		cv_PtrLcv_dnn_InnerProductLayerG_delete, cv_PtrLcv_dnn_InnerProductLayerG_getInnerPtr_const, cv_PtrLcv_dnn_InnerProductLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::InnerProductLayer, cv_PtrLcv_dnn_InnerProductLayerG_new_const_InnerProductLayer }
	impl core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] pub fn as_raw_PtrOfInnerProductLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfInnerProductLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::InnerProductLayerTraitConst for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] fn as_raw_InnerProductLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::InnerProductLayerTrait for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] fn as_raw_mut_InnerProductLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInnerProductLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_InnerProductLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInnerProductLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_InnerProductLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::InnerProductLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfInnerProductLayer")
				.field("axis", &crate::dnn::InnerProductLayerTraitConst::axis(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfInnerProductLayerInt8 = core::Ptr<crate::dnn::InnerProductLayerInt8>;
	
	ptr_extern! { crate::dnn::InnerProductLayerInt8,
		cv_PtrLcv_dnn_InnerProductLayerInt8G_delete, cv_PtrLcv_dnn_InnerProductLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_InnerProductLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::InnerProductLayerInt8, cv_PtrLcv_dnn_InnerProductLayerInt8G_new_const_InnerProductLayerInt8 }
	impl core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] pub fn as_raw_PtrOfInnerProductLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfInnerProductLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::InnerProductLayerInt8TraitConst for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_InnerProductLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::InnerProductLayerInt8Trait for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_mut_InnerProductLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInnerProductLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_InnerProductLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::InnerProductLayerTraitConst for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_InnerProductLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::InnerProductLayerTrait for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_mut_InnerProductLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInnerProductLayerInt8, core::Ptr<crate::dnn::InnerProductLayer>, cv_PtrLcv_dnn_InnerProductLayerInt8G_to_PtrOfInnerProductLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInnerProductLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_InnerProductLayerInt8G_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::InnerProductLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfInnerProductLayerInt8")
				.field("input_zp", &crate::dnn::InnerProductLayerInt8TraitConst::input_zp(self))
				.field("output_zp", &crate::dnn::InnerProductLayerInt8TraitConst::output_zp(self))
				.field("input_sc", &crate::dnn::InnerProductLayerInt8TraitConst::input_sc(self))
				.field("output_sc", &crate::dnn::InnerProductLayerInt8TraitConst::output_sc(self))
				.field("per_channel", &crate::dnn::InnerProductLayerInt8TraitConst::per_channel(self))
				.field("axis", &crate::dnn::InnerProductLayerTraitConst::axis(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfInstanceNormLayer = core::Ptr<crate::dnn::InstanceNormLayer>;
	
	ptr_extern! { crate::dnn::InstanceNormLayer,
		cv_PtrLcv_dnn_InstanceNormLayerG_delete, cv_PtrLcv_dnn_InstanceNormLayerG_getInnerPtr_const, cv_PtrLcv_dnn_InstanceNormLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::InstanceNormLayer, cv_PtrLcv_dnn_InstanceNormLayerG_new_const_InstanceNormLayer }
	impl core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] pub fn as_raw_PtrOfInstanceNormLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfInstanceNormLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::InstanceNormLayerTraitConst for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] fn as_raw_InstanceNormLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::InstanceNormLayerTrait for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] fn as_raw_mut_InstanceNormLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInstanceNormLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_InstanceNormLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInstanceNormLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_InstanceNormLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::InstanceNormLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfInstanceNormLayer")
				.field("epsilon", &crate::dnn::InstanceNormLayerTraitConst::epsilon(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfInterpLayer = core::Ptr<crate::dnn::InterpLayer>;
	
	ptr_extern! { crate::dnn::InterpLayer,
		cv_PtrLcv_dnn_InterpLayerG_delete, cv_PtrLcv_dnn_InterpLayerG_getInnerPtr_const, cv_PtrLcv_dnn_InterpLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::InterpLayer, cv_PtrLcv_dnn_InterpLayerG_new_const_InterpLayer }
	impl core::Ptr<crate::dnn::InterpLayer> {
		#[inline] pub fn as_raw_PtrOfInterpLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfInterpLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::InterpLayerTraitConst for core::Ptr<crate::dnn::InterpLayer> {
		#[inline] fn as_raw_InterpLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::InterpLayerTrait for core::Ptr<crate::dnn::InterpLayer> {
		#[inline] fn as_raw_mut_InterpLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::InterpLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::InterpLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInterpLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_InterpLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::InterpLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::InterpLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfInterpLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_InterpLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::InterpLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfInterpLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfLRNLayer = core::Ptr<crate::dnn::LRNLayer>;
	
	ptr_extern! { crate::dnn::LRNLayer,
		cv_PtrLcv_dnn_LRNLayerG_delete, cv_PtrLcv_dnn_LRNLayerG_getInnerPtr_const, cv_PtrLcv_dnn_LRNLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::LRNLayer, cv_PtrLcv_dnn_LRNLayerG_new_const_LRNLayer }
	impl core::Ptr<crate::dnn::LRNLayer> {
		#[inline] pub fn as_raw_PtrOfLRNLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLRNLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::LRNLayerTraitConst for core::Ptr<crate::dnn::LRNLayer> {
		#[inline] fn as_raw_LRNLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LRNLayerTrait for core::Ptr<crate::dnn::LRNLayer> {
		#[inline] fn as_raw_mut_LRNLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::LRNLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::LRNLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLRNLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_LRNLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::LRNLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::LRNLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLRNLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_LRNLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::LRNLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLRNLayer")
				.field("typ", &crate::dnn::LRNLayerTraitConst::typ(self))
				.field("size", &crate::dnn::LRNLayerTraitConst::size(self))
				.field("alpha", &crate::dnn::LRNLayerTraitConst::alpha(self))
				.field("beta", &crate::dnn::LRNLayerTraitConst::beta(self))
				.field("bias", &crate::dnn::LRNLayerTraitConst::bias(self))
				.field("norm_by_size", &crate::dnn::LRNLayerTraitConst::norm_by_size(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfLSTMLayer = core::Ptr<crate::dnn::LSTMLayer>;
	
	ptr_extern! { crate::dnn::LSTMLayer,
		cv_PtrLcv_dnn_LSTMLayerG_delete, cv_PtrLcv_dnn_LSTMLayerG_getInnerPtr_const, cv_PtrLcv_dnn_LSTMLayerG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] pub fn as_raw_PtrOfLSTMLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLSTMLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::LSTMLayerTraitConst for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] fn as_raw_LSTMLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LSTMLayerTrait for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] fn as_raw_mut_LSTMLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLSTMLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_LSTMLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLSTMLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_LSTMLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::LSTMLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLSTMLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfLayer = core::Ptr<crate::dnn::Layer>;
	
	ptr_extern! { crate::dnn::Layer,
		cv_PtrLcv_dnn_LayerG_delete, cv_PtrLcv_dnn_LayerG_getInnerPtr_const, cv_PtrLcv_dnn_LayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::Layer, cv_PtrLcv_dnn_LayerG_new_const_Layer }
	impl core::Ptr<crate::dnn::Layer> {
		#[inline] pub fn as_raw_PtrOfLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::Layer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::Layer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::Layer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::Layer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_LayerG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::Layer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfLayerNormLayer = core::Ptr<crate::dnn::LayerNormLayer>;
	
	ptr_extern! { crate::dnn::LayerNormLayer,
		cv_PtrLcv_dnn_LayerNormLayerG_delete, cv_PtrLcv_dnn_LayerNormLayerG_getInnerPtr_const, cv_PtrLcv_dnn_LayerNormLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::LayerNormLayer, cv_PtrLcv_dnn_LayerNormLayerG_new_const_LayerNormLayer }
	impl core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] pub fn as_raw_PtrOfLayerNormLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLayerNormLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::LayerNormLayerTraitConst for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] fn as_raw_LayerNormLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerNormLayerTrait for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] fn as_raw_mut_LayerNormLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLayerNormLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_LayerNormLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLayerNormLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_LayerNormLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::LayerNormLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLayerNormLayer")
				.field("has_bias", &crate::dnn::LayerNormLayerTraitConst::has_bias(self))
				.field("axis", &crate::dnn::LayerNormLayerTraitConst::axis(self))
				.field("epsilon", &crate::dnn::LayerNormLayerTraitConst::epsilon(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfLogLayer = core::Ptr<crate::dnn::LogLayer>;
	
	ptr_extern! { crate::dnn::LogLayer,
		cv_PtrLcv_dnn_LogLayerG_delete, cv_PtrLcv_dnn_LogLayerG_getInnerPtr_const, cv_PtrLcv_dnn_LogLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::LogLayer, cv_PtrLcv_dnn_LogLayerG_new_const_LogLayer }
	impl core::Ptr<crate::dnn::LogLayer> {
		#[inline] pub fn as_raw_PtrOfLogLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLogLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::LogLayerTraitConst for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_LogLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LogLayerTrait for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_mut_LogLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLogLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_LogLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLogLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_LogLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::LogLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLogLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_LogLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::LogLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLogLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfMVNLayer = core::Ptr<crate::dnn::MVNLayer>;
	
	ptr_extern! { crate::dnn::MVNLayer,
		cv_PtrLcv_dnn_MVNLayerG_delete, cv_PtrLcv_dnn_MVNLayerG_getInnerPtr_const, cv_PtrLcv_dnn_MVNLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::MVNLayer, cv_PtrLcv_dnn_MVNLayerG_new_const_MVNLayer }
	impl core::Ptr<crate::dnn::MVNLayer> {
		#[inline] pub fn as_raw_PtrOfMVNLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMVNLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::MVNLayerTraitConst for core::Ptr<crate::dnn::MVNLayer> {
		#[inline] fn as_raw_MVNLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::MVNLayerTrait for core::Ptr<crate::dnn::MVNLayer> {
		#[inline] fn as_raw_mut_MVNLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::MVNLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::MVNLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMVNLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_MVNLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::MVNLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::MVNLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMVNLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_MVNLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::MVNLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMVNLayer")
				.field("eps", &crate::dnn::MVNLayerTraitConst::eps(self))
				.field("norm_variance", &crate::dnn::MVNLayerTraitConst::norm_variance(self))
				.field("across_channels", &crate::dnn::MVNLayerTraitConst::across_channels(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfMatMulLayer = core::Ptr<crate::dnn::MatMulLayer>;
	
	ptr_extern! { crate::dnn::MatMulLayer,
		cv_PtrLcv_dnn_MatMulLayerG_delete, cv_PtrLcv_dnn_MatMulLayerG_getInnerPtr_const, cv_PtrLcv_dnn_MatMulLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::MatMulLayer, cv_PtrLcv_dnn_MatMulLayerG_new_const_MatMulLayer }
	impl core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] pub fn as_raw_PtrOfMatMulLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMatMulLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::MatMulLayerTraitConst for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] fn as_raw_MatMulLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::MatMulLayerTrait for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] fn as_raw_mut_MatMulLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMatMulLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_MatMulLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMatMulLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_MatMulLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::MatMulLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMatMulLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfMaxUnpoolLayer = core::Ptr<crate::dnn::MaxUnpoolLayer>;
	
	ptr_extern! { crate::dnn::MaxUnpoolLayer,
		cv_PtrLcv_dnn_MaxUnpoolLayerG_delete, cv_PtrLcv_dnn_MaxUnpoolLayerG_getInnerPtr_const, cv_PtrLcv_dnn_MaxUnpoolLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::MaxUnpoolLayer, cv_PtrLcv_dnn_MaxUnpoolLayerG_new_const_MaxUnpoolLayer }
	impl core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] pub fn as_raw_PtrOfMaxUnpoolLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMaxUnpoolLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::MaxUnpoolLayerTraitConst for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] fn as_raw_MaxUnpoolLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::MaxUnpoolLayerTrait for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] fn as_raw_mut_MaxUnpoolLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMaxUnpoolLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_MaxUnpoolLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMaxUnpoolLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_MaxUnpoolLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::MaxUnpoolLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMaxUnpoolLayer")
				.field("pool_kernel", &crate::dnn::MaxUnpoolLayerTraitConst::pool_kernel(self))
				.field("pool_pad", &crate::dnn::MaxUnpoolLayerTraitConst::pool_pad(self))
				.field("pool_stride", &crate::dnn::MaxUnpoolLayerTraitConst::pool_stride(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfMishLayer = core::Ptr<crate::dnn::MishLayer>;
	
	ptr_extern! { crate::dnn::MishLayer,
		cv_PtrLcv_dnn_MishLayerG_delete, cv_PtrLcv_dnn_MishLayerG_getInnerPtr_const, cv_PtrLcv_dnn_MishLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::MishLayer, cv_PtrLcv_dnn_MishLayerG_new_const_MishLayer }
	impl core::Ptr<crate::dnn::MishLayer> {
		#[inline] pub fn as_raw_PtrOfMishLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMishLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::MishLayerTraitConst for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_MishLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::MishLayerTrait for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_mut_MishLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMishLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_MishLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMishLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_MishLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::MishLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMishLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_MishLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::MishLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMishLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfNaryEltwiseLayer = core::Ptr<crate::dnn::NaryEltwiseLayer>;
	
	ptr_extern! { crate::dnn::NaryEltwiseLayer,
		cv_PtrLcv_dnn_NaryEltwiseLayerG_delete, cv_PtrLcv_dnn_NaryEltwiseLayerG_getInnerPtr_const, cv_PtrLcv_dnn_NaryEltwiseLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::NaryEltwiseLayer, cv_PtrLcv_dnn_NaryEltwiseLayerG_new_const_NaryEltwiseLayer }
	impl core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] pub fn as_raw_PtrOfNaryEltwiseLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfNaryEltwiseLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::NaryEltwiseLayerTraitConst for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] fn as_raw_NaryEltwiseLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::NaryEltwiseLayerTrait for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] fn as_raw_mut_NaryEltwiseLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNaryEltwiseLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_NaryEltwiseLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNaryEltwiseLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_NaryEltwiseLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::NaryEltwiseLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfNaryEltwiseLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfNormalizeBBoxLayer = core::Ptr<crate::dnn::NormalizeBBoxLayer>;
	
	ptr_extern! { crate::dnn::NormalizeBBoxLayer,
		cv_PtrLcv_dnn_NormalizeBBoxLayerG_delete, cv_PtrLcv_dnn_NormalizeBBoxLayerG_getInnerPtr_const, cv_PtrLcv_dnn_NormalizeBBoxLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::NormalizeBBoxLayer, cv_PtrLcv_dnn_NormalizeBBoxLayerG_new_const_NormalizeBBoxLayer }
	impl core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] pub fn as_raw_PtrOfNormalizeBBoxLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfNormalizeBBoxLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::NormalizeBBoxLayerTraitConst for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] fn as_raw_NormalizeBBoxLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::NormalizeBBoxLayerTrait for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] fn as_raw_mut_NormalizeBBoxLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNormalizeBBoxLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_NormalizeBBoxLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNormalizeBBoxLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_NormalizeBBoxLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::NormalizeBBoxLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfNormalizeBBoxLayer")
				.field("pnorm", &crate::dnn::NormalizeBBoxLayerTraitConst::pnorm(self))
				.field("epsilon", &crate::dnn::NormalizeBBoxLayerTraitConst::epsilon(self))
				.field("across_spatial", &crate::dnn::NormalizeBBoxLayerTraitConst::across_spatial(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfNotLayer = core::Ptr<crate::dnn::NotLayer>;
	
	ptr_extern! { crate::dnn::NotLayer,
		cv_PtrLcv_dnn_NotLayerG_delete, cv_PtrLcv_dnn_NotLayerG_getInnerPtr_const, cv_PtrLcv_dnn_NotLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::NotLayer, cv_PtrLcv_dnn_NotLayerG_new_const_NotLayer }
	impl core::Ptr<crate::dnn::NotLayer> {
		#[inline] pub fn as_raw_PtrOfNotLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfNotLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::NotLayerTraitConst for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_NotLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::NotLayerTrait for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_mut_NotLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNotLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_NotLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNotLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_NotLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::NotLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNotLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_NotLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::NotLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfNotLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfPaddingLayer = core::Ptr<crate::dnn::PaddingLayer>;
	
	ptr_extern! { crate::dnn::PaddingLayer,
		cv_PtrLcv_dnn_PaddingLayerG_delete, cv_PtrLcv_dnn_PaddingLayerG_getInnerPtr_const, cv_PtrLcv_dnn_PaddingLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::PaddingLayer, cv_PtrLcv_dnn_PaddingLayerG_new_const_PaddingLayer }
	impl core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] pub fn as_raw_PtrOfPaddingLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPaddingLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::PaddingLayerTraitConst for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] fn as_raw_PaddingLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PaddingLayerTrait for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] fn as_raw_mut_PaddingLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPaddingLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_PaddingLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPaddingLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_PaddingLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::PaddingLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPaddingLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfPermuteLayer = core::Ptr<crate::dnn::PermuteLayer>;
	
	ptr_extern! { crate::dnn::PermuteLayer,
		cv_PtrLcv_dnn_PermuteLayerG_delete, cv_PtrLcv_dnn_PermuteLayerG_getInnerPtr_const, cv_PtrLcv_dnn_PermuteLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::PermuteLayer, cv_PtrLcv_dnn_PermuteLayerG_new_const_PermuteLayer }
	impl core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] pub fn as_raw_PtrOfPermuteLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPermuteLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::PermuteLayerTraitConst for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] fn as_raw_PermuteLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PermuteLayerTrait for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] fn as_raw_mut_PermuteLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPermuteLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_PermuteLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPermuteLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_PermuteLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::PermuteLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPermuteLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfPoolingLayer = core::Ptr<crate::dnn::PoolingLayer>;
	
	ptr_extern! { crate::dnn::PoolingLayer,
		cv_PtrLcv_dnn_PoolingLayerG_delete, cv_PtrLcv_dnn_PoolingLayerG_getInnerPtr_const, cv_PtrLcv_dnn_PoolingLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::PoolingLayer, cv_PtrLcv_dnn_PoolingLayerG_new_const_PoolingLayer }
	impl core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] pub fn as_raw_PtrOfPoolingLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPoolingLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::PoolingLayerTraitConst for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] fn as_raw_PoolingLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PoolingLayerTrait for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] fn as_raw_mut_PoolingLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPoolingLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_PoolingLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPoolingLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_PoolingLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::PoolingLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPoolingLayer")
				.field("typ", &crate::dnn::PoolingLayerTraitConst::typ(self))
				.field("kernel_size", &crate::dnn::PoolingLayerTraitConst::kernel_size(self))
				.field("strides", &crate::dnn::PoolingLayerTraitConst::strides(self))
				.field("pads_begin", &crate::dnn::PoolingLayerTraitConst::pads_begin(self))
				.field("pads_end", &crate::dnn::PoolingLayerTraitConst::pads_end(self))
				.field("global_pooling", &crate::dnn::PoolingLayerTraitConst::global_pooling(self))
				.field("is_global_pooling", &crate::dnn::PoolingLayerTraitConst::is_global_pooling(self))
				.field("compute_max_idx", &crate::dnn::PoolingLayerTraitConst::compute_max_idx(self))
				.field("pad_mode", &crate::dnn::PoolingLayerTraitConst::pad_mode(self))
				.field("ceil_mode", &crate::dnn::PoolingLayerTraitConst::ceil_mode(self))
				.field("ave_pool_padded_area", &crate::dnn::PoolingLayerTraitConst::ave_pool_padded_area(self))
				.field("pooled_size", &crate::dnn::PoolingLayerTraitConst::pooled_size(self))
				.field("spatial_scale", &crate::dnn::PoolingLayerTraitConst::spatial_scale(self))
				.field("ps_roi_out_channels", &crate::dnn::PoolingLayerTraitConst::ps_roi_out_channels(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfPoolingLayerInt8 = core::Ptr<crate::dnn::PoolingLayerInt8>;
	
	ptr_extern! { crate::dnn::PoolingLayerInt8,
		cv_PtrLcv_dnn_PoolingLayerInt8G_delete, cv_PtrLcv_dnn_PoolingLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_PoolingLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::PoolingLayerInt8, cv_PtrLcv_dnn_PoolingLayerInt8G_new_const_PoolingLayerInt8 }
	impl core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] pub fn as_raw_PtrOfPoolingLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPoolingLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::PoolingLayerInt8TraitConst for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_PoolingLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PoolingLayerInt8Trait for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_mut_PoolingLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPoolingLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_PoolingLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPoolingLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_PoolingLayerInt8G_to_PtrOfLayer }
	
	impl crate::dnn::PoolingLayerTraitConst for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_PoolingLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PoolingLayerTrait for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline] fn as_raw_mut_PoolingLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPoolingLayerInt8, core::Ptr<crate::dnn::PoolingLayer>, cv_PtrLcv_dnn_PoolingLayerInt8G_to_PtrOfPoolingLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::PoolingLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPoolingLayerInt8")
				.field("input_zp", &crate::dnn::PoolingLayerInt8TraitConst::input_zp(self))
				.field("output_zp", &crate::dnn::PoolingLayerInt8TraitConst::output_zp(self))
				.field("input_sc", &crate::dnn::PoolingLayerInt8TraitConst::input_sc(self))
				.field("output_sc", &crate::dnn::PoolingLayerInt8TraitConst::output_sc(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.field("typ", &crate::dnn::PoolingLayerTraitConst::typ(self))
				.field("kernel_size", &crate::dnn::PoolingLayerTraitConst::kernel_size(self))
				.field("strides", &crate::dnn::PoolingLayerTraitConst::strides(self))
				.field("pads_begin", &crate::dnn::PoolingLayerTraitConst::pads_begin(self))
				.field("pads_end", &crate::dnn::PoolingLayerTraitConst::pads_end(self))
				.field("global_pooling", &crate::dnn::PoolingLayerTraitConst::global_pooling(self))
				.field("is_global_pooling", &crate::dnn::PoolingLayerTraitConst::is_global_pooling(self))
				.field("compute_max_idx", &crate::dnn::PoolingLayerTraitConst::compute_max_idx(self))
				.field("pad_mode", &crate::dnn::PoolingLayerTraitConst::pad_mode(self))
				.field("ceil_mode", &crate::dnn::PoolingLayerTraitConst::ceil_mode(self))
				.field("ave_pool_padded_area", &crate::dnn::PoolingLayerTraitConst::ave_pool_padded_area(self))
				.field("pooled_size", &crate::dnn::PoolingLayerTraitConst::pooled_size(self))
				.field("spatial_scale", &crate::dnn::PoolingLayerTraitConst::spatial_scale(self))
				.field("ps_roi_out_channels", &crate::dnn::PoolingLayerTraitConst::ps_roi_out_channels(self))
				.finish()
		}
	}
	
	pub type PtrOfPowerLayer = core::Ptr<crate::dnn::PowerLayer>;
	
	ptr_extern! { crate::dnn::PowerLayer,
		cv_PtrLcv_dnn_PowerLayerG_delete, cv_PtrLcv_dnn_PowerLayerG_getInnerPtr_const, cv_PtrLcv_dnn_PowerLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::PowerLayer, cv_PtrLcv_dnn_PowerLayerG_new_const_PowerLayer }
	impl core::Ptr<crate::dnn::PowerLayer> {
		#[inline] pub fn as_raw_PtrOfPowerLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPowerLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::PowerLayerTraitConst for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_PowerLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PowerLayerTrait for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_mut_PowerLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPowerLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_PowerLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPowerLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_PowerLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::PowerLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPowerLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_PowerLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::PowerLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPowerLayer")
				.field("power", &crate::dnn::PowerLayerTraitConst::power(self))
				.field("scale", &crate::dnn::PowerLayerTraitConst::scale(self))
				.field("shift", &crate::dnn::PowerLayerTraitConst::shift(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfPriorBoxLayer = core::Ptr<crate::dnn::PriorBoxLayer>;
	
	ptr_extern! { crate::dnn::PriorBoxLayer,
		cv_PtrLcv_dnn_PriorBoxLayerG_delete, cv_PtrLcv_dnn_PriorBoxLayerG_getInnerPtr_const, cv_PtrLcv_dnn_PriorBoxLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::PriorBoxLayer, cv_PtrLcv_dnn_PriorBoxLayerG_new_const_PriorBoxLayer }
	impl core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] pub fn as_raw_PtrOfPriorBoxLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPriorBoxLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::PriorBoxLayerTraitConst for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] fn as_raw_PriorBoxLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::PriorBoxLayerTrait for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] fn as_raw_mut_PriorBoxLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPriorBoxLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_PriorBoxLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPriorBoxLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_PriorBoxLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::PriorBoxLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPriorBoxLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfProposalLayer = core::Ptr<crate::dnn::ProposalLayer>;
	
	ptr_extern! { crate::dnn::ProposalLayer,
		cv_PtrLcv_dnn_ProposalLayerG_delete, cv_PtrLcv_dnn_ProposalLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ProposalLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ProposalLayer, cv_PtrLcv_dnn_ProposalLayerG_new_const_ProposalLayer }
	impl core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] pub fn as_raw_PtrOfProposalLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfProposalLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ProposalLayerTraitConst for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] fn as_raw_ProposalLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ProposalLayerTrait for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] fn as_raw_mut_ProposalLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfProposalLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ProposalLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfProposalLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ProposalLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ProposalLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfProposalLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfQuantizeLayer = core::Ptr<crate::dnn::QuantizeLayer>;
	
	ptr_extern! { crate::dnn::QuantizeLayer,
		cv_PtrLcv_dnn_QuantizeLayerG_delete, cv_PtrLcv_dnn_QuantizeLayerG_getInnerPtr_const, cv_PtrLcv_dnn_QuantizeLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::QuantizeLayer, cv_PtrLcv_dnn_QuantizeLayerG_new_const_QuantizeLayer }
	impl core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] pub fn as_raw_PtrOfQuantizeLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfQuantizeLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::QuantizeLayerTraitConst for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] fn as_raw_QuantizeLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::QuantizeLayerTrait for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] fn as_raw_mut_QuantizeLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfQuantizeLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_QuantizeLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfQuantizeLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_QuantizeLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::QuantizeLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfQuantizeLayer")
				.field("scales", &crate::dnn::QuantizeLayerTraitConst::scales(self))
				.field("zeropoints", &crate::dnn::QuantizeLayerTraitConst::zeropoints(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfRNNLayer = core::Ptr<crate::dnn::RNNLayer>;
	
	ptr_extern! { crate::dnn::RNNLayer,
		cv_PtrLcv_dnn_RNNLayerG_delete, cv_PtrLcv_dnn_RNNLayerG_getInnerPtr_const, cv_PtrLcv_dnn_RNNLayerG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::dnn::RNNLayer> {
		#[inline] pub fn as_raw_PtrOfRNNLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfRNNLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::RNNLayerTraitConst for core::Ptr<crate::dnn::RNNLayer> {
		#[inline] fn as_raw_RNNLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::RNNLayerTrait for core::Ptr<crate::dnn::RNNLayer> {
		#[inline] fn as_raw_mut_RNNLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::RNNLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::RNNLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRNNLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_RNNLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::RNNLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::RNNLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRNNLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_RNNLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::RNNLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfRNNLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfReLU6Layer = core::Ptr<crate::dnn::ReLU6Layer>;
	
	ptr_extern! { crate::dnn::ReLU6Layer,
		cv_PtrLcv_dnn_ReLU6LayerG_delete, cv_PtrLcv_dnn_ReLU6LayerG_getInnerPtr_const, cv_PtrLcv_dnn_ReLU6LayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ReLU6Layer, cv_PtrLcv_dnn_ReLU6LayerG_new_const_ReLU6Layer }
	impl core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] pub fn as_raw_PtrOfReLU6Layer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfReLU6Layer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ReLU6LayerTraitConst for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_ReLU6Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ReLU6LayerTrait for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_mut_ReLU6Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReLU6Layer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ReLU6LayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReLU6Layer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ReLU6LayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReLU6Layer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ReLU6LayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ReLU6Layer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfReLU6Layer")
				.field("min_value", &crate::dnn::ReLU6LayerTraitConst::min_value(self))
				.field("max_value", &crate::dnn::ReLU6LayerTraitConst::max_value(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfReLULayer = core::Ptr<crate::dnn::ReLULayer>;
	
	ptr_extern! { crate::dnn::ReLULayer,
		cv_PtrLcv_dnn_ReLULayerG_delete, cv_PtrLcv_dnn_ReLULayerG_getInnerPtr_const, cv_PtrLcv_dnn_ReLULayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ReLULayer, cv_PtrLcv_dnn_ReLULayerG_new_const_ReLULayer }
	impl core::Ptr<crate::dnn::ReLULayer> {
		#[inline] pub fn as_raw_PtrOfReLULayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfReLULayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ReLULayerTraitConst for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_ReLULayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ReLULayerTrait for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_mut_ReLULayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReLULayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ReLULayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReLULayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ReLULayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ReLULayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReLULayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ReLULayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ReLULayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfReLULayer")
				.field("negative_slope", &crate::dnn::ReLULayerTraitConst::negative_slope(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfReciprocalLayer = core::Ptr<crate::dnn::ReciprocalLayer>;
	
	ptr_extern! { crate::dnn::ReciprocalLayer,
		cv_PtrLcv_dnn_ReciprocalLayerG_delete, cv_PtrLcv_dnn_ReciprocalLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ReciprocalLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ReciprocalLayer, cv_PtrLcv_dnn_ReciprocalLayerG_new_const_ReciprocalLayer }
	impl core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] pub fn as_raw_PtrOfReciprocalLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfReciprocalLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ReciprocalLayerTraitConst for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_ReciprocalLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ReciprocalLayerTrait for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_mut_ReciprocalLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReciprocalLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ReciprocalLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReciprocalLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ReciprocalLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReciprocalLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ReciprocalLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ReciprocalLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfReciprocalLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfReduceLayer = core::Ptr<crate::dnn::ReduceLayer>;
	
	ptr_extern! { crate::dnn::ReduceLayer,
		cv_PtrLcv_dnn_ReduceLayerG_delete, cv_PtrLcv_dnn_ReduceLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ReduceLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ReduceLayer, cv_PtrLcv_dnn_ReduceLayerG_new_const_ReduceLayer }
	impl core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] pub fn as_raw_PtrOfReduceLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfReduceLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ReduceLayerTraitConst for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] fn as_raw_ReduceLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ReduceLayerTrait for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] fn as_raw_mut_ReduceLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReduceLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ReduceLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReduceLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ReduceLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ReduceLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfReduceLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfRegionLayer = core::Ptr<crate::dnn::RegionLayer>;
	
	ptr_extern! { crate::dnn::RegionLayer,
		cv_PtrLcv_dnn_RegionLayerG_delete, cv_PtrLcv_dnn_RegionLayerG_getInnerPtr_const, cv_PtrLcv_dnn_RegionLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::RegionLayer, cv_PtrLcv_dnn_RegionLayerG_new_const_RegionLayer }
	impl core::Ptr<crate::dnn::RegionLayer> {
		#[inline] pub fn as_raw_PtrOfRegionLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfRegionLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::RegionLayerTraitConst for core::Ptr<crate::dnn::RegionLayer> {
		#[inline] fn as_raw_RegionLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::RegionLayerTrait for core::Ptr<crate::dnn::RegionLayer> {
		#[inline] fn as_raw_mut_RegionLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::RegionLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::RegionLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRegionLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_RegionLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::RegionLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::RegionLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRegionLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_RegionLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::RegionLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfRegionLayer")
				.field("nms_threshold", &crate::dnn::RegionLayerTraitConst::nms_threshold(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfReorgLayer = core::Ptr<crate::dnn::ReorgLayer>;
	
	ptr_extern! { crate::dnn::ReorgLayer,
		cv_PtrLcv_dnn_ReorgLayerG_delete, cv_PtrLcv_dnn_ReorgLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ReorgLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ReorgLayer, cv_PtrLcv_dnn_ReorgLayerG_new_const_ReorgLayer }
	impl core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] pub fn as_raw_PtrOfReorgLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfReorgLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ReorgLayerTraitConst for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] fn as_raw_ReorgLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ReorgLayerTrait for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] fn as_raw_mut_ReorgLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReorgLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ReorgLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReorgLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ReorgLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ReorgLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfReorgLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfRequantizeLayer = core::Ptr<crate::dnn::RequantizeLayer>;
	
	ptr_extern! { crate::dnn::RequantizeLayer,
		cv_PtrLcv_dnn_RequantizeLayerG_delete, cv_PtrLcv_dnn_RequantizeLayerG_getInnerPtr_const, cv_PtrLcv_dnn_RequantizeLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::RequantizeLayer, cv_PtrLcv_dnn_RequantizeLayerG_new_const_RequantizeLayer }
	impl core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] pub fn as_raw_PtrOfRequantizeLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfRequantizeLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::RequantizeLayerTraitConst for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] fn as_raw_RequantizeLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::RequantizeLayerTrait for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] fn as_raw_mut_RequantizeLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRequantizeLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_RequantizeLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRequantizeLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_RequantizeLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::RequantizeLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfRequantizeLayer")
				.field("scale", &crate::dnn::RequantizeLayerTraitConst::scale(self))
				.field("shift", &crate::dnn::RequantizeLayerTraitConst::shift(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfReshapeLayer = core::Ptr<crate::dnn::ReshapeLayer>;
	
	ptr_extern! { crate::dnn::ReshapeLayer,
		cv_PtrLcv_dnn_ReshapeLayerG_delete, cv_PtrLcv_dnn_ReshapeLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ReshapeLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ReshapeLayer, cv_PtrLcv_dnn_ReshapeLayerG_new_const_ReshapeLayer }
	impl core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] pub fn as_raw_PtrOfReshapeLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfReshapeLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ReshapeLayerTraitConst for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] fn as_raw_ReshapeLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ReshapeLayerTrait for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] fn as_raw_mut_ReshapeLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReshapeLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ReshapeLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfReshapeLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ReshapeLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ReshapeLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfReshapeLayer")
				.field("new_shape_desc", &crate::dnn::ReshapeLayerTraitConst::new_shape_desc(self))
				.field("new_shape_range", &crate::dnn::ReshapeLayerTraitConst::new_shape_range(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfResizeLayer = core::Ptr<crate::dnn::ResizeLayer>;
	
	ptr_extern! { crate::dnn::ResizeLayer,
		cv_PtrLcv_dnn_ResizeLayerG_delete, cv_PtrLcv_dnn_ResizeLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ResizeLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ResizeLayer, cv_PtrLcv_dnn_ResizeLayerG_new_const_ResizeLayer }
	impl core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] pub fn as_raw_PtrOfResizeLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfResizeLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ResizeLayerTraitConst for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] fn as_raw_ResizeLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ResizeLayerTrait for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] fn as_raw_mut_ResizeLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfResizeLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ResizeLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfResizeLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ResizeLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ResizeLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfResizeLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfRoundLayer = core::Ptr<crate::dnn::RoundLayer>;
	
	ptr_extern! { crate::dnn::RoundLayer,
		cv_PtrLcv_dnn_RoundLayerG_delete, cv_PtrLcv_dnn_RoundLayerG_getInnerPtr_const, cv_PtrLcv_dnn_RoundLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::RoundLayer, cv_PtrLcv_dnn_RoundLayerG_new_const_RoundLayer }
	impl core::Ptr<crate::dnn::RoundLayer> {
		#[inline] pub fn as_raw_PtrOfRoundLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfRoundLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::RoundLayerTraitConst for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_RoundLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::RoundLayerTrait for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_mut_RoundLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRoundLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_RoundLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRoundLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_RoundLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::RoundLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRoundLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_RoundLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::RoundLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfRoundLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfScaleLayer = core::Ptr<crate::dnn::ScaleLayer>;
	
	ptr_extern! { crate::dnn::ScaleLayer,
		cv_PtrLcv_dnn_ScaleLayerG_delete, cv_PtrLcv_dnn_ScaleLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ScaleLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ScaleLayer, cv_PtrLcv_dnn_ScaleLayerG_new_const_ScaleLayer }
	impl core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] pub fn as_raw_PtrOfScaleLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfScaleLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ScaleLayerTraitConst for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] fn as_raw_ScaleLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ScaleLayerTrait for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] fn as_raw_mut_ScaleLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScaleLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ScaleLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScaleLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ScaleLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ScaleLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfScaleLayer")
				.field("has_bias", &crate::dnn::ScaleLayerTraitConst::has_bias(self))
				.field("axis", &crate::dnn::ScaleLayerTraitConst::axis(self))
				.field("mode", &crate::dnn::ScaleLayerTraitConst::mode(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfScaleLayerInt8 = core::Ptr<crate::dnn::ScaleLayerInt8>;
	
	ptr_extern! { crate::dnn::ScaleLayerInt8,
		cv_PtrLcv_dnn_ScaleLayerInt8G_delete, cv_PtrLcv_dnn_ScaleLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_ScaleLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ScaleLayerInt8, cv_PtrLcv_dnn_ScaleLayerInt8G_new_const_ScaleLayerInt8 }
	impl core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] pub fn as_raw_PtrOfScaleLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfScaleLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ScaleLayerInt8TraitConst for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_ScaleLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ScaleLayerInt8Trait for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_mut_ScaleLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScaleLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ScaleLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScaleLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ScaleLayerInt8G_to_PtrOfLayer }
	
	impl crate::dnn::ScaleLayerTraitConst for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_ScaleLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ScaleLayerTrait for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline] fn as_raw_mut_ScaleLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScaleLayerInt8, core::Ptr<crate::dnn::ScaleLayer>, cv_PtrLcv_dnn_ScaleLayerInt8G_to_PtrOfScaleLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ScaleLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfScaleLayerInt8")
				.field("output_sc", &crate::dnn::ScaleLayerInt8TraitConst::output_sc(self))
				.field("output_zp", &crate::dnn::ScaleLayerInt8TraitConst::output_zp(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.field("has_bias", &crate::dnn::ScaleLayerTraitConst::has_bias(self))
				.field("axis", &crate::dnn::ScaleLayerTraitConst::axis(self))
				.field("mode", &crate::dnn::ScaleLayerTraitConst::mode(self))
				.finish()
		}
	}
	
	pub type PtrOfScatterLayer = core::Ptr<crate::dnn::ScatterLayer>;
	
	ptr_extern! { crate::dnn::ScatterLayer,
		cv_PtrLcv_dnn_ScatterLayerG_delete, cv_PtrLcv_dnn_ScatterLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ScatterLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ScatterLayer, cv_PtrLcv_dnn_ScatterLayerG_new_const_ScatterLayer }
	impl core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] pub fn as_raw_PtrOfScatterLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfScatterLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ScatterLayerTraitConst for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] fn as_raw_ScatterLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ScatterLayerTrait for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] fn as_raw_mut_ScatterLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScatterLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ScatterLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScatterLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ScatterLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ScatterLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfScatterLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfScatterNDLayer = core::Ptr<crate::dnn::ScatterNDLayer>;
	
	ptr_extern! { crate::dnn::ScatterNDLayer,
		cv_PtrLcv_dnn_ScatterNDLayerG_delete, cv_PtrLcv_dnn_ScatterNDLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ScatterNDLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ScatterNDLayer, cv_PtrLcv_dnn_ScatterNDLayerG_new_const_ScatterNDLayer }
	impl core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] pub fn as_raw_PtrOfScatterNDLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfScatterNDLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ScatterNDLayerTraitConst for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] fn as_raw_ScatterNDLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ScatterNDLayerTrait for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] fn as_raw_mut_ScatterNDLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScatterNDLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ScatterNDLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfScatterNDLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ScatterNDLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ScatterNDLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfScatterNDLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSeluLayer = core::Ptr<crate::dnn::SeluLayer>;
	
	ptr_extern! { crate::dnn::SeluLayer,
		cv_PtrLcv_dnn_SeluLayerG_delete, cv_PtrLcv_dnn_SeluLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SeluLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SeluLayer, cv_PtrLcv_dnn_SeluLayerG_new_const_SeluLayer }
	impl core::Ptr<crate::dnn::SeluLayer> {
		#[inline] pub fn as_raw_PtrOfSeluLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSeluLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SeluLayerTraitConst for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_SeluLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SeluLayerTrait for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_mut_SeluLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSeluLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SeluLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSeluLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SeluLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SeluLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSeluLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SeluLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SeluLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSeluLayer")
				.field("alpha", &crate::dnn::SeluLayerTraitConst::alpha(self))
				.field("gamma", &crate::dnn::SeluLayerTraitConst::gamma(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfShiftLayer = core::Ptr<crate::dnn::ShiftLayer>;
	
	ptr_extern! { crate::dnn::ShiftLayer,
		cv_PtrLcv_dnn_ShiftLayerG_delete, cv_PtrLcv_dnn_ShiftLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ShiftLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ShiftLayer, cv_PtrLcv_dnn_ShiftLayerG_new_const_ShiftLayer }
	impl core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] pub fn as_raw_PtrOfShiftLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfShiftLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ShiftLayerTraitConst for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] fn as_raw_ShiftLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ShiftLayerTrait for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] fn as_raw_mut_ShiftLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShiftLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ShiftLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShiftLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ShiftLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ShiftLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfShiftLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfShiftLayerInt8 = core::Ptr<crate::dnn::ShiftLayerInt8>;
	
	ptr_extern! { crate::dnn::ShiftLayerInt8,
		cv_PtrLcv_dnn_ShiftLayerInt8G_delete, cv_PtrLcv_dnn_ShiftLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_ShiftLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ShiftLayerInt8, cv_PtrLcv_dnn_ShiftLayerInt8G_new_const_ShiftLayerInt8 }
	impl core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] pub fn as_raw_PtrOfShiftLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfShiftLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ShiftLayerInt8TraitConst for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] fn as_raw_ShiftLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ShiftLayerInt8Trait for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] fn as_raw_mut_ShiftLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShiftLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ShiftLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShiftLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ShiftLayerInt8G_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ShiftLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfShiftLayerInt8")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfShrinkLayer = core::Ptr<crate::dnn::ShrinkLayer>;
	
	ptr_extern! { crate::dnn::ShrinkLayer,
		cv_PtrLcv_dnn_ShrinkLayerG_delete, cv_PtrLcv_dnn_ShrinkLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ShrinkLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ShrinkLayer, cv_PtrLcv_dnn_ShrinkLayerG_new_const_ShrinkLayer }
	impl core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] pub fn as_raw_PtrOfShrinkLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfShrinkLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ShrinkLayerTraitConst for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_ShrinkLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ShrinkLayerTrait for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_mut_ShrinkLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShrinkLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ShrinkLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShrinkLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ShrinkLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShrinkLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ShrinkLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ShrinkLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfShrinkLayer")
				.field("bias", &crate::dnn::ShrinkLayerTraitConst::bias(self))
				.field("lambd", &crate::dnn::ShrinkLayerTraitConst::lambd(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfShuffleChannelLayer = core::Ptr<crate::dnn::ShuffleChannelLayer>;
	
	ptr_extern! { crate::dnn::ShuffleChannelLayer,
		cv_PtrLcv_dnn_ShuffleChannelLayerG_delete, cv_PtrLcv_dnn_ShuffleChannelLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ShuffleChannelLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ShuffleChannelLayer, cv_PtrLcv_dnn_ShuffleChannelLayerG_new_const_ShuffleChannelLayer }
	impl core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] pub fn as_raw_PtrOfShuffleChannelLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfShuffleChannelLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ShuffleChannelLayerTraitConst for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] fn as_raw_ShuffleChannelLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ShuffleChannelLayerTrait for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] fn as_raw_mut_ShuffleChannelLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShuffleChannelLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ShuffleChannelLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfShuffleChannelLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ShuffleChannelLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ShuffleChannelLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfShuffleChannelLayer")
				.field("group", &crate::dnn::ShuffleChannelLayerTraitConst::group(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSigmoidLayer = core::Ptr<crate::dnn::SigmoidLayer>;
	
	ptr_extern! { crate::dnn::SigmoidLayer,
		cv_PtrLcv_dnn_SigmoidLayerG_delete, cv_PtrLcv_dnn_SigmoidLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SigmoidLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SigmoidLayer, cv_PtrLcv_dnn_SigmoidLayerG_new_const_SigmoidLayer }
	impl core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] pub fn as_raw_PtrOfSigmoidLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSigmoidLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SigmoidLayerTraitConst for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_SigmoidLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SigmoidLayerTrait for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_mut_SigmoidLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSigmoidLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SigmoidLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSigmoidLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SigmoidLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSigmoidLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SigmoidLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SigmoidLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSigmoidLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSignLayer = core::Ptr<crate::dnn::SignLayer>;
	
	ptr_extern! { crate::dnn::SignLayer,
		cv_PtrLcv_dnn_SignLayerG_delete, cv_PtrLcv_dnn_SignLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SignLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SignLayer, cv_PtrLcv_dnn_SignLayerG_new_const_SignLayer }
	impl core::Ptr<crate::dnn::SignLayer> {
		#[inline] pub fn as_raw_PtrOfSignLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSignLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SignLayerTraitConst for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_SignLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SignLayerTrait for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_mut_SignLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSignLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SignLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSignLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SignLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SignLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSignLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SignLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SignLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSignLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSinLayer = core::Ptr<crate::dnn::SinLayer>;
	
	ptr_extern! { crate::dnn::SinLayer,
		cv_PtrLcv_dnn_SinLayerG_delete, cv_PtrLcv_dnn_SinLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SinLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SinLayer, cv_PtrLcv_dnn_SinLayerG_new_const_SinLayer }
	impl core::Ptr<crate::dnn::SinLayer> {
		#[inline] pub fn as_raw_PtrOfSinLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSinLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SinLayerTraitConst for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_SinLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SinLayerTrait for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_mut_SinLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSinLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SinLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSinLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SinLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SinLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSinLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SinLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SinLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSinLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSinhLayer = core::Ptr<crate::dnn::SinhLayer>;
	
	ptr_extern! { crate::dnn::SinhLayer,
		cv_PtrLcv_dnn_SinhLayerG_delete, cv_PtrLcv_dnn_SinhLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SinhLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SinhLayer, cv_PtrLcv_dnn_SinhLayerG_new_const_SinhLayer }
	impl core::Ptr<crate::dnn::SinhLayer> {
		#[inline] pub fn as_raw_PtrOfSinhLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSinhLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SinhLayerTraitConst for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_SinhLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SinhLayerTrait for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_mut_SinhLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSinhLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SinhLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSinhLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SinhLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SinhLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSinhLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SinhLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SinhLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSinhLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSliceLayer = core::Ptr<crate::dnn::SliceLayer>;
	
	ptr_extern! { crate::dnn::SliceLayer,
		cv_PtrLcv_dnn_SliceLayerG_delete, cv_PtrLcv_dnn_SliceLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SliceLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SliceLayer, cv_PtrLcv_dnn_SliceLayerG_new_const_SliceLayer }
	impl core::Ptr<crate::dnn::SliceLayer> {
		#[inline] pub fn as_raw_PtrOfSliceLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSliceLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SliceLayerTraitConst for core::Ptr<crate::dnn::SliceLayer> {
		#[inline] fn as_raw_SliceLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SliceLayerTrait for core::Ptr<crate::dnn::SliceLayer> {
		#[inline] fn as_raw_mut_SliceLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SliceLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SliceLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSliceLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SliceLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SliceLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SliceLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSliceLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SliceLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SliceLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSliceLayer")
				.field("slice_ranges", &crate::dnn::SliceLayerTraitConst::slice_ranges(self))
				.field("slice_steps", &crate::dnn::SliceLayerTraitConst::slice_steps(self))
				.field("axis", &crate::dnn::SliceLayerTraitConst::axis(self))
				.field("num_split", &crate::dnn::SliceLayerTraitConst::num_split(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSoftmaxLayer = core::Ptr<crate::dnn::SoftmaxLayer>;
	
	ptr_extern! { crate::dnn::SoftmaxLayer,
		cv_PtrLcv_dnn_SoftmaxLayerG_delete, cv_PtrLcv_dnn_SoftmaxLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SoftmaxLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SoftmaxLayer, cv_PtrLcv_dnn_SoftmaxLayerG_new_const_SoftmaxLayer }
	impl core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] pub fn as_raw_PtrOfSoftmaxLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSoftmaxLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SoftmaxLayerTraitConst for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] fn as_raw_SoftmaxLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SoftmaxLayerTrait for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] fn as_raw_mut_SoftmaxLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftmaxLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SoftmaxLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftmaxLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SoftmaxLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SoftmaxLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSoftmaxLayer")
				.field("log_soft_max", &crate::dnn::SoftmaxLayerTraitConst::log_soft_max(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSoftmaxLayerInt8 = core::Ptr<crate::dnn::SoftmaxLayerInt8>;
	
	ptr_extern! { crate::dnn::SoftmaxLayerInt8,
		cv_PtrLcv_dnn_SoftmaxLayerInt8G_delete, cv_PtrLcv_dnn_SoftmaxLayerInt8G_getInnerPtr_const, cv_PtrLcv_dnn_SoftmaxLayerInt8G_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SoftmaxLayerInt8, cv_PtrLcv_dnn_SoftmaxLayerInt8G_new_const_SoftmaxLayerInt8 }
	impl core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] pub fn as_raw_PtrOfSoftmaxLayerInt8(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSoftmaxLayerInt8(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SoftmaxLayerInt8TraitConst for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_SoftmaxLayerInt8(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SoftmaxLayerInt8Trait for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_mut_SoftmaxLayerInt8(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftmaxLayerInt8, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SoftmaxLayerInt8G_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftmaxLayerInt8, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SoftmaxLayerInt8G_to_PtrOfLayer }
	
	impl crate::dnn::SoftmaxLayerTraitConst for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_SoftmaxLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SoftmaxLayerTrait for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline] fn as_raw_mut_SoftmaxLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftmaxLayerInt8, core::Ptr<crate::dnn::SoftmaxLayer>, cv_PtrLcv_dnn_SoftmaxLayerInt8G_to_PtrOfSoftmaxLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SoftmaxLayerInt8> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSoftmaxLayerInt8")
				.field("output_sc", &crate::dnn::SoftmaxLayerInt8TraitConst::output_sc(self))
				.field("output_zp", &crate::dnn::SoftmaxLayerInt8TraitConst::output_zp(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.field("log_soft_max", &crate::dnn::SoftmaxLayerTraitConst::log_soft_max(self))
				.finish()
		}
	}
	
	pub type PtrOfSoftplusLayer = core::Ptr<crate::dnn::SoftplusLayer>;
	
	ptr_extern! { crate::dnn::SoftplusLayer,
		cv_PtrLcv_dnn_SoftplusLayerG_delete, cv_PtrLcv_dnn_SoftplusLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SoftplusLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SoftplusLayer, cv_PtrLcv_dnn_SoftplusLayerG_new_const_SoftplusLayer }
	impl core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] pub fn as_raw_PtrOfSoftplusLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSoftplusLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SoftplusLayerTraitConst for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_SoftplusLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SoftplusLayerTrait for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_mut_SoftplusLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftplusLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SoftplusLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftplusLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SoftplusLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftplusLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SoftplusLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SoftplusLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSoftplusLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSoftsignLayer = core::Ptr<crate::dnn::SoftsignLayer>;
	
	ptr_extern! { crate::dnn::SoftsignLayer,
		cv_PtrLcv_dnn_SoftsignLayerG_delete, cv_PtrLcv_dnn_SoftsignLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SoftsignLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SoftsignLayer, cv_PtrLcv_dnn_SoftsignLayerG_new_const_SoftsignLayer }
	impl core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] pub fn as_raw_PtrOfSoftsignLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSoftsignLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SoftsignLayerTraitConst for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_SoftsignLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SoftsignLayerTrait for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_mut_SoftsignLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftsignLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SoftsignLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftsignLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SoftsignLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSoftsignLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SoftsignLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SoftsignLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSoftsignLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSpaceToDepthLayer = core::Ptr<crate::dnn::SpaceToDepthLayer>;
	
	ptr_extern! { crate::dnn::SpaceToDepthLayer,
		cv_PtrLcv_dnn_SpaceToDepthLayerG_delete, cv_PtrLcv_dnn_SpaceToDepthLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SpaceToDepthLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SpaceToDepthLayer, cv_PtrLcv_dnn_SpaceToDepthLayerG_new_const_SpaceToDepthLayer }
	impl core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] pub fn as_raw_PtrOfSpaceToDepthLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSpaceToDepthLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SpaceToDepthLayerTraitConst for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] fn as_raw_SpaceToDepthLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SpaceToDepthLayerTrait for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] fn as_raw_mut_SpaceToDepthLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSpaceToDepthLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SpaceToDepthLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSpaceToDepthLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SpaceToDepthLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SpaceToDepthLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSpaceToDepthLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSplitLayer = core::Ptr<crate::dnn::SplitLayer>;
	
	ptr_extern! { crate::dnn::SplitLayer,
		cv_PtrLcv_dnn_SplitLayerG_delete, cv_PtrLcv_dnn_SplitLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SplitLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SplitLayer, cv_PtrLcv_dnn_SplitLayerG_new_const_SplitLayer }
	impl core::Ptr<crate::dnn::SplitLayer> {
		#[inline] pub fn as_raw_PtrOfSplitLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSplitLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SplitLayerTraitConst for core::Ptr<crate::dnn::SplitLayer> {
		#[inline] fn as_raw_SplitLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SplitLayerTrait for core::Ptr<crate::dnn::SplitLayer> {
		#[inline] fn as_raw_mut_SplitLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SplitLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SplitLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSplitLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SplitLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SplitLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SplitLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSplitLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SplitLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SplitLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSplitLayer")
				.field("outputs_count", &crate::dnn::SplitLayerTraitConst::outputs_count(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSqrtLayer = core::Ptr<crate::dnn::SqrtLayer>;
	
	ptr_extern! { crate::dnn::SqrtLayer,
		cv_PtrLcv_dnn_SqrtLayerG_delete, cv_PtrLcv_dnn_SqrtLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SqrtLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SqrtLayer, cv_PtrLcv_dnn_SqrtLayerG_new_const_SqrtLayer }
	impl core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] pub fn as_raw_PtrOfSqrtLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSqrtLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SqrtLayerTraitConst for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_SqrtLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SqrtLayerTrait for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_mut_SqrtLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSqrtLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SqrtLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSqrtLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SqrtLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSqrtLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SqrtLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SqrtLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSqrtLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfSwishLayer = core::Ptr<crate::dnn::SwishLayer>;
	
	ptr_extern! { crate::dnn::SwishLayer,
		cv_PtrLcv_dnn_SwishLayerG_delete, cv_PtrLcv_dnn_SwishLayerG_getInnerPtr_const, cv_PtrLcv_dnn_SwishLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::SwishLayer, cv_PtrLcv_dnn_SwishLayerG_new_const_SwishLayer }
	impl core::Ptr<crate::dnn::SwishLayer> {
		#[inline] pub fn as_raw_PtrOfSwishLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSwishLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::SwishLayerTraitConst for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_SwishLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::SwishLayerTrait for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_mut_SwishLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSwishLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_SwishLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSwishLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_SwishLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::SwishLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSwishLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_SwishLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::SwishLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSwishLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfTanHLayer = core::Ptr<crate::dnn::TanHLayer>;
	
	ptr_extern! { crate::dnn::TanHLayer,
		cv_PtrLcv_dnn_TanHLayerG_delete, cv_PtrLcv_dnn_TanHLayerG_getInnerPtr_const, cv_PtrLcv_dnn_TanHLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::TanHLayer, cv_PtrLcv_dnn_TanHLayerG_new_const_TanHLayer }
	impl core::Ptr<crate::dnn::TanHLayer> {
		#[inline] pub fn as_raw_PtrOfTanHLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTanHLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::TanHLayerTraitConst for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_TanHLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::TanHLayerTrait for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_mut_TanHLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTanHLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_TanHLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTanHLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_TanHLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::TanHLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTanHLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_TanHLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::TanHLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTanHLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfTanLayer = core::Ptr<crate::dnn::TanLayer>;
	
	ptr_extern! { crate::dnn::TanLayer,
		cv_PtrLcv_dnn_TanLayerG_delete, cv_PtrLcv_dnn_TanLayerG_getInnerPtr_const, cv_PtrLcv_dnn_TanLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::TanLayer, cv_PtrLcv_dnn_TanLayerG_new_const_TanLayer }
	impl core::Ptr<crate::dnn::TanLayer> {
		#[inline] pub fn as_raw_PtrOfTanLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTanLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::TanLayerTraitConst for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_TanLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::TanLayerTrait for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_mut_TanLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTanLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_TanLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTanLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_TanLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::TanLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTanLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_TanLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::TanLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTanLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfThresholdedReluLayer = core::Ptr<crate::dnn::ThresholdedReluLayer>;
	
	ptr_extern! { crate::dnn::ThresholdedReluLayer,
		cv_PtrLcv_dnn_ThresholdedReluLayerG_delete, cv_PtrLcv_dnn_ThresholdedReluLayerG_getInnerPtr_const, cv_PtrLcv_dnn_ThresholdedReluLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::ThresholdedReluLayer, cv_PtrLcv_dnn_ThresholdedReluLayerG_new_const_ThresholdedReluLayer }
	impl core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] pub fn as_raw_PtrOfThresholdedReluLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfThresholdedReluLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::ThresholdedReluLayerTraitConst for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_ThresholdedReluLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ThresholdedReluLayerTrait for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_mut_ThresholdedReluLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfThresholdedReluLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_ThresholdedReluLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::ActivationLayerTraitConst for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_ActivationLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::ActivationLayerTrait for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_mut_ActivationLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfThresholdedReluLayer, core::Ptr<crate::dnn::ActivationLayer>, cv_PtrLcv_dnn_ThresholdedReluLayerG_to_PtrOfActivationLayer }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfThresholdedReluLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_ThresholdedReluLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::ThresholdedReluLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfThresholdedReluLayer")
				.field("alpha", &crate::dnn::ThresholdedReluLayerTraitConst::alpha(self))
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfTileLayer = core::Ptr<crate::dnn::TileLayer>;
	
	ptr_extern! { crate::dnn::TileLayer,
		cv_PtrLcv_dnn_TileLayerG_delete, cv_PtrLcv_dnn_TileLayerG_getInnerPtr_const, cv_PtrLcv_dnn_TileLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::TileLayer, cv_PtrLcv_dnn_TileLayerG_new_const_TileLayer }
	impl core::Ptr<crate::dnn::TileLayer> {
		#[inline] pub fn as_raw_PtrOfTileLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTileLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::TileLayerTraitConst for core::Ptr<crate::dnn::TileLayer> {
		#[inline] fn as_raw_TileLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::TileLayerTrait for core::Ptr<crate::dnn::TileLayer> {
		#[inline] fn as_raw_mut_TileLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::TileLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::TileLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTileLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_TileLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::TileLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::TileLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTileLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_TileLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::TileLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTileLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type PtrOfTopKLayer = core::Ptr<crate::dnn::TopKLayer>;
	
	ptr_extern! { crate::dnn::TopKLayer,
		cv_PtrLcv_dnn_TopKLayerG_delete, cv_PtrLcv_dnn_TopKLayerG_getInnerPtr_const, cv_PtrLcv_dnn_TopKLayerG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::dnn::TopKLayer, cv_PtrLcv_dnn_TopKLayerG_new_const_TopKLayer }
	impl core::Ptr<crate::dnn::TopKLayer> {
		#[inline] pub fn as_raw_PtrOfTopKLayer(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTopKLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::dnn::TopKLayerTraitConst for core::Ptr<crate::dnn::TopKLayer> {
		#[inline] fn as_raw_TopKLayer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::TopKLayerTrait for core::Ptr<crate::dnn::TopKLayer> {
		#[inline] fn as_raw_mut_TopKLayer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::dnn::TopKLayer> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::dnn::TopKLayer> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTopKLayer, core::Ptr<core::Algorithm>, cv_PtrLcv_dnn_TopKLayerG_to_PtrOfAlgorithm }
	
	impl crate::dnn::LayerTraitConst for core::Ptr<crate::dnn::TopKLayer> {
		#[inline] fn as_raw_Layer(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::dnn::LayerTrait for core::Ptr<crate::dnn::TopKLayer> {
		#[inline] fn as_raw_mut_Layer(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTopKLayer, core::Ptr<crate::dnn::Layer>, cv_PtrLcv_dnn_TopKLayerG_to_PtrOfLayer }
	
	impl std::fmt::Debug for core::Ptr<crate::dnn::TopKLayer> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTopKLayer")
				.field("blobs", &crate::dnn::LayerTraitConst::blobs(self))
				.field("name", &crate::dnn::LayerTraitConst::name(self))
				.field("typ", &crate::dnn::LayerTraitConst::typ(self))
				.field("preferable_target", &crate::dnn::LayerTraitConst::preferable_target(self))
				.finish()
		}
	}
	
	pub type TupleOfBackend_Target = core::Tuple<(crate::dnn::Backend, crate::dnn::Target)>;
	
	impl core::Tuple<(crate::dnn::Backend, crate::dnn::Target)> {
		pub fn as_raw_TupleOfBackend_Target(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfBackend_Target(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (crate::dnn::Backend, crate::dnn::Target),
		std_pairLcv_dnn_Backend__cv_dnn_TargetG_new_const_Backend_Target, std_pairLcv_dnn_Backend__cv_dnn_TargetG_delete,
		0 = arg: crate::dnn::Backend, get_0 via std_pairLcv_dnn_Backend__cv_dnn_TargetG_get_0_const,
		1 = arg_1: crate::dnn::Target, get_1 via std_pairLcv_dnn_Backend__cv_dnn_TargetG_get_1_const
	}
	
	pub type VectorOfMatShape = core::Vector<crate::dnn::MatShape>;
	
	impl core::Vector<crate::dnn::MatShape> {
		pub fn as_raw_VectorOfMatShape(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfMatShape(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	pub type VectorOfPtrOfBackendNode = core::Vector<core::Ptr<crate::dnn::BackendNode>>;
	
	impl core::Vector<core::Ptr<crate::dnn::BackendNode>> {
		pub fn as_raw_VectorOfPtrOfBackendNode(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPtrOfBackendNode(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Ptr<crate::dnn::BackendNode>,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_new_const, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_delete,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_len_const, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_isEmpty_const,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_capacity_const, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_shrinkToFit,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_reserve_size_t, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_remove_size_t,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_swap_size_t_size_t, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_clear,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_get_const_size_t, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_set_size_t_const_PtrLBackendNodeG,
		std_vectorLcv_PtrLcv_dnn_BackendNodeGG_push_const_PtrLBackendNodeG, std_vectorLcv_PtrLcv_dnn_BackendNodeGG_insert_size_t_const_PtrLBackendNodeG,
	}
	
	vector_non_copy_or_bool! { core::Ptr<crate::dnn::BackendNode> }
	
	
	pub type VectorOfPtrOfBackendWrapper = core::Vector<core::Ptr<crate::dnn::BackendWrapper>>;
	
	impl core::Vector<core::Ptr<crate::dnn::BackendWrapper>> {
		pub fn as_raw_VectorOfPtrOfBackendWrapper(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPtrOfBackendWrapper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Ptr<crate::dnn::BackendWrapper>,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_new_const, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_delete,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_len_const, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_isEmpty_const,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_capacity_const, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_shrinkToFit,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_reserve_size_t, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_remove_size_t,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_swap_size_t_size_t, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_clear,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_get_const_size_t, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_set_size_t_const_PtrLBackendWrapperG,
		std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_push_const_PtrLBackendWrapperG, std_vectorLcv_PtrLcv_dnn_BackendWrapperGG_insert_size_t_const_PtrLBackendWrapperG,
	}
	
	vector_non_copy_or_bool! { core::Ptr<crate::dnn::BackendWrapper> }
	
	
	pub type VectorOfPtrOfLayer = core::Vector<core::Ptr<crate::dnn::Layer>>;
	
	impl core::Vector<core::Ptr<crate::dnn::Layer>> {
		pub fn as_raw_VectorOfPtrOfLayer(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfPtrOfLayer(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Ptr<crate::dnn::Layer>,
		std_vectorLcv_PtrLcv_dnn_LayerGG_new_const, std_vectorLcv_PtrLcv_dnn_LayerGG_delete,
		std_vectorLcv_PtrLcv_dnn_LayerGG_len_const, std_vectorLcv_PtrLcv_dnn_LayerGG_isEmpty_const,
		std_vectorLcv_PtrLcv_dnn_LayerGG_capacity_const, std_vectorLcv_PtrLcv_dnn_LayerGG_shrinkToFit,
		std_vectorLcv_PtrLcv_dnn_LayerGG_reserve_size_t, std_vectorLcv_PtrLcv_dnn_LayerGG_remove_size_t,
		std_vectorLcv_PtrLcv_dnn_LayerGG_swap_size_t_size_t, std_vectorLcv_PtrLcv_dnn_LayerGG_clear,
		std_vectorLcv_PtrLcv_dnn_LayerGG_get_const_size_t, std_vectorLcv_PtrLcv_dnn_LayerGG_set_size_t_const_PtrLLayerG,
		std_vectorLcv_PtrLcv_dnn_LayerGG_push_const_PtrLLayerG, std_vectorLcv_PtrLcv_dnn_LayerGG_insert_size_t_const_PtrLLayerG,
	}
	
	vector_non_copy_or_bool! { core::Ptr<crate::dnn::Layer> }
	
	
	pub type VectorOfTarget = core::Vector<crate::dnn::Target>;
	
	impl core::Vector<crate::dnn::Target> {
		pub fn as_raw_VectorOfTarget(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfTarget(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::dnn::Target,
		std_vectorLcv_dnn_TargetG_new_const, std_vectorLcv_dnn_TargetG_delete,
		std_vectorLcv_dnn_TargetG_len_const, std_vectorLcv_dnn_TargetG_isEmpty_const,
		std_vectorLcv_dnn_TargetG_capacity_const, std_vectorLcv_dnn_TargetG_shrinkToFit,
		std_vectorLcv_dnn_TargetG_reserve_size_t, std_vectorLcv_dnn_TargetG_remove_size_t,
		std_vectorLcv_dnn_TargetG_swap_size_t_size_t, std_vectorLcv_dnn_TargetG_clear,
		std_vectorLcv_dnn_TargetG_get_const_size_t, std_vectorLcv_dnn_TargetG_set_size_t_const_Target,
		std_vectorLcv_dnn_TargetG_push_const_Target, std_vectorLcv_dnn_TargetG_insert_size_t_const_Target,
	}
	
	vector_copy_non_bool! { crate::dnn::Target,
		std_vectorLcv_dnn_TargetG_data_const, std_vectorLcv_dnn_TargetG_dataMut, cv_fromSlice_const_const_TargetX_size_t,
		std_vectorLcv_dnn_TargetG_clone_const,
	}
	
	
	pub type VectorOfTupleOfBackend_Target = core::Vector<core::Tuple<(crate::dnn::Backend, crate::dnn::Target)>>;
	
	impl core::Vector<core::Tuple<(crate::dnn::Backend, crate::dnn::Target)>> {
		pub fn as_raw_VectorOfTupleOfBackend_Target(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfTupleOfBackend_Target(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Tuple<(crate::dnn::Backend, crate::dnn::Target)>,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_new_const, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_delete,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_len_const, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_isEmpty_const,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_capacity_const, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_shrinkToFit,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_reserve_size_t, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_remove_size_t,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_swap_size_t_size_t, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_clear,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_get_const_size_t, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_set_size_t_const_pairLcv_dnn_Backend__cv_dnn_TargetG,
		std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_push_const_pairLcv_dnn_Backend__cv_dnn_TargetG, std_vectorLstd_pairLcv_dnn_Backend__cv_dnn_TargetGG_insert_size_t_const_pairLcv_dnn_Backend__cv_dnn_TargetG,
	}
	
	vector_non_copy_or_bool! { core::Tuple<(crate::dnn::Backend, crate::dnn::Target)> }
	
	
	pub type VectorOfVectorOfMatShape = core::Vector<core::Vector<crate::dnn::MatShape>>;
	
	impl core::Vector<core::Vector<crate::dnn::MatShape>> {
		pub fn as_raw_VectorOfVectorOfMatShape(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVectorOfMatShape(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { core::Vector<crate::dnn::MatShape>,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_new_const, std_vectorLstd_vectorLcv_dnn_MatShapeGG_delete,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_len_const, std_vectorLstd_vectorLcv_dnn_MatShapeGG_isEmpty_const,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_capacity_const, std_vectorLstd_vectorLcv_dnn_MatShapeGG_shrinkToFit,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_reserve_size_t, std_vectorLstd_vectorLcv_dnn_MatShapeGG_remove_size_t,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_swap_size_t_size_t, std_vectorLstd_vectorLcv_dnn_MatShapeGG_clear,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_get_const_size_t, std_vectorLstd_vectorLcv_dnn_MatShapeGG_set_size_t_const_vectorLMatShapeG,
		std_vectorLstd_vectorLcv_dnn_MatShapeGG_push_const_vectorLMatShapeG, std_vectorLstd_vectorLcv_dnn_MatShapeGG_insert_size_t_const_vectorLMatShapeG,
	}
	
	vector_non_copy_or_bool! { core::Vector<crate::dnn::MatShape> }
	
	
}
#[cfg(ocvrs_has_module_dnn)]
pub use dnn_types::*;

#[cfg(ocvrs_has_module_features2d)]
mod features2d_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfAKAZE = core::Ptr<crate::features2d::AKAZE>;
	
	ptr_extern! { crate::features2d::AKAZE,
		cv_PtrLcv_AKAZEG_delete, cv_PtrLcv_AKAZEG_getInnerPtr_const, cv_PtrLcv_AKAZEG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::AKAZE> {
		#[inline] pub fn as_raw_PtrOfAKAZE(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAKAZE(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::AKAZETraitConst for core::Ptr<crate::features2d::AKAZE> {
		#[inline] fn as_raw_AKAZE(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::AKAZETrait for core::Ptr<crate::features2d::AKAZE> {
		#[inline] fn as_raw_mut_AKAZE(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::AKAZE> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::AKAZE> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAKAZE, core::Ptr<core::Algorithm>, cv_PtrLcv_AKAZEG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::AKAZE> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::AKAZE> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAKAZE, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_AKAZEG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::AKAZE> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAKAZE")
				.finish()
		}
	}
	
	pub type PtrOfAffineFeature = core::Ptr<crate::features2d::AffineFeature>;
	
	ptr_extern! { crate::features2d::AffineFeature,
		cv_PtrLcv_AffineFeatureG_delete, cv_PtrLcv_AffineFeatureG_getInnerPtr_const, cv_PtrLcv_AffineFeatureG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::AffineFeature> {
		#[inline] pub fn as_raw_PtrOfAffineFeature(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAffineFeature(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::AffineFeatureTraitConst for core::Ptr<crate::features2d::AffineFeature> {
		#[inline] fn as_raw_AffineFeature(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::AffineFeatureTrait for core::Ptr<crate::features2d::AffineFeature> {
		#[inline] fn as_raw_mut_AffineFeature(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::AffineFeature> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::AffineFeature> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAffineFeature, core::Ptr<core::Algorithm>, cv_PtrLcv_AffineFeatureG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::AffineFeature> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::AffineFeature> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAffineFeature, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_AffineFeatureG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::AffineFeature> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAffineFeature")
				.finish()
		}
	}
	
	pub type PtrOfAgastFeatureDetector = core::Ptr<crate::features2d::AgastFeatureDetector>;
	
	ptr_extern! { crate::features2d::AgastFeatureDetector,
		cv_PtrLcv_AgastFeatureDetectorG_delete, cv_PtrLcv_AgastFeatureDetectorG_getInnerPtr_const, cv_PtrLcv_AgastFeatureDetectorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] pub fn as_raw_PtrOfAgastFeatureDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAgastFeatureDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::AgastFeatureDetectorTraitConst for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] fn as_raw_AgastFeatureDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::AgastFeatureDetectorTrait for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] fn as_raw_mut_AgastFeatureDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAgastFeatureDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_AgastFeatureDetectorG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAgastFeatureDetector, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_AgastFeatureDetectorG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::AgastFeatureDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAgastFeatureDetector")
				.finish()
		}
	}
	
	pub type PtrOfBFMatcher = core::Ptr<crate::features2d::BFMatcher>;
	
	ptr_extern! { crate::features2d::BFMatcher,
		cv_PtrLcv_BFMatcherG_delete, cv_PtrLcv_BFMatcherG_getInnerPtr_const, cv_PtrLcv_BFMatcherG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::features2d::BFMatcher, cv_PtrLcv_BFMatcherG_new_const_BFMatcher }
	impl core::Ptr<crate::features2d::BFMatcher> {
		#[inline] pub fn as_raw_PtrOfBFMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBFMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::BFMatcherTraitConst for core::Ptr<crate::features2d::BFMatcher> {
		#[inline] fn as_raw_BFMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::BFMatcherTrait for core::Ptr<crate::features2d::BFMatcher> {
		#[inline] fn as_raw_mut_BFMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::BFMatcher> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::BFMatcher> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBFMatcher, core::Ptr<core::Algorithm>, cv_PtrLcv_BFMatcherG_to_PtrOfAlgorithm }
	
	impl crate::features2d::DescriptorMatcherTraitConst for core::Ptr<crate::features2d::BFMatcher> {
		#[inline] fn as_raw_DescriptorMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::DescriptorMatcherTrait for core::Ptr<crate::features2d::BFMatcher> {
		#[inline] fn as_raw_mut_DescriptorMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBFMatcher, core::Ptr<crate::features2d::DescriptorMatcher>, cv_PtrLcv_BFMatcherG_to_PtrOfDescriptorMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::BFMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBFMatcher")
				.finish()
		}
	}
	
	pub type PtrOfBRISK = core::Ptr<crate::features2d::BRISK>;
	
	ptr_extern! { crate::features2d::BRISK,
		cv_PtrLcv_BRISKG_delete, cv_PtrLcv_BRISKG_getInnerPtr_const, cv_PtrLcv_BRISKG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::BRISK> {
		#[inline] pub fn as_raw_PtrOfBRISK(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBRISK(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::BRISKTraitConst for core::Ptr<crate::features2d::BRISK> {
		#[inline] fn as_raw_BRISK(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::BRISKTrait for core::Ptr<crate::features2d::BRISK> {
		#[inline] fn as_raw_mut_BRISK(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::BRISK> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::BRISK> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBRISK, core::Ptr<core::Algorithm>, cv_PtrLcv_BRISKG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::BRISK> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::BRISK> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBRISK, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_BRISKG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::BRISK> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBRISK")
				.finish()
		}
	}
	
	pub type PtrOfDescriptorMatcher = core::Ptr<crate::features2d::DescriptorMatcher>;
	
	ptr_extern! { crate::features2d::DescriptorMatcher,
		cv_PtrLcv_DescriptorMatcherG_delete, cv_PtrLcv_DescriptorMatcherG_getInnerPtr_const, cv_PtrLcv_DescriptorMatcherG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::DescriptorMatcher> {
		#[inline] pub fn as_raw_PtrOfDescriptorMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDescriptorMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::DescriptorMatcherTraitConst for core::Ptr<crate::features2d::DescriptorMatcher> {
		#[inline] fn as_raw_DescriptorMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::DescriptorMatcherTrait for core::Ptr<crate::features2d::DescriptorMatcher> {
		#[inline] fn as_raw_mut_DescriptorMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::DescriptorMatcher> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::DescriptorMatcher> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDescriptorMatcher, core::Ptr<core::Algorithm>, cv_PtrLcv_DescriptorMatcherG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::DescriptorMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDescriptorMatcher")
				.finish()
		}
	}
	
	pub type PtrOfFastFeatureDetector = core::Ptr<crate::features2d::FastFeatureDetector>;
	
	ptr_extern! { crate::features2d::FastFeatureDetector,
		cv_PtrLcv_FastFeatureDetectorG_delete, cv_PtrLcv_FastFeatureDetectorG_getInnerPtr_const, cv_PtrLcv_FastFeatureDetectorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] pub fn as_raw_PtrOfFastFeatureDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFastFeatureDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::FastFeatureDetectorTraitConst for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] fn as_raw_FastFeatureDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::FastFeatureDetectorTrait for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] fn as_raw_mut_FastFeatureDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFastFeatureDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_FastFeatureDetectorG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFastFeatureDetector, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_FastFeatureDetectorG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::FastFeatureDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFastFeatureDetector")
				.finish()
		}
	}
	
	pub type PtrOfFeature2D = core::Ptr<crate::features2d::Feature2D>;
	
	ptr_extern! { crate::features2d::Feature2D,
		cv_PtrLcv_Feature2DG_delete, cv_PtrLcv_Feature2DG_getInnerPtr_const, cv_PtrLcv_Feature2DG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::features2d::Feature2D, cv_PtrLcv_Feature2DG_new_const_Feature2D }
	impl core::Ptr<crate::features2d::Feature2D> {
		#[inline] pub fn as_raw_PtrOfFeature2D(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFeature2D(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::Feature2D> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::Feature2D> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::Feature2D> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::Feature2D> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFeature2D, core::Ptr<core::Algorithm>, cv_PtrLcv_Feature2DG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::Feature2D> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFeature2D")
				.finish()
		}
	}
	
	pub type PtrOfFlannBasedMatcher = core::Ptr<crate::features2d::FlannBasedMatcher>;
	
	ptr_extern! { crate::features2d::FlannBasedMatcher,
		cv_PtrLcv_FlannBasedMatcherG_delete, cv_PtrLcv_FlannBasedMatcherG_getInnerPtr_const, cv_PtrLcv_FlannBasedMatcherG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::features2d::FlannBasedMatcher, cv_PtrLcv_FlannBasedMatcherG_new_const_FlannBasedMatcher }
	impl core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] pub fn as_raw_PtrOfFlannBasedMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFlannBasedMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::FlannBasedMatcherTraitConst for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] fn as_raw_FlannBasedMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::FlannBasedMatcherTrait for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] fn as_raw_mut_FlannBasedMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFlannBasedMatcher, core::Ptr<core::Algorithm>, cv_PtrLcv_FlannBasedMatcherG_to_PtrOfAlgorithm }
	
	impl crate::features2d::DescriptorMatcherTraitConst for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] fn as_raw_DescriptorMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::DescriptorMatcherTrait for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline] fn as_raw_mut_DescriptorMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFlannBasedMatcher, core::Ptr<crate::features2d::DescriptorMatcher>, cv_PtrLcv_FlannBasedMatcherG_to_PtrOfDescriptorMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::FlannBasedMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFlannBasedMatcher")
				.finish()
		}
	}
	
	pub type PtrOfGFTTDetector = core::Ptr<crate::features2d::GFTTDetector>;
	
	ptr_extern! { crate::features2d::GFTTDetector,
		cv_PtrLcv_GFTTDetectorG_delete, cv_PtrLcv_GFTTDetectorG_getInnerPtr_const, cv_PtrLcv_GFTTDetectorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] pub fn as_raw_PtrOfGFTTDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGFTTDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::GFTTDetectorTraitConst for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] fn as_raw_GFTTDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::GFTTDetectorTrait for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] fn as_raw_mut_GFTTDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGFTTDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_GFTTDetectorG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGFTTDetector, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_GFTTDetectorG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::GFTTDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGFTTDetector")
				.finish()
		}
	}
	
	pub type PtrOfKAZE = core::Ptr<crate::features2d::KAZE>;
	
	ptr_extern! { crate::features2d::KAZE,
		cv_PtrLcv_KAZEG_delete, cv_PtrLcv_KAZEG_getInnerPtr_const, cv_PtrLcv_KAZEG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::KAZE> {
		#[inline] pub fn as_raw_PtrOfKAZE(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfKAZE(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::KAZETraitConst for core::Ptr<crate::features2d::KAZE> {
		#[inline] fn as_raw_KAZE(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::KAZETrait for core::Ptr<crate::features2d::KAZE> {
		#[inline] fn as_raw_mut_KAZE(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::KAZE> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::KAZE> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfKAZE, core::Ptr<core::Algorithm>, cv_PtrLcv_KAZEG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::KAZE> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::KAZE> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfKAZE, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_KAZEG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::KAZE> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfKAZE")
				.finish()
		}
	}
	
	pub type PtrOfMSER = core::Ptr<crate::features2d::MSER>;
	
	ptr_extern! { crate::features2d::MSER,
		cv_PtrLcv_MSERG_delete, cv_PtrLcv_MSERG_getInnerPtr_const, cv_PtrLcv_MSERG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::MSER> {
		#[inline] pub fn as_raw_PtrOfMSER(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMSER(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::MSERTraitConst for core::Ptr<crate::features2d::MSER> {
		#[inline] fn as_raw_MSER(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::MSERTrait for core::Ptr<crate::features2d::MSER> {
		#[inline] fn as_raw_mut_MSER(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::MSER> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::MSER> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMSER, core::Ptr<core::Algorithm>, cv_PtrLcv_MSERG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::MSER> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::MSER> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMSER, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_MSERG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::MSER> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMSER")
				.finish()
		}
	}
	
	pub type PtrOfORB = core::Ptr<crate::features2d::ORB>;
	
	ptr_extern! { crate::features2d::ORB,
		cv_PtrLcv_ORBG_delete, cv_PtrLcv_ORBG_getInnerPtr_const, cv_PtrLcv_ORBG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::ORB> {
		#[inline] pub fn as_raw_PtrOfORB(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfORB(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::ORBTraitConst for core::Ptr<crate::features2d::ORB> {
		#[inline] fn as_raw_ORB(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::ORBTrait for core::Ptr<crate::features2d::ORB> {
		#[inline] fn as_raw_mut_ORB(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::ORB> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::ORB> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfORB, core::Ptr<core::Algorithm>, cv_PtrLcv_ORBG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::ORB> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::ORB> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfORB, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_ORBG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::ORB> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfORB")
				.finish()
		}
	}
	
	pub type PtrOfSIFT = core::Ptr<crate::features2d::SIFT>;
	
	ptr_extern! { crate::features2d::SIFT,
		cv_PtrLcv_SIFTG_delete, cv_PtrLcv_SIFTG_getInnerPtr_const, cv_PtrLcv_SIFTG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::SIFT> {
		#[inline] pub fn as_raw_PtrOfSIFT(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSIFT(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::SIFTTraitConst for core::Ptr<crate::features2d::SIFT> {
		#[inline] fn as_raw_SIFT(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::SIFTTrait for core::Ptr<crate::features2d::SIFT> {
		#[inline] fn as_raw_mut_SIFT(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::SIFT> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::SIFT> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSIFT, core::Ptr<core::Algorithm>, cv_PtrLcv_SIFTG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::SIFT> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::SIFT> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSIFT, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_SIFTG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::SIFT> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSIFT")
				.finish()
		}
	}
	
	pub type PtrOfSimpleBlobDetector = core::Ptr<crate::features2d::SimpleBlobDetector>;
	
	ptr_extern! { crate::features2d::SimpleBlobDetector,
		cv_PtrLcv_SimpleBlobDetectorG_delete, cv_PtrLcv_SimpleBlobDetectorG_getInnerPtr_const, cv_PtrLcv_SimpleBlobDetectorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] pub fn as_raw_PtrOfSimpleBlobDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSimpleBlobDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::features2d::SimpleBlobDetectorTraitConst for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] fn as_raw_SimpleBlobDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::SimpleBlobDetectorTrait for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] fn as_raw_mut_SimpleBlobDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSimpleBlobDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_SimpleBlobDetectorG_to_PtrOfAlgorithm }
	
	impl crate::features2d::Feature2DTraitConst for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] fn as_raw_Feature2D(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::features2d::Feature2DTrait for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline] fn as_raw_mut_Feature2D(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSimpleBlobDetector, core::Ptr<crate::features2d::Feature2D>, cv_PtrLcv_SimpleBlobDetectorG_to_PtrOfFeature2D }
	
	impl std::fmt::Debug for core::Ptr<crate::features2d::SimpleBlobDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSimpleBlobDetector")
				.finish()
		}
	}
	
}
#[cfg(ocvrs_has_module_features2d)]
pub use features2d_types::*;

#[cfg(ocvrs_has_module_flann)]
mod flann_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfAutotunedIndexParams = core::Ptr<crate::flann::AutotunedIndexParams>;
	
	ptr_extern! { crate::flann::AutotunedIndexParams,
		cv_PtrLcv_flann_AutotunedIndexParamsG_delete, cv_PtrLcv_flann_AutotunedIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_AutotunedIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::AutotunedIndexParams, cv_PtrLcv_flann_AutotunedIndexParamsG_new_const_AutotunedIndexParams }
	impl core::Ptr<crate::flann::AutotunedIndexParams> {
		#[inline] pub fn as_raw_PtrOfAutotunedIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAutotunedIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::AutotunedIndexParamsTraitConst for core::Ptr<crate::flann::AutotunedIndexParams> {
		#[inline] fn as_raw_AutotunedIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::AutotunedIndexParamsTrait for core::Ptr<crate::flann::AutotunedIndexParams> {
		#[inline] fn as_raw_mut_AutotunedIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::AutotunedIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::AutotunedIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAutotunedIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_AutotunedIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::AutotunedIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAutotunedIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfCompositeIndexParams = core::Ptr<crate::flann::CompositeIndexParams>;
	
	ptr_extern! { crate::flann::CompositeIndexParams,
		cv_PtrLcv_flann_CompositeIndexParamsG_delete, cv_PtrLcv_flann_CompositeIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_CompositeIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::CompositeIndexParams, cv_PtrLcv_flann_CompositeIndexParamsG_new_const_CompositeIndexParams }
	impl core::Ptr<crate::flann::CompositeIndexParams> {
		#[inline] pub fn as_raw_PtrOfCompositeIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCompositeIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::CompositeIndexParamsTraitConst for core::Ptr<crate::flann::CompositeIndexParams> {
		#[inline] fn as_raw_CompositeIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::CompositeIndexParamsTrait for core::Ptr<crate::flann::CompositeIndexParams> {
		#[inline] fn as_raw_mut_CompositeIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::CompositeIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::CompositeIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCompositeIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_CompositeIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::CompositeIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCompositeIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfHierarchicalClusteringIndexParams = core::Ptr<crate::flann::HierarchicalClusteringIndexParams>;
	
	ptr_extern! { crate::flann::HierarchicalClusteringIndexParams,
		cv_PtrLcv_flann_HierarchicalClusteringIndexParamsG_delete, cv_PtrLcv_flann_HierarchicalClusteringIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_HierarchicalClusteringIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::HierarchicalClusteringIndexParams, cv_PtrLcv_flann_HierarchicalClusteringIndexParamsG_new_const_HierarchicalClusteringIndexParams }
	impl core::Ptr<crate::flann::HierarchicalClusteringIndexParams> {
		#[inline] pub fn as_raw_PtrOfHierarchicalClusteringIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfHierarchicalClusteringIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::HierarchicalClusteringIndexParamsTraitConst for core::Ptr<crate::flann::HierarchicalClusteringIndexParams> {
		#[inline] fn as_raw_HierarchicalClusteringIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::HierarchicalClusteringIndexParamsTrait for core::Ptr<crate::flann::HierarchicalClusteringIndexParams> {
		#[inline] fn as_raw_mut_HierarchicalClusteringIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::HierarchicalClusteringIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::HierarchicalClusteringIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfHierarchicalClusteringIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_HierarchicalClusteringIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::HierarchicalClusteringIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfHierarchicalClusteringIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfIndexParams = core::Ptr<crate::flann::IndexParams>;
	
	ptr_extern! { crate::flann::IndexParams,
		cv_PtrLcv_flann_IndexParamsG_delete, cv_PtrLcv_flann_IndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_IndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::IndexParams, cv_PtrLcv_flann_IndexParamsG_new_const_IndexParams }
	impl core::Ptr<crate::flann::IndexParams> {
		#[inline] pub fn as_raw_PtrOfIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::IndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::IndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::flann::IndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfKDTreeIndexParams = core::Ptr<crate::flann::KDTreeIndexParams>;
	
	ptr_extern! { crate::flann::KDTreeIndexParams,
		cv_PtrLcv_flann_KDTreeIndexParamsG_delete, cv_PtrLcv_flann_KDTreeIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_KDTreeIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::KDTreeIndexParams, cv_PtrLcv_flann_KDTreeIndexParamsG_new_const_KDTreeIndexParams }
	impl core::Ptr<crate::flann::KDTreeIndexParams> {
		#[inline] pub fn as_raw_PtrOfKDTreeIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfKDTreeIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::KDTreeIndexParamsTraitConst for core::Ptr<crate::flann::KDTreeIndexParams> {
		#[inline] fn as_raw_KDTreeIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::KDTreeIndexParamsTrait for core::Ptr<crate::flann::KDTreeIndexParams> {
		#[inline] fn as_raw_mut_KDTreeIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::KDTreeIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::KDTreeIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfKDTreeIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_KDTreeIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::KDTreeIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfKDTreeIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfKMeansIndexParams = core::Ptr<crate::flann::KMeansIndexParams>;
	
	ptr_extern! { crate::flann::KMeansIndexParams,
		cv_PtrLcv_flann_KMeansIndexParamsG_delete, cv_PtrLcv_flann_KMeansIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_KMeansIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::KMeansIndexParams, cv_PtrLcv_flann_KMeansIndexParamsG_new_const_KMeansIndexParams }
	impl core::Ptr<crate::flann::KMeansIndexParams> {
		#[inline] pub fn as_raw_PtrOfKMeansIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfKMeansIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::KMeansIndexParamsTraitConst for core::Ptr<crate::flann::KMeansIndexParams> {
		#[inline] fn as_raw_KMeansIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::KMeansIndexParamsTrait for core::Ptr<crate::flann::KMeansIndexParams> {
		#[inline] fn as_raw_mut_KMeansIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::KMeansIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::KMeansIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfKMeansIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_KMeansIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::KMeansIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfKMeansIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfLinearIndexParams = core::Ptr<crate::flann::LinearIndexParams>;
	
	ptr_extern! { crate::flann::LinearIndexParams,
		cv_PtrLcv_flann_LinearIndexParamsG_delete, cv_PtrLcv_flann_LinearIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_LinearIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::LinearIndexParams, cv_PtrLcv_flann_LinearIndexParamsG_new_const_LinearIndexParams }
	impl core::Ptr<crate::flann::LinearIndexParams> {
		#[inline] pub fn as_raw_PtrOfLinearIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLinearIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::LinearIndexParamsTraitConst for core::Ptr<crate::flann::LinearIndexParams> {
		#[inline] fn as_raw_LinearIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::LinearIndexParamsTrait for core::Ptr<crate::flann::LinearIndexParams> {
		#[inline] fn as_raw_mut_LinearIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::LinearIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::LinearIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLinearIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_LinearIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::LinearIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLinearIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfLshIndexParams = core::Ptr<crate::flann::LshIndexParams>;
	
	ptr_extern! { crate::flann::LshIndexParams,
		cv_PtrLcv_flann_LshIndexParamsG_delete, cv_PtrLcv_flann_LshIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_LshIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::LshIndexParams, cv_PtrLcv_flann_LshIndexParamsG_new_const_LshIndexParams }
	impl core::Ptr<crate::flann::LshIndexParams> {
		#[inline] pub fn as_raw_PtrOfLshIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLshIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::LshIndexParamsTraitConst for core::Ptr<crate::flann::LshIndexParams> {
		#[inline] fn as_raw_LshIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::LshIndexParamsTrait for core::Ptr<crate::flann::LshIndexParams> {
		#[inline] fn as_raw_mut_LshIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::LshIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::LshIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLshIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_LshIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::LshIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLshIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfSavedIndexParams = core::Ptr<crate::flann::SavedIndexParams>;
	
	ptr_extern! { crate::flann::SavedIndexParams,
		cv_PtrLcv_flann_SavedIndexParamsG_delete, cv_PtrLcv_flann_SavedIndexParamsG_getInnerPtr_const, cv_PtrLcv_flann_SavedIndexParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::SavedIndexParams, cv_PtrLcv_flann_SavedIndexParamsG_new_const_SavedIndexParams }
	impl core::Ptr<crate::flann::SavedIndexParams> {
		#[inline] pub fn as_raw_PtrOfSavedIndexParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSavedIndexParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::SavedIndexParamsTraitConst for core::Ptr<crate::flann::SavedIndexParams> {
		#[inline] fn as_raw_SavedIndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::SavedIndexParamsTrait for core::Ptr<crate::flann::SavedIndexParams> {
		#[inline] fn as_raw_mut_SavedIndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::SavedIndexParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::SavedIndexParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSavedIndexParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_SavedIndexParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::SavedIndexParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSavedIndexParams")
				.finish()
		}
	}
	
	pub type PtrOfSearchParams = core::Ptr<crate::flann::SearchParams>;
	
	ptr_extern! { crate::flann::SearchParams,
		cv_PtrLcv_flann_SearchParamsG_delete, cv_PtrLcv_flann_SearchParamsG_getInnerPtr_const, cv_PtrLcv_flann_SearchParamsG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::flann::SearchParams, cv_PtrLcv_flann_SearchParamsG_new_const_SearchParams }
	impl core::Ptr<crate::flann::SearchParams> {
		#[inline] pub fn as_raw_PtrOfSearchParams(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSearchParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::flann::SearchParamsTraitConst for core::Ptr<crate::flann::SearchParams> {
		#[inline] fn as_raw_SearchParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::SearchParamsTrait for core::Ptr<crate::flann::SearchParams> {
		#[inline] fn as_raw_mut_SearchParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::flann::IndexParamsTraitConst for core::Ptr<crate::flann::SearchParams> {
		#[inline] fn as_raw_IndexParams(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::flann::IndexParamsTrait for core::Ptr<crate::flann::SearchParams> {
		#[inline] fn as_raw_mut_IndexParams(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSearchParams, core::Ptr<crate::flann::IndexParams>, cv_PtrLcv_flann_SearchParamsG_to_PtrOfIndexParams }
	
	impl std::fmt::Debug for core::Ptr<crate::flann::SearchParams> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSearchParams")
				.finish()
		}
	}
	
	pub type VectorOfFlannIndexType = core::Vector<crate::flann::FlannIndexType>;
	
	impl core::Vector<crate::flann::FlannIndexType> {
		pub fn as_raw_VectorOfFlannIndexType(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfFlannIndexType(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::flann::FlannIndexType,
		std_vectorLcv_flann_FlannIndexTypeG_new_const, std_vectorLcv_flann_FlannIndexTypeG_delete,
		std_vectorLcv_flann_FlannIndexTypeG_len_const, std_vectorLcv_flann_FlannIndexTypeG_isEmpty_const,
		std_vectorLcv_flann_FlannIndexTypeG_capacity_const, std_vectorLcv_flann_FlannIndexTypeG_shrinkToFit,
		std_vectorLcv_flann_FlannIndexTypeG_reserve_size_t, std_vectorLcv_flann_FlannIndexTypeG_remove_size_t,
		std_vectorLcv_flann_FlannIndexTypeG_swap_size_t_size_t, std_vectorLcv_flann_FlannIndexTypeG_clear,
		std_vectorLcv_flann_FlannIndexTypeG_get_const_size_t, std_vectorLcv_flann_FlannIndexTypeG_set_size_t_const_FlannIndexType,
		std_vectorLcv_flann_FlannIndexTypeG_push_const_FlannIndexType, std_vectorLcv_flann_FlannIndexTypeG_insert_size_t_const_FlannIndexType,
	}
	
	vector_copy_non_bool! { crate::flann::FlannIndexType,
		std_vectorLcv_flann_FlannIndexTypeG_data_const, std_vectorLcv_flann_FlannIndexTypeG_dataMut, cv_fromSlice_const_const_FlannIndexTypeX_size_t,
		std_vectorLcv_flann_FlannIndexTypeG_clone_const,
	}
	
	
	pub type VectorOffeature_index = core::Vector<crate::flann::feature_index>;
	
	impl core::Vector<crate::flann::feature_index> {
		pub fn as_raw_VectorOffeature_index(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOffeature_index(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::flann::feature_index,
		std_vectorLcvflann_lsh_FeatureIndexG_new_const, std_vectorLcvflann_lsh_FeatureIndexG_delete,
		std_vectorLcvflann_lsh_FeatureIndexG_len_const, std_vectorLcvflann_lsh_FeatureIndexG_isEmpty_const,
		std_vectorLcvflann_lsh_FeatureIndexG_capacity_const, std_vectorLcvflann_lsh_FeatureIndexG_shrinkToFit,
		std_vectorLcvflann_lsh_FeatureIndexG_reserve_size_t, std_vectorLcvflann_lsh_FeatureIndexG_remove_size_t,
		std_vectorLcvflann_lsh_FeatureIndexG_swap_size_t_size_t, std_vectorLcvflann_lsh_FeatureIndexG_clear,
		std_vectorLcvflann_lsh_FeatureIndexG_get_const_size_t, std_vectorLcvflann_lsh_FeatureIndexG_set_size_t_const_FeatureIndex,
		std_vectorLcvflann_lsh_FeatureIndexG_push_const_FeatureIndex, std_vectorLcvflann_lsh_FeatureIndexG_insert_size_t_const_FeatureIndex,
	}
	
	vector_copy_non_bool! { crate::flann::feature_index,
		std_vectorLcvflann_lsh_FeatureIndexG_data_const, std_vectorLcvflann_lsh_FeatureIndexG_dataMut, cv_fromSlice_const_const_FeatureIndexX_size_t,
		std_vectorLcvflann_lsh_FeatureIndexG_clone_const,
	}
	
	
}
#[cfg(ocvrs_has_module_flann)]
pub use flann_types::*;

#[cfg(ocvrs_has_module_gapi)]
mod gapi_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type TupleOfGBackend_GKernelImpl = core::Tuple<(crate::gapi::GBackend, crate::gapi::GKernelImpl)>;
	
	impl core::Tuple<(crate::gapi::GBackend, crate::gapi::GKernelImpl)> {
		pub fn as_raw_TupleOfGBackend_GKernelImpl(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfGBackend_GKernelImpl(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (crate::gapi::GBackend, crate::gapi::GKernelImpl),
		std_pairLcv_gapi_GBackend__cv_GKernelImplG_new_const_GBackend_GKernelImpl, std_pairLcv_gapi_GBackend__cv_GKernelImplG_delete,
		0 = arg: crate::gapi::GBackend, get_0 via std_pairLcv_gapi_GBackend__cv_GKernelImplG_get_0_const,
		1 = arg_1: crate::gapi::GKernelImpl, get_1 via std_pairLcv_gapi_GBackend__cv_GKernelImplG_get_1_const
	}
	
	pub type TupleOfGMat_GMat = core::Tuple<(crate::gapi::GMat, crate::gapi::GMat)>;
	
	impl core::Tuple<(crate::gapi::GMat, crate::gapi::GMat)> {
		pub fn as_raw_TupleOfGMat_GMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfGMat_GMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (crate::gapi::GMat, crate::gapi::GMat),
		std_tupleLcv_GMat__cv_GMatG_new_const_GMat_GMat, std_tupleLcv_GMat__cv_GMatG_delete,
		0 = arg: crate::gapi::GMat, get_0 via std_tupleLcv_GMat__cv_GMatG_get_0_const,
		1 = arg_1: crate::gapi::GMat, get_1 via std_tupleLcv_GMat__cv_GMatG_get_1_const
	}
	
	pub type TupleOfGMat_GMat_GMat = core::Tuple<(crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat)>;
	
	impl core::Tuple<(crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat)> {
		pub fn as_raw_TupleOfGMat_GMat_GMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfGMat_GMat_GMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat),
		std_tupleLcv_GMat__cv_GMat__cv_GMatG_new_const_GMat_GMat_GMat, std_tupleLcv_GMat__cv_GMat__cv_GMatG_delete,
		0 = arg: crate::gapi::GMat, get_0 via std_tupleLcv_GMat__cv_GMat__cv_GMatG_get_0_const,
		1 = arg_1: crate::gapi::GMat, get_1 via std_tupleLcv_GMat__cv_GMat__cv_GMatG_get_1_const,
		2 = arg_2: crate::gapi::GMat, get_2 via std_tupleLcv_GMat__cv_GMat__cv_GMatG_get_2_const
	}
	
	pub type TupleOfGMat_GMat_GMat_GMat = core::Tuple<(crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat)>;
	
	impl core::Tuple<(crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat)> {
		pub fn as_raw_TupleOfGMat_GMat_GMat_GMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfGMat_GMat_GMat_GMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat, crate::gapi::GMat),
		std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_new_const_GMat_GMat_GMat_GMat, std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_delete,
		0 = arg: crate::gapi::GMat, get_0 via std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_0_const,
		1 = arg_1: crate::gapi::GMat, get_1 via std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_1_const,
		2 = arg_2: crate::gapi::GMat, get_2 via std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_2_const,
		3 = arg_3: crate::gapi::GMat, get_3 via std_tupleLcv_GMat__cv_GMat__cv_GMat__cv_GMatG_get_3_const
	}
	
	pub type TupleOfGMat_GScalar = core::Tuple<(crate::gapi::GMat, crate::gapi::GScalar)>;
	
	impl core::Tuple<(crate::gapi::GMat, crate::gapi::GScalar)> {
		pub fn as_raw_TupleOfGMat_GScalar(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_TupleOfGMat_GScalar(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	tuple_extern! { (crate::gapi::GMat, crate::gapi::GScalar),
		std_tupleLcv_GMat__cv_GScalarG_new_const_GMat_GScalar, std_tupleLcv_GMat__cv_GScalarG_delete,
		0 = arg: crate::gapi::GMat, get_0 via std_tupleLcv_GMat__cv_GScalarG_get_0_const,
		1 = arg_1: crate::gapi::GScalar, get_1 via std_tupleLcv_GMat__cv_GScalarG_get_1_const
	}
	
	pub type VectorOfDetail_OpaqueKind = core::Vector<crate::gapi::Detail_OpaqueKind>;
	
	impl core::Vector<crate::gapi::Detail_OpaqueKind> {
		pub fn as_raw_VectorOfDetail_OpaqueKind(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetail_OpaqueKind(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::Detail_OpaqueKind,
		std_vectorLcv_detail_OpaqueKindG_new_const, std_vectorLcv_detail_OpaqueKindG_delete,
		std_vectorLcv_detail_OpaqueKindG_len_const, std_vectorLcv_detail_OpaqueKindG_isEmpty_const,
		std_vectorLcv_detail_OpaqueKindG_capacity_const, std_vectorLcv_detail_OpaqueKindG_shrinkToFit,
		std_vectorLcv_detail_OpaqueKindG_reserve_size_t, std_vectorLcv_detail_OpaqueKindG_remove_size_t,
		std_vectorLcv_detail_OpaqueKindG_swap_size_t_size_t, std_vectorLcv_detail_OpaqueKindG_clear,
		std_vectorLcv_detail_OpaqueKindG_get_const_size_t, std_vectorLcv_detail_OpaqueKindG_set_size_t_const_OpaqueKind,
		std_vectorLcv_detail_OpaqueKindG_push_const_OpaqueKind, std_vectorLcv_detail_OpaqueKindG_insert_size_t_const_OpaqueKind,
	}
	
	vector_copy_non_bool! { crate::gapi::Detail_OpaqueKind,
		std_vectorLcv_detail_OpaqueKindG_data_const, std_vectorLcv_detail_OpaqueKindG_dataMut, cv_fromSlice_const_const_OpaqueKindX_size_t,
		std_vectorLcv_detail_OpaqueKindG_clone_const,
	}
	
	
	pub type VectorOfGArg = core::Vector<crate::gapi::GArg>;
	
	impl core::Vector<crate::gapi::GArg> {
		pub fn as_raw_VectorOfGArg(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGArg(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GArg,
		std_vectorLcv_GArgG_new_const, std_vectorLcv_GArgG_delete,
		std_vectorLcv_GArgG_len_const, std_vectorLcv_GArgG_isEmpty_const,
		std_vectorLcv_GArgG_capacity_const, std_vectorLcv_GArgG_shrinkToFit,
		std_vectorLcv_GArgG_reserve_size_t, std_vectorLcv_GArgG_remove_size_t,
		std_vectorLcv_GArgG_swap_size_t_size_t, std_vectorLcv_GArgG_clear,
		std_vectorLcv_GArgG_get_const_size_t, std_vectorLcv_GArgG_set_size_t_const_GArg,
		std_vectorLcv_GArgG_push_const_GArg, std_vectorLcv_GArgG_insert_size_t_const_GArg,
	}
	
	vector_non_copy_or_bool! { crate::gapi::GArg }
	
	vector_boxed_ref! { crate::gapi::GArg }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GArg>,
		std_vectorLcv_GArgG_new_const, std_vectorLcv_GArgG_delete,
		std_vectorLcv_GArgG_len_const, std_vectorLcv_GArgG_isEmpty_const,
		std_vectorLcv_GArgG_capacity_const, std_vectorLcv_GArgG_shrinkToFit,
		std_vectorLcv_GArgG_reserve_size_t, std_vectorLcv_GArgG_remove_size_t,
		std_vectorLcv_GArgG_swap_size_t_size_t, std_vectorLcv_GArgG_clear,
		std_vectorLcv_GArgG_get_const_size_t, std_vectorLcv_GArgG_set_size_t_const_GArg,
		std_vectorLcv_GArgG_push_const_GArg, std_vectorLcv_GArgG_insert_size_t_const_GArg,
	}
	
	
	pub type VectorOfGBackend = core::Vector<crate::gapi::GBackend>;
	
	impl core::Vector<crate::gapi::GBackend> {
		pub fn as_raw_VectorOfGBackend(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGBackend(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GBackend,
		std_vectorLcv_gapi_GBackendG_new_const, std_vectorLcv_gapi_GBackendG_delete,
		std_vectorLcv_gapi_GBackendG_len_const, std_vectorLcv_gapi_GBackendG_isEmpty_const,
		std_vectorLcv_gapi_GBackendG_capacity_const, std_vectorLcv_gapi_GBackendG_shrinkToFit,
		std_vectorLcv_gapi_GBackendG_reserve_size_t, std_vectorLcv_gapi_GBackendG_remove_size_t,
		std_vectorLcv_gapi_GBackendG_swap_size_t_size_t, std_vectorLcv_gapi_GBackendG_clear,
		std_vectorLcv_gapi_GBackendG_get_const_size_t, std_vectorLcv_gapi_GBackendG_set_size_t_const_GBackend,
		std_vectorLcv_gapi_GBackendG_push_const_GBackend, std_vectorLcv_gapi_GBackendG_insert_size_t_const_GBackend,
	}
	
	vector_non_copy_or_bool! { crate::gapi::GBackend }
	
	vector_boxed_ref! { crate::gapi::GBackend }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GBackend>,
		std_vectorLcv_gapi_GBackendG_new_const, std_vectorLcv_gapi_GBackendG_delete,
		std_vectorLcv_gapi_GBackendG_len_const, std_vectorLcv_gapi_GBackendG_isEmpty_const,
		std_vectorLcv_gapi_GBackendG_capacity_const, std_vectorLcv_gapi_GBackendG_shrinkToFit,
		std_vectorLcv_gapi_GBackendG_reserve_size_t, std_vectorLcv_gapi_GBackendG_remove_size_t,
		std_vectorLcv_gapi_GBackendG_swap_size_t_size_t, std_vectorLcv_gapi_GBackendG_clear,
		std_vectorLcv_gapi_GBackendG_get_const_size_t, std_vectorLcv_gapi_GBackendG_set_size_t_const_GBackend,
		std_vectorLcv_gapi_GBackendG_push_const_GBackend, std_vectorLcv_gapi_GBackendG_insert_size_t_const_GBackend,
	}
	
	
	pub type VectorOfGCompileArg = core::Vector<crate::gapi::GCompileArg>;
	
	impl core::Vector<crate::gapi::GCompileArg> {
		pub fn as_raw_VectorOfGCompileArg(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGCompileArg(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GCompileArg,
		std_vectorLcv_GCompileArgG_new_const, std_vectorLcv_GCompileArgG_delete,
		std_vectorLcv_GCompileArgG_len_const, std_vectorLcv_GCompileArgG_isEmpty_const,
		std_vectorLcv_GCompileArgG_capacity_const, std_vectorLcv_GCompileArgG_shrinkToFit,
		std_vectorLcv_GCompileArgG_reserve_size_t, std_vectorLcv_GCompileArgG_remove_size_t,
		std_vectorLcv_GCompileArgG_swap_size_t_size_t, std_vectorLcv_GCompileArgG_clear,
		std_vectorLcv_GCompileArgG_get_const_size_t, std_vectorLcv_GCompileArgG_set_size_t_const_GCompileArg,
		std_vectorLcv_GCompileArgG_push_const_GCompileArg, std_vectorLcv_GCompileArgG_insert_size_t_const_GCompileArg,
	}
	
	vector_non_copy_or_bool! { crate::gapi::GCompileArg }
	
	vector_boxed_ref! { crate::gapi::GCompileArg }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GCompileArg>,
		std_vectorLcv_GCompileArgG_new_const, std_vectorLcv_GCompileArgG_delete,
		std_vectorLcv_GCompileArgG_len_const, std_vectorLcv_GCompileArgG_isEmpty_const,
		std_vectorLcv_GCompileArgG_capacity_const, std_vectorLcv_GCompileArgG_shrinkToFit,
		std_vectorLcv_GCompileArgG_reserve_size_t, std_vectorLcv_GCompileArgG_remove_size_t,
		std_vectorLcv_GCompileArgG_swap_size_t_size_t, std_vectorLcv_GCompileArgG_clear,
		std_vectorLcv_GCompileArgG_get_const_size_t, std_vectorLcv_GCompileArgG_set_size_t_const_GCompileArg,
		std_vectorLcv_GCompileArgG_push_const_GCompileArg, std_vectorLcv_GCompileArgG_insert_size_t_const_GCompileArg,
	}
	
	
	pub type VectorOfGMat = core::Vector<crate::gapi::GMat>;
	
	impl core::Vector<crate::gapi::GMat> {
		pub fn as_raw_VectorOfGMat(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGMat(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GMat,
		std_vectorLcv_GMatG_new_const, std_vectorLcv_GMatG_delete,
		std_vectorLcv_GMatG_len_const, std_vectorLcv_GMatG_isEmpty_const,
		std_vectorLcv_GMatG_capacity_const, std_vectorLcv_GMatG_shrinkToFit,
		std_vectorLcv_GMatG_reserve_size_t, std_vectorLcv_GMatG_remove_size_t,
		std_vectorLcv_GMatG_swap_size_t_size_t, std_vectorLcv_GMatG_clear,
		std_vectorLcv_GMatG_get_const_size_t, std_vectorLcv_GMatG_set_size_t_const_GMat,
		std_vectorLcv_GMatG_push_const_GMat, std_vectorLcv_GMatG_insert_size_t_const_GMat,
	}
	
	vector_non_copy_or_bool! { clone crate::gapi::GMat }
	
	vector_boxed_ref! { crate::gapi::GMat }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GMat>,
		std_vectorLcv_GMatG_new_const, std_vectorLcv_GMatG_delete,
		std_vectorLcv_GMatG_len_const, std_vectorLcv_GMatG_isEmpty_const,
		std_vectorLcv_GMatG_capacity_const, std_vectorLcv_GMatG_shrinkToFit,
		std_vectorLcv_GMatG_reserve_size_t, std_vectorLcv_GMatG_remove_size_t,
		std_vectorLcv_GMatG_swap_size_t_size_t, std_vectorLcv_GMatG_clear,
		std_vectorLcv_GMatG_get_const_size_t, std_vectorLcv_GMatG_set_size_t_const_GMat,
		std_vectorLcv_GMatG_push_const_GMat, std_vectorLcv_GMatG_insert_size_t_const_GMat,
	}
	
	
	pub type VectorOfGRunArg = core::Vector<crate::gapi::GRunArg>;
	
	impl core::Vector<crate::gapi::GRunArg> {
		pub fn as_raw_VectorOfGRunArg(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGRunArg(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GRunArg,
		std_vectorLcv_GRunArgG_new_const, std_vectorLcv_GRunArgG_delete,
		std_vectorLcv_GRunArgG_len_const, std_vectorLcv_GRunArgG_isEmpty_const,
		std_vectorLcv_GRunArgG_capacity_const, std_vectorLcv_GRunArgG_shrinkToFit,
		std_vectorLcv_GRunArgG_reserve_size_t, std_vectorLcv_GRunArgG_remove_size_t,
		std_vectorLcv_GRunArgG_swap_size_t_size_t, std_vectorLcv_GRunArgG_clear,
		std_vectorLcv_GRunArgG_get_const_size_t, std_vectorLcv_GRunArgG_set_size_t_const_GRunArg,
		std_vectorLcv_GRunArgG_push_const_GRunArg, std_vectorLcv_GRunArgG_insert_size_t_const_GRunArg,
	}
	
	vector_non_copy_or_bool! { crate::gapi::GRunArg }
	
	vector_boxed_ref! { crate::gapi::GRunArg }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GRunArg>,
		std_vectorLcv_GRunArgG_new_const, std_vectorLcv_GRunArgG_delete,
		std_vectorLcv_GRunArgG_len_const, std_vectorLcv_GRunArgG_isEmpty_const,
		std_vectorLcv_GRunArgG_capacity_const, std_vectorLcv_GRunArgG_shrinkToFit,
		std_vectorLcv_GRunArgG_reserve_size_t, std_vectorLcv_GRunArgG_remove_size_t,
		std_vectorLcv_GRunArgG_swap_size_t_size_t, std_vectorLcv_GRunArgG_clear,
		std_vectorLcv_GRunArgG_get_const_size_t, std_vectorLcv_GRunArgG_set_size_t_const_GRunArg,
		std_vectorLcv_GRunArgG_push_const_GRunArg, std_vectorLcv_GRunArgG_insert_size_t_const_GRunArg,
	}
	
	
	pub type VectorOfGShape = core::Vector<crate::gapi::GShape>;
	
	impl core::Vector<crate::gapi::GShape> {
		pub fn as_raw_VectorOfGShape(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGShape(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GShape,
		std_vectorLcv_GShapeG_new_const, std_vectorLcv_GShapeG_delete,
		std_vectorLcv_GShapeG_len_const, std_vectorLcv_GShapeG_isEmpty_const,
		std_vectorLcv_GShapeG_capacity_const, std_vectorLcv_GShapeG_shrinkToFit,
		std_vectorLcv_GShapeG_reserve_size_t, std_vectorLcv_GShapeG_remove_size_t,
		std_vectorLcv_GShapeG_swap_size_t_size_t, std_vectorLcv_GShapeG_clear,
		std_vectorLcv_GShapeG_get_const_size_t, std_vectorLcv_GShapeG_set_size_t_const_GShape,
		std_vectorLcv_GShapeG_push_const_GShape, std_vectorLcv_GShapeG_insert_size_t_const_GShape,
	}
	
	vector_copy_non_bool! { crate::gapi::GShape,
		std_vectorLcv_GShapeG_data_const, std_vectorLcv_GShapeG_dataMut, cv_fromSlice_const_const_GShapeX_size_t,
		std_vectorLcv_GShapeG_clone_const,
	}
	
	
	pub type VectorOfGTransform = core::Vector<crate::gapi::GTransform>;
	
	impl core::Vector<crate::gapi::GTransform> {
		pub fn as_raw_VectorOfGTransform(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGTransform(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GTransform,
		std_vectorLcv_GTransformG_new_const, std_vectorLcv_GTransformG_delete,
		std_vectorLcv_GTransformG_len_const, std_vectorLcv_GTransformG_isEmpty_const,
		std_vectorLcv_GTransformG_capacity_const, std_vectorLcv_GTransformG_shrinkToFit,
		std_vectorLcv_GTransformG_reserve_size_t, std_vectorLcv_GTransformG_remove_size_t,
		std_vectorLcv_GTransformG_swap_size_t_size_t, std_vectorLcv_GTransformG_clear,
		std_vectorLcv_GTransformG_get_const_size_t, std_vectorLcv_GTransformG_set_size_t_const_GTransform,
		std_vectorLcv_GTransformG_push_const_GTransform, std_vectorLcv_GTransformG_insert_size_t_const_GTransform,
	}
	
	vector_non_copy_or_bool! { crate::gapi::GTransform }
	
	vector_boxed_ref! { crate::gapi::GTransform }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GTransform>,
		std_vectorLcv_GTransformG_new_const, std_vectorLcv_GTransformG_delete,
		std_vectorLcv_GTransformG_len_const, std_vectorLcv_GTransformG_isEmpty_const,
		std_vectorLcv_GTransformG_capacity_const, std_vectorLcv_GTransformG_shrinkToFit,
		std_vectorLcv_GTransformG_reserve_size_t, std_vectorLcv_GTransformG_remove_size_t,
		std_vectorLcv_GTransformG_swap_size_t_size_t, std_vectorLcv_GTransformG_clear,
		std_vectorLcv_GTransformG_get_const_size_t, std_vectorLcv_GTransformG_set_size_t_const_GTransform,
		std_vectorLcv_GTransformG_push_const_GTransform, std_vectorLcv_GTransformG_insert_size_t_const_GTransform,
	}
	
	
	pub type VectorOfGTypeInfo = core::Vector<crate::gapi::GTypeInfo>;
	
	impl core::Vector<crate::gapi::GTypeInfo> {
		pub fn as_raw_VectorOfGTypeInfo(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfGTypeInfo(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::gapi::GTypeInfo,
		std_vectorLcv_GTypeInfoG_new_const, std_vectorLcv_GTypeInfoG_delete,
		std_vectorLcv_GTypeInfoG_len_const, std_vectorLcv_GTypeInfoG_isEmpty_const,
		std_vectorLcv_GTypeInfoG_capacity_const, std_vectorLcv_GTypeInfoG_shrinkToFit,
		std_vectorLcv_GTypeInfoG_reserve_size_t, std_vectorLcv_GTypeInfoG_remove_size_t,
		std_vectorLcv_GTypeInfoG_swap_size_t_size_t, std_vectorLcv_GTypeInfoG_clear,
		std_vectorLcv_GTypeInfoG_get_const_size_t, std_vectorLcv_GTypeInfoG_set_size_t_const_GTypeInfo,
		std_vectorLcv_GTypeInfoG_push_const_GTypeInfo, std_vectorLcv_GTypeInfoG_insert_size_t_const_GTypeInfo,
	}
	
	vector_non_copy_or_bool! { clone crate::gapi::GTypeInfo }
	
	vector_boxed_ref! { crate::gapi::GTypeInfo }
	
	vector_extern! { BoxedRef<'_, crate::gapi::GTypeInfo>,
		std_vectorLcv_GTypeInfoG_new_const, std_vectorLcv_GTypeInfoG_delete,
		std_vectorLcv_GTypeInfoG_len_const, std_vectorLcv_GTypeInfoG_isEmpty_const,
		std_vectorLcv_GTypeInfoG_capacity_const, std_vectorLcv_GTypeInfoG_shrinkToFit,
		std_vectorLcv_GTypeInfoG_reserve_size_t, std_vectorLcv_GTypeInfoG_remove_size_t,
		std_vectorLcv_GTypeInfoG_swap_size_t_size_t, std_vectorLcv_GTypeInfoG_clear,
		std_vectorLcv_GTypeInfoG_get_const_size_t, std_vectorLcv_GTypeInfoG_set_size_t_const_GTypeInfo,
		std_vectorLcv_GTypeInfoG_push_const_GTypeInfo, std_vectorLcv_GTypeInfoG_insert_size_t_const_GTypeInfo,
	}
	
	
}
#[cfg(ocvrs_has_module_gapi)]
pub use gapi_types::*;

#[cfg(ocvrs_has_module_imgproc)]
mod imgproc_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfCLAHE = core::Ptr<crate::imgproc::CLAHE>;
	
	ptr_extern! { crate::imgproc::CLAHE,
		cv_PtrLcv_CLAHEG_delete, cv_PtrLcv_CLAHEG_getInnerPtr_const, cv_PtrLcv_CLAHEG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::imgproc::CLAHE> {
		#[inline] pub fn as_raw_PtrOfCLAHE(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCLAHE(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::imgproc::CLAHETraitConst for core::Ptr<crate::imgproc::CLAHE> {
		#[inline] fn as_raw_CLAHE(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::CLAHETrait for core::Ptr<crate::imgproc::CLAHE> {
		#[inline] fn as_raw_mut_CLAHE(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::imgproc::CLAHE> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::imgproc::CLAHE> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCLAHE, core::Ptr<core::Algorithm>, cv_PtrLcv_CLAHEG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::imgproc::CLAHE> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCLAHE")
				.finish()
		}
	}
	
	pub type PtrOfGeneralizedHough = core::Ptr<crate::imgproc::GeneralizedHough>;
	
	ptr_extern! { crate::imgproc::GeneralizedHough,
		cv_PtrLcv_GeneralizedHoughG_delete, cv_PtrLcv_GeneralizedHoughG_getInnerPtr_const, cv_PtrLcv_GeneralizedHoughG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::imgproc::GeneralizedHough> {
		#[inline] pub fn as_raw_PtrOfGeneralizedHough(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGeneralizedHough(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::imgproc::GeneralizedHoughTraitConst for core::Ptr<crate::imgproc::GeneralizedHough> {
		#[inline] fn as_raw_GeneralizedHough(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::GeneralizedHoughTrait for core::Ptr<crate::imgproc::GeneralizedHough> {
		#[inline] fn as_raw_mut_GeneralizedHough(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::imgproc::GeneralizedHough> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::imgproc::GeneralizedHough> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeneralizedHough, core::Ptr<core::Algorithm>, cv_PtrLcv_GeneralizedHoughG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::imgproc::GeneralizedHough> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGeneralizedHough")
				.finish()
		}
	}
	
	pub type PtrOfGeneralizedHoughBallard = core::Ptr<crate::imgproc::GeneralizedHoughBallard>;
	
	ptr_extern! { crate::imgproc::GeneralizedHoughBallard,
		cv_PtrLcv_GeneralizedHoughBallardG_delete, cv_PtrLcv_GeneralizedHoughBallardG_getInnerPtr_const, cv_PtrLcv_GeneralizedHoughBallardG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] pub fn as_raw_PtrOfGeneralizedHoughBallard(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGeneralizedHoughBallard(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::imgproc::GeneralizedHoughBallardTraitConst for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] fn as_raw_GeneralizedHoughBallard(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::GeneralizedHoughBallardTrait for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] fn as_raw_mut_GeneralizedHoughBallard(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeneralizedHoughBallard, core::Ptr<core::Algorithm>, cv_PtrLcv_GeneralizedHoughBallardG_to_PtrOfAlgorithm }
	
	impl crate::imgproc::GeneralizedHoughTraitConst for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] fn as_raw_GeneralizedHough(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::GeneralizedHoughTrait for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline] fn as_raw_mut_GeneralizedHough(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeneralizedHoughBallard, core::Ptr<crate::imgproc::GeneralizedHough>, cv_PtrLcv_GeneralizedHoughBallardG_to_PtrOfGeneralizedHough }
	
	impl std::fmt::Debug for core::Ptr<crate::imgproc::GeneralizedHoughBallard> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGeneralizedHoughBallard")
				.finish()
		}
	}
	
	pub type PtrOfGeneralizedHoughGuil = core::Ptr<crate::imgproc::GeneralizedHoughGuil>;
	
	ptr_extern! { crate::imgproc::GeneralizedHoughGuil,
		cv_PtrLcv_GeneralizedHoughGuilG_delete, cv_PtrLcv_GeneralizedHoughGuilG_getInnerPtr_const, cv_PtrLcv_GeneralizedHoughGuilG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] pub fn as_raw_PtrOfGeneralizedHoughGuil(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfGeneralizedHoughGuil(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::imgproc::GeneralizedHoughGuilTraitConst for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] fn as_raw_GeneralizedHoughGuil(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::GeneralizedHoughGuilTrait for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] fn as_raw_mut_GeneralizedHoughGuil(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeneralizedHoughGuil, core::Ptr<core::Algorithm>, cv_PtrLcv_GeneralizedHoughGuilG_to_PtrOfAlgorithm }
	
	impl crate::imgproc::GeneralizedHoughTraitConst for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] fn as_raw_GeneralizedHough(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::GeneralizedHoughTrait for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline] fn as_raw_mut_GeneralizedHough(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfGeneralizedHoughGuil, core::Ptr<crate::imgproc::GeneralizedHough>, cv_PtrLcv_GeneralizedHoughGuilG_to_PtrOfGeneralizedHough }
	
	impl std::fmt::Debug for core::Ptr<crate::imgproc::GeneralizedHoughGuil> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfGeneralizedHoughGuil")
				.finish()
		}
	}
	
	pub type PtrOfLineSegmentDetector = core::Ptr<crate::imgproc::LineSegmentDetector>;
	
	ptr_extern! { crate::imgproc::LineSegmentDetector,
		cv_PtrLcv_LineSegmentDetectorG_delete, cv_PtrLcv_LineSegmentDetectorG_getInnerPtr_const, cv_PtrLcv_LineSegmentDetectorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::imgproc::LineSegmentDetector> {
		#[inline] pub fn as_raw_PtrOfLineSegmentDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLineSegmentDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::imgproc::LineSegmentDetectorTraitConst for core::Ptr<crate::imgproc::LineSegmentDetector> {
		#[inline] fn as_raw_LineSegmentDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::imgproc::LineSegmentDetectorTrait for core::Ptr<crate::imgproc::LineSegmentDetector> {
		#[inline] fn as_raw_mut_LineSegmentDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::imgproc::LineSegmentDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::imgproc::LineSegmentDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLineSegmentDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_LineSegmentDetectorG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::imgproc::LineSegmentDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLineSegmentDetector")
				.finish()
		}
	}
	
}
#[cfg(ocvrs_has_module_imgproc)]
pub use imgproc_types::*;

#[cfg(ocvrs_has_module_ml)]
mod ml_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfANN_MLP = core::Ptr<crate::ml::ANN_MLP>;
	
	ptr_extern! { crate::ml::ANN_MLP,
		cv_PtrLcv_ml_ANN_MLPG_delete, cv_PtrLcv_ml_ANN_MLPG_getInnerPtr_const, cv_PtrLcv_ml_ANN_MLPG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::ANN_MLP> {
		#[inline] pub fn as_raw_PtrOfANN_MLP(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfANN_MLP(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::ANN_MLPTraitConst for core::Ptr<crate::ml::ANN_MLP> {
		#[inline] fn as_raw_ANN_MLP(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::ANN_MLPTrait for core::Ptr<crate::ml::ANN_MLP> {
		#[inline] fn as_raw_mut_ANN_MLP(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::ANN_MLP> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::ANN_MLP> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfANN_MLP, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_ANN_MLPG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::ANN_MLP> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::ANN_MLP> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfANN_MLP, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_ANN_MLPG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::ANN_MLP> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfANN_MLP")
				.finish()
		}
	}
	
	pub type PtrOfBoost = core::Ptr<crate::ml::Boost>;
	
	ptr_extern! { crate::ml::Boost,
		cv_PtrLcv_ml_BoostG_delete, cv_PtrLcv_ml_BoostG_getInnerPtr_const, cv_PtrLcv_ml_BoostG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::Boost> {
		#[inline] pub fn as_raw_PtrOfBoost(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBoost(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::BoostTraitConst for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_Boost(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::BoostTrait for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_mut_Boost(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBoost, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_BoostG_to_PtrOfAlgorithm }
	
	impl crate::ml::DTreesTraitConst for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_DTrees(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::DTreesTrait for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_mut_DTrees(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBoost, core::Ptr<crate::ml::DTrees>, cv_PtrLcv_ml_BoostG_to_PtrOfDTrees }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::Boost> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBoost, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_BoostG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::Boost> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBoost")
				.finish()
		}
	}
	
	pub type PtrOfDTrees = core::Ptr<crate::ml::DTrees>;
	
	ptr_extern! { crate::ml::DTrees,
		cv_PtrLcv_ml_DTreesG_delete, cv_PtrLcv_ml_DTreesG_getInnerPtr_const, cv_PtrLcv_ml_DTreesG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::DTrees> {
		#[inline] pub fn as_raw_PtrOfDTrees(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDTrees(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::DTreesTraitConst for core::Ptr<crate::ml::DTrees> {
		#[inline] fn as_raw_DTrees(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::DTreesTrait for core::Ptr<crate::ml::DTrees> {
		#[inline] fn as_raw_mut_DTrees(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::DTrees> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::DTrees> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDTrees, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_DTreesG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::DTrees> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::DTrees> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDTrees, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_DTreesG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::DTrees> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDTrees")
				.finish()
		}
	}
	
	pub type PtrOfEM = core::Ptr<crate::ml::EM>;
	
	ptr_extern! { crate::ml::EM,
		cv_PtrLcv_ml_EMG_delete, cv_PtrLcv_ml_EMG_getInnerPtr_const, cv_PtrLcv_ml_EMG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::EM> {
		#[inline] pub fn as_raw_PtrOfEM(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfEM(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::EMTraitConst for core::Ptr<crate::ml::EM> {
		#[inline] fn as_raw_EM(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::EMTrait for core::Ptr<crate::ml::EM> {
		#[inline] fn as_raw_mut_EM(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::EM> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::EM> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEM, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_EMG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::EM> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::EM> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfEM, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_EMG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::EM> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfEM")
				.finish()
		}
	}
	
	pub type PtrOfKNearest = core::Ptr<crate::ml::KNearest>;
	
	ptr_extern! { crate::ml::KNearest,
		cv_PtrLcv_ml_KNearestG_delete, cv_PtrLcv_ml_KNearestG_getInnerPtr_const, cv_PtrLcv_ml_KNearestG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::KNearest> {
		#[inline] pub fn as_raw_PtrOfKNearest(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfKNearest(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::KNearestTraitConst for core::Ptr<crate::ml::KNearest> {
		#[inline] fn as_raw_KNearest(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::KNearestTrait for core::Ptr<crate::ml::KNearest> {
		#[inline] fn as_raw_mut_KNearest(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::KNearest> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::KNearest> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfKNearest, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_KNearestG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::KNearest> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::KNearest> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfKNearest, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_KNearestG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::KNearest> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfKNearest")
				.finish()
		}
	}
	
	pub type PtrOfLogisticRegression = core::Ptr<crate::ml::LogisticRegression>;
	
	ptr_extern! { crate::ml::LogisticRegression,
		cv_PtrLcv_ml_LogisticRegressionG_delete, cv_PtrLcv_ml_LogisticRegressionG_getInnerPtr_const, cv_PtrLcv_ml_LogisticRegressionG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::LogisticRegression> {
		#[inline] pub fn as_raw_PtrOfLogisticRegression(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfLogisticRegression(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::LogisticRegressionTraitConst for core::Ptr<crate::ml::LogisticRegression> {
		#[inline] fn as_raw_LogisticRegression(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::LogisticRegressionTrait for core::Ptr<crate::ml::LogisticRegression> {
		#[inline] fn as_raw_mut_LogisticRegression(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::LogisticRegression> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::LogisticRegression> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLogisticRegression, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_LogisticRegressionG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::LogisticRegression> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::LogisticRegression> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfLogisticRegression, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_LogisticRegressionG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::LogisticRegression> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfLogisticRegression")
				.finish()
		}
	}
	
	pub type PtrOfNormalBayesClassifier = core::Ptr<crate::ml::NormalBayesClassifier>;
	
	ptr_extern! { crate::ml::NormalBayesClassifier,
		cv_PtrLcv_ml_NormalBayesClassifierG_delete, cv_PtrLcv_ml_NormalBayesClassifierG_getInnerPtr_const, cv_PtrLcv_ml_NormalBayesClassifierG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] pub fn as_raw_PtrOfNormalBayesClassifier(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfNormalBayesClassifier(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::NormalBayesClassifierTraitConst for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] fn as_raw_NormalBayesClassifier(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::NormalBayesClassifierTrait for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] fn as_raw_mut_NormalBayesClassifier(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNormalBayesClassifier, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_NormalBayesClassifierG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfNormalBayesClassifier, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_NormalBayesClassifierG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::NormalBayesClassifier> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfNormalBayesClassifier")
				.finish()
		}
	}
	
	pub type PtrOfParamGrid = core::Ptr<crate::ml::ParamGrid>;
	
	ptr_extern! { crate::ml::ParamGrid,
		cv_PtrLcv_ml_ParamGridG_delete, cv_PtrLcv_ml_ParamGridG_getInnerPtr_const, cv_PtrLcv_ml_ParamGridG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::ml::ParamGrid, cv_PtrLcv_ml_ParamGridG_new_const_ParamGrid }
	impl core::Ptr<crate::ml::ParamGrid> {
		#[inline] pub fn as_raw_PtrOfParamGrid(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfParamGrid(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::ParamGridTraitConst for core::Ptr<crate::ml::ParamGrid> {
		#[inline] fn as_raw_ParamGrid(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::ParamGridTrait for core::Ptr<crate::ml::ParamGrid> {
		#[inline] fn as_raw_mut_ParamGrid(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::ml::ParamGrid> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfParamGrid")
				.field("min_val", &crate::ml::ParamGridTraitConst::min_val(self))
				.field("max_val", &crate::ml::ParamGridTraitConst::max_val(self))
				.field("log_step", &crate::ml::ParamGridTraitConst::log_step(self))
				.finish()
		}
	}
	
	pub type PtrOfRTrees = core::Ptr<crate::ml::RTrees>;
	
	ptr_extern! { crate::ml::RTrees,
		cv_PtrLcv_ml_RTreesG_delete, cv_PtrLcv_ml_RTreesG_getInnerPtr_const, cv_PtrLcv_ml_RTreesG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::RTrees> {
		#[inline] pub fn as_raw_PtrOfRTrees(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfRTrees(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::RTreesTraitConst for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_RTrees(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::RTreesTrait for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_mut_RTrees(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRTrees, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_RTreesG_to_PtrOfAlgorithm }
	
	impl crate::ml::DTreesTraitConst for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_DTrees(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::DTreesTrait for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_mut_DTrees(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRTrees, core::Ptr<crate::ml::DTrees>, cv_PtrLcv_ml_RTreesG_to_PtrOfDTrees }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::RTrees> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfRTrees, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_RTreesG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::RTrees> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfRTrees")
				.finish()
		}
	}
	
	pub type PtrOfSVM = core::Ptr<crate::ml::SVM>;
	
	ptr_extern! { crate::ml::SVM,
		cv_PtrLcv_ml_SVMG_delete, cv_PtrLcv_ml_SVMG_getInnerPtr_const, cv_PtrLcv_ml_SVMG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::SVM> {
		#[inline] pub fn as_raw_PtrOfSVM(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSVM(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::SVMTraitConst for core::Ptr<crate::ml::SVM> {
		#[inline] fn as_raw_SVM(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::SVMTrait for core::Ptr<crate::ml::SVM> {
		#[inline] fn as_raw_mut_SVM(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::SVM> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::SVM> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSVM, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_SVMG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::SVM> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::SVM> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSVM, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_SVMG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::SVM> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSVM")
				.finish()
		}
	}
	
	pub type PtrOfSVMSGD = core::Ptr<crate::ml::SVMSGD>;
	
	ptr_extern! { crate::ml::SVMSGD,
		cv_PtrLcv_ml_SVMSGDG_delete, cv_PtrLcv_ml_SVMSGDG_getInnerPtr_const, cv_PtrLcv_ml_SVMSGDG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::SVMSGD> {
		#[inline] pub fn as_raw_PtrOfSVMSGD(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSVMSGD(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::SVMSGDTraitConst for core::Ptr<crate::ml::SVMSGD> {
		#[inline] fn as_raw_SVMSGD(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::SVMSGDTrait for core::Ptr<crate::ml::SVMSGD> {
		#[inline] fn as_raw_mut_SVMSGD(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::SVMSGD> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::SVMSGD> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSVMSGD, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_SVMSGDG_to_PtrOfAlgorithm }
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::SVMSGD> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::SVMSGD> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSVMSGD, core::Ptr<crate::ml::StatModel>, cv_PtrLcv_ml_SVMSGDG_to_PtrOfStatModel }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::SVMSGD> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSVMSGD")
				.finish()
		}
	}
	
	pub type PtrOfSVM_Kernel = core::Ptr<crate::ml::SVM_Kernel>;
	
	ptr_extern! { crate::ml::SVM_Kernel,
		cv_PtrLcv_ml_SVM_KernelG_delete, cv_PtrLcv_ml_SVM_KernelG_getInnerPtr_const, cv_PtrLcv_ml_SVM_KernelG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::SVM_Kernel> {
		#[inline] pub fn as_raw_PtrOfSVM_Kernel(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSVM_Kernel(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::SVM_KernelTraitConst for core::Ptr<crate::ml::SVM_Kernel> {
		#[inline] fn as_raw_SVM_Kernel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::SVM_KernelTrait for core::Ptr<crate::ml::SVM_Kernel> {
		#[inline] fn as_raw_mut_SVM_Kernel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::SVM_Kernel> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::SVM_Kernel> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSVM_Kernel, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_SVM_KernelG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::SVM_Kernel> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSVM_Kernel")
				.finish()
		}
	}
	
	pub type PtrOfStatModel = core::Ptr<crate::ml::StatModel>;
	
	ptr_extern! { crate::ml::StatModel,
		cv_PtrLcv_ml_StatModelG_delete, cv_PtrLcv_ml_StatModelG_getInnerPtr_const, cv_PtrLcv_ml_StatModelG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::StatModel> {
		#[inline] pub fn as_raw_PtrOfStatModel(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfStatModel(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::StatModelTraitConst for core::Ptr<crate::ml::StatModel> {
		#[inline] fn as_raw_StatModel(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::StatModelTrait for core::Ptr<crate::ml::StatModel> {
		#[inline] fn as_raw_mut_StatModel(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::ml::StatModel> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::ml::StatModel> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStatModel, core::Ptr<core::Algorithm>, cv_PtrLcv_ml_StatModelG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::ml::StatModel> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfStatModel")
				.finish()
		}
	}
	
	pub type PtrOfTrainData = core::Ptr<crate::ml::TrainData>;
	
	ptr_extern! { crate::ml::TrainData,
		cv_PtrLcv_ml_TrainDataG_delete, cv_PtrLcv_ml_TrainDataG_getInnerPtr_const, cv_PtrLcv_ml_TrainDataG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::ml::TrainData> {
		#[inline] pub fn as_raw_PtrOfTrainData(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTrainData(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::ml::TrainDataTraitConst for core::Ptr<crate::ml::TrainData> {
		#[inline] fn as_raw_TrainData(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::ml::TrainDataTrait for core::Ptr<crate::ml::TrainData> {
		#[inline] fn as_raw_mut_TrainData(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::ml::TrainData> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTrainData")
				.finish()
		}
	}
	
	pub type VectorOfDTrees_Node = core::Vector<crate::ml::DTrees_Node>;
	
	impl core::Vector<crate::ml::DTrees_Node> {
		pub fn as_raw_VectorOfDTrees_Node(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDTrees_Node(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::ml::DTrees_Node,
		std_vectorLcv_ml_DTrees_NodeG_new_const, std_vectorLcv_ml_DTrees_NodeG_delete,
		std_vectorLcv_ml_DTrees_NodeG_len_const, std_vectorLcv_ml_DTrees_NodeG_isEmpty_const,
		std_vectorLcv_ml_DTrees_NodeG_capacity_const, std_vectorLcv_ml_DTrees_NodeG_shrinkToFit,
		std_vectorLcv_ml_DTrees_NodeG_reserve_size_t, std_vectorLcv_ml_DTrees_NodeG_remove_size_t,
		std_vectorLcv_ml_DTrees_NodeG_swap_size_t_size_t, std_vectorLcv_ml_DTrees_NodeG_clear,
		std_vectorLcv_ml_DTrees_NodeG_get_const_size_t, std_vectorLcv_ml_DTrees_NodeG_set_size_t_const_Node,
		std_vectorLcv_ml_DTrees_NodeG_push_const_Node, std_vectorLcv_ml_DTrees_NodeG_insert_size_t_const_Node,
	}
	
	vector_non_copy_or_bool! { crate::ml::DTrees_Node }
	
	vector_boxed_ref! { crate::ml::DTrees_Node }
	
	vector_extern! { BoxedRef<'_, crate::ml::DTrees_Node>,
		std_vectorLcv_ml_DTrees_NodeG_new_const, std_vectorLcv_ml_DTrees_NodeG_delete,
		std_vectorLcv_ml_DTrees_NodeG_len_const, std_vectorLcv_ml_DTrees_NodeG_isEmpty_const,
		std_vectorLcv_ml_DTrees_NodeG_capacity_const, std_vectorLcv_ml_DTrees_NodeG_shrinkToFit,
		std_vectorLcv_ml_DTrees_NodeG_reserve_size_t, std_vectorLcv_ml_DTrees_NodeG_remove_size_t,
		std_vectorLcv_ml_DTrees_NodeG_swap_size_t_size_t, std_vectorLcv_ml_DTrees_NodeG_clear,
		std_vectorLcv_ml_DTrees_NodeG_get_const_size_t, std_vectorLcv_ml_DTrees_NodeG_set_size_t_const_Node,
		std_vectorLcv_ml_DTrees_NodeG_push_const_Node, std_vectorLcv_ml_DTrees_NodeG_insert_size_t_const_Node,
	}
	
	
	pub type VectorOfDTrees_Split = core::Vector<crate::ml::DTrees_Split>;
	
	impl core::Vector<crate::ml::DTrees_Split> {
		pub fn as_raw_VectorOfDTrees_Split(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDTrees_Split(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::ml::DTrees_Split,
		std_vectorLcv_ml_DTrees_SplitG_new_const, std_vectorLcv_ml_DTrees_SplitG_delete,
		std_vectorLcv_ml_DTrees_SplitG_len_const, std_vectorLcv_ml_DTrees_SplitG_isEmpty_const,
		std_vectorLcv_ml_DTrees_SplitG_capacity_const, std_vectorLcv_ml_DTrees_SplitG_shrinkToFit,
		std_vectorLcv_ml_DTrees_SplitG_reserve_size_t, std_vectorLcv_ml_DTrees_SplitG_remove_size_t,
		std_vectorLcv_ml_DTrees_SplitG_swap_size_t_size_t, std_vectorLcv_ml_DTrees_SplitG_clear,
		std_vectorLcv_ml_DTrees_SplitG_get_const_size_t, std_vectorLcv_ml_DTrees_SplitG_set_size_t_const_Split,
		std_vectorLcv_ml_DTrees_SplitG_push_const_Split, std_vectorLcv_ml_DTrees_SplitG_insert_size_t_const_Split,
	}
	
	vector_non_copy_or_bool! { crate::ml::DTrees_Split }
	
	vector_boxed_ref! { crate::ml::DTrees_Split }
	
	vector_extern! { BoxedRef<'_, crate::ml::DTrees_Split>,
		std_vectorLcv_ml_DTrees_SplitG_new_const, std_vectorLcv_ml_DTrees_SplitG_delete,
		std_vectorLcv_ml_DTrees_SplitG_len_const, std_vectorLcv_ml_DTrees_SplitG_isEmpty_const,
		std_vectorLcv_ml_DTrees_SplitG_capacity_const, std_vectorLcv_ml_DTrees_SplitG_shrinkToFit,
		std_vectorLcv_ml_DTrees_SplitG_reserve_size_t, std_vectorLcv_ml_DTrees_SplitG_remove_size_t,
		std_vectorLcv_ml_DTrees_SplitG_swap_size_t_size_t, std_vectorLcv_ml_DTrees_SplitG_clear,
		std_vectorLcv_ml_DTrees_SplitG_get_const_size_t, std_vectorLcv_ml_DTrees_SplitG_set_size_t_const_Split,
		std_vectorLcv_ml_DTrees_SplitG_push_const_Split, std_vectorLcv_ml_DTrees_SplitG_insert_size_t_const_Split,
	}
	
	
}
#[cfg(ocvrs_has_module_ml)]
pub use ml_types::*;

#[cfg(ocvrs_has_module_objdetect)]
mod objdetect_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfArucoDetector = core::Ptr<crate::objdetect::ArucoDetector>;
	
	ptr_extern! { crate::objdetect::ArucoDetector,
		cv_PtrLcv_aruco_ArucoDetectorG_delete, cv_PtrLcv_aruco_ArucoDetectorG_getInnerPtr_const, cv_PtrLcv_aruco_ArucoDetectorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::objdetect::ArucoDetector, cv_PtrLcv_aruco_ArucoDetectorG_new_const_ArucoDetector }
	impl core::Ptr<crate::objdetect::ArucoDetector> {
		#[inline] pub fn as_raw_PtrOfArucoDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfArucoDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::ArucoDetectorTraitConst for core::Ptr<crate::objdetect::ArucoDetector> {
		#[inline] fn as_raw_ArucoDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::ArucoDetectorTrait for core::Ptr<crate::objdetect::ArucoDetector> {
		#[inline] fn as_raw_mut_ArucoDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::objdetect::ArucoDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::objdetect::ArucoDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfArucoDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_aruco_ArucoDetectorG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::ArucoDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfArucoDetector")
				.finish()
		}
	}
	
	pub type PtrOfBaseCascadeClassifier = core::Ptr<crate::objdetect::BaseCascadeClassifier>;
	
	ptr_extern! { crate::objdetect::BaseCascadeClassifier,
		cv_PtrLcv_BaseCascadeClassifierG_delete, cv_PtrLcv_BaseCascadeClassifierG_getInnerPtr_const, cv_PtrLcv_BaseCascadeClassifierG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::objdetect::BaseCascadeClassifier> {
		#[inline] pub fn as_raw_PtrOfBaseCascadeClassifier(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBaseCascadeClassifier(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::BaseCascadeClassifierTraitConst for core::Ptr<crate::objdetect::BaseCascadeClassifier> {
		#[inline] fn as_raw_BaseCascadeClassifier(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::BaseCascadeClassifierTrait for core::Ptr<crate::objdetect::BaseCascadeClassifier> {
		#[inline] fn as_raw_mut_BaseCascadeClassifier(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::objdetect::BaseCascadeClassifier> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::objdetect::BaseCascadeClassifier> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBaseCascadeClassifier, core::Ptr<core::Algorithm>, cv_PtrLcv_BaseCascadeClassifierG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::BaseCascadeClassifier> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBaseCascadeClassifier")
				.finish()
		}
	}
	
	pub type PtrOfBaseCascadeClassifier_MaskGenerator = core::Ptr<crate::objdetect::BaseCascadeClassifier_MaskGenerator>;
	
	ptr_extern! { crate::objdetect::BaseCascadeClassifier_MaskGenerator,
		cv_PtrLcv_BaseCascadeClassifier_MaskGeneratorG_delete, cv_PtrLcv_BaseCascadeClassifier_MaskGeneratorG_getInnerPtr_const, cv_PtrLcv_BaseCascadeClassifier_MaskGeneratorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::objdetect::BaseCascadeClassifier_MaskGenerator> {
		#[inline] pub fn as_raw_PtrOfBaseCascadeClassifier_MaskGenerator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBaseCascadeClassifier_MaskGenerator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::BaseCascadeClassifier_MaskGeneratorTraitConst for core::Ptr<crate::objdetect::BaseCascadeClassifier_MaskGenerator> {
		#[inline] fn as_raw_BaseCascadeClassifier_MaskGenerator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::BaseCascadeClassifier_MaskGeneratorTrait for core::Ptr<crate::objdetect::BaseCascadeClassifier_MaskGenerator> {
		#[inline] fn as_raw_mut_BaseCascadeClassifier_MaskGenerator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::BaseCascadeClassifier_MaskGenerator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBaseCascadeClassifier_MaskGenerator")
				.finish()
		}
	}
	
	pub type PtrOfCharucoDetector = core::Ptr<crate::objdetect::CharucoDetector>;
	
	ptr_extern! { crate::objdetect::CharucoDetector,
		cv_PtrLcv_aruco_CharucoDetectorG_delete, cv_PtrLcv_aruco_CharucoDetectorG_getInnerPtr_const, cv_PtrLcv_aruco_CharucoDetectorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::objdetect::CharucoDetector, cv_PtrLcv_aruco_CharucoDetectorG_new_const_CharucoDetector }
	impl core::Ptr<crate::objdetect::CharucoDetector> {
		#[inline] pub fn as_raw_PtrOfCharucoDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCharucoDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::CharucoDetectorTraitConst for core::Ptr<crate::objdetect::CharucoDetector> {
		#[inline] fn as_raw_CharucoDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::CharucoDetectorTrait for core::Ptr<crate::objdetect::CharucoDetector> {
		#[inline] fn as_raw_mut_CharucoDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::objdetect::CharucoDetector> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::objdetect::CharucoDetector> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCharucoDetector, core::Ptr<core::Algorithm>, cv_PtrLcv_aruco_CharucoDetectorG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::CharucoDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCharucoDetector")
				.finish()
		}
	}
	
	pub type PtrOfDetectionBasedTracker_IDetector = core::Ptr<crate::objdetect::DetectionBasedTracker_IDetector>;
	
	ptr_extern! { crate::objdetect::DetectionBasedTracker_IDetector,
		cv_PtrLcv_DetectionBasedTracker_IDetectorG_delete, cv_PtrLcv_DetectionBasedTracker_IDetectorG_getInnerPtr_const, cv_PtrLcv_DetectionBasedTracker_IDetectorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::objdetect::DetectionBasedTracker_IDetector> {
		#[inline] pub fn as_raw_PtrOfDetectionBasedTracker_IDetector(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetectionBasedTracker_IDetector(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::DetectionBasedTracker_IDetectorTraitConst for core::Ptr<crate::objdetect::DetectionBasedTracker_IDetector> {
		#[inline] fn as_raw_DetectionBasedTracker_IDetector(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::DetectionBasedTracker_IDetectorTrait for core::Ptr<crate::objdetect::DetectionBasedTracker_IDetector> {
		#[inline] fn as_raw_mut_DetectionBasedTracker_IDetector(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::DetectionBasedTracker_IDetector> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetectionBasedTracker_IDetector")
				.finish()
		}
	}
	
	pub type PtrOfFaceDetectorYN = core::Ptr<crate::objdetect::FaceDetectorYN>;
	
	ptr_extern! { crate::objdetect::FaceDetectorYN,
		cv_PtrLcv_FaceDetectorYNG_delete, cv_PtrLcv_FaceDetectorYNG_getInnerPtr_const, cv_PtrLcv_FaceDetectorYNG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::objdetect::FaceDetectorYN> {
		#[inline] pub fn as_raw_PtrOfFaceDetectorYN(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFaceDetectorYN(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::FaceDetectorYNTraitConst for core::Ptr<crate::objdetect::FaceDetectorYN> {
		#[inline] fn as_raw_FaceDetectorYN(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::FaceDetectorYNTrait for core::Ptr<crate::objdetect::FaceDetectorYN> {
		#[inline] fn as_raw_mut_FaceDetectorYN(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::FaceDetectorYN> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFaceDetectorYN")
				.finish()
		}
	}
	
	pub type PtrOfFaceRecognizerSF = core::Ptr<crate::objdetect::FaceRecognizerSF>;
	
	ptr_extern! { crate::objdetect::FaceRecognizerSF,
		cv_PtrLcv_FaceRecognizerSFG_delete, cv_PtrLcv_FaceRecognizerSFG_getInnerPtr_const, cv_PtrLcv_FaceRecognizerSFG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::objdetect::FaceRecognizerSF> {
		#[inline] pub fn as_raw_PtrOfFaceRecognizerSF(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFaceRecognizerSF(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::FaceRecognizerSFTraitConst for core::Ptr<crate::objdetect::FaceRecognizerSF> {
		#[inline] fn as_raw_FaceRecognizerSF(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::FaceRecognizerSFTrait for core::Ptr<crate::objdetect::FaceRecognizerSF> {
		#[inline] fn as_raw_mut_FaceRecognizerSF(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::FaceRecognizerSF> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFaceRecognizerSF")
				.finish()
		}
	}
	
	pub type PtrOfQRCodeEncoder = core::Ptr<crate::objdetect::QRCodeEncoder>;
	
	ptr_extern! { crate::objdetect::QRCodeEncoder,
		cv_PtrLcv_QRCodeEncoderG_delete, cv_PtrLcv_QRCodeEncoderG_getInnerPtr_const, cv_PtrLcv_QRCodeEncoderG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::objdetect::QRCodeEncoder> {
		#[inline] pub fn as_raw_PtrOfQRCodeEncoder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfQRCodeEncoder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::objdetect::QRCodeEncoderTraitConst for core::Ptr<crate::objdetect::QRCodeEncoder> {
		#[inline] fn as_raw_QRCodeEncoder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::objdetect::QRCodeEncoderTrait for core::Ptr<crate::objdetect::QRCodeEncoder> {
		#[inline] fn as_raw_mut_QRCodeEncoder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::objdetect::QRCodeEncoder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfQRCodeEncoder")
				.finish()
		}
	}
	
	pub type VectorOfDetectionBasedTracker_ExtObject = core::Vector<crate::objdetect::DetectionBasedTracker_ExtObject>;
	
	impl core::Vector<crate::objdetect::DetectionBasedTracker_ExtObject> {
		pub fn as_raw_VectorOfDetectionBasedTracker_ExtObject(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetectionBasedTracker_ExtObject(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::objdetect::DetectionBasedTracker_ExtObject,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_new_const, std_vectorLcv_DetectionBasedTracker_ExtObjectG_delete,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_len_const, std_vectorLcv_DetectionBasedTracker_ExtObjectG_isEmpty_const,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_capacity_const, std_vectorLcv_DetectionBasedTracker_ExtObjectG_shrinkToFit,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_reserve_size_t, std_vectorLcv_DetectionBasedTracker_ExtObjectG_remove_size_t,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_swap_size_t_size_t, std_vectorLcv_DetectionBasedTracker_ExtObjectG_clear,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_get_const_size_t, std_vectorLcv_DetectionBasedTracker_ExtObjectG_set_size_t_const_ExtObject,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_push_const_ExtObject, std_vectorLcv_DetectionBasedTracker_ExtObjectG_insert_size_t_const_ExtObject,
	}
	
	vector_non_copy_or_bool! { clone crate::objdetect::DetectionBasedTracker_ExtObject }
	
	vector_boxed_ref! { crate::objdetect::DetectionBasedTracker_ExtObject }
	
	vector_extern! { BoxedRef<'_, crate::objdetect::DetectionBasedTracker_ExtObject>,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_new_const, std_vectorLcv_DetectionBasedTracker_ExtObjectG_delete,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_len_const, std_vectorLcv_DetectionBasedTracker_ExtObjectG_isEmpty_const,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_capacity_const, std_vectorLcv_DetectionBasedTracker_ExtObjectG_shrinkToFit,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_reserve_size_t, std_vectorLcv_DetectionBasedTracker_ExtObjectG_remove_size_t,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_swap_size_t_size_t, std_vectorLcv_DetectionBasedTracker_ExtObjectG_clear,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_get_const_size_t, std_vectorLcv_DetectionBasedTracker_ExtObjectG_set_size_t_const_ExtObject,
		std_vectorLcv_DetectionBasedTracker_ExtObjectG_push_const_ExtObject, std_vectorLcv_DetectionBasedTracker_ExtObjectG_insert_size_t_const_ExtObject,
	}
	
	
	pub type VectorOfDetectionBasedTracker_Object = core::Vector<crate::objdetect::DetectionBasedTracker_Object>;
	
	impl core::Vector<crate::objdetect::DetectionBasedTracker_Object> {
		pub fn as_raw_VectorOfDetectionBasedTracker_Object(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetectionBasedTracker_Object(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::objdetect::DetectionBasedTracker_Object,
		std_vectorLcv_DetectionBasedTracker_ObjectG_new_const, std_vectorLcv_DetectionBasedTracker_ObjectG_delete,
		std_vectorLcv_DetectionBasedTracker_ObjectG_len_const, std_vectorLcv_DetectionBasedTracker_ObjectG_isEmpty_const,
		std_vectorLcv_DetectionBasedTracker_ObjectG_capacity_const, std_vectorLcv_DetectionBasedTracker_ObjectG_shrinkToFit,
		std_vectorLcv_DetectionBasedTracker_ObjectG_reserve_size_t, std_vectorLcv_DetectionBasedTracker_ObjectG_remove_size_t,
		std_vectorLcv_DetectionBasedTracker_ObjectG_swap_size_t_size_t, std_vectorLcv_DetectionBasedTracker_ObjectG_clear,
		std_vectorLcv_DetectionBasedTracker_ObjectG_get_const_size_t, std_vectorLcv_DetectionBasedTracker_ObjectG_set_size_t_const_Object,
		std_vectorLcv_DetectionBasedTracker_ObjectG_push_const_Object, std_vectorLcv_DetectionBasedTracker_ObjectG_insert_size_t_const_Object,
	}
	
	vector_non_copy_or_bool! { crate::objdetect::DetectionBasedTracker_Object }
	
	
	pub type VectorOfDetectionROI = core::Vector<crate::objdetect::DetectionROI>;
	
	impl core::Vector<crate::objdetect::DetectionROI> {
		pub fn as_raw_VectorOfDetectionROI(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetectionROI(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::objdetect::DetectionROI,
		std_vectorLcv_DetectionROIG_new_const, std_vectorLcv_DetectionROIG_delete,
		std_vectorLcv_DetectionROIG_len_const, std_vectorLcv_DetectionROIG_isEmpty_const,
		std_vectorLcv_DetectionROIG_capacity_const, std_vectorLcv_DetectionROIG_shrinkToFit,
		std_vectorLcv_DetectionROIG_reserve_size_t, std_vectorLcv_DetectionROIG_remove_size_t,
		std_vectorLcv_DetectionROIG_swap_size_t_size_t, std_vectorLcv_DetectionROIG_clear,
		std_vectorLcv_DetectionROIG_get_const_size_t, std_vectorLcv_DetectionROIG_set_size_t_const_DetectionROI,
		std_vectorLcv_DetectionROIG_push_const_DetectionROI, std_vectorLcv_DetectionROIG_insert_size_t_const_DetectionROI,
	}
	
	vector_non_copy_or_bool! { crate::objdetect::DetectionROI }
	
	vector_boxed_ref! { crate::objdetect::DetectionROI }
	
	vector_extern! { BoxedRef<'_, crate::objdetect::DetectionROI>,
		std_vectorLcv_DetectionROIG_new_const, std_vectorLcv_DetectionROIG_delete,
		std_vectorLcv_DetectionROIG_len_const, std_vectorLcv_DetectionROIG_isEmpty_const,
		std_vectorLcv_DetectionROIG_capacity_const, std_vectorLcv_DetectionROIG_shrinkToFit,
		std_vectorLcv_DetectionROIG_reserve_size_t, std_vectorLcv_DetectionROIG_remove_size_t,
		std_vectorLcv_DetectionROIG_swap_size_t_size_t, std_vectorLcv_DetectionROIG_clear,
		std_vectorLcv_DetectionROIG_get_const_size_t, std_vectorLcv_DetectionROIG_set_size_t_const_DetectionROI,
		std_vectorLcv_DetectionROIG_push_const_DetectionROI, std_vectorLcv_DetectionROIG_insert_size_t_const_DetectionROI,
	}
	
	
	pub type VectorOfDictionary = core::Vector<crate::objdetect::Dictionary>;
	
	impl core::Vector<crate::objdetect::Dictionary> {
		pub fn as_raw_VectorOfDictionary(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDictionary(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::objdetect::Dictionary,
		std_vectorLcv_aruco_DictionaryG_new_const, std_vectorLcv_aruco_DictionaryG_delete,
		std_vectorLcv_aruco_DictionaryG_len_const, std_vectorLcv_aruco_DictionaryG_isEmpty_const,
		std_vectorLcv_aruco_DictionaryG_capacity_const, std_vectorLcv_aruco_DictionaryG_shrinkToFit,
		std_vectorLcv_aruco_DictionaryG_reserve_size_t, std_vectorLcv_aruco_DictionaryG_remove_size_t,
		std_vectorLcv_aruco_DictionaryG_swap_size_t_size_t, std_vectorLcv_aruco_DictionaryG_clear,
		std_vectorLcv_aruco_DictionaryG_get_const_size_t, std_vectorLcv_aruco_DictionaryG_set_size_t_const_Dictionary,
		std_vectorLcv_aruco_DictionaryG_push_const_Dictionary, std_vectorLcv_aruco_DictionaryG_insert_size_t_const_Dictionary,
	}
	
	vector_non_copy_or_bool! { clone crate::objdetect::Dictionary }
	
	vector_boxed_ref! { crate::objdetect::Dictionary }
	
	vector_extern! { BoxedRef<'_, crate::objdetect::Dictionary>,
		std_vectorLcv_aruco_DictionaryG_new_const, std_vectorLcv_aruco_DictionaryG_delete,
		std_vectorLcv_aruco_DictionaryG_len_const, std_vectorLcv_aruco_DictionaryG_isEmpty_const,
		std_vectorLcv_aruco_DictionaryG_capacity_const, std_vectorLcv_aruco_DictionaryG_shrinkToFit,
		std_vectorLcv_aruco_DictionaryG_reserve_size_t, std_vectorLcv_aruco_DictionaryG_remove_size_t,
		std_vectorLcv_aruco_DictionaryG_swap_size_t_size_t, std_vectorLcv_aruco_DictionaryG_clear,
		std_vectorLcv_aruco_DictionaryG_get_const_size_t, std_vectorLcv_aruco_DictionaryG_set_size_t_const_Dictionary,
		std_vectorLcv_aruco_DictionaryG_push_const_Dictionary, std_vectorLcv_aruco_DictionaryG_insert_size_t_const_Dictionary,
	}
	
	
}
#[cfg(ocvrs_has_module_objdetect)]
pub use objdetect_types::*;

#[cfg(ocvrs_has_module_photo)]
mod photo_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfAlignExposures = core::Ptr<crate::photo::AlignExposures>;
	
	ptr_extern! { crate::photo::AlignExposures,
		cv_PtrLcv_AlignExposuresG_delete, cv_PtrLcv_AlignExposuresG_getInnerPtr_const, cv_PtrLcv_AlignExposuresG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::AlignExposures> {
		#[inline] pub fn as_raw_PtrOfAlignExposures(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAlignExposures(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::AlignExposuresTraitConst for core::Ptr<crate::photo::AlignExposures> {
		#[inline] fn as_raw_AlignExposures(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::AlignExposuresTrait for core::Ptr<crate::photo::AlignExposures> {
		#[inline] fn as_raw_mut_AlignExposures(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::AlignExposures> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::AlignExposures> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAlignExposures, core::Ptr<core::Algorithm>, cv_PtrLcv_AlignExposuresG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::AlignExposures> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAlignExposures")
				.finish()
		}
	}
	
	pub type PtrOfAlignMTB = core::Ptr<crate::photo::AlignMTB>;
	
	ptr_extern! { crate::photo::AlignMTB,
		cv_PtrLcv_AlignMTBG_delete, cv_PtrLcv_AlignMTBG_getInnerPtr_const, cv_PtrLcv_AlignMTBG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::AlignMTB> {
		#[inline] pub fn as_raw_PtrOfAlignMTB(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAlignMTB(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::AlignMTBTraitConst for core::Ptr<crate::photo::AlignMTB> {
		#[inline] fn as_raw_AlignMTB(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::AlignMTBTrait for core::Ptr<crate::photo::AlignMTB> {
		#[inline] fn as_raw_mut_AlignMTB(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::AlignMTB> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::AlignMTB> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAlignMTB, core::Ptr<core::Algorithm>, cv_PtrLcv_AlignMTBG_to_PtrOfAlgorithm }
	
	impl crate::photo::AlignExposuresTraitConst for core::Ptr<crate::photo::AlignMTB> {
		#[inline] fn as_raw_AlignExposures(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::AlignExposuresTrait for core::Ptr<crate::photo::AlignMTB> {
		#[inline] fn as_raw_mut_AlignExposures(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAlignMTB, core::Ptr<crate::photo::AlignExposures>, cv_PtrLcv_AlignMTBG_to_PtrOfAlignExposures }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::AlignMTB> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAlignMTB")
				.finish()
		}
	}
	
	pub type PtrOfCalibrateCRF = core::Ptr<crate::photo::CalibrateCRF>;
	
	ptr_extern! { crate::photo::CalibrateCRF,
		cv_PtrLcv_CalibrateCRFG_delete, cv_PtrLcv_CalibrateCRFG_getInnerPtr_const, cv_PtrLcv_CalibrateCRFG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::CalibrateCRF> {
		#[inline] pub fn as_raw_PtrOfCalibrateCRF(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCalibrateCRF(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::CalibrateCRFTraitConst for core::Ptr<crate::photo::CalibrateCRF> {
		#[inline] fn as_raw_CalibrateCRF(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::CalibrateCRFTrait for core::Ptr<crate::photo::CalibrateCRF> {
		#[inline] fn as_raw_mut_CalibrateCRF(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::CalibrateCRF> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::CalibrateCRF> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCalibrateCRF, core::Ptr<core::Algorithm>, cv_PtrLcv_CalibrateCRFG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::CalibrateCRF> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCalibrateCRF")
				.finish()
		}
	}
	
	pub type PtrOfCalibrateDebevec = core::Ptr<crate::photo::CalibrateDebevec>;
	
	ptr_extern! { crate::photo::CalibrateDebevec,
		cv_PtrLcv_CalibrateDebevecG_delete, cv_PtrLcv_CalibrateDebevecG_getInnerPtr_const, cv_PtrLcv_CalibrateDebevecG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] pub fn as_raw_PtrOfCalibrateDebevec(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCalibrateDebevec(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::CalibrateDebevecTraitConst for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] fn as_raw_CalibrateDebevec(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::CalibrateDebevecTrait for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] fn as_raw_mut_CalibrateDebevec(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCalibrateDebevec, core::Ptr<core::Algorithm>, cv_PtrLcv_CalibrateDebevecG_to_PtrOfAlgorithm }
	
	impl crate::photo::CalibrateCRFTraitConst for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] fn as_raw_CalibrateCRF(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::CalibrateCRFTrait for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline] fn as_raw_mut_CalibrateCRF(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCalibrateDebevec, core::Ptr<crate::photo::CalibrateCRF>, cv_PtrLcv_CalibrateDebevecG_to_PtrOfCalibrateCRF }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::CalibrateDebevec> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCalibrateDebevec")
				.finish()
		}
	}
	
	pub type PtrOfCalibrateRobertson = core::Ptr<crate::photo::CalibrateRobertson>;
	
	ptr_extern! { crate::photo::CalibrateRobertson,
		cv_PtrLcv_CalibrateRobertsonG_delete, cv_PtrLcv_CalibrateRobertsonG_getInnerPtr_const, cv_PtrLcv_CalibrateRobertsonG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] pub fn as_raw_PtrOfCalibrateRobertson(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCalibrateRobertson(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::CalibrateRobertsonTraitConst for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] fn as_raw_CalibrateRobertson(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::CalibrateRobertsonTrait for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] fn as_raw_mut_CalibrateRobertson(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCalibrateRobertson, core::Ptr<core::Algorithm>, cv_PtrLcv_CalibrateRobertsonG_to_PtrOfAlgorithm }
	
	impl crate::photo::CalibrateCRFTraitConst for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] fn as_raw_CalibrateCRF(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::CalibrateCRFTrait for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline] fn as_raw_mut_CalibrateCRF(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCalibrateRobertson, core::Ptr<crate::photo::CalibrateCRF>, cv_PtrLcv_CalibrateRobertsonG_to_PtrOfCalibrateCRF }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::CalibrateRobertson> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCalibrateRobertson")
				.finish()
		}
	}
	
	pub type PtrOfMergeDebevec = core::Ptr<crate::photo::MergeDebevec>;
	
	ptr_extern! { crate::photo::MergeDebevec,
		cv_PtrLcv_MergeDebevecG_delete, cv_PtrLcv_MergeDebevecG_getInnerPtr_const, cv_PtrLcv_MergeDebevecG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::MergeDebevec> {
		#[inline] pub fn as_raw_PtrOfMergeDebevec(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMergeDebevec(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::MergeDebevecTraitConst for core::Ptr<crate::photo::MergeDebevec> {
		#[inline] fn as_raw_MergeDebevec(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeDebevecTrait for core::Ptr<crate::photo::MergeDebevec> {
		#[inline] fn as_raw_mut_MergeDebevec(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::MergeDebevec> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::MergeDebevec> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeDebevec, core::Ptr<core::Algorithm>, cv_PtrLcv_MergeDebevecG_to_PtrOfAlgorithm }
	
	impl crate::photo::MergeExposuresTraitConst for core::Ptr<crate::photo::MergeDebevec> {
		#[inline] fn as_raw_MergeExposures(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeExposuresTrait for core::Ptr<crate::photo::MergeDebevec> {
		#[inline] fn as_raw_mut_MergeExposures(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeDebevec, core::Ptr<crate::photo::MergeExposures>, cv_PtrLcv_MergeDebevecG_to_PtrOfMergeExposures }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::MergeDebevec> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMergeDebevec")
				.finish()
		}
	}
	
	pub type PtrOfMergeExposures = core::Ptr<crate::photo::MergeExposures>;
	
	ptr_extern! { crate::photo::MergeExposures,
		cv_PtrLcv_MergeExposuresG_delete, cv_PtrLcv_MergeExposuresG_getInnerPtr_const, cv_PtrLcv_MergeExposuresG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::MergeExposures> {
		#[inline] pub fn as_raw_PtrOfMergeExposures(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMergeExposures(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::MergeExposuresTraitConst for core::Ptr<crate::photo::MergeExposures> {
		#[inline] fn as_raw_MergeExposures(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeExposuresTrait for core::Ptr<crate::photo::MergeExposures> {
		#[inline] fn as_raw_mut_MergeExposures(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::MergeExposures> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::MergeExposures> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeExposures, core::Ptr<core::Algorithm>, cv_PtrLcv_MergeExposuresG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::MergeExposures> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMergeExposures")
				.finish()
		}
	}
	
	pub type PtrOfMergeMertens = core::Ptr<crate::photo::MergeMertens>;
	
	ptr_extern! { crate::photo::MergeMertens,
		cv_PtrLcv_MergeMertensG_delete, cv_PtrLcv_MergeMertensG_getInnerPtr_const, cv_PtrLcv_MergeMertensG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::MergeMertens> {
		#[inline] pub fn as_raw_PtrOfMergeMertens(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMergeMertens(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::MergeMertensTraitConst for core::Ptr<crate::photo::MergeMertens> {
		#[inline] fn as_raw_MergeMertens(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeMertensTrait for core::Ptr<crate::photo::MergeMertens> {
		#[inline] fn as_raw_mut_MergeMertens(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::MergeMertens> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::MergeMertens> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeMertens, core::Ptr<core::Algorithm>, cv_PtrLcv_MergeMertensG_to_PtrOfAlgorithm }
	
	impl crate::photo::MergeExposuresTraitConst for core::Ptr<crate::photo::MergeMertens> {
		#[inline] fn as_raw_MergeExposures(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeExposuresTrait for core::Ptr<crate::photo::MergeMertens> {
		#[inline] fn as_raw_mut_MergeExposures(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeMertens, core::Ptr<crate::photo::MergeExposures>, cv_PtrLcv_MergeMertensG_to_PtrOfMergeExposures }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::MergeMertens> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMergeMertens")
				.finish()
		}
	}
	
	pub type PtrOfMergeRobertson = core::Ptr<crate::photo::MergeRobertson>;
	
	ptr_extern! { crate::photo::MergeRobertson,
		cv_PtrLcv_MergeRobertsonG_delete, cv_PtrLcv_MergeRobertsonG_getInnerPtr_const, cv_PtrLcv_MergeRobertsonG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::MergeRobertson> {
		#[inline] pub fn as_raw_PtrOfMergeRobertson(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMergeRobertson(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::MergeRobertsonTraitConst for core::Ptr<crate::photo::MergeRobertson> {
		#[inline] fn as_raw_MergeRobertson(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeRobertsonTrait for core::Ptr<crate::photo::MergeRobertson> {
		#[inline] fn as_raw_mut_MergeRobertson(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::MergeRobertson> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::MergeRobertson> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeRobertson, core::Ptr<core::Algorithm>, cv_PtrLcv_MergeRobertsonG_to_PtrOfAlgorithm }
	
	impl crate::photo::MergeExposuresTraitConst for core::Ptr<crate::photo::MergeRobertson> {
		#[inline] fn as_raw_MergeExposures(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::MergeExposuresTrait for core::Ptr<crate::photo::MergeRobertson> {
		#[inline] fn as_raw_mut_MergeExposures(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMergeRobertson, core::Ptr<crate::photo::MergeExposures>, cv_PtrLcv_MergeRobertsonG_to_PtrOfMergeExposures }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::MergeRobertson> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMergeRobertson")
				.finish()
		}
	}
	
	pub type PtrOfTonemap = core::Ptr<crate::photo::Tonemap>;
	
	ptr_extern! { crate::photo::Tonemap,
		cv_PtrLcv_TonemapG_delete, cv_PtrLcv_TonemapG_getInnerPtr_const, cv_PtrLcv_TonemapG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::Tonemap> {
		#[inline] pub fn as_raw_PtrOfTonemap(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTonemap(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::TonemapTraitConst for core::Ptr<crate::photo::Tonemap> {
		#[inline] fn as_raw_Tonemap(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapTrait for core::Ptr<crate::photo::Tonemap> {
		#[inline] fn as_raw_mut_Tonemap(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::Tonemap> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::Tonemap> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemap, core::Ptr<core::Algorithm>, cv_PtrLcv_TonemapG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::Tonemap> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTonemap")
				.finish()
		}
	}
	
	pub type PtrOfTonemapDrago = core::Ptr<crate::photo::TonemapDrago>;
	
	ptr_extern! { crate::photo::TonemapDrago,
		cv_PtrLcv_TonemapDragoG_delete, cv_PtrLcv_TonemapDragoG_getInnerPtr_const, cv_PtrLcv_TonemapDragoG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::TonemapDrago> {
		#[inline] pub fn as_raw_PtrOfTonemapDrago(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTonemapDrago(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::TonemapDragoTraitConst for core::Ptr<crate::photo::TonemapDrago> {
		#[inline] fn as_raw_TonemapDrago(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapDragoTrait for core::Ptr<crate::photo::TonemapDrago> {
		#[inline] fn as_raw_mut_TonemapDrago(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::TonemapDrago> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::TonemapDrago> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemapDrago, core::Ptr<core::Algorithm>, cv_PtrLcv_TonemapDragoG_to_PtrOfAlgorithm }
	
	impl crate::photo::TonemapTraitConst for core::Ptr<crate::photo::TonemapDrago> {
		#[inline] fn as_raw_Tonemap(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapTrait for core::Ptr<crate::photo::TonemapDrago> {
		#[inline] fn as_raw_mut_Tonemap(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemapDrago, core::Ptr<crate::photo::Tonemap>, cv_PtrLcv_TonemapDragoG_to_PtrOfTonemap }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::TonemapDrago> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTonemapDrago")
				.finish()
		}
	}
	
	pub type PtrOfTonemapMantiuk = core::Ptr<crate::photo::TonemapMantiuk>;
	
	ptr_extern! { crate::photo::TonemapMantiuk,
		cv_PtrLcv_TonemapMantiukG_delete, cv_PtrLcv_TonemapMantiukG_getInnerPtr_const, cv_PtrLcv_TonemapMantiukG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] pub fn as_raw_PtrOfTonemapMantiuk(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTonemapMantiuk(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::TonemapMantiukTraitConst for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] fn as_raw_TonemapMantiuk(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapMantiukTrait for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] fn as_raw_mut_TonemapMantiuk(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemapMantiuk, core::Ptr<core::Algorithm>, cv_PtrLcv_TonemapMantiukG_to_PtrOfAlgorithm }
	
	impl crate::photo::TonemapTraitConst for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] fn as_raw_Tonemap(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapTrait for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline] fn as_raw_mut_Tonemap(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemapMantiuk, core::Ptr<crate::photo::Tonemap>, cv_PtrLcv_TonemapMantiukG_to_PtrOfTonemap }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::TonemapMantiuk> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTonemapMantiuk")
				.finish()
		}
	}
	
	pub type PtrOfTonemapReinhard = core::Ptr<crate::photo::TonemapReinhard>;
	
	ptr_extern! { crate::photo::TonemapReinhard,
		cv_PtrLcv_TonemapReinhardG_delete, cv_PtrLcv_TonemapReinhardG_getInnerPtr_const, cv_PtrLcv_TonemapReinhardG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] pub fn as_raw_PtrOfTonemapReinhard(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTonemapReinhard(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::photo::TonemapReinhardTraitConst for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] fn as_raw_TonemapReinhard(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapReinhardTrait for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] fn as_raw_mut_TonemapReinhard(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemapReinhard, core::Ptr<core::Algorithm>, cv_PtrLcv_TonemapReinhardG_to_PtrOfAlgorithm }
	
	impl crate::photo::TonemapTraitConst for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] fn as_raw_Tonemap(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::photo::TonemapTrait for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline] fn as_raw_mut_Tonemap(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTonemapReinhard, core::Ptr<crate::photo::Tonemap>, cv_PtrLcv_TonemapReinhardG_to_PtrOfTonemap }
	
	impl std::fmt::Debug for core::Ptr<crate::photo::TonemapReinhard> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTonemapReinhard")
				.finish()
		}
	}
	
}
#[cfg(ocvrs_has_module_photo)]
pub use photo_types::*;

#[cfg(ocvrs_has_module_stitching)]
mod stitching_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfAffineWarper = core::Ptr<crate::stitching::AffineWarper>;
	
	ptr_extern! { crate::stitching::AffineWarper,
		cv_PtrLcv_AffineWarperG_delete, cv_PtrLcv_AffineWarperG_getInnerPtr_const, cv_PtrLcv_AffineWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::AffineWarper, cv_PtrLcv_AffineWarperG_new_const_AffineWarper }
	impl core::Ptr<crate::stitching::AffineWarper> {
		#[inline] pub fn as_raw_PtrOfAffineWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfAffineWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::AffineWarperTraitConst for core::Ptr<crate::stitching::AffineWarper> {
		#[inline] fn as_raw_AffineWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::AffineWarperTrait for core::Ptr<crate::stitching::AffineWarper> {
		#[inline] fn as_raw_mut_AffineWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::AffineWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::AffineWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfAffineWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_AffineWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::AffineWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfAffineWarper")
				.finish()
		}
	}
	
	pub type PtrOfCompressedRectilinearPortraitWarper = core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper>;
	
	ptr_extern! { crate::stitching::CompressedRectilinearPortraitWarper,
		cv_PtrLcv_CompressedRectilinearPortraitWarperG_delete, cv_PtrLcv_CompressedRectilinearPortraitWarperG_getInnerPtr_const, cv_PtrLcv_CompressedRectilinearPortraitWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::CompressedRectilinearPortraitWarper, cv_PtrLcv_CompressedRectilinearPortraitWarperG_new_const_CompressedRectilinearPortraitWarper }
	impl core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper> {
		#[inline] pub fn as_raw_PtrOfCompressedRectilinearPortraitWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCompressedRectilinearPortraitWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::CompressedRectilinearPortraitWarperTraitConst for core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper> {
		#[inline] fn as_raw_CompressedRectilinearPortraitWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::CompressedRectilinearPortraitWarperTrait for core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper> {
		#[inline] fn as_raw_mut_CompressedRectilinearPortraitWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCompressedRectilinearPortraitWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_CompressedRectilinearPortraitWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::CompressedRectilinearPortraitWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCompressedRectilinearPortraitWarper")
				.finish()
		}
	}
	
	pub type PtrOfCompressedRectilinearWarper = core::Ptr<crate::stitching::CompressedRectilinearWarper>;
	
	ptr_extern! { crate::stitching::CompressedRectilinearWarper,
		cv_PtrLcv_CompressedRectilinearWarperG_delete, cv_PtrLcv_CompressedRectilinearWarperG_getInnerPtr_const, cv_PtrLcv_CompressedRectilinearWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::CompressedRectilinearWarper, cv_PtrLcv_CompressedRectilinearWarperG_new_const_CompressedRectilinearWarper }
	impl core::Ptr<crate::stitching::CompressedRectilinearWarper> {
		#[inline] pub fn as_raw_PtrOfCompressedRectilinearWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCompressedRectilinearWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::CompressedRectilinearWarperTraitConst for core::Ptr<crate::stitching::CompressedRectilinearWarper> {
		#[inline] fn as_raw_CompressedRectilinearWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::CompressedRectilinearWarperTrait for core::Ptr<crate::stitching::CompressedRectilinearWarper> {
		#[inline] fn as_raw_mut_CompressedRectilinearWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::CompressedRectilinearWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::CompressedRectilinearWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCompressedRectilinearWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_CompressedRectilinearWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::CompressedRectilinearWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCompressedRectilinearWarper")
				.finish()
		}
	}
	
	pub type PtrOfCylindricalWarper = core::Ptr<crate::stitching::CylindricalWarper>;
	
	ptr_extern! { crate::stitching::CylindricalWarper,
		cv_PtrLcv_CylindricalWarperG_delete, cv_PtrLcv_CylindricalWarperG_getInnerPtr_const, cv_PtrLcv_CylindricalWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::CylindricalWarper, cv_PtrLcv_CylindricalWarperG_new_const_CylindricalWarper }
	impl core::Ptr<crate::stitching::CylindricalWarper> {
		#[inline] pub fn as_raw_PtrOfCylindricalWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfCylindricalWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::CylindricalWarperTraitConst for core::Ptr<crate::stitching::CylindricalWarper> {
		#[inline] fn as_raw_CylindricalWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::CylindricalWarperTrait for core::Ptr<crate::stitching::CylindricalWarper> {
		#[inline] fn as_raw_mut_CylindricalWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::CylindricalWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::CylindricalWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfCylindricalWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_CylindricalWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::CylindricalWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfCylindricalWarper")
				.finish()
		}
	}
	
	pub type PtrOfDetail_AffineBasedEstimator = core::Ptr<crate::stitching::Detail_AffineBasedEstimator>;
	
	ptr_extern! { crate::stitching::Detail_AffineBasedEstimator,
		cv_PtrLcv_detail_AffineBasedEstimatorG_delete, cv_PtrLcv_detail_AffineBasedEstimatorG_getInnerPtr_const, cv_PtrLcv_detail_AffineBasedEstimatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_AffineBasedEstimator, cv_PtrLcv_detail_AffineBasedEstimatorG_new_const_AffineBasedEstimator }
	impl core::Ptr<crate::stitching::Detail_AffineBasedEstimator> {
		#[inline] pub fn as_raw_PtrOfDetail_AffineBasedEstimator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_AffineBasedEstimator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_AffineBasedEstimatorTraitConst for core::Ptr<crate::stitching::Detail_AffineBasedEstimator> {
		#[inline] fn as_raw_Detail_AffineBasedEstimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_AffineBasedEstimatorTrait for core::Ptr<crate::stitching::Detail_AffineBasedEstimator> {
		#[inline] fn as_raw_mut_Detail_AffineBasedEstimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_AffineBasedEstimator> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_AffineBasedEstimator> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_AffineBasedEstimator, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_AffineBasedEstimatorG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_AffineBasedEstimator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_AffineBasedEstimator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_AffineBestOf2NearestMatcher = core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher>;
	
	ptr_extern! { crate::stitching::Detail_AffineBestOf2NearestMatcher,
		cv_PtrLcv_detail_AffineBestOf2NearestMatcherG_delete, cv_PtrLcv_detail_AffineBestOf2NearestMatcherG_getInnerPtr_const, cv_PtrLcv_detail_AffineBestOf2NearestMatcherG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_AffineBestOf2NearestMatcher, cv_PtrLcv_detail_AffineBestOf2NearestMatcherG_new_const_AffineBestOf2NearestMatcher }
	impl core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] pub fn as_raw_PtrOfDetail_AffineBestOf2NearestMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_AffineBestOf2NearestMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_AffineBestOf2NearestMatcherTraitConst for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] fn as_raw_Detail_AffineBestOf2NearestMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_AffineBestOf2NearestMatcherTrait for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] fn as_raw_mut_Detail_AffineBestOf2NearestMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestMatcherTraitConst for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] fn as_raw_Detail_BestOf2NearestMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestMatcherTrait for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] fn as_raw_mut_Detail_BestOf2NearestMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_AffineBestOf2NearestMatcher, core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher>, cv_PtrLcv_detail_AffineBestOf2NearestMatcherG_to_PtrOfDetail_BestOf2NearestMatcher }
	
	impl crate::stitching::Detail_FeaturesMatcherTraitConst for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] fn as_raw_Detail_FeaturesMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_FeaturesMatcherTrait for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline] fn as_raw_mut_Detail_FeaturesMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_AffineBestOf2NearestMatcher, core::Ptr<crate::stitching::Detail_FeaturesMatcher>, cv_PtrLcv_detail_AffineBestOf2NearestMatcherG_to_PtrOfDetail_FeaturesMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_AffineBestOf2NearestMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_AffineBestOf2NearestMatcher")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BestOf2NearestMatcher = core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher>;
	
	ptr_extern! { crate::stitching::Detail_BestOf2NearestMatcher,
		cv_PtrLcv_detail_BestOf2NearestMatcherG_delete, cv_PtrLcv_detail_BestOf2NearestMatcherG_getInnerPtr_const, cv_PtrLcv_detail_BestOf2NearestMatcherG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BestOf2NearestMatcher, cv_PtrLcv_detail_BestOf2NearestMatcherG_new_const_BestOf2NearestMatcher }
	impl core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher> {
		#[inline] pub fn as_raw_PtrOfDetail_BestOf2NearestMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BestOf2NearestMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestMatcherTraitConst for core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher> {
		#[inline] fn as_raw_Detail_BestOf2NearestMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestMatcherTrait for core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher> {
		#[inline] fn as_raw_mut_Detail_BestOf2NearestMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_FeaturesMatcherTraitConst for core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher> {
		#[inline] fn as_raw_Detail_FeaturesMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_FeaturesMatcherTrait for core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher> {
		#[inline] fn as_raw_mut_Detail_FeaturesMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BestOf2NearestMatcher, core::Ptr<crate::stitching::Detail_FeaturesMatcher>, cv_PtrLcv_detail_BestOf2NearestMatcherG_to_PtrOfDetail_FeaturesMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BestOf2NearestMatcher")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BestOf2NearestRangeMatcher = core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher>;
	
	ptr_extern! { crate::stitching::Detail_BestOf2NearestRangeMatcher,
		cv_PtrLcv_detail_BestOf2NearestRangeMatcherG_delete, cv_PtrLcv_detail_BestOf2NearestRangeMatcherG_getInnerPtr_const, cv_PtrLcv_detail_BestOf2NearestRangeMatcherG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BestOf2NearestRangeMatcher, cv_PtrLcv_detail_BestOf2NearestRangeMatcherG_new_const_BestOf2NearestRangeMatcher }
	impl core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] pub fn as_raw_PtrOfDetail_BestOf2NearestRangeMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BestOf2NearestRangeMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestRangeMatcherTraitConst for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] fn as_raw_Detail_BestOf2NearestRangeMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestRangeMatcherTrait for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] fn as_raw_mut_Detail_BestOf2NearestRangeMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestMatcherTraitConst for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] fn as_raw_Detail_BestOf2NearestMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BestOf2NearestMatcherTrait for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] fn as_raw_mut_Detail_BestOf2NearestMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BestOf2NearestRangeMatcher, core::Ptr<crate::stitching::Detail_BestOf2NearestMatcher>, cv_PtrLcv_detail_BestOf2NearestRangeMatcherG_to_PtrOfDetail_BestOf2NearestMatcher }
	
	impl crate::stitching::Detail_FeaturesMatcherTraitConst for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] fn as_raw_Detail_FeaturesMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_FeaturesMatcherTrait for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline] fn as_raw_mut_Detail_FeaturesMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BestOf2NearestRangeMatcher, core::Ptr<crate::stitching::Detail_FeaturesMatcher>, cv_PtrLcv_detail_BestOf2NearestRangeMatcherG_to_PtrOfDetail_FeaturesMatcher }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BestOf2NearestRangeMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BestOf2NearestRangeMatcher")
				.finish()
		}
	}
	
	pub type PtrOfDetail_Blender = core::Ptr<crate::stitching::Detail_Blender>;
	
	ptr_extern! { crate::stitching::Detail_Blender,
		cv_PtrLcv_detail_BlenderG_delete, cv_PtrLcv_detail_BlenderG_getInnerPtr_const, cv_PtrLcv_detail_BlenderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_Blender, cv_PtrLcv_detail_BlenderG_new_const_Blender }
	impl core::Ptr<crate::stitching::Detail_Blender> {
		#[inline] pub fn as_raw_PtrOfDetail_Blender(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_Blender(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlenderTraitConst for core::Ptr<crate::stitching::Detail_Blender> {
		#[inline] fn as_raw_Detail_Blender(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlenderTrait for core::Ptr<crate::stitching::Detail_Blender> {
		#[inline] fn as_raw_mut_Detail_Blender(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_Blender> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_Blender")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BlocksChannelsCompensator = core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator>;
	
	ptr_extern! { crate::stitching::Detail_BlocksChannelsCompensator,
		cv_PtrLcv_detail_BlocksChannelsCompensatorG_delete, cv_PtrLcv_detail_BlocksChannelsCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_BlocksChannelsCompensatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BlocksChannelsCompensator, cv_PtrLcv_detail_BlocksChannelsCompensatorG_new_const_BlocksChannelsCompensator }
	impl core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_BlocksChannelsCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BlocksChannelsCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlocksChannelsCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] fn as_raw_Detail_BlocksChannelsCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlocksChannelsCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] fn as_raw_mut_Detail_BlocksChannelsCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlocksCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] fn as_raw_Detail_BlocksCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlocksCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] fn as_raw_mut_Detail_BlocksCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BlocksChannelsCompensator, core::Ptr<crate::stitching::Detail_BlocksCompensator>, cv_PtrLcv_detail_BlocksChannelsCompensatorG_to_PtrOfDetail_BlocksCompensator }
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BlocksChannelsCompensator, core::Ptr<crate::stitching::Detail_ExposureCompensator>, cv_PtrLcv_detail_BlocksChannelsCompensatorG_to_PtrOfDetail_ExposureCompensator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BlocksChannelsCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BlocksChannelsCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BlocksCompensator = core::Ptr<crate::stitching::Detail_BlocksCompensator>;
	
	ptr_extern! { crate::stitching::Detail_BlocksCompensator,
		cv_PtrLcv_detail_BlocksCompensatorG_delete, cv_PtrLcv_detail_BlocksCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_BlocksCompensatorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_BlocksCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_BlocksCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BlocksCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlocksCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksCompensator> {
		#[inline] fn as_raw_Detail_BlocksCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlocksCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksCompensator> {
		#[inline] fn as_raw_mut_Detail_BlocksCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BlocksCompensator, core::Ptr<crate::stitching::Detail_ExposureCompensator>, cv_PtrLcv_detail_BlocksCompensatorG_to_PtrOfDetail_ExposureCompensator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BlocksCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BlocksCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BlocksGainCompensator = core::Ptr<crate::stitching::Detail_BlocksGainCompensator>;
	
	ptr_extern! { crate::stitching::Detail_BlocksGainCompensator,
		cv_PtrLcv_detail_BlocksGainCompensatorG_delete, cv_PtrLcv_detail_BlocksGainCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_BlocksGainCompensatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BlocksGainCompensator, cv_PtrLcv_detail_BlocksGainCompensatorG_new_const_BlocksGainCompensator }
	impl core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_BlocksGainCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BlocksGainCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlocksGainCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] fn as_raw_Detail_BlocksGainCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlocksGainCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] fn as_raw_mut_Detail_BlocksGainCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlocksCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] fn as_raw_Detail_BlocksCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlocksCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] fn as_raw_mut_Detail_BlocksCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BlocksGainCompensator, core::Ptr<crate::stitching::Detail_BlocksCompensator>, cv_PtrLcv_detail_BlocksGainCompensatorG_to_PtrOfDetail_BlocksCompensator }
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BlocksGainCompensator, core::Ptr<crate::stitching::Detail_ExposureCompensator>, cv_PtrLcv_detail_BlocksGainCompensatorG_to_PtrOfDetail_ExposureCompensator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BlocksGainCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BlocksGainCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BundleAdjusterAffine = core::Ptr<crate::stitching::Detail_BundleAdjusterAffine>;
	
	ptr_extern! { crate::stitching::Detail_BundleAdjusterAffine,
		cv_PtrLcv_detail_BundleAdjusterAffineG_delete, cv_PtrLcv_detail_BundleAdjusterAffineG_getInnerPtr_const, cv_PtrLcv_detail_BundleAdjusterAffineG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BundleAdjusterAffine, cv_PtrLcv_detail_BundleAdjusterAffineG_new_const_BundleAdjusterAffine }
	impl core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] pub fn as_raw_PtrOfDetail_BundleAdjusterAffine(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BundleAdjusterAffine(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterAffineTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] fn as_raw_Detail_BundleAdjusterAffine(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterAffineTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterAffine(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] fn as_raw_Detail_BundleAdjusterBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterAffine, core::Ptr<crate::stitching::Detail_BundleAdjusterBase>, cv_PtrLcv_detail_BundleAdjusterAffineG_to_PtrOfDetail_BundleAdjusterBase }
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterAffine, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_BundleAdjusterAffineG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BundleAdjusterAffine> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BundleAdjusterAffine")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BundleAdjusterAffinePartial = core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial>;
	
	ptr_extern! { crate::stitching::Detail_BundleAdjusterAffinePartial,
		cv_PtrLcv_detail_BundleAdjusterAffinePartialG_delete, cv_PtrLcv_detail_BundleAdjusterAffinePartialG_getInnerPtr_const, cv_PtrLcv_detail_BundleAdjusterAffinePartialG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BundleAdjusterAffinePartial, cv_PtrLcv_detail_BundleAdjusterAffinePartialG_new_const_BundleAdjusterAffinePartial }
	impl core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] pub fn as_raw_PtrOfDetail_BundleAdjusterAffinePartial(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BundleAdjusterAffinePartial(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterAffinePartialTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] fn as_raw_Detail_BundleAdjusterAffinePartial(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterAffinePartialTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterAffinePartial(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] fn as_raw_Detail_BundleAdjusterBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterAffinePartial, core::Ptr<crate::stitching::Detail_BundleAdjusterBase>, cv_PtrLcv_detail_BundleAdjusterAffinePartialG_to_PtrOfDetail_BundleAdjusterBase }
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterAffinePartial, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_BundleAdjusterAffinePartialG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BundleAdjusterAffinePartial> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BundleAdjusterAffinePartial")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BundleAdjusterBase = core::Ptr<crate::stitching::Detail_BundleAdjusterBase>;
	
	ptr_extern! { crate::stitching::Detail_BundleAdjusterBase,
		cv_PtrLcv_detail_BundleAdjusterBaseG_delete, cv_PtrLcv_detail_BundleAdjusterBaseG_getInnerPtr_const, cv_PtrLcv_detail_BundleAdjusterBaseG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_BundleAdjusterBase> {
		#[inline] pub fn as_raw_PtrOfDetail_BundleAdjusterBase(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BundleAdjusterBase(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterBase> {
		#[inline] fn as_raw_Detail_BundleAdjusterBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterBase> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterBase> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterBase> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterBase, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_BundleAdjusterBaseG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BundleAdjusterBase> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BundleAdjusterBase")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BundleAdjusterRay = core::Ptr<crate::stitching::Detail_BundleAdjusterRay>;
	
	ptr_extern! { crate::stitching::Detail_BundleAdjusterRay,
		cv_PtrLcv_detail_BundleAdjusterRayG_delete, cv_PtrLcv_detail_BundleAdjusterRayG_getInnerPtr_const, cv_PtrLcv_detail_BundleAdjusterRayG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BundleAdjusterRay, cv_PtrLcv_detail_BundleAdjusterRayG_new_const_BundleAdjusterRay }
	impl core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] pub fn as_raw_PtrOfDetail_BundleAdjusterRay(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BundleAdjusterRay(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterRayTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] fn as_raw_Detail_BundleAdjusterRay(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterRayTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterRay(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] fn as_raw_Detail_BundleAdjusterBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterRay, core::Ptr<crate::stitching::Detail_BundleAdjusterBase>, cv_PtrLcv_detail_BundleAdjusterRayG_to_PtrOfDetail_BundleAdjusterBase }
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterRay, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_BundleAdjusterRayG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BundleAdjusterRay> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BundleAdjusterRay")
				.finish()
		}
	}
	
	pub type PtrOfDetail_BundleAdjusterReproj = core::Ptr<crate::stitching::Detail_BundleAdjusterReproj>;
	
	ptr_extern! { crate::stitching::Detail_BundleAdjusterReproj,
		cv_PtrLcv_detail_BundleAdjusterReprojG_delete, cv_PtrLcv_detail_BundleAdjusterReprojG_getInnerPtr_const, cv_PtrLcv_detail_BundleAdjusterReprojG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_BundleAdjusterReproj, cv_PtrLcv_detail_BundleAdjusterReprojG_new_const_BundleAdjusterReproj }
	impl core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] pub fn as_raw_PtrOfDetail_BundleAdjusterReproj(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_BundleAdjusterReproj(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterReprojTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] fn as_raw_Detail_BundleAdjusterReproj(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterReprojTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterReproj(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] fn as_raw_Detail_BundleAdjusterBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterReproj, core::Ptr<crate::stitching::Detail_BundleAdjusterBase>, cv_PtrLcv_detail_BundleAdjusterReprojG_to_PtrOfDetail_BundleAdjusterBase }
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_BundleAdjusterReproj, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_BundleAdjusterReprojG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_BundleAdjusterReproj> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_BundleAdjusterReproj")
				.finish()
		}
	}
	
	pub type PtrOfDetail_ChannelsCompensator = core::Ptr<crate::stitching::Detail_ChannelsCompensator>;
	
	ptr_extern! { crate::stitching::Detail_ChannelsCompensator,
		cv_PtrLcv_detail_ChannelsCompensatorG_delete, cv_PtrLcv_detail_ChannelsCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_ChannelsCompensatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_ChannelsCompensator, cv_PtrLcv_detail_ChannelsCompensatorG_new_const_ChannelsCompensator }
	impl core::Ptr<crate::stitching::Detail_ChannelsCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_ChannelsCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_ChannelsCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_ChannelsCompensatorTraitConst for core::Ptr<crate::stitching::Detail_ChannelsCompensator> {
		#[inline] fn as_raw_Detail_ChannelsCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ChannelsCompensatorTrait for core::Ptr<crate::stitching::Detail_ChannelsCompensator> {
		#[inline] fn as_raw_mut_Detail_ChannelsCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_ChannelsCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_ChannelsCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_ChannelsCompensator, core::Ptr<crate::stitching::Detail_ExposureCompensator>, cv_PtrLcv_detail_ChannelsCompensatorG_to_PtrOfDetail_ExposureCompensator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_ChannelsCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_ChannelsCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_DpSeamFinder = core::Ptr<crate::stitching::Detail_DpSeamFinder>;
	
	ptr_extern! { crate::stitching::Detail_DpSeamFinder,
		cv_PtrLcv_detail_DpSeamFinderG_delete, cv_PtrLcv_detail_DpSeamFinderG_getInnerPtr_const, cv_PtrLcv_detail_DpSeamFinderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_DpSeamFinder, cv_PtrLcv_detail_DpSeamFinderG_new_const_DpSeamFinder }
	impl core::Ptr<crate::stitching::Detail_DpSeamFinder> {
		#[inline] pub fn as_raw_PtrOfDetail_DpSeamFinder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_DpSeamFinder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_DpSeamFinderTraitConst for core::Ptr<crate::stitching::Detail_DpSeamFinder> {
		#[inline] fn as_raw_Detail_DpSeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_DpSeamFinderTrait for core::Ptr<crate::stitching::Detail_DpSeamFinder> {
		#[inline] fn as_raw_mut_Detail_DpSeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_SeamFinderTraitConst for core::Ptr<crate::stitching::Detail_DpSeamFinder> {
		#[inline] fn as_raw_Detail_SeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_SeamFinderTrait for core::Ptr<crate::stitching::Detail_DpSeamFinder> {
		#[inline] fn as_raw_mut_Detail_SeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_DpSeamFinder, core::Ptr<crate::stitching::Detail_SeamFinder>, cv_PtrLcv_detail_DpSeamFinderG_to_PtrOfDetail_SeamFinder }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_DpSeamFinder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_DpSeamFinder")
				.finish()
		}
	}
	
	pub type PtrOfDetail_Estimator = core::Ptr<crate::stitching::Detail_Estimator>;
	
	ptr_extern! { crate::stitching::Detail_Estimator,
		cv_PtrLcv_detail_EstimatorG_delete, cv_PtrLcv_detail_EstimatorG_getInnerPtr_const, cv_PtrLcv_detail_EstimatorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_Estimator> {
		#[inline] pub fn as_raw_PtrOfDetail_Estimator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_Estimator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_Estimator> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_Estimator> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_Estimator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_Estimator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_ExposureCompensator = core::Ptr<crate::stitching::Detail_ExposureCompensator>;
	
	ptr_extern! { crate::stitching::Detail_ExposureCompensator,
		cv_PtrLcv_detail_ExposureCompensatorG_delete, cv_PtrLcv_detail_ExposureCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_ExposureCompensatorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_ExposureCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_ExposureCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_ExposureCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_ExposureCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_ExposureCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_ExposureCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_ExposureCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_FeatherBlender = core::Ptr<crate::stitching::Detail_FeatherBlender>;
	
	ptr_extern! { crate::stitching::Detail_FeatherBlender,
		cv_PtrLcv_detail_FeatherBlenderG_delete, cv_PtrLcv_detail_FeatherBlenderG_getInnerPtr_const, cv_PtrLcv_detail_FeatherBlenderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_FeatherBlender, cv_PtrLcv_detail_FeatherBlenderG_new_const_FeatherBlender }
	impl core::Ptr<crate::stitching::Detail_FeatherBlender> {
		#[inline] pub fn as_raw_PtrOfDetail_FeatherBlender(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_FeatherBlender(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_FeatherBlenderTraitConst for core::Ptr<crate::stitching::Detail_FeatherBlender> {
		#[inline] fn as_raw_Detail_FeatherBlender(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_FeatherBlenderTrait for core::Ptr<crate::stitching::Detail_FeatherBlender> {
		#[inline] fn as_raw_mut_Detail_FeatherBlender(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlenderTraitConst for core::Ptr<crate::stitching::Detail_FeatherBlender> {
		#[inline] fn as_raw_Detail_Blender(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlenderTrait for core::Ptr<crate::stitching::Detail_FeatherBlender> {
		#[inline] fn as_raw_mut_Detail_Blender(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_FeatherBlender, core::Ptr<crate::stitching::Detail_Blender>, cv_PtrLcv_detail_FeatherBlenderG_to_PtrOfDetail_Blender }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_FeatherBlender> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_FeatherBlender")
				.finish()
		}
	}
	
	pub type PtrOfDetail_FeaturesMatcher = core::Ptr<crate::stitching::Detail_FeaturesMatcher>;
	
	ptr_extern! { crate::stitching::Detail_FeaturesMatcher,
		cv_PtrLcv_detail_FeaturesMatcherG_delete, cv_PtrLcv_detail_FeaturesMatcherG_getInnerPtr_const, cv_PtrLcv_detail_FeaturesMatcherG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_FeaturesMatcher> {
		#[inline] pub fn as_raw_PtrOfDetail_FeaturesMatcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_FeaturesMatcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_FeaturesMatcherTraitConst for core::Ptr<crate::stitching::Detail_FeaturesMatcher> {
		#[inline] fn as_raw_Detail_FeaturesMatcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_FeaturesMatcherTrait for core::Ptr<crate::stitching::Detail_FeaturesMatcher> {
		#[inline] fn as_raw_mut_Detail_FeaturesMatcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_FeaturesMatcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_FeaturesMatcher")
				.finish()
		}
	}
	
	pub type PtrOfDetail_GainCompensator = core::Ptr<crate::stitching::Detail_GainCompensator>;
	
	ptr_extern! { crate::stitching::Detail_GainCompensator,
		cv_PtrLcv_detail_GainCompensatorG_delete, cv_PtrLcv_detail_GainCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_GainCompensatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_GainCompensator, cv_PtrLcv_detail_GainCompensatorG_new_const_GainCompensator }
	impl core::Ptr<crate::stitching::Detail_GainCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_GainCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_GainCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_GainCompensatorTraitConst for core::Ptr<crate::stitching::Detail_GainCompensator> {
		#[inline] fn as_raw_Detail_GainCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_GainCompensatorTrait for core::Ptr<crate::stitching::Detail_GainCompensator> {
		#[inline] fn as_raw_mut_Detail_GainCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_GainCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_GainCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_GainCompensator, core::Ptr<crate::stitching::Detail_ExposureCompensator>, cv_PtrLcv_detail_GainCompensatorG_to_PtrOfDetail_ExposureCompensator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_GainCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_GainCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_GraphCutSeamFinder = core::Ptr<crate::stitching::Detail_GraphCutSeamFinder>;
	
	ptr_extern! { crate::stitching::Detail_GraphCutSeamFinder,
		cv_PtrLcv_detail_GraphCutSeamFinderG_delete, cv_PtrLcv_detail_GraphCutSeamFinderG_getInnerPtr_const, cv_PtrLcv_detail_GraphCutSeamFinderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_GraphCutSeamFinder, cv_PtrLcv_detail_GraphCutSeamFinderG_new_const_GraphCutSeamFinder }
	impl core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] pub fn as_raw_PtrOfDetail_GraphCutSeamFinder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_GraphCutSeamFinder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_GraphCutSeamFinderTraitConst for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] fn as_raw_Detail_GraphCutSeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_GraphCutSeamFinderTrait for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] fn as_raw_mut_Detail_GraphCutSeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_GraphCutSeamFinderBaseTraitConst for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] fn as_raw_Detail_GraphCutSeamFinderBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_GraphCutSeamFinderBaseTrait for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] fn as_raw_mut_Detail_GraphCutSeamFinderBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_GraphCutSeamFinder, core::Ptr<crate::stitching::Detail_GraphCutSeamFinderBase>, cv_PtrLcv_detail_GraphCutSeamFinderG_to_PtrOfDetail_GraphCutSeamFinderBase }
	
	impl crate::stitching::Detail_SeamFinderTraitConst for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] fn as_raw_Detail_SeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_SeamFinderTrait for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline] fn as_raw_mut_Detail_SeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_GraphCutSeamFinder, core::Ptr<crate::stitching::Detail_SeamFinder>, cv_PtrLcv_detail_GraphCutSeamFinderG_to_PtrOfDetail_SeamFinder }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_GraphCutSeamFinder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_GraphCutSeamFinder")
				.finish()
		}
	}
	
	pub type PtrOfDetail_GraphCutSeamFinderBase = core::Ptr<crate::stitching::Detail_GraphCutSeamFinderBase>;
	
	ptr_extern! { crate::stitching::Detail_GraphCutSeamFinderBase,
		cv_PtrLcv_detail_GraphCutSeamFinderBaseG_delete, cv_PtrLcv_detail_GraphCutSeamFinderBaseG_getInnerPtr_const, cv_PtrLcv_detail_GraphCutSeamFinderBaseG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_GraphCutSeamFinderBase, cv_PtrLcv_detail_GraphCutSeamFinderBaseG_new_const_GraphCutSeamFinderBase }
	impl core::Ptr<crate::stitching::Detail_GraphCutSeamFinderBase> {
		#[inline] pub fn as_raw_PtrOfDetail_GraphCutSeamFinderBase(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_GraphCutSeamFinderBase(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_GraphCutSeamFinderBaseTraitConst for core::Ptr<crate::stitching::Detail_GraphCutSeamFinderBase> {
		#[inline] fn as_raw_Detail_GraphCutSeamFinderBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_GraphCutSeamFinderBaseTrait for core::Ptr<crate::stitching::Detail_GraphCutSeamFinderBase> {
		#[inline] fn as_raw_mut_Detail_GraphCutSeamFinderBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_GraphCutSeamFinderBase> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_GraphCutSeamFinderBase")
				.finish()
		}
	}
	
	pub type PtrOfDetail_HomographyBasedEstimator = core::Ptr<crate::stitching::Detail_HomographyBasedEstimator>;
	
	ptr_extern! { crate::stitching::Detail_HomographyBasedEstimator,
		cv_PtrLcv_detail_HomographyBasedEstimatorG_delete, cv_PtrLcv_detail_HomographyBasedEstimatorG_getInnerPtr_const, cv_PtrLcv_detail_HomographyBasedEstimatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_HomographyBasedEstimator, cv_PtrLcv_detail_HomographyBasedEstimatorG_new_const_HomographyBasedEstimator }
	impl core::Ptr<crate::stitching::Detail_HomographyBasedEstimator> {
		#[inline] pub fn as_raw_PtrOfDetail_HomographyBasedEstimator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_HomographyBasedEstimator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_HomographyBasedEstimatorTraitConst for core::Ptr<crate::stitching::Detail_HomographyBasedEstimator> {
		#[inline] fn as_raw_Detail_HomographyBasedEstimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_HomographyBasedEstimatorTrait for core::Ptr<crate::stitching::Detail_HomographyBasedEstimator> {
		#[inline] fn as_raw_mut_Detail_HomographyBasedEstimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_HomographyBasedEstimator> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_HomographyBasedEstimator> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_HomographyBasedEstimator, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_HomographyBasedEstimatorG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_HomographyBasedEstimator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_HomographyBasedEstimator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_MultiBandBlender = core::Ptr<crate::stitching::Detail_MultiBandBlender>;
	
	ptr_extern! { crate::stitching::Detail_MultiBandBlender,
		cv_PtrLcv_detail_MultiBandBlenderG_delete, cv_PtrLcv_detail_MultiBandBlenderG_getInnerPtr_const, cv_PtrLcv_detail_MultiBandBlenderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_MultiBandBlender, cv_PtrLcv_detail_MultiBandBlenderG_new_const_MultiBandBlender }
	impl core::Ptr<crate::stitching::Detail_MultiBandBlender> {
		#[inline] pub fn as_raw_PtrOfDetail_MultiBandBlender(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_MultiBandBlender(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_MultiBandBlenderTraitConst for core::Ptr<crate::stitching::Detail_MultiBandBlender> {
		#[inline] fn as_raw_Detail_MultiBandBlender(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_MultiBandBlenderTrait for core::Ptr<crate::stitching::Detail_MultiBandBlender> {
		#[inline] fn as_raw_mut_Detail_MultiBandBlender(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BlenderTraitConst for core::Ptr<crate::stitching::Detail_MultiBandBlender> {
		#[inline] fn as_raw_Detail_Blender(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BlenderTrait for core::Ptr<crate::stitching::Detail_MultiBandBlender> {
		#[inline] fn as_raw_mut_Detail_Blender(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_MultiBandBlender, core::Ptr<crate::stitching::Detail_Blender>, cv_PtrLcv_detail_MultiBandBlenderG_to_PtrOfDetail_Blender }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_MultiBandBlender> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_MultiBandBlender")
				.finish()
		}
	}
	
	pub type PtrOfDetail_NoBundleAdjuster = core::Ptr<crate::stitching::Detail_NoBundleAdjuster>;
	
	ptr_extern! { crate::stitching::Detail_NoBundleAdjuster,
		cv_PtrLcv_detail_NoBundleAdjusterG_delete, cv_PtrLcv_detail_NoBundleAdjusterG_getInnerPtr_const, cv_PtrLcv_detail_NoBundleAdjusterG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_NoBundleAdjuster, cv_PtrLcv_detail_NoBundleAdjusterG_new_const_NoBundleAdjuster }
	impl core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] pub fn as_raw_PtrOfDetail_NoBundleAdjuster(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_NoBundleAdjuster(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_NoBundleAdjusterTraitConst for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] fn as_raw_Detail_NoBundleAdjuster(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_NoBundleAdjusterTrait for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] fn as_raw_mut_Detail_NoBundleAdjuster(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTraitConst for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] fn as_raw_Detail_BundleAdjusterBase(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_BundleAdjusterBaseTrait for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] fn as_raw_mut_Detail_BundleAdjusterBase(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_NoBundleAdjuster, core::Ptr<crate::stitching::Detail_BundleAdjusterBase>, cv_PtrLcv_detail_NoBundleAdjusterG_to_PtrOfDetail_BundleAdjusterBase }
	
	impl crate::stitching::Detail_EstimatorTraitConst for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] fn as_raw_Detail_Estimator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_EstimatorTrait for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline] fn as_raw_mut_Detail_Estimator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_NoBundleAdjuster, core::Ptr<crate::stitching::Detail_Estimator>, cv_PtrLcv_detail_NoBundleAdjusterG_to_PtrOfDetail_Estimator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_NoBundleAdjuster> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_NoBundleAdjuster")
				.finish()
		}
	}
	
	pub type PtrOfDetail_NoExposureCompensator = core::Ptr<crate::stitching::Detail_NoExposureCompensator>;
	
	ptr_extern! { crate::stitching::Detail_NoExposureCompensator,
		cv_PtrLcv_detail_NoExposureCompensatorG_delete, cv_PtrLcv_detail_NoExposureCompensatorG_getInnerPtr_const, cv_PtrLcv_detail_NoExposureCompensatorG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_NoExposureCompensator, cv_PtrLcv_detail_NoExposureCompensatorG_new_const_NoExposureCompensator }
	impl core::Ptr<crate::stitching::Detail_NoExposureCompensator> {
		#[inline] pub fn as_raw_PtrOfDetail_NoExposureCompensator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_NoExposureCompensator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_NoExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_NoExposureCompensator> {
		#[inline] fn as_raw_Detail_NoExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_NoExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_NoExposureCompensator> {
		#[inline] fn as_raw_mut_Detail_NoExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTraitConst for core::Ptr<crate::stitching::Detail_NoExposureCompensator> {
		#[inline] fn as_raw_Detail_ExposureCompensator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_ExposureCompensatorTrait for core::Ptr<crate::stitching::Detail_NoExposureCompensator> {
		#[inline] fn as_raw_mut_Detail_ExposureCompensator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_NoExposureCompensator, core::Ptr<crate::stitching::Detail_ExposureCompensator>, cv_PtrLcv_detail_NoExposureCompensatorG_to_PtrOfDetail_ExposureCompensator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_NoExposureCompensator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_NoExposureCompensator")
				.finish()
		}
	}
	
	pub type PtrOfDetail_NoSeamFinder = core::Ptr<crate::stitching::Detail_NoSeamFinder>;
	
	ptr_extern! { crate::stitching::Detail_NoSeamFinder,
		cv_PtrLcv_detail_NoSeamFinderG_delete, cv_PtrLcv_detail_NoSeamFinderG_getInnerPtr_const, cv_PtrLcv_detail_NoSeamFinderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_NoSeamFinder, cv_PtrLcv_detail_NoSeamFinderG_new_const_NoSeamFinder }
	impl core::Ptr<crate::stitching::Detail_NoSeamFinder> {
		#[inline] pub fn as_raw_PtrOfDetail_NoSeamFinder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_NoSeamFinder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_NoSeamFinderTraitConst for core::Ptr<crate::stitching::Detail_NoSeamFinder> {
		#[inline] fn as_raw_Detail_NoSeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_NoSeamFinderTrait for core::Ptr<crate::stitching::Detail_NoSeamFinder> {
		#[inline] fn as_raw_mut_Detail_NoSeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_SeamFinderTraitConst for core::Ptr<crate::stitching::Detail_NoSeamFinder> {
		#[inline] fn as_raw_Detail_SeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_SeamFinderTrait for core::Ptr<crate::stitching::Detail_NoSeamFinder> {
		#[inline] fn as_raw_mut_Detail_SeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_NoSeamFinder, core::Ptr<crate::stitching::Detail_SeamFinder>, cv_PtrLcv_detail_NoSeamFinderG_to_PtrOfDetail_SeamFinder }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_NoSeamFinder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_NoSeamFinder")
				.finish()
		}
	}
	
	pub type PtrOfDetail_PairwiseSeamFinder = core::Ptr<crate::stitching::Detail_PairwiseSeamFinder>;
	
	ptr_extern! { crate::stitching::Detail_PairwiseSeamFinder,
		cv_PtrLcv_detail_PairwiseSeamFinderG_delete, cv_PtrLcv_detail_PairwiseSeamFinderG_getInnerPtr_const, cv_PtrLcv_detail_PairwiseSeamFinderG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_PairwiseSeamFinder> {
		#[inline] pub fn as_raw_PtrOfDetail_PairwiseSeamFinder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_PairwiseSeamFinder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_PairwiseSeamFinderTraitConst for core::Ptr<crate::stitching::Detail_PairwiseSeamFinder> {
		#[inline] fn as_raw_Detail_PairwiseSeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_PairwiseSeamFinderTrait for core::Ptr<crate::stitching::Detail_PairwiseSeamFinder> {
		#[inline] fn as_raw_mut_Detail_PairwiseSeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_SeamFinderTraitConst for core::Ptr<crate::stitching::Detail_PairwiseSeamFinder> {
		#[inline] fn as_raw_Detail_SeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_SeamFinderTrait for core::Ptr<crate::stitching::Detail_PairwiseSeamFinder> {
		#[inline] fn as_raw_mut_Detail_SeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_PairwiseSeamFinder, core::Ptr<crate::stitching::Detail_SeamFinder>, cv_PtrLcv_detail_PairwiseSeamFinderG_to_PtrOfDetail_SeamFinder }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_PairwiseSeamFinder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_PairwiseSeamFinder")
				.finish()
		}
	}
	
	pub type PtrOfDetail_RotationWarper = core::Ptr<crate::stitching::Detail_RotationWarper>;
	
	ptr_extern! { crate::stitching::Detail_RotationWarper,
		cv_PtrLcv_detail_RotationWarperG_delete, cv_PtrLcv_detail_RotationWarperG_getInnerPtr_const, cv_PtrLcv_detail_RotationWarperG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_RotationWarper> {
		#[inline] pub fn as_raw_PtrOfDetail_RotationWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_RotationWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_RotationWarperTraitConst for core::Ptr<crate::stitching::Detail_RotationWarper> {
		#[inline] fn as_raw_Detail_RotationWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_RotationWarperTrait for core::Ptr<crate::stitching::Detail_RotationWarper> {
		#[inline] fn as_raw_mut_Detail_RotationWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_RotationWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_RotationWarper")
				.finish()
		}
	}
	
	pub type PtrOfDetail_SeamFinder = core::Ptr<crate::stitching::Detail_SeamFinder>;
	
	ptr_extern! { crate::stitching::Detail_SeamFinder,
		cv_PtrLcv_detail_SeamFinderG_delete, cv_PtrLcv_detail_SeamFinderG_getInnerPtr_const, cv_PtrLcv_detail_SeamFinderG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::Detail_SeamFinder> {
		#[inline] pub fn as_raw_PtrOfDetail_SeamFinder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_SeamFinder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_SeamFinderTraitConst for core::Ptr<crate::stitching::Detail_SeamFinder> {
		#[inline] fn as_raw_Detail_SeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_SeamFinderTrait for core::Ptr<crate::stitching::Detail_SeamFinder> {
		#[inline] fn as_raw_mut_Detail_SeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_SeamFinder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_SeamFinder")
				.finish()
		}
	}
	
	pub type PtrOfDetail_VoronoiSeamFinder = core::Ptr<crate::stitching::Detail_VoronoiSeamFinder>;
	
	ptr_extern! { crate::stitching::Detail_VoronoiSeamFinder,
		cv_PtrLcv_detail_VoronoiSeamFinderG_delete, cv_PtrLcv_detail_VoronoiSeamFinderG_getInnerPtr_const, cv_PtrLcv_detail_VoronoiSeamFinderG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Detail_VoronoiSeamFinder, cv_PtrLcv_detail_VoronoiSeamFinderG_new_const_VoronoiSeamFinder }
	impl core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] pub fn as_raw_PtrOfDetail_VoronoiSeamFinder(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDetail_VoronoiSeamFinder(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::Detail_VoronoiSeamFinderTraitConst for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] fn as_raw_Detail_VoronoiSeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_VoronoiSeamFinderTrait for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] fn as_raw_mut_Detail_VoronoiSeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::Detail_PairwiseSeamFinderTraitConst for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] fn as_raw_Detail_PairwiseSeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_PairwiseSeamFinderTrait for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] fn as_raw_mut_Detail_PairwiseSeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_VoronoiSeamFinder, core::Ptr<crate::stitching::Detail_PairwiseSeamFinder>, cv_PtrLcv_detail_VoronoiSeamFinderG_to_PtrOfDetail_PairwiseSeamFinder }
	
	impl crate::stitching::Detail_SeamFinderTraitConst for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] fn as_raw_Detail_SeamFinder(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::Detail_SeamFinderTrait for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline] fn as_raw_mut_Detail_SeamFinder(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDetail_VoronoiSeamFinder, core::Ptr<crate::stitching::Detail_SeamFinder>, cv_PtrLcv_detail_VoronoiSeamFinderG_to_PtrOfDetail_SeamFinder }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Detail_VoronoiSeamFinder> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDetail_VoronoiSeamFinder")
				.finish()
		}
	}
	
	pub type PtrOfFisheyeWarper = core::Ptr<crate::stitching::FisheyeWarper>;
	
	ptr_extern! { crate::stitching::FisheyeWarper,
		cv_PtrLcv_FisheyeWarperG_delete, cv_PtrLcv_FisheyeWarperG_getInnerPtr_const, cv_PtrLcv_FisheyeWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::FisheyeWarper, cv_PtrLcv_FisheyeWarperG_new_const_FisheyeWarper }
	impl core::Ptr<crate::stitching::FisheyeWarper> {
		#[inline] pub fn as_raw_PtrOfFisheyeWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFisheyeWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::FisheyeWarperTraitConst for core::Ptr<crate::stitching::FisheyeWarper> {
		#[inline] fn as_raw_FisheyeWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::FisheyeWarperTrait for core::Ptr<crate::stitching::FisheyeWarper> {
		#[inline] fn as_raw_mut_FisheyeWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::FisheyeWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::FisheyeWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFisheyeWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_FisheyeWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::FisheyeWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFisheyeWarper")
				.finish()
		}
	}
	
	pub type PtrOfMercatorWarper = core::Ptr<crate::stitching::MercatorWarper>;
	
	ptr_extern! { crate::stitching::MercatorWarper,
		cv_PtrLcv_MercatorWarperG_delete, cv_PtrLcv_MercatorWarperG_getInnerPtr_const, cv_PtrLcv_MercatorWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::MercatorWarper, cv_PtrLcv_MercatorWarperG_new_const_MercatorWarper }
	impl core::Ptr<crate::stitching::MercatorWarper> {
		#[inline] pub fn as_raw_PtrOfMercatorWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfMercatorWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::MercatorWarperTraitConst for core::Ptr<crate::stitching::MercatorWarper> {
		#[inline] fn as_raw_MercatorWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::MercatorWarperTrait for core::Ptr<crate::stitching::MercatorWarper> {
		#[inline] fn as_raw_mut_MercatorWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::MercatorWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::MercatorWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfMercatorWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_MercatorWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::MercatorWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfMercatorWarper")
				.finish()
		}
	}
	
	pub type PtrOfPaniniPortraitWarper = core::Ptr<crate::stitching::PaniniPortraitWarper>;
	
	ptr_extern! { crate::stitching::PaniniPortraitWarper,
		cv_PtrLcv_PaniniPortraitWarperG_delete, cv_PtrLcv_PaniniPortraitWarperG_getInnerPtr_const, cv_PtrLcv_PaniniPortraitWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::PaniniPortraitWarper, cv_PtrLcv_PaniniPortraitWarperG_new_const_PaniniPortraitWarper }
	impl core::Ptr<crate::stitching::PaniniPortraitWarper> {
		#[inline] pub fn as_raw_PtrOfPaniniPortraitWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPaniniPortraitWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::PaniniPortraitWarperTraitConst for core::Ptr<crate::stitching::PaniniPortraitWarper> {
		#[inline] fn as_raw_PaniniPortraitWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::PaniniPortraitWarperTrait for core::Ptr<crate::stitching::PaniniPortraitWarper> {
		#[inline] fn as_raw_mut_PaniniPortraitWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::PaniniPortraitWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::PaniniPortraitWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPaniniPortraitWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_PaniniPortraitWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::PaniniPortraitWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPaniniPortraitWarper")
				.finish()
		}
	}
	
	pub type PtrOfPaniniWarper = core::Ptr<crate::stitching::PaniniWarper>;
	
	ptr_extern! { crate::stitching::PaniniWarper,
		cv_PtrLcv_PaniniWarperG_delete, cv_PtrLcv_PaniniWarperG_getInnerPtr_const, cv_PtrLcv_PaniniWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::PaniniWarper, cv_PtrLcv_PaniniWarperG_new_const_PaniniWarper }
	impl core::Ptr<crate::stitching::PaniniWarper> {
		#[inline] pub fn as_raw_PtrOfPaniniWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPaniniWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::PaniniWarperTraitConst for core::Ptr<crate::stitching::PaniniWarper> {
		#[inline] fn as_raw_PaniniWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::PaniniWarperTrait for core::Ptr<crate::stitching::PaniniWarper> {
		#[inline] fn as_raw_mut_PaniniWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::PaniniWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::PaniniWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPaniniWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_PaniniWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::PaniniWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPaniniWarper")
				.finish()
		}
	}
	
	pub type PtrOfPlaneWarper = core::Ptr<crate::stitching::PlaneWarper>;
	
	ptr_extern! { crate::stitching::PlaneWarper,
		cv_PtrLcv_PlaneWarperG_delete, cv_PtrLcv_PlaneWarperG_getInnerPtr_const, cv_PtrLcv_PlaneWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::PlaneWarper, cv_PtrLcv_PlaneWarperG_new_const_PlaneWarper }
	impl core::Ptr<crate::stitching::PlaneWarper> {
		#[inline] pub fn as_raw_PtrOfPlaneWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfPlaneWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::PlaneWarperTraitConst for core::Ptr<crate::stitching::PlaneWarper> {
		#[inline] fn as_raw_PlaneWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::PlaneWarperTrait for core::Ptr<crate::stitching::PlaneWarper> {
		#[inline] fn as_raw_mut_PlaneWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::PlaneWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::PlaneWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfPlaneWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_PlaneWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::PlaneWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfPlaneWarper")
				.finish()
		}
	}
	
	pub type PtrOfSphericalWarper = core::Ptr<crate::stitching::SphericalWarper>;
	
	ptr_extern! { crate::stitching::SphericalWarper,
		cv_PtrLcv_SphericalWarperG_delete, cv_PtrLcv_SphericalWarperG_getInnerPtr_const, cv_PtrLcv_SphericalWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::SphericalWarper, cv_PtrLcv_SphericalWarperG_new_const_SphericalWarper }
	impl core::Ptr<crate::stitching::SphericalWarper> {
		#[inline] pub fn as_raw_PtrOfSphericalWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSphericalWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::SphericalWarperTraitConst for core::Ptr<crate::stitching::SphericalWarper> {
		#[inline] fn as_raw_SphericalWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::SphericalWarperTrait for core::Ptr<crate::stitching::SphericalWarper> {
		#[inline] fn as_raw_mut_SphericalWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::SphericalWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::SphericalWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSphericalWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_SphericalWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::SphericalWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSphericalWarper")
				.finish()
		}
	}
	
	pub type PtrOfStereographicWarper = core::Ptr<crate::stitching::StereographicWarper>;
	
	ptr_extern! { crate::stitching::StereographicWarper,
		cv_PtrLcv_StereographicWarperG_delete, cv_PtrLcv_StereographicWarperG_getInnerPtr_const, cv_PtrLcv_StereographicWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::StereographicWarper, cv_PtrLcv_StereographicWarperG_new_const_StereographicWarper }
	impl core::Ptr<crate::stitching::StereographicWarper> {
		#[inline] pub fn as_raw_PtrOfStereographicWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfStereographicWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::StereographicWarperTraitConst for core::Ptr<crate::stitching::StereographicWarper> {
		#[inline] fn as_raw_StereographicWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::StereographicWarperTrait for core::Ptr<crate::stitching::StereographicWarper> {
		#[inline] fn as_raw_mut_StereographicWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::StereographicWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::StereographicWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfStereographicWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_StereographicWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::StereographicWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfStereographicWarper")
				.finish()
		}
	}
	
	pub type PtrOfStitcher = core::Ptr<crate::stitching::Stitcher>;
	
	ptr_extern! { crate::stitching::Stitcher,
		cv_PtrLcv_StitcherG_delete, cv_PtrLcv_StitcherG_getInnerPtr_const, cv_PtrLcv_StitcherG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::Stitcher, cv_PtrLcv_StitcherG_new_const_Stitcher }
	impl core::Ptr<crate::stitching::Stitcher> {
		#[inline] pub fn as_raw_PtrOfStitcher(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfStitcher(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::StitcherTraitConst for core::Ptr<crate::stitching::Stitcher> {
		#[inline] fn as_raw_Stitcher(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::StitcherTrait for core::Ptr<crate::stitching::Stitcher> {
		#[inline] fn as_raw_mut_Stitcher(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::Stitcher> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfStitcher")
				.finish()
		}
	}
	
	pub type PtrOfTransverseMercatorWarper = core::Ptr<crate::stitching::TransverseMercatorWarper>;
	
	ptr_extern! { crate::stitching::TransverseMercatorWarper,
		cv_PtrLcv_TransverseMercatorWarperG_delete, cv_PtrLcv_TransverseMercatorWarperG_getInnerPtr_const, cv_PtrLcv_TransverseMercatorWarperG_getInnerPtrMut
	}
	
	ptr_extern_ctor! { crate::stitching::TransverseMercatorWarper, cv_PtrLcv_TransverseMercatorWarperG_new_const_TransverseMercatorWarper }
	impl core::Ptr<crate::stitching::TransverseMercatorWarper> {
		#[inline] pub fn as_raw_PtrOfTransverseMercatorWarper(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTransverseMercatorWarper(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::TransverseMercatorWarperTraitConst for core::Ptr<crate::stitching::TransverseMercatorWarper> {
		#[inline] fn as_raw_TransverseMercatorWarper(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::TransverseMercatorWarperTrait for core::Ptr<crate::stitching::TransverseMercatorWarper> {
		#[inline] fn as_raw_mut_TransverseMercatorWarper(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::TransverseMercatorWarper> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::TransverseMercatorWarper> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTransverseMercatorWarper, core::Ptr<crate::stitching::WarperCreator>, cv_PtrLcv_TransverseMercatorWarperG_to_PtrOfWarperCreator }
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::TransverseMercatorWarper> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTransverseMercatorWarper")
				.finish()
		}
	}
	
	pub type PtrOfWarperCreator = core::Ptr<crate::stitching::WarperCreator>;
	
	ptr_extern! { crate::stitching::WarperCreator,
		cv_PtrLcv_WarperCreatorG_delete, cv_PtrLcv_WarperCreatorG_getInnerPtr_const, cv_PtrLcv_WarperCreatorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::stitching::WarperCreator> {
		#[inline] pub fn as_raw_PtrOfWarperCreator(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfWarperCreator(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::stitching::WarperCreatorTraitConst for core::Ptr<crate::stitching::WarperCreator> {
		#[inline] fn as_raw_WarperCreator(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::stitching::WarperCreatorTrait for core::Ptr<crate::stitching::WarperCreator> {
		#[inline] fn as_raw_mut_WarperCreator(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::stitching::WarperCreator> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfWarperCreator")
				.finish()
		}
	}
	
	pub type VectorOfDetail_CameraParams = core::Vector<crate::stitching::Detail_CameraParams>;
	
	impl core::Vector<crate::stitching::Detail_CameraParams> {
		pub fn as_raw_VectorOfDetail_CameraParams(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetail_CameraParams(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::stitching::Detail_CameraParams,
		std_vectorLcv_detail_CameraParamsG_new_const, std_vectorLcv_detail_CameraParamsG_delete,
		std_vectorLcv_detail_CameraParamsG_len_const, std_vectorLcv_detail_CameraParamsG_isEmpty_const,
		std_vectorLcv_detail_CameraParamsG_capacity_const, std_vectorLcv_detail_CameraParamsG_shrinkToFit,
		std_vectorLcv_detail_CameraParamsG_reserve_size_t, std_vectorLcv_detail_CameraParamsG_remove_size_t,
		std_vectorLcv_detail_CameraParamsG_swap_size_t_size_t, std_vectorLcv_detail_CameraParamsG_clear,
		std_vectorLcv_detail_CameraParamsG_get_const_size_t, std_vectorLcv_detail_CameraParamsG_set_size_t_const_CameraParams,
		std_vectorLcv_detail_CameraParamsG_push_const_CameraParams, std_vectorLcv_detail_CameraParamsG_insert_size_t_const_CameraParams,
	}
	
	vector_non_copy_or_bool! { clone crate::stitching::Detail_CameraParams }
	
	vector_boxed_ref! { crate::stitching::Detail_CameraParams }
	
	vector_extern! { BoxedRef<'_, crate::stitching::Detail_CameraParams>,
		std_vectorLcv_detail_CameraParamsG_new_const, std_vectorLcv_detail_CameraParamsG_delete,
		std_vectorLcv_detail_CameraParamsG_len_const, std_vectorLcv_detail_CameraParamsG_isEmpty_const,
		std_vectorLcv_detail_CameraParamsG_capacity_const, std_vectorLcv_detail_CameraParamsG_shrinkToFit,
		std_vectorLcv_detail_CameraParamsG_reserve_size_t, std_vectorLcv_detail_CameraParamsG_remove_size_t,
		std_vectorLcv_detail_CameraParamsG_swap_size_t_size_t, std_vectorLcv_detail_CameraParamsG_clear,
		std_vectorLcv_detail_CameraParamsG_get_const_size_t, std_vectorLcv_detail_CameraParamsG_set_size_t_const_CameraParams,
		std_vectorLcv_detail_CameraParamsG_push_const_CameraParams, std_vectorLcv_detail_CameraParamsG_insert_size_t_const_CameraParams,
	}
	
	
	pub type VectorOfDetail_ImageFeatures = core::Vector<crate::stitching::Detail_ImageFeatures>;
	
	impl core::Vector<crate::stitching::Detail_ImageFeatures> {
		pub fn as_raw_VectorOfDetail_ImageFeatures(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetail_ImageFeatures(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::stitching::Detail_ImageFeatures,
		std_vectorLcv_detail_ImageFeaturesG_new_const, std_vectorLcv_detail_ImageFeaturesG_delete,
		std_vectorLcv_detail_ImageFeaturesG_len_const, std_vectorLcv_detail_ImageFeaturesG_isEmpty_const,
		std_vectorLcv_detail_ImageFeaturesG_capacity_const, std_vectorLcv_detail_ImageFeaturesG_shrinkToFit,
		std_vectorLcv_detail_ImageFeaturesG_reserve_size_t, std_vectorLcv_detail_ImageFeaturesG_remove_size_t,
		std_vectorLcv_detail_ImageFeaturesG_swap_size_t_size_t, std_vectorLcv_detail_ImageFeaturesG_clear,
		std_vectorLcv_detail_ImageFeaturesG_get_const_size_t, std_vectorLcv_detail_ImageFeaturesG_set_size_t_const_ImageFeatures,
		std_vectorLcv_detail_ImageFeaturesG_push_const_ImageFeatures, std_vectorLcv_detail_ImageFeaturesG_insert_size_t_const_ImageFeatures,
	}
	
	vector_non_copy_or_bool! { clone crate::stitching::Detail_ImageFeatures }
	
	vector_boxed_ref! { crate::stitching::Detail_ImageFeatures }
	
	vector_extern! { BoxedRef<'_, crate::stitching::Detail_ImageFeatures>,
		std_vectorLcv_detail_ImageFeaturesG_new_const, std_vectorLcv_detail_ImageFeaturesG_delete,
		std_vectorLcv_detail_ImageFeaturesG_len_const, std_vectorLcv_detail_ImageFeaturesG_isEmpty_const,
		std_vectorLcv_detail_ImageFeaturesG_capacity_const, std_vectorLcv_detail_ImageFeaturesG_shrinkToFit,
		std_vectorLcv_detail_ImageFeaturesG_reserve_size_t, std_vectorLcv_detail_ImageFeaturesG_remove_size_t,
		std_vectorLcv_detail_ImageFeaturesG_swap_size_t_size_t, std_vectorLcv_detail_ImageFeaturesG_clear,
		std_vectorLcv_detail_ImageFeaturesG_get_const_size_t, std_vectorLcv_detail_ImageFeaturesG_set_size_t_const_ImageFeatures,
		std_vectorLcv_detail_ImageFeaturesG_push_const_ImageFeatures, std_vectorLcv_detail_ImageFeaturesG_insert_size_t_const_ImageFeatures,
	}
	
	
	pub type VectorOfDetail_MatchesInfo = core::Vector<crate::stitching::Detail_MatchesInfo>;
	
	impl core::Vector<crate::stitching::Detail_MatchesInfo> {
		pub fn as_raw_VectorOfDetail_MatchesInfo(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfDetail_MatchesInfo(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::stitching::Detail_MatchesInfo,
		std_vectorLcv_detail_MatchesInfoG_new_const, std_vectorLcv_detail_MatchesInfoG_delete,
		std_vectorLcv_detail_MatchesInfoG_len_const, std_vectorLcv_detail_MatchesInfoG_isEmpty_const,
		std_vectorLcv_detail_MatchesInfoG_capacity_const, std_vectorLcv_detail_MatchesInfoG_shrinkToFit,
		std_vectorLcv_detail_MatchesInfoG_reserve_size_t, std_vectorLcv_detail_MatchesInfoG_remove_size_t,
		std_vectorLcv_detail_MatchesInfoG_swap_size_t_size_t, std_vectorLcv_detail_MatchesInfoG_clear,
		std_vectorLcv_detail_MatchesInfoG_get_const_size_t, std_vectorLcv_detail_MatchesInfoG_set_size_t_const_MatchesInfo,
		std_vectorLcv_detail_MatchesInfoG_push_const_MatchesInfo, std_vectorLcv_detail_MatchesInfoG_insert_size_t_const_MatchesInfo,
	}
	
	vector_non_copy_or_bool! { clone crate::stitching::Detail_MatchesInfo }
	
	vector_boxed_ref! { crate::stitching::Detail_MatchesInfo }
	
	vector_extern! { BoxedRef<'_, crate::stitching::Detail_MatchesInfo>,
		std_vectorLcv_detail_MatchesInfoG_new_const, std_vectorLcv_detail_MatchesInfoG_delete,
		std_vectorLcv_detail_MatchesInfoG_len_const, std_vectorLcv_detail_MatchesInfoG_isEmpty_const,
		std_vectorLcv_detail_MatchesInfoG_capacity_const, std_vectorLcv_detail_MatchesInfoG_shrinkToFit,
		std_vectorLcv_detail_MatchesInfoG_reserve_size_t, std_vectorLcv_detail_MatchesInfoG_remove_size_t,
		std_vectorLcv_detail_MatchesInfoG_swap_size_t_size_t, std_vectorLcv_detail_MatchesInfoG_clear,
		std_vectorLcv_detail_MatchesInfoG_get_const_size_t, std_vectorLcv_detail_MatchesInfoG_set_size_t_const_MatchesInfo,
		std_vectorLcv_detail_MatchesInfoG_push_const_MatchesInfo, std_vectorLcv_detail_MatchesInfoG_insert_size_t_const_MatchesInfo,
	}
	
	
}
#[cfg(ocvrs_has_module_stitching)]
pub use stitching_types::*;

#[cfg(ocvrs_has_module_video)]
mod video_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfBackgroundSubtractor = core::Ptr<crate::video::BackgroundSubtractor>;
	
	ptr_extern! { crate::video::BackgroundSubtractor,
		cv_PtrLcv_BackgroundSubtractorG_delete, cv_PtrLcv_BackgroundSubtractorG_getInnerPtr_const, cv_PtrLcv_BackgroundSubtractorG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::BackgroundSubtractor> {
		#[inline] pub fn as_raw_PtrOfBackgroundSubtractor(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBackgroundSubtractor(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::BackgroundSubtractorTraitConst for core::Ptr<crate::video::BackgroundSubtractor> {
		#[inline] fn as_raw_BackgroundSubtractor(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::BackgroundSubtractorTrait for core::Ptr<crate::video::BackgroundSubtractor> {
		#[inline] fn as_raw_mut_BackgroundSubtractor(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::BackgroundSubtractor> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::BackgroundSubtractor> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBackgroundSubtractor, core::Ptr<core::Algorithm>, cv_PtrLcv_BackgroundSubtractorG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::video::BackgroundSubtractor> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBackgroundSubtractor")
				.finish()
		}
	}
	
	pub type PtrOfBackgroundSubtractorKNN = core::Ptr<crate::video::BackgroundSubtractorKNN>;
	
	ptr_extern! { crate::video::BackgroundSubtractorKNN,
		cv_PtrLcv_BackgroundSubtractorKNNG_delete, cv_PtrLcv_BackgroundSubtractorKNNG_getInnerPtr_const, cv_PtrLcv_BackgroundSubtractorKNNG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] pub fn as_raw_PtrOfBackgroundSubtractorKNN(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBackgroundSubtractorKNN(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::BackgroundSubtractorKNNTraitConst for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] fn as_raw_BackgroundSubtractorKNN(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::BackgroundSubtractorKNNTrait for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] fn as_raw_mut_BackgroundSubtractorKNN(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBackgroundSubtractorKNN, core::Ptr<core::Algorithm>, cv_PtrLcv_BackgroundSubtractorKNNG_to_PtrOfAlgorithm }
	
	impl crate::video::BackgroundSubtractorTraitConst for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] fn as_raw_BackgroundSubtractor(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::BackgroundSubtractorTrait for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline] fn as_raw_mut_BackgroundSubtractor(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBackgroundSubtractorKNN, core::Ptr<crate::video::BackgroundSubtractor>, cv_PtrLcv_BackgroundSubtractorKNNG_to_PtrOfBackgroundSubtractor }
	
	impl std::fmt::Debug for core::Ptr<crate::video::BackgroundSubtractorKNN> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBackgroundSubtractorKNN")
				.finish()
		}
	}
	
	pub type PtrOfBackgroundSubtractorMOG2 = core::Ptr<crate::video::BackgroundSubtractorMOG2>;
	
	ptr_extern! { crate::video::BackgroundSubtractorMOG2,
		cv_PtrLcv_BackgroundSubtractorMOG2G_delete, cv_PtrLcv_BackgroundSubtractorMOG2G_getInnerPtr_const, cv_PtrLcv_BackgroundSubtractorMOG2G_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] pub fn as_raw_PtrOfBackgroundSubtractorMOG2(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfBackgroundSubtractorMOG2(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::BackgroundSubtractorMOG2TraitConst for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] fn as_raw_BackgroundSubtractorMOG2(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::BackgroundSubtractorMOG2Trait for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] fn as_raw_mut_BackgroundSubtractorMOG2(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBackgroundSubtractorMOG2, core::Ptr<core::Algorithm>, cv_PtrLcv_BackgroundSubtractorMOG2G_to_PtrOfAlgorithm }
	
	impl crate::video::BackgroundSubtractorTraitConst for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] fn as_raw_BackgroundSubtractor(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::BackgroundSubtractorTrait for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline] fn as_raw_mut_BackgroundSubtractor(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfBackgroundSubtractorMOG2, core::Ptr<crate::video::BackgroundSubtractor>, cv_PtrLcv_BackgroundSubtractorMOG2G_to_PtrOfBackgroundSubtractor }
	
	impl std::fmt::Debug for core::Ptr<crate::video::BackgroundSubtractorMOG2> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfBackgroundSubtractorMOG2")
				.finish()
		}
	}
	
	pub type PtrOfDISOpticalFlow = core::Ptr<crate::video::DISOpticalFlow>;
	
	ptr_extern! { crate::video::DISOpticalFlow,
		cv_PtrLcv_DISOpticalFlowG_delete, cv_PtrLcv_DISOpticalFlowG_getInnerPtr_const, cv_PtrLcv_DISOpticalFlowG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] pub fn as_raw_PtrOfDISOpticalFlow(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDISOpticalFlow(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::DISOpticalFlowTraitConst for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] fn as_raw_DISOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::DISOpticalFlowTrait for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] fn as_raw_mut_DISOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDISOpticalFlow, core::Ptr<core::Algorithm>, cv_PtrLcv_DISOpticalFlowG_to_PtrOfAlgorithm }
	
	impl crate::video::DenseOpticalFlowTraitConst for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] fn as_raw_DenseOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::DenseOpticalFlowTrait for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline] fn as_raw_mut_DenseOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDISOpticalFlow, core::Ptr<crate::video::DenseOpticalFlow>, cv_PtrLcv_DISOpticalFlowG_to_PtrOfDenseOpticalFlow }
	
	impl std::fmt::Debug for core::Ptr<crate::video::DISOpticalFlow> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDISOpticalFlow")
				.finish()
		}
	}
	
	pub type PtrOfDenseOpticalFlow = core::Ptr<crate::video::DenseOpticalFlow>;
	
	ptr_extern! { crate::video::DenseOpticalFlow,
		cv_PtrLcv_DenseOpticalFlowG_delete, cv_PtrLcv_DenseOpticalFlowG_getInnerPtr_const, cv_PtrLcv_DenseOpticalFlowG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::DenseOpticalFlow> {
		#[inline] pub fn as_raw_PtrOfDenseOpticalFlow(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfDenseOpticalFlow(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::DenseOpticalFlowTraitConst for core::Ptr<crate::video::DenseOpticalFlow> {
		#[inline] fn as_raw_DenseOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::DenseOpticalFlowTrait for core::Ptr<crate::video::DenseOpticalFlow> {
		#[inline] fn as_raw_mut_DenseOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::DenseOpticalFlow> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::DenseOpticalFlow> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfDenseOpticalFlow, core::Ptr<core::Algorithm>, cv_PtrLcv_DenseOpticalFlowG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::video::DenseOpticalFlow> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfDenseOpticalFlow")
				.finish()
		}
	}
	
	pub type PtrOfFarnebackOpticalFlow = core::Ptr<crate::video::FarnebackOpticalFlow>;
	
	ptr_extern! { crate::video::FarnebackOpticalFlow,
		cv_PtrLcv_FarnebackOpticalFlowG_delete, cv_PtrLcv_FarnebackOpticalFlowG_getInnerPtr_const, cv_PtrLcv_FarnebackOpticalFlowG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] pub fn as_raw_PtrOfFarnebackOpticalFlow(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfFarnebackOpticalFlow(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::FarnebackOpticalFlowTraitConst for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] fn as_raw_FarnebackOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::FarnebackOpticalFlowTrait for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] fn as_raw_mut_FarnebackOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFarnebackOpticalFlow, core::Ptr<core::Algorithm>, cv_PtrLcv_FarnebackOpticalFlowG_to_PtrOfAlgorithm }
	
	impl crate::video::DenseOpticalFlowTraitConst for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] fn as_raw_DenseOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::DenseOpticalFlowTrait for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline] fn as_raw_mut_DenseOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfFarnebackOpticalFlow, core::Ptr<crate::video::DenseOpticalFlow>, cv_PtrLcv_FarnebackOpticalFlowG_to_PtrOfDenseOpticalFlow }
	
	impl std::fmt::Debug for core::Ptr<crate::video::FarnebackOpticalFlow> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfFarnebackOpticalFlow")
				.finish()
		}
	}
	
	pub type PtrOfSparseOpticalFlow = core::Ptr<crate::video::SparseOpticalFlow>;
	
	ptr_extern! { crate::video::SparseOpticalFlow,
		cv_PtrLcv_SparseOpticalFlowG_delete, cv_PtrLcv_SparseOpticalFlowG_getInnerPtr_const, cv_PtrLcv_SparseOpticalFlowG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::SparseOpticalFlow> {
		#[inline] pub fn as_raw_PtrOfSparseOpticalFlow(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSparseOpticalFlow(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::SparseOpticalFlowTraitConst for core::Ptr<crate::video::SparseOpticalFlow> {
		#[inline] fn as_raw_SparseOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::SparseOpticalFlowTrait for core::Ptr<crate::video::SparseOpticalFlow> {
		#[inline] fn as_raw_mut_SparseOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::SparseOpticalFlow> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::SparseOpticalFlow> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSparseOpticalFlow, core::Ptr<core::Algorithm>, cv_PtrLcv_SparseOpticalFlowG_to_PtrOfAlgorithm }
	
	impl std::fmt::Debug for core::Ptr<crate::video::SparseOpticalFlow> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSparseOpticalFlow")
				.finish()
		}
	}
	
	pub type PtrOfSparsePyrLKOpticalFlow = core::Ptr<crate::video::SparsePyrLKOpticalFlow>;
	
	ptr_extern! { crate::video::SparsePyrLKOpticalFlow,
		cv_PtrLcv_SparsePyrLKOpticalFlowG_delete, cv_PtrLcv_SparsePyrLKOpticalFlowG_getInnerPtr_const, cv_PtrLcv_SparsePyrLKOpticalFlowG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] pub fn as_raw_PtrOfSparsePyrLKOpticalFlow(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfSparsePyrLKOpticalFlow(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::SparsePyrLKOpticalFlowTraitConst for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] fn as_raw_SparsePyrLKOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::SparsePyrLKOpticalFlowTrait for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] fn as_raw_mut_SparsePyrLKOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSparsePyrLKOpticalFlow, core::Ptr<core::Algorithm>, cv_PtrLcv_SparsePyrLKOpticalFlowG_to_PtrOfAlgorithm }
	
	impl crate::video::SparseOpticalFlowTraitConst for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] fn as_raw_SparseOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::SparseOpticalFlowTrait for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline] fn as_raw_mut_SparseOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfSparsePyrLKOpticalFlow, core::Ptr<crate::video::SparseOpticalFlow>, cv_PtrLcv_SparsePyrLKOpticalFlowG_to_PtrOfSparseOpticalFlow }
	
	impl std::fmt::Debug for core::Ptr<crate::video::SparsePyrLKOpticalFlow> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfSparsePyrLKOpticalFlow")
				.finish()
		}
	}
	
	pub type PtrOfTracker = core::Ptr<crate::video::Tracker>;
	
	ptr_extern! { crate::video::Tracker,
		cv_PtrLcv_TrackerG_delete, cv_PtrLcv_TrackerG_getInnerPtr_const, cv_PtrLcv_TrackerG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::Tracker> {
		#[inline] pub fn as_raw_PtrOfTracker(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTracker(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::TrackerTraitConst for core::Ptr<crate::video::Tracker> {
		#[inline] fn as_raw_Tracker(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerTrait for core::Ptr<crate::video::Tracker> {
		#[inline] fn as_raw_mut_Tracker(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::video::Tracker> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTracker")
				.finish()
		}
	}
	
	pub type PtrOfTrackerDaSiamRPN = core::Ptr<crate::video::TrackerDaSiamRPN>;
	
	ptr_extern! { crate::video::TrackerDaSiamRPN,
		cv_PtrLcv_TrackerDaSiamRPNG_delete, cv_PtrLcv_TrackerDaSiamRPNG_getInnerPtr_const, cv_PtrLcv_TrackerDaSiamRPNG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::TrackerDaSiamRPN> {
		#[inline] pub fn as_raw_PtrOfTrackerDaSiamRPN(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTrackerDaSiamRPN(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::TrackerDaSiamRPNTraitConst for core::Ptr<crate::video::TrackerDaSiamRPN> {
		#[inline] fn as_raw_TrackerDaSiamRPN(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerDaSiamRPNTrait for core::Ptr<crate::video::TrackerDaSiamRPN> {
		#[inline] fn as_raw_mut_TrackerDaSiamRPN(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::video::TrackerTraitConst for core::Ptr<crate::video::TrackerDaSiamRPN> {
		#[inline] fn as_raw_Tracker(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerTrait for core::Ptr<crate::video::TrackerDaSiamRPN> {
		#[inline] fn as_raw_mut_Tracker(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTrackerDaSiamRPN, core::Ptr<crate::video::Tracker>, cv_PtrLcv_TrackerDaSiamRPNG_to_PtrOfTracker }
	
	impl std::fmt::Debug for core::Ptr<crate::video::TrackerDaSiamRPN> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTrackerDaSiamRPN")
				.finish()
		}
	}
	
	pub type PtrOfTrackerGOTURN = core::Ptr<crate::video::TrackerGOTURN>;
	
	ptr_extern! { crate::video::TrackerGOTURN,
		cv_PtrLcv_TrackerGOTURNG_delete, cv_PtrLcv_TrackerGOTURNG_getInnerPtr_const, cv_PtrLcv_TrackerGOTURNG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::TrackerGOTURN> {
		#[inline] pub fn as_raw_PtrOfTrackerGOTURN(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTrackerGOTURN(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::TrackerGOTURNTraitConst for core::Ptr<crate::video::TrackerGOTURN> {
		#[inline] fn as_raw_TrackerGOTURN(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerGOTURNTrait for core::Ptr<crate::video::TrackerGOTURN> {
		#[inline] fn as_raw_mut_TrackerGOTURN(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::video::TrackerTraitConst for core::Ptr<crate::video::TrackerGOTURN> {
		#[inline] fn as_raw_Tracker(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerTrait for core::Ptr<crate::video::TrackerGOTURN> {
		#[inline] fn as_raw_mut_Tracker(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTrackerGOTURN, core::Ptr<crate::video::Tracker>, cv_PtrLcv_TrackerGOTURNG_to_PtrOfTracker }
	
	impl std::fmt::Debug for core::Ptr<crate::video::TrackerGOTURN> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTrackerGOTURN")
				.finish()
		}
	}
	
	pub type PtrOfTrackerMIL = core::Ptr<crate::video::TrackerMIL>;
	
	ptr_extern! { crate::video::TrackerMIL,
		cv_PtrLcv_TrackerMILG_delete, cv_PtrLcv_TrackerMILG_getInnerPtr_const, cv_PtrLcv_TrackerMILG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::TrackerMIL> {
		#[inline] pub fn as_raw_PtrOfTrackerMIL(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTrackerMIL(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::TrackerMILTraitConst for core::Ptr<crate::video::TrackerMIL> {
		#[inline] fn as_raw_TrackerMIL(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerMILTrait for core::Ptr<crate::video::TrackerMIL> {
		#[inline] fn as_raw_mut_TrackerMIL(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::video::TrackerTraitConst for core::Ptr<crate::video::TrackerMIL> {
		#[inline] fn as_raw_Tracker(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerTrait for core::Ptr<crate::video::TrackerMIL> {
		#[inline] fn as_raw_mut_Tracker(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTrackerMIL, core::Ptr<crate::video::Tracker>, cv_PtrLcv_TrackerMILG_to_PtrOfTracker }
	
	impl std::fmt::Debug for core::Ptr<crate::video::TrackerMIL> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTrackerMIL")
				.finish()
		}
	}
	
	pub type PtrOfTrackerNano = core::Ptr<crate::video::TrackerNano>;
	
	ptr_extern! { crate::video::TrackerNano,
		cv_PtrLcv_TrackerNanoG_delete, cv_PtrLcv_TrackerNanoG_getInnerPtr_const, cv_PtrLcv_TrackerNanoG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::TrackerNano> {
		#[inline] pub fn as_raw_PtrOfTrackerNano(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTrackerNano(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::TrackerNanoTraitConst for core::Ptr<crate::video::TrackerNano> {
		#[inline] fn as_raw_TrackerNano(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerNanoTrait for core::Ptr<crate::video::TrackerNano> {
		#[inline] fn as_raw_mut_TrackerNano(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::video::TrackerTraitConst for core::Ptr<crate::video::TrackerNano> {
		#[inline] fn as_raw_Tracker(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerTrait for core::Ptr<crate::video::TrackerNano> {
		#[inline] fn as_raw_mut_Tracker(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTrackerNano, core::Ptr<crate::video::Tracker>, cv_PtrLcv_TrackerNanoG_to_PtrOfTracker }
	
	impl std::fmt::Debug for core::Ptr<crate::video::TrackerNano> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTrackerNano")
				.finish()
		}
	}
	
	pub type PtrOfTrackerVit = core::Ptr<crate::video::TrackerVit>;
	
	ptr_extern! { crate::video::TrackerVit,
		cv_PtrLcv_TrackerVitG_delete, cv_PtrLcv_TrackerVitG_getInnerPtr_const, cv_PtrLcv_TrackerVitG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::TrackerVit> {
		#[inline] pub fn as_raw_PtrOfTrackerVit(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfTrackerVit(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::TrackerVitTraitConst for core::Ptr<crate::video::TrackerVit> {
		#[inline] fn as_raw_TrackerVit(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerVitTrait for core::Ptr<crate::video::TrackerVit> {
		#[inline] fn as_raw_mut_TrackerVit(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl crate::video::TrackerTraitConst for core::Ptr<crate::video::TrackerVit> {
		#[inline] fn as_raw_Tracker(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::TrackerTrait for core::Ptr<crate::video::TrackerVit> {
		#[inline] fn as_raw_mut_Tracker(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfTrackerVit, core::Ptr<crate::video::Tracker>, cv_PtrLcv_TrackerVitG_to_PtrOfTracker }
	
	impl std::fmt::Debug for core::Ptr<crate::video::TrackerVit> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfTrackerVit")
				.finish()
		}
	}
	
	pub type PtrOfVariationalRefinement = core::Ptr<crate::video::VariationalRefinement>;
	
	ptr_extern! { crate::video::VariationalRefinement,
		cv_PtrLcv_VariationalRefinementG_delete, cv_PtrLcv_VariationalRefinementG_getInnerPtr_const, cv_PtrLcv_VariationalRefinementG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::video::VariationalRefinement> {
		#[inline] pub fn as_raw_PtrOfVariationalRefinement(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfVariationalRefinement(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::video::VariationalRefinementTraitConst for core::Ptr<crate::video::VariationalRefinement> {
		#[inline] fn as_raw_VariationalRefinement(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::VariationalRefinementTrait for core::Ptr<crate::video::VariationalRefinement> {
		#[inline] fn as_raw_mut_VariationalRefinement(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl core::AlgorithmTraitConst for core::Ptr<crate::video::VariationalRefinement> {
		#[inline] fn as_raw_Algorithm(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl core::AlgorithmTrait for core::Ptr<crate::video::VariationalRefinement> {
		#[inline] fn as_raw_mut_Algorithm(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfVariationalRefinement, core::Ptr<core::Algorithm>, cv_PtrLcv_VariationalRefinementG_to_PtrOfAlgorithm }
	
	impl crate::video::DenseOpticalFlowTraitConst for core::Ptr<crate::video::VariationalRefinement> {
		#[inline] fn as_raw_DenseOpticalFlow(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::video::DenseOpticalFlowTrait for core::Ptr<crate::video::VariationalRefinement> {
		#[inline] fn as_raw_mut_DenseOpticalFlow(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	ptr_cast_base! { PtrOfVariationalRefinement, core::Ptr<crate::video::DenseOpticalFlow>, cv_PtrLcv_VariationalRefinementG_to_PtrOfDenseOpticalFlow }
	
	impl std::fmt::Debug for core::Ptr<crate::video::VariationalRefinement> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfVariationalRefinement")
				.finish()
		}
	}
	
}
#[cfg(ocvrs_has_module_video)]
pub use video_types::*;

#[cfg(ocvrs_has_module_videoio)]
mod videoio_types {
	use crate::{mod_prelude::*, core, types, sys};

	pub type PtrOfIStreamReader = core::Ptr<crate::videoio::IStreamReader>;
	
	ptr_extern! { crate::videoio::IStreamReader,
		cv_PtrLcv_IStreamReaderG_delete, cv_PtrLcv_IStreamReaderG_getInnerPtr_const, cv_PtrLcv_IStreamReaderG_getInnerPtrMut
	}
	
	impl core::Ptr<crate::videoio::IStreamReader> {
		#[inline] pub fn as_raw_PtrOfIStreamReader(&self) -> extern_send!(Self) { self.as_raw() }
		#[inline] pub fn as_raw_mut_PtrOfIStreamReader(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	impl crate::videoio::IStreamReaderTraitConst for core::Ptr<crate::videoio::IStreamReader> {
		#[inline] fn as_raw_IStreamReader(&self) -> *const c_void { self.inner_as_raw() }
	}
	
	impl crate::videoio::IStreamReaderTrait for core::Ptr<crate::videoio::IStreamReader> {
		#[inline] fn as_raw_mut_IStreamReader(&mut self) -> *mut c_void { self.inner_as_raw_mut() }
	}
	
	impl std::fmt::Debug for core::Ptr<crate::videoio::IStreamReader> {
		#[inline]
		fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
			f.debug_struct("PtrOfIStreamReader")
				.finish()
		}
	}
	
	pub type VectorOfVideoCapture = core::Vector<crate::videoio::VideoCapture>;
	
	impl core::Vector<crate::videoio::VideoCapture> {
		pub fn as_raw_VectorOfVideoCapture(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVideoCapture(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::videoio::VideoCapture,
		std_vectorLcv_VideoCaptureG_new_const, std_vectorLcv_VideoCaptureG_delete,
		std_vectorLcv_VideoCaptureG_len_const, std_vectorLcv_VideoCaptureG_isEmpty_const,
		std_vectorLcv_VideoCaptureG_capacity_const, std_vectorLcv_VideoCaptureG_shrinkToFit,
		std_vectorLcv_VideoCaptureG_reserve_size_t, std_vectorLcv_VideoCaptureG_remove_size_t,
		std_vectorLcv_VideoCaptureG_swap_size_t_size_t, std_vectorLcv_VideoCaptureG_clear,
		std_vectorLcv_VideoCaptureG_get_const_size_t, std_vectorLcv_VideoCaptureG_set_size_t_const_VideoCapture,
		std_vectorLcv_VideoCaptureG_push_const_VideoCapture, std_vectorLcv_VideoCaptureG_insert_size_t_const_VideoCapture,
	}
	
	vector_non_copy_or_bool! { crate::videoio::VideoCapture }
	
	vector_boxed_ref! { crate::videoio::VideoCapture }
	
	vector_extern! { BoxedRef<'_, crate::videoio::VideoCapture>,
		std_vectorLcv_VideoCaptureG_new_const, std_vectorLcv_VideoCaptureG_delete,
		std_vectorLcv_VideoCaptureG_len_const, std_vectorLcv_VideoCaptureG_isEmpty_const,
		std_vectorLcv_VideoCaptureG_capacity_const, std_vectorLcv_VideoCaptureG_shrinkToFit,
		std_vectorLcv_VideoCaptureG_reserve_size_t, std_vectorLcv_VideoCaptureG_remove_size_t,
		std_vectorLcv_VideoCaptureG_swap_size_t_size_t, std_vectorLcv_VideoCaptureG_clear,
		std_vectorLcv_VideoCaptureG_get_const_size_t, std_vectorLcv_VideoCaptureG_set_size_t_const_VideoCapture,
		std_vectorLcv_VideoCaptureG_push_const_VideoCapture, std_vectorLcv_VideoCaptureG_insert_size_t_const_VideoCapture,
	}
	
	
	pub type VectorOfVideoCaptureAPIs = core::Vector<crate::videoio::VideoCaptureAPIs>;
	
	impl core::Vector<crate::videoio::VideoCaptureAPIs> {
		pub fn as_raw_VectorOfVideoCaptureAPIs(&self) -> extern_send!(Self) { self.as_raw() }
		pub fn as_raw_mut_VectorOfVideoCaptureAPIs(&mut self) -> extern_send!(mut Self) { self.as_raw_mut() }
	}
	
	vector_extern! { crate::videoio::VideoCaptureAPIs,
		std_vectorLcv_VideoCaptureAPIsG_new_const, std_vectorLcv_VideoCaptureAPIsG_delete,
		std_vectorLcv_VideoCaptureAPIsG_len_const, std_vectorLcv_VideoCaptureAPIsG_isEmpty_const,
		std_vectorLcv_VideoCaptureAPIsG_capacity_const, std_vectorLcv_VideoCaptureAPIsG_shrinkToFit,
		std_vectorLcv_VideoCaptureAPIsG_reserve_size_t, std_vectorLcv_VideoCaptureAPIsG_remove_size_t,
		std_vectorLcv_VideoCaptureAPIsG_swap_size_t_size_t, std_vectorLcv_VideoCaptureAPIsG_clear,
		std_vectorLcv_VideoCaptureAPIsG_get_const_size_t, std_vectorLcv_VideoCaptureAPIsG_set_size_t_const_VideoCaptureAPIs,
		std_vectorLcv_VideoCaptureAPIsG_push_const_VideoCaptureAPIs, std_vectorLcv_VideoCaptureAPIsG_insert_size_t_const_VideoCaptureAPIs,
	}
	
	vector_copy_non_bool! { crate::videoio::VideoCaptureAPIs,
		std_vectorLcv_VideoCaptureAPIsG_data_const, std_vectorLcv_VideoCaptureAPIsG_dataMut, cv_fromSlice_const_const_VideoCaptureAPIsX_size_t,
		std_vectorLcv_VideoCaptureAPIsG_clone_const,
	}
	
	
}
#[cfg(ocvrs_has_module_videoio)]
pub use videoio_types::*;

pub use crate::manual::types::*;
