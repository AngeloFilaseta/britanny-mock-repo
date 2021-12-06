#include <unity.h>
#include "ComponentHwTest.h"
#include "HasOnePinTest.h"

int main(){
    UNITY_BEGIN();
    test_ComponentHw(); //ComponentHwTest
    test_HasOnePin(); //HasOnePinTest
    UNITY_END();
}