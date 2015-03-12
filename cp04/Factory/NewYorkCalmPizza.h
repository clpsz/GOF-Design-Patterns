#ifndef CALM_PIZZA_H
#define CALM_PIZZA_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

namespace pizza
{

class NewYorkCalmPizza: public Pizza
{
public:
    NewYorkCalmPizza(): name("NewYork Calm Pizza")
    {
    };
    ~NewYorkCalmPizza(){};

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


