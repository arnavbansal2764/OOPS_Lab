#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int number, result;
    
    cout << "Enter a positive integer: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    
    result = factorial(number);
    
    cout << "The factorial of " << number << " is: " << result << endl;
    
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}
