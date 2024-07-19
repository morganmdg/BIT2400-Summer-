//
// Created by morga on 2024-07-19.
//
#include "Dog.h"

using namespace std;

Dog::Dog() {
    name = "Dog ";
    breed = "Greyhound ";
}

void Dog::describe() {
    cout << "This " << name << "is a " << breed << "." << endl;
}