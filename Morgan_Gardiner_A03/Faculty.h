//
// Created by morga on 2024-07-30.
//
#include "Person.h"
#ifndef FACULTY_H
#define FACULTY_H
#include <string>


class Faculty : public Person {
public:
    void printInfo();
    void userInput();
protected:
    std::string DepName;
    bool FacultyType;
};



#endif //FACULTY_H
