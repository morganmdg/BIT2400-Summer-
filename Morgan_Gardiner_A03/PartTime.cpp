//
// Created by morga on 2024-07-30.
//

#include "PartTime.h"
#include <string>

using namespace std;

//Default constructor to initalize class member variables
PartTime::PartTime()
{
    hoursWorked = 0;
    hourlyRate = 0.0f;
}

float PartTime::salary()
{
    float salary = hoursWorked * hourlyRate;
    return salary;
}

//Default Destructor to reset values to 0
PartTime::~PartTime()
{
    hoursWorked = 0;
    hourlyRate = 0.0f;
}