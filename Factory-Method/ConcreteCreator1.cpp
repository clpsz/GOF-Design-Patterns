#include "ConcreteCreator1.h"
#include "ConcreteProduct1.h"

ConcreteCreator1::ConcreteCreator1()
{
}

ConcreteCreator1::~ConcreteCreator1()
{
}

Product *ConcreteCreator1::createProduct()
{
    return new ConcreteProduct1;
}
