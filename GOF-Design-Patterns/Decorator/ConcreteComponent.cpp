#include "common.h"
#include "ConcreteComponent.h"

ConcreteComponent::ConcreteComponent(string n) :
    name(n)
{
}

ConcreteComponent::~ConcreteComponent()
{
}

void ConcreteComponent::operation()
{
    cout << name << endl;
}

