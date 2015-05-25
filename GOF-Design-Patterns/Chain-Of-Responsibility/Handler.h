#ifndef __HANDLER_H
#define __HANDLER_H

class Handler
{
public:
    Handler();
    ~Handler();

    virtual void handlerRequest(int req) = 0;
};

#endif

