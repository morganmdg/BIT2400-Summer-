//
// Created by morga on 2024-07-30.
//
#include "Student.h"
#include <string>
#ifndef GRADUATE_H
#define GRADUATE_H

class Graduate : public Student {
public:
    Graduate(); //Default Constructor
    ~Graduate(); //Default Destructor
    void printInfo() final;
    void userInput() final;
    std::string calcGPA();
    bool TAType();
protected:
    std::string supervisorName;
    int numPublications;
    bool TA;
    float hoursAssigned;
};

#endif //GRADUATE_H
