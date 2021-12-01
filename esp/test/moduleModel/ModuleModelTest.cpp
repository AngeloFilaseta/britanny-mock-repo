#include <Arduino.h>
#include <unity.h>
#include "module/ModuleModel.h"
#include "../Util.h"
#include "hw/DigitalLight.h"

DigitalLight* light = new DigitalLight(LIGHT_PIN);
ModuleModel moduleModel = ModuleModel(light);

void test_hw_get_working() {
    DigitalLight* componentOfModule = (DigitalLight*) moduleModel.component();
    TEST_ASSERT_EQUAL(LED_BUILTIN, componentOfModule->pin());
    componentOfModule->off();
    TEST_ASSERT_EQUAL(LOW, digitalRead(LED_BUILTIN));
    componentOfModule->on();
    TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test_hw_get_working);
    UNITY_END();
}

void loop() {

}
