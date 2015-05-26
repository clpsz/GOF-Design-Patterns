#ifndef __OBSERVER_H
#define __OBSERVER_H

#include "common.h"

class Observer
{
public:
    Observer();
    ~Observer();
    virtual void update() = 0;
};

#endif

