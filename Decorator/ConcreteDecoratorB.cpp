#include "ConcreteDecoratorB.h"
#include "Component.h"

ConcreteDecoratorB::ConcreteDecoratorB(string n, Component *com) :
    Decorator(com), name(n) 
{
}

ConcreteDecoratorB::~ConcreteDecoratorB()
{
}

void ConcreteDecoratorB::before()
{
    cout << name;
}

void ConcreteDecoratorB::after()
{
}

