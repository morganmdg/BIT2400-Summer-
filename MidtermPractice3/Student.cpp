//
// Created by morga on 2024-07-21.
//
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student()
{
        ID = 435135;
        for (int i = 0; i < 5; i++)
        {
            courses[i] = "--------";
        }
}

void Student::displayCourses()
{
        std::cout << "Courses: \n";
        for (int i=0; i < 5; i++)
        {
            cout << i << ": " +courses[i] + "\n";
        }
}

void Student::addCourse(string course, int slot){
    if (slot >= 0 && slot <= 4)
    {
        courses[slot] = course;
    }
    else
    {
        cout << "Invalid course slot. \n\n";
    }
}
