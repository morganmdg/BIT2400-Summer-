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
};
#endif //VECTOR2D_H
