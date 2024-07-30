//
// Created by morga on 2024-07-30.
//
#include "Faculty.h"
#ifndef FULLTIME_H
#define FULLTIME_H

class FullTime : public Faculty {
public:
    FullTime(); //Default Constructor
    ~FullTime(); //Default Destructor
    void printInfo() final;
    void userInput() final;
    float salary() final;
protected:
    int officeExtend;
    float BaseSalary;
    int yearsExp;
};

#endif //FULLTIME_H
