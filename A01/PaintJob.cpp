//
// Created by morga on 2024-07-10.
//
#include "PaintJob.h"
#include <math.h>

//Constructor to set variables based on user input and calcuate area
PaintJob::PaintJob(float iHeight, float iWidth, float iLength) {
    Area =  Area = 2.0f * ((Height * Width) + (Height * Length));
    Height = iHeight;
    Width = iWidth;
    Length = iLength;
}

/*Set Area
void PaintJob::setArea(float iArea) {
    Area = iArea;
}
//Set Height
void PaintJob::setHeight(float iHeight) {
    Height = iHeight;
}

//SetWidth
void PaintJob::setWidth(float iWidth) {
    Width = iWidth;
}

//Set Length
void PaintJob::setLength(float iLength) {
    Length = iLength;
}*/

//Method to return area based on user input
 double PaintJob::getArea(float Height, float Width, float Length){
     return Area;
}

//Create getter for paint needed
float PaintJob::getpaintNeeded(const int NumCoats, const float Area) {
    // a Liter of paint covers 100 square feet
    PaintNeeded = (NumCoats * Area) / 100.0f;
    return PaintNeeded;
}

int PaintJob::getnumCans(const float PaintNeeded) {
    //number of 3.7 Liter cans needed to paint the wall
    NumCans = ceil(PaintNeeded / 3.7f);
    return NumCans;
}
//Create getter for paint calculations
float PaintJob::getpaintCalc(float PaintNeeded, const float CanPrice) {
    //Function to calculate the price of paint based on the number of coats and the price of the can
    //Based on user input can price
    PaintCost = (NumCans * CanPrice);
    return PaintCost;
}

//Create getter for paint coat cost
float PaintJob::getpaintcoatCost(int NumCoats, const float Budget, const float PaintCost) {
    for(NumCoats = 1; NumCoats <=3; NumCoats++) {
        CoatCost = (Budget - (NumCoats * PaintCost));
        return CoatCost;
    }
}

//Create a class destructor that will be used to reset the values of all member variables to zeros
PaintJob::~PaintJob() {
    Height = 0.0f, Width = 0.0f, Length = 0.0f, Area = 0.0f, PaintNeeded = 0.0f;
    NumCans = 0, PaintCost = 0;
};
