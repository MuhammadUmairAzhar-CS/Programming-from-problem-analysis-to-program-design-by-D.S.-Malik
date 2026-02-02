#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salePrice, stateSalesTax, citySalesTax, luxuryTax, salesTax, amountDue;
    bool isLuxury;
    
    cout << "Enter the selling price of the item: $";
    cin >> salePrice;
    cout << "Is this a luxury item? (1 for yes, 0 for no): ";
    cin >> isLuxury;
    
    stateSalesTax = salePrice * 0.04;
    citySalesTax = salePrice * 0.015;
    
    luxuryTax = isLuxury ? salePrice * 0.1 : 0;
    
    salesTax = stateSalesTax + citySalesTax + luxuryTax;
    amountDue = salePrice + salesTax;
    
    cout << fixed << setprecision(2);
    cout << "State sales tax: $" << stateSalesTax << endl;
    cout << "City sales tax: $" << citySalesTax << endl;
    cout << "Luxury tax: $" << luxuryTax << endl;
    cout << "Total sales tax: $" << salesTax << endl;
    cout << "Amount due: $" << amountDue << endl;
    
    return 0;
}
