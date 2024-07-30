//
// Created by morga on 2024-07-30.
//

// Student.cpp
// Created Dr.Rami Sabouni - Systems and Computer Engineering
// BIT2400 - Late Summer 2024
// @version 1.0 last updated July 28, 2024


#include "Student.h"
using namespace std;

Student::Student() {
    firstName = "StudentFirst";
    lastName = "StudentLast";
    personType = false;			// Student

    DepName = "Unknown";
    GPA = 4.0;
    studentType = false;
    regType = false;
}

// Printout the student's basic info
void Student::printInfo() {
    cout << "Welcome to BIT2400 Polymorphism software!" << endl;
    cout << "Apparently you are a student!" << endl << endl;
    cout << "Student name is: " << firstName << " " <<lastName << endl;
    cout << "Student is " << age << " years old"<< endl;
    cout << "Student is a ";
    switch (regType)
    {
    case 0:
        cout << "full time ";
        break;
    case 1:
        cout << "part time ";
        break;
    }
    switch (studentType)
    {
    case 0:
        cout << "under graduate ";
        break;
    case 1:
        cout << "graduate ";
        break;
    }
    cout << DepName << " student" << endl << endl;
}

// Get student's info
void Student::userInput() {					// Get student info

    Person::userInput();

    cout << "Enter your Department name: ";
    cin >> DepName;

    cout << "Enter your GPA: ";
    cin >> GPA;

    cout << "Enter 0) for Undergrad Student 1) for Grad student: ";
    cin >> studentType;

    cout << "Enter 0) for full time student 1) for part time: ";
    cin >> regType;

    cout << endl;
}

