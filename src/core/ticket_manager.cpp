#include <iostream>
#include "ticket_manager.h"

void TicketManager::addTicket(Ticket t) {
    tickets.push_back(t);
}

void TicketManager::showAllTickets() {
    for (auto &t : tickets) {
        std::cout << "------------------" << std::endl;
        std::cout << "Ticket ID: " << t.getId() << std::endl;
        std::cout << "User: " << t.getUserName() << std::endl;
        std::cout << "Issue: " << t.getIssue() << std::endl;
    }
}
