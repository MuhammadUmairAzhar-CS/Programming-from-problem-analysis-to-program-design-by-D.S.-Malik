#include <iostream>
using namespace std;

int main() {
    int totalUnits;            // total number of apartments
    double baseRent;           // rent when all units are occupied
    double rentIncrease;       // increase in rent that causes one vacancy
    double maintenanceCost;    // maintenance cost per rented unit

    cout << "Enter the total number of units: ";
    cin >> totalUnits;

    cout << "Enter the rent to occupy all the units: ";
    cin >> baseRent;

    cout << "Enter the increase in rent that results in one vacant unit: ";
    cin >> rentIncrease;

    cout << "Enter the maintenance cost per rented unit: ";
    cin >> maintenanceCost;

    int occupiedUnits;
    double rent, income, cost, profit;
    double maxProfit = 0;
    double bestRent = 0;
    int bestUnits = 0;

    // Try different rent increases until all units are vacant
    for (int vacantUnits = 0; vacantUnits <= totalUnits; vacantUnits++) {
        occupiedUnits = totalUnits - vacantUnits;
        rent = baseRent + (vacantUnits * rentIncrease);
        income = rent * occupiedUnits;
        cost = maintenanceCost * occupiedUnits;
        profit = income - cost;

        if (profit > maxProfit) {
            maxProfit = profit;
            bestRent = rent;
            bestUnits = occupiedUnits;
        }
    }

    cout << "\nMaximum profit is $" << maxProfit << endl;
    cout << "Best rent to charge is $" << bestRent << endl;
    cout << "Number of units to rent: " << bestUnits << endl;

    return 0;
}
