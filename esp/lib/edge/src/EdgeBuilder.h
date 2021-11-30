#ifndef __EDGE_BUILDER__
#define __EDGE_BUILDER__

#include "Edge.h"
#include "EdgeModule.h"

class EdgeBuilder {

    public:

        EdgeBuilder();

        EdgeBuilder& add(EdgeModule* module);

        Edge* build();

    private:

        LinkedList<EdgeModule*>* modules;

};

#endif //__EDGE_BUILDER__