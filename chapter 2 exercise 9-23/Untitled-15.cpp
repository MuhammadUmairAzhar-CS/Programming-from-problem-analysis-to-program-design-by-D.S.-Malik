#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double SERVICE_CHARGE_RATE = 0.015; // 1.5% service charge
    
    int sharesSold;
    double purchasePrice, sellingPrice;
    
    // Get user input
    cout << "Enter the number of shares sold: ";
    cin >> sharesSold;
    
    cout << "Enter the purchase price per share: $";
    cin >> purchasePrice;
    
    cout << "Enter the selling price per share: $";
    cin >> sellingPrice;
    
    // Calculations
    double amountInvested = sharesSold * purchasePrice;
    double totalReceived = sharesSold * sellingPrice;
    
    // Service charges (1.5% on both buy and sell transactions)
    double buyServiceCharge = amountInvested * SERVICE_CHARGE_RATE;
    double sellServiceCharge = totalReceived * SERVICE_CHARGE_RATE;
    double totalServiceCharges = buyServiceCharge + sellServiceCharge;
    
    // Net amount after all costs
    double netAmount = totalReceived - amountInvested - totalServiceCharges;
    
    // Amount received after selling (minus sell service charge only)
    double amountAfterSelling = totalReceived - sellServiceCharge;
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "\n" << string(60, '=') << endl;
    cout << "STOCK INVESTMENT ANALYSIS" << endl;
    cout << string(60, '=') << endl;
    
    cout << "\nINVESTMENT DETAILS:" << endl;
    cout << "Number of shares: " << sharesSold << endl;
    cout << "Purchase price per share: $" << purchasePrice << endl;
    cout << "Selling price per share: $" << sellingPrice << endl;
    cout << "Amount invested: $" << amountInvested << endl;
    cout << "Total received from sale: $" << totalReceived << endl;
    
    cout << "\nSERVICE CHARGES:" << endl;
    cout << "Buy service charge (1.5%): $" << buyServiceCharge << endl;
    cout << "Sell service charge (1.5%): $" << sellServiceCharge << endl;
    cout << "Total service charges: $" << totalServiceCharges << endl;
    
    cout << "\nFINANCIAL SUMMARY:" << endl;
    cout << "Amount received after selling: $" << amountAfterSelling << endl;
    
    if (netAmount >= 0) {
        cout << "Amount gained: $" << netAmount << endl;
    } else {
        cout << "Amount lost: $" << -netAmount << endl;
    }
    
    cout << string(60, '=') << endl;
    
    return 0;
}