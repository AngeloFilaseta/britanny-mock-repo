#ifndef __EDGE__
#define __EDGE__

#include <LinkedList.h>
#include "API.h"
#include "EdgeModel.h"
#include "EdgeModule.h"

class Edge {

    public:
        Edge(LinkedList<EdgeModule*>* modules);

        EdgeModel* edgeModel();

        LinkedList<API*> edgeApis();

    private:

        EdgeModel* _edgeModel;

        LinkedList<API*> _edgeApis;

};

#endif //__EDGE__