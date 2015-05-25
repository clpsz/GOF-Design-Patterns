#ifndef __COLLEAGUE_H
#define __COLLEAGUE_H

#include "common.h"
#include "Mediator.h"

class Colleague
{
public:
    Colleague();
    ~Colleague();

    virtual void action() = 0;
    virtual void notify(string name) = 0;
    virtual void setMediator(Mediator*m) = 0;
};

#endif

