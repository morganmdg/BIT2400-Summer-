//
// Created by morga on 2024-07-21.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#pragma once

class Student {
public:
    int ID;
    std::string courses[5];
    Student();
    void displayCourses();
    void addCourses(std::string course, int slot);
};



#endif //STUDENT_H
