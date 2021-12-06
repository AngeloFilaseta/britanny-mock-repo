#include "DigitalLightHw.h"
#include <Arduino.h>

DigitalLightHwTemplate::DigitalLightHwTemplate(std::string id, uint8_t pin) : SinglePinHw(id, pin) {
    pinMode(pin, OUTPUT);
}

void DigitalLightHwTemplate::on() {
    digitalWrite(pin(), HIGH);
}

void DigitalLightHwTemplate::off() {
    digitalWrite(pin(), LOW);
}

bool DigitalLightHwTemplate::isOn() {
    return digitalRead(pin()) == HIGH;
}
