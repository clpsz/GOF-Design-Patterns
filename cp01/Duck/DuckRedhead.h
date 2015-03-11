#ifndef __QUACKMALLARD_H__
#define __QUACKMALLARD_H__

#include "Duck.h"

namespace duck
{

class DuckMallard: public Duck
{
public:
    DuckMallard(): Duck(new FlyNoFly(), new Quack())
    {
    }
};

}

#endif


