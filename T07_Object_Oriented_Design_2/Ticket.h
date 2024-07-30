//
// Created by morga on 2024-07-29.
//

#ifndef TICKET_H
#define TICKET_H


#pragma once
#include <vector>
#include <iostream>


using namespace std;

enum Type { CRASH, PASSWORD, SOFTWARE, HARDWARE, OTHER };
enum Urgency { LOW, HIGH, CRITICAL };
enum Status { OPEN, PENDING, RESOLVED };


class Ticket {
    int id;
public:
    Type type;
    Urgency urgency;
    Status status;
    vector<string> log;
    string contact;
    string phone;

    Ticket();
    Ticket(int i, Type t, Urgency u, string c, string p);
    int getID();
    void addMessage(string s);
    void printDetails();
    void printSummary();
    static void tableHeader();

    string printType(Type t);
    string printUrgency(Urgency u);
    string printStatus(Status s);
};



#endif //TICKET_H
