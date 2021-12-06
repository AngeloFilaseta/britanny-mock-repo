#ifndef BRITTANY_ON_OFF_HW_TEMPLATE_H
#define BRITTANY_ON_OFF_HW_TEMPLATE_H

class Switchable {

public:

    virtual void on() = 0;

    virtual void off() = 0;

    virtual bool isOn() = 0;

};

#endif //BRITTANY_ON_OFF_HW_TEMPLATE_H