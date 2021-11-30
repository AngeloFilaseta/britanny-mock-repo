#include "Edge.h"
#include "EdgeModule.h"
#include <Arduino.h>
#include <LinkedList.h>
#include <microTuple.h>

Edge::Edge(LinkedList<EdgeModule*>* modules) {
    LinkedList<MicroTuple<String, ModuleModel*>>* moduleModels = new LinkedList<MicroTuple<String, ModuleModel*>>();
    _edgeApis = LinkedList<API*>();
    for(int i = 0; i < modules -> size(); i++) {
        MicroTuple<String, ModuleModel*> model =
                MicroTuple<String, ModuleModel*>(
                    modules -> get(i) -> id(),
                    modules -> get(i) -> moduleModel()
                );
        moduleModels -> add(model);
        LinkedList<API*>* moduleApis = modules -> get(i) -> moduleApis();
        for(int j = 0; j <  moduleApis -> size(); j++) {
            _edgeApis.add(moduleApis -> get(j));
        }
    }
    _edgeModel = new EdgeModel(moduleModels);
}

EdgeModel *Edge::edgeModel() {
    return _edgeModel;
}

LinkedList<API *> Edge::edgeApis() {
    return _edgeApis;
}
