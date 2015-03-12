#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H

#include <iostream>
#include <string>

#include "Pizza.h"
#include "Calm.h"
#include "Cheese.h"
#include "Sauce.h"
#include "Veggle.h"
#include "PizzaIngredientFactory.h"

using std::string;
using std::cout;
using std::endl;

namespace pizza
{

class CheesePizza: public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory *p): name("Cheese Pizza")
    {
		this->pif = p;
    };
    ~CheesePizza(){};

    void prepare()
    {
        Calm *calm = pif->createCalm();
        Cheese *cheese = pif->createCheese();
        Sauce *sauce = pif->createSauce();
        Veggle *veggle = pif->createVeggle();
		delete calm;
		delete cheese;
		delete sauce;
		delete veggle;
        cout << "Preparing " << this->name << endl;
    }
    void bake()
    {
        cout << "Baking " << this->name << endl;
    }
    void cut()
    {
        cout << "Cutting " << this->name << endl;
    }
    void box()
    {
        cout << "Boxing " << this->name << endl;
    }
private:
    PizzaIngredientFactory *pif;
    string name;
};
}

#endif

