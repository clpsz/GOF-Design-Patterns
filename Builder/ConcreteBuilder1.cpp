#include "common.h"
#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1()
{
    product = new Product;
}

ConcreteBuilder1::~ConcreteBuilder1()
{
}

void ConcreteBuilder1::buildPartA()
{
    product->addPart(string("PartA from builder1"));
}

void ConcreteBuilder1::buildPartB()
{
    product->addPart(string("PartB from builder1"));
}

void ConcreteBuilder1::buildPartC()
{
    product->addPart(("PartC from builder1"));
}

Product *ConcreteBuilder1::getProduct()
{
    return product;
}

