#include <iostream>
#include "TicketSystem.h"

int main()
{
    TicketSystem ts;

    ts.createTicket(CRASH, HIGH, "Isabelle s", "123-456-7890");
    ts.createTicket(PASSWORD, HIGH, "Marie T", "123-456-7890");
    ts.createTicket(HARDWARE, LOW, "Mathieu B", "123-456-7890");
    ts.createTicket(HARDWARE, LOW, "Owen G", "123-456-7890");
    ts.createTicket(SOFTWARE, LOW, "Mubi L", "123-456-7890");
    ts.createTicket(PASSWORD, LOW, "Tomiwa U", "123-456-7890");
    ts.createTicket(OTHER, LOW, "Jasmine N", "123-456-7890");
    ts.createTicket(PASSWORD, HIGH, "Allison M", "123-456-7890");
    ts.createTicket(HARDWARE, CRITICAL, "Aaron P", "123-456-7890");
    ts.createTicket(CRASH, LOW, "Owen G", "123-456-7890");
    ts.createTicket(OTHER, HIGH, "Allison M", "123-456-7890");


    ts.setTicketStatus(2, RESOLVED);
    ts.setTicketStatus(3, PENDING);
    ts.setTicketStatus(7, RESOLVED);
    ts.setTicketStatus(8, RESOLVED);
    ts.setTicketStatus(10, PENDING);

    ts.getTicket(5)->addMessage("Ticket opened");
    ts.getTicket(5)->addMessage("Client contacted");
    ts.getTicket(5)->addMessage("Waiting for client to respond");
    ts.setTicketStatus(5, PENDING);

    ts.printTickets();

    ts.printTickets(HIGH);
    ts.printTickets(OPEN);
    ts.printTickets(HARDWARE);
    ts.printTickets("Owen G");

    ts.getTicket(5)->printDetails();
}