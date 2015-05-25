#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{
}

ConcreteSubject::~ConcreteSubject()
{
}

void ConcreteSubject::attach(Observer *o)
{
    vec.push_back(o);
}

void ConcreteSubject::notify()
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        vec[i]->update();
    }
}

