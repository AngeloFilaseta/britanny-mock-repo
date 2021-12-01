#include "EdgeModule.h"
#include <Arduino.h>
#include <LinkedList.h>
#include "ModuleModel.h"
#include "../API.h"

EdgeModule::EdgeModule(String id, ModuleModel* moduleModel, LinkedList<API*>* moduleApis) {
    _id = id;
    _moduleModel = moduleModel;
    _moduleApis = moduleApis;
}

String EdgeModule::id() {
    return _id;
}

ModuleModel* EdgeModule::moduleModel() {
    return _moduleModel;
}

LinkedList<API*>* EdgeModule::moduleApis() {
    return _moduleApis;
}
