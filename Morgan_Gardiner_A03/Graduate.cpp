//
// Created by morga on 2024-07-30.
//

#include "Graduate.h"
#include <string>

using namespace std;

//TAType method returns if TA is Full or Half TA based on hours assigned
bool Graduate::TAType()
{
    if (hoursAssigned > 65)
    {
        TA = false; //False = FullTime TA
    }
    else if (hoursAssigned < 65)
    {
        TA = true; //True = HalfTime TA
    }
    return TA;
}

//The calcGPA method returns student’s letter grade based on grade percentage
string Graduate::calcGPA()
{
    string letterGrade;
    int gradePercentage;

    if(gradePercentage == 95)
    {
        letterGrade = "A+";
    }
    else if(gradePercentage == 90)
    {
        letterGrade = "A";
    }
    else if(gradePercentage == 85)
    {
        letterGrade = "A-";
    }
    else if(gradePercentage == 80)
    {
        letterGrade = "B+";
    }
    else if(gradePercentage == 75)
    {
        letterGrade = "B";
    }
    else if(gradePercentage == 70)
    {
        letterGrade = "B-";
    }
    else if(gradePercentage == 65)
    {
        letterGrade = "C+";
    }
    else if(gradePercentage == 60)
    {
        letterGrade = "C";
    }
    else if(gradePercentage < 50)
    {
        letterGrade = "F";
    }
    return letterGrade;
}