#ifndef BRITTANY_MOCK_DIGITAL_LIGHT_HW_TEMPLATE_H
#define BRITTANY_MOCK_DIGITAL_LIGHT_HW_TEMPLATE_H

#include <string>
#include "../DigitalLightHwTemplate.h"

class MockDigitalLightHw : public DigitalLightHwTemplate {

public:

    MockDigitalLightHw(std::string id, uint8_t pin) : DigitalLightHwTemplate(id, pin){ }

    void on();

    void off();

    bool isOn();

private:

    bool _isOn;
};

#endif //BRITTANY_MOCK_DIGITAL_LIGHT_HW_TEMPLATE_H