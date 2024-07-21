//
// Created by morga on 2024-07-21.
//
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;


Employee::Employee()
{
    name = "[Empty]";
}

void Employee::getName()
{
    cout << "Please enter your name below:  " << endl;
    cin >> name;
}

void Employee::displayName()
{
    cout << "First Name: " + name + "\n";
}