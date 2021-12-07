#ifndef BRITTANY_SWITCHABLE_H
#define BRITTANY_SWITCHABLE_H

class Switchable {

public:

    virtual void on() = 0;

    virtual void off() = 0;

    virtual bool isOn() = 0;

};

#endif //BRITTANY_SWITCHABLE_H