#include <Arduino.h>
#include <unity.h>
#include <DigitalLight.h>

#define LIGHT_PIN LED_BUILTIN

void assert_light_state(int digitalValue) {
    TEST_ASSERT_EQUAL(digitalValue, digitalRead(LIGHT_PIN));
}

void test_is_on(){
    assert_light_state(HIGH);
}

void test_is_off(){
    assert_light_state(LOW);
}

DigitalLight digitalLight(LIGHT_PIN);

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    digitalLight.off();
    UNITY_BEGIN();
    RUN_TEST(test_is_off);
    digitalLight.on();
    RUN_TEST(test_is_on);
    digitalLight.off();
    RUN_TEST(test_is_off);
    UNITY_END();
}

void loop() {

}
