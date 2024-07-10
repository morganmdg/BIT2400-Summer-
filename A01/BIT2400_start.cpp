#include <stdio.h>
#include <math.h>
#include "PaintJob.h"
#include "PaintJob.cpp"

using namespace std;

int main()
{
	//Prompt user to enter budget
	printf("Enter your budget: ");
	scanf("%f", &Budget);

	//Prompt user to enter wall dimensions
	printf("Enter wall heigth (feet): ");
	scanf_s("%f", &Height);

	printf("Enter wall width (feet): ");
	scanf_s("%f", &Width);

	printf("Enter wall length (feet): ");
	scanf_s("%f", &Length);

	//Output
	printf("\n******************************\n\n");
	return 0;
}