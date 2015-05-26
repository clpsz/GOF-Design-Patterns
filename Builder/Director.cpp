#include "Director.h"

Director::Director(AbstractBuilder *builder)
{
    this->builder = builder;
}

Director::~Director()
{
}

void Director::setBuilder(AbstractBuilder *builder)
{
    this->builder = builder;
}

void Director::buildProduct()
{
    builder->buildPartA();
    builder->buildPartB();
    builder->buildPartC();
}

