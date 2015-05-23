#ifndef __CONCRETE_BUILDER2_H
#define __CONCRETE_BUILDER2_H

#include "AbstractBuilder.h"
#include "Product.h"

class ConcreteBuilder2: public AbstractBuilder
{
public:
    ConcreteBuilder2();
    ~ConcreteBuilder2();

    void buildPartA();
    void buildPartB();
    void buildPartC();

    Product *getProduct();

private:
    Product *product;
};

#endif


