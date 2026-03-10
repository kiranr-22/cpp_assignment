#include <iostream>
#include <iomanip>
using namespace std;

// Global constant
const float PI = 3.14159f;

// Function to calculate area
float circleArea(float radius) {
    return PI * radius * radius;
}

// Function to calculate perimeter
float circlePerimeter(float radius) {
    return 2 * PI * radius;
}

int main() {
    float radius = 7.0f;

    cout << fixed << setprecision(4);

    cout << "Radius: " << radius << endl;
    cout << "Area: " << circleArea(radius) << endl;
    cout << "Perimeter: " << circlePerimeter(radius) << endl;

    // PI = 3.0f; 
    // Error: assignment of read-only variable 'PI'

    return 0;
}