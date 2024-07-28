//
// Created by morga on 2024-07-28.
//

#ifndef ITEM_H
#define ITEM_H
#pragma once

#include <iostream>

using namespace std;

class Item {
protected:
    string name;
    float price;
public:
    Item();
    Item(string n, float p);
    float getPrice();
    string getName();
};

#endif //ITEM_H
