#ifndef __FLYNOFLY_H__
#define __FLYNOFLY_H__

#include <iostream>
#include "FlyBehavior.h"


namespace duck
{
class FlyNoFly: public FlyBehavior
{
public:
    void fly()
    {
       std::cout << "I can't fly" << std::endl; 
    }
};
}

#endif

