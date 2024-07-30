//
// Created by morga on 2024-07-30.
//

#ifndef UNDERGRAD_H
#define UNDERGRAD_H

#include "Student.h"
#include <string>

class UnderGrad : public Student {
public:
    UnderGrad(); //Default Constructor
    ~UnderGrad(); //Default Destructor
    void printInfo() final;
    void userInput() final;
    std::string calcGPA();
protected:
    std::string ProgramName;
    int NumCourses;
    int yearStanding;
    int classOf;
};

#endif //UNDERGRAD_H
