// Generated from max_pool_float_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::max_pool_float_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::max_pool_float_2

namespace android::hardware::neuralnetworks::V1_1::generated_tests::max_pool_float_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, max_pool_float_2) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::max_pool_float_2::get_examples());
}

TEST_F(ValidationTest, max_pool_float_2) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::max_pool_float_2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::max_pool_float_2

