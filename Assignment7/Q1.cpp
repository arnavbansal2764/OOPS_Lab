#include<bits/stdc++.h>
using namespace std;

class Base1 {
    private:
        int a;
    public:
        int b;
    protected:
        int c;
};

class Derived : private Base1 {
    private:
        int d, e, f;
        int Sum() {
            return b + c + d + e + f;
        }
    public:
        void setValues(int bVal, int cVal, int dVal, int eVal, int fVal) {
            b = bVal;
            c = cVal;
            d = dVal;
            e = eVal;
            f = fVal;
        }
        float average() {
            return Sum() / 5.0;
        }
};

int main() {
    Derived obj;
    obj.setValues(10, 20, 30, 40, 50);
    cout << obj.average() << endl;
    return 0;
}
