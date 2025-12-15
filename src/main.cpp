#include <iostream>
#include "core/ticket.h"
#include "core/ticket_manager.h"

using namespace std;

int main() {
    TicketManager manager;
    int choice;

    while (true) {
        cout << "\n--- HelpDesk Ticket System ---\n";
        cout << "1. Create Ticket\n";
        cout << "2. View All Tickets\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string user;
            string issue;
            int p;

            cout << "Enter Ticket ID: ";
            cin >> id;
            cin.ignore(); // clear buffer

            cout << "Enter User Name: ";
            getline(cin, user);

            cout << "Enter Issue Description: ";
            getline(cin, issue);

            cout << "Enter Priority (0=LOW, 1=MEDIUM, 2=HIGH): ";
            cin >> p;

            Priority priority = LOW;
            if (p == 1) priority = MEDIUM;
            else if (p == 2) priority = HIGH;

            Ticket t(id, user, issue, priority);
            manager.addTicket(t);

            cout << "Ticket created successfully.\n";
        }
        else if (choice == 2) {
            manager.showAllTickets();
        }
        else if (choice == 3) {
            cout << "Exiting system...\n";
            break;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
