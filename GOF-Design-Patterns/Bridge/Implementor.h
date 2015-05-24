#ifndef __IMPLEMENTOR_H
#define __IMPLEMENTOR_H

class Implementor
{
public:
    Implementor();
    ~Implementor();

    virtual void impOperate() = 0;
};

#endif

