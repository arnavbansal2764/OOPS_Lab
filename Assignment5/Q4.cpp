#include <bits/stdc++.h>
using namespace std;

class Box {
    int length, breadth, height;

public:
    // Parameterized constructor
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Copy constructor
    Box(const Box &b) : length(b.length), breadth(b.breadth), height(b.height) {}

    void display() {
        cout << "Box dimensions (LxBxH): " << length << "x" << breadth << "x" << height << endl;
    }
};

int main() {
    Box box1(10, 20, 30);  // Parameterized constructor
    Box box2 = box1;       // Copy constructor

    cout << "Box1 ";
    box1.display();

    cout << "Box2 ";
    box2.display();

    return 0;
}
