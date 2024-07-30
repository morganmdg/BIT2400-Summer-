//
// Created by morga on 2024-07-30.
//

#include "PartTime.h"
#include <string>

using namespace std;

float PartTime::salary()
{
    float salary = hoursWorked * hourlyRate;
    return salary;
}