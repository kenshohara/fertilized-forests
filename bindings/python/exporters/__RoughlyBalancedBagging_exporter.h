
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */

#pragma once
#ifndef PYFERTILIZED_EXPORTERS___ROUGHLYBALANCEDBAGGING_EXPORTER_H_
#define PYFERTILIZED_EXPORTERS___ROUGHLYBALANCEDBAGGING_EXPORTER_H_

#include "../global.h"

#pragma warning(push, 0)
#include <fertilized/ndarray/bp/auto.h>
#pragma warning(pop)
#ifdef SERIALIZATION_ENABLED
#include <boost/serialization/serialization.hpp>
#endif

#include "../util.h"
#include "../serialization.h"

#include <fertilized/bagging/roughlybalancedbagging.h>
namespace py = boost::python;
using namespace fertilized;

namespace pyfertilized {
#ifdef SERIALIZATION_ENABLED
  template <typename input_dtype,typename feature_dtype,typename annotation_dtype,typename leaf_return_dtype,typename forest_return_dtype>
  std::shared_ptr<RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>> __construct_RoughlyBalancedBagging() {
    auto *ptr = (RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>*) malloc(sizeof(RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>));
    boost::serialization::access::construct(ptr);
    return std::shared_ptr<RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>>(ptr, free);
  };
#endif
  template <typename input_dtype,typename feature_dtype,typename annotation_dtype,typename leaf_return_dtype,typename forest_return_dtype>
  void export_RoughlyBalancedBagging(const std::string &type_short) {
    // Explicit function pointers and overloads.
    bool (fertilized::RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>::*ptr_RoughlyBalancedBagging_0)
    (

        const fertilized::IBaggingStrategy<input_dtype, feature_dtype, annotation_dtype, leaf_return_dtype, forest_return_dtype> &
) const =
      &fertilized::RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>::operator==;
    bool (*ptr_RoughlyBalancedBagging_1)
    (

        const fertilized::IBaggingStrategy<input_dtype, feature_dtype, annotation_dtype, leaf_return_dtype, forest_return_dtype> &
,
     

        const fertilized::IBaggingStrategy<input_dtype, feature_dtype, annotation_dtype, leaf_return_dtype, forest_return_dtype> &
) =
    &ne_from_eq<fertilized::IBaggingStrategy<input_dtype, feature_dtype, annotation_dtype, leaf_return_dtype, forest_return_dtype>>;
    py::class_<RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>,
               std::shared_ptr<RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>>,
               boost::noncopyable,
               py::bases<IBaggingStrategy <input_dtype, feature_dtype, annotation_dtype,
                               leaf_return_dtype, forest_return_dtype> >>
               (("RoughlyBalancedBagging" + type_short).c_str(),
                "Perform roughly-balanced bagging.\n\
\n\
\n\
-----\n\
\n\
Available in:\n\
\n\
- C++\n\
- Python\n\
- Matlab\n\
\n\
Instantiations:\n\
\n\
- int; int; uint; std::vector<float>; std::vector<float>\n\
- float; float; uint; std::vector<float>; std::vector<float>\n\
- double; double; uint; std::vector<float>; std::vector<float>\n\
- uint8_t; uint8_t; uint; std::vector<float>; std::vector<float>\n\
- uint8_t; int16_t; uint; std::vector<float>; std::vector<float>\n\
- uint8_t; int16_t; int16_t; std::vector<float>; std::vector<float>\n\
- uint8_t; int16_t; int16_t; std::pair<float, std::shared_ptr<std::vector<int16_t>>>; std::vector<std::pair<float, std::shared_ptr<std::vector<int16_t>>>>\n\
- uint8_t; int16_t; int16_t; std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>; std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>\n\
- float; float; int16_t; std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>; std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>\n\
- float; float; float; std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>; std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>\n\
- double; double; double; std::pair<std::shared_ptr<std::vector<double>>,std::shared_ptr<std::vector<double>>>; std::vector<std::pair<std::pair<std::shared_ptr<std::vector<double>>,std::shared_ptr<std::vector<double>>>,float>>\n\
\n\
\n\
-----\n\
",
                 py::init<

        const unsigned int &,
        const std::vector<size_t> &,
        const unsigned int &
                         >())
#ifdef SERIALIZATION_ENABLED
    // Pickle support constructor.
    .def("__init__", py::make_constructor(__construct_RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>))
    .def_pickle(ParameterlessPickleSuite<RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>>())
#endif
    .def("__eq__", ptr_RoughlyBalancedBagging_0, "-----\n\
\n\
Available in:\n\
\n\
- C++\n\
- Python\n\
- Matlab\n\
\n\
\n\
-----\n\
")
    .def("__ne__", ptr_RoughlyBalancedBagging_1, "")
    ;

    py::implicitly_convertible<std::shared_ptr<RoughlyBalancedBagging<input_dtype,feature_dtype,annotation_dtype,leaf_return_dtype,forest_return_dtype>>,
                               std::shared_ptr<IBaggingStrategy <input_dtype, feature_dtype, annotation_dtype,
                               leaf_return_dtype, forest_return_dtype> > >();
  };
}  // namespace fertilized

#endif  // PYFERTILIZED_EXPORTERS___ROUGHLYBALANCEDBAGGING_EXPORTER_H_