// Generated from split_quant8_4.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::split_quant8_4 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, split_quant8_4) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, split_quant8_4) { execute(get_test_model()); }

} // namespace generated_tests::split_quant8_4

TEST_AVAILABLE_SINCE(V1_2, split_quant8_4, generated_tests::split_quant8_4::get_test_model());


namespace generated_tests::split_quant8_4 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, split_quant8_4_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, split_quant8_4_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::split_quant8_4

TEST_AVAILABLE_SINCE(V1_2, split_quant8_4_all_inputs_as_internal, generated_tests::split_quant8_4::get_test_model_all_inputs_as_internal());

