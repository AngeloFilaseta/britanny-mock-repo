#include <Arduino.h>
#include <unity.h>
#include <LinkedList.h>
#include <microTuple.h>
#include "module/ModuleModel.h"
#include "hw/DigitalLight.h"
#include "EdgeModel.h"
#include "../Util.h"

#define HW_COMPONENT_PIN 0

LinkedList<MicroTuple<String, ModuleModel*>>* moduleModels = new LinkedList<MicroTuple<String, ModuleModel*>>;
EdgeModel edgeModel = EdgeModel(moduleModels);

void test_get_light(){
    ModuleModel* model = edgeModel.modelOf("TestLight");
    TEST_ASSERT_EQUAL(LIGHT_PIN, model -> component() -> pin());
}

void test_get_component(){
    ModuleModel* model = edgeModel.modelOf("TestComponent");
    TEST_ASSERT_EQUAL(HW_COMPONENT_PIN, model -> component() -> pin());
}

void test_get_fail(){
    TEST_ASSERT_NULL(edgeModel.modelOf("IDoNotExist"));
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    DigitalLight* light = new DigitalLight(LIGHT_PIN);
    HwComponent* hwComponent = new HwComponent(HW_COMPONENT_PIN);
    ModuleModel* lightModuleModel = new ModuleModel(light);
    ModuleModel* hwComponentModuleModel = new ModuleModel(hwComponent);
    MicroTuple<String, ModuleModel*> lightTuple("TestLight", lightModuleModel);
    MicroTuple<String, ModuleModel*> hwComponentTuple("TestComponent", hwComponentModuleModel);
    moduleModels -> add(lightTuple);
    moduleModels -> add(hwComponentTuple);
    UNITY_BEGIN();
    RUN_TEST(test_get_light);
    RUN_TEST(test_get_component);
    RUN_TEST(test_get_fail);
    UNITY_END();
}

void loop() {

}
