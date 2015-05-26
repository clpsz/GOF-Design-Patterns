#include "Visitor.h"
#include "ConcreteElementA.h"

ConcreteElementA::ConcreteElementA(string n):
    name(n)
{
}

ConcreteElementA::~ConcreteElementA()
{
}

void ConcreteElementA::accept(Visitor *v)
{
    v->visitConcreteElementA(this);
}

