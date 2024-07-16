//
// Created by morga on 2024-07-10.
//

#ifndef PAINTJOB_H
#define PAINTJOB_H
#include "stdio.h"
#pragma once

class PaintJob {
public:
    //Constructor + Destructor
    PaintJob();
    PaintJob(float Height, float Width, float Length);
    ~PaintJob();
    /*Setters
    void setArea(float Area);
    void setHeight(float Height);
    void setWidth(float Width);
    void setLength(float Length);*/
    //Getters
    double getArea(float Height, float Width, float Length);
    float getpaintNeeded(int NumCoats, float Area);
    float getpaintCalc(float PaintNeeded, float CanPrice);
    int getnumCans(float PaintNeeded);
    float getpaintcoatCost(int NumCoats, float Budget, float PaintCost);
    unsigned short int NumCoats = 0;
    unsigned short int NumCans = 0;
    float CoatCost = 0.0f;
    float PaintCost = 0.0f;
    float PaintNeeded = 0.0f;
private:
    float Height = 0.0f, Width = 0.0f, Length = 0.0f, Area = 0.0f;
    float Budget = 0.0f;
    float CanPrice = 0.0f;
};
#endif //PAINTJOB_H
