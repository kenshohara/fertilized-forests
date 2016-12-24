/* Author: Christoph Lassner. */
#pragma once
#ifndef FERTILIZED_FEATURES_MULTICHANNELFEATURESELECTIONGENERATOR_H_
#define FERTILIZED_FEATURES_MULTICHANNELFEATURESELECTIONGENERATOR_H_

#ifdef SERIALIZATION_ENABLED
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#endif

#include <unordered_set>
#include <random>
#include <vector>
#include <algorithm>

#include "../global.h"
#include "../types.h"
#include "../data_providers/idataprovider.h"
#include "../util/sampling.h"
#include "./ifeatureselectiongenerator.h"

namespace fertilized {
  /** The generator for the \ref MultiChannelFeatureSelectionProvider.
   *
   * Internal use only.
   */
  class MultiChannelFeatureSelectionGenerator
    : public IFeatureSelectionGenerator {
   public:
    /** Standard constructor. */
    MultiChannelFeatureSelectionGenerator(
      const size_t &dimension,
      const std::vector<size_t> &n_features,
      const size_t &how_many_per_node,
      std::shared_ptr<std::mt19937> random_engine)
    : n_features(n_features),
      dimension(dimension),
      dist_channel(std::uniform_int_distribution<size_t>(0, n_features.size()-1)),
      how_many_per_node(how_many_per_node),
      random_engine(random_engine),
      generated(0) { }

    /** Whether there is another value available. */
    bool available() const {
      return generated < how_many_per_node;
    }

    /** Returns how_many_per_node as specified in the constructor. */
    size_t max_count() const {
      return how_many_per_node;
    }

    /** Get the next proposal.*/
    std::vector<size_t> get_next() {
      if (generated >= how_many_per_node)
        throw Fertilized_Exception("Tried to generate more feature comb. "
          "for a node than there are available.");
      generated++;
      std::vector<size_t> selection;
      do {
        // Draw a channel.
        size_t channel = dist_channel(*random_engine);
        // Draw two dimensions.
        selection = unique_indices<size_t>(dimension,
                                           0,
                                           n_features[channel] - 1,
                                           random_engine.get(),
                                           false);
        size_t index_offset = std::accumulate(std::begin(n_features), std::begin(n_features) + channel, 0);
#ifdef __INTEL_COMPILER
        #pragma simd
#endif
        for (size_t j = 0; j < dimension; ++j) {
          selection[j] += index_offset;
        }
      } while (already_used.find(selection) != already_used.end());
      already_used.emplace(selection);
      return selection;
    }

    const std::vector<size_t> n_features;

  private:
    const size_t dimension;
    std::uniform_int_distribution<size_t> dist_channel;
    const size_t how_many_per_node;
    std::shared_ptr<std::mt19937> random_engine;
    size_t generated;
    proposal_set_t already_used;
  };
}  // namespace fertilized
#endif  // FERTILIZED_FEATURES_VOLUMEFEATURESELECTIONGENERATOR_H_
