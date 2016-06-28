
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__leafs.h"
#include <../../include/fertilized\leafs/boostingleafmanager.h>

using namespace fertilized;




          void * getBoostingLeafManager_i_uint (

        unsigned int n_classes
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<BoostingLeafManager<int,uint>>(
    new BoostingLeafManager<
              int,
              uint
>(
          n_classes
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqBoostingLeafManager_i_uint (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<BoostingLeafManager<int,uint>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::ILeafManager<int, uint, std::vector<float>, std::vector<float> >>*>(rhs);
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
void delete_BoostingLeafManager_i_uint(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<BoostingLeafManager<int,uint>>*>(ptr);
  delete storage;
}
