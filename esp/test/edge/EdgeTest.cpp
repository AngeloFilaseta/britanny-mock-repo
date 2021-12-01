#include <Arduino.h>
#include <unity.h>
#include <LinkedList.h>
#include "../Util.h"
#include "hw/DigitalLight.h"
#include "module/ModuleModel.h"
#include "API.h"
#include "EdgeModel.h"
#include "module/EdgeModule.h"
#include "Edge.h"

int test_value = 0;

void testHandler() {
    test_value = test_value + 1;
}

Edge* edge;

void test_model(){
    EdgeModel* model = edge -> edgeModel();
    TEST_ASSERT_NOT_NULL(model);
    ModuleModel* moduleModel = model -> modelOf("TestModule");
    TEST_ASSERT_NOT_NULL(moduleModel);
    TEST_ASSERT_EQUAL(LIGHT_PIN, moduleModel -> component() -> pin());
}

void test_api(){
    LinkedList<API*> apis = edge -> edgeApis();
    TEST_ASSERT_EQUAL(2, apis.size());
    TEST_ASSERT_NOT_NULL(apis.get(0));
    TEST_ASSERT_NOT_NULL(apis.get(1));
    for(int i = 0; i < apis.size(); i++) {
        assert_equal_string((String)"/api/test" + i, apis.get(i) -> path());
        (apis.get(i) -> handler())();
    }
    TEST_ASSERT_EQUAL(2, test_value);
}

void initialization() {
    DigitalLight* testComponent = new DigitalLight(LIGHT_PIN);
    ModuleModel* testModuleModel= new ModuleModel(testComponent);
    LinkedList<API*>* testApis = new LinkedList<API*>();
    API* testApi0 = new API("/api/test0", testHandler);
    API* testApi1 = new API("/api/test1", testHandler);
    testApis -> add(testApi0);
    testApis -> add(testApi1);
    LinkedList<EdgeModule*>* modules = new LinkedList<EdgeModule*>();
    EdgeModule* testModule = new EdgeModule("TestModule", testModuleModel, testApis);
    modules -> add(testModule);
    edge = new Edge(modules);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    initialization();
    UNITY_BEGIN();
    RUN_TEST(test_model);
    RUN_TEST(test_api);
    UNITY_END();
}

void loop() {

}
