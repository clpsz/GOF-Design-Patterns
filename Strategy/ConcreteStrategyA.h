#ifndef __CONCRETE_STRATEGYA_H
#define __CONCRETE_STRATEGYA_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();
    ~ConcreteStrategyA();

    void algorithmInterface();
};

#endif

