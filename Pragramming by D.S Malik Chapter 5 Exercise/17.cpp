#include <iostream>
using namespace std;

int main() {
    int numItems = 0;        
    double price = 0.0;      
    double totalCost = 0.0;  
    double shipping = 0.0;   
    char choice;             

    cout << "Welcome to Jason's Online Store!" << endl;

    do {
        cout << "\nEnter the price of the item: $";
        cin >> price;
        totalCost += price;
        numItems++;

        cout << "Do you want to buy another item? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    if (totalCost >= 200)
        shipping = 0.0;
    else
        shipping = 10.0 * numItems;

    double totalBill = totalCost + shipping;

    cout << "\n---------- BILL SUMMARY ----------" << endl;
    cout << "Number of items: " << numItems << endl;
    cout << "Total cost of items: $" << totalCost << endl;
    cout << "Shipping and handling: $" << shipping << endl;
    cout << "Total billing amount: $" << totalBill << endl;
    cout << "----------------------------------" << endl;

    cout << "\nThank you for shopping with us!" << endl;

    return 0;
}
