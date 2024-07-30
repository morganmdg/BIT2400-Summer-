//
// Created by morga on 2024-07-29.
//

#ifndef QUEUE_H
#define QUEUE_H

#pragma once
#include "List.h"


class Queue {
    List list;
public:
    void Enqueue(int value);
    int Dequeue();
    int Peek();
    void Delete();
};



#endif //QUEUE_H
