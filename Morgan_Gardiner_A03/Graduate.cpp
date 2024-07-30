//
// Created by morga on 2024-07-30.
//

#include "Graduate.h"
#include <string>

using namespace std;

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