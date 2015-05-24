#ifndef __PROXY_H
#define __RPOXY_H

#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject
{
public:
    Proxy(Subject *s);
    ~Proxy();

    void operation();

private:
    Subject *subject;
};

#endif

