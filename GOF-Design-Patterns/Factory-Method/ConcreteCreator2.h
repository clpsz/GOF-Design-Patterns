#ifndef __CONCRETE_CREATOR2_H
#define __CONCRETE_CREATOR2_H

#include "Product.h"
#include "Creator.h"

class ConcreteCreator2: public Creator
{
public:
    ConcreteCreator2();
    ~ConcreteCreator2();

    Product *createProduct();
};

#endif

