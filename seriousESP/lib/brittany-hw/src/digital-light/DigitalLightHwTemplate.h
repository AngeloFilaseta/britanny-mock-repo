#ifndef BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H
#define BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H

#include <string>
#include "SinglePinHw.h"

class DigitalLightHwTemplate : public SinglePinHw {

public:

    DigitalLightHwTemplate(std::string id, uint8_t pin) : SinglePinHw(id, pin) { };

    virtual void on() = 0;

    virtual void off() = 0;

    virtual bool isOn() = 0;

};

#endif //BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H