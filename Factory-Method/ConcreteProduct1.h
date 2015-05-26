#ifndef __CONCRETE_PRODUCT1_H
#define __CONCRETE_PRODUCT1_H

#include "Product.h"

class ConcreteProduct1: public Product
{
public:
    ConcreteProduct1();
    ~ConcreteProduct1();

    string name();
};

#endif

