#include "common.h"
#include "ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(string n):
    name(n)
{
}

ConcreteObserver::~ConcreteObserver()
{
}

void ConcreteObserver::update()
{
    cout << "Updating " << name << endl;
}

