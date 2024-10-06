#include <bits/stdc++.h>
using namespace std;

class Printer {
public:
    void print(int a) {
        cout << "Integer: " << a << endl;
    }

    void print(float a) {
        cout << "Float: " << a << endl;
    }

    void print(string a) {
        cout << "String: " << a << endl;
    }
};

int main() {
    Printer p;
    p.print(10);
    p.print(10.5f);
    p.print("Hello");
    return 0;
}
