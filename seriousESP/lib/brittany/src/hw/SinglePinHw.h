#ifndef BRITTANY_SINGLE_PIN_COMPONENTHW_H
#define BRITTANY_SINGLE_PIN_COMPONENTHW_H

#include "ComponentHw.h"

class SinglePinHw : public ComponentHw {

public:

    SinglePinHw(std::string id, uint8_t pin);

    uint8_t pin();

private:

    uint8_t _pin;

};
#endif //BRITTANY_SINGLE_PIN_COMPONENTHW_H