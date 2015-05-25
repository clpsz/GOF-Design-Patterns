#ifndef __CONCRETE_HANDLER1_H
#define __CONCRETE_HANDLER1_H

#include "Handler.h"

class ConcreteHandler1 : public Handler
{
public:
    ConcreteHandler1(Handler *s);
    ~ConcreteHandler1();

    void handlerRequest(int req);

private:
    Handler *successor;
};

#endif

