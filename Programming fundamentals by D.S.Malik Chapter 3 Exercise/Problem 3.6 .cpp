// 6. Volume Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double mass, density, volume;
    
    cout << "Enter mass in grams: ";
    cin >> mass;
    cout << "Enter density in grams per cubic cm: ";
    cin >> density;
    
    volume = mass / density;
    
    cout << fixed << setprecision(2);
    cout << "Volume = " << volume << " cubic cm" << endl;
    
    return 0;
}
