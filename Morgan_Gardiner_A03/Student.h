//
// Created by morga on 2024-07-30.
//

// Student.h
// Created Dr.Rami Sabouni - Systems and Computer Engineering
// BIT2400 - Late Summer 2024
// @version 1.0 last updated July 28, 2024

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student();					// Constructor to init variables
    virtual void printInfo();	// Printout the student's basic info
    virtual void userInput();	// Get student's info
protected:
    std::string DepName;
    double GPA;
    bool studentType;		// Is it undergrad (false) or grad (true)
    bool regType;			// Full time (false) or partime(true)
};

#endif //STUDENT_H
