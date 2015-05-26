#include "Element.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"


int main()
{
    Visitor *v1 = new ConcreteVisitor1();
    Visitor *v2 = new ConcreteVisitor2();
    Element *e1 = new ConcreteElementA("ElementA");
    Element *e2 = new ConcreteElementB("ElementB");

    e1->accept(v1);
    e1->accept(v2);
    e2->accept(v1);
    e2->accept(v2);

    return 0;
}

