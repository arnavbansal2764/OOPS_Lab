#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    int bigger = (num1 > num2) ? num1 : num2;
    
    cout << "The bigger number is: " << bigger << endl;
    
    return 0;
}
