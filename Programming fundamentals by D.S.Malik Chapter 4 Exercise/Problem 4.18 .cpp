// 18. Body Fat Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char gender;
    double bodyWeight, wrist, waist, hip, forearm;
    
    cout << "Enter gender (m/f): ";
    cin >> gender;
    cout << "Enter body weight (lbs): ";
    cin >> bodyWeight;
    cout << "Enter wrist measurement (inches): ";
    cin >> wrist;
    cout << "Enter waist measurement (inches): ";
    cin >> waist;
    
    double bodyFat, bodyFatPercent;
    
    if (gender == 'f' || gender == 'F')
    {
        cout << "Enter hip measurement (inches): ";
        cin >> hip;
        cout << "Enter forearm measurement (inches): ";
        cin >> forearm;
        
        double A1 = bodyWeight * 0.732 + 8.987;
        double A2 = wrist / 3.140;
        double A3 = waist * 0.157;
        double A4 = hip * 0.249;
        double A5 = forearm * 0.434;
        double B = A1 - A2 - A3 - A4 + A5;
        bodyFat = bodyWeight - B;
    }
    else
    {
        double A1 = bodyWeight * 1.082 + 94.42;
        double A2 = wrist * 4.15;
        double B = A1 - A2;
        bodyFat = bodyWeight - B;
    }
    
    bodyFatPercent = bodyFat * 100 / bodyWeight;
    
    cout << fixed << setprecision(2);
    cout << "Body fat: " << bodyFatPercent << "%" << endl;
    
    return 0;
}
