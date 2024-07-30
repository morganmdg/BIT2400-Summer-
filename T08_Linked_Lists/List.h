//
// Created by morga on 2024-07-29.
//

#ifndef LIST_H
#define LIST_H

#include "Node.h"
#pragma once

class List {
    Node* head;
    Node* tail;

public:
    List();
    ~List();
    void Display();
    int Length();
    void Delete();

    void PushFront(int value);
    int PopFront();
    int PeekFront();

    void PushBack(int value);
    int PopBack();
    int PeekBack();
};



#endif //LIST_H
