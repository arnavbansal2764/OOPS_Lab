#include <iostream>
using namespace std;

int main() {
    double monthlySalary, incomeTax;
    
    cout << "Enter the monthly salary: ";
    cin >> monthlySalary;
    
    if (monthlySalary >= 10000) {
        incomeTax = 0.40 * monthlySalary; 
    } else if (monthlySalary >= 7500) {
        incomeTax = 0.30 * monthlySalary; 
    } else {
        incomeTax = 0.20 * monthlySalary; 
    
    cout << "The income tax is: " << incomeTax << endl;
    
    return 0;
}
}