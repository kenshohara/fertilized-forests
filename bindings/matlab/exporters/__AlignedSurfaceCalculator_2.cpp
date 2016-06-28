
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__features.h"
#include <../../include/fertilized\features/alignedsurfacecalculator.h>

using namespace fertilized;




          void * getAlignedSurfaceCalculator_f_uint (

) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<AlignedSurfaceCalculator<float,uint>>(
    new AlignedSurfaceCalculator<
              float,
              uint
>(
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqAlignedSurfaceCalculator_f_uint (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<AlignedSurfaceCalculator<float,uint>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::ISurfaceCalculator<float, float, uint>>*>(rhs);
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
void delete_AlignedSurfaceCalculator_f_uint(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<AlignedSurfaceCalculator<float,uint>>*>(ptr);
  delete storage;
}
