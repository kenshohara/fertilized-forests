
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__execution_strategies.h"
#include <../../include/fertilized\execution_strategies/iexecutionstrategy.h>

using namespace fertilized;


// Destructor.
void delete_IExecutionStrategy_uint8_int16_int16_ht_vht(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<IExecutionStrategy<uint8_t,int16_t,int16_t,std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>,std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>>*>(ptr);
  delete storage;
}
