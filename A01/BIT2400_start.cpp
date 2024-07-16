#include <iostream>
#include <stdio.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    //Class instance/object
    PaintJob cPaintJob;

    //Declaring variables in main
    float Height, Width, Length;
    float Budget, CanPrice;

    //Prompt user to enter budget
    printf("Enter your budget: ");
    scanf("%f", &Budget);
#
    //Prompt user to enter wall height (in feet)
    printf(" Enter wall heigth (feet): ");
    scanf_s(" %f", &Height);
    cPaintJob.setHeight(Height);

    //Prompt user to enter wall width (in feet)
    printf("Enter wall width (feet): ");
    scanf_s(" %f", &Width);

    //Prompt user to enter wall length (in feet)
    printf("Enter wall length (feet): ");
    scanf_s(" %f", &Length);

    //Prompt user to enter price of a can of paint
    printf("Enter the price of a can of paint:  ");
    scanf_s(" %f", &CanPrice);

    //Output
    printf("\n******************************\n\n");

        //Calculate and outupt wall area
        float Area = cPaintJob.getArea(Height, Width, Length);
        printf("Wall area: %.2f ft^2\n", Area);

        int NumCoats = 0;
        //Loop through to show amount of paint needed, number of cans, paint cost, and amount of $ left in budget for 1,2,and 3 coats
        for(NumCoats = 1; NumCoats <=3; NumCoats++) {
            printf("\n******************************\n\n");
            float PaintNeeded = cPaintJob.getpaintNeeded(NumCoats, Area);
            printf("Amount of paint needed: %.2f L\n", PaintNeeded);
            int NumCans = cPaintJob.getnumCans(PaintNeeded);
            printf("Number of paint cans needed: %d cans\n", NumCans);
            float PaintCost = cPaintJob.getpaintCalc(PaintNeeded, CanPrice);
            printf("Paint cost: %.2f $\n", PaintCost);
            float CoatCost = cPaintJob.getpaintcoatCost(NumCoats, Budget, PaintCost);
            printf("The amount of money left in the budget after %d coat(s) of paint: %.2f $\n", NumCoats, CoatCost);
        }

    //Class destructor to reset all member values to 0
    cPaintJob.~PaintJob();

    return 0;
}
