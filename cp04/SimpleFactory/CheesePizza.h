#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

namespace pizza
{

class CheesePizza: public Pizza
{
public:
    CheesePizza(): name("Cheese Pizza")
    {
    };
    ~CheesePizza(){};

    void prepare()
    {
        cout << "Preparing " << this->name << endl;
    }
    void bake()
    {
        cout << "Baking " << this->name << endl;
    }
    void cut()
    {
        cout << "Cutting " << this->name << endl;
    }
    void box()
    {
        cout << "Boxing " << this->name << endl;
    }
private:
    string name;
};
}

#endif

