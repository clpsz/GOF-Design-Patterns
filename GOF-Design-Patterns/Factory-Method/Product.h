#ifndef __PRODUCT_H
#define __PRODUCT_H

#include "common.h"

class Product
{
public:
    Product();
    ~Product();

    virtual string name() = 0;
};

#endif

