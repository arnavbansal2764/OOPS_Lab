#include <bits/stdc++.h>
using namespace std;

class B; // Forward declaration

class A {
    int x;
public:
    A(int a) : x(a) {}
    friend void findMax(A, B);
};

class B {
    int y;
public:
    B(int b) : y(b) {}
    friend void findMax(A, B);
};

void findMax(A objA, B objB) {
    if (objA.x > objB.y)
        cout << "The maximum number is: " << objA.x << endl;
    else
        cout << "The maximum number is: " << objB.y << endl;
}

int main() {
    A objA(10);
    B objB(20);
    findMax(objA, objB);
    return 0;
}
