#include "ConcreteDecoratorA.h"
#include "Component.h"

ConcreteDecoratorA::ConcreteDecoratorA(string n, Component *com) :
    Decorator(com), name(n) 
{
}

ConcreteDecoratorA::~ConcreteDecoratorA()
{
}

void ConcreteDecoratorA::before()
{
    cout << name;
}

void ConcreteDecoratorA::after()
{
}

