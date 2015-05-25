#ifndef __CONTEXT_H
#define __CONTEXT_H

#include "State.h"

class Context
{
public:
    Context();
    ~Context();

    void setState(State *s);
    void action1();
    void action2();
    void showState();
private:
    State *state;
};

#endif

