#ifndef PIZZ_STORE_H
#define PIZZ_STORE_H

#include <string>
#include "Pizza.h"

using std::string;

namespace pizza
{

class PizzaStore
{
public:
    PizzaStore(){}
    virtual ~PizzaStore(){}

    virtual Pizza *createPizza(string type) = 0;

    Pizza *orderPizza(string type)
    {
        Pizza *pizza = this->createPizza(type);
        if (pizza == NULL)
        {
            return NULL;
        }
        pizza->prepare(); 
        pizza->bake(); 
        pizza->cut(); 
        pizza->box(); 

        return pizza;
    }
};
}
#endif

