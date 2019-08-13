// Generated from add_broadcast_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::add_broadcast_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::add_broadcast_quant8

namespace android::hardware::neuralnetworks::V1_1::generated_tests::add_broadcast_quant8 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, add_broadcast_quant8) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::add_broadcast_quant8::get_examples());
}

TEST_F(ValidationTest, add_broadcast_quant8) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::add_broadcast_quant8::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::add_broadcast_quant8

namespace generated_tests::add_broadcast_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::add_broadcast_quant8

namespace android::hardware::neuralnetworks::V1_1::generated_tests::add_broadcast_quant8 {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, add_broadcast_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::add_broadcast_quant8::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, add_broadcast_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::add_broadcast_quant8::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::add_broadcast_quant8
