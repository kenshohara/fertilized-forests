
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__execution_strategies.h"
#include <../../include/fertilized\execution_strategies/localexecutionstrategy.h>

using namespace fertilized;




          void * getLocalExecutionStrategy_uint8_int16_int16_fv_fv (

        int num_threads
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<LocalExecutionStrategy<uint8_t,int16_t,int16_t,std::vector<float>,std::vector<float>>>(
    new LocalExecutionStrategy<
              uint8_t,
              int16_t,
              int16_t,
              std::vector<float>,
              std::vector<float>
>(
          num_threads
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		
// Destructor.
void delete_LocalExecutionStrategy_uint8_int16_int16_fv_fv(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<LocalExecutionStrategy<uint8_t,int16_t,int16_t,std::vector<float>,std::vector<float>>>*>(ptr);
  delete storage;
}
