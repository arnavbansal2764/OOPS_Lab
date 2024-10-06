#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student *student = new Student;

    cout << "Enter student details:\n";
    student->getData();

    cout << "\nDisplaying student details:\n";
    student->displayData();

    delete student;
    return 0;
}
