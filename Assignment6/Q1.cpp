#include <bits/stdc++.h>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "Add integers: " << m.add(2, 3) << endl;
    cout << "Add floats: " << m.add(2.5f, 3.5f) << endl;
    cout << "Add doubles: " << m.add(2.5, 3.5) << endl;
    return 0;
}
