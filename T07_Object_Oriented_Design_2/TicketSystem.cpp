//
// Created by morga on 2024-07-29.
//

#include "TicketSystem.h"

using namespace std;

TicketSystem::TicketSystem()
{
    incrementor = 1;
}


int TicketSystem::createTicket(Type t, Urgency u, string c, string p)
{
    tickets.push_back(Ticket(incrementor, t, u, c, p));
    return incrementor++;

}

Ticket* TicketSystem::getTicket(unsigned int i)
{
    return &tickets.at(i-1);
}

void TicketSystem::printTickets()
{
    Ticket::tableHeader();
    for(int i = 0; i < tickets.size(); i++)
    {
        tickets.at(i).printSummary();
    }

    cout << endl;
}

void TicketSystem::printTickets(Type t)
{
    Ticket::tableHeader();
    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets.at(i).type == t)
        {
            tickets.at(i).printSummary();
        }
    }

    cout << endl;
}

void TicketSystem::printTickets(Urgency u)
{
    Ticket::tableHeader();
    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets.at(i).urgency == u)
        {
            tickets.at(i).printSummary();
        }
    }
    cout << endl;
}

void TicketSystem::printTickets(Status s)
{
    Ticket::tableHeader();
    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets.at(i).status == s) tickets.at(i).printSummary();
    }
    cout << endl;
}

void TicketSystem::printTickets(string c)
{
    Ticket::tableHeader();
    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets.at(i).contact.find(c) != std::string::npos)
            tickets.at(i).printSummary();
    }
    cout << endl;
}

void TicketSystem::setTicketType(int i, Type t)
{
    i -= 1;
    if(tickets.size() > i)
    {
        tickets.at(i).type = t;
    }else {
        cout << "ERROR: No such ticket exists." << endl;
    }
}

void TicketSystem::setTicketUrgency(int i, Urgency u)
{
    i -= 1;
    if(tickets.size() > i)
    {
        tickets.at(i).urgency = u;
    }else
    {
        cout << "ERROR: No such ticket exists." << endl;
    }
}

void TicketSystem::setTicketStatus(int i, Status s)
{
    i -= 1;
    if(tickets.size() > i)
    {
        tickets.at(i).status = s;
    } else
    {
        cout << "Error: No such ticket exists." << endl;
    }
}