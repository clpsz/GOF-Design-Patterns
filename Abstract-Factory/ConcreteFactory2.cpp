#include "common.h"
#include "ConcreteFactory2.h"
#include "ProductA1.h"
#include "ProductB1.h"

ConcreteFactory2::ConcreteFactory2()
{
    cout << "In factory 2" << endl;
}

ConcreteFactory2::~ConcreteFactory2()
{
}

AbstractProductA *ConcreteFactory2::createProductA()
{
    return new ProductA1;
}

AbstractProductB *ConcreteFactory2::createProductB()
{
    return new ProductB1;
}

