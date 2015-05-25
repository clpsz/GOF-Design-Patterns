#ifndef __CONTEXT_H
#define __CONTEXT_H

class Context
{
public:
    Context();
    ~Context();
    void setToLower(bool v);
    bool getToLower(){ return toLower; }
    void setToUpper(bool v);
    bool getToUpper(){ return toUpper; }

private:
    bool toUpper;
    bool toLower;
};

#endif

