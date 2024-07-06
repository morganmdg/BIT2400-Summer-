#include <stdio.h>

//Function practice
//https://www.w3schools.com/c/c_functions.php

void mySecondFunction () {
    printf("Second test message\n");
}
void myFunction () {
    printf("Testing my function\n");
    mySecondFunction();
}

void calculateSum() {
    int x = 5;
    int y = 17;
    int sum = x + y;
    printf("The sum of x + y = %d \n", sum);
}

void nameFunction (char name[]) {
printf("Hello %s\n", name);
};

int main()
{
    printf("Hello, World!\n");

    myFunction();

    calculateSum();

    nameFunction("Morgan");

    return 0;
}
