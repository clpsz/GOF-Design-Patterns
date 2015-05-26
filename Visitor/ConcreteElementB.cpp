#include "Visitor.h"
#include "ConcreteElementB.h"

ConcreteElementB::ConcreteElementB(string n):
    name(n)
{
}

ConcreteElementB::~ConcreteElementB()
{
}

void ConcreteElementB::accept(Visitor *v)
{
    v->visitConcreteElementB(this);
}

