//
// Created by morga on 2024-07-28.
//

#include "Item.h"

Item::Item()
{
    name ="Lemonade";
    price = 1.00;
}

Item::Item(string n, float p)
{
    name = n;
    if(p < 0)
    {
        p=0;
    }
    price = p;
}

string Item::getName()
{
    return name;
}

float Item::getPrice()
{
    return price;
}

