//
// Created by morga on 2024-07-19.
//
#include "Vector2D.h"
#include <iostream>

Vector2D::Vector2D() {
    x = 0.0;
    y = 0.0;
}

// prints the values of x and y to the console
void Vector2D::print() {
    std::cout << " [ " << x << ", " << y << " ]" << std::endl;
}