#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    if (n >= 1) cout << "0";
    if (n >= 2) cout << ", 1";

    int first = 0, second = 1, next;
    
    for (int i = 3; i <= n; i++) {
        next = first + second;  
        cout << ", " << next;   
        first = second;         
        second = next;          
    }
    
    cout << endl; 
    return 0;
}
