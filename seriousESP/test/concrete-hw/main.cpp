#include <Arduino.h>
#include <unity.h>
#include "DigitalLightHwTest.h"

int main(){
    UNITY_BEGIN();
    test_ComponentHw(); //ComponentHwTest
    UNITY_END();
}