#include "ConcretePrototype1.h"

int main()
{
    Prototype *obj1 = new ConcretePrototype1("obj1");
    cout << obj1->name() << endl;
    
    Prototype *obj2 = obj1->clone();
    cout << obj2->name() << endl;
    obj2->setName("obj2");
    cout << obj2->name() << endl;

    return 0;
}
