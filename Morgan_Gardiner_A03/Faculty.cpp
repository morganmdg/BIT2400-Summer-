//
// Created by morga on 2024-07-30.
//

#include "Faculty.h"
#include <string>

using namespace std;

//Default constructor to initalize class member variables
Faculty::Faculty()
{
    DepName = " ";
    //True = part time faculty, False = full time faculty
    FacultyType = false;
}

//Class destructor to reset values
Faculty::~Faculty()
{
    DepName = " ";
    FacultyType = false;
}