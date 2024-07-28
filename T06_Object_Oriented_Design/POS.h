//
// Created by morga on 2024-07-28.
//
#ifndef POS_H
#define POS_H
#pragma once
#include "Item.h"

class POS {
protected:
    static const int itemsTotal = 7;
    Item items[itemsTotal];
    float sales;
    float tips;
    int transactions;
public:
    POS();

    void printItems();
    void menu();
    int getInput();
    void finalize(float subtotal);
    void salesReport();
};

#endif //POS_H
