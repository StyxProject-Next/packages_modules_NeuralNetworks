// Generated from concat_quant8_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::concat_quant8_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {52, 300}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {40, 300}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {92, 300}, 0.5f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type0);
  auto input2 = model->addOperand(&type1);
  auto axis0 = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis0_init[] = {0};
  model->setOperandValue(axis0, axis0_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input1, input2, axis0}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, input2},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_quant8_2
namespace generated_tests::concat_quant8_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {52, 300}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {40, 300}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type0);
  auto input2 = model->addOperand(&type1);
  auto axis0 = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t axis0_init[] = {0};
  model->setOperandValue(axis0, axis0_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input1, input2, axis0}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, input2},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_quant8_2
namespace generated_tests::concat_quant8_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {52, 300}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {40, 300}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {92, 300}, 0.5f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type0);
  auto input2 = model->addOperand(&type1);
  auto axis0 = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis0_init[] = {0};
  model->setOperandValue(axis0, axis0_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy, param}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy1, param1}, {input2});
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input1, input2, axis0}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, input2_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_quant8_2
namespace generated_tests::concat_quant8_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {52, 300}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {40, 300}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type0);
  auto input2 = model->addOperand(&type1);
  auto axis0 = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis0_init[] = {0};
  model->setOperandValue(axis0, axis0_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy2, param2}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy3, param3}, {input2});
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input1, input2, axis0}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, input2_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_quant8_2