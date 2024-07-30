//
// Created by morga on 2024-07-30.
//

#include "FullTime.h"
#include <string>

using namespace std;

//Default constructor to initalize class member variables
FullTime::FullTime()
{
    officeExtend = 0;
    BaseSalary = 0.0f;
    yearsExp = 0;
}

float FullTime::salary()
{
    float salary = (BaseSalary + (3.0f * yearsExp));
    return salary;
}

//Default Destructor to reset values to 0
FullTime::~FullTime()
{
    officeExtend = 0;
    BaseSalary = 0.0f;
    yearsExp = 0;
}