#ifndef __LEAF_H
#define __LEAF_H

#include "common.h"
#include "Component.h"

class Leaf : public Component
{
public:
    Leaf(string n);
    ~Leaf();

    void show(int level);

private:
    string name;
};

#endif

