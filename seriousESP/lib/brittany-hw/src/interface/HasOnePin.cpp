#include "HasOnePin.h"

HasOnePin::HasOnePin(uint8_t pin) {
    _pin = pin;
}

uint8_t HasOnePin::pin() {
    return _pin;
}
