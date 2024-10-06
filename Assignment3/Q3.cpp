#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Number {
public:
    int a, b;

    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    int highest() {
        return max(a, b);
    }

    void displayHighest() {
        cout << "The highest number is: " << highest() << endl;
    }
};

int main() {
    Number num;
    num.getNumbers();
    num.displayHighest();
    return 0;
}
