#ifndef SIMPLE_PIZZA_FACTORY_H
#define SIMPLE_PIZZA_FACTORY_H

#include "Pizza.h"
#include "CheesePizza.h"
#include "VegglePizza.h"
#include "CalmPizza.h"

namespace pizza
{

class SimplePizzaFactory
{
public:
    SimplePizzaFactory(){}
    ~SimplePizzaFactory(){}

    Pizza *createPizza(string type)
    {
        if (type == string("Cheese"))
        {
            return new CheesePizza();
        }
        else if (type == string("Calm"))
        {
            return new CalmPizza();
        }
        else if (type == string("Veggle"))
        {
            return new CalmPizza();
        }
        else
        {
            return NULL;
        }
    }
};
}

#endif

