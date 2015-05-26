#include "common.h"
#include "ConcreteState1.h"
#include "ConcreteState2.h"

ConcreteState2 *ConcreteState2::instance = 0;

ConcreteState2::ConcreteState2()
{
}

ConcreteState2::~ConcreteState2()
{
}

ConcreteState2 *ConcreteState2::getInstance()
{
    if (!instance)
    {
        instance = new ConcreteState2();
    }

    return instance;
}

void ConcreteState2::action1(Context *c)
{
    cout << "Switch to ConcreteState1" << endl;
    ConcreteState1 *state1 = ConcreteState1::getInstance();
    c->setState(state1);
}

void ConcreteState2::action2(Context *c)
{
    cout << "Nothing to do" << endl;
}

void ConcreteState2::showState()
{
    cout << "State2" << endl;
}

