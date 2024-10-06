#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    float speed;

public:
    Car(const string &make, const string &model, int year) : make(make), model(model), year(year), speed(0.0f) {}

    void accelerate(float increment) {
        if (increment > 0) {
            speed += increment;
            cout << "Accelerated. Current speed: " << speed << " km/h" << endl;
        } else {
            cout << "Invalid acceleration value." << endl;
        }
    }

    void brake(float decrement) {
        if (decrement > 0) {
            if (speed - decrement < 0) {
                speed = 0;
            } else {
                speed -= decrement;
            }
            cout << "Braked. Current speed: " << speed << " km/h" << endl;
        } else {
            cout << "Invalid brake value." << endl;
        }
    }

    void displayInfo() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Current speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2021);
    
    myCar.displayInfo();
    
    myCar.accelerate(50.0f); 
    myCar.accelerate(30.0f); 
    

    myCar.brake(20.0f); 
    myCar.brake(100.0f); 
    
    myCar.displayInfo();
    
    return 0;
}
