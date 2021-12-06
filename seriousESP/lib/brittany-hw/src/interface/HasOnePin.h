#ifndef BRITTANY_HAS_ONE_PIN_COMPONENTHW_H
#define BRITTANY_HAS_ONE_PIN_COMPONENTHW_H

#include <cstdint>

class HasOnePin {

public:

    HasOnePin(uint8_t pin);

    uint8_t pin();

private:

    uint8_t _pin;

};

#endif //BRITTANY_HAS_ONE_PIN_COMPONENTHW_H