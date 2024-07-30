//
// Created by morga on 2024-07-29.
//

#ifndef STACK_H
#define STACK_H

#pragma once
#include "List.h"

class Stack {
List list;
public:
    void Push(int value);
    int Pop();
    int Peek();
    void Delete();
};

#endif //STACK_H
