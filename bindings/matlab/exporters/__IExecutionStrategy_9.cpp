
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__execution_strategies.h"
#include <../../include/fertilized\execution_strategies/iexecutionstrategy.h>

using namespace fertilized;


// Destructor.
void delete_IExecutionStrategy_f_f_f_rpf_vprpff(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<IExecutionStrategy<float,float,float,std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>>>*>(ptr);
  delete storage;
}
