#ifndef BRITTANY_OPERATION_HANDLER_UTIL_H
#define BRITTANY_OPERATION_HANDLER_UTIL_H

#include <list>
#include <string>
#include "ComponentHw.h"

ComponentHw* find_by_id(std::list<ComponentHw*> list, std::string id) {
    for(ComponentHw* c: list){
        if(c -> id() == id){
            return c;
        }
    }
    return NULL;
}

#endif //BRITTANY_OPERATION_HANDLER_UTIL_H