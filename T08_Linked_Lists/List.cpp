//
// Created by morga on 2024-07-29.
//

#include "List.h"
#include <iostream>

using namespace std;

List::List()
{
    head = nullptr;
    tail = nullptr;
}

List::~List()
{
    Delete();
}

void List::Display()
{
    cout << "List: ";
    if (head == nullptr)
    {
        if(head == nullptr)
        {
            cout << "...";
        }else
        {
            Node* temp = head;
            while (temp != nullptr)
            {
                cout << temp->data;
                temp = temp->next;
                if(temp != nullptr)
                {
                    cout << ", ";
                }
            }
        }
    }
    cout << endl;
}

int List::Length()
{
    int count = 0;
    Node* temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void List::Delete()
{
    if(head != nullptr)
    {
        Node* temp = head->next;
        Node* previous = head;
        delete previous;
        while(temp != nullptr)
        {
            previous = temp;
            temp = temp->next;
            delete previous;
        }
        head = nullptr;
        tail = nullptr;
    }
}

void List::PushFront(int value)
{
    Node* temp = new Node(value);
    if(head == nullptr)
    {
        tail = temp;
    }else
    {
        temp->next=head;
    }
    head = temp;
}


int List::PopFront()
{
    Node* next = head->next;
    int data = head->data;
    if(tail == head)
    {
        tail = nullptr;
    }
    delete head;
    head = next;
    return data;
}

int List::PeekFront()
{
    return head->data;
}

void List::PushBack(int value)
{
    Node* temp = new Node(value);
    if(head == nullptr)
    {
        head = temp;
    } else
    {
        tail->next = temp;
    }
    tail = temp;
}

int List::PopBack()
{
    if(head->next == nullptr)
    {
        return PopFront();
    }

    Node* temp = head->next;
    Node* previous = head;
    int data;
    while(temp->next != nullptr)
    {
        previous = temp;
        temp = temp->next;
    }
    data = tail->data;
    delete tail;
    tail = previous;
    previous->next = nullptr;

    return data;
}

int List::PeekBack()
{
    return tail->data;
}

