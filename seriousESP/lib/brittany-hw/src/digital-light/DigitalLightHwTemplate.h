#ifndef BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H
#define BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H

class DigitalLightHwTemplate : public SinglePinHw {

public:

    virtual DigitalLightHwTemplate(std::string id, uint8_t pin) = 0;

    virtual void on() = 0;

    virtual void off() = 0;

    virtual bool isOn() = 0;

};

#endif //BRITTANY_DIGITAL_LIGHT_HW_TEMPLATE_H