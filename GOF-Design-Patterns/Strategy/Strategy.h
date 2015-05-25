#ifndef __STRATEGY_H
#define __STRATEGY_H

class Strategy
{
public:
    Strategy();
    ~Strategy();

    virtual void algorithmInterface() = 0;
};

#endif

