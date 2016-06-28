
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */

#include "./global.h"

// The INTEL compiler does not have a working solution
// to temporarily disable specific warnings in the code.
// (e.g. see http://software.intel.com/en-us/forums/topic/283633).
// This is why for that compiler this is done using command
// line options (disable #2415 and #2586).
#pragma warning(push, 0)
#include <fertilized/ndarray/bp/auto.h>
#pragma warning(pop)

#include <vector>
#include <memory>
#include <cstddef>

#include "./exporters_mod_funcs/export_module_functions.h"

namespace np = boost::numpy;

using namespace pyfertilized;

BOOST_PYTHON_MODULE(pyfertilized_mf) {
  // Allow releasing the GIL.
  PyEval_InitThreads();
  // Boost numpy needs an initialization method call *critical*.
  np::initialize();
  // Set the documentation to python call signatures and user defined
  // documentation strings.
  // The C++ doc is rather cluttered and not very informative.
  py::docstring_options doc_options;
  doc_options.enable_user_defined();
  doc_options.enable_py_signatures();
  doc_options.disable_cpp_signatures();

  py::scope().attr("__doc__") = "Fertilized module functions Python Interface\n";

  // Export module functions.
  __export_module_function_0();
  __export_module_function_1();
  __export_module_function_2();
  __export_module_function_3();
  __export_module_function_4();
  __export_module_function_5();
  __export_module_function_6();
  __export_module_function_7();
  __export_module_function_8();
  __export_module_function_9();
  __export_module_function_10();
  __export_module_function_11();
  __export_module_function_12();
  __export_module_function_13();
  __export_module_function_14();
  __export_module_function_15();
  __export_module_function_16();
  __export_module_function_17();
  __export_module_function_18();
};
