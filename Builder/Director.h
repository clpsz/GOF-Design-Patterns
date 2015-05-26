#ifndef __DIRECTOR_H
#define __DIRECTOR_H

#include "AbstractBuilder.h"

class Director
{
public:
    Director(AbstractBuilder *builder);
    ~Director();

    void buildProduct();
    void setBuilder(AbstractBuilder *builder);

private:
    AbstractBuilder *builder;
};

#endif

