#include "ModuleModel.h"
#include "../hw/HwComponent.h"

ModuleModel::ModuleModel(HwComponent *component) {
    _component = component;
}

HwComponent* ModuleModel::component() {
    return _component;
}



