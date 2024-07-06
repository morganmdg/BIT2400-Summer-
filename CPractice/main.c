#include <stdio.h>

//Function practice
//https://www.w3schools.com/c/c_functions.php

void mySecondFunction () {
    printf("Second test for my function\n");
}
void myFunction () {
    printf("First test for my function\n");
    mySecondFunction();
}

//Update CalculateSum function
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum %d + %d = %d\n", x, y, sum);
}

void nameFunction (char name[]) {
printf("%s\n", name);
};

void nameAgeFunction (char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int myReturnFunction (int x) {
    return x + 5;
}

int secondReturnFunction(int x, int y) {
    return x + y;
}

int main()
{
    printf("Hello World!\n");
    //nameFunction("Morgan");
    nameAgeFunction("Morgan",28);

    myFunction();

    //update
    calculateSum(124, 23);

    printf("Result is %d\n", myReturnFunction(3));

    printf("The total is %d\n", secondReturnFunction(5,8));

    return 0;
}
