#include <iostream>

#include "PizzaStore.h"
#include "SimplePizzaFactory.h"


using std::cout;
using std::endl;

int main()
{
    pizza::SimplePizzaFactory *spf = new pizza::SimplePizzaFactory();
    pizza::PizzaStore ps = pizza::PizzaStore(spf);
    ps.orderPizza("Cheese");
    cout << endl;
    ps.orderPizza("Veggle");
    cout << endl;
    ps.orderPizza("Calm");

    return 0;
}

