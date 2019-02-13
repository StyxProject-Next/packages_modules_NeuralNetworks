// clang-format off
// Generated file (from: conv_1_h3_w2_VALID_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_1_h3_w2_VALID_relaxed {
// Generated conv_1_h3_w2_VALID_relaxed test
#include "generated/examples/conv_1_h3_w2_VALID_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/conv_1_h3_w2_VALID_relaxed.model.cpp"
} // namespace conv_1_h3_w2_VALID_relaxed

TEST_F(GeneratedTests, conv_1_h3_w2_VALID_relaxed) {
    execute(conv_1_h3_w2_VALID_relaxed::CreateModel,
            conv_1_h3_w2_VALID_relaxed::is_ignored,
            conv_1_h3_w2_VALID_relaxed::get_examples());
}

TEST_F(DynamicOutputShapeTest, conv_1_h3_w2_VALID_relaxed_dynamic_output_shape) {
    execute(conv_1_h3_w2_VALID_relaxed::CreateModel_dynamic_output_shape,
            conv_1_h3_w2_VALID_relaxed::is_ignored_dynamic_output_shape,
            conv_1_h3_w2_VALID_relaxed::get_examples_dynamic_output_shape());
}

TEST_F(GeneratedTests, conv_1_h3_w2_VALID_relaxed_2) {
    execute(conv_1_h3_w2_VALID_relaxed::CreateModel_2,
            conv_1_h3_w2_VALID_relaxed::is_ignored_2,
            conv_1_h3_w2_VALID_relaxed::get_examples_2());
}

TEST_F(DynamicOutputShapeTest, conv_1_h3_w2_VALID_relaxed_dynamic_output_shape_2) {
    execute(conv_1_h3_w2_VALID_relaxed::CreateModel_dynamic_output_shape_2,
            conv_1_h3_w2_VALID_relaxed::is_ignored_dynamic_output_shape_2,
            conv_1_h3_w2_VALID_relaxed::get_examples_dynamic_output_shape_2());
}

