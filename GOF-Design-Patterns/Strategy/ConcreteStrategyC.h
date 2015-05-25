#ifndef __CONCRETE_STRATEGYC_H
#define __CONCRETE_STRATEGYC_H

#include "Strategy.h"

class ConcreteStrategyC : public Strategy
{
public:
    ConcreteStrategyC();
    ~ConcreteStrategyC();

    void algorithmInterface();
};

#endif


