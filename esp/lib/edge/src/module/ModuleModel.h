#ifndef __MODULE_MODEL__
#define __MODULE_MODEL__

#include "../hw/HwComponent.h"

class ModuleModel {

    public:

        ModuleModel(HwComponent* component);

        HwComponent* component();

    private:

        HwComponent* _component;
};

#endif //__MODULE_MODEL__