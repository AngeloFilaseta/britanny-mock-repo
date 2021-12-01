#ifndef __API__
#define __API__

#include "Arduino.h"
typedef void (*HANDLER)();

class API {

    public:

        API(String path,  HANDLER f);

        String path();

        HANDLER handler();

    private:
        String _path;
        HANDLER _f;

};

#endif
