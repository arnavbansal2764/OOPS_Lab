#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void setInfo(const string &name, int rollNumber, float marks) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    string name;
    int rollNumber;
    float marks;

    cout << "Enter the student's name: ";
    getline(cin, name);
    cout << "Enter the roll number: ";
    cin >> rollNumber;
    cout << "Enter the marks: ";
    cin >> marks;

    student.setInfo(name, rollNumber, marks);

    student.displayInfo();

    return 0;
}
