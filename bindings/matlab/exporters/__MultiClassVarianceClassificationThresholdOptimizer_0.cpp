
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__threshold_optimizers.h"
#include <../../include/fertilized\threshold_optimizers/multiclassvarianceclassificationthresholdoptimizer.h>

using namespace fertilized;




          void * getMultiClassVarianceClassificationThresholdOptimizer_i_i_uint (

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
  auto *libfunc_result = new std::shared_ptr<MultiClassVarianceClassificationThresholdOptimizer<int,int,uint>>(
    new MultiClassVarianceClassificationThresholdOptimizer<
              int,
              int,
              uint
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


          int eqMultiClassVarianceClassificationThresholdOptimizer_i_i_uint (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<MultiClassVarianceClassificationThresholdOptimizer<int,int,uint>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::IThresholdOptimizer<int, int, uint>>*>(rhs);
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
void delete_MultiClassVarianceClassificationThresholdOptimizer_i_i_uint(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<MultiClassVarianceClassificationThresholdOptimizer<int,int,uint>>*>(ptr);
  delete storage;
}