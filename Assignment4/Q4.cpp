#include <bits/stdc++.h>
using namespace std;

class Arithmetic {
    int a, b;
public:
    Arithmetic(int x, int y) : a(x), b(y) {}

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << (float)a / b << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Arithmetic obj(x, y);
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();

    return 0;
}
