#include "common.h"
#include "Product.h"

Product::Product()
{
}

Product::~Product()
{
}

void Product::addPart(string newPart)
{
    parts.push_back(newPart);
}

void Product::showProduct()
{
    for (vector<string>::const_iterator it = parts.begin(); it != parts.end(); ++it)
    {
        cout << *it << endl;
    }
}

