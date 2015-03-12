#ifndef CAFFEINE_BEVERAGE_H
#define CAFFEINE_BEVERAGE_H

#include <iostream>


namespace caffeine
{
using std::cout;
using std::endl;

class CaffeineBeverage
{
public:
    CaffeineBeverage(){}
    virtual ~CaffeineBeverage(){}

    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }
    void boilWater()
    {
        cout << "Boiling warter..." << endl;
    }
    virtual void brew() = 0;
    void pourInCup()
    {
        cout << "Pour into your cup..." << endl;
    }
    virtual void addCondiments() = 0;

};
}

#endif

