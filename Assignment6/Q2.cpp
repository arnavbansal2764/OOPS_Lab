#include <bits/stdc++.h>
using namespace std;

class Multiplier {
public:
    int multiply(int a, int b) {
        return a * b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Multiplier m;
    cout << "Multiply integers: " << m.multiply(2, 3) << endl;
    cout << "Multiply floats: " << m.multiply(2.5f, 3.5f) << endl;
    cout << "Multiply doubles: " << m.multiply(2.5, 3.5) << endl;
    return 0;
}
