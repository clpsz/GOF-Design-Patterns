#ifndef __CONCRETE_STATE2_H
#define __CONCRETE_STATE2_H

#include "Context.h"

class ConcreteState2 : public State
{
public:
    static ConcreteState2 *getInstance();
    ~ConcreteState2();
    void action1(Context *c);
    void action2(Context *c);
    void showState();

private:
    static ConcreteState2 *instance;
    ConcreteState2();
};

#endif


