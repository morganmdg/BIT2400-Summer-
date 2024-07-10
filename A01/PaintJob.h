//
// Created by morga on 2024-07-10.
//

#ifndef PAINT_H
#define PAINT_H

#include "stdio.h"

class PaintJob {
public:
    // Add your methods here
    void userBudget();
    unsigned short int NumCans;
    float CoatCost;
    float PaintNeeded;
private:
    float Height, Width, Length, Area;
    float Budget;
    float CanPrice;
};

#endif //PAINT_H
