#include <iostream>
#include <cmath>  
using namespace std;

class Polygon {
private:
    int numSides;      
    float sideLength;  

public:
    Polygon(int numSides, float sideLength) : numSides(numSides), sideLength(sideLength) {
        if (numSides < 3) {
            throw invalid_argument("A polygon must have at least 3 sides.");
        }
    }

    float calculatePerimeter() const {
        return numSides * sideLength;
    }

    float calculateArea() const {
        return (numSides * sideLength * sideLength) / (4 * tan(M_PI / numSides));
    }

    void displayInfo() const {
        cout << "Number of sides: " << numSides << endl;
        cout << "Length of each side: " << sideLength << " units" << endl;
        cout << "Perimeter: " << calculatePerimeter() << " units" << endl;
        cout << "Area: " << calculateArea() << " square units" << endl;
    }
};

int main() {
    try {
        int numSides;
        float sideLength;

        cout << "Enter the number of sides of the polygon: ";
        cin >> numSides;
        cout << "Enter the length of each side: ";
        cin >> sideLength;

        Polygon polygon(numSides, sideLength);

        polygon.displayInfo();
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
