#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265;

int main() {
    double radius = 12.67;
    double height = 12.00;

    cout << fixed << showpoint;

    cout << setprecision(2);
    cout << "Using precision 2:\n";
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << PI * radius * radius * height << endl;
    cout << "PI: " << PI << endl << endl;

    cout << setprecision(3);
    cout << "Using precision 3:\n";
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << PI * radius * radius * height << endl;
    cout << "PI: " << PI << endl << endl;

    cout << setprecision(4);
    cout << "Using precision 4:\n";
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << PI * radius * radius * height << endl;
    cout << "PI: " << PI << endl << endl;

    cout << "Mixed precision values:\n";
    cout << setprecision(3) << radius << ", "
         << setprecision(2) << height << ", "
         << setprecision(5) << PI << endl;

    return 0;
}
