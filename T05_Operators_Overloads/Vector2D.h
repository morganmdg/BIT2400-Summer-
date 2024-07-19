//
// Created by morga on 2024-07-19.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H

#pragma once

class Vector2D {
public:
    double x, y;

    Vector2D();
    Vector2D(double a, double b);

    void print();

    double magnitude();
    void normalise();

    double dot(Vector2D b);
    double angle(Vector2D b);
    double distance(Vector2D b);

    //Operators
    Vector2D operator+(Vector2D b);
    Vector2D operator-(Vector2D b);
    Vector2D operator*(double b);

    void operator+=(Vector2D b);
    void operator-=(Vector2D b);
    void operator*=(double b);

    Vector2D operator-();
    bool operator==(Vector2D b);
};
#endif //VECTOR2D_H
