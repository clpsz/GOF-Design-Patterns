#include "ConcreteImplementorA.h"
#include "RefinedAbstraction.h"


int main()
{
    Implementor *implementor = new ConcreteImplementorA();
    Abstraction *abstraction = new RefinedAbstraction();
    abstraction->setImplementor(implementor);

    abstraction->operate();

    return 0;
}
