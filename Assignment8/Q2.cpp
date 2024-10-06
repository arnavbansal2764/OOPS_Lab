#include <bits/stdc++.h>
using namespace std;

int main(){
    float* a = new float;
    *a = 10.0;
    cout << *a << endl;
    cout << a << endl;
    delete a;
    return 0;
}