#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;


int main()
{
//L02 example 1: a single entity to store necessary info for an employee
    // must have ability to execute code on it's stored data

    Employee programmer;
    cout << "Programmer Employee" << endl;
    programmer.getName();
    programmer.displayName();

    Employee designer;
    cout << "Designer Employee" << endl;
    designer.getName();
    designer.displayName();

}
