//
// Created by morga on 2024-07-09.
//

#include "PaintJob.h"

//Function to set the values of height/width/length based on user input
void PaintJob::areaCalc(){
    //Calculate and set the rooms area based on use input (Wall area = 2*((HxW)+(HxL)))
    Area = 2.0f * ((Height * Width) + (Height * Length));
};

void PaintJob::paintCalc(){
    //Function to calculate amount of paint needed in Ls and cans (a Liter of paint covers 100 square feet)
    //Loop through to show amount of paint needed for 1,2,and 3 coats
    PaintNeeded = Area / 100.0f;
    printf("Amount of paint needed: %.2f L\n", PaintNeeded);

    //number of 3.7 Liter cans needed to paint the wall
    NumCans = ceil(PaintNeeded / 3.7f);
    printf("Number of paint cans needed: %hu cans\n", NumCans);
};

void PaintJob::costCalc(){
    //a 3.7L can costs 35$
    PaintCost = NumCans * CanPrice;
    printf("Paint cost: %hu $\n", PaintCost);

    //the cost for 1, 2 and 3 coats of paint, and how far is it from the budget
    printf("The price of 1 coat(s) of paint: %hi $\n", (Budget - PaintCost));

    //Function to calculate the price of paint based on the number of coats and the price of the can
    // a Liter of paint covers 100 square feet
    PaintNeeded = (Area*2) / 100.0f;
    //number of 3.7 Liter cans needed to paint the wall
    NumCans = ceil(PaintNeeded / 3.7f);
    //a 3.7L can costs 35$
    PaintCost = NumCans * 35;
    printf("The price of 2 coat(s) of paint: %hi $\n", (Budget - (2 * PaintCost)));

    // a Liter of paint covers 100 square feet
    PaintNeeded = (Area*3) / 100.0f;
    //number of 3.7 Liter cans needed to paint the wall
    NumCans = ceil(PaintNeeded / 3.7f);
    //a 3.7L can costs 35$
    PaintCost = NumCans * 35;
    printf("The price of 3 coat(s) of paint: %hi $\n", (Budget - (3 * PaintCost)));
};
