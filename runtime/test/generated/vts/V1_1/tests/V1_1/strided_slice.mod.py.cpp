// Generated from strided_slice.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::strided_slice {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::strided_slice

namespace android::hardware::neuralnetworks::V1_1::generated_tests::strided_slice {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, strided_slice) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::strided_slice::get_examples());
}

TEST_F(ValidationTest, strided_slice) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::strided_slice

