#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double CARTON_CAPACITY = 3.78;  // liters
    const double COST_PER_LITER = 0.38;   // dollars
    const double PROFIT_PER_CARTON = 0.27; // dollars
    
    double milkProduced;      // total milk produced in liters
    int cartonsNeeded;        // number of cartons needed
    double productionCost;    // total cost of producing milk
    double totalProfit;       // total profit from milk sales
    
    // Prompt user for total milk produced
    cout << "Enter the total amount of milk produced in the morning (liters): ";
    cin >> milkProduced;
    
    // Calculate number of cartons needed (rounded to nearest integer)
    cartonsNeeded = round(milkProduced / CARTON_CAPACITY);
    
    // Calculate production cost
    productionCost = milkProduced * COST_PER_LITER;
    
    // Calculate total profit
    totalProfit = cartonsNeeded * PROFIT_PER_CARTON;
    
    // Display the results
    cout << fixed << setprecision(2);
    cout << "\n=== DAIRY FARM PRODUCTION REPORT ===" << endl;
    cout << "Milk produced: " << milkProduced << " liters" << endl;
    cout << "Carton capacity: " << CARTON_CAPACITY << " liters" << endl;
    cout << "Cost per liter: $" << COST_PER_LITER << endl;
    cout << "Profit per carton: $" << PROFIT_PER_CARTON << endl;
    cout << "------------------------------------" << endl;
    cout << "Cartons needed: " << cartonsNeeded << endl;
    cout << "Production cost: $" << productionCost << endl;
    cout << "Total profit: $" << totalProfit << endl;
    
    return 0;
}