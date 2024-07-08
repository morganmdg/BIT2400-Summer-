//
// Created by morga on 2024-07-08.
//

#include "CarletonStudent.h"

CarletonStudent::CarletonStudent() {
    CGPA = GPA * 3;
    printf("This Carleton student's CGPA is %.1f\n", CGPA);
}

CarletonStudent::~CarletonStudent() {
    printf("Carleton student destructor\n");
}