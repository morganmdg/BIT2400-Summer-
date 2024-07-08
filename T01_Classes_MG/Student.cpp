//
// Created by morga on 2024-07-08.
//
#include "Student.h"
#include <stdlib.h>

Student::Student() {
printf("Created student entry\n");

    id = rand() % 1000;
    printf("\tID: %d\n", id);

    for(int i = 0; i < 5; i++) {
        grades[i] = rand() % 100;
        printf("\tGrade %d: %d\n", i + 1, grades[i]);
    }

    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += grades[i];
    }
    float average = total / 5.0f;

    GPA = average / 25;
    printf("\tGPA is %.1f\n", GPA);
}

Student::~Student() {
printf("Deleted student entry\n");
}