
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "./vec_exporter.h"

#include <vector>

#include "../global.h"
#include "../util.h"
#include <../../include/fertilized\./forest.h>

using namespace fertilized;

namespace pyfertilized {
  void __export_vectors_27() {
    custom_vector_from_seq<typename fertilized::Forest<float,float,int16_t,std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>,std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>::tree_ptr_t>();
  };
}  // namespace pyfertilized