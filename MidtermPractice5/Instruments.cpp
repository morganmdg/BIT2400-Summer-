//
// Created by morga on 2024-07-21.
//

#include <iostream>
#include <string>
#include "Instruments.h"

using namespace std;

Instruments::Instruments()
{
    genericAttribute = "Instrument";
}

Brass::Brass()
{
    materialAttribute = "Metal";
}

Trumpet::Trumpet()
{
    name = "Trumpet";
}

void Trumpet::displayAttributes()
{
    cout << genericAttribute << "\n" << endl;
    cout << materialAttribute << "\n" <<  endl;
    cout << name << endl;
}