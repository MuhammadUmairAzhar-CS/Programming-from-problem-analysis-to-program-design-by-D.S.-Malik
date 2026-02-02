#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double listPrice, dealerCost, minimumOffer;
    
    cout << "Enter the list price of the car: $";
    cin >> listPrice;
    
    dealerCost = listPrice * 0.85;
    minimumOffer = dealerCost + 500;
    
    cout << fixed << setprecision(2);
    cout << "Dealer's minimum acceptable offer: $" << minimumOffer << endl;
    
    return 0;
}
