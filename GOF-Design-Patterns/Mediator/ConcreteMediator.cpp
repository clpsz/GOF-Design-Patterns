#include "ConcreteMediator.h"

ConcreteMediator::ConcreteMediator(Colleague *cc1, Colleague *cc2) :
    colleague1(cc1),
    colleague2(cc2)
{
}

ConcreteMediator::~ConcreteMediator()
{
}

void ConcreteMediator::notify(string name)
{
    if (name == "colleague1")
    {
        colleague1->action();
    }
    else if (name == "colleague2")
    {
        colleague2->action();
    }
}
