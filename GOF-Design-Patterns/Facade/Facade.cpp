#include "Facade.h"
#include "SubsystemA.h"
#include "SubsystemB.h"
#include "SubsystemC.h"

Facade::Facade()
{
}

Facade::~Facade()
{
}

void Facade::operation()
{
     SubsystemA subA;
     SubsystemB subB;
     SubsystemC subC;

     subA.operation();
     subB.operation();
     subC.operation();
}
