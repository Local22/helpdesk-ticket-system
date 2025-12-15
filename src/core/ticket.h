#ifndef TICKET_H
#define TICKET_H

#include <string>
using namespace std;

enum Priority {
    LOW,
    MEDIUM,
    HIGH
};

enum Status {
    OPEN,
    IN_PROGRESS,
    CLOSED
};

class Ticket {
private:
    int ticketId;
    string userName;
    string issue;
    Priority priority;
    Status status;

public:
    Ticket(int id, string user, string issueDesc, Priority p);

    int getId();
    string getUserName();
    string getIssue();
    Priority getPriority();
    Status getStatus();

    void setStatus(Status s);
};

#endif
