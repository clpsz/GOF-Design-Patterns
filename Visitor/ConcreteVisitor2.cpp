#include "common.h"
#include "ConcreteVisitor2.h"

ConcreteVisitor2::ConcreteVisitor2()
{
}

ConcreteVisitor2::~ConcreteVisitor2()
{
}

void ConcreteVisitor2::visitConcreteElementA(ConcreteElementA *element)
{
    cout << "Visiting ConcreteElementA " << element->getName() << " from ConcreteVisitor2" << endl;
}

void ConcreteVisitor2::visitConcreteElementB(ConcreteElementB *element)
{
    cout << "Visiting ConcreteElementB " << element->getName() << " from ConcreteVisitor2" << endl;
}

