//
// Created by morga on 2024-07-30.
//
// Person.cpp
// Created Dr.Rami Sabouni - Systems and Computer Engineering
// BIT2400 - Late Summer 2024
// @version 1.0 last updated July 28, 2024

#include "Person.h"
using namespace std;

// Constructor to init variables
Person::Person() {
    firstName = "DefaultFirst";
    lastName = "DefaultLast";
    age = 0;
    personType = false;		// default is Student
}

// Printout the user's basic info
void Person::printInfo() {
    cout << "Welcome to BIT2400 Polymorphism software!" << endl;
    cout << "Apparently you are a person!\n\n";
    cout << "Your name is " << firstName << " " << lastName << "\n";
    cout << "You are " << age << " years old" << endl;
    switch (personType) {
    case 0:
        cout << "You are a student" << endl;
        break;
    case 1:
        cout << "You are a Faculty" <<endl;
        break;
    }
    cout << endl;
}

// Get person's info
void Person::userInput() {
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter 0) for Student: 1) for Faculty ";
    cin >> personType;

    cout << endl;
}