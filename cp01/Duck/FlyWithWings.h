#ifndef __FLYWITHWINGS_H__
#define __FLYWITHWINGS_H__

#include <iostream>
#include "FlyBehavior.h"


namespace duck
{
class FlyWithWings: public FlyBehavior
{
public:
    void fly()
    {
       std::cout << "I am flying with wings" << std::endl; 
    }
};
}

#endif

