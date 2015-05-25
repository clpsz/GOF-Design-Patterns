#include "Memento.h"

Memento::Memento(int s) :
    state(s)
{
}

Memento::~Memento()
{
}

int Memento::getState()
{
    return state;
}

