#ifndef __COMPONENT_H
#define __COMPONENT_H

class Component
{
public:
    Component();
    ~Component();

    virtual void add(Component *com);
    virtual void remove(Component *com);
    virtual void show(int level) = 0;
    void showEmpty(int level);
};

#endif

