// Generated from bidirectional_sequence_lstm_state_output.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::bidirectional_sequence_lstm_state_output {

const TestModel& get_test_model_blackbox() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 53, 54, 55, 56, 57, 58, 59, 60},
                .operands = {{ // input
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f, 3.0f, 3.0f, 4.0f, 1.0f, 1.0f}),
                            .dimensions = {3, 1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_forget_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 1.0f, 1.0f, 1.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_projection_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_projection_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_forget_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 1.0f, 1.0f, 1.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_projection_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_projection_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_activatiom_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_activatiom_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // input1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_aux_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_forget_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_aux_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_aux_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_aux_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_forget_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_aux_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_aux_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // activation
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({4}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // cell_clip
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, { // proj_clip
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, { // merge_outputs
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({false}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, { // time_major
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, { // input_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // forget_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // cell_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // output_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // input_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // forget_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // cell_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // output_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.02973187f, 0.1229473f, 0.20885126f, -0.15358765f, -0.03716109f, 0.12507336f, 0.41193449f, -0.20860538f, -0.15053082f, 0.09120187f, 0.24278517f, -0.12222792f}),
                            .dimensions = {3, 1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0806187f, 0.139077f, 0.400476f, -0.197842f, -0.0332076f, 0.123838f, 0.309777f, -0.17621f, -0.0490733f, 0.0739237f, 0.067706f, -0.0208124f}),
                            .dimensions = {3, 1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output_activation_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.15053082f, 0.09120187f, 0.24278517f, -0.12222792f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.41584f, 0.1496f, 0.407424f, -0.252775f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output_activation_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0806187f, 0.139077f, 0.400476f, -0.197842f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.402085f, 0.178675f, 0.610687f, -0.373812f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
                            .outputs = {61, 62, 63, 64, 65, 66},
                            .type = TestOperationType::BIDIRECTIONAL_SEQUENCE_LSTM
                        }},
                .outputIndexes = {61, 62, 63, 64, 65, 66}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_blackbox = TestModelManager::get().add("bidirectional_sequence_lstm_state_output_blackbox", get_test_model_blackbox());

}  // namespace generated_tests::bidirectional_sequence_lstm_state_output

namespace generated_tests::bidirectional_sequence_lstm_state_output {

const TestModel& get_test_model_blackbox_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {9, 10, 11, 16, 17, 26, 27, 28, 33, 34, 39, 40, 41, 42, 43, 44, 45, 46, 47, 53, 54, 55, 56, 57, 58, 59, 60, 67, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97, 100, 103, 106, 109, 112, 115, 118, 121, 124, 127, 130, 133, 136, 139, 142, 145, 148, 151},
                .operands = {{ // input
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_forget_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_projection_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_projection_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_to_forget_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_forget_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output_gate_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_projection_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_projection_bias
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_activatiom_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_activatiom_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // input1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_aux_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_forget_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_aux_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_aux_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_aux_input_to_input_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_forget_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_aux_input_to_cell_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_aux_input_to_output_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // activation
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({4}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // cell_clip
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, { // proj_clip
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::FLOAT32,
                            .zeroPoint = 0
                        }, { // merge_outputs
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({false}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, { // time_major
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::BOOL,
                            .zeroPoint = 0
                        }, { // input_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // forget_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // cell_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // output_layer_norm_weights
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // input_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // forget_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // cell_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // output_layer_norm_weights1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.02973187f, 0.1229473f, 0.20885126f, -0.15358765f, -0.03716109f, 0.12507336f, 0.41193449f, -0.20860538f, -0.15053082f, 0.09120187f, 0.24278517f, -0.12222792f}),
                            .dimensions = {3, 1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0806187f, 0.139077f, 0.400476f, -0.197842f, -0.0332076f, 0.123838f, 0.309777f, -0.17621f, -0.0490733f, 0.0739237f, 0.067706f, -0.0208124f}),
                            .dimensions = {3, 1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output_activation_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.15053082f, 0.09120187f, 0.24278517f, -0.12222792f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // fw_output_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.41584f, 0.1496f, 0.407424f, -0.252775f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output_activation_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0806187f, 0.139077f, 0.400476f, -0.197842f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // bw_output_cell_state
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.402085f, 0.178675f, 0.610687f, -0.373812f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // input_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f, 3.0f, 3.0f, 4.0f, 1.0f, 1.0f}),
                            .dimensions = {3, 1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_input_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_forget_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_cell_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_input_to_output_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_input_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_forget_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_cell_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_recurrent_to_output_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_input_gate_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_forget_gate_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 1.0f, 1.0f, 1.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_cell_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_output_gate_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy12
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param12
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_input_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy13
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param13
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_forget_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy14
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param14
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_cell_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy15
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param15
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_input_to_output_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}),
                            .dimensions = {4, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy16
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param16
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_input_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy17
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param17
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_forget_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy18
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param18
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_cell_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy19
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param19
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_recurrent_to_output_weights_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}),
                            .dimensions = {4, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy20
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param20
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_input_gate_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy21
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param21
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_forget_gate_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 1.0f, 1.0f, 1.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy22
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param22
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_cell_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy23
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param23
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_output_gate_bias_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy24
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param24
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_activatiom_state_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy25
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param25
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // fw_cell_state_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy26
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param26
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_activatiom_state_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy27
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param27
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // bw_cell_state_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f, 0.0f, 0.0f, 0.0f}),
                            .dimensions = {1, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // dummy28
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param28
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {67, 68, 69},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {70, 71, 72},
                            .outputs = {1},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {73, 74, 75},
                            .outputs = {2},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {76, 77, 78},
                            .outputs = {3},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {79, 80, 81},
                            .outputs = {4},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {82, 83, 84},
                            .outputs = {5},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {85, 86, 87},
                            .outputs = {6},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {88, 89, 90},
                            .outputs = {7},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {91, 92, 93},
                            .outputs = {8},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {94, 95, 96},
                            .outputs = {12},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {97, 98, 99},
                            .outputs = {13},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {100, 101, 102},
                            .outputs = {14},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {103, 104, 105},
                            .outputs = {15},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {106, 107, 108},
                            .outputs = {18},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {109, 110, 111},
                            .outputs = {19},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {112, 113, 114},
                            .outputs = {20},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {115, 116, 117},
                            .outputs = {21},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {118, 119, 120},
                            .outputs = {22},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {121, 122, 123},
                            .outputs = {23},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {124, 125, 126},
                            .outputs = {24},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {127, 128, 129},
                            .outputs = {25},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {130, 131, 132},
                            .outputs = {29},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {133, 134, 135},
                            .outputs = {30},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {136, 137, 138},
                            .outputs = {31},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {139, 140, 141},
                            .outputs = {32},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {142, 143, 144},
                            .outputs = {35},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {145, 146, 147},
                            .outputs = {36},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {148, 149, 150},
                            .outputs = {37},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {151, 152, 153},
                            .outputs = {38},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
                            .outputs = {61, 62, 63, 64, 65, 66},
                            .type = TestOperationType::BIDIRECTIONAL_SEQUENCE_LSTM
                        }},
                .outputIndexes = {61, 62, 63, 64, 65, 66}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_blackbox_all_inputs_as_internal = TestModelManager::get().add("bidirectional_sequence_lstm_state_output_blackbox_all_inputs_as_internal", get_test_model_blackbox_all_inputs_as_internal());

}  // namespace generated_tests::bidirectional_sequence_lstm_state_output

