#include <bits/stdc++.h>
using namespace std;

class Sample {
    int a, b;
public:
    Sample(int x, int y) : a(x), b(y) {}
    friend int sum(Sample);
};

inline int sum(Sample obj) {
    return obj.a + obj.b;
}

int main() {
    Sample obj(5, 10);
    cout << "The sum is: " << sum(obj) << endl;
    return 0;
}
