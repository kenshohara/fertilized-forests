
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__threshold_optimizers.h"
#include <../../include/fertilized\threshold_optimizers/multiclassvarianceclassificationthresholdoptimizer.h>

using namespace fertilized;




          void * getMultiClassVarianceClassificationThresholdOptimizer_f_f_int16 (

        size_t n_thresholds,
        size_t n_classes,
        size_t offset_dim,
        float gain_threshold,
        unsigned int random_seed
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<MultiClassVarianceClassificationThresholdOptimizer<float,float,int16_t>>(
    new MultiClassVarianceClassificationThresholdOptimizer<
              float,
              float,
              int16_t
>(
          n_thresholds,
          n_classes,
          offset_dim,
          gain_threshold,
          random_seed
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqMultiClassVarianceClassificationThresholdOptimizer_f_f_int16 (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<MultiClassVarianceClassificationThresholdOptimizer<float,float,int16_t>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::IThresholdOptimizer<float, float, int16_t>>*>(rhs);
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
void delete_MultiClassVarianceClassificationThresholdOptimizer_f_f_int16(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<MultiClassVarianceClassificationThresholdOptimizer<float,float,int16_t>>*>(ptr);
  delete storage;
}
