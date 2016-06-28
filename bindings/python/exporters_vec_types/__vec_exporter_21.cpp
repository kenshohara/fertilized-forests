
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
  void __export_vectors_21() {
    custom_vector_from_seq<std::shared_ptr<typename fertilized::Forest<uint8_t,uint8_t,uint,std::vector<float>,std::vector<float>>::dec_t>>();
  };
}  // namespace pyfertilized