#ifndef CONCRETE_FACTORY2_H
#define CONCRETE_FACTORY2_H

#include "common.h"
#include "AbstractFactory.h"

class ConcreteFactory2: public AbstractFactory
{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();
    AbstractProductA *createProductA();
    AbstractProductB *createProductB();
};

#endif


