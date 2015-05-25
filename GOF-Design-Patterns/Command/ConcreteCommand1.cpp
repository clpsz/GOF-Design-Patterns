#include "ConcreteCommand1.h"

ConcreteCommand1::ConcreteCommand1(Receiver *r):
    receiver(r)
{
}

ConcreteCommand1::~ConcreteCommand1()
{
}

void ConcreteCommand1::execute()
{
    receiver->action1();
}

