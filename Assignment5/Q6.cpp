#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}

    void setDimensions(int l, int b) {
        this->length = l;
        this->breadth = b;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << this->length * this->breadth << endl;
    }
};

int main() {
    Rectangle rect(10, 20);

    rect.displayArea();

    rect.setDimensions(15, 25);
    rect.displayArea();

    return 0;
}
