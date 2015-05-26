#include "common.h"
#include "ConcreteVisitor1.h"

ConcreteVisitor1::ConcreteVisitor1()
{
}

ConcreteVisitor1::~ConcreteVisitor1()
{
}

void ConcreteVisitor1::visitConcreteElementA(ConcreteElementA *element)
{
    cout << "Visiting ConcreteElementA " << element->getName() << " from ConcreteVisitor1" << endl;
}

void ConcreteVisitor1::visitConcreteElementB(ConcreteElementB *element)
{
    cout << "Visiting ConcreteElementB " << element->getName() << " from ConcreteVisitor1" << endl;
}

