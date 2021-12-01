#include <Arduino.h>
#include <unity.h>
#include <LinkedList.h>
#include "../Util.h"
#include "DigitalLight.h"
#include "API.h"
#include "module/EdgeModule.h"

DigitalLight* testComponent = new DigitalLight(LIGHT_PIN);
ModuleModel* testModuleModel= new ModuleModel(testComponent);
LinkedList<API*> *testApis = new LinkedList<API*>();

int test_value = 0;

void testHandler() {
    test_value = test_value + 1;
}

API* testApi = new API("/api/test", testHandler);
EdgeModule testModule = EdgeModule("TestModule", testModuleModel, testApis);

void test_id_get() {
    assert_equal_string("TestModule", testModule.id());
}

void test_api_get() {
    API* api = testModule.moduleApis() -> get(0);
    assert_equal_string("/api/test", api -> path());
    (testModule.moduleApis() -> get(0) -> handler())();
    TEST_ASSERT_EQUAL(1, test_value);
}

void test_model_get() {
    testModule.moduleModel();
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    testApis-> add(testApi);
    UNITY_BEGIN();
    RUN_TEST(test_id_get);
    RUN_TEST(test_api_get);
    RUN_TEST(test_model_get);
    UNITY_END();
}

void loop() {

}
