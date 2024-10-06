#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    string brand;
    int year;

    void display(){
        cout << brand << " " << year << endl;
    }
};

int main (){
    Car* car = new Car;
    car->brand = "Toyota";
    car->year = 2020;
    car->display();
    delete car;
    return 0;
}