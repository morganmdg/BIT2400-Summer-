#include <iostream>
#include <stdio.h>
#include <math.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    PaintJob cPaintJob;

    float Height, Width, Length;
    float Budget, CanPrice;

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
    printf("Enter price of can of paint:  ");
    scanf_s(" %f", &CanPrice);

    //Output
    printf("\n******************************\n\n");

    //Calculate and outupt wall area
    float Area = cPaintJob.getArea(Height, Width, Length);
    printf("Wall area: %.2f ft^2\n", Area);

    int NumCoats = 1;
    //Loop through to show amount of paint needed for 1,2,and 3 coats
    for(NumCoats = 1; NumCoats <=3; NumCoats++) {
        printf("\n******************************\n\n");
        float PaintNeeded = cPaintJob.getpaintNeeded(NumCoats, Area);
        printf("Amount of paint needed: %.2f L\n", PaintNeeded);
        float NumCans = cPaintJob.getnumCans(PaintNeeded);
        printf("Number of paint cans needed: %d cans\n", NumCans);
        float PaintCost = cPaintJob.getpaintCalc(PaintNeeded, CanPrice);
        printf("Paint cost: %f $\n", PaintCost);
        float CoatCost = cPaintJob.getpaintcoatCost(NumCoats, Budget, PaintCost);
        printf("The price of %d coat(s) of paint: %f $\n", NumCoats, CoatCost);
    }

    //reset values to 0
    cPaintJob.~PaintJob();

    return 0;
}
