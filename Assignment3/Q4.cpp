#include <iostream>
#include <vector>
#include <string>
using namespace std;

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "The sum is: " << sum(x, y, z) << endl;
    return 0;
}
