#ifndef __CONDIMENT_MOCHA_H
#define __CONDIMENT_MOCHA_H

#include <string>
#include "Beverage.h"


namespace starbuzz
{

class CondimentMocha: public CondimentDecorator
{
public:
    CondimentMocha(Beverage *b): cost(3), description("Mocha")
    {
        this->beverage = b;
    }
    ~CondimentMocha()
    {
    }
    int getCost()
    {
        return beverage->getCost() + this->cost;
    }
    string getDescription()
    {
        return this->description + " " + beverage->getDescription();
    }
private:
    int cost;
    string description;
    Beverage *beverage;
};
}

#endif

