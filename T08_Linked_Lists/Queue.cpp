//
// Created by morga on 2024-07-29.
//

#include "Queue.h"

void Queue::Enqueue(int value)
{
    list.PushFront(value);
}

int Queue::Dequeue()
{
    return list.PopBack();
}

int Queue::Peek()
{
    return list.PeekBack();
}

void Queue::Delete()
{
    list.Delete();
}