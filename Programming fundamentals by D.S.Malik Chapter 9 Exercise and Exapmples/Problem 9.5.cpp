// PROGRAM 5: Johnny's Restaurant - Multiple Items Selection
// C++ Program for restaurant billing allowing multiple quantities

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct menuItemType {
    string itemName;
    double price;
};

void getData(menuItemType menuList[]);
void showMenu(const menuItemType menuList[]);
void printCheck(menuItemType menuList[]);

int main() {
    menuItemType menuList[8];
    
    getData(menuList);
    showMenu(menuList);
    printCheck(menuList);
    
    return 0;
}

void getData(menuItemType menuList[]) {
    menuList[0] = {"Plain Egg", 1.45};
    menuList[1] = {"Bacon and Egg", 2.45};
    menuList[2] = {"Muffin", 0.99};
    menuList[3] = {"French Toast", 1.99};
    menuList[4] = {"Fruit Basket", 2.49};
    menuList[5] = {"Cereal", 0.69};
    menuList[6] = {"Coffee", 0.50};
    menuList[7] = {"Tea", 0.75};
}

void showMenu(const menuItemType menuList[]) {
    cout << "Welcome to Johnny's Restaurant" << endl << endl;
    cout << "Menu Items:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << (i + 1) << ". " << left << setw(15) << menuList[i].itemName 
             << "$" << right << setw(4) << fixed << setprecision(2) << menuList[i].price << endl;
    }
    cout << endl << "Enter quantity for each item (0 if none):" << endl;
}

void printCheck(menuItemType menuList[]) {
    int quantity;
    double subtotal = 0.0;
    
    cout << "\nWelcome to Johnny's Restaurant" << endl << endl;
    
    for (int i = 0; i < 8; i++) {
        cout << "Quantity for " << menuList[i].itemName << ": ";
        cin >> quantity;
        
        if (quantity > 0) {
            double itemTotal = quantity * menuList[i].price;
            subtotal += itemTotal;
            cout << quantity << " " << left << setw(15) << menuList[i].itemName 
                 << "$" << right << setw(6) << fixed << setprecision(2) << itemTotal << endl;
        }
    }
    
    double tax = subtotal * 0.05;
    double total = subtotal + tax;
    
    cout << "Tax $" << setw(6) << tax << endl;
    cout << "Amount Due $" << total << endl;
}

