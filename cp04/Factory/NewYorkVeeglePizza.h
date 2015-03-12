#ifndef VEGGLE_PIZZA_H
#define VEGGLE_PIZZA_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

namespace pizza
{

class NewYorkVeeglePizza: public Pizza
{
public:
    NewYorkVeeglePizza(): name("Veggle Pizza")
    {
    };
    ~NewYorkVeeglePizza(){}; void prepare()
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


