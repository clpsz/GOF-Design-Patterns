#include "common.h"
#include "ConcreteState1.h"
#include "ConcreteState2.h"

ConcreteState1 *ConcreteState1::instance = 0;

ConcreteState1::ConcreteState1()
{
}

ConcreteState1::~ConcreteState1()
{
}

ConcreteState1 *ConcreteState1::getInstance()
{
    if (!instance)
    {
        instance = new ConcreteState1();
    }

    return instance;
}

void ConcreteState1::action1(Context *c)
{
    cout << "Nothing to do" << endl;
}

void ConcreteState1::action2(Context *c)
{
    cout << "Switch to ConcreteState2" << endl;
    ConcreteState2 *state2 = ConcreteState2::getInstance();
    c->setState(state2);
}

void ConcreteState1::showState()
{
    cout << "State1" << endl;
}
