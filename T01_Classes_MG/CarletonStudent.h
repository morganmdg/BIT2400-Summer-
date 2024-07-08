//
// Created by morga on 2024-07-08.
//

#ifndef CARLETONSTUDENT_H
#define CARLETONSTUDENT_H

#pragma once
#include "Student.h"


class CarletonStudent : public Student {

    float CGPA = 0.0f;

public:
    CarletonStudent();
    ~CarletonStudent();
};



#endif //CARLETONSTUDENT_H
