#include "ticket.h"

Ticket::Ticket(int id, string user, string issueDesc, Priority p) {
    ticketId = id;
    userName = user;
    issue = issueDesc;
    priority = p;
    status = OPEN;
}

int Ticket::getId() {
    return ticketId;
}

string Ticket::getUserName() {
    return userName;
}

string Ticket::getIssue() {
    return issue;
}

Priority Ticket::getPriority() {
    return priority;
}

Status Ticket::getStatus() {
    return status;
}

void Ticket::setStatus(Status s) {
    status = s;
}
