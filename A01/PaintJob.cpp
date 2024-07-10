//
// Created by morga on 2024-07-10.
//
#include "PaintJob.h"

//Function to set the values of height/width/length based on user input
void PaintJob::areaCalc(){
    //Calculate and set the rooms area based on use input (Wall area = 2*((HxW)+(HxL)))
    Area = 2.0f * ((Height * Width) + (Height * Length));
};

void PaintJob::paintCalc(){
    //Function to calculate the price of paint based on the number of coats and the price of the can
    // a Liter of paint covers 100 square feet
    //Loop through to show amount of paint needed for 1,2,and 3 coats

    for(numCoats = 1, numCoats <=3, NumCoats++) {

        PaintNeeded = (Area* NumCoats) / 100.0f;
        printf("Amount of paint needed: %.2f L\n", PaintNeeded);
        //number of 3.7 Liter cans needed to paint the wall
        NumCans = ceil(PaintNeeded / 3.7f);
        printf("Number of paint cans needed: %hu cans\n", NumCans);
        //Based on user input can price
        PaintCost = NumCans * CanPrice;
        printf("Paint cost: %hu $\n", PaintCost);
        printf("The price of %d coat(s) of paint: %hi $\n", (Budget - (NumCoats * PaintCost)));

    }
};