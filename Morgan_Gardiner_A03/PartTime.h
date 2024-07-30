//
// Created by morga on 2024-07-30.
//
#include "Faculty.h"
#ifndef PARTTIME_H
#define PARTTIME_H


class PartTime : public Faculty {
public:
    void printInfo();
    void userInput();
    float salary();
protected:
    int hoursWorked;
    float hourlyRate;
};

#endif //PARTTIME_H
