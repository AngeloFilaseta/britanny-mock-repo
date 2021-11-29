#include <LinkedList.h>
#include "EdgeModel.h"
#include "ModuleModel.h"
#include <microTuple.h>

EdgeModel::EdgeModel(LinkedList<MicroTuple<String, ModuleModel*>>* models) {
    moduleModels = models;
}

ModuleModel* EdgeModel::modelOf(String id) {
    for(int i = 0; i < moduleModels -> size(); i++) {
        MicroTuple<String,ModuleModel*> element = moduleModels -> get(i);
        if(element.get<0>().equals(id)) {
            return element.get<1>();
        }
    }
    return NULL;
}




