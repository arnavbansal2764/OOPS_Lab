#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main() {
    int x, y;
    
    cout << "Enter the first value: ";
    cin >> x;
    cout << "Enter the second value: ";
    cin >> y;
    
    cout << "Before swapping: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    swap(x, y);
    
    cout << "After swapping: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    return 0;
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
