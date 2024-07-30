//
// Created by morga on 2024-07-29.
//

#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#pragma once
#include "Ticket.h"

class TicketSystem {
    vector<Ticket> tickets;
    unsigned int incrementor;

public:
    TicketSystem();

    int createTicket(Type t, Urgency u, string c, string p);
    Ticket* getTicket(unsigned int i);


    void printTickets();
    void printTickets(Type t);
    void printTickets(Urgency u);
    void printTickets(Status s);
    void printTickets(string c);

    void setTicketType(int i, Type t);
    void setTicketUrgency(int i, Urgency u);
    void setTicketStatus(int i, Status s);

};



#endif //TICKETSYSTEM_H
