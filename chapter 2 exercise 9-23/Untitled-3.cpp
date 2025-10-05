#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double tankCapacity;    // in gallons
    double milesPerGallon;  // MPG
    double drivingRange;    // in miles
    
    // Prompt user for fuel tank capacity
    cout << "Enter the fuel tank capacity (in gallons): ";
    cin >> tankCapacity;
    
    // Prompt user for fuel efficiency
    cout << "Enter the fuel efficiency (miles per gallon): ";
    cin >> milesPerGallon;
    
    // Calculate driving range
    drivingRange = tankCapacity * milesPerGallon;
    
    // Display the result
    cout << fixed << setprecision(2);
    cout << "\nFuel tank capacity: " << tankCapacity << " gallons" << endl;
    cout << "Fuel efficiency: " << milesPerGallon << " MPG" << endl;
    cout << "Driving range: " << drivingRange << " miles" << endl;
    
    return 0;
}