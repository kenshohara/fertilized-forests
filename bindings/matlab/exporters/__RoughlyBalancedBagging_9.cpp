
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__bagging.h"
#include <../../include/fertilized\bagging/roughlybalancedbagging.h>

using namespace fertilized;




          void * getRoughlyBalancedBagging_f_f_f_rpf_vprpff (

        unsigned int n_classes,
        mxArray * n_class_samples,
        unsigned int random_seed
) {
  // From C types conversions.

    std::vector<size_t> __converted_n_class_samples;
    {
      const mwSize _matlab_ndim = mxGetNumberOfDimensions(n_class_samples);
      const mxClassID _matlab_dtid = mxGetClassID(n_class_samples);
      const mwSize* _matlab_shape = mxGetDimensions(n_class_samples);
      // Dimensionality check.
      if (_matlab_ndim != 2) {
        mexErrMsgTxt(("Expected 2 dimensions, received " +
          std::to_string(_matlab_ndim)).c_str());
      }
      // Dtype check.
      if (_matlab_dtid != mxUINT64_CLASS) {
        mexErrMsgTxt("Wrong MATLAB datatype of argument n_class_samples!");
      }
      // Shape check.
      if (_matlab_shape[0] != 1) {
        mexErrMsgTxt("Wrong Vector shape! Expecting a row vector!");
      }
      __converted_n_class_samples = std::vector<size_t>(_matlab_shape[1]);
      mwIndex _idx [2];
      for (std::size_t i = 0; i < 2; ++i) {
        _idx[i] = 0;
      }
      int dimidx;
      size_t *_iptr = reinterpret_cast<size_t*>(mxGetData(n_class_samples));
      for (std::size_t i = 0; i < _matlab_shape[1]; ++i) {
        __converted_n_class_samples[i] = _iptr[mxCalcSingleSubscript(n_class_samples, _matlab_ndim, _idx)];
        dimidx = 2-1;
        while (_idx[dimidx] == _matlab_shape[dimidx]-1) {
          _idx[dimidx] = 0;
          dimidx -= 1;
        }
        _idx[dimidx]++;
      }
    }

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<RoughlyBalancedBagging<float,float,float,std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>>>(
    new RoughlyBalancedBagging<
              float,
              float,
              float,
              std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,
              std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>
>(
          n_classes,
          __converted_n_class_samples,
          random_seed
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqRoughlyBalancedBagging_f_f_f_rpf_vprpff (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<RoughlyBalancedBagging<float,float,float,std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::IBaggingStrategy<float, float, float, std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>, std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>>>*>(rhs);
    auto &__converted_rhs = *(__shptr_rhs.get());
            

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto libfunc_result = __instance_unpacked -> operator==(
          __converted_rhs
  );
#pragma warning( pop )

  return libfunc_result;
}		
// Destructor.
void delete_RoughlyBalancedBagging_f_f_f_rpf_vprpff(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<RoughlyBalancedBagging<float,float,float,std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>>>*>(ptr);
  delete storage;
}
