#ifndef __EDGE_MODEL__
#define __EDGE_MODEL__

#include <Arduino.h>
#include <microTuple.h>
#include "API.h"
#include "module/ModuleModel.h"

class EdgeModel {

    public:

        EdgeModel(LinkedList<MicroTuple<String, ModuleModel*>>* moduleModels);

        ModuleModel* modelOf(String id);

    private:

        LinkedList<MicroTuple<String, ModuleModel*>>* moduleModels;
};

#endif //__EDGE_MODEL__