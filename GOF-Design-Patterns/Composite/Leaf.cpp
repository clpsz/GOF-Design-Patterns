#include "Leaf.h"

Leaf::Leaf(string n) : name(n)
{
}

Leaf::~Leaf()
{
}

void Leaf::show(int level)
{
    showEmpty(level);
    cout << name << endl;
}
