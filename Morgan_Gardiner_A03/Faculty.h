//
// Created by morga on 2024-07-30.
//
#include "Person.h"
#include <string>

#ifndef FACULTY_H
#define FACULTY_H

class Faculty : public Person {
public:
    Faculty();
    ~Faculty();
    void printInfo();
    void userInput();
    virtual float salary();
protected:
    std::string DepName;
    bool FacultyType;
};

#endif //FACULTY_H
