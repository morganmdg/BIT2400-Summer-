#include <iostream>
#include <stdio.h>
#include "PaintJob.h"

using namespace std;

int main()
{
    //Declaring variables in main
    float iHeight, iWidth, iLength;
    float iBudget, iCanPrice;

    //User Input:
        //Prompt user to enter budget
        printf("Enter your budget: ");
        scanf("%f", &iBudget);
    #
        //Prompt user to enter wall height (in feet)
        printf(" Enter wall heigth (feet): ");
        scanf_s(" %f", &iHeight);

        //Prompt user to enter wall width (in feet)
        printf("Enter wall width (feet): ");
        scanf_s(" %f", &iWidth);

        //Prompt user to enter wall length (in feet)
        printf("Enter wall length (feet): ");
        scanf_s(" %f", &iLength);

        //Prompt user to enter price of a can of paint
        printf("Enter the price of a can of paint:  ");
        scanf_s(" %f", &iCanPrice);

    //Output
    printf("\n******************************\n\n");

    //Class instance/object
    PaintJob cPaintJob(iHeight, iWidth, iLength);

    //Setters for budget and can price
    cPaintJob.setBudget(iBudget);
    cPaintJob.setCanPrice(iCanPrice);

        //Calculate and outupt wall area
        float cArea = cPaintJob.getArea();
        printf("Wall area: %.2f ft^2\n", cArea);

        int iNumCoats = 0;
        //Loop through to show amount of paint needed, number of cans, paint cost, and amount of $ left in budget for 1,2,and 3 coats
        for(iNumCoats = 1; iNumCoats <=3; iNumCoats++) {
            printf("\n******************************\n\n");
            float cPaintNeeded = cPaintJob.getpaintNeeded(iNumCoats, cArea);
            printf("Amount of paint needed: %.2f L\n", cPaintNeeded);
            int cNumCans = cPaintJob.getnumCans(cPaintNeeded);
            printf("Number of paint cans needed: %d cans\n", cNumCans);
            float cPaintCost = cPaintJob.getpaintCalc(cPaintNeeded, iCanPrice);
            printf("Paint cost: %.2f $\n", cPaintCost);
            float cCoatCost = cPaintJob.getpaintcoatCost(iNumCoats, iBudget, cPaintCost);
            printf("The amount of money left in the budget after %d coat(s) of paint: %.2f $\n", iNumCoats, cCoatCost);
        }

    //Class destructor to reset all member values to 0
    cPaintJob.~PaintJob();

    return 0;
}
