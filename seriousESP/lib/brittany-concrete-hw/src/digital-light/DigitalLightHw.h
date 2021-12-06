#ifndef BRITTANY_DIGITAL_LIGHT_HW_H
#define BRITTANY_DIGITAL_LIGHT_HW_H

#include "brittany-hw/src/SinglePinHw.h"

class DigitalLightHwTemplate : public SinglePinHw {

public:

    DigitalLightHwTemplate(std::string id, uint8_t pin);

    void on();

    void off();

    bool isOn();

};
#endif //BRITTANY_DIGITAL_LIGHT_HW_H
