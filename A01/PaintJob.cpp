//
// Created by morga on 2024-07-10.
//
#include "PaintJob.h"
#include <math.h>

//Default constructor to intitalise variables
PaintJob::PaintJob() {
    Height = 0.0f;
    Width = 0.0f;
    Length = 0.0f;
    Area = 0.0f;
    NumCoats = 0;
    NumCans = 0;
    CoatCost = 0.0f;
    PaintCost = 0.0f;
    PaintNeeded = 0.0f;
}

//Constructor to set variables based on user input and calcuate area based on these values
PaintJob::PaintJob(float iHeight, float iWidth, float iLength) {
    Height = iHeight;
    Width = iWidth;
    Length = iLength;

    //Calculate area based on user input variables
   Area = 2.0f * ((Height * Width) + (Height * Length));
}

//Setter to set budget based on user input
void PaintJob::setBudget(float iBudget) {
    Budget = iBudget;
}

//Setter to set can price based on user input
void PaintJob::setCanPrice(float iCanPrice) {
    CanPrice = iCanPrice;
}

//Getter to return budget
float PaintJob::getBudget() {
    return Budget;
}

//Getter to return can price
float PaintJob::getCanPrice() {
    return CanPrice;
}

//Getter to return area based on user input
 double PaintJob::getArea(){
     return Area;
}

//Create getter to determine amount of paint needed in L
float PaintJob::getpaintNeeded(const int iNumCoats, const float cArea) {
    // a Liter of paint covers 100 square feet
    PaintNeeded = (iNumCoats * cArea) / 100.0f;
    return PaintNeeded;
}

//Create getter to determine number of cans needed
int PaintJob::getnumCans(const float PaintNeeded) {
    //number of 3.7 Liter cans needed to paint the wall
    NumCans = ceil(PaintNeeded / 3.7f);
    return NumCans;
}

//Create getter to calculate price of paint based on number of coats + price of the can
float PaintJob::getpaintCalc(float cPaintNeeded, const float iCanPrice) {
    PaintCost = (NumCans * iCanPrice);
    return PaintCost;
}

//Create getter for calculating paint coat cost
float PaintJob::getpaintcoatCost(int iNumCoats, const float iBudget, const float iPaintCost) {
    for(iNumCoats = 1; iNumCoats <=3; iNumCoats++) {
        CoatCost = (iBudget - (iNumCoats * iPaintCost));
        return CoatCost;
    }
}

//Destructor to reset the values of all member variables to zeros
PaintJob::~PaintJob() {
    Height = 0.0f;
    Width = 0.0f;
    Length = 0.0f;
    Area = 0.0f;
    NumCoats = 0;
    NumCans = 0;
    CoatCost = 0.0f;
    PaintCost = 0.0f;
    PaintNeeded = 0.0f;
};
