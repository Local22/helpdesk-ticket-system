#ifndef TICKET_MANAGER_H
#define TICKET_MANAGER_H

#include <vector>
#include "ticket.h"

using namespace std;

class TicketManager {
private:
    vector<Ticket> tickets;

public:
    void addTicket(Ticket t);
    void showAllTickets();
};

#endif
