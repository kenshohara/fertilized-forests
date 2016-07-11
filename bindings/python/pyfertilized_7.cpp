
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

#include "./exporters_vec_types/vec_exporter.h"

namespace np = boost::numpy;

using namespace pyfertilized;

namespace pyfertilized {
  // Forward declarations.
  void __python_export_350();
  void __python_export_351();
  void __python_export_352();
  void __python_export_353();
  void __python_export_354();
  void __python_export_355();
  void __python_export_356();
  void __python_export_357();
  void __python_export_358();
  void __python_export_359();
  void __python_export_360();
  void __python_export_361();
  void __python_export_362();
  void __python_export_363();
  void __python_export_364();
  void __python_export_365();
  void __python_export_366();
  void __python_export_367();
  void __python_export_368();
  void __python_export_369();
  void __python_export_370();
  void __python_export_371();
  void __python_export_372();
  void __python_export_373();
  void __python_export_374();
  void __python_export_375();
  void __python_export_376();
  void __python_export_377();
};

BOOST_PYTHON_MODULE(pyfertilized_7) {
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

  py::scope().attr("__doc__") = "Fertilized Python Interface\n";

  // Export classes.
  __python_export_350();
  __python_export_351();
  __python_export_352();
  __python_export_353();
  __python_export_354();
  __python_export_355();
  __python_export_356();
  __python_export_357();
  __python_export_358();
  __python_export_359();
  __python_export_360();
  __python_export_361();
  __python_export_362();
  __python_export_363();
  __python_export_364();
  __python_export_365();
  __python_export_366();
  __python_export_367();
  __python_export_368();
  __python_export_369();
  __python_export_370();
  __python_export_371();
  __python_export_372();
  __python_export_373();
  __python_export_374();
  __python_export_375();
  __python_export_376();
  __python_export_377();
};