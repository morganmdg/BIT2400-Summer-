#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{

    Employee programmer;
    cout << "Programmers " << endl;
    programmer.getName();
    programmer.displayName();

    Employee designer;
    cout << "Designers " << endl;
    designer.getName();
    designer.displayName();
}
