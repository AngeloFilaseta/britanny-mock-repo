#ifndef ESP_UTIL_H
#define ESP_UTIL_H

#include <Arduino.h>

#define LIGHT_PIN LED_BUILTIN

void assert_equal_string(String expected, String actual){
    int ex_length = expected.length() + 1;
    char expectedChar[ex_length];
    expected.toCharArray(expectedChar, ex_length);

    int ac_length = actual.length() + 1;
    char actualChar[ac_length];
    actual.toCharArray(actualChar, ac_length);

    TEST_ASSERT_EQUAL_STRING(expectedChar, actualChar);
}

#endif //ESP_UTIL_H
