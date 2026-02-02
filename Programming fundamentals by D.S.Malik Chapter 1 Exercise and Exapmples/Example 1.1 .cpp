#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double length, width, perimeter, area;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    perimeter = 2 * (length + width);
    area = length * width;
    
    cout << fixed << setprecision(2);
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    
    return 0;
}
