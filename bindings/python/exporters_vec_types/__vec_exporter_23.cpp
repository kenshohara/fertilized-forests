
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
  void __export_vectors_23() {
    custom_vector_from_seq<typename fertilized::Forest<float,float,uint,std::vector<float>,std::vector<float>>::tree_ptr_t>();
  };
}  // namespace pyfertilized