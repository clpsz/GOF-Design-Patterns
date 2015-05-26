#include "common.h"
#include "Product.h"
#include "Director.h"
#include "AbstractBuilder.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"


int main()
{

    AbstractBuilder *builder1 = new ConcreteBuilder1;
    Director director(builder1);
    director.buildProduct();
    Product *product1 = builder1->getProduct();
    product1->showProduct();

    cout << endl;

    AbstractBuilder *builder2 = new ConcreteBuilder2;
    director.setBuilder(builder2);
    director.buildProduct();
    Product *product2 = builder2->getProduct();
    product2->showProduct();

    return 0;
}

