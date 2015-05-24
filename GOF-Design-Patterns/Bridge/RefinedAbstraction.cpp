#include "common.h"
#include "Implementor.h"
#include "RefinedAbstraction.h"

RefinedAbstraction::RefinedAbstraction()
{
    implementor = 0;
}

RefinedAbstraction::~RefinedAbstraction()
{
}

void RefinedAbstraction::operate()
{
    cout << "Execute refined operations" << endl;
    implementor->impOperate();
}

void RefinedAbstraction::setImplementor(Implementor *imp)
{
    implementor = imp;
}

