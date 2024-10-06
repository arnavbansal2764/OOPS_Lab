#include <bits/stdc++.h>
using namespace std;

class Factorial {
    int number;
    long long fact;
public:
    Factorial(int n) : number(n) {
        fact = 1;
        for (int i = 1; i <= number; ++i)
            fact *= i;
    }
    void display() {
        cout << "Factorial of " << number << " is: " << fact << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factorial obj(num);
    obj.display();

    return 0;
}
