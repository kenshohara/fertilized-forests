/* Author: Christoph Lassner. */
#pragma once
#ifndef FERTILIZED_BAGGING_NOBAGGING_H_
#define FERTILIZED_BAGGING_NOBAGGING_H_

#ifdef SERIALIZATION_ENABLED
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#endif

#include <vector>
#include <algorithm>
#include <random>
#include <limits>

#include "../global.h"
#include "../types.h"
#include "../data_providers/iforestdataprovider.h"
#include "./ibaggingstrategy.h"

namespace fertilized {
  /**
   * Perform roughly-balanced bagging.
   *
   * \ingroup fertilizedbaggingGroup
   *
   * -----
   * Available in:
   * - C++
   * - Python
   * - Matlab
   * .
   * Instantiations:
   * - int; int; uint; std::vector<float>; std::vector<float>
   * - float; float; uint; std::vector<float>; std::vector<float>
   * - double; double; uint; std::vector<float>; std::vector<float>
   * - uint8_t; uint8_t; uint; std::vector<float>; std::vector<float>
   * - uint8_t; int16_t; uint; std::vector<float>; std::vector<float>
   * - uint8_t; int16_t; int16_t; std::vector<float>; std::vector<float>
   * - uint8_t; int16_t; int16_t; std::pair<float, std::shared_ptr<std::vector<int16_t>>>; std::vector<std::pair<float, std::shared_ptr<std::vector<int16_t>>>>
   * - uint8_t; int16_t; int16_t; std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>; std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>
   * - float; float; int16_t; std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>; std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>
   * - float; float; float; std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>; std::vector<std::pair<std::pair<std::shared_ptr<std::vector<float>>,std::shared_ptr<std::vector<float>>>,float>>
   * - double; double; double; std::pair<std::shared_ptr<std::vector<double>>,std::shared_ptr<std::vector<double>>>; std::vector<std::pair<std::pair<std::shared_ptr<std::vector<double>>,std::shared_ptr<std::vector<double>>>,float>>
   * .
   *
   * -----
   */
  template <typename input_dtype, typename feature_dtype,typename annotation_dtype, typename leaf_return_dtype,typename forest_return_dtype>
  class RoughlyBalancedBagging
  : public IBaggingStrategy <input_dtype, feature_dtype, annotation_dtype,
                               leaf_return_dtype, forest_return_dtype> {
   public:
    typedef IBaggingStrategy <input_dtype, feature_dtype, annotation_dtype,
      leaf_return_dtype, forest_return_dtype> split_strat_t;
    using typename split_strat_t::training_t;
    using typename split_strat_t::fdprov_t;

    /**
     * -----
     * Available in:
     * - C++
     * - Python
     * - Matlab
     * .
     *
     * -----
     */
    RoughlyBalancedBagging(const uint &n_classes,
                           const std::vector<size_t> &n_class_samples,
                           const uint &random_seed)
                           : n_classes(n_classes),
                             n_class_samples(n_class_samples),
                             random_engine(std::make_shared<std::mt19937>(random_seed)) {
      class_dists.resize(n_classes);

      for (size_t class_id = 0; class_id < n_classes; ++class_id) {
        class_dists[class_id] = std::uniform_int_distribution<size_t>(0, n_class_samples[class_id] - 1);
      }

      auto min_it = std::min_element(std::begin(n_class_samples), std::end(n_class_samples));
      min_class_id = min_it - std::begin(n_class_samples);
      size_t min_n_samples = *min_it;
      data_size_dist = std::negative_binomial_distribution<size_t>(min_n_samples, 0.5);
    };

    /** Returns false. */
    bool provides_validation_data() const { return false; };

    /** Throws. */
    sample_action_map_t update_data_providers(
      const include_pair_t &sample_ids,
      const size_t &originating_tree_index,
      const fdprov_t &fdprov, training_t *training) {
      // TODO(Christoph): complete.
      throw Fertilized_Exception("Not implemented yet.");
    };

    /** Returns split. */
    usage_map_t get_initial_split(const size_t &n_trees, fdprov_t *fdprov) {
      if (n_trees < 2)
        throw Fertilized_Exception("Split must be determined for > 1 tree.");
      auto sample_list_ptr = fdprov -> get_samples();
      size_t n_samples = sample_list_ptr -> size();
      usage_map_t usage_map = usage_map_t();

      for (size_t tree_id = 0 ; tree_id < n_trees; ++tree_id) {
        auto tr_vec = std::make_shared<std::vector<size_t>>();
        auto val_vec = std::make_shared<std::vector<size_t>>();
        usage_map.emplace_back(tr_vec, val_vec);
      }

      std::vector<std::vector<size_t>> class_sample_ids(n_classes);
      const annotation_dtype *annot;
      for (size_t sample_id = 0; sample_id < n_samples; ++sample_id) {
        annot = (*sample_list_ptr)[sample_id].annotation;
        class_sample_ids[*annot].push_back(sample_id);
      }

      for (size_t curr_tree_id = 0; curr_tree_id < n_trees; ++curr_tree_id) {
        for (size_t class_id = 0; class_id < n_classes; ++class_id) {
          size_t n_bag_samples = (class_id == min_class_id) ?
                  n_class_samples[class_id] : data_size_dist(*random_engine);
          for (size_t i = 0; i < n_bag_samples; ++i) {
            size_t rand_sample_id = class_dists[class_id](*random_engine);
            usage_map[curr_tree_id].first -> push_back(class_sample_ids[class_id][rand_sample_id]);
          }
          std::sort(std::begin(*usage_map[curr_tree_id].first), std::end(*usage_map[curr_tree_id].first));
        }
      }
      return usage_map;
    };

    /**
     * -----
     * Available in:
     * - C++
     * - Python
     * - Matlab
     * .
     *
     * -----
     */
    bool operator==(const IBaggingStrategy<input_dtype, feature_dtype, annotation_dtype,
                              leaf_return_dtype, forest_return_dtype> &rhs)
      const {
      const auto *rhs_c = dynamic_cast<RoughlyBalancedBagging<input_dtype,
                                                              feature_dtype,
                                                              annotation_dtype,
                                                              leaf_return_dtype,
                                                              forest_return_dtype> const *>(&rhs);
      if (rhs_c == nullptr) {
        return false;
      } else {
        bool eq_nc = n_classes == rhs_c -> n_classes;
        bool eq_ns = n_class_samples == rhs_c -> n_class_samples;
        bool eq_mc = min_class_id == rhs_c -> min_class_id;
        bool eq_re = *random_engine == *(rhs_c -> random_engine);
        bool eq_dd = data_size_dist == rhs_c -> data_size_dist;
        bool eq_cd = class_dists == rhs_c -> class_dists;
        return eq_nc && eq_ns && eq_mc && eq_re && eq_dd && eq_cd;
      }
    };

#ifdef SERIALIZATION_ENABLED
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const uint file_version) {
      ar & boost::serialization::base_object<split_strat_t>(*this);
      ar & n_classes;
      ar & n_class_samples;
      ar & min_class_id;
      ar & random_engine;
    }
#endif
   protected:
    RoughlyBalancedBagging() {};

   private:
    uint n_classes;
    std::vector<size_t> n_class_samples;
    uint min_class_id;
    std::shared_ptr<std::mt19937> random_engine;
    std::negative_binomial_distribution<size_t> data_size_dist;
    std::vector<std::uniform_int_distribution<size_t>> class_dists;
  };
};  // namespace fertilized
#endif  // FERTILIZED_BAGGING_NOBAGGING_H_
