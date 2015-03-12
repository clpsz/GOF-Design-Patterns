#ifndef NEWYORK_INGRIDENT_FACTORY_H
#define NEWYORK_INGRIDENT_FACTORY_H

#include <iostream>

#include "PizzaIngredientFactory.h"
#include "NewYorkCalm.h"
#include "NewYorkCheese.h"
#include "NewYorkSauce.h"
#include "NewYorkVeggle.h"

using std::cout;
using std::endl;

namespace pizza
{

class NewYorkIngredientFactory: public PizzaIngredientFactory
{
public:
    NewYorkIngredientFactory(){}
    ~NewYorkIngredientFactory(){}

    Calm *createCalm()
    {
        cout << "Making NewYork calm" << endl;
        return new NewYorkCalm();
    }
    Cheese *createCheese()
    {
        cout << "Making NewYork cheese" << endl;
        return new NewYorkCheese();
    }
    Sauce *createSauce()
    {
        cout << "Making NewYork sauce" << endl;
        return new NewYorkSauce();
    }
    Veggle *createVeggle()
    {
        cout << "Making NewYork veggle" << endl;
        return new NewYorkVeggle();
    }
};
}

#endif

