
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__threshold_optimizers.h"
#include <../../include/fertilized\threshold_optimizers/randomizedclassificationthresholdoptimizer.h>

using namespace fertilized;




          void * getRandomizedClassificationThresholdOptimizer_f_f_int16 (

        size_t n_thresholds,
        size_t n_classes,
        void * gain_calculator,
        float gain_threshold,
        size_t annotation_step,
        unsigned int random_seed
) {
  // From C types conversions.

    auto __converted_gain_calculator = *reinterpret_cast<std::shared_ptr<fertilized::IGainCalculator<float>>*>(gain_calculator);
              

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<RandomizedClassificationThresholdOptimizer<float,float,int16_t>>(
    new RandomizedClassificationThresholdOptimizer<
              float,
              float,
              int16_t
>(
          n_thresholds,
          n_classes,
          __converted_gain_calculator,
          gain_threshold,
          annotation_step,
          random_seed
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqRandomizedClassificationThresholdOptimizer_f_f_int16 (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<RandomizedClassificationThresholdOptimizer<float,float,int16_t>>*>(__instance);
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
void delete_RandomizedClassificationThresholdOptimizer_f_f_int16(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<RandomizedClassificationThresholdOptimizer<float,float,int16_t>>*>(ptr);
  delete storage;
}
