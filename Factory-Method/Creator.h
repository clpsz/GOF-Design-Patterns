#ifndef __CREATOR_H
#define __CREATOR_H

#include "common.h"
#include "Product.h"

class Creator
{
public:
    Creator();
    ~Creator();

    virtual Product *createProduct() = 0;
};

#endif

