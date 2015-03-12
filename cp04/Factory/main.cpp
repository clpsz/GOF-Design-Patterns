#include <iostream>

#include "PizzaStore.h"
#include "NewYorkPizzaStore.h"
#include "ShenZhenPizzaStore.h"


using std::cout;
using std::endl;

int main()
{
    pizza::PizzaStore *ps = new pizza::NewYorkPizzaStore();
    ps->orderPizza("Cheese");
    cout << endl;
    ps = new pizza::ShenZhenPizzaStore();
    ps->orderPizza("Calm");
    return 0;
}

