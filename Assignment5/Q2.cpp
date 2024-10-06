#include <bits/stdc++.h>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void printTomorrow() {
        static const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        day++;
        if (day > daysInMonth[month - 1]) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }

        cout << "Tomorrow's date is: " << setw(2) << setfill('0') << month << "/"
             << setw(2) << setfill('0') << day << "/" << year << endl;
    }
};

int main() {
    int d, m, y;
    cout << "Enter today's date (mm/dd/yyyy): ";
    scanf("%d/%d/%d", &m, &d, &y);

    Date today(d, m, y);
    today.printTomorrow();

    return 0;
}
