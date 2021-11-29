#include <Arduino.h>
#include <unity.h>
#include "API.h"
#include "../Util.h"

int test_value = 0;

void handler() {
    test_value = test_value + 1;
}

API api = API("/api/test", handler);

void test_path_name() {
    assert_equal_string("/api/test", api.path());
}

void test_handler_working() {
    TEST_ASSERT_EQUAL(1, test_value);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test_path_name);
    (api.handler())();
    RUN_TEST(test_handler_working);
    UNITY_END();
}

void loop() {

}
