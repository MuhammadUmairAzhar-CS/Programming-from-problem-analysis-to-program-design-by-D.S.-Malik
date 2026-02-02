#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double radius, volume, surfaceArea;
    const double PI = 3.141592;
    
    cout << "Enter radius of sphere: ";
    cin >> radius;
    
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    surfaceArea = 4.0 * PI * radius * radius;
    
    cout << fixed << setprecision(2);
    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surfaceArea << endl;
    
    return 0;
}
