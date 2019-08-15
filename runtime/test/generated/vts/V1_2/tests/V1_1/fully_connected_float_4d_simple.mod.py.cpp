// Generated from fully_connected_float_4d_simple.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::fully_connected_float_4d_simple {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::fully_connected_float_4d_simple

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_float_4d_simple {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_float_4d_simple) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::fully_connected_float_4d_simple::get_examples());
}

TEST_F(ValidationTest, fully_connected_float_4d_simple) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_float_4d_simple::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_float_4d_simple

namespace generated_tests::fully_connected_float_4d_simple {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::fully_connected_float_4d_simple

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_float_4d_simple {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, fully_connected_float_4d_simple_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::fully_connected_float_4d_simple::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, fully_connected_float_4d_simple_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_float_4d_simple::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_float_4d_simple

