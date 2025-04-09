#include "ticket.h"

int main() {
    IPL game;
    int n;
    cin >> n;
    cin.ignore(); // clear newline 
    
    for (int i = 0; i < n; ++i) {
        int operation;
        cin >> operation;
        cin.ignore(); // clear newline 
        
        switch (operation) {
            case 1:
                game.bookTicket();
                break;
            case 2:
                game.showBookings();
                break;
            case 3:
                game.processBooking();
                break;
            case 4:
                game.updateBooking();
                break;
        }
    }
}