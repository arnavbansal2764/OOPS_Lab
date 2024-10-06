#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string name;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Enter your name: ";
    cin.ignore();  
    getline(cin, name);

    cout << "You entered the integer: " << number << endl;
    cout << "You entered the name: " << name << endl;

    return 0;
}
