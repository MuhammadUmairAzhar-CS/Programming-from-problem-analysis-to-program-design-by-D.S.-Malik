#include <iostream>
#include <iomanip>
using namespace std;

void areaandparameter(double length, double width, double& area, double& perimeter);

int main()
{
    double l, w, a, p;
    cout << "Enter length of shape: ";
    cin >> l;
    cout << "Enter width of shape: ";
    cin >> w;

    areaandparameter(l, w, a, p);

    cout << "Area: " << a << endl;
    cout << "Perimeter: " << p << endl;

    return 0;
}

void areaandparameter(double length, double width, double& area, double& perimeter)
{
    area = length * width;
    perimeter = 2 * (length + width);
}
