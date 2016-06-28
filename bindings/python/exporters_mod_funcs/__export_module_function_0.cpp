
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "./export_module_functions.h"

#pragma warning(push, 0)
#include <fertilized/ndarray/bp/auto.h>
#pragma warning(pop)

#include "../global.h"
#include <../include/fertilized\./standard_forests.h>

namespace py = boost::python;
using namespace fertilized;

namespace pyfertilized {
  void __export_module_function_0() {
    py::def("construct_classifier_forest_i",
            &fertilized::construct_classifier_forest<
              int
                         >);
  };
}  // namespace pyfertilized