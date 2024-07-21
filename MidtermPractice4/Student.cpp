//
// Created by morga on 2024-07-21.
//

#include <string>
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student()
{
ID = 453670;
    for (int i=0; i < 5; i++)
    {
        courses[i] = "--------";
    }
}

void Student::displayCourses()
{
    cout << "Courses:  " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << i << ": " << courses[i] << "\n";
    }
}


void Student::addCourses(std::string course, int slot)
{
 if (slot >=0 && slot <= 4)
 {
     courses[slot] = course;
 }
    else
    {
        cout << "Invalid course slot";
    }
}