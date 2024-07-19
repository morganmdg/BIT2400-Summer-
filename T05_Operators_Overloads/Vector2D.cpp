//
// Created by morga on 2024-07-19.
//
#include "Vector2D.h"
#include <iostream>
#include "math.h"

Vector2D::Vector2D() {
    x = 0.0;
    y = 0.0;
}

Vector2D::Vector2D(double a, double b) {
    x = a;
    y = b;
}
// prints the values of x and y to the console
void Vector2D::print() {
    std::cout << " [ " << x << ", " << y << " ]" << std::endl;
}

//return the magnitude of this vector
double Vector2D::magnitude() {
    return sqrt(x * x + y * y);
}

void Vector2D::normalise() {
    double mag = magnitude();
    if (mag > 0) {
        x /= mag;
        y /= mag;
    }
}

//returns the dot product
double Vector2D::dot(Vector2D b) {
    return x * b.x + y * b.y;
}

//returns the angle in the degrees between this vector and b