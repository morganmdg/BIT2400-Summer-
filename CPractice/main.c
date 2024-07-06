#include <stdio.h>

//Function practice
//https://www.w3schools.com/c/c_functions.php

void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum %d + %d = %d\n", x, y, sum);
}

void nameAgeFunction (char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int returnFunction(int x, int y) {
    return x + y;
}

int main()
{
    nameAgeFunction("Morgan",28);

    calculateSum(124, 23);

    int result1 = returnFunction(5,8);
    int result2 = returnFunction(12, 4);
    int result3 = returnFunction(1,4);

    printf("If x is 5 and y is 8, the first result is %d\n", result1);
    printf("If x is 12 and y is 4, the second result is %d\n", result2);
    printf("If x is 1 and y is 4, the third result is %d\n", result3);


    printf("Thank you! The End.\n");
    return 0;
}
