#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numItems, itemPrice;
    double totalCost = 0, shipping = 0, finalBill;
    
    cout << "Enter number of items ordered (max 5): ";
    cin >> numItems;
    
    for (int i = 1; i <= numItems && i <= 5; i++) {
        cout << "Enter price of item " << i << ": $";
        cin >> itemPrice;
        totalCost += itemPrice;
    }
    
    if (totalCost >= 200)
        shipping = 0;
    else
        shipping = numItems * 10.0;
    
    finalBill = totalCost + shipping;
    
    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << totalCost << endl;
    cout << "Shipping & handling: $" << shipping << endl;
    cout << "Total billing amount: $" << finalBill << endl;
    
    return 0;
}
