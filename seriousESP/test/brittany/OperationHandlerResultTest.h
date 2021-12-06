#include <unity.h>
#include <json/json.h>
#include <json/value.h>
#include "operation-handler/OperationHandlerResult.h"

#define RESULT_CODE 404

Json::Value content;
OperationHandlerResult* result;

void test_code() {
    TEST_ASSERT_EQUAL(RESULT_CODE, result -> code());
}

void test_content() {
    Json::Value json_content = result -> content();
    TEST_ASSERT_EQUAL(1, json_content.get("one", Json::Value()).asInt());
    TEST_ASSERT_TRUE(json_content.get("happy", Json::Value()).asBool());
    TEST_ASSERT_TRUE(json_content.get("two", Json::Value().isNull()));
}

void setup(){
    content["one"] = 1;
    content["happy"] = true;
    result = new OperationHandlerResult(RESULT_CODE, content);
}

void test_OperationHandlerResult() {
    setup();
    RUN_TEST(test_code);
    RUN_TEST(test_content);
}

