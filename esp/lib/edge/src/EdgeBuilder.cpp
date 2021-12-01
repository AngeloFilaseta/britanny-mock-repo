#include "EdgeBuilder.h"
#include <Arduino.h>
#include <LinkedList.h>
#include "Edge.h"
#include "module/EdgeModule.h"

EdgeBuilder::EdgeBuilder() {
    modules = new LinkedList<EdgeModule*>();
}

Edge* EdgeBuilder::build() {
    return new Edge(modules);
}

EdgeBuilder& EdgeBuilder::add(EdgeModule* module) {
    modules -> add(module);
    return *this;
}
