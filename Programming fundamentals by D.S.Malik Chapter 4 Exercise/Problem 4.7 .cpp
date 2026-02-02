// 7. Quadratic Equation Roots
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant;
    double root1, root2;
    
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    
    discriminant = pow(b, 2) - 4 * a * c;
    
    if (discriminant > 0)
    {
        cout << "Two real roots" << endl;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0)
        cout << "One real root" << endl;
    else
        cout << "Two complex roots" << endl;
    
    return 0;
}
