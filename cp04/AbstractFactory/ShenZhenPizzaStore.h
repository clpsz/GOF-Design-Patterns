#ifndef SHENZHEN_PIZZA_STORE_H
#define SHENZHEN_PIZZA_STORE_H

#include <string>

#include "CalmPizza.h"
#include "CheesePizza.h"
#include "VegglePizza.h"
#include "PizzaStore.h"
#include "ShenZhenIngredientFactory.h"

using std::string;

namespace pizza
{

// ShenZhen pizza factory
class ShenZhenPizzaStore: public PizzaStore {
public:
    ShenZhenPizzaStore(){}
    ~ShenZhenPizzaStore(){}

    Pizza *createPizza(string type)
    {
		PizzaIngredientFactory *p = new ShenZhenIngredientFactory();
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

