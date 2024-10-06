#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simple_interest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate (%): ";
    cin >> rate;

    cout << "Enter time period (in years): ";
    cin >> time;

    simple_interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << simple_interest << endl;

    return 0;
}
