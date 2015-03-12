#ifndef TURKEY_ADAPTER_H
#define TURKEY_ADAPTER_H

#include "Duck.h"
#include "Turkey.h"

namespace adapter
{

class TurkeyAdapter: public Duck
{
public:
    TurkeyAdapter(Turkey *t): turkey(t)
    {}
    ~TurkeyAdapter(){}
    void quack()
    {
        turkey->gobble();
    }
    void fly()
    {
        turkey->fly();
    }
private:
    Turkey *turkey;
};
}

#endif

