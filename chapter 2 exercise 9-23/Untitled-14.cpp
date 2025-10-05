#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double POUNDS_PER_TON = 2205.0;  // 1 metric ton = 2205 pounds
    
    double bagCapacity;
    
    // Get user input
    cout << "Enter the capacity of one bag (in pounds): ";
    cin >> bagCapacity;
    
    // Calculate number of bags needed
    double bagsNeeded = POUNDS_PER_TON / bagCapacity;
    
    // Round up to the nearest whole bag since we can't have partial bags
    int fullBagsNeeded = ceil(bagsNeeded);
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "\n" << string(50, '=') << endl;
    cout << "RICE BAG CALCULATION" << endl;
    cout << string(50, '=') << endl;
    
    cout << "One metric ton = " << POUNDS_PER_TON << " pounds" << endl;
    cout << "Capacity per bag: " << bagCapacity << " pounds" << endl;
    cout << "Exact bags needed: " << bagsNeeded << " bags" << endl;
    cout << "Full bags needed: " << fullBagsNeeded << " bags" << endl;
    cout << string(50, '=') << endl;
    
    return 0;
}