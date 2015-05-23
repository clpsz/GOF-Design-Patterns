#include "Product.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
#include "Creator.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"


int main()
{

    Creator *creator = new ConcreteCreator1();
    Product *product1 = creator->createProduct();

    cout << product1->name() << endl;
    cout << endl;

    creator = new ConcreteCreator2();
    Product *product2 = creator->createProduct();
    cout << product2->name() << endl;

    return 0;
}
