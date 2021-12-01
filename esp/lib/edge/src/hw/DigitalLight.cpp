#include <Arduino.h>
#include "DigitalLight.h"

DigitalLight::DigitalLight(char pin) : HwComponent(pin) {
  pinMode(pin, OUTPUT);
}

void DigitalLight::on() {
  digitalWrite(HwComponent::pin(), HIGH);
}

void DigitalLight::off() {
  digitalWrite(HwComponent::pin(), LOW);
}

void DigitalLight::blink() {
  this->on();
  delay(DELTA_BLINK);
  this->off();
}
