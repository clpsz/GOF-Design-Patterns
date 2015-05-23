#ifndef __PRODUCT_H
#define __PRODUCT_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class Product
{
public:
    Product();
    ~Product();

    void addPart(string newPart);
    void showProduct();

private:
    vector<string> parts;
};

#endif

