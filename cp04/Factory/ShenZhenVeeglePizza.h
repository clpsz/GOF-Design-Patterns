#ifndef SHENZHEN_VEEGLE_PIZZA_H
#define SHENZHEN_VEEGLE_PIZZA_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

namespace pizza
{

class ShenZhenVeeglePizza: public Pizza
{
public:
    ShenZhenVeeglePizza(): name("ShenZhen Veggle Pizza")
    {
    };
    ~ShenZhenVeeglePizza(){}; void prepare()
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


