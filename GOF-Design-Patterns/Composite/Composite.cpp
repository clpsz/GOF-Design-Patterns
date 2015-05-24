#include "common.h"
#include "Composite.h"

Composite::Composite(string n) :
    name(n)
{
}

Composite::~Composite()
{
}

void Composite::add(Component *com)
{
    vec.push_back(com);
}

void Composite::remove(Component *com)
{
}

void Composite::show(int level)
{
    showEmpty(level);
    cout << name << endl;

    for (vector<Component*>::size_type i = 0; i != vec.size(); i++)
    {
        vec[i]->show(level + 1);
    }
}

