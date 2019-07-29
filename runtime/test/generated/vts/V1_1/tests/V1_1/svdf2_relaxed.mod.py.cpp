// Generated from svdf2_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::svdf2_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::svdf2_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf2_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, svdf2_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::svdf2_relaxed::get_examples());
}

TEST_F(ValidationTest, svdf2_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf2_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::svdf2_relaxed
