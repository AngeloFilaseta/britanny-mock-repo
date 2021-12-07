#include <unity.h>
#include <Arduino.h>
#include "digital-light/DigitalLightHw.h"

#define ON_OFF_TEST_ATTEMPT 10

DigitalLightHw digitalLightHw = DigitalLightHw("digital-light", LED_BUILTIN);

void test_on() {
    digitalLightHw.on();
    TEST_ASSERT_TRUE(digitalLightHw.isOn());
}

void test_off() {
    digitalLightHw.off();
    TEST_ASSERT_FALSE(digitalLightHw.isOn());
}

void test_ComponentHw() {
    for(int i = 0; i < ON_OFF_TEST_ATTEMPT; i++){
        RUN_TEST(test_on);
        RUN_TEST(test_off);
        delay(100);
    }
}

