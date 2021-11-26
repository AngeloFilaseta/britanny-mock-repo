#ifndef __DIGITAL_LED__
#define __DIGITAL_LED__

#include "HwComponent.h"

#define DELTA_BLINK 50

class DigitalLight : public HwComponent {
  public:

    explicit DigitalLight(char pin);

    void on();

    void off();

    void blink();
};

#endif
