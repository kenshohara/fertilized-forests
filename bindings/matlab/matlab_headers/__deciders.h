
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#ifndef MATFERTILIZED_MATLAB_HEADERS_DECIDERS_H_
#define MATFERTILIZED_MATLAB_HEADERS_DECIDERS_H_

#include <mex.h>

#include "./global.h"

#ifdef __cplusplus
extern "C"
{
#endif


     void * getThresholdDecider_i_i_uint (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_uint8_uint8_uint (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_uint8_int16_uint (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_f_f_uint (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_d_d_uint (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_uint8_int16_int16 (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_f_f_f (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);
     void * getThresholdDecider_d_d_d (

        void * selection_provider,
        void * feature_calculator,
        void * threshold_optimizer,
        size_t n_valid_features_to_use,
        int num_threads,
        int use_hough_heuristic,
        float hough_heuristic_ratio,
        unsigned int hough_heuristic_maxd,
        int allow_early_stopping
);


     mxArray * compute_feature_importancesThresholdDecider_i_i_uint (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_uint8_uint8_uint (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_uint8_int16_uint (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_f_f_uint (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_d_d_uint (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_uint8_int16_int16 (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_f_f_f (void *__instance

);
     mxArray * compute_feature_importancesThresholdDecider_d_d_d (void *__instance

);


     int eqThresholdDecider_i_i_uint (void *__instance,

        void * rhs
);
     int eqThresholdDecider_uint8_uint8_uint (void *__instance,

        void * rhs
);
     int eqThresholdDecider_uint8_int16_uint (void *__instance,

        void * rhs
);
     int eqThresholdDecider_f_f_uint (void *__instance,

        void * rhs
);
     int eqThresholdDecider_d_d_uint (void *__instance,

        void * rhs
);
     int eqThresholdDecider_uint8_int16_int16 (void *__instance,

        void * rhs
);
     int eqThresholdDecider_f_f_f (void *__instance,

        void * rhs
);
     int eqThresholdDecider_d_d_d (void *__instance,

        void * rhs
);
     void delete_ThresholdDecider_i_i_uint(void *ptr);
     void delete_ThresholdDecider_uint8_uint8_uint(void *ptr);
     void delete_ThresholdDecider_uint8_int16_uint(void *ptr);
     void delete_ThresholdDecider_f_f_uint(void *ptr);
     void delete_ThresholdDecider_d_d_uint(void *ptr);
     void delete_ThresholdDecider_uint8_int16_int16(void *ptr);
     void delete_ThresholdDecider_f_f_f(void *ptr);
     void delete_ThresholdDecider_d_d_d(void *ptr);
#ifdef __cplusplus
}
#endif 

#endif //#ifndef MATFERTILIZED_MATLAB_HEADERS_DECIDERS_H_