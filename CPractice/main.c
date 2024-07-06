#include <stdio.h>

//Function practice

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

int main()
{
    printf("Hello, World!\n");

    myFunction();

    calculateSum();

    return 0;
}
