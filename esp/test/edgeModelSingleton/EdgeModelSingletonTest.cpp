#include <Arduino.h>
#include <unity.h>
#include <LinkedList.h>
#include "HwComponent.h"
#include "ModuleModel.h"
#include "microTuple.h"
#include "singleton/EdgeModelSingleton.h"

LinkedList<MicroTuple<String, ModuleModel*>>* moduleModels = new LinkedList<MicroTuple<String, ModuleModel*>>;
EdgeModelSingleton *EdgeModelSingleton::instance = 0;
EdgeModelSingleton *s = s -> getInstance();

void test_singleton_get_before_set() {
    TEST_ASSERT_NULL(s -> model());
}

void test_singleton_get_after_set() {
    TEST_ASSERT_NOT_NULL(s -> model());
    TEST_ASSERT_EQUAL(LED_BUILTIN, s -> model() -> modelOf("TestComponent") -> component() -> pin());
}

void initialization() {
    HwComponent* hwComponent = new HwComponent(LED_BUILTIN);
    ModuleModel* hwComponentModuleModel = new ModuleModel(hwComponent);
    MicroTuple<String, ModuleModel*> hwComponentTuple("TestComponent", hwComponentModuleModel);
    moduleModels -> add(hwComponentTuple);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    initialization();
    UNITY_BEGIN();
    RUN_TEST(test_singleton_get_before_set);
    s->setModel(moduleModels);
    RUN_TEST(test_singleton_get_after_set);
    UNITY_END();
}

void loop() {

}
