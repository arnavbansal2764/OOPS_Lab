#include <iostream>
using namespace std;

int sumOfThree(int a, int b, int c);

int main() {
    int num1, num2, num3, result;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    
    result = sumOfThree(num1, num2, num3);
    
    cout << "The sum of the three numbers is: " << result << endl;
    
    return 0;
}

int sumOfThree(int a, int b, int c) {
    return a + b + c;
}
