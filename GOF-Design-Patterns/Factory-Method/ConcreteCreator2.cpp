#include "ConcreteCreator2.h"
#include "ConcreteProduct2.h"

ConcreteCreator2::ConcreteCreator2()
{
}

ConcreteCreator2::~ConcreteCreator2()
{
}

Product *ConcreteCreator2::createProduct()
{
    return new ConcreteProduct2;
}

