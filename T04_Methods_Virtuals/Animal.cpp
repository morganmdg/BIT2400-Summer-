//
// Created by morga on 2024-07-19.
//
#include "Animal.h"

using namespace std;

Animal::Animal() {
    name = "Animal";
}

void Animal::describe() {
    cout << "Animal name: " << name << "." << endl;
}