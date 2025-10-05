#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double fixedCommission, commissionPercent, purchasingCost;
    double minAddAmount, maxAddAmount;
    
    // Get user input
    cout << "Enter the fixed commission amount: $";
    cin >> fixedCommission;
    
    cout << "Enter the commission percentage (as decimal, e.g., 0.30 for 30%): ";
    cin >> commissionPercent;
    
    cout << "Enter the purchasing cost of the car: $";
    cin >> purchasingCost;
    
    cout << "Enter the minimum amount to add to purchasing cost: $";
    cin >> minAddAmount;
    
    cout << "Enter the maximum amount to add to purchasing cost: $";
    cin >> maxAddAmount;
    
    // Calculate minimum and maximum selling prices
    double minSellingPrice = purchasingCost + minAddAmount;
    double maxSellingPrice = purchasingCost + maxAddAmount;
    
    // Calculate commission range
    // Commission = fixed amount + percentage of (selling price - purchasing cost)
    double minCommission = fixedCommission + (commissionPercent * (minSellingPrice - purchasingCost));
    double maxCommission = fixedCommission + (commissionPercent * (maxSellingPrice - purchasingCost));
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "\n" << string(60, '=') << endl;
    cout << "CAR SALES COMMISSION ANALYSIS" << endl;
    cout << string(60, '=') << endl;
    
    cout << "\nSELLING PRICE RANGE:" << endl;
    cout << "Minimum selling price: $" << minSellingPrice << endl;
    cout << "Maximum selling price: $" << maxSellingPrice << endl;
    
    cout << "\nCOMMISSION RANGE:" << endl;
    cout << "Minimum commission: $" << minCommission << endl;
    cout << "Maximum commission: $" << maxCommission << endl;
    
    cout << "\nDETAILS:" << endl;
    cout << "Fixed commission: $" << fixedCommission << endl;
    cout << "Commission percentage: " << (commissionPercent * 100) << "%" << endl;
    cout << "Car purchasing cost: $" << purchasingCost << endl;
    cout << string(60, '=') << endl;
    
    return 0;
}