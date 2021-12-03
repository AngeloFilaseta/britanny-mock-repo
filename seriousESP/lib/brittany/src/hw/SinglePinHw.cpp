
#include "SinglePinHw.h"

SinglePinHw::SinglePinHw(std::string id, uint8_t pin): ComponentHw(id) {
    _pin = pin;
}

uint8_t SinglePinHw::pin() {
    return _pin;
}
