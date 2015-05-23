#ifndef __ABSTRACT_BUILDER_H
#define __ABSTRACT_BUILDER_H

#include "Product.h"

class AbstractBuilder
{
public:
    AbstractBuilder();
    ~AbstractBuilder();

    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual void buildPartC() = 0;
    virtual Product *getProduct() = 0;
};

#endif

