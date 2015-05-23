#include "common.h"
#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"

ConcreteFactory1::ConcreteFactory1()
{
    cout << "In factory 1" << endl;
}

ConcreteFactory1::~ConcreteFactory1()
{
}

AbstractProductA *ConcreteFactory1::createProductA()
{
    return new ProductA1;
}

AbstractProductB *ConcreteFactory1::createProductB()
{
    return new ProductB1;
}

