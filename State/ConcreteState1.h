#ifndef __CONCRETE_STATE1_H
#define __CONCRETE_STATE1_H

#include "Context.h"

class ConcreteState1 : public State
{
public:
    static ConcreteState1 *getInstance();
    ~ConcreteState1();
    void action1(Context *c);
    void action2(Context *c);
    void showState();

private:
    static ConcreteState1 *instance;
    ConcreteState1();
};

#endif

