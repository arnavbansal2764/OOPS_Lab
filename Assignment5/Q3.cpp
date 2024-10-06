#include <bits/stdc++.h>
using namespace std;

class Average {
    static float sum;
    static int count;

public:
    Average(float num) {
        sum += num;
        count++;
    }

    static float getAverage() {
        return sum / count;
    }
};

float Average::sum = 0;
int Average::count = 0;

int main() {
    float num;

    cout << "Enter five real numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        Average obj(num);
    }

    cout << "The average is: " << Average::getAverage() << endl;

    return 0;
}
