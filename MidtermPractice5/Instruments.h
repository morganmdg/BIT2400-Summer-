//
// Created by morga on 2024-07-21.
//

#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H

#include <string>
#pragma once


class Instruments {
protected:
    std::string genericAttribute;
public:
    Instruments();
};

class Brass
{
protected:
    std::string materialAttribute;
public:
    Brass();
};

class Trumpet : public Instruments, public Brass
{
protected:
    std::string name;
public:
    Trumpet();
    void displayAttributes();

};

#endif //INSTRUMENTS_H
