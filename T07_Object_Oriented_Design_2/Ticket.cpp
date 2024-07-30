//
// Created by morga on 2024-07-29.
//

#include "Ticket.h"
#include <iomanip>

Ticket::Ticket()
{
    id = 0;
    type = OTHER;
    urgency = LOW;
    status = OPEN;
    contact = "";
    phone = "";
}

Ticket::Ticket(int i, Type t, Urgency u, string c, string p)
{
    id = i;
    type = t;
    urgency = u;
    status = OPEN;
    contact = c;
    phone = p;
}

int Ticket::getID()
{
    return id;
}

void Ticket::addMessage(string s)
{
    log.push_back(s);
}

void Ticket::tableHeader()
{
    cout << endl;
    cout << left << setw(5) << "ID";
    cout << left << setw(12) << "TYPE";
    cout << left << setw(12) << "URGENCY";
    cout << left << setw(12) << "STATUS";
    cout << left << setw(16) << "PHONE";
    cout << left << setw(30) << "CONTACT" << endl;
}

void Ticket::printSummary()
{
    cout << left << setw(5) << getID();
    cout << left << setw(12) << printType(type);
    cout << left << setw(12) << printUrgency(urgency);
    cout << left << setw(12) << printStatus(status);
    cout << left << setw(16) << phone;
    cout << left << setw(30) << contact << endl;
}

void Ticket::printDetails()
{
    tableHeader();
    printSummary();
    for (int i = 0; i < log.size(); i++)
    {
        cout << "     " << log.at(i) << endl;
    }
}

    string Ticket::printType(Type t)
    {
        switch (t)
        {
        case CRASH:        return "CRASH";
        case PASSWORD:     return "PASSWORD";
        case SOFTWARE:     return "SOFTWARE";
        case HARDWARE:     return "HARDWARE";
        case OTHER:        return "OTHER";
        }
    }

string Ticket::printUrgency(Urgency u)
{
    switch(u)
    {
    case LOW:       return "LOW";
    case HIGH:      return "HIGH";
    case CRITICAL:  return "CRITICAL";
    }
}

string Ticket::printStatus(Status s)
{
    switch(s)
    {
    case OPEN:      return "OPEN";
    case PENDING:   return "PENDING";
    case RESOLVED:  return "RESOLVED";
    }
}