#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H

#include <string>

#include "Calm.h"
#include "Cheese.h"
#include "Sauce.h"
#include "Veggle.h"


namespace pizza
{

class PizzaIngredientFactory
{
public:
    PizzaIngredientFactory(){}
    virtual ~PizzaIngredientFactory(){}

    virtual Calm *createCalm() = 0;
    virtual Cheese *createCheese() = 0;
    virtual Sauce *createSauce() = 0;
    virtual Veggle *createVeggle() = 0;
};
}
#endif

