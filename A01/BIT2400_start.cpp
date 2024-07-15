#include <iostream>
#include <stdio.h>
#include <math.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    float Height, Width, Length;
    float Budget, CanPrice;

    PaintJob cpaintJob;

    //Prompt user to enter budget
    printf("Enter your budget: ");
    scanf("%f", &Budget);
#
    //Prompt user to enter wall dimensions
    printf(" Enter wall heigth (feet): ");
    scanf_s(" %f", &Height);

    printf("Enter wall width (feet): ");
    scanf_s(" %f", &Width);

    printf("Enter wall length (feet): ");
    scanf_s(" %f", &Length);

    //Prompt user to enter price of the can of paint
    printf("Enter price of can of paint: %f\n", &CanPrice);

    //Output
    printf("\n******************************\n\n");

    //Calculate and outupt wall area
    float Area = cpaintJob.getArea(Height, Width, Length);
    printf("Wall area: %.2f ft^2\n", Area);

    printf("\n******************************\n\n");

    int NumCoats = 1;
    //Loop through to show amount of paint needed for 1,2,and 3 coats
    for(NumCoats = 1; NumCoats <=3; NumCoats++) {
        printf("\n******************************\n\n");
        float PaintNeeded = cpaintJob.getPaintNeeded(NumCoats, Area);
        printf("Amount of paint needed: %.2f L\n", PaintNeeded);
        float NumCans = cpaintJob.getpaintCalc(PaintNeeded, CanPrice);
        printf("Number of paint cans needed: %hu cans\n", NumCans);
        float PaintCost = cpaintJob.getpaintCalc(PaintNeeded, CanPrice);
        printf("Paint cost: %f $\n", PaintCost);
        printf("The price of coat(s) of paint: %f $\n", (Budget - (NumCoats * PaintCost)));
    }

    //reset values to 0
    cpaintJob.~PaintJob();

    return 0;
}
