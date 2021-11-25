
#include <Arduino.h>
#include <unity.h>

void assert_light_state(int digitalValue) {
    TEST_ASSERT_EQUAL(digitalValue, digitalRead(LED_BUILTIN));
}

void test_is_on(){
    assert_light_state(HIGH);
}

void test_is_off(){
    assert_light_state(LOW);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
    UNITY_BEGIN();
    RUN_TEST(test_is_off);
    digitalWrite(LED_BUILTIN, HIGH);
    RUN_TEST(test_is_on);
    UNITY_END();
}

void loop() {

}
