#ifndef __ABSTRACT_CLASS_H
#define __ABSTRACT_CLASS_H

class AbstractClass
{
public:
    AbstractClass();
    ~AbstractClass();

    void templateMethod();
    virtual void primitiveOperation1() = 0;
    virtual void primitiveOperation2() = 0;
};

#endif

