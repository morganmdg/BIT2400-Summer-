#include <iostream>
#include <stdio.h>
#include <math.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    //Prompt user to enter budget
    printf("Enter your budget: ");
    scanf("%f", &Budget);
#
    //Prompt user to enter wall dimensions
    printf("Enter wall heigth (feet): ");
    scanf_s("%f", &Height);

    printf("Enter wall width (feet): ");
    scanf_s("%f", &Width);

    printf("Enter wall length (feet): ");
    scanf_s("%f", &Length);

    //Prompt user to enter price of the can of paint
    printf("Enter price of can of paint: %f\n", CanPrice);

    //Output
    printf("\n******************************\n\n");

    printf("Wall area: %.2f ft^2\n", Area);

    //Output
    printf("\n******************************\n\n");


    return 0;
}
