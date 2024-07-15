#include <iostream>
#include <stdio.h>
#include <math.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    float Height, Width, Length, Area;

    PaintJob cpaintJob;
    /*PaintJob cpaintCalc;*/

    /*Prompt user to enter budget
    printf("Enter your budget: ");
    scanf("%f", &Budget);*/
#
    //Prompt user to enter wall dimensions
    printf("Enter wall heigth (feet): ");
    scanf_s("%f", &Height);

    printf("Enter wall width (feet): ");
    scanf_s("%f", &Width);

    printf("Enter wall length (feet): ");
    scanf_s("%f", &Length);

    /*Prompt user to enter price of the can of paint
    printf("Enter price of can of paint: %d\n", CanPrice);*/

    //Output
    printf("\n******************************\n\n");

    cpaintJob.getArea(Height, Width, Length);

    printf("Wall area: %.2f ft^2\n", Area);

    //Output
    printf("\n******************************\n\n");

    /*
    cpaintJob.paintCalc();*/

    return 0;
}
