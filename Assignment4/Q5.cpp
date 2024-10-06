#include <bits/stdc++.h>
using namespace std;

class TicBooth {
    int people;
    float totalMoney;
    const float ticketPrice = 2.50;

public:
    TicBooth() : people(0), totalMoney(0.0) {}

    void ticketNotSold() {
        people++;
    }

    void ticketSold() {
        people++;
        totalMoney += ticketPrice;
    }

    void displayTotals() {
        cout << "Total people visited: " << people << endl;
        cout << "Total amount of money collected: Rs." << totalMoney << endl;
    }

    void displayTicketsSold() {
        cout << "Total tickets sold: " << totalMoney / ticketPrice << endl;
    }
};

int main() {
    TicBooth booth;

    booth.ticketNotSold();  // A person visited but did not buy a ticket
    booth.ticketSold();      // A person visited and bought a ticket
    booth.ticketSold();      // Another person bought a ticket

    booth.displayTotals();
    booth.displayTicketsSold();

    return 0;
}
