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

void calculateSum() {
    int x = 5;
    int y = 17;
    int sum = x + y;
    printf("If x is 5 and y is 17, the sum of x + y = %d \n", sum);
}

void nameFunction (char name[]) {
printf("%s\n", name);
};

void nameAgeFunction (char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int main()
{
    printf("Hello World!\n");
    //nameFunction("Morgan");
    nameAgeFunction("Morgan",28);

    myFunction();

    calculateSum();

    return 0;
}
