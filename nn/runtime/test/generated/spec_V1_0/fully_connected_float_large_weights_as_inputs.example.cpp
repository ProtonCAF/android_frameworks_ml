// Generated from fully_connected_float_large_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

using namespace test_helper;

namespace generated_tests::fully_connected_float_large_weights_as_inputs {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1, 2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({1.0f, 10.0f, 100.0f, 1000.0f, 10000.0f}),
                .dimensions = {1, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                .dimensions = {1, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({900000.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({965432.0f}),
                .dimensions = {1, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2, 3},
                .outputs = {4},
                .type = TestOperationType::FULLY_CONNECTED
            }},
        .outputIndexes = {4}
    };
    return model;
}

}  // namespace generated_tests::fully_connected_float_large_weights_as_inputs

namespace generated_tests::fully_connected_float_large_weights_as_inputs {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {5, 8, 11},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({965432.0f}),
                .dimensions = {1, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({1.0f, 10.0f, 100.0f, 1000.0f, 10000.0f}),
                .dimensions = {1, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                .dimensions = {1, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({900000.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
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
                .inputs = {5, 6, 7},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {8, 9, 10},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {11, 12, 13},
                .outputs = {2},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2, 3},
                .outputs = {4},
                .type = TestOperationType::FULLY_CONNECTED
            }},
        .outputIndexes = {4}
    };
    return model;
}

}  // namespace generated_tests::fully_connected_float_large_weights_as_inputs

