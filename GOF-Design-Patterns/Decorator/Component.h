#ifndef __COMPONET_H
#define __COMPONET_H

class Component
{
public:
    Component();
    ~Component();

    virtual void operation() = 0;
};

#endif

