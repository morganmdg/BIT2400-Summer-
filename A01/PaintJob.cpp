//
// Created by morga on 2024-07-10.
//
#include "PaintJob.h"
#include <math.h>

//Function to set the values of height/width/length based on user input (child class that inherits private specifiers)
 double PaintJob::getArea(float Height, float Width, float Length){
     //Calculate and set the rooms area based on use input (Wall area = 2*((HxW)+(HxL)))
     Area = 2.0f * ((Height * Width) + (Height * Length));
     return Area;
};

//Create a class destructor that will be used to reset the values of all member variables to zeros
PaintJob::~PaintJob() {
    Height = 0.0f, Width = 0.0f, Length = 0.0f, Area = 0.0f, PaintNeeded = 0.0f;
    NumCans = 0, PaintCost = 0;
};

//Create getter for paint needed
float PaintJob::getPaintNeeded(int NumCoats, float Area) {
    // a Liter of paint covers 100 square feet
    PaintNeeded = (NumCoats * Area) / 100.0f;
    return PaintNeeded;
}

float PaintJob::paintCalc(float PaintNeeded, float CanPrice) {
    //Function to calculate the price of paint based on the number of coats and the price of the can
    //number of 3.7 Liter cans needed to paint the wall
    NumCans = ceil(PaintNeeded / 3.7f);
    //Based on user input can price
    PaintCost = NumCans * CanPrice;
    return PaintCost;
}
