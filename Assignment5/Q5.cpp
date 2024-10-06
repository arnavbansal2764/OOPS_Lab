#include <bits/stdc++.h>
using namespace std;

class Employee {
    string name;
    int id;
    float salary;

public:
    // Default constructor
    Employee() : name("Arnav Bansal"), id(23103046), salary(30000.0f) {}

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee emp; // Default constructor will be called

    emp.display();

    return 0;
}
