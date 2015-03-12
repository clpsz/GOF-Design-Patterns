#ifndef SHENZHEN_PIZZA_STORE_H
#define SHENZHEN_PIZZA_STORE_H

#include <string>
#include "Pizza.h"
#include "ShenZhenCalmPizza.h"
#include "ShenZhenCheesePizza.h"
#include "ShenZhenVeeglePizza.h"

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
        if (type == string("Cheese"))
        {
            return new ShenZhenCheesePizza();
        }
        else if (type == string("Calm"))
        {
            return new ShenZhenCalmPizza();
        }
        else if (type == string("Veggle"))
        {
            return new ShenZhenVeeglePizza();
        }
        else
        {
            return NULL;
        }
    }
};
}

#endif

