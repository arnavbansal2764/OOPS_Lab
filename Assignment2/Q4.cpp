#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    do {
        sum += i;
        i++;
    } while (i <= n);
    
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    
    return 0;
}
