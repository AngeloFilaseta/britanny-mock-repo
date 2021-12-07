#ifndef BRITTANY_DIGITAL_LIGHT_HW_H
#define BRITTANY_DIGITAL_LIGHT_HW_H

#include "digital-light/DigitalLightHwTemplate.h"

class DigitalLightHw : public DigitalLightHwTemplate {

public:

    DigitalLightHw(std::string id, uint8_t pin);

    void on();

    void off();

    bool isOn();

};
#endif //BRITTANY_DIGITAL_LIGHT_HW_H
