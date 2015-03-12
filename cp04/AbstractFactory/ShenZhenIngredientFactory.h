#ifndef SHENZHEN_INGRIDENT_FACTORY_H
#define SHENZHEN_INGRIDENT_FACTORY_H

#include <iostream>

#include "PizzaIngredientFactory.h"
#include "ShenZhenCalm.h"
#include "ShenZhenCheese.h"
#include "ShenZhenSauce.h"
#include "ShenZhenVeggle.h"

using std::cout;
using std::endl;

namespace pizza
{

class ShenZhenIngredientFactory: public PizzaIngredientFactory
{
public:
    ShenZhenIngredientFactory(){}
    ~ShenZhenIngredientFactory(){}

    Calm *createCalm()
    {
        cout << "Making ShenZhen calm" << endl;
        return new ShenZhenCalm();
    }
    Cheese *createCheese()
    {
        cout << "Making ShenZhen cheese" << endl;
        return new ShenZhenCheese();
    }
    Sauce *createSauce()
    {
        cout << "Making ShenZhen sauce" << endl;
        return new ShenZhenSauce();
    }
    Veggle *createVeggle()
    {
        cout << "Making ShenZhen veggle" << endl;
        return new ShenZhenVeggle();
    }
};
}

#endif


