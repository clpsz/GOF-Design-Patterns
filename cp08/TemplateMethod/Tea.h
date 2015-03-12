#ifndef TEA_H
#define TEA_H

#include <iostream>

#include "CaffeineBeverage.h"

namespace caffeine
{
using std::cout;
using std::endl;

class Tea: public CaffeineBeverage
{
public:
    Tea()
    {
        cout << "Making tea..." << endl;
    }
    ~Tea(){}

    void brew()
    {
        cout << "Brew tea..." << endl;
    }
    void addCondiments()
    {
        cout << "Add lemon..." << endl;
    }
};
}


#endif

