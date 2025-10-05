#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double k = 6.67e-8;  // Gravitational constant in dyn.cm²/g²
    
    double mass1, mass2, distance;
    
    // Get user input
    cout << "Enter the mass of the first body (in grams): ";
    cin >> mass1;
    
    cout << "Enter the mass of the second body (in grams): ";
    cin >> mass2;
    
    cout << "Enter the distance between the bodies (in centimeters): ";
    cin >> distance;
    
    // Calculate gravitational force using Newton's formula: F = k * (m1 * m2) / d²
    double force = k * (mass1 * mass2) / (distance * distance);
    
    // Display results
    cout << fixed << setprecision(10);
    cout << "\n" << string(50, '=') << endl;
    cout << "GRAVITATIONAL FORCE CALCULATION" << endl;
    cout << string(50, '=') << endl;
    
    cout << "Mass of first body: " << mass1 << " g" << endl;
    cout << "Mass of second body: " << mass2 << " g" << endl;
    cout << "Distance between bodies: " << distance << " cm" << endl;
    cout << "Gravitational constant (k): " << k << " dyn.cm²/g²" << endl;
    cout << "\nGravitational force: " << force << " dyn" << endl;
    cout << string(50, '=') << endl;
    
    return 0;
}