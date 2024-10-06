#include <bits/stdc++.h>
using namespace std;

class Counter {
    static int objectCount; // Static data member to keep track of the number of objects

public:
    Counter() {
        objectCount++; // Increment count when an object is created
    }

    static int getObjectCount() {
        return objectCount; // Static member function to return object count
    }
};

int Counter::objectCount = 0; // Initialize static data member

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

    cout << "Number of objects created: " << Counter::getObjectCount() << endl;

    return 0;
}
