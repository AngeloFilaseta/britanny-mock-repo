#ifndef __HW_COMPONENT__
#define __HW_COMPONENT__

class HwComponent {
    public:

        explicit HwComponent(char pin);

        char pin() const;

    private:

        char pin_;

};

#endif
