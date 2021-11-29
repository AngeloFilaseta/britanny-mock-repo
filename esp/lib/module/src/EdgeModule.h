#ifndef __EDGE_MODULE__
#define __EDGE_MODULE__

#include <Arduino.h>
#include <LinkedList.h>
#include "ModuleModel.h"
#include "API.h"

class EdgeModule {

    public:

        EdgeModule(String id, ModuleModel* moduleModel, LinkedList<API*> *moduleApis);

        String id();

        ModuleModel* moduleModel();

        LinkedList<API*>* moduleApis();
    
    private:
        String _id;
        ModuleModel* _moduleModel;
        LinkedList<API*>* _moduleApis;

};

#endif //__EDGE_MODULE__