//
// Created by morga on 2024-07-20.
//
#include "Employee.h"

using namespace std;

void Employee::getName() {
    cout << "Please enter your name:  " << endl;
    cin >> name;

}

void Employee::displayName() {
    cout << "Employee name: " + name + "\n" << endl;
}

