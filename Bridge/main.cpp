#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"


int main()
{
    Implementor *impA = new ConcreteImplementorA();
    Implementor *impB = new ConcreteImplementorB();
    Abstraction *abstraction = new RefinedAbstraction();

    abstraction->setImplementor(impA);
    abstraction->operate();

    abstraction->setImplementor(impB);
    abstraction->operate();

    return 0;
}
