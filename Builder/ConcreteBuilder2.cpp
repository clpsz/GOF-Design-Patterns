#include "common.h"
#include "ConcreteBuilder2.h"

ConcreteBuilder2::ConcreteBuilder2()
{
    product = new Product;
}

ConcreteBuilder2::~ConcreteBuilder2()
{
}

void ConcreteBuilder2::buildPartA()
{
    product->addPart(string("PartA from Builder2"));
}

void ConcreteBuilder2::buildPartB()
{
    product->addPart(string("PartB from Builder2"));
}

void ConcreteBuilder2::buildPartC()
{
    product->addPart(("PartC from Builder2"));
}

Product *ConcreteBuilder2::getProduct()
{
    return product;
}


