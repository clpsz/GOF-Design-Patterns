#ifndef NEWYORK_PIZZA_STORE_H
#define NEWYORK_PIZZA_STORE_H

#include <string>

#include "CalmPizza.h"
#include "CheesePizza.h"
#include "VegglePizza.h"
#include "PizzaStore.h"
#include "NewYorkIngredientFactory.h"

using std::string;

namespace pizza
{

// NewYork pizza factory
class NewYorkPizzaStore: public PizzaStore
{
public:
    NewYorkPizzaStore(){}
    ~NewYorkPizzaStore(){}

    Pizza *createPizza(string type)
    {
		PizzaIngredientFactory *p = new NewYorkIngredientFactory();
        if (type == string("Cheese"))
        {
            return new CheesePizza(p);
        }
        else if (type == string("Calm"))
        {
            return new CalmPizza(p);
        }
        else if (type == string("Veggle"))
        {
            return new VeeglePizza(p);
        }
        else
        {
            return NULL;
        }
		delete p;
    }
};
}

#endif

