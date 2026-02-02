// 9. Cube from Cylinder
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius, height, cylinderVolume, cubeSide;
    
    cout << "Enter radius of cylindrical container: ";
    cin >> radius;
    cout << "Enter height of cylindrical container: ";
    cin >> height;
    
    cylinderVolume = PI * pow(radius, 2.0) * height;
    cubeSide = pow(cylinderVolume, 1.0/3.0);
    
    cout << fixed << setprecision(2);
    cout << "Side of cube = " << cubeSide << endl;
    
    return 0;
}
