//
// Created by morga on 2024-07-30.
//

#include "FullTime.h"
#include <string>

using namespace std;

float FullTime::salary()
{
    float salary = (BaseSalary + (3.0f * yearsExp));
    return salary;
}