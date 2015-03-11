#ifndef __QUACKSQUEAK_H__
#define __QUACKSQUEAK_H__
#include <iostream>
#include "QuackBehavior.h"

namespace duck
{

class QuackSqueak: public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "This is my squeak"  << std::endl;
    }
};

}

#endif

