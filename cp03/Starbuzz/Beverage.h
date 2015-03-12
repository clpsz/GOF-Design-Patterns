#ifndef __BEVERAGE_H
#define __BEVERAGE_H
#include <string>

namespace starbuzz
{
using std::string;

class Beverage
{
public:
    Beverage()
    {
    }
    virtual ~Beverage()
    {
    }

    virtual int getCost() = 0;
    virtual string getDescription() = 0;
};
}

#endif

