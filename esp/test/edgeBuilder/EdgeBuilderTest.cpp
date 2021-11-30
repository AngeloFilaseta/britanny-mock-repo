#include <Arduino.h>
#include <unity.h>
#include <LinkedList.h>
#include "../Util.h"
#include "DigitalLight.h"
#include "ModuleModel.h"
#include "API.h"
#include "EdgeModel.h"
#include "EdgeModule.h"
#include "Edge.h"
#include "EdgeBuilder.h"

Edge* edge;

int pin_of_model(EdgeModel* edgeModel, String modelName) {
    return edgeModel-> modelOf(modelName) -> component() -> pin();
}

void test_edge_integrity(){
    EdgeModel* edgeModel = edge -> edgeModel();
    TEST_ASSERT_EQUAL(LIGHT_PIN, pin_of_model(edgeModel, "TestModule0"));
    TEST_ASSERT_EQUAL(LIGHT_PIN, pin_of_model(edgeModel, "TestModule1"));
    TEST_ASSERT_NULL(edgeModel-> modelOf("TestModule2"));
    TEST_ASSERT_EQUAL(2, edge -> edgeApis().size());
}

void initialization() {
    DigitalLight* testComponent = new DigitalLight(LIGHT_PIN);
    ModuleModel* testModuleModel= new ModuleModel(testComponent);
    LinkedList<API*>* testApis = new LinkedList<API*>();
    API* testApi = new API("/api/test", NULL);
    testApis -> add(testApi);
    EdgeModule* testModule0 = new EdgeModule("TestModule0", testModuleModel, testApis);
    EdgeModule* testModule1 = new EdgeModule("TestModule1", testModuleModel, testApis);
    EdgeBuilder edgeBuilder = EdgeBuilder();
    edge = edgeBuilder.add(testModule0).add(testModule1).build();
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    initialization();
    UNITY_BEGIN();
    RUN_TEST(test_edge_integrity);
    UNITY_END();
}

void loop() {

}
