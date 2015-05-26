#ifndef __FLYWEIGHT_H
#define __FLYWEIGHT_H

class Flyweight
{
public:
    Flyweight();
    ~Flyweight();

    virtual void operation(int extrinsicState) = 0;
};

#endif

