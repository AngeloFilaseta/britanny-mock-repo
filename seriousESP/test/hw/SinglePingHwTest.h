#include <unity.h>
#include "hw/SinglePinHw.h"

#define SINGLE_PIN_ID "single_pin"
#define SINGLE_PIN_PIN 10

SinglePinHw mockSinglePin = SinglePinHw(SINGLE_PIN_ID, SINGLE_PIN_PIN);

void test_get_single_pin_id() {
    TEST_ASSERT_EQUAL_STRING(mockSinglePin.id().c_str(), SINGLE_PIN_ID);
}

void test_get_single_pin_pin() {
    TEST_ASSERT_EQUAL(mockSinglePin.pin(), SINGLE_PIN_PIN);
}

void test_SinglePinHw(){
    RUN_TEST(test_get_single_pin_id);
    RUN_TEST(test_get_single_pin_pin);
}
