//
// Created by morga on 2024-07-19.
//

#ifndef DOG_H
#define DOG_H

#pragma once
#include "Animal.h"

class Dog : public Animal {
    std::string breed;

public:
    Dog();
    void describe();
};
#endif //DOG_H
