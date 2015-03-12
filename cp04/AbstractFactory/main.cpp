#include <iostream>

#include "NewYorkPizzaStore.h"
#include "ShenZhenPizzaStore.h"
#include "NewYorkIngredientFactory.h"
#include "ShenZhenIngredientFactory.h"


using std::cout;
using std::endl;

int main()
{
    pizza::PizzaStore *ps = new pizza::NewYorkPizzaStore();
    ps->orderPizza("Cheese");
    cout << endl;
	delete ps;
    ps = new pizza::ShenZhenPizzaStore();
    ps->orderPizza("Calm");
	delete ps;
    return 0;
}

