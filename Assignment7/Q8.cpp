#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
        int x;
};

class Derived1 : public Base {
    public:
        int y;
};

class Derived2 : public Base {
    public:
        int z;
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    obj1.x = 10;
    obj1.y = 20;
    obj2.x = 30;
    obj2.z = 40;
    cout << obj1.x + obj1.y << endl;
    cout << obj2.x + obj2.z << endl;
    return 0;
}
