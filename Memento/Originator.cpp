#include "common.h"
#include "Originator.h"

Originator::Originator()
{
    state = 0;
}

Originator::~Originator()
{
}

void Originator::add()
{
    state++;
}

Memento *Originator::createMemento()
{
    return new Memento(state);
}

void Originator::setState(Memento *m)
{
    state = m->getState();
}

void Originator::showState()
{
    cout << "Current state is: " << state << endl;
}
