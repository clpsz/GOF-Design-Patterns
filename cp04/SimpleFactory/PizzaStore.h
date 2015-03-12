#ifndef PIZZ_STORE_H
#define PIZZ_STORE_H

#include <string>
#include "Pizza.h"
#include "SimplePizzaFactory.h"

using std::string;

namespace pizza
{

class PizzaStore
{
public:
    PizzaStore(SimplePizzaFactory *spf)
    {
        this->simplePizzaFactory = spf;
    }
    ~PizzaStore()
    {
    }

    Pizza *orderPizza(string type)
    {
        Pizza *pizza = simplePizzaFactory->createPizza(type);
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
private:
    SimplePizzaFactory *simplePizzaFactory;
};
}
#endif

