#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double principal, rate, time, compoundInterest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate: ";
    cin >> rate;

    cout << "Enter time period: ";
    cin >> time;

    rate = rate / 100.0;

    compoundInterest = principal * pow(1 + rate, time) - principal;

    cout << "Compound interest after " << time << " years: " << compoundInterest << endl;

    return 0;
}
