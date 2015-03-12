#ifndef __BEVERAG_BEER_H
#define __BEVERAG_BEER_H
#include "Beverage.h"

namespace starbuzz
{

class BeverageBeer
{
public:
    BeverageBeer(string str, int p) : description(str), cost(p)
    {
    }
    ~BeverageBeer()
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

