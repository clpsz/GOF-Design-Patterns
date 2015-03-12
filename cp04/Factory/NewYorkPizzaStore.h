#ifndef NEWYORK_PIZZA_STORE_H
#define NEWYORK_PIZZA_STORE_H

#include <string>
#include "Pizza.h"
#include "NewYorkCalmPizza.h"
#include "NewYorkCheesePizza.h"
#include "NewYorkVeeglePizza.h"

using std::string;

namespace pizza
{

// NewYork pizza factory
class NewYorkPizzaStore: public PizzaStore {
public:
    NewYorkPizzaStore(){}
    ~NewYorkPizzaStore(){}

    Pizza *createPizza(string type)
    {
        if (type == string("Cheese"))
        {
            return new NewYorkCheesePizza();
        }
        else if (type == string("Calm"))
        {
            return new NewYorkCalmPizza();
        }
        else if (type == string("Veggle"))
        {
            return new NewYorkVeeglePizza();
        }
        else
        {
            return NULL;
        }
    }
};
}

#endif

