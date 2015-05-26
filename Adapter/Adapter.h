#ifndef __ADAPTER_H
#define __ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

class Adapter: public Target
{
public:
    Adapter(Adaptee *a);
    ~Adapter();

    void operate();

private:
    Adaptee *adaptee;
};

#endif

