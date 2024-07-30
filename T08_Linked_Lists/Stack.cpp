//
// Created by morga on 2024-07-29.
//

#include "Stack.h"


void Stack::Push(int value)
{
    list.PushFront(value);
}

int Stack::Pop()
{
    return list.PopFront();
}

int Stack::Peek()
{
    return list.PeekFront();
}

void Stack::Delete()
{
    list.Delete();
}