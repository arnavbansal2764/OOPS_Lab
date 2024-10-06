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

class Derived2 : public Derived1 {
    public:
        int z;
};

int main() {
    Derived2 obj;
    obj.x = 10;
    obj.y = 20;
    obj.z = 30;
    cout << obj.x + obj.y + obj.z << endl;
    return 0;
}
