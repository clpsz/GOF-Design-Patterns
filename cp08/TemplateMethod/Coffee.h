#ifndef COFFEE_H
#define COFFEE_H

#include <iostream>

#include "CaffeineBeverage.h"

namespace caffeine
{
using std::cout;
using std::endl;

class Coffee: public CaffeineBeverage
{
public:
    Coffee()
    {
        cout << "Making coffee..." << endl;
    }
    ~Coffee(){}

    void brew()
    {
        cout << "Brew coffee..." << endl;
    }
    void addCondiments()
    {
        cout << "Add sugar..." << endl;
    }
};
}


#endif

