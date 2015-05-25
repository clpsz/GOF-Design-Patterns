#include "common.h"
#include "ConcreteCommand2.h"

ConcreteCommand2::ConcreteCommand2(Receiver *r):
    receiver(r)
{
}

ConcreteCommand2::~ConcreteCommand2()
{
}

void ConcreteCommand2::execute()
{
    receiver->action2();
}


