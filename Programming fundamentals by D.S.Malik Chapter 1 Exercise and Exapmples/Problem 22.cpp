#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tuition = 25000.0;
    int units = 15, classUnits = 4, daysPerWeek = 3, weeks = 15;
    double totalClassHours, costPerHour;
    
    totalClassHours = daysPerWeek * weeks * 1.0;  // 1 hour per day
    costPerHour = (tuition / units) * classUnits / totalClassHours;
    
    cout << fixed << setprecision(2);
    cout << "Total math class hours: " << totalClassHours << endl;
    cout << "Cost per math class hour: $" << costPerHour << endl;
    
    return 0;
}
