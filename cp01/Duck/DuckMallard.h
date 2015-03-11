#ifndef __DUCKKREDHEAD_H__
#define __DUCKKREDHEAD_H__ 
#include "Duck.h"

namespace duck
{

class DuckRedhead: public Duck
{
public:
    DuckRedhead(): Duck(new FlyWithWings(), new QuackSqueak())
    {
    }
};

}

#endif

