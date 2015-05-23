#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(string n):
    myName(n)
{
}

ConcretePrototype1::~ConcretePrototype1()
{
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1 &other)
{
    this->myName = other.myName;
}

string ConcretePrototype1::name()
{
    return myName;
}

void ConcretePrototype1::setName(string newName)
{
    myName = newName;
}

Prototype *ConcretePrototype1::clone()
{
    return new ConcretePrototype1(*this);
}

