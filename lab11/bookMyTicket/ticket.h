#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct TicketBooking {
    string fanID;
    string fanName;
    vector<string> matchDetails;
};

struct IPL {
    vector<TicketBooking> ticketQueue;

    void bookTicket();

    void processBooking();

    void updateBooking();

    void showBookings() {
        if (ticketQueue.empty()) {
            cout << "NO PENDING BOOKINGS" << endl;
            return;
        }
        vector<TicketBooking> tempQueue = ticketQueue;
        for(const TicketBooking& booking: ticketQueue) {
            cout << booking.fanID << endl;
            cout << booking.fanName << endl;
            for (const auto& match : booking.matchDetails) {
                cout << match << endl;
            }
        }
    }

};

#endif 