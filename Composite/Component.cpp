#include "common.h"
#include "Component.h"

Component::Component()
{
}

Component::~Component()
{
}

void Component::add(Component *com)
{
    cout << "Operation not supported" << endl;
}

void Component::remove(Component *com)
{
    cout << "Operation not supported" << endl;
}

void Component::showEmpty(int level)
{
    int count = 4 * level;
    for (int i = 0; i <  count; i++)
    {
        cout << " ";
    }
}

