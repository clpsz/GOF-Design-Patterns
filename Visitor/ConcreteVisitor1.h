#ifndef __CONCRETE_VISITOR1_H
#define __CONCRETE_VISITOR1_H

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

class ConcreteVisitor1 : public Visitor
{
public:
    ConcreteVisitor1();
    ~ConcreteVisitor1();

    void visitConcreteElementA(ConcreteElementA *element);
    void visitConcreteElementB(ConcreteElementB *element);
};

#endif

