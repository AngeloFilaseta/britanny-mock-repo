#ifndef BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H
#define BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H

#include <string>
#include "../ComponentHw.h"
#include "../interface/HasOnePin.h"
#include "../interface/Switchable.h"

class DigitalLightHwTemplate : public ComponentHw, public Switchable, public HasOnePin {

public:

    DigitalLightHwTemplate(std::string id, uint8_t pin) :
        ComponentHw(id),
        HasOnePin(pin),
        Switchable() {

    };

};

#endif //BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H