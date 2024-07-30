//
// Created by morga on 2024-07-30.
//
#include "Faculty.h"
#ifndef FULLTIME_H
#define FULLTIME_H

class FullTime : public Faculty {
public:
    void printInfo();
    void userInput();
    void salary();
protected:
    int officeExtend;
    float BaseSalary;
    int yearsExp;
};

#endif //FULLTIME_H
