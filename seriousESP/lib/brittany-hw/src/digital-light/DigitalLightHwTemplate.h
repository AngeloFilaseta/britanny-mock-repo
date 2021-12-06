#ifndef BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H
#define BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H

#include <string>
#include "../interface/HasOnePin.h"

class DigitalLightHwTemplate : public ComponentHw, public HasOnePin, public Switchable {

public:

    DigitalLightHwTemplate(std::string id, uint8_t pin) :
        ComponentHw(id),
        HasSinglePin(pin),
        Switchable() {

    };

};

#endif //BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H