
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
  void __export_vectors_8() {
    custom_vector_from_seq<std::shared_ptr<typename fertilized::Forest<double,double,uint,std::vector<float>,std::vector<float>>::leaf_man_t>>();
  };
}  // namespace pyfertilized