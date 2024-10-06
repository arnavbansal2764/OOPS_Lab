#include <iostream>
using namespace std;

int main() {
    int numbers[4];
    cout << "Enter four numbers:\n";
    
    for (int i = 0; i < 4; ++i) {
        cin >> numbers[i];
    }
    
    int max_number = numbers[0];
    for (int i = 1; i < 4; ++i) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }
    
    cout << "The biggest number is: " << max_number << endl;
    
    return 0;
}
