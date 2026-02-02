#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double lawnArea, mowingCost, fertilizingApps, fertilizingCost, trees, treeCost, totalBill;
    
    cout << "Enter lawn area (sq yards): ";
    cin >> lawnArea;
    cout << "Enter number of fertilizing applications: ";
    cin >> fertilizingApps;
    cout << "Enter number of trees to plant: ";
    cin >> trees;
    
    mowingCost = (lawnArea / 5000.0) * 35.0;
    fertilizingCost = fertilizingApps * 30.0;
    treeCost = trees * 50.0;
    
    totalBill = mowingCost + fertilizingCost + treeCost;
    
    cout << fixed << setprecision(2);
    cout << "Mowing cost: $" << mowingCost << endl;
    cout << "Fertilizing cost: $" << fertilizingCost << endl;
    cout << "Tree planting cost: $" << treeCost << endl;
    cout << "Total bill: $" << totalBill << endl;
    
    return 0;
}
