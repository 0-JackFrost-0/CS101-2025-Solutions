// Author: Om Godage
// Date: 5/4/25

#include"ticket.h"

void IPL::bookTicket(){
    string fID, fName;
    int numMatches;
    cin >> fID >> fName >> numMatches;
    TicketBooking t;
    t.fanID = fID;
    t.fanName = fName;

    cin.ignore();
    while(numMatches--){
        string match;
        getline(cin, match);
        t.matchDetails.push_back(match);
    }

    ticketQueue.push_back(t);
}

void IPL::processBooking(){
    ticketQueue.erase(ticketQueue.begin());
}

void IPL::updateBooking(){
    string fID, match;
    cin >> fID;
    cin.ignore();
    getline(cin, match);
    for(TicketBooking &t: ticketQueue){
        if(t.fanID == fID){
            t.matchDetails.push_back(match);
            break;
        }
    }

}