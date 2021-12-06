#include <unity.h>
#include <Arduino.h>

DigitalLightHw digitalLightHw = DigitalLightHw("digital-light", LED_BUILTIN);

void test_on() {
    digitalLightHw.on();
    TEST_ASSERT_EQUAL(digitalLightHw.isOn(), true);
}

void test_off() {
    digitalLightHw.off();
    TEST_ASSERT_EQUAL(digitalLightHw.isOn(), true);
}

void test_ComponentHw() {
    for(int i = 0; i < 10; i++){
        RUN_TEST(test_on);
        RUN_TEST(test_off);
        delay(100);
    }
}

