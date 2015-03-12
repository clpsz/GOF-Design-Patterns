#ifndef __CONDIMENT_WHIP_H
#define __CONDIMENT_WHIP_H

#include <string>
#include "Beverage.h"

namespace starbuzz
{

class CondimentWhip: public CondimentDecorator
{
public:
    CondimentWhip(Beverage *b): cost(10), description("Whip")
    {
        this->beverage = b;
    }
    ~CondimentWhip()
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

