//
// Created by morga on 2024-07-10.
//

#ifndef PAINTJOB_H
#define PAINTJOB_H
#include "stdio.h"

//unsigned short int cNumCans = 0, cPaintCost = 0;

class PaintJob {
public:
    // Add your methods here
    void areaCalc();
    void paintCalc();
    void ~clearInput();
    unsigned short int NumCoats = 0;
    unsigned short int NumCans = 0;
    float CoatCost = 0.0f;
    float PaintNeeded = 0.0f;
private:
    float Height = 0.0f, Width = 0.0f, Length = 0.0f, Area = 0.0f;
    float Budget = 0.0f;
    float CanPrice = 0.0f;
};
#endif //PAINTJOB_H
