#include <iostream>
#include <iomanip>

using namespace std;

void areaAndPerimeter(double length, double width, 
                      double& area, double& perimeter) 
{
    area = length * width;
    perimeter = 2 * (length + width);
}

int main() {
 
    double rectLength, rectWidth, rectArea, rectPerimeter;


    cout << "Enter the length of the rectangle: ";
    cin >> rectLength;
    cout << "Enter the width of the rectangle: ";
    cin >> rectWidth;


    areaAndPerimeter(rectLength, rectWidth, rectArea, rectPerimeter);


    cout << fixed << setprecision(2);
    cout << "\n--- Results ---" << endl;
    cout << "Area:      " << rectArea << endl;
    cout << "Perimeter: " << rectPerimeter << endl;

    return 0;
}