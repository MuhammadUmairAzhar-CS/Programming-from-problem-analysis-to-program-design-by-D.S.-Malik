#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double originalPrice;
    double markupPercentage;
    double salesTaxRate;
    double sellingPrice;
    double salesTax;
    double finalPrice;
    
    // Prompt user for input values
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;
    
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;
    
    cout << "Enter the sales tax rate (%): ";
    cin >> salesTaxRate;
    
    // Calculate selling price, sales tax, and final price
    sellingPrice = originalPrice * (1 + markupPercentage / 100);
    salesTax = sellingPrice * (salesTaxRate / 100);
    finalPrice = sellingPrice + salesTax;
    
    // Display the results
    cout << fixed << setprecision(2);
    cout << "\n=== PRICE BREAKDOWN ===" << endl;
    cout << "Original price: $" << originalPrice << endl;
    cout << "Markup percentage: " << markupPercentage << "%" << endl;
    cout << "Store's selling price: $" << sellingPrice << endl;
    cout << "Sales tax rate: " << salesTaxRate << "%" << endl;
    cout << "Sales tax: $" << salesTax << endl;
    cout << "Final price: $" << finalPrice << endl;
    
    return 0;
}