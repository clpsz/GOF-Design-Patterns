#ifndef __VISITOR_H
#define __VISITOR_H

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
    Visitor();
    ~Visitor();

    virtual void visitConcreteElementA(ConcreteElementA *element) = 0;
    virtual void visitConcreteElementB(ConcreteElementB *element) = 0;
};

#endif

