#ifndef BRITTANY_OPERATION_HANDLER_H
#define BRITTANY_OPERATION_HANDLER_H

#include <string>
#include <json/json.h>
#include "OperationHandlerResult.h"

class OperationHandler {

public:

    OperationHandler(std::string path);

    std::string path();

    virtual OperationHandlerResult handle(Json::Value args) = 0;

private:

    std::string _path;

};

#endif //BRITTANY_OPERATION_HANDLER_H