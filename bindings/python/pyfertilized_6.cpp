
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
  void __python_export_300();
  void __python_export_301();
  void __python_export_302();
  void __python_export_303();
  void __python_export_304();
  void __python_export_305();
  void __python_export_306();
  void __python_export_307();
  void __python_export_308();
  void __python_export_309();
  void __python_export_310();
  void __python_export_311();
  void __python_export_312();
  void __python_export_313();
  void __python_export_314();
  void __python_export_315();
  void __python_export_316();
  void __python_export_317();
  void __python_export_318();
  void __python_export_319();
  void __python_export_320();
  void __python_export_321();
  void __python_export_322();
  void __python_export_323();
  void __python_export_324();
  void __python_export_325();
  void __python_export_326();
  void __python_export_327();
  void __python_export_328();
  void __python_export_329();
  void __python_export_330();
  void __python_export_331();
  void __python_export_332();
  void __python_export_333();
  void __python_export_334();
  void __python_export_335();
  void __python_export_336();
  void __python_export_337();
  void __python_export_338();
  void __python_export_339();
  void __python_export_340();
  void __python_export_341();
  void __python_export_342();
  void __python_export_343();
  void __python_export_344();
  void __python_export_345();
  void __python_export_346();
  void __python_export_347();
  void __python_export_348();
  void __python_export_349();
};

BOOST_PYTHON_MODULE(pyfertilized_6) {
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
  __python_export_300();
  __python_export_301();
  __python_export_302();
  __python_export_303();
  __python_export_304();
  __python_export_305();
  __python_export_306();
  __python_export_307();
  __python_export_308();
  __python_export_309();
  __python_export_310();
  __python_export_311();
  __python_export_312();
  __python_export_313();
  __python_export_314();
  __python_export_315();
  __python_export_316();
  __python_export_317();
  __python_export_318();
  __python_export_319();
  __python_export_320();
  __python_export_321();
  __python_export_322();
  __python_export_323();
  __python_export_324();
  __python_export_325();
  __python_export_326();
  __python_export_327();
  __python_export_328();
  __python_export_329();
  __python_export_330();
  __python_export_331();
  __python_export_332();
  __python_export_333();
  __python_export_334();
  __python_export_335();
  __python_export_336();
  __python_export_337();
  __python_export_338();
  __python_export_339();
  __python_export_340();
  __python_export_341();
  __python_export_342();
  __python_export_343();
  __python_export_344();
  __python_export_345();
  __python_export_346();
  __python_export_347();
  __python_export_348();
  __python_export_349();
};