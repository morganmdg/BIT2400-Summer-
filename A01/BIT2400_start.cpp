#include <stdio.h>
#include <math.h>

using namespace std;

class PaintJob {
public:
	// Add your methods here
	unsigned short int NumCans;
	float CoatCost;
	float PaintNeeded;
private:
	float Height, Width, Length, Area;
	float Budget;
	float CanPrice;
};

int main()
{
	unsigned short int iBudget = 0;	// Can be short int or float

	printf("Enter your budget: ");
	scanf_s("%hu", &iBudget);		// if float, then need to use %f

	float iHeight = 0.0f, iWidth = 0.0f, iLength = 0.0f, cArea = 0.0f, cPaintNeeded = 0.0f;
	unsigned short int cNumCans = 0, cPaintCost = 0;

	printf("Enter wall hegith (feet): ");
	scanf_s("%f", &iHeight);

	printf("Enter wall width (feet): ");
	scanf_s("%f", &iWidth);

	printf("Enter wall length (feet): ");
	scanf_s("%f", &iLength);
	
	printf("\n******************************\n\n");

	// Wall area = 2*((HxW)+(HxL))
	cArea = 2.0f * ((iHeight * iWidth) + (iHeight * iLength));
	printf("Wall area: %.2f ft^2\n", cArea);

	// a Liter of paint covers 100 square feet
	cPaintNeeded = cArea / 100.0f;
	printf("Amount of paint needed: %.2f L\n", cPaintNeeded);

	//number of 3.7 Liter cans needed to paint the wall
	cNumCans = ceil(cPaintNeeded / 3.7f);
	printf("Number of paint cans needed: %hu cans\n", cNumCans);

	//a 3.7L can costs 35$
	cPaintCost = cNumCans * 35;
	printf("Paint cost: %hu $\n", cPaintCost);

	printf("\n******************************\n\n");
	//the cost for 1, 2 and 3 coats of paint, and how far is it from the budget
	printf("The price of 1 coat(s) of paint: %hi $\n", (iBudget - cPaintCost));
	

	// a Liter of paint covers 100 square feet
	cPaintNeeded = (cArea*2) / 100.0f;
	//number of 3.7 Liter cans needed to paint the wall
	cNumCans = ceil(cPaintNeeded / 3.7f);
	//a 3.7L can costs 35$
	cPaintCost = cNumCans * 35;
	printf("The price of 2 coat(s) of paint: %hi $\n", (iBudget - (2 * cPaintCost)));

	// a Liter of paint covers 100 square feet
	cPaintNeeded = (cArea*3) / 100.0f;
	//number of 3.7 Liter cans needed to paint the wall
	cNumCans = ceil(cPaintNeeded / 3.7f);
	//a 3.7L can costs 35$
	cPaintCost = cNumCans * 35;
	printf("The price of 3 coat(s) of paint: %hi $\n", (iBudget - (3 * cPaintCost)));
	
	return 0;
}