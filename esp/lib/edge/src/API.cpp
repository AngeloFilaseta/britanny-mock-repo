#include "API.h"
#include <Arduino.h>

API::API(String path, HANDLER f) {
    _path = path;
    _f = f;
}

String API::path() {
    return _path;
}

HANDLER API::handler() {
    return _f;
}



