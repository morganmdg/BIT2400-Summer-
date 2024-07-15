#include <iostream>
#include <stdio.h>
#include <math.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    float Height, Width, Length;
    float Budget, CanPrice;
    float PaintCost, PaintNeeded;
    int NumCoats = 1;
    int NumCans;

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
    printf("Enter price of can of paint: %d\n", CanPrice);

    //Output
    printf("\n******************************\n\n");

    //Calculate and outupt wall area
    float Area = cpaintJob.getArea(Height, Width, Length);
    printf("Wall area: %.2f ft^2\n", Area);

    printf("\n******************************\n\n");

    PaintJob cpaintCalc;

    PaintNeeded = NumCans = PaintCost = cpaintJob.paintCalc();

            printf("Amount of paint needed: %.2f L\n", PaintNeeded);

            printf("Number of paint cans needed: %hu cans\n", NumCans);

            printf("Paint cost: %f $\n", PaintCost);

            printf("The price of coat(s) of paint: %f $\n", (Budget - (NumCoats * PaintCost)));


    return 0;
}
