#ifndef ESP_EDGEMODELSINGLETON_H
#define ESP_EDGEMODELSINGLETON_H

#include <Arduino.h>
#include <LinkedList.h>
#include "../EdgeModel.h"
#include "ModuleModel.h"

class EdgeModelSingleton {
    static EdgeModelSingleton *instance;
    EdgeModel* _model;

    // Private constructor so that no objects can be created.
    EdgeModelSingleton() { }

public:
    static EdgeModelSingleton *getInstance() {
        if (!instance)
            instance = new EdgeModelSingleton;
        return instance;
    }

    EdgeModel* model() {
        return this -> _model;
    }

    void setModel(LinkedList<MicroTuple<String, ModuleModel*>>* models) {
        this -> _model = new EdgeModel(models);
    }
};

#endif //ESP_EDGEMODELSINGLETON_H
