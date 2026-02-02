// 3. Weight Conversion
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weightKg, weightPounds;
    const double KG_TO_POUNDS = 2.2;
    
    cout << "Enter weight in kilograms: ";
    cin >> weightKg;
    
    weightPounds = weightKg * KG_TO_POUNDS;
    
    cout << fixed << setprecision(2);
    cout << "Weight in kilograms: " << weightKg << " kg" << endl;
    cout << "Weight in pounds: " << weightPounds << " lbs" << endl;
    
    return 0;
}
