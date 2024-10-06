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

class Hybrid : public Derived1, public Derived2 {
};

int main() {
    Hybrid obj;
    obj.x = 10;  // Ambiguity in x
    obj.y = 20;
    obj.z = 30;
    cout << obj.y + obj.z << endl;
    return 0;
}
