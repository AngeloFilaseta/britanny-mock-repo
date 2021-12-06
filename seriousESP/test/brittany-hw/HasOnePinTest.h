#include <unity.h>
#include "interface/HasOnePin.h"

#define SINGLE_PIN_PIN 10

HasOnePin mockOnePin = HasOnePin(SINGLE_PIN_PIN);


void test_get_single_pin_pin() {
    TEST_ASSERT_EQUAL(mockOnePin.pin(), SINGLE_PIN_PIN);
}

void test_HasOnePin(){
    RUN_TEST(test_get_single_pin_pin);
}
