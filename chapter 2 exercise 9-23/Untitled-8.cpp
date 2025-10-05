#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Constants
    const double CARTON_CAPACITY = 3.78;
    
    // Variables for user input
    double totalMilkProduced;
    double costPerLiter;
    double profitPerCarton;
    
    // Prompt user for inputs
    cout << "Enter the total amount of milk produced in the morning (liters): ";
    cin >> totalMilkProduced;
    
    cout << "Enter the cost of producing one liter of milk: $";
    cin >> costPerLiter;
    
    cout << "Enter the profit on each carton of milk: $";
    cin >> profitPerCarton;
    
    // Calculations
    double numberOfCartons = totalMilkProduced / CARTON_CAPACITY;
    int roundedCartons = round(numberOfCartons);
    double totalCost = totalMilkProduced * costPerLiter;
    double totalProfit = roundedCartons * profitPerCarton;
    
    // Output results
    cout << fixed << setprecision(2);
    cout << "\n--- Milk Production Report ---" << endl;
    cout << "Total milk produced: " << totalMilkProduced << " liters" << endl;
    cout << "Number of milk cartons needed: " << roundedCartons << " cartons" << endl;
    cout << "Cost of producing milk: $" << totalCost << endl;
    cout << "Profit for producing milk: $" << totalProfit << endl;
    
    return 0;
}