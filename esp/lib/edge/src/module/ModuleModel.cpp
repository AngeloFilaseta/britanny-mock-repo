#include "ModuleModel.h"
#include "../HwComponent.h"

ModuleModel::ModuleModel(HwComponent *component) {
    _component = component;
}

HwComponent* ModuleModel::component() {
    return _component;
}



