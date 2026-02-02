#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;
    
    cout << "Enter coefficients a, b, c for ax² + bx + c = 0:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "a cannot be zero for quadratic equation." << endl;
        return 0;
    }
    
    discriminant = pow(b, 2) - 4 * a * c;
    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << fixed << setprecision(2);
        cout << "Two real roots:" << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << fixed << setprecision(2);
        cout << "One real root: " << root1 << endl;
    } else {
        cout << "No real roots (discriminant < 0)." << endl;
    }
    
    return 0;
}
