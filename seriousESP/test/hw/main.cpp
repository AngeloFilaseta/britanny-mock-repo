#include <unity.h>
#include "ComponentHwTest.h"
#include "SinglePingHwTest.h"

int main(){
    UNITY_BEGIN();
    test_ComponentHw(); //ComponentHwTest
    test_SinglePinHw(); //SinglePinHwTest
    UNITY_END();
}