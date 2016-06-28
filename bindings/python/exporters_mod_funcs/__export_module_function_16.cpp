
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "./export_module_functions.h"

#pragma warning(push, 0)
#include <fertilized/ndarray/bp/auto.h>
#pragma warning(pop)

#include "../global.h"
#include <../include/fertilized\./standard_trees.h>

namespace py = boost::python;
using namespace fertilized;

namespace pyfertilized {
  void __export_module_function_16() {
    py::def("construct_regression_tree_d",
            &fertilized::construct_regression_tree<
              double
                         >);
  };
}  // namespace pyfertilized