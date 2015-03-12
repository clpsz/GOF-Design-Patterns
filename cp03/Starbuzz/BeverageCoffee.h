#ifndef __BEVERAG_COFFEE_H
#define __BEVERAG_COFFEE_H
#include "Beverage.h"

namespace starbuzz
{

class BeverageCoffee: public Beverage
{
public:
    BeverageCoffee(string str, int p) : description(str), cost(p)
    {
    }
    ~BeverageCoffee()
    {
    }

    int getCost()
    {
        return cost;
    }
    string getDescription()
    {
        return description;
    }
private:
    string description;
    int cost;
};
}

#endif


