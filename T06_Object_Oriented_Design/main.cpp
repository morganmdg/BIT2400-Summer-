#include <iostream>
#include "POS.h";

int main()
{
    POS pos;
    char input = 'y';
    cout << endl << "Start a new transaction? (y/n)";
    cin >> input;
    while (input != 'n')
    {
        pos.menu();
    }

    return 0;
}
