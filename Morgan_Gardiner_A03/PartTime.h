//
// Created by morga on 2024-07-30.
//
#include "Faculty.h"
#ifndef PARTTIME_H
#define PARTTIME_H


class PartTime : public Faculty {
public:
    PartTime(); //Default Constructor
    ~PartTime(); //Default Destructor
    void printInfo() final;
    void userInput() final;
    float salary() final;
protected:
    int hoursWorked;
    float hourlyRate;
};

#endif //PARTTIME_H
