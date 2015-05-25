#ifndef __CONCRETE_CLASS_H
#define __CONCRETE_CLASS_H

#include "AbstractClass.h"

class ConcreteClass : public AbstractClass
{
public:
    ConcreteClass();
    ~ConcreteClass();

    void primitiveOperation1();
    void primitiveOperation2();
};

#endif

