#include<bits/stdc++.h>
using namespace std;

class Base1 {
    public:
        int x;
};

class Base2 {
    public:
        int y;
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived obj;
    obj.x = 10;
    obj.y = 20;
    cout << obj.x + obj.y << endl;
    return 0;
}
