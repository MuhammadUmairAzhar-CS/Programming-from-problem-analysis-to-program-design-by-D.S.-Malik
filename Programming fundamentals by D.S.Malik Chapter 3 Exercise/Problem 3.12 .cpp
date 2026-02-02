// 12. Cars Distance
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double speedA, speedB, hours, minutes;
    double totalTimeHours, distanceA, distanceB, distanceBetween;
    
    cout << "Enter speed of Car A (westbound mph): ";
    cin >> speedA;
    cout << "Enter speed of Car B (southbound mph): ";
    cin >> speedB;
    cout << "Enter elapsed time (hours): ";
    cin >> hours;
    cout << "Enter elapsed time (minutes): ";
    cin >> minutes;
    
    totalTimeHours = hours + minutes / 60.0;
    distanceA = speedA * totalTimeHours;
    distanceB = speedB * totalTimeHours;
    distanceBetween = sqrt(pow(distanceA, 2) + pow(distanceB, 2));
    
    cout << fixed << setprecision(2);
    cout << "Shortest distance between cars: " 
         << distanceBetween << " miles" << endl;
    
    return 0;
}
