#include <Arduino.h>
#include <unity.h>
#include "DigitalLightHwTest.h"

void setup() {
    UNITY_BEGIN();
    test_ComponentHw(); //ComponentHwTest
    UNITY_END();
}

void loop() {

}