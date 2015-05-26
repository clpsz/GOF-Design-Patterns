#include "common.h"
#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(string n):
    myName(n)
{
}

ConcretePrototype2::~ConcretePrototype2()
{
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2 &other)
{
    this->myName = string("obj2");
}

string ConcretePrototype2::name()
{
    return myName;
}

void ConcretePrototype2::setName(string newName)
{
    myName = newName;
}

Prototype *ConcretePrototype2::clone()
{
    return new ConcretePrototype2(*this);
}


