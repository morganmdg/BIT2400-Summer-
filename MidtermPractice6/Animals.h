//
// Created by morga on 2024-07-21.
//

#ifndef ANIMALS_H
#define ANIMALS_H

#pragma once

class Animals {
protected:
    std::string genericAttribute;
public:
    Animals();
};

class Type
{
protected:
    std::string typeAttribute;
public:
    Type();
};

class Breed
{
protected:
    std::string breedAttribute;
public:
    Breed();
};

class Fur
{
protected:
    std::string furAttribute;
public:
    Fur();
};

class Temperment : public Animals, public Type, public Breed, public Fur
{
protected:
    std::string tempAttribute;
public:
    Temperment();
    void displayAttributes();
};



#endif //ANIMALS_H
