#include <iostream>
#include "List.h"
#include "Stack.h"
#include "Queue.h"


using namespace std;

int main()
{
    Stack stack;
    stack.Push(5);
    stack.Push(6);
    stack.Push(7);
    cout << stack.Pop() << ", ";
    cout << stack.Peek() << ", ";
    cout << stack.Pop() << ", ";
    cout << stack.Pop() << endl;

    Queue queue;
    queue.Enqueue(5);
    queue.Enqueue(6);
    queue.Enqueue(7);
    cout << queue.Dequeue() << ", ";
    cout << queue.Peek() << ", ";
    cout << queue.Dequeue() << ", ";
    cout << queue.Dequeue() << endl;

    /* List list;

    list.PushBack(6);
    list.PushBack(7);
    list.PushBack(8);
    list.PushFront(9);
    list.Display();
    cout << "Length:  " << list.Length() << endl;

    list.PopFront();
    list.Display();
    cout << "Length: " << list.Length() << endl;
    list.PopBack();
    list.Display();
    cout << "Length:  " << list.Length() << endl;

    cout << list.PeekFront() << endl;
    cout << list.PeekBack() << endl;

    list.Display();
    list.Delete();
    list.Display();
    list.Delete();
    list.Display();*/
}
