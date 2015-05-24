#include "common.h"
#include "Adapter.h"

Adapter::Adapter(Adaptee *a)
{
    adaptee = a;
}

Adapter::~Adapter()
{
}

void Adapter::operate()
{
    adaptee->specialOperate();
}

