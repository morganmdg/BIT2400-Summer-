//
// Created by morga on 2024-07-21.
//
#include <iostream>
#include <string>
#include "Animals.h"

using namespace std;

Animals::Animals()
{
    genericAttribute = "Animal";
}

Type::Type()
{
    typeAttribute = "Dog";
}

Breed::Breed()
{
    breedAttribute = "Husky";
}

Fur::Fur()
{
    furAttribute = "Fluffy";
}

Temperment::Temperment()
{
    tempAttribute = "Dramatic";
}

void Temperment::displayAttributes()
{
    cout << genericAttribute << endl;
    cout << typeAttribute << endl;
    cout << breedAttribute << endl;
    cout << furAttribute << endl;
    cout << tempAttribute << endl;
}