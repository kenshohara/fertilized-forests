
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
  void __export_vectors_30() {
    custom_vector_from_seq<typename fertilized::Forest<uint8_t,int16_t,int16_t,std::pair<float, std::shared_ptr<std::vector<int16_t>>>,std::vector<std::pair<float, std::shared_ptr<std::vector<int16_t>>>>>::tree_ptr_t>();
  };
}  // namespace pyfertilized