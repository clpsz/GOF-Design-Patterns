#include <iostream>

#include "Beverage.h"
#include "BeverageBeer.h"
#include "BeverageCoffee.h"
#include "CondimentDecorator.h"
#include "CondimentMocha.h"
#include "CondimentWhip.h"

using std::cout;
using std::endl;

int main()
{
    starbuzz::Beverage *beverage = new starbuzz::BeverageCoffee("Coffee", 3);
    starbuzz::Beverage *mocha = new starbuzz::CondimentMocha(beverage);
    starbuzz::Beverage *whip = new starbuzz::CondimentWhip(mocha);

    cout << beverage->getDescription() << ":" << beverage->getCost() << endl; 
    cout << mocha->getDescription() << ":" << mocha->getCost() << endl; 
    cout << whip->getDescription() << ":" << whip->getCost() << endl; 

    delete whip;
    delete mocha;
    delete beverage;

    return 0;
}

