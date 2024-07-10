//
// Created by morga on 2024-07-10.
//

#ifndef PAINT_H
#define PAINT_H

#include "stdio.h"

//unsigned short int cNumCans = 0, cPaintCost = 0;

class PaintJob {
public:
    // Add your methods here
    void userBudget();
    void areaInput();
    void paintCalc();
    void costCalc();
    unsigned short int NumCans = 0;
    float CoatCost = 0.0f;
    float PaintNeeded = 0.0f;
private:
    float Height = 0.0f, Width = 0.0f, Length = 0.0f, Area = 0.0f;
    float Budget = 0.0f;
    float CanPrice = 0.0f;
};

#endif //PAINT_H
