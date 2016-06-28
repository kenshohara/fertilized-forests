
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__trainings.h"
#include <../../include/fertilized\trainings/classictraining.h>

using namespace fertilized;




          void * getClassicTraining_f_f_uint_fv_fv (

        void * bagging_strategy
) {
  // From C types conversions.

    auto __converted_bagging_strategy = *reinterpret_cast<std::shared_ptr<fertilized::ClassicTraining<float, float, uint, std::vector<float>, std::vector<float>>::bag_strat_t>*>(bagging_strategy);
              

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<ClassicTraining<float,float,uint,std::vector<float>,std::vector<float>>>(
    new ClassicTraining<
              float,
              float,
              uint,
              std::vector<float>,
              std::vector<float>
>(
          __converted_bagging_strategy
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqClassicTraining_f_f_uint_fv_fv (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<ClassicTraining<float,float,uint,std::vector<float>,std::vector<float>>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::ITraining<float, float, uint, std::vector<float>, std::vector<float>>>*>(rhs);
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
void delete_ClassicTraining_f_f_uint_fv_fv(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<ClassicTraining<float,float,uint,std::vector<float>,std::vector<float>>>*>(ptr);
  delete storage;
}
