
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__boosting.h"
#include <../../include/fertilized\boosting/samme.h>

using namespace fertilized;




          void * getSamme_f_f_uint_fv_fv (

        float learning_rate
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<Samme<float,float,uint,std::vector<float>,std::vector<float>>>(
    new Samme<
              float,
              float,
              uint,
              std::vector<float>,
              std::vector<float>
>(
          learning_rate
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqSamme_f_f_uint_fv_fv (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<Samme<float,float,uint,std::vector<float>,std::vector<float>>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::IBoostingStrategy<float, float, uint, std::vector<float>, std::vector<float>>>*>(rhs);
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
void delete_Samme_f_f_uint_fv_fv(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<Samme<float,float,uint,std::vector<float>,std::vector<float>>>*>(ptr);
  delete storage;
}
