#ifndef __MEDIATOR_H
#define __MEDIATOR_H

#include "common.h"

class Mediator
{
public:
    Mediator();
    ~Mediator();

    virtual void notify(string name) = 0;
};

#endif

