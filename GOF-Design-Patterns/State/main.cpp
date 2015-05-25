#include "Context.h"
#include "ConcreteState1.h"
#include "ConcreteState2.h"


int main()
{
    Context *c = new Context();
    c->setState(ConcreteState1::getInstance());
    c->showState();
    c->action1();
    c->showState();
    c->action2();
    c->showState();
    c->action1();
    c->showState();

    return 0;
}

