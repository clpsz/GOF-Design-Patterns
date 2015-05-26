#ifndef __CONTEXT_H
#define __CONTEXT_H

#include "Strategy.h"

class Context
{
public:
    Context();
    ~Context();

    void contextInterface();
    void setStrategy(Strategy *s);
private:
    Strategy *strategy;
};

#endif

