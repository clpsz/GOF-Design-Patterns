#ifndef __CONCRETE_HANDLER2_H
#define __CONCRETE_HANDLER2_H

#include "Handler.h"

class ConcreteHandler2 : public Handler
{
public:
    ConcreteHandler2(Handler *s);
    ~ConcreteHandler2();

    void handlerRequest(int req);

private:
    Handler *successor;
};

#endif


