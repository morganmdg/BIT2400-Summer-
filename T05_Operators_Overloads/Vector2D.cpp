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
double Vector2D::angle(Vector2D b) {
    Vector2D a(x,y);
    a.normalise();
    b.normalise();

    return acos(a.dot(b)) * 180 / 3.14159265359;
}

//returns the distance between this vector and another
double Vector2D::distance(Vector2D b ) {
    Vector2D dist = b - Vector2D(x,y);
    return dist.magnitude();
}

//Opreators
Vector2D Vector2D::operator+(Vector2D b) {
    return Vector2D(x + b.x, y + b.y);
}

Vector2D Vector2D::operator-(Vector2D b) {
    return Vector2D(x - b.x, y - b.y);
}

Vector2D Vector2D::operator*(double b) {
    return Vector2D(x * b, y * b);
}

void Vector2D::operator+=(Vector2D b) {
    x += b.x;
    y += b.y;
}

void Vector2D::operator-=(Vector2D b) {
    x -= b.x;
    y -= b.y;
}

void Vector2D::operator*=(double b) {
    x *=  b;
    y *= b;
}

//returns a vector pointing in the opposite direction
Vector2D Vector2D::operator-() {
    return Vector2D(-x, -y);
}

//returns true if this vector is approximately equal to given vector bool
bool Vector2D::operator==(Vector2D b) {
    double dist = distance(b);
    return(dist < 0.00001);
}