#ifndef __QUACK_H__
#define __QUACK_H__
#include "iostream"
#include "QuackBehavior.h"

namespace duck
{

class Quack: public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "This is my quack"  << std::endl;
    }
};

}

#endif

