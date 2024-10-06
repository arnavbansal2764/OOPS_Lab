#include <bits/stdc++.h>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time(int totalSeconds) {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }
};

int main() {
    Time t1;
    Time t2(2, 30, 45);
    Time t3(3665);

    cout << "Time 1: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;
    cout << "Time 2: " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << endl;
    cout << "Time 3: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds << endl;
    return 0;
}
