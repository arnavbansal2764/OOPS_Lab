#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
        int x;
};

class Derived : public Base {
    public:
        int y;
};

int main() {
    Derived obj;
    obj.x = 10;
    obj.y = 20;
    cout << obj.x + obj.y << endl;
    return 0;
}
