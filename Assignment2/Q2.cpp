#include <iostream>
using namespace std;

int main() {
    double basicSalary, DA, HRA, MA, grossSalary;
    
    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    
    if (basicSalary <= 10000) {
        DA = 0.31 * basicSalary;
        HRA = 0.12 * basicSalary;
        MA = 250;
    } else {
        DA = 0.35 * basicSalary;
        HRA = 0.15 * basicSalary;
        MA = 350;
    }
    
    grossSalary = basicSalary + DA + HRA + MA;
    
    cout << "The gross salary is: " << grossSalary << endl;
    
    return 0;
}
