//
// Created by morga on 2024-07-30.
//
#include "Student.h"
#include <string>
#ifndef UNDERGRAD_H
#define UNDERGRAD_H

class UnderGrad {
public:
    void printInfo();
    void userInput();
    std::string calcGPA();
protected:
    std::string ProgramName;
    int NumCourses;
    int yearStanding;
    int classOf;
};

#endif //UNDERGRAD_H
