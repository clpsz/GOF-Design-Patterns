#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"


int main()
{
    Component *com = new ConcreteComponent("man");
    Component *decoratorA = new ConcreteDecoratorA("good ", com);

    Component *decoratorB = new ConcreteDecoratorB("super ", decoratorA);
    decoratorB->operation();

    return 0;
}
