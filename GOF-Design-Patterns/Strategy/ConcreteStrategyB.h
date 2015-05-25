#ifndef __CONCRETE_STRATEGYB_H
#define __CONCRETE_STRATEGYB_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();
    ~ConcreteStrategyB();

    void algorithmInterface();
};

#endif


