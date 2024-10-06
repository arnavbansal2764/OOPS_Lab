#include <bits/stdc++.h>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    Rectangle() {
        length = 1;
        breadth = 1;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int side) {
        length = side;
        breadth = side;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(3, 4);
    Rectangle r3(5);

    cout << "Rectangle 1: " << r1.length << " x " << r1.breadth << endl;
    cout << "Rectangle 2: " << r2.length << " x " << r2.breadth << endl;
    cout << "Rectangle 3: " << r3.length << " x " << r3.breadth << endl;
    return 0;
}
