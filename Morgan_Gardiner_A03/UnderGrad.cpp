//
// Created by morga on 2024-07-30.
//

#include "UnderGrad.h"
#include <string>

using namespace std;

//Default constructor to initalize class member variables
UnderGrad::UnderGrad()
{
    NumCourses = 0;
    yearStanding = 0;
    classOf = 0;
}

string UnderGrad::calcGPA()
{
    string letterGrade;
    int gradePercentage;

    if(gradePercentage == 90)
    {
        letterGrade = "A+";
    }
    else if(gradePercentage == 85)
    {
        letterGrade = "A";
    }
    else if(gradePercentage == 80)
    {
        letterGrade = "A-";
    }
    else if(gradePercentage == 77)
    {
        letterGrade = "B+";
    }
    else if(gradePercentage == 73)
    {
        letterGrade = "B";
    }
    else if(gradePercentage == 70)
    {
        letterGrade = "B-";
    }
    else if(gradePercentage == 67)
    {
        letterGrade = "C+";
    }
    else if(gradePercentage == 63)
    {
        letterGrade = "C";
    }
    else if(gradePercentage == 60)
    {
        letterGrade = "C-";
    }
    else if(gradePercentage == 57)
    {
        letterGrade = "D+";
    }
    else if(gradePercentage == 53)
    {
        letterGrade = "D";
    }
    else if(gradePercentage == 50)
    {
        letterGrade = "D-";
    }
    else if(gradePercentage < 50)
    {
        letterGrade = "F";
    }
    return letterGrade;
}

//Default Destructor to reset values to 0
UnderGrad::~UnderGrad()
{
    NumCourses = 0;
    yearStanding = 0;
    classOf = 0;
}