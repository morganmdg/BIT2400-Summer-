//
// Created by morga on 2024-07-08.
//

#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include "stdio.h"

class Student {
protected:
    int id=1;
    int grades[5]={0,0,0,0,0};
    float GPA = 0.0f;

public:
    Student();
    ~Student();
};

#endif //STUDENT_H
