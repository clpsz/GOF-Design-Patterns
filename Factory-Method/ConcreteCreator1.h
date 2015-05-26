#ifndef __CONCRETE_CREATOR1_H
#define __CONCRETE_CREATOR1_H

#include "Product.h"
#include "Creator.h"

class ConcreteCreator1: public Creator
{
public:
    ConcreteCreator1();
    ~ConcreteCreator1();

    Product *createProduct();
};

#endif


