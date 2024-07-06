#include <stdio.h>

//Function practice

void mySecondFunction () {
    printf("Second test message\n");
}
void myFunction () {
    printf("Testing my function\n");
    mySecondFunction();
}

int main()
{
    printf("Hello, World!\n");

    myFunction();

    return 0;
}
