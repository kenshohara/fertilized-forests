
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/__trainings.h"
#include <../../include/fertilized\trainings/classictraining.h>

using namespace fertilized;




          void * getClassicTraining_f_f_int16_ht_vht (

        void * bagging_strategy
) {
  // From C types conversions.

    auto __converted_bagging_strategy = *reinterpret_cast<std::shared_ptr<fertilized::ClassicTraining<float, float, int16_t, std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>, std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>::bag_strat_t>*>(bagging_strategy);
              

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto *libfunc_result = new std::shared_ptr<ClassicTraining<float,float,int16_t,std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>,std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>>(
    new ClassicTraining<
              float,
              float,
              int16_t,
              std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>,
              std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>
>(
          __converted_bagging_strategy
          ));
#pragma warning( pop )

  void *__converted_return_value = reinterpret_cast<void*>(libfunc_result);
  return __converted_return_value;
}		


          int eqClassicTraining_f_f_int16_ht_vht (void *__instance,

        void * rhs
) {
  // Unpack instance.
  auto __instance_unpacked = *static_cast<std::shared_ptr<ClassicTraining<float,float,int16_t,std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>,std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>>*>(__instance);
  // From C types conversions.

    auto __shptr_rhs = *reinterpret_cast<std::shared_ptr<fertilized::ITraining<float, float, int16_t, std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>, std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>>*>(rhs);
    auto &__converted_rhs = *(__shptr_rhs.get());
            

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto libfunc_result = __instance_unpacked -> operator==(
          __converted_rhs
  );
#pragma warning( pop )

  return libfunc_result;
}		
// Destructor.
void delete_ClassicTraining_f_f_int16_ht_vht(void *ptr) {
  auto * storage = static_cast<std::shared_ptr<ClassicTraining<float,float,int16_t,std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>,std::vector<std::tuple<float, std::shared_ptr<std::vector<int16_t>>, std::shared_ptr<std::vector<int16_t>>>>>>*>(ptr);
  delete storage;
}
