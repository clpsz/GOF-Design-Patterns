#include "ConcreteFlyweight.h"

ConcreteFlyweight::ConcreteFlyweight(string n) :
    name(n)
{
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}

void ConcreteFlyweight::operation(int extrinsicState)
{
    cout << name << " " << extrinsicState << endl;
}

