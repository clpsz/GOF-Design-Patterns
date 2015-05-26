#ifndef __CONCRETE_VISITOR2_H
#define __CONCRETE_VISITOR2_H

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

class ConcreteVisitor2 : public Visitor
{
public:
    ConcreteVisitor2();
    ~ConcreteVisitor2();

    void visitConcreteElementA(ConcreteElementA *element);
    void visitConcreteElementB(ConcreteElementB *element);
};

#endif

